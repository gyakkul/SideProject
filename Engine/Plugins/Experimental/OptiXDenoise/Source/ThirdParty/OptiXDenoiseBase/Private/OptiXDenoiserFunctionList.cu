// Copyright Epic Games, Inc. All Rights Reserved.

#include <optix.h>
#include <cuda.h>

struct FFloatReadAccess
{
    inline FFloatReadAccess( const OptixImage2D& InImage )
        : Image( InImage )
        , PixelStrideInBytes( InImage.pixelStrideInBytes ){}

    inline __device__ float read( int x, int y, int c ) const
    {
    	return float( *(const float*)( Image.data + y * Image.rowStrideInBytes + x * PixelStrideInBytes + c * sizeof( float ) ) );
    }
    OptixImage2D Image;
    unsigned int PixelStrideInBytes;
};

struct FFloatWriteAccess
{
    inline FFloatWriteAccess( const OptixImage2D& InImage )
        : Image( InImage )
        , PixelStrideInBytes( InImage.pixelStrideInBytes ){}

    inline __device__ void write( int x, int y, int c, float value )
    {
        *(float*)( Image.data + y * Image.rowStrideInBytes + x * PixelStrideInBytes + c * sizeof( float ) ) = value;
    }
    OptixImage2D Image;
    unsigned int PixelStrideInBytes;
};

static __device__ inline float Dot(float3 A, float3 B)
{
	return A.x * B.x + A.y * B.y + A.z * B.z;
}

static __global__ void k_CopySurfaceToBuffer(
	CUsurfObject Surface,
	FFloatWriteAccess Result, 
	bool IsNormalInUEViewSpace,
	float PreExposure)
{
	const int x = blockIdx.x * blockDim.x + threadIdx.x;
	const int y = blockIdx.y * blockDim.y + threadIdx.y;

	if (x >= Result.Image.width || y >= Result.Image.height)
		return;
	
	unsigned int BytesPerPixel = 4 * sizeof(float);
	float4 Data = make_float4(1.0, 0.0,0.0, 1.0);

	surf3Dread(&Data, Surface, x * BytesPerPixel, y, 0);

	if (IsNormalInUEViewSpace)
	{
		// 1. Convert UE space (left handed, y up, view in z) to space used by Optix Denoiser (right handed, y up, view in -z)
		// 2. Normalize from [-1 1] to [0 1]
		const float3 UESpaceToOptiXSpaceMat0 = make_float3(1, 0, 0);
		const float3 UESpaceToOptiXSpaceMat1 = make_float3(0, 1, 0);
		const float3 UESpaceToOptiXSpaceMat2 = make_float3(0, 0,-1);

		float3 Normal = make_float3(Data.x, Data.y, Data.z);
		Data.x = 0.5 * Dot(UESpaceToOptiXSpaceMat0, Normal) + 0.5;
		Data.y = 0.5 * Dot(UESpaceToOptiXSpaceMat1, Normal) + 0.5;
		Data.z = 0.5 * Dot(UESpaceToOptiXSpaceMat2, Normal) + 0.5;
	}

	Result.write(x, y, 0, Data.x * PreExposure);
	Result.write(x, y, 1, Data.y * PreExposure);
	Result.write(x, y, 2, Data.z * PreExposure);
	Result.write(x, y, 3, Data.w * PreExposure);
}

static __global__ void k_CopyBufferToSurface(
	CUsurfObject Surface, 
	FFloatReadAccess Input)
{
	const int x = blockIdx.x * blockDim.x + threadIdx.x;
	const int y = blockIdx.y * blockDim.y + threadIdx.y;

	if (x >= Input.Image.width || y >= Input.Image.height)
		return;
	
	float4 Data;
	
	Data.x = Input.read(x, y, 0);
	Data.y = Input.read(x, y, 1);
	Data.z = Input.read(x, y, 2);
	Data.w = Input.read(x, y, 3);

	surf3Dwrite(Data, Surface, x * (4 * sizeof(float)), y, 0);
}

// k_convertRGBA & k_ConvertFlow adapted from optixOpticalFlow.cu for optical flow processing
static __global__ void k_ConvertRGBA(unsigned char* Result, FFloatReadAccess Input, int outStrideX)
{
	const int x = blockIdx.x * blockDim.x + threadIdx.x;
	const int y = blockIdx.y * blockDim.y + threadIdx.y;

	if (x >= Input.Image.width || y >= Input.Image.height)
		return;

	unsigned int r = __saturatef(Input.read(x, y, 0)) * 255.f;
	unsigned int g = __saturatef(Input.read(x, y, 1)) * 255.f;
	unsigned int b = __saturatef(Input.read(x, y, 2)) * 255.f;

	// OpticalFlow only supports 8bit channel if the input is of rgba.
	*((unsigned int*)&Result[y * outStrideX + x * 4]) = b | (g << 8) | (r << 16) | (255u << 24);
}

static __global__ void k_ConvertFlow(FFloatWriteAccess Result, const int16_t* Input, int inStrideX)
{
	const int x = blockIdx.x * blockDim.x + threadIdx.x;
	const int y = blockIdx.y * blockDim.y + threadIdx.y;

	if (x >= Result.Image.width || y >= Result.Image.height)
		return;

	// The input data is 2 fixed float (16 bit), with the last 5 bits as fraction.
	Result.write(x, y, 0, float(Input[y * inStrideX + x * 2 + 0]) * (1.f / 32.f));
	Result.write(x, y, 1, float(Input[y * inStrideX + x * 2 + 1]) * (1.f / 32.f));
}