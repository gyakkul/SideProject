// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraCalibrationSubsystem.h"
#include "CameraCalibrationTypes.h"
#include "LensFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraCalibrationSubsystem() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraCalibrationStep_NoRegister();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraCalibrationSubsystem();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraCalibrationSubsystem_NoRegister();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraImageCenterAlgo_NoRegister();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgo_NoRegister();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensFile_NoRegister();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensModel_NoRegister();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDistortionHandlerPicker();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLensFilePicker();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	DEFINE_FUNCTION(UCameraCalibrationSubsystem::execGetCameraCalibrationStep)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UCameraCalibrationStep> *)Z_Param__Result=P_THIS->GetCameraCalibrationStep(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraCalibrationSubsystem::execGetCameraCalibrationSteps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetCameraCalibrationSteps();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraCalibrationSubsystem::execGetOverlayMaterialNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetOverlayMaterialNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraCalibrationSubsystem::execGetOverlayMaterial)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OverlayName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetOverlayMaterial(Z_Param_Out_OverlayName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraCalibrationSubsystem::execGetCameraImageCenterAlgos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetCameraImageCenterAlgos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraCalibrationSubsystem::execGetCameraImageCenterAlgo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UCameraImageCenterAlgo> *)Z_Param__Result=P_THIS->GetCameraImageCenterAlgo(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraCalibrationSubsystem::execGetCameraNodalOffsetAlgos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetCameraNodalOffsetAlgos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraCalibrationSubsystem::execGetCameraNodalOffsetAlgo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UCameraNodalOffsetAlgo> *)Z_Param__Result=P_THIS->GetCameraNodalOffsetAlgo(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraCalibrationSubsystem::execGetRegisteredLensModel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ModelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<ULensModel> *)Z_Param__Result=P_THIS->GetRegisteredLensModel(Z_Param_ModelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraCalibrationSubsystem::execUnregisterDistortionModelHandler)
	{
		P_GET_OBJECT(UCineCameraComponent,Z_Param_Component);
		P_GET_OBJECT(ULensDistortionModelHandlerBase,Z_Param_Handler);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnregisterDistortionModelHandler(Z_Param_Component,Z_Param_Handler);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraCalibrationSubsystem::execFindOrCreateDistortionModelHandler)
	{
		P_GET_STRUCT_REF(FDistortionHandlerPicker,Z_Param_Out_DistortionHandlerPicker);
		P_GET_OBJECT(UClass,Z_Param_LensModelClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULensDistortionModelHandlerBase**)Z_Param__Result=P_THIS->FindOrCreateDistortionModelHandler(Z_Param_Out_DistortionHandlerPicker,Z_Param_LensModelClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraCalibrationSubsystem::execFindDistortionModelHandler)
	{
		P_GET_STRUCT_REF(FDistortionHandlerPicker,Z_Param_Out_DistortionHandlerPicker);
		P_GET_UBOOL(Z_Param_bUpdatePicker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULensDistortionModelHandlerBase**)Z_Param__Result=P_THIS->FindDistortionModelHandler(Z_Param_Out_DistortionHandlerPicker,Z_Param_bUpdatePicker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraCalibrationSubsystem::execGetDistortionModelHandlers)
	{
		P_GET_OBJECT(UCineCameraComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULensDistortionModelHandlerBase*>*)Z_Param__Result=P_THIS->GetDistortionModelHandlers(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraCalibrationSubsystem::execGetLensFile)
	{
		P_GET_STRUCT_REF(FLensFilePicker,Z_Param_Out_Picker);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULensFile**)Z_Param__Result=P_THIS->GetLensFile(Z_Param_Out_Picker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraCalibrationSubsystem::execSetDefaultLensFile)
	{
		P_GET_OBJECT(ULensFile,Z_Param_NewDefaultLensFile);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultLensFile(Z_Param_NewDefaultLensFile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraCalibrationSubsystem::execGetDefaultLensFile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULensFile**)Z_Param__Result=P_THIS->GetDefaultLensFile();
		P_NATIVE_END;
	}
	void UCameraCalibrationSubsystem::StaticRegisterNativesUCameraCalibrationSubsystem()
	{
		UClass* Class = UCameraCalibrationSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindDistortionModelHandler", &UCameraCalibrationSubsystem::execFindDistortionModelHandler },
			{ "FindOrCreateDistortionModelHandler", &UCameraCalibrationSubsystem::execFindOrCreateDistortionModelHandler },
			{ "GetCameraCalibrationStep", &UCameraCalibrationSubsystem::execGetCameraCalibrationStep },
			{ "GetCameraCalibrationSteps", &UCameraCalibrationSubsystem::execGetCameraCalibrationSteps },
			{ "GetCameraImageCenterAlgo", &UCameraCalibrationSubsystem::execGetCameraImageCenterAlgo },
			{ "GetCameraImageCenterAlgos", &UCameraCalibrationSubsystem::execGetCameraImageCenterAlgos },
			{ "GetCameraNodalOffsetAlgo", &UCameraCalibrationSubsystem::execGetCameraNodalOffsetAlgo },
			{ "GetCameraNodalOffsetAlgos", &UCameraCalibrationSubsystem::execGetCameraNodalOffsetAlgos },
			{ "GetDefaultLensFile", &UCameraCalibrationSubsystem::execGetDefaultLensFile },
			{ "GetDistortionModelHandlers", &UCameraCalibrationSubsystem::execGetDistortionModelHandlers },
			{ "GetLensFile", &UCameraCalibrationSubsystem::execGetLensFile },
			{ "GetOverlayMaterial", &UCameraCalibrationSubsystem::execGetOverlayMaterial },
			{ "GetOverlayMaterialNames", &UCameraCalibrationSubsystem::execGetOverlayMaterialNames },
			{ "GetRegisteredLensModel", &UCameraCalibrationSubsystem::execGetRegisteredLensModel },
			{ "SetDefaultLensFile", &UCameraCalibrationSubsystem::execSetDefaultLensFile },
			{ "UnregisterDistortionModelHandler", &UCameraCalibrationSubsystem::execUnregisterDistortionModelHandler },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler_Statics
	{
		struct CameraCalibrationSubsystem_eventFindDistortionModelHandler_Parms
		{
			FDistortionHandlerPicker DistortionHandlerPicker;
			bool bUpdatePicker;
			ULensDistortionModelHandlerBase* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionHandlerPicker;
		static void NewProp_bUpdatePicker_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatePicker;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler_Statics::NewProp_DistortionHandlerPicker = { "DistortionHandlerPicker", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventFindDistortionModelHandler_Parms, DistortionHandlerPicker), Z_Construct_UScriptStruct_FDistortionHandlerPicker, METADATA_PARAMS(nullptr, 0) }; // 2769871690
	void Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler_Statics::NewProp_bUpdatePicker_SetBit(void* Obj)
	{
		((CameraCalibrationSubsystem_eventFindDistortionModelHandler_Parms*)Obj)->bUpdatePicker = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler_Statics::NewProp_bUpdatePicker = { "bUpdatePicker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CameraCalibrationSubsystem_eventFindDistortionModelHandler_Parms), &Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler_Statics::NewProp_bUpdatePicker_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventFindDistortionModelHandler_Parms, ReturnValue), Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler_Statics::NewProp_DistortionHandlerPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler_Statics::NewProp_bUpdatePicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "CPP_Default_bUpdatePicker", "true" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraCalibrationSubsystem, nullptr, "FindDistortionModelHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler_Statics::CameraCalibrationSubsystem_eventFindDistortionModelHandler_Parms), Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Statics
	{
		struct CameraCalibrationSubsystem_eventFindOrCreateDistortionModelHandler_Parms
		{
			FDistortionHandlerPicker DistortionHandlerPicker;
			const TSubclassOf<ULensModel>  LensModelClass;
			ULensDistortionModelHandlerBase* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionHandlerPicker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensModelClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LensModelClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Statics::NewProp_DistortionHandlerPicker = { "DistortionHandlerPicker", nullptr, (EPropertyFlags)0x0010008008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventFindOrCreateDistortionModelHandler_Parms, DistortionHandlerPicker), Z_Construct_UScriptStruct_FDistortionHandlerPicker, METADATA_PARAMS(nullptr, 0) }; // 2769871690
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Statics::NewProp_LensModelClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Statics::NewProp_LensModelClass = { "LensModelClass", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventFindOrCreateDistortionModelHandler_Parms, LensModelClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULensModel_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Statics::NewProp_LensModelClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Statics::NewProp_LensModelClass_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventFindOrCreateDistortionModelHandler_Parms, ReturnValue), Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Statics::NewProp_DistortionHandlerPicker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Statics::NewProp_LensModelClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraCalibrationSubsystem, nullptr, "FindOrCreateDistortionModelHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Statics::CameraCalibrationSubsystem_eventFindOrCreateDistortionModelHandler_Parms), Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationStep_Statics
	{
		struct CameraCalibrationSubsystem_eventGetCameraCalibrationStep_Parms
		{
			FName Name;
			TSubclassOf<UCameraCalibrationStep>  ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationStep_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventGetCameraCalibrationStep_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationStep_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventGetCameraCalibrationStep_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraCalibrationStep_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationStep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationStep_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationStep_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationStep_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "Comment", "/** Returns the camera calibration step by name */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
		{ "ToolTip", "Returns the camera calibration step by name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationStep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraCalibrationSubsystem, nullptr, "GetCameraCalibrationStep", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationStep_Statics::CameraCalibrationSubsystem_eventGetCameraCalibrationStep_Parms), Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationStep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationStep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationStep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationStep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationStep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationStep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationSteps_Statics
	{
		struct CameraCalibrationSubsystem_eventGetCameraCalibrationSteps_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationSteps_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationSteps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventGetCameraCalibrationSteps_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationSteps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationSteps_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationSteps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationSteps_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "Comment", "/** Returns an array with the names of the available camera calibration steps */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
		{ "ToolTip", "Returns an array with the names of the available camera calibration steps" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationSteps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraCalibrationSubsystem, nullptr, "GetCameraCalibrationSteps", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationSteps_Statics::CameraCalibrationSubsystem_eventGetCameraCalibrationSteps_Parms), Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationSteps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationSteps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationSteps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationSteps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationSteps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationSteps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgo_Statics
	{
		struct CameraCalibrationSubsystem_eventGetCameraImageCenterAlgo_Parms
		{
			FName Name;
			TSubclassOf<UCameraImageCenterAlgo>  ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventGetCameraImageCenterAlgo_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventGetCameraImageCenterAlgo_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraImageCenterAlgo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "Comment", "/** Returns the image center algorithm by name */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
		{ "ToolTip", "Returns the image center algorithm by name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraCalibrationSubsystem, nullptr, "GetCameraImageCenterAlgo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgo_Statics::CameraCalibrationSubsystem_eventGetCameraImageCenterAlgo_Parms), Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgos_Statics
	{
		struct CameraCalibrationSubsystem_eventGetCameraImageCenterAlgos_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgos_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventGetCameraImageCenterAlgos_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgos_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "Comment", "/** Returns an array with the names of the available image center algorithms */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
		{ "ToolTip", "Returns an array with the names of the available image center algorithms" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraCalibrationSubsystem, nullptr, "GetCameraImageCenterAlgos", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgos_Statics::CameraCalibrationSubsystem_eventGetCameraImageCenterAlgos_Parms), Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo_Statics
	{
		struct CameraCalibrationSubsystem_eventGetCameraNodalOffsetAlgo_Parms
		{
			FName Name;
			TSubclassOf<UCameraNodalOffsetAlgo>  ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventGetCameraNodalOffsetAlgo_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventGetCameraNodalOffsetAlgo_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraNodalOffsetAlgo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "Comment", "/** Returns the nodal offset algorithm by name */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
		{ "ToolTip", "Returns the nodal offset algorithm by name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraCalibrationSubsystem, nullptr, "GetCameraNodalOffsetAlgo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo_Statics::CameraCalibrationSubsystem_eventGetCameraNodalOffsetAlgo_Parms), Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos_Statics
	{
		struct CameraCalibrationSubsystem_eventGetCameraNodalOffsetAlgos_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventGetCameraNodalOffsetAlgos_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "Comment", "/** Returns an array with the names of the available nodal offset algorithms */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
		{ "ToolTip", "Returns an array with the names of the available nodal offset algorithms" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraCalibrationSubsystem, nullptr, "GetCameraNodalOffsetAlgos", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos_Statics::CameraCalibrationSubsystem_eventGetCameraNodalOffsetAlgos_Parms), Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDefaultLensFile_Statics
	{
		struct CameraCalibrationSubsystem_eventGetDefaultLensFile_Parms
		{
			ULensFile* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDefaultLensFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventGetDefaultLensFile_Parms, ReturnValue), Z_Construct_UClass_ULensFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDefaultLensFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDefaultLensFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDefaultLensFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "Comment", "/** Get the default lens file. */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
		{ "ToolTip", "Get the default lens file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDefaultLensFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraCalibrationSubsystem, nullptr, "GetDefaultLensFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDefaultLensFile_Statics::CameraCalibrationSubsystem_eventGetDefaultLensFile_Parms), Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDefaultLensFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDefaultLensFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDefaultLensFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDefaultLensFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDefaultLensFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDefaultLensFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers_Statics
	{
		struct CameraCalibrationSubsystem_eventGetDistortionModelHandlers_Parms
		{
			UCineCameraComponent* Component;
			TArray<ULensDistortionModelHandlerBase*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventGetDistortionModelHandlers_Parms, Component), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventGetDistortionModelHandlers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraCalibrationSubsystem, nullptr, "GetDistortionModelHandlers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers_Statics::CameraCalibrationSubsystem_eventGetDistortionModelHandlers_Parms), Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraCalibrationSubsystem_GetLensFile_Statics
	{
		struct CameraCalibrationSubsystem_eventGetLensFile_Parms
		{
			FLensFilePicker Picker;
			ULensFile* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Picker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Picker;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_GetLensFile_Statics::NewProp_Picker_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetLensFile_Statics::NewProp_Picker = { "Picker", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventGetLensFile_Parms, Picker), Z_Construct_UScriptStruct_FLensFilePicker, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetLensFile_Statics::NewProp_Picker_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetLensFile_Statics::NewProp_Picker_MetaData)) }; // 209465330
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetLensFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventGetLensFile_Parms, ReturnValue), Z_Construct_UClass_ULensFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraCalibrationSubsystem_GetLensFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetLensFile_Statics::NewProp_Picker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetLensFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_GetLensFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "Comment", "/** Facilitator around the picker to get the desired lens file. */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
		{ "ToolTip", "Facilitator around the picker to get the desired lens file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetLensFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraCalibrationSubsystem, nullptr, "GetLensFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetLensFile_Statics::CameraCalibrationSubsystem_eventGetLensFile_Parms), Z_Construct_UFunction_UCameraCalibrationSubsystem_GetLensFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetLensFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetLensFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetLensFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraCalibrationSubsystem_GetLensFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraCalibrationSubsystem_GetLensFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterial_Statics
	{
		struct CameraCalibrationSubsystem_eventGetOverlayMaterial_Parms
		{
			FName OverlayName;
			UMaterialInterface* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverlayName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterial_Statics::NewProp_OverlayName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterial_Statics::NewProp_OverlayName = { "OverlayName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventGetOverlayMaterial_Parms, OverlayName), METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterial_Statics::NewProp_OverlayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterial_Statics::NewProp_OverlayName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventGetOverlayMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterial_Statics::NewProp_OverlayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "Comment", "/** Returns the overlay material associated with the input overlay name */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
		{ "ToolTip", "Returns the overlay material associated with the input overlay name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraCalibrationSubsystem, nullptr, "GetOverlayMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterial_Statics::CameraCalibrationSubsystem_eventGetOverlayMaterial_Parms), Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterialNames_Statics
	{
		struct CameraCalibrationSubsystem_eventGetOverlayMaterialNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterialNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterialNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventGetOverlayMaterialNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterialNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterialNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterialNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterialNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "Comment", "/** \n\x09 * Returns a list of all overlays known to the subsystem\n\x09 * This includes the default overlays listed in the camera calibration settings \n\x09 * as well as any of overlays that have been registered with this subsystem\n\x09 */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
		{ "ToolTip", "Returns a list of all overlays known to the subsystem\nThis includes the default overlays listed in the camera calibration settings\nas well as any of overlays that have been registered with this subsystem" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterialNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraCalibrationSubsystem, nullptr, "GetOverlayMaterialNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterialNames_Statics::CameraCalibrationSubsystem_eventGetOverlayMaterialNames_Parms), Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterialNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterialNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterialNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterialNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterialNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterialNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraCalibrationSubsystem_GetRegisteredLensModel_Statics
	{
		struct CameraCalibrationSubsystem_eventGetRegisteredLensModel_Parms
		{
			FName ModelName;
			TSubclassOf<ULensModel>  ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ModelName;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetRegisteredLensModel_Statics::NewProp_ModelName = { "ModelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventGetRegisteredLensModel_Parms, ModelName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetRegisteredLensModel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventGetRegisteredLensModel_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_ULensModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraCalibrationSubsystem_GetRegisteredLensModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetRegisteredLensModel_Statics::NewProp_ModelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_GetRegisteredLensModel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_GetRegisteredLensModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "Comment", "/** Return the ULensModel subclass that was registered with the input model name */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
		{ "ToolTip", "Return the ULensModel subclass that was registered with the input model name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraCalibrationSubsystem_GetRegisteredLensModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraCalibrationSubsystem, nullptr, "GetRegisteredLensModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetRegisteredLensModel_Statics::CameraCalibrationSubsystem_eventGetRegisteredLensModel_Parms), Z_Construct_UFunction_UCameraCalibrationSubsystem_GetRegisteredLensModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetRegisteredLensModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetRegisteredLensModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_GetRegisteredLensModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraCalibrationSubsystem_GetRegisteredLensModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraCalibrationSubsystem_GetRegisteredLensModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraCalibrationSubsystem_SetDefaultLensFile_Statics
	{
		struct CameraCalibrationSubsystem_eventSetDefaultLensFile_Parms
		{
			ULensFile* NewDefaultLensFile;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDefaultLensFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_SetDefaultLensFile_Statics::NewProp_NewDefaultLensFile = { "NewDefaultLensFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventSetDefaultLensFile_Parms, NewDefaultLensFile), Z_Construct_UClass_ULensFile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraCalibrationSubsystem_SetDefaultLensFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_SetDefaultLensFile_Statics::NewProp_NewDefaultLensFile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_SetDefaultLensFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "Comment", "/** Get the default lens file. */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
		{ "ToolTip", "Get the default lens file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraCalibrationSubsystem_SetDefaultLensFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraCalibrationSubsystem, nullptr, "SetDefaultLensFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraCalibrationSubsystem_SetDefaultLensFile_Statics::CameraCalibrationSubsystem_eventSetDefaultLensFile_Parms), Z_Construct_UFunction_UCameraCalibrationSubsystem_SetDefaultLensFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_SetDefaultLensFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_SetDefaultLensFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_SetDefaultLensFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraCalibrationSubsystem_SetDefaultLensFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraCalibrationSubsystem_SetDefaultLensFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Statics
	{
		struct CameraCalibrationSubsystem_eventUnregisterDistortionModelHandler_Parms
		{
			UCineCameraComponent* Component;
			ULensDistortionModelHandlerBase* Handler;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Handler;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventUnregisterDistortionModelHandler_Parms, Component), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Statics::NewProp_Handler = { "Handler", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraCalibrationSubsystem_eventUnregisterDistortionModelHandler_Parms, Handler), Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Statics::NewProp_Handler,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "Lens Distortion" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraCalibrationSubsystem, nullptr, "UnregisterDistortionModelHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Statics::CameraCalibrationSubsystem_eventUnregisterDistortionModelHandler_Parms), Z_Construct_UFunction_UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraCalibrationSubsystem_UnregisterDistortionModelHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraCalibrationSubsystem_UnregisterDistortionModelHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraCalibrationSubsystem);
	UClass* Z_Construct_UClass_UCameraCalibrationSubsystem_NoRegister()
	{
		return UCameraCalibrationSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UCameraCalibrationSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLensFile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultLensFile;
		static const UECodeGen_Private::FClassPropertyParams NewProp_LensModelMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LensModelMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensModelMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LensModelMap;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraNodalOffsetAlgosMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CameraNodalOffsetAlgosMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraNodalOffsetAlgosMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CameraNodalOffsetAlgosMap;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraImageCenterAlgosMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CameraImageCenterAlgosMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraImageCenterAlgosMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CameraImageCenterAlgosMap;
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraCalibrationStepsMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CameraCalibrationStepsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraCalibrationStepsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CameraCalibrationStepsMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraCalibrationSubsystem_FindDistortionModelHandler, "FindDistortionModelHandler" }, // 3995223466
		{ &Z_Construct_UFunction_UCameraCalibrationSubsystem_FindOrCreateDistortionModelHandler, "FindOrCreateDistortionModelHandler" }, // 454028811
		{ &Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationStep, "GetCameraCalibrationStep" }, // 1389085969
		{ &Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraCalibrationSteps, "GetCameraCalibrationSteps" }, // 410602165
		{ &Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgo, "GetCameraImageCenterAlgo" }, // 341972623
		{ &Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraImageCenterAlgos, "GetCameraImageCenterAlgos" }, // 1058558586
		{ &Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgo, "GetCameraNodalOffsetAlgo" }, // 2968592137
		{ &Z_Construct_UFunction_UCameraCalibrationSubsystem_GetCameraNodalOffsetAlgos, "GetCameraNodalOffsetAlgos" }, // 4195062253
		{ &Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDefaultLensFile, "GetDefaultLensFile" }, // 3344534604
		{ &Z_Construct_UFunction_UCameraCalibrationSubsystem_GetDistortionModelHandlers, "GetDistortionModelHandlers" }, // 2601272437
		{ &Z_Construct_UFunction_UCameraCalibrationSubsystem_GetLensFile, "GetLensFile" }, // 3549285937
		{ &Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterial, "GetOverlayMaterial" }, // 1470864591
		{ &Z_Construct_UFunction_UCameraCalibrationSubsystem_GetOverlayMaterialNames, "GetOverlayMaterialNames" }, // 2070932531
		{ &Z_Construct_UFunction_UCameraCalibrationSubsystem_GetRegisteredLensModel, "GetRegisteredLensModel" }, // 1797380786
		{ &Z_Construct_UFunction_UCameraCalibrationSubsystem_SetDefaultLensFile, "SetDefaultLensFile" }, // 3239553036
		{ &Z_Construct_UFunction_UCameraCalibrationSubsystem_UnregisterDistortionModelHandler, "UnregisterDistortionModelHandler" }, // 402928100
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Camera Calibration subsystem\n */" },
		{ "IncludePath", "CameraCalibrationSubsystem.h" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
		{ "ToolTip", "Camera Calibration subsystem" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_DefaultLensFile_MetaData[] = {
		{ "Comment", "/** Default lens file to use when no override has been provided */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
		{ "ToolTip", "Default lens file to use when no override has been provided" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_DefaultLensFile = { "DefaultLensFile", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCalibrationSubsystem, DefaultLensFile), Z_Construct_UClass_ULensFile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_DefaultLensFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_DefaultLensFile_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_LensModelMap_ValueProp = { "LensModelMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_ULensModel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_LensModelMap_Key_KeyProp = { "LensModelMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_LensModelMap_MetaData[] = {
		{ "Comment", "/** Map of model names to ULensModel subclasses */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
		{ "ToolTip", "Map of model names to ULensModel subclasses" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_LensModelMap = { "LensModelMap", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCalibrationSubsystem, LensModelMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_LensModelMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_LensModelMap_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraNodalOffsetAlgosMap_ValueProp = { "CameraNodalOffsetAlgosMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraNodalOffsetAlgo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraNodalOffsetAlgosMap_Key_KeyProp = { "CameraNodalOffsetAlgosMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraNodalOffsetAlgosMap_MetaData[] = {
		{ "Comment", "/** Holds the registered camera nodal offset algos */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
		{ "ToolTip", "Holds the registered camera nodal offset algos" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraNodalOffsetAlgosMap = { "CameraNodalOffsetAlgosMap", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCalibrationSubsystem, CameraNodalOffsetAlgosMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraNodalOffsetAlgosMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraNodalOffsetAlgosMap_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraImageCenterAlgosMap_ValueProp = { "CameraImageCenterAlgosMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraImageCenterAlgo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraImageCenterAlgosMap_Key_KeyProp = { "CameraImageCenterAlgosMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraImageCenterAlgosMap_MetaData[] = {
		{ "Comment", "/** Holds the registered camera image center algos */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
		{ "ToolTip", "Holds the registered camera image center algos" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraImageCenterAlgosMap = { "CameraImageCenterAlgosMap", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCalibrationSubsystem, CameraImageCenterAlgosMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraImageCenterAlgosMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraImageCenterAlgosMap_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraCalibrationStepsMap_ValueProp = { "CameraCalibrationStepsMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraCalibrationStep_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraCalibrationStepsMap_Key_KeyProp = { "CameraCalibrationStepsMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraCalibrationStepsMap_MetaData[] = {
		{ "Comment", "/** Holds the registered camera calibration steps */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationSubsystem.h" },
		{ "ToolTip", "Holds the registered camera calibration steps" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraCalibrationStepsMap = { "CameraCalibrationStepsMap", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraCalibrationSubsystem, CameraCalibrationStepsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraCalibrationStepsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraCalibrationStepsMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_DefaultLensFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_LensModelMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_LensModelMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_LensModelMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraNodalOffsetAlgosMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraNodalOffsetAlgosMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraNodalOffsetAlgosMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraImageCenterAlgosMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraImageCenterAlgosMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraImageCenterAlgosMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraCalibrationStepsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraCalibrationStepsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::NewProp_CameraCalibrationStepsMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraCalibrationSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::ClassParams = {
		&UCameraCalibrationSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraCalibrationSubsystem()
	{
		if (!Z_Registration_Info_UClass_UCameraCalibrationSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraCalibrationSubsystem.OuterSingleton, Z_Construct_UClass_UCameraCalibrationSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraCalibrationSubsystem.OuterSingleton;
	}
	template<> CAMERACALIBRATIONCORE_API UClass* StaticClass<UCameraCalibrationSubsystem>()
	{
		return UCameraCalibrationSubsystem::StaticClass();
	}
	UCameraCalibrationSubsystem::UCameraCalibrationSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraCalibrationSubsystem);
	UCameraCalibrationSubsystem::~UCameraCalibrationSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraCalibrationSubsystem, UCameraCalibrationSubsystem::StaticClass, TEXT("UCameraCalibrationSubsystem"), &Z_Registration_Info_UClass_UCameraCalibrationSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraCalibrationSubsystem), 3444212202U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_1779634664(TEXT("/Script/CameraCalibrationCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
