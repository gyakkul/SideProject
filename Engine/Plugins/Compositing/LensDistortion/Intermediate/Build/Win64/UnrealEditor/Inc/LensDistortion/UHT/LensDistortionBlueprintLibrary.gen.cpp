// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LensDistortionBlueprintLibrary.h"
#include "LensDistortionAPI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLensDistortionBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	LENSDISTORTION_API UClass* Z_Construct_UClass_ULensDistortionBlueprintLibrary();
	LENSDISTORTION_API UClass* Z_Construct_UClass_ULensDistortionBlueprintLibrary_NoRegister();
	LENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FLensDistortionCameraModel();
	UPackage* Z_Construct_UPackage__Script_LensDistortion();
// End Cross Module References
	DEFINE_FUNCTION(ULensDistortionBlueprintLibrary::execNotEqual_CompareLensDistortionModels)
	{
		P_GET_STRUCT_REF(FLensDistortionCameraModel,Z_Param_Out_A);
		P_GET_STRUCT_REF(FLensDistortionCameraModel,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULensDistortionBlueprintLibrary::NotEqual_CompareLensDistortionModels(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensDistortionBlueprintLibrary::execEqualEqual_CompareLensDistortionModels)
	{
		P_GET_STRUCT_REF(FLensDistortionCameraModel,Z_Param_Out_A);
		P_GET_STRUCT_REF(FLensDistortionCameraModel,Z_Param_Out_B);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=ULensDistortionBlueprintLibrary::EqualEqual_CompareLensDistortionModels(Z_Param_Out_A,Z_Param_Out_B);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensDistortionBlueprintLibrary::execDrawUVDisplacementToRenderTarget)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FLensDistortionCameraModel,Z_Param_Out_CameraModel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistortedHorizontalFOV);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistortedAspectRatio);
		P_GET_PROPERTY(FFloatProperty,Z_Param_UndistortOverscanFactor);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutputRenderTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OutputMultiply);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OutputAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULensDistortionBlueprintLibrary::DrawUVDisplacementToRenderTarget(Z_Param_WorldContextObject,Z_Param_Out_CameraModel,Z_Param_DistortedHorizontalFOV,Z_Param_DistortedAspectRatio,Z_Param_UndistortOverscanFactor,Z_Param_OutputRenderTarget,Z_Param_OutputMultiply,Z_Param_OutputAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensDistortionBlueprintLibrary::execGetUndistortOverscanFactor)
	{
		P_GET_STRUCT_REF(FLensDistortionCameraModel,Z_Param_Out_CameraModel);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistortedHorizontalFOV);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DistortedAspectRatio);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_UndistortOverscanFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULensDistortionBlueprintLibrary::GetUndistortOverscanFactor(Z_Param_Out_CameraModel,Z_Param_DistortedHorizontalFOV,Z_Param_DistortedAspectRatio,Z_Param_Out_UndistortOverscanFactor);
		P_NATIVE_END;
	}
	void ULensDistortionBlueprintLibrary::StaticRegisterNativesULensDistortionBlueprintLibrary()
	{
		UClass* Class = ULensDistortionBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawUVDisplacementToRenderTarget", &ULensDistortionBlueprintLibrary::execDrawUVDisplacementToRenderTarget },
			{ "EqualEqual_CompareLensDistortionModels", &ULensDistortionBlueprintLibrary::execEqualEqual_CompareLensDistortionModels },
			{ "GetUndistortOverscanFactor", &ULensDistortionBlueprintLibrary::execGetUndistortOverscanFactor },
			{ "NotEqual_CompareLensDistortionModels", &ULensDistortionBlueprintLibrary::execNotEqual_CompareLensDistortionModels },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics
	{
		struct LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms
		{
			const UObject* WorldContextObject;
			FLensDistortionCameraModel CameraModel;
			float DistortedHorizontalFOV;
			float DistortedAspectRatio;
			float UndistortOverscanFactor;
			UTextureRenderTarget2D* OutputRenderTarget;
			float OutputMultiply;
			float OutputAdd;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraModel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraModel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistortedHorizontalFOV;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistortedAspectRatio;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UndistortOverscanFactor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputRenderTarget;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputMultiply;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_CameraModel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_CameraModel = { "CameraModel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, CameraModel), Z_Construct_UScriptStruct_FLensDistortionCameraModel, METADATA_PARAMS(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_CameraModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_CameraModel_MetaData)) }; // 3151447947
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_DistortedHorizontalFOV = { "DistortedHorizontalFOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, DistortedHorizontalFOV), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_DistortedAspectRatio = { "DistortedAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, DistortedAspectRatio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_UndistortOverscanFactor = { "UndistortOverscanFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, UndistortOverscanFactor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_OutputRenderTarget = { "OutputRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, OutputRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_OutputMultiply = { "OutputMultiply", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, OutputMultiply), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_OutputAdd = { "OutputAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms, OutputAdd), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_CameraModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_DistortedHorizontalFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_DistortedAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_UndistortOverscanFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_OutputRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_OutputMultiply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::NewProp_OutputAdd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "Comment", "/** Draws UV displacement map within the output render target.\n\x09 * - Red & green channels hold the distortion displacement;\n\x09 * - Blue & alpha channels hold the undistortion displacement.\n\x09 * @param DistortedHorizontalFOV The desired horizontal FOV in the distorted render.\n\x09 * @param DistortedAspectRatio The desired aspect ratio of the distorted render.\n\x09 * @param UndistortOverscanFactor The factor of the overscan for the undistorted render.\n\x09 * @param OutputRenderTarget The render target to draw to. Don't necessarily need to have same resolution or aspect ratio as distorted render.\n\x09 * @param OutputMultiply The multiplication factor applied on the displacement.\n\x09 * @param OutputAdd Value added to the multiplied displacement before storing into the output render target.\n\x09 */" },
		{ "CPP_Default_OutputAdd", "0.500000" },
		{ "CPP_Default_OutputMultiply", "0.500000" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The LensDistortion plugin is deprecated. Please update your project to use the features of the CameraCalibration plugin." },
		{ "ModuleRelativePath", "Classes/LensDistortionBlueprintLibrary.h" },
		{ "ToolTip", "Draws UV displacement map within the output render target.\n- Red & green channels hold the distortion displacement;\n- Blue & alpha channels hold the undistortion displacement.\n@param DistortedHorizontalFOV The desired horizontal FOV in the distorted render.\n@param DistortedAspectRatio The desired aspect ratio of the distorted render.\n@param UndistortOverscanFactor The factor of the overscan for the undistorted render.\n@param OutputRenderTarget The render target to draw to. Don't necessarily need to have same resolution or aspect ratio as distorted render.\n@param OutputMultiply The multiplication factor applied on the displacement.\n@param OutputAdd Value added to the multiplied displacement before storing into the output render target." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensDistortionBlueprintLibrary, nullptr, "DrawUVDisplacementToRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::LensDistortionBlueprintLibrary_eventDrawUVDisplacementToRenderTarget_Parms), Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics
	{
		struct LensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms
		{
			FLensDistortionCameraModel A;
			FLensDistortionCameraModel B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms, A), Z_Construct_UScriptStruct_FLensDistortionCameraModel, METADATA_PARAMS(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_A_MetaData)) }; // 3151447947
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms, B), Z_Construct_UScriptStruct_FLensDistortionCameraModel, METADATA_PARAMS(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_B_MetaData)) }; // 3151447947
	void Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms), &Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "Comment", "/* Returns true if A is equal to B (A == B) */" },
		{ "CompactNodeTitle", "==" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The LensDistortion plugin is deprecated. Please update your project to use the features of the CameraCalibration plugin." },
		{ "DisplayName", "Equal (LensDistortionCameraModel)" },
		{ "Keywords", "== equal" },
		{ "ModuleRelativePath", "Classes/LensDistortionBlueprintLibrary.h" },
		{ "ToolTip", "Returns true if A is equal to B (A == B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensDistortionBlueprintLibrary, nullptr, "EqualEqual_CompareLensDistortionModels", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::LensDistortionBlueprintLibrary_eventEqualEqual_CompareLensDistortionModels_Parms), Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics
	{
		struct LensDistortionBlueprintLibrary_eventGetUndistortOverscanFactor_Parms
		{
			FLensDistortionCameraModel CameraModel;
			float DistortedHorizontalFOV;
			float DistortedAspectRatio;
			float UndistortOverscanFactor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraModel_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraModel;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistortedHorizontalFOV;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistortedAspectRatio;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UndistortOverscanFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_CameraModel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_CameraModel = { "CameraModel", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventGetUndistortOverscanFactor_Parms, CameraModel), Z_Construct_UScriptStruct_FLensDistortionCameraModel, METADATA_PARAMS(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_CameraModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_CameraModel_MetaData)) }; // 3151447947
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_DistortedHorizontalFOV = { "DistortedHorizontalFOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventGetUndistortOverscanFactor_Parms, DistortedHorizontalFOV), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_DistortedAspectRatio = { "DistortedAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventGetUndistortOverscanFactor_Parms, DistortedAspectRatio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_UndistortOverscanFactor = { "UndistortOverscanFactor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventGetUndistortOverscanFactor_Parms, UndistortOverscanFactor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_CameraModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_DistortedHorizontalFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_DistortedAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::NewProp_UndistortOverscanFactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "Comment", "/** Returns the overscan factor required for the undistort rendering to avoid unrendered distorted pixels. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The LensDistortion plugin is deprecated. Please update your project to use the features of the CameraCalibration plugin." },
		{ "ModuleRelativePath", "Classes/LensDistortionBlueprintLibrary.h" },
		{ "ToolTip", "Returns the overscan factor required for the undistort rendering to avoid unrendered distorted pixels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensDistortionBlueprintLibrary, nullptr, "GetUndistortOverscanFactor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::LensDistortionBlueprintLibrary_eventGetUndistortOverscanFactor_Parms), Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics
	{
		struct LensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms
		{
			FLensDistortionCameraModel A;
			FLensDistortionCameraModel B;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_A;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_B;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_A_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms, A), Z_Construct_UScriptStruct_FLensDistortionCameraModel, METADATA_PARAMS(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_A_MetaData)) }; // 3151447947
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_B_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms, B), Z_Construct_UScriptStruct_FLensDistortionCameraModel, METADATA_PARAMS(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_B_MetaData)) }; // 3151447947
	void Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms), &Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_A,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_B,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "Comment", "/* Returns true if A is not equal to B (A != B) */" },
		{ "CompactNodeTitle", "!=" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The LensDistortion plugin is deprecated. Please update your project to use the features of the CameraCalibration plugin." },
		{ "DisplayName", "NotEqual (LensDistortionCameraModel)" },
		{ "Keywords", "!= not equal" },
		{ "ModuleRelativePath", "Classes/LensDistortionBlueprintLibrary.h" },
		{ "ToolTip", "Returns true if A is not equal to B (A != B)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensDistortionBlueprintLibrary, nullptr, "NotEqual_CompareLensDistortionModels", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::LensDistortionBlueprintLibrary_eventNotEqual_CompareLensDistortionModels_Parms), Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULensDistortionBlueprintLibrary);
	UClass* Z_Construct_UClass_ULensDistortionBlueprintLibrary_NoRegister()
	{
		return ULensDistortionBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_LensDistortion,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULensDistortionBlueprintLibrary_DrawUVDisplacementToRenderTarget, "DrawUVDisplacementToRenderTarget" }, // 3259928322
		{ &Z_Construct_UFunction_ULensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels, "EqualEqual_CompareLensDistortionModels" }, // 2485712958
		{ &Z_Construct_UFunction_ULensDistortionBlueprintLibrary_GetUndistortOverscanFactor, "GetUndistortOverscanFactor" }, // 3034303955
		{ &Z_Construct_UFunction_ULensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels, "NotEqual_CompareLensDistortionModels" }, // 4075905453
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "DeprecationMessage", "The LensDistortion plugin is deprecated. Please update your project to use the features of the CameraCalibration plugin." },
		{ "IncludePath", "LensDistortionBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Classes/LensDistortionBlueprintLibrary.h" },
		{ "ScriptName", "LensDistortionLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULensDistortionBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics::ClassParams = {
		&ULensDistortionBlueprintLibrary::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULensDistortionBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_ULensDistortionBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULensDistortionBlueprintLibrary.OuterSingleton, Z_Construct_UClass_ULensDistortionBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULensDistortionBlueprintLibrary.OuterSingleton;
	}
	template<> LENSDISTORTION_API UClass* StaticClass<ULensDistortionBlueprintLibrary>()
	{
		return ULensDistortionBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULensDistortionBlueprintLibrary);
	ULensDistortionBlueprintLibrary::~ULensDistortionBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULensDistortionBlueprintLibrary, ULensDistortionBlueprintLibrary::StaticClass, TEXT("ULensDistortionBlueprintLibrary"), &Z_Registration_Info_UClass_ULensDistortionBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULensDistortionBlueprintLibrary), 3981472948U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_2617448685(TEXT("/Script/LensDistortion"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_LensDistortion_Source_LensDistortion_Classes_LensDistortionBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
