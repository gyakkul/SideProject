// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LensDistortionModelHandlerBase.h"
#include "CineCameraSettings.h"
#include "LensData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLensDistortionModelHandlerBase() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensDistortionModelHandlerBase();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensModel_NoRegister();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDistortionInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFocalLengthInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FImageCenterInfo();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLensDistortionState();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LensDistortionState;
class UScriptStruct* FLensDistortionState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LensDistortionState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LensDistortionState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLensDistortionState, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("LensDistortionState"));
	}
	return Z_Registration_Info_UScriptStruct_LensDistortionState.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FLensDistortionState>()
{
	return FLensDistortionState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLensDistortionState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocalLengthInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocalLengthInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImageCenter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ImageCenter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionState_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLensDistortionState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLensDistortionState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionState_Statics::NewProp_DistortionInfo_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Generic array of distortion parameters */" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
		{ "ToolTip", "Generic array of distortion parameters" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensDistortionState_Statics::NewProp_DistortionInfo = { "DistortionInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionState, DistortionInfo), Z_Construct_UScriptStruct_FDistortionInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionState_Statics::NewProp_DistortionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionState_Statics::NewProp_DistortionInfo_MetaData)) }; // 2058170602
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionState_Statics::NewProp_FocalLengthInfo_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Normalized focal fength in both dimensions */" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
		{ "ToolTip", "Normalized focal fength in both dimensions" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensDistortionState_Statics::NewProp_FocalLengthInfo = { "FocalLengthInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionState, FocalLengthInfo), Z_Construct_UScriptStruct_FFocalLengthInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionState_Statics::NewProp_FocalLengthInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionState_Statics::NewProp_FocalLengthInfo_MetaData)) }; // 256946379
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLensDistortionState_Statics::NewProp_ImageCenter_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Normalized center of the image, in the range [0.0f, 1.0f] */" },
		{ "DisplayName", "Image Center" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
		{ "ToolTip", "Normalized center of the image, in the range [0.0f, 1.0f]" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLensDistortionState_Statics::NewProp_ImageCenter = { "ImageCenter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLensDistortionState, ImageCenter), Z_Construct_UScriptStruct_FImageCenterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionState_Statics::NewProp_ImageCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionState_Statics::NewProp_ImageCenter_MetaData)) }; // 1446709430
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLensDistortionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionState_Statics::NewProp_DistortionInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionState_Statics::NewProp_FocalLengthInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLensDistortionState_Statics::NewProp_ImageCenter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLensDistortionState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"LensDistortionState",
		sizeof(FLensDistortionState),
		alignof(FLensDistortionState),
		Z_Construct_UScriptStruct_FLensDistortionState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLensDistortionState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLensDistortionState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLensDistortionState()
	{
		if (!Z_Registration_Info_UScriptStruct_LensDistortionState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LensDistortionState.InnerSingleton, Z_Construct_UScriptStruct_FLensDistortionState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LensDistortionState.InnerSingleton;
	}
	DEFINE_FUNCTION(ULensDistortionModelHandlerBase::execGetDistortionDisplacementMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetDistortionDisplacementMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensDistortionModelHandlerBase::execGetUndistortionDisplacementMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetUndistortionDisplacementMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensDistortionModelHandlerBase::execSetDistortionState)
	{
		P_GET_STRUCT_REF(FLensDistortionState,Z_Param_Out_InNewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDistortionState(Z_Param_Out_InNewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULensDistortionModelHandlerBase::execIsModelSupported)
	{
		P_GET_OBJECT_REF_NO_PTR(TSubclassOf<ULensModel> ,Z_Param_Out_ModelToSupport);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsModelSupported(Z_Param_Out_ModelToSupport);
		P_NATIVE_END;
	}
	void ULensDistortionModelHandlerBase::StaticRegisterNativesULensDistortionModelHandlerBase()
	{
		UClass* Class = ULensDistortionModelHandlerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDistortionDisplacementMap", &ULensDistortionModelHandlerBase::execGetDistortionDisplacementMap },
			{ "GetUndistortionDisplacementMap", &ULensDistortionModelHandlerBase::execGetUndistortionDisplacementMap },
			{ "IsModelSupported", &ULensDistortionModelHandlerBase::execIsModelSupported },
			{ "SetDistortionState", &ULensDistortionModelHandlerBase::execSetDistortionState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetDistortionDisplacementMap_Statics
	{
		struct LensDistortionModelHandlerBase_eventGetDistortionDisplacementMap_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetDistortionDisplacementMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionModelHandlerBase_eventGetDistortionDisplacementMap_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetDistortionDisplacementMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetDistortionDisplacementMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetDistortionDisplacementMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Get the UV displacement map used to distort an undistorted image */" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
		{ "ToolTip", "Get the UV displacement map used to distort an undistorted image" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetDistortionDisplacementMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensDistortionModelHandlerBase, nullptr, "GetDistortionDisplacementMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetDistortionDisplacementMap_Statics::LensDistortionModelHandlerBase_eventGetDistortionDisplacementMap_Parms), Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetDistortionDisplacementMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetDistortionDisplacementMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetDistortionDisplacementMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetDistortionDisplacementMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetDistortionDisplacementMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetDistortionDisplacementMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetUndistortionDisplacementMap_Statics
	{
		struct LensDistortionModelHandlerBase_eventGetUndistortionDisplacementMap_Parms
		{
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetUndistortionDisplacementMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionModelHandlerBase_eventGetUndistortionDisplacementMap_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetUndistortionDisplacementMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetUndistortionDisplacementMap_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetUndistortionDisplacementMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Get the UV displacement map used to undistort a distorted image */" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
		{ "ToolTip", "Get the UV displacement map used to undistort a distorted image" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetUndistortionDisplacementMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensDistortionModelHandlerBase, nullptr, "GetUndistortionDisplacementMap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetUndistortionDisplacementMap_Statics::LensDistortionModelHandlerBase_eventGetUndistortionDisplacementMap_Parms), Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetUndistortionDisplacementMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetUndistortionDisplacementMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetUndistortionDisplacementMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetUndistortionDisplacementMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetUndistortionDisplacementMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetUndistortionDisplacementMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported_Statics
	{
		struct LensDistortionModelHandlerBase_eventIsModelSupported_Parms
		{
			const TSubclassOf<ULensModel>  ModelToSupport;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelToSupport_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ModelToSupport;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported_Statics::NewProp_ModelToSupport_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported_Statics::NewProp_ModelToSupport = { "ModelToSupport", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionModelHandlerBase_eventIsModelSupported_Parms, ModelToSupport), Z_Construct_UClass_UClass, Z_Construct_UClass_ULensModel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported_Statics::NewProp_ModelToSupport_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported_Statics::NewProp_ModelToSupport_MetaData)) };
	void Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LensDistortionModelHandlerBase_eventIsModelSupported_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LensDistortionModelHandlerBase_eventIsModelSupported_Parms), &Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported_Statics::NewProp_ModelToSupport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported_Statics::Function_MetaDataParams[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Returns true if the input model is supported by this model handler, false otherwise. */" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
		{ "ToolTip", "Returns true if the input model is supported by this model handler, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensDistortionModelHandlerBase, nullptr, "IsModelSupported", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported_Statics::LensDistortionModelHandlerBase_eventIsModelSupported_Parms), Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULensDistortionModelHandlerBase_SetDistortionState_Statics
	{
		struct LensDistortionModelHandlerBase_eventSetDistortionState_Parms
		{
			FLensDistortionState InNewState;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InNewState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InNewState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensDistortionModelHandlerBase_SetDistortionState_Statics::NewProp_InNewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULensDistortionModelHandlerBase_SetDistortionState_Statics::NewProp_InNewState = { "InNewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LensDistortionModelHandlerBase_eventSetDistortionState_Parms, InNewState), Z_Construct_UScriptStruct_FLensDistortionState, METADATA_PARAMS(Z_Construct_UFunction_ULensDistortionModelHandlerBase_SetDistortionState_Statics::NewProp_InNewState_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionModelHandlerBase_SetDistortionState_Statics::NewProp_InNewState_MetaData)) }; // 2121770189
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULensDistortionModelHandlerBase_SetDistortionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULensDistortionModelHandlerBase_SetDistortionState_Statics::NewProp_InNewState,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULensDistortionModelHandlerBase_SetDistortionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Update the lens distortion state, recompute the overscan factor, and set all material parameters */" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
		{ "ToolTip", "Update the lens distortion state, recompute the overscan factor, and set all material parameters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULensDistortionModelHandlerBase_SetDistortionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULensDistortionModelHandlerBase, nullptr, "SetDistortionState", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULensDistortionModelHandlerBase_SetDistortionState_Statics::LensDistortionModelHandlerBase_eventSetDistortionState_Parms), Z_Construct_UFunction_ULensDistortionModelHandlerBase_SetDistortionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionModelHandlerBase_SetDistortionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULensDistortionModelHandlerBase_SetDistortionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULensDistortionModelHandlerBase_SetDistortionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULensDistortionModelHandlerBase_SetDistortionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULensDistortionModelHandlerBase_SetDistortionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULensDistortionModelHandlerBase);
	UClass* Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister()
	{
		return ULensDistortionModelHandlerBase::StaticClass();
	}
	struct Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensModelClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LensModelClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionPostProcessMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DistortionPostProcessMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraFilmback_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CameraFilmback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverscanFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverscanFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndistortionDisplacementMapMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UndistortionDisplacementMapMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionDisplacementMapMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DistortionDisplacementMapMID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UndistortionDisplacementMapRT_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UndistortionDisplacementMapRT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionDisplacementMapRT_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DistortionDisplacementMapRT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionProducerID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionProducerID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetDistortionDisplacementMap, "GetDistortionDisplacementMap" }, // 3200351218
		{ &Z_Construct_UFunction_ULensDistortionModelHandlerBase_GetUndistortionDisplacementMap, "GetUndistortionDisplacementMap" }, // 4052700011
		{ &Z_Construct_UFunction_ULensDistortionModelHandlerBase_IsModelSupported, "IsModelSupported" }, // 3993980212
		{ &Z_Construct_UFunction_ULensDistortionModelHandlerBase_SetDistortionState, "SetDistortionState" }, // 3702292615
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Asset user data that can be used on Camera Actors to manage lens distortion state and utilities  */" },
		{ "IncludePath", "LensDistortionModelHandlerBase.h" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
		{ "ToolTip", "Asset user data that can be used on Camera Actors to manage lens distortion state and utilities" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_LensModelClass_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Lens Model describing how to interpret the distortion parameters */" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
		{ "ToolTip", "Lens Model describing how to interpret the distortion parameters" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_LensModelClass = { "LensModelClass", nullptr, (EPropertyFlags)0x0024080000020005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensDistortionModelHandlerBase, LensModelClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULensModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_LensModelClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_LensModelClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionPostProcessMID_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Dynamically created post-process material instance for the currently specified lens model */" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
		{ "ToolTip", "Dynamically created post-process material instance for the currently specified lens model" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionPostProcessMID = { "DistortionPostProcessMID", nullptr, (EPropertyFlags)0x0024080000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensDistortionModelHandlerBase, DistortionPostProcessMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionPostProcessMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionPostProcessMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Current state as set by the most recent call to Update() */" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Current state as set by the most recent call to Update()" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensDistortionModelHandlerBase, CurrentState), Z_Construct_UScriptStruct_FLensDistortionState, METADATA_PARAMS(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_CurrentState_MetaData)) }; // 2121770189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_CameraFilmback_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Filmback settings of the camera that is being used for distortion */" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
		{ "ToolTip", "Filmback settings of the camera that is being used for distortion" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_CameraFilmback = { "CameraFilmback", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensDistortionModelHandlerBase, CameraFilmback), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_CameraFilmback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_CameraFilmback_MetaData)) }; // 833749679
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Display name, used to identify handler in-editor details panels */" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
		{ "ToolTip", "Display name, used to identify handler in-editor details panels" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensDistortionModelHandlerBase, DisplayName), METADATA_PARAMS(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_OverscanFactor_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Computed overscan factor needed to scale the camera's FOV (read-only) */" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
		{ "ToolTip", "Computed overscan factor needed to scale the camera's FOV (read-only)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_OverscanFactor = { "OverscanFactor", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensDistortionModelHandlerBase, OverscanFactor), METADATA_PARAMS(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_OverscanFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_OverscanFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_UndistortionDisplacementMapMID_MetaData[] = {
		{ "Comment", "/** MID used to draw the undistortion displacement map */" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
		{ "ToolTip", "MID used to draw the undistortion displacement map" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_UndistortionDisplacementMapMID = { "UndistortionDisplacementMapMID", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensDistortionModelHandlerBase, UndistortionDisplacementMapMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_UndistortionDisplacementMapMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_UndistortionDisplacementMapMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionDisplacementMapMID_MetaData[] = {
		{ "Comment", "/** MID used to draw the distortion displacement map */" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
		{ "ToolTip", "MID used to draw the distortion displacement map" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionDisplacementMapMID = { "DistortionDisplacementMapMID", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensDistortionModelHandlerBase, DistortionDisplacementMapMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionDisplacementMapMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionDisplacementMapMID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_UndistortionDisplacementMapRT_MetaData[] = {
		{ "Comment", "/** UV displacement map used to undistort a distorted image */" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
		{ "ToolTip", "UV displacement map used to undistort a distorted image" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_UndistortionDisplacementMapRT = { "UndistortionDisplacementMapRT", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensDistortionModelHandlerBase, UndistortionDisplacementMapRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_UndistortionDisplacementMapRT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_UndistortionDisplacementMapRT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionDisplacementMapRT_MetaData[] = {
		{ "Comment", "/** UV displacement map used to distort an undistorted image */" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
		{ "ToolTip", "UV displacement map used to distort an undistorted image" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionDisplacementMapRT = { "DistortionDisplacementMapRT", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensDistortionModelHandlerBase, DistortionDisplacementMapRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionDisplacementMapRT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionDisplacementMapRT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionProducerID_MetaData[] = {
		{ "Comment", "/** UObject that is producing the distortion state for this handler */" },
		{ "ModuleRelativePath", "Public/LensDistortionModelHandlerBase.h" },
		{ "ToolTip", "UObject that is producing the distortion state for this handler" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionProducerID = { "DistortionProducerID", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensDistortionModelHandlerBase, DistortionProducerID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionProducerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionProducerID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_LensModelClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionPostProcessMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_CameraFilmback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_OverscanFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_UndistortionDisplacementMapMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionDisplacementMapMID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_UndistortionDisplacementMapRT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionDisplacementMapRT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::NewProp_DistortionProducerID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULensDistortionModelHandlerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::ClassParams = {
		&ULensDistortionModelHandlerBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULensDistortionModelHandlerBase()
	{
		if (!Z_Registration_Info_UClass_ULensDistortionModelHandlerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULensDistortionModelHandlerBase.OuterSingleton, Z_Construct_UClass_ULensDistortionModelHandlerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULensDistortionModelHandlerBase.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<ULensDistortionModelHandlerBase>()
	{
		return ULensDistortionModelHandlerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULensDistortionModelHandlerBase);
	ULensDistortionModelHandlerBase::~ULensDistortionModelHandlerBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_Statics::ScriptStructInfo[] = {
		{ FLensDistortionState::StaticStruct, Z_Construct_UScriptStruct_FLensDistortionState_Statics::NewStructOps, TEXT("LensDistortionState"), &Z_Registration_Info_UScriptStruct_LensDistortionState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLensDistortionState), 2121770189U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULensDistortionModelHandlerBase, ULensDistortionModelHandlerBase::StaticClass, TEXT("ULensDistortionModelHandlerBase"), &Z_Registration_Info_UClass_ULensDistortionModelHandlerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULensDistortionModelHandlerBase), 3817271523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_752908220(TEXT("/Script/CameraCalibrationCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_LensDistortionModelHandlerBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
