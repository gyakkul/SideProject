// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryScript/PolyPathFunctions.h"
#include "GeometryScript/GeometryScriptTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolyPathFunctions() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESplineCoordinateSpace();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions();
	GEOMETRYSCRIPTINGCORE_API UClass* Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions_NoRegister();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis();
	GEOMETRYSCRIPTINGCORE_API UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSampleSpacing();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptPolyPath();
	GEOMETRYSCRIPTINGCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions();
	UPackage* Z_Construct_UPackage__Script_GeometryScriptingCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryScriptSampleSpacing;
	static UEnum* EGeometryScriptSampleSpacing_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptSampleSpacing.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryScriptSampleSpacing.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSampleSpacing, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("EGeometryScriptSampleSpacing"));
		}
		return Z_Registration_Info_UEnum_EGeometryScriptSampleSpacing.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UEnum* StaticEnum<EGeometryScriptSampleSpacing>()
	{
		return EGeometryScriptSampleSpacing_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSampleSpacing_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSampleSpacing_Statics::Enumerators[] = {
		{ "EGeometryScriptSampleSpacing::UniformDistance", (int64)EGeometryScriptSampleSpacing::UniformDistance },
		{ "EGeometryScriptSampleSpacing::UniformTime", (int64)EGeometryScriptSampleSpacing::UniformTime },
		{ "EGeometryScriptSampleSpacing::ErrorTolerance", (int64)EGeometryScriptSampleSpacing::ErrorTolerance },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSampleSpacing_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ErrorTolerance.Name", "EGeometryScriptSampleSpacing::ErrorTolerance" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
		{ "UniformDistance.Name", "EGeometryScriptSampleSpacing::UniformDistance" },
		{ "UniformTime.Name", "EGeometryScriptSampleSpacing::UniformTime" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSampleSpacing_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		"EGeometryScriptSampleSpacing",
		"EGeometryScriptSampleSpacing",
		Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSampleSpacing_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSampleSpacing_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSampleSpacing_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSampleSpacing_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSampleSpacing()
	{
		if (!Z_Registration_Info_UEnum_EGeometryScriptSampleSpacing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryScriptSampleSpacing.InnerSingleton, Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSampleSpacing_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryScriptSampleSpacing.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryScriptSplineSamplingOptions;
class UScriptStruct* FGeometryScriptSplineSamplingOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryScriptSplineSamplingOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryScriptSplineSamplingOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions, (UObject*)Z_Construct_UPackage__Script_GeometryScriptingCore(), TEXT("GeometryScriptSplineSamplingOptions"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryScriptSplineSamplingOptions.OuterSingleton;
}
template<> GEOMETRYSCRIPTINGCORE_API UScriptStruct* StaticStruct<FGeometryScriptSplineSamplingOptions>()
{
	return FGeometryScriptSplineSamplingOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorTolerance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ErrorTolerance;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SampleSpacing_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SampleSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoordinateSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CoordinateSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryScriptSplineSamplingOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_NumSamples_MetaData[] = {
		{ "Category", "Options" },
		{ "EditCondition", "SampleSpacing != EGeometryScriptSampleSpacing::ErrorTolerance" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_NumSamples = { "NumSamples", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSplineSamplingOptions, NumSamples), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_NumSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_NumSamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_ErrorTolerance_MetaData[] = {
		{ "Category", "Options" },
		{ "EditCondition", "SampleSpacing == EGeometryScriptSampleSpacing::ErrorTolerance" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_ErrorTolerance = { "ErrorTolerance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSplineSamplingOptions, ErrorTolerance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_ErrorTolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_ErrorTolerance_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_SampleSpacing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_SampleSpacing_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_SampleSpacing = { "SampleSpacing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSplineSamplingOptions, SampleSpacing), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptSampleSpacing, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_SampleSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_SampleSpacing_MetaData)) }; // 907521495
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_CoordinateSpace_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_CoordinateSpace = { "CoordinateSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryScriptSplineSamplingOptions, CoordinateSpace), Z_Construct_UEnum_Engine_ESplineCoordinateSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_CoordinateSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_CoordinateSpace_MetaData)) }; // 3922911668
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_NumSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_ErrorTolerance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_SampleSpacing_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_SampleSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewProp_CoordinateSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
		nullptr,
		&NewStructOps,
		"GeometryScriptSplineSamplingOptions",
		sizeof(FGeometryScriptSplineSamplingOptions),
		alignof(FGeometryScriptSplineSamplingOptions),
		Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryScriptSplineSamplingOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryScriptSplineSamplingOptions.InnerSingleton, Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryScriptSplineSamplingOptions.InnerSingleton;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execConv_ArrayOfVector2DToGeometryScriptPolyPath)
	{
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_PathVertices);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptPolyPath*)Z_Param__Result=UGeometryScriptLibrary_PolyPathFunctions::Conv_ArrayOfVector2DToGeometryScriptPolyPath(Z_Param_Out_PathVertices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execConv_ArrayToGeometryScriptPolyPath)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_PathVertices);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptPolyPath*)Z_Param__Result=UGeometryScriptLibrary_PolyPathFunctions::Conv_ArrayToGeometryScriptPolyPath(Z_Param_Out_PathVertices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execConv_GeometryScriptPolyPathToArrayOfVector2D)
	{
		P_GET_STRUCT(FGeometryScriptPolyPath,Z_Param_PolyPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector2D>*)Z_Param__Result=UGeometryScriptLibrary_PolyPathFunctions::Conv_GeometryScriptPolyPathToArrayOfVector2D(Z_Param_PolyPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execConv_GeometryScriptPolyPathToArray)
	{
		P_GET_STRUCT(FGeometryScriptPolyPath,Z_Param_PolyPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UGeometryScriptLibrary_PolyPathFunctions::Conv_GeometryScriptPolyPathToArray(Z_Param_PolyPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execConvertArrayOfVector2DToPolyPath)
	{
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_VertexArray);
		P_GET_STRUCT_REF(FGeometryScriptPolyPath,Z_Param_Out_PolyPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_PolyPathFunctions::ConvertArrayOfVector2DToPolyPath(Z_Param_Out_VertexArray,Z_Param_Out_PolyPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execConvertPolyPathToArrayOfVector2D)
	{
		P_GET_STRUCT(FGeometryScriptPolyPath,Z_Param_PolyPath);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_VertexArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_PolyPathFunctions::ConvertPolyPathToArrayOfVector2D(Z_Param_PolyPath,Z_Param_Out_VertexArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execConvertArrayToPolyPath)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_VertexArray);
		P_GET_STRUCT_REF(FGeometryScriptPolyPath,Z_Param_Out_PolyPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_PolyPathFunctions::ConvertArrayToPolyPath(Z_Param_Out_VertexArray,Z_Param_Out_PolyPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execConvertPolyPathToArray)
	{
		P_GET_STRUCT(FGeometryScriptPolyPath,Z_Param_PolyPath);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_VertexArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_PolyPathFunctions::ConvertPolyPathToArray(Z_Param_PolyPath,Z_Param_Out_VertexArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execSampleSplineToTransforms)
	{
		P_GET_OBJECT(USplineComponent,Z_Param_Spline);
		P_GET_TARRAY_REF(FTransform,Z_Param_Out_Frames);
		P_GET_TARRAY_REF(double,Z_Param_Out_FrameTimes);
		P_GET_STRUCT(FGeometryScriptSplineSamplingOptions,Z_Param_SamplingOptions);
		P_GET_STRUCT(FTransform,Z_Param_RelativeTransform);
		P_GET_UBOOL(Z_Param_bIncludeScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_PolyPathFunctions::SampleSplineToTransforms(Z_Param_Spline,Z_Param_Out_Frames,Z_Param_Out_FrameTimes,Z_Param_SamplingOptions,Z_Param_RelativeTransform,Z_Param_bIncludeScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execConvertSplineToPolyPath)
	{
		P_GET_OBJECT(USplineComponent,Z_Param_Spline);
		P_GET_STRUCT_REF(FGeometryScriptPolyPath,Z_Param_Out_PolyPath);
		P_GET_STRUCT(FGeometryScriptSplineSamplingOptions,Z_Param_SamplingOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGeometryScriptLibrary_PolyPathFunctions::ConvertSplineToPolyPath(Z_Param_Spline,Z_Param_Out_PolyPath,Z_Param_SamplingOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execCreateArcPath2D)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumPoints);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptPolyPath*)Z_Param__Result=UGeometryScriptLibrary_PolyPathFunctions::CreateArcPath2D(Z_Param_Center,Z_Param_Radius,Z_Param_NumPoints,Z_Param_StartAngle,Z_Param_EndAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execCreateCirclePath2D)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Center);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptPolyPath*)Z_Param__Result=UGeometryScriptLibrary_PolyPathFunctions::CreateCirclePath2D(Z_Param_Center,Z_Param_Radius,Z_Param_NumPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execCreateArcPath3D)
	{
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumPoints);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptPolyPath*)Z_Param__Result=UGeometryScriptLibrary_PolyPathFunctions::CreateArcPath3D(Z_Param_Transform,Z_Param_Radius,Z_Param_NumPoints,Z_Param_StartAngle,Z_Param_EndAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execCreateCirclePath3D)
	{
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptPolyPath*)Z_Param__Result=UGeometryScriptLibrary_PolyPathFunctions::CreateCirclePath3D(Z_Param_Transform,Z_Param_Radius,Z_Param_NumPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execFlattenTo2DOnAxis)
	{
		P_GET_STRUCT(FGeometryScriptPolyPath,Z_Param_PolyPath);
		P_GET_ENUM(EGeometryScriptAxis,Z_Param_DropAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGeometryScriptPolyPath*)Z_Param__Result=UGeometryScriptLibrary_PolyPathFunctions::FlattenTo2DOnAxis(Z_Param_PolyPath,EGeometryScriptAxis(Z_Param_DropAxis));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execGetNearestVertexIndex)
	{
		P_GET_STRUCT(FGeometryScriptPolyPath,Z_Param_PolyPath);
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_PolyPathFunctions::GetNearestVertexIndex(Z_Param_PolyPath,Z_Param_Point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execGetPolyPathArcLength)
	{
		P_GET_STRUCT(FGeometryScriptPolyPath,Z_Param_PolyPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathArcLength(Z_Param_PolyPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execGetPolyPathTangent)
	{
		P_GET_STRUCT(FGeometryScriptPolyPath,Z_Param_PolyPath);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathTangent(Z_Param_PolyPath,Z_Param_Index,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execGetPolyPathVertex)
	{
		P_GET_STRUCT(FGeometryScriptPolyPath,Z_Param_PolyPath);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL_REF(Z_Param_Out_bIsValidIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathVertex(Z_Param_PolyPath,Z_Param_Index,Z_Param_Out_bIsValidIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execGetPolyPathLastIndex)
	{
		P_GET_STRUCT(FGeometryScriptPolyPath,Z_Param_PolyPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathLastIndex(Z_Param_PolyPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGeometryScriptLibrary_PolyPathFunctions::execGetPolyPathNumVertices)
	{
		P_GET_STRUCT(FGeometryScriptPolyPath,Z_Param_PolyPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UGeometryScriptLibrary_PolyPathFunctions::GetPolyPathNumVertices(Z_Param_PolyPath);
		P_NATIVE_END;
	}
	void UGeometryScriptLibrary_PolyPathFunctions::StaticRegisterNativesUGeometryScriptLibrary_PolyPathFunctions()
	{
		UClass* Class = UGeometryScriptLibrary_PolyPathFunctions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_ArrayOfVector2DToGeometryScriptPolyPath", &UGeometryScriptLibrary_PolyPathFunctions::execConv_ArrayOfVector2DToGeometryScriptPolyPath },
			{ "Conv_ArrayToGeometryScriptPolyPath", &UGeometryScriptLibrary_PolyPathFunctions::execConv_ArrayToGeometryScriptPolyPath },
			{ "Conv_GeometryScriptPolyPathToArray", &UGeometryScriptLibrary_PolyPathFunctions::execConv_GeometryScriptPolyPathToArray },
			{ "Conv_GeometryScriptPolyPathToArrayOfVector2D", &UGeometryScriptLibrary_PolyPathFunctions::execConv_GeometryScriptPolyPathToArrayOfVector2D },
			{ "ConvertArrayOfVector2DToPolyPath", &UGeometryScriptLibrary_PolyPathFunctions::execConvertArrayOfVector2DToPolyPath },
			{ "ConvertArrayToPolyPath", &UGeometryScriptLibrary_PolyPathFunctions::execConvertArrayToPolyPath },
			{ "ConvertPolyPathToArray", &UGeometryScriptLibrary_PolyPathFunctions::execConvertPolyPathToArray },
			{ "ConvertPolyPathToArrayOfVector2D", &UGeometryScriptLibrary_PolyPathFunctions::execConvertPolyPathToArrayOfVector2D },
			{ "ConvertSplineToPolyPath", &UGeometryScriptLibrary_PolyPathFunctions::execConvertSplineToPolyPath },
			{ "CreateArcPath2D", &UGeometryScriptLibrary_PolyPathFunctions::execCreateArcPath2D },
			{ "CreateArcPath3D", &UGeometryScriptLibrary_PolyPathFunctions::execCreateArcPath3D },
			{ "CreateCirclePath2D", &UGeometryScriptLibrary_PolyPathFunctions::execCreateCirclePath2D },
			{ "CreateCirclePath3D", &UGeometryScriptLibrary_PolyPathFunctions::execCreateCirclePath3D },
			{ "FlattenTo2DOnAxis", &UGeometryScriptLibrary_PolyPathFunctions::execFlattenTo2DOnAxis },
			{ "GetNearestVertexIndex", &UGeometryScriptLibrary_PolyPathFunctions::execGetNearestVertexIndex },
			{ "GetPolyPathArcLength", &UGeometryScriptLibrary_PolyPathFunctions::execGetPolyPathArcLength },
			{ "GetPolyPathLastIndex", &UGeometryScriptLibrary_PolyPathFunctions::execGetPolyPathLastIndex },
			{ "GetPolyPathNumVertices", &UGeometryScriptLibrary_PolyPathFunctions::execGetPolyPathNumVertices },
			{ "GetPolyPathTangent", &UGeometryScriptLibrary_PolyPathFunctions::execGetPolyPathTangent },
			{ "GetPolyPathVertex", &UGeometryScriptLibrary_PolyPathFunctions::execGetPolyPathVertex },
			{ "SampleSplineToTransforms", &UGeometryScriptLibrary_PolyPathFunctions::execSampleSplineToTransforms },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventConv_ArrayOfVector2DToGeometryScriptPolyPath_Parms
		{
			TArray<FVector2D> PathVertices;
			FGeometryScriptPolyPath ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathVertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathVertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PathVertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Statics::NewProp_PathVertices_Inner = { "PathVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Statics::NewProp_PathVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Statics::NewProp_PathVertices = { "PathVertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventConv_ArrayOfVector2DToGeometryScriptPolyPath_Parms, PathVertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Statics::NewProp_PathVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Statics::NewProp_PathVertices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventConv_ArrayOfVector2DToGeometryScriptPolyPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(nullptr, 0) }; // 1006159731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Statics::NewProp_PathVertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Statics::NewProp_PathVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "GeometryScript|PolyPath" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Array Of Vector2D To PolyPath" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "Conv_ArrayOfVector2DToGeometryScriptPolyPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Statics::GeometryScriptLibrary_PolyPathFunctions_eventConv_ArrayOfVector2DToGeometryScriptPolyPath_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventConv_ArrayToGeometryScriptPolyPath_Parms
		{
			TArray<FVector> PathVertices;
			FGeometryScriptPolyPath ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PathVertices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PathVertices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PathVertices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Statics::NewProp_PathVertices_Inner = { "PathVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Statics::NewProp_PathVertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Statics::NewProp_PathVertices = { "PathVertices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventConv_ArrayToGeometryScriptPolyPath_Parms, PathVertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Statics::NewProp_PathVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Statics::NewProp_PathVertices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventConv_ArrayToGeometryScriptPolyPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(nullptr, 0) }; // 1006159731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Statics::NewProp_PathVertices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Statics::NewProp_PathVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "GeometryScript|PolyPath" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Array Of Vector To PolyPath" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "Conv_ArrayToGeometryScriptPolyPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Statics::GeometryScriptLibrary_PolyPathFunctions_eventConv_ArrayToGeometryScriptPolyPath_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventConv_GeometryScriptPolyPathToArray_Parms
		{
			FGeometryScriptPolyPath PolyPath;
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Statics::NewProp_PolyPath = { "PolyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventConv_GeometryScriptPolyPathToArray_Parms, PolyPath), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(nullptr, 0) }; // 1006159731
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventConv_GeometryScriptPolyPathToArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Statics::NewProp_PolyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "GeometryScript|PolyPath" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "PolyPath To Array Of Vector" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "Conv_GeometryScriptPolyPathToArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Statics::GeometryScriptLibrary_PolyPathFunctions_eventConv_GeometryScriptPolyPathToArray_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventConv_GeometryScriptPolyPathToArrayOfVector2D_Parms
		{
			FGeometryScriptPolyPath PolyPath;
			TArray<FVector2D> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Statics::NewProp_PolyPath = { "PolyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventConv_GeometryScriptPolyPathToArrayOfVector2D_Parms, PolyPath), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(nullptr, 0) }; // 1006159731
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventConv_GeometryScriptPolyPathToArrayOfVector2D_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Statics::NewProp_PolyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "GeometryScript|PolyPath" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "PolyPath To Array Of Vector2D" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "Conv_GeometryScriptPolyPathToArrayOfVector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Statics::GeometryScriptLibrary_PolyPathFunctions_eventConv_GeometryScriptPolyPathToArrayOfVector2D_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventConvertArrayOfVector2DToPolyPath_Parms
		{
			TArray<FVector2D> VertexArray;
			FGeometryScriptPolyPath PolyPath;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Statics::NewProp_VertexArray_Inner = { "VertexArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Statics::NewProp_VertexArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Statics::NewProp_VertexArray = { "VertexArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventConvertArrayOfVector2DToPolyPath_Parms, VertexArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Statics::NewProp_VertexArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Statics::NewProp_VertexArray_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Statics::NewProp_PolyPath = { "PolyPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventConvertArrayOfVector2DToPolyPath_Parms, PolyPath), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(nullptr, 0) }; // 1006159731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Statics::NewProp_VertexArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Statics::NewProp_VertexArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Statics::NewProp_PolyPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyPath" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "ConvertArrayOfVector2DToPolyPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Statics::GeometryScriptLibrary_PolyPathFunctions_eventConvertArrayOfVector2DToPolyPath_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventConvertArrayToPolyPath_Parms
		{
			TArray<FVector> VertexArray;
			FGeometryScriptPolyPath PolyPath;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexArray;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Statics::NewProp_VertexArray_Inner = { "VertexArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Statics::NewProp_VertexArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Statics::NewProp_VertexArray = { "VertexArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventConvertArrayToPolyPath_Parms, VertexArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Statics::NewProp_VertexArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Statics::NewProp_VertexArray_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Statics::NewProp_PolyPath = { "PolyPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventConvertArrayToPolyPath_Parms, PolyPath), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(nullptr, 0) }; // 1006159731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Statics::NewProp_VertexArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Statics::NewProp_VertexArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Statics::NewProp_PolyPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyPath" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "ConvertArrayToPolyPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Statics::GeometryScriptLibrary_PolyPathFunctions_eventConvertArrayToPolyPath_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventConvertPolyPathToArray_Parms
		{
			FGeometryScriptPolyPath PolyPath;
			TArray<FVector> VertexArray;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Statics::NewProp_PolyPath = { "PolyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventConvertPolyPathToArray_Parms, PolyPath), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(nullptr, 0) }; // 1006159731
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Statics::NewProp_VertexArray_Inner = { "VertexArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Statics::NewProp_VertexArray = { "VertexArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventConvertPolyPathToArray_Parms, VertexArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Statics::NewProp_PolyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Statics::NewProp_VertexArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Statics::NewProp_VertexArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyPath" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "ConvertPolyPathToArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Statics::GeometryScriptLibrary_PolyPathFunctions_eventConvertPolyPathToArray_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventConvertPolyPathToArrayOfVector2D_Parms
		{
			FGeometryScriptPolyPath PolyPath;
			TArray<FVector2D> VertexArray;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexArray_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexArray;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Statics::NewProp_PolyPath = { "PolyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventConvertPolyPathToArrayOfVector2D_Parms, PolyPath), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(nullptr, 0) }; // 1006159731
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Statics::NewProp_VertexArray_Inner = { "VertexArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Statics::NewProp_VertexArray = { "VertexArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventConvertPolyPathToArrayOfVector2D_Parms, VertexArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Statics::NewProp_PolyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Statics::NewProp_VertexArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Statics::NewProp_VertexArray,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyPath" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "ConvertPolyPathToArrayOfVector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Statics::GeometryScriptLibrary_PolyPathFunctions_eventConvertPolyPathToArrayOfVector2D_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventConvertSplineToPolyPath_Parms
		{
			const USplineComponent* Spline;
			FGeometryScriptPolyPath PolyPath;
			FGeometryScriptSplineSamplingOptions SamplingOptions;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventConvertSplineToPolyPath_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Statics::NewProp_Spline_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Statics::NewProp_PolyPath = { "PolyPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventConvertSplineToPolyPath_Parms, PolyPath), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(nullptr, 0) }; // 1006159731
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Statics::NewProp_SamplingOptions = { "SamplingOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventConvertSplineToPolyPath_Parms, SamplingOptions), Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions, METADATA_PARAMS(nullptr, 0) }; // 3791310616
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Statics::NewProp_Spline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Statics::NewProp_PolyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Statics::NewProp_SamplingOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyPath" },
		{ "Comment", "/**\n\x09 * Sample positions from a USplineComponent into a PolyPath, based on the given SamplingOptions\n\x09 */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
		{ "ToolTip", "Sample positions from a USplineComponent into a PolyPath, based on the given SamplingOptions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "ConvertSplineToPolyPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Statics::GeometryScriptLibrary_PolyPathFunctions_eventConvertSplineToPolyPath_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventCreateArcPath2D_Parms
		{
			FVector2D Center;
			float Radius;
			int32 NumPoints;
			float StartAngle;
			float EndAngle;
			FGeometryScriptPolyPath ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumPoints;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateArcPath2D_Parms, Center), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateArcPath2D_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateArcPath2D_Parms, NumPoints), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::NewProp_StartAngle = { "StartAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateArcPath2D_Parms, StartAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::NewProp_EndAngle = { "EndAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateArcPath2D_Parms, EndAngle), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Poly Path" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateArcPath2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::NewProp_ReturnValue_MetaData)) }; // 1006159731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::NewProp_NumPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::NewProp_StartAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::NewProp_EndAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyPath" },
		{ "Comment", "/**\n\x09 * Create an open arc on the XY plane around the given Center.\n\x09 * As it is an open path, the end vertex exactly hits the target EndAngle (so will be positioned on the start vertex if the end aligns to the start)\n\x09 */" },
		{ "CPP_Default_Center", "(X=0.000,Y=0.000)" },
		{ "CPP_Default_EndAngle", "90.000000" },
		{ "CPP_Default_NumPoints", "10" },
		{ "CPP_Default_Radius", "10.000000" },
		{ "CPP_Default_StartAngle", "0.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
		{ "ToolTip", "Create an open arc on the XY plane around the given Center.\nAs it is an open path, the end vertex exactly hits the target EndAngle (so will be positioned on the start vertex if the end aligns to the start)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "CreateArcPath2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::GeometryScriptLibrary_PolyPathFunctions_eventCreateArcPath2D_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventCreateArcPath3D_Parms
		{
			FTransform Transform;
			float Radius;
			int32 NumPoints;
			float StartAngle;
			float EndAngle;
			FGeometryScriptPolyPath ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumPoints;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateArcPath3D_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateArcPath3D_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateArcPath3D_Parms, NumPoints), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::NewProp_StartAngle = { "StartAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateArcPath3D_Parms, StartAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::NewProp_EndAngle = { "EndAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateArcPath3D_Parms, EndAngle), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Poly Path" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateArcPath3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::NewProp_ReturnValue_MetaData)) }; // 1006159731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::NewProp_NumPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::NewProp_StartAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::NewProp_EndAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyPath" },
		{ "Comment", "/**\n\x09 * Create an open arc around the origin on the XY plane, then transformed by Transform.\n\x09 * As it is an open path, the end vertex exactly hits the target EndAngle (so will be positioned on the start vertex if the end aligns to the start)\n\x09 */" },
		{ "CPP_Default_EndAngle", "90.000000" },
		{ "CPP_Default_NumPoints", "10" },
		{ "CPP_Default_Radius", "10.000000" },
		{ "CPP_Default_StartAngle", "0.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
		{ "ToolTip", "Create an open arc around the origin on the XY plane, then transformed by Transform.\nAs it is an open path, the end vertex exactly hits the target EndAngle (so will be positioned on the start vertex if the end aligns to the start)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "CreateArcPath3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::GeometryScriptLibrary_PolyPathFunctions_eventCreateArcPath3D_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventCreateCirclePath2D_Parms
		{
			FVector2D Center;
			float Radius;
			int32 NumPoints;
			FGeometryScriptPolyPath ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateCirclePath2D_Parms, Center), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateCirclePath2D_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateCirclePath2D_Parms, NumPoints), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Poly Path" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateCirclePath2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::NewProp_ReturnValue_MetaData)) }; // 1006159731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::NewProp_NumPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyPath" },
		{ "Comment", "/**\n\x09 * Create a closed circle on the XY plane around the given Center.\n\x09 * By our convention for closed paths, the end vertex is *not* a duplicate of the start vertex.\n\x09 */" },
		{ "CPP_Default_Center", "(X=0.000,Y=0.000)" },
		{ "CPP_Default_NumPoints", "10" },
		{ "CPP_Default_Radius", "10.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
		{ "ToolTip", "Create a closed circle on the XY plane around the given Center.\nBy our convention for closed paths, the end vertex is *not* a duplicate of the start vertex." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "CreateCirclePath2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::GeometryScriptLibrary_PolyPathFunctions_eventCreateCirclePath2D_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventCreateCirclePath3D_Parms
		{
			FTransform Transform;
			float Radius;
			int32 NumPoints;
			FGeometryScriptPolyPath ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateCirclePath3D_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateCirclePath3D_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateCirclePath3D_Parms, NumPoints), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Poly Path" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventCreateCirclePath3D_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::NewProp_ReturnValue_MetaData)) }; // 1006159731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::NewProp_NumPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyPath" },
		{ "Comment", "/**\n\x09 * Create a closed circle around the origin on the XY plane, then transformed by Transform.\n\x09 * By our convention for closed paths, the end vertex is *not* a duplicate of the start vertex.\n\x09 */" },
		{ "CPP_Default_NumPoints", "10" },
		{ "CPP_Default_Radius", "10.000000" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
		{ "ToolTip", "Create a closed circle around the origin on the XY plane, then transformed by Transform.\nBy our convention for closed paths, the end vertex is *not* a duplicate of the start vertex." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "CreateCirclePath3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::GeometryScriptLibrary_PolyPathFunctions_eventCreateCirclePath3D_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventFlattenTo2DOnAxis_Parms
		{
			FGeometryScriptPolyPath PolyPath;
			EGeometryScriptAxis DropAxis;
			FGeometryScriptPolyPath ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DropAxis_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DropAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::NewProp_PolyPath = { "PolyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventFlattenTo2DOnAxis_Parms, PolyPath), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(nullptr, 0) }; // 1006159731
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::NewProp_DropAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::NewProp_DropAxis = { "DropAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventFlattenTo2DOnAxis_Parms, DropAxis), Z_Construct_UEnum_GeometryScriptingCore_EGeometryScriptAxis, METADATA_PARAMS(nullptr, 0) }; // 1190487509
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Poly Path" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventFlattenTo2DOnAxis_Parms, ReturnValue), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::NewProp_ReturnValue_MetaData)) }; // 1006159731
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::NewProp_PolyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::NewProp_DropAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::NewProp_DropAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyPath" },
		{ "Comment", "/** Create a 2D, flattened copy of the path by dropping the given axis, and using the other two coordinates as the new X, Y coordinates. */" },
		{ "CPP_Default_DropAxis", "Z" },
		{ "DisplayName", "Flatten To 2D On Axis" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Create a 2D, flattened copy of the path by dropping the given axis, and using the other two coordinates as the new X, Y coordinates." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "FlattenTo2DOnAxis", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::GeometryScriptLibrary_PolyPathFunctions_eventFlattenTo2DOnAxis_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventGetNearestVertexIndex_Parms
		{
			FGeometryScriptPolyPath PolyPath;
			FVector Point;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyPath;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Statics::NewProp_PolyPath = { "PolyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventGetNearestVertexIndex_Parms, PolyPath), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(nullptr, 0) }; // 1006159731
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventGetNearestVertexIndex_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventGetNearestVertexIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Statics::NewProp_PolyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyPath" },
		{ "Comment", "/** Find the index of the vertex closest to a given point.  Returns -1 if path has no vertices. */" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Find the index of the vertex closest to a given point.  Returns -1 if path has no vertices." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "GetNearestVertexIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Statics::GeometryScriptLibrary_PolyPathFunctions_eventGetNearestVertexIndex_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathArcLength_Parms
		{
			FGeometryScriptPolyPath PolyPath;
			double ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyPath;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Statics::NewProp_PolyPath = { "PolyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathArcLength_Parms, PolyPath), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(nullptr, 0) }; // 1006159731
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathArcLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Statics::NewProp_PolyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyPath" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "GetPolyPathArcLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Statics::GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathArcLength_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathLastIndex_Parms
		{
			FGeometryScriptPolyPath PolyPath;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyPath;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Statics::NewProp_PolyPath = { "PolyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathLastIndex_Parms, PolyPath), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(nullptr, 0) }; // 1006159731
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathLastIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Statics::NewProp_PolyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyPath" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "GetPolyPathLastIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Statics::GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathLastIndex_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathNumVertices_Parms
		{
			FGeometryScriptPolyPath PolyPath;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyPath;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Statics::NewProp_PolyPath = { "PolyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathNumVertices_Parms, PolyPath), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(nullptr, 0) }; // 1006159731
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathNumVertices_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Statics::NewProp_PolyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyPath" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "GetPolyPathNumVertices", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Statics::GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathNumVertices_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathTangent_Parms
		{
			FGeometryScriptPolyPath PolyPath;
			int32 Index;
			bool bIsValidIndex;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyPath;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics::NewProp_PolyPath = { "PolyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathTangent_Parms, PolyPath), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(nullptr, 0) }; // 1006159731
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathTangent_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathTangent_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathTangent_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathTangent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics::NewProp_PolyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics::NewProp_bIsValidIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyPath" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "GetPolyPathTangent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics::GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathTangent_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathVertex_Parms
		{
			FGeometryScriptPolyPath PolyPath;
			int32 Index;
			bool bIsValidIndex;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PolyPath;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static void NewProp_bIsValidIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics::NewProp_PolyPath = { "PolyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathVertex_Parms, PolyPath), Z_Construct_UScriptStruct_FGeometryScriptPolyPath, METADATA_PARAMS(nullptr, 0) }; // 1006159731
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathVertex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics::NewProp_bIsValidIndex_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathVertex_Parms*)Obj)->bIsValidIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics::NewProp_bIsValidIndex = { "bIsValidIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathVertex_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics::NewProp_bIsValidIndex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathVertex_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics::NewProp_PolyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics::NewProp_bIsValidIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyPath" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "GetPolyPathVertex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics::GeometryScriptLibrary_PolyPathFunctions_eventGetPolyPathVertex_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics
	{
		struct GeometryScriptLibrary_PolyPathFunctions_eventSampleSplineToTransforms_Parms
		{
			const USplineComponent* Spline;
			TArray<FTransform> Frames;
			TArray<double> FrameTimes;
			FGeometryScriptSplineSamplingOptions SamplingOptions;
			FTransform RelativeTransform;
			bool bIncludeScale;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Frames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Frames;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_FrameTimes_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameTimes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SamplingOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
		static void NewProp_bIncludeScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventSampleSplineToTransforms_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_Spline_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_Frames_Inner = { "Frames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_Frames = { "Frames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventSampleSplineToTransforms_Parms, Frames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_FrameTimes_Inner = { "FrameTimes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_FrameTimes = { "FrameTimes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventSampleSplineToTransforms_Parms, FrameTimes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_SamplingOptions = { "SamplingOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventSampleSplineToTransforms_Parms, SamplingOptions), Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions, METADATA_PARAMS(nullptr, 0) }; // 3791310616
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GeometryScriptLibrary_PolyPathFunctions_eventSampleSplineToTransforms_Parms, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_bIncludeScale_SetBit(void* Obj)
	{
		((GeometryScriptLibrary_PolyPathFunctions_eventSampleSplineToTransforms_Parms*)Obj)->bIncludeScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_bIncludeScale = { "bIncludeScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GeometryScriptLibrary_PolyPathFunctions_eventSampleSplineToTransforms_Parms), &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_bIncludeScale_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_Spline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_Frames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_Frames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_FrameTimes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_FrameTimes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_SamplingOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_RelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::NewProp_bIncludeScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "GeometryScript|PolyPath" },
		{ "Comment", "/**\n\x09 * Sample a USplineComponent into a list of FTransforms, based on the given SamplingOptions.\n\x09 * @param Frames Transforms are returned here, with X axis oriented along spline Tangent and Z as the 'Up' vector.\n\x09 * @param FrameTimes the spline Time value used for each Frame\n\x09 * @param RelativeTransform a constant Transform applied to each sample Transform in its local frame of reference. So, eg, an X Rotation will rotate each frame around the local spline Tangent vector\n\x09 * @param bIncludeScale if true, the Scale of each FTransform is taken from the Spline, otherwise the Transforms have unit scale\n\x09 */" },
		{ "CPP_Default_bIncludeScale", "true" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
		{ "ToolTip", "Sample a USplineComponent into a list of FTransforms, based on the given SamplingOptions.\n@param Frames Transforms are returned here, with X axis oriented along spline Tangent and Z as the 'Up' vector.\n@param FrameTimes the spline Time value used for each Frame\n@param RelativeTransform a constant Transform applied to each sample Transform in its local frame of reference. So, eg, an X Rotation will rotate each frame around the local spline Tangent vector\n@param bIncludeScale if true, the Scale of each FTransform is taken from the Spline, otherwise the Transforms have unit scale" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, nullptr, "SampleSplineToTransforms", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::GeometryScriptLibrary_PolyPathFunctions_eventSampleSplineToTransforms_Parms), Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeometryScriptLibrary_PolyPathFunctions);
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions_NoRegister()
	{
		return UGeometryScriptLibrary_PolyPathFunctions::StaticClass();
	}
	struct Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryScriptingCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayOfVector2DToGeometryScriptPolyPath, "Conv_ArrayOfVector2DToGeometryScriptPolyPath" }, // 2825458383
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_ArrayToGeometryScriptPolyPath, "Conv_ArrayToGeometryScriptPolyPath" }, // 2197274952
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArray, "Conv_GeometryScriptPolyPathToArray" }, // 168367625
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_Conv_GeometryScriptPolyPathToArrayOfVector2D, "Conv_GeometryScriptPolyPathToArrayOfVector2D" }, // 2726698694
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayOfVector2DToPolyPath, "ConvertArrayOfVector2DToPolyPath" }, // 3281137903
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertArrayToPolyPath, "ConvertArrayToPolyPath" }, // 756675012
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArray, "ConvertPolyPathToArray" }, // 3301816938
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertPolyPathToArrayOfVector2D, "ConvertPolyPathToArrayOfVector2D" }, // 1132855133
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_ConvertSplineToPolyPath, "ConvertSplineToPolyPath" }, // 856947235
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath2D, "CreateArcPath2D" }, // 12177731
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateArcPath3D, "CreateArcPath3D" }, // 3147337971
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath2D, "CreateCirclePath2D" }, // 3942847846
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_CreateCirclePath3D, "CreateCirclePath3D" }, // 3526913331
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_FlattenTo2DOnAxis, "FlattenTo2DOnAxis" }, // 3213971286
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetNearestVertexIndex, "GetNearestVertexIndex" }, // 1476593997
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathArcLength, "GetPolyPathArcLength" }, // 635347095
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathLastIndex, "GetPolyPathLastIndex" }, // 2940134180
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathNumVertices, "GetPolyPathNumVertices" }, // 201757683
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathTangent, "GetPolyPathTangent" }, // 2993091211
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_GetPolyPathVertex, "GetPolyPathVertex" }, // 2257909511
		{ &Z_Construct_UFunction_UGeometryScriptLibrary_PolyPathFunctions_SampleSplineToTransforms, "SampleSplineToTransforms" }, // 3234809555
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeometryScript/PolyPathFunctions.h" },
		{ "ModuleRelativePath", "Public/GeometryScript/PolyPathFunctions.h" },
		{ "ScriptName", "GeometryScript_PolyPath" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeometryScriptLibrary_PolyPathFunctions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions_Statics::ClassParams = {
		&UGeometryScriptLibrary_PolyPathFunctions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions()
	{
		if (!Z_Registration_Info_UClass_UGeometryScriptLibrary_PolyPathFunctions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeometryScriptLibrary_PolyPathFunctions.OuterSingleton, Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeometryScriptLibrary_PolyPathFunctions.OuterSingleton;
	}
	template<> GEOMETRYSCRIPTINGCORE_API UClass* StaticClass<UGeometryScriptLibrary_PolyPathFunctions>()
	{
		return UGeometryScriptLibrary_PolyPathFunctions::StaticClass();
	}
	UGeometryScriptLibrary_PolyPathFunctions::UGeometryScriptLibrary_PolyPathFunctions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeometryScriptLibrary_PolyPathFunctions);
	UGeometryScriptLibrary_PolyPathFunctions::~UGeometryScriptLibrary_PolyPathFunctions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_Statics::EnumInfo[] = {
		{ EGeometryScriptSampleSpacing_StaticEnum, TEXT("EGeometryScriptSampleSpacing"), &Z_Registration_Info_UEnum_EGeometryScriptSampleSpacing, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 907521495U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_Statics::ScriptStructInfo[] = {
		{ FGeometryScriptSplineSamplingOptions::StaticStruct, Z_Construct_UScriptStruct_FGeometryScriptSplineSamplingOptions_Statics::NewStructOps, TEXT("GeometryScriptSplineSamplingOptions"), &Z_Registration_Info_UScriptStruct_GeometryScriptSplineSamplingOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryScriptSplineSamplingOptions), 3791310616U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeometryScriptLibrary_PolyPathFunctions, UGeometryScriptLibrary_PolyPathFunctions::StaticClass, TEXT("UGeometryScriptLibrary_PolyPathFunctions"), &Z_Registration_Info_UClass_UGeometryScriptLibrary_PolyPathFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeometryScriptLibrary_PolyPathFunctions), 3427472137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_2207129065(TEXT("/Script/GeometryScriptingCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GeometryScripting_Source_GeometryScriptingCore_Public_GeometryScript_PolyPathFunctions_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
