// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MixedRealityCaptureComponent.h"
#include "MrcCalibrationData.h"
#include "MrcVideoCaptureDevice.h"
#include "OpenCVLensDistortionParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMixedRealityCaptureComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_AMrcGarbageMatteActor_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMixedRealityCaptureComponent();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMixedRealityCaptureComponent_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMrcCalibrationData_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UClass* Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_NoRegister();
	MIXEDREALITYCAPTUREFRAMEWORK_API UFunction* Z_Construct_UDelegateFunction_UMixedRealityCaptureComponent_MRCaptureFeedOpenedDelegate__DelegateSignature();
	MIXEDREALITYCAPTUREFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex();
	MIXEDREALITYCAPTUREFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FMrcVideoProcessingParams();
	OPENCVLENSDISTORTION_API UScriptStruct* Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters();
	UPackage* Z_Construct_UPackage__Script_MixedRealityCaptureFramework();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMixedRealityCaptureComponent_MRCaptureFeedOpenedDelegate__DelegateSignature_Statics
	{
		struct MixedRealityCaptureComponent_eventMRCaptureFeedOpenedDelegate_Parms
		{
			FMrcVideoCaptureFeedIndex FeedRef;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeedRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FeedRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMixedRealityCaptureComponent_MRCaptureFeedOpenedDelegate__DelegateSignature_Statics::NewProp_FeedRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMixedRealityCaptureComponent_MRCaptureFeedOpenedDelegate__DelegateSignature_Statics::NewProp_FeedRef = { "FeedRef", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureComponent_eventMRCaptureFeedOpenedDelegate_Parms, FeedRef), Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMixedRealityCaptureComponent_MRCaptureFeedOpenedDelegate__DelegateSignature_Statics::NewProp_FeedRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMixedRealityCaptureComponent_MRCaptureFeedOpenedDelegate__DelegateSignature_Statics::NewProp_FeedRef_MetaData)) }; // 628712410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMixedRealityCaptureComponent_MRCaptureFeedOpenedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMixedRealityCaptureComponent_MRCaptureFeedOpenedDelegate__DelegateSignature_Statics::NewProp_FeedRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMixedRealityCaptureComponent_MRCaptureFeedOpenedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMixedRealityCaptureComponent_MRCaptureFeedOpenedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "MRCaptureFeedOpenedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMixedRealityCaptureComponent_MRCaptureFeedOpenedDelegate__DelegateSignature_Statics::MixedRealityCaptureComponent_eventMRCaptureFeedOpenedDelegate_Parms), Z_Construct_UDelegateFunction_UMixedRealityCaptureComponent_MRCaptureFeedOpenedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMixedRealityCaptureComponent_MRCaptureFeedOpenedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMixedRealityCaptureComponent_MRCaptureFeedOpenedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMixedRealityCaptureComponent_MRCaptureFeedOpenedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMixedRealityCaptureComponent_MRCaptureFeedOpenedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMixedRealityCaptureComponent_MRCaptureFeedOpenedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMixedRealityCaptureComponent::FMRCaptureFeedOpenedDelegate_DelegateWrapper(const FMulticastScriptDelegate& MRCaptureFeedOpenedDelegate, FMrcVideoCaptureFeedIndex const& FeedRef)
{
	struct MixedRealityCaptureComponent_eventMRCaptureFeedOpenedDelegate_Parms
	{
		FMrcVideoCaptureFeedIndex FeedRef;
	};
	MixedRealityCaptureComponent_eventMRCaptureFeedOpenedDelegate_Parms Parms;
	Parms.FeedRef=FeedRef;
	MRCaptureFeedOpenedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execOnVideoFeedOpened)
	{
		P_GET_STRUCT_REF(FMrcVideoCaptureFeedIndex,Z_Param_Out_FeedRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnVideoFeedOpened(Z_Param_Out_FeedRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execSetEnableProjectionDepthTracking)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableProjectionDepthTracking(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execGetProjectionActor_K2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetProjectionActor_K2();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execSetProjectionDepthOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DepthOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProjectionDepthOffset(Z_Param_DepthOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execSetTrackingDelay)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_DelayMS);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTrackingDelay(Z_Param_DelayMS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execGetTrackingDelay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTrackingDelay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execSetLensDistortionParameters)
	{
		P_GET_STRUCT_REF(FOpenCVLensDistortionParameters,Z_Param_Out_ModelRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLensDistortionParameters(Z_Param_Out_ModelRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execSetCaptureDevice)
	{
		P_GET_STRUCT_REF(FMrcVideoCaptureFeedIndex,Z_Param_Out_FeedRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCaptureDevice(Z_Param_Out_FeedRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execIsTracked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTracked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execDetatchFromDevice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DetatchFromDevice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execSetDeviceAttachment)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_SourceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeviceAttachment(Z_Param_SourceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execSetVidProcessingParams)
	{
		P_GET_STRUCT_REF(FMrcVideoProcessingParams,Z_Param_Out_NewVidProcessingParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVidProcessingParams(Z_Param_Out_NewVidProcessingParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execSetVidProjectionMat)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVidProjectionMat(Z_Param_NewMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execSetGarbageMatteActor)
	{
		P_GET_OBJECT(AMrcGarbageMatteActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetGarbageMatteActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execApplyCalibrationData)
	{
		P_GET_OBJECT(UMrcCalibrationData,Z_Param_ConfigData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyCalibrationData_Implementation(Z_Param_ConfigData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execFillOutCalibrationData)
	{
		P_GET_OBJECT(UMrcCalibrationData,Z_Param_Dst);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FillOutCalibrationData(Z_Param_Dst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execConstructCalibrationData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMrcCalibrationData**)Z_Param__Result=P_THIS->ConstructCalibrationData_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execLoadConfiguration)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadConfiguration(Z_Param_SlotName,Z_Param_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execLoadDefaultConfiguration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadDefaultConfiguration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execSaveConfiguration_K2)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveConfiguration_K2(Z_Param_SlotName,Z_Param_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMixedRealityCaptureComponent::execSaveAsDefaultConfiguration_K2)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveAsDefaultConfiguration_K2();
		P_NATIVE_END;
	}
	struct MixedRealityCaptureComponent_eventApplyCalibrationData_Parms
	{
		UMrcCalibrationData* ConfigData;
	};
	struct MixedRealityCaptureComponent_eventConstructCalibrationData_Parms
	{
		UMrcCalibrationData* ReturnValue;

		/** Constructor, initializes return property only **/
		MixedRealityCaptureComponent_eventConstructCalibrationData_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	static FName NAME_UMixedRealityCaptureComponent_ApplyCalibrationData = FName(TEXT("ApplyCalibrationData"));
	void UMixedRealityCaptureComponent::ApplyCalibrationData(UMrcCalibrationData* ConfigData)
	{
		MixedRealityCaptureComponent_eventApplyCalibrationData_Parms Parms;
		Parms.ConfigData=ConfigData;
		ProcessEvent(FindFunctionChecked(NAME_UMixedRealityCaptureComponent_ApplyCalibrationData),&Parms);
	}
	static FName NAME_UMixedRealityCaptureComponent_ConstructCalibrationData = FName(TEXT("ConstructCalibrationData"));
	UMrcCalibrationData* UMixedRealityCaptureComponent::ConstructCalibrationData() const
	{
		MixedRealityCaptureComponent_eventConstructCalibrationData_Parms Parms;
		const_cast<UMixedRealityCaptureComponent*>(this)->ProcessEvent(FindFunctionChecked(NAME_UMixedRealityCaptureComponent_ConstructCalibrationData),&Parms);
		return Parms.ReturnValue;
	}
	void UMixedRealityCaptureComponent::StaticRegisterNativesUMixedRealityCaptureComponent()
	{
		UClass* Class = UMixedRealityCaptureComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyCalibrationData", &UMixedRealityCaptureComponent::execApplyCalibrationData },
			{ "ConstructCalibrationData", &UMixedRealityCaptureComponent::execConstructCalibrationData },
			{ "DetatchFromDevice", &UMixedRealityCaptureComponent::execDetatchFromDevice },
			{ "FillOutCalibrationData", &UMixedRealityCaptureComponent::execFillOutCalibrationData },
			{ "GetProjectionActor_K2", &UMixedRealityCaptureComponent::execGetProjectionActor_K2 },
			{ "GetTrackingDelay", &UMixedRealityCaptureComponent::execGetTrackingDelay },
			{ "IsTracked", &UMixedRealityCaptureComponent::execIsTracked },
			{ "LoadConfiguration", &UMixedRealityCaptureComponent::execLoadConfiguration },
			{ "LoadDefaultConfiguration", &UMixedRealityCaptureComponent::execLoadDefaultConfiguration },
			{ "OnVideoFeedOpened", &UMixedRealityCaptureComponent::execOnVideoFeedOpened },
			{ "SaveAsDefaultConfiguration_K2", &UMixedRealityCaptureComponent::execSaveAsDefaultConfiguration_K2 },
			{ "SaveConfiguration_K2", &UMixedRealityCaptureComponent::execSaveConfiguration_K2 },
			{ "SetCaptureDevice", &UMixedRealityCaptureComponent::execSetCaptureDevice },
			{ "SetDeviceAttachment", &UMixedRealityCaptureComponent::execSetDeviceAttachment },
			{ "SetEnableProjectionDepthTracking", &UMixedRealityCaptureComponent::execSetEnableProjectionDepthTracking },
			{ "SetGarbageMatteActor", &UMixedRealityCaptureComponent::execSetGarbageMatteActor },
			{ "SetLensDistortionParameters", &UMixedRealityCaptureComponent::execSetLensDistortionParameters },
			{ "SetProjectionDepthOffset", &UMixedRealityCaptureComponent::execSetProjectionDepthOffset },
			{ "SetTrackingDelay", &UMixedRealityCaptureComponent::execSetTrackingDelay },
			{ "SetVidProcessingParams", &UMixedRealityCaptureComponent::execSetVidProcessingParams },
			{ "SetVidProjectionMat", &UMixedRealityCaptureComponent::execSetVidProjectionMat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_ApplyCalibrationData_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfigData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_ApplyCalibrationData_Statics::NewProp_ConfigData = { "ConfigData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureComponent_eventApplyCalibrationData_Parms, ConfigData), Z_Construct_UClass_UMrcCalibrationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_ApplyCalibrationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_ApplyCalibrationData_Statics::NewProp_ConfigData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_ApplyCalibrationData_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|Calibration" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_ApplyCalibrationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "ApplyCalibrationData", nullptr, nullptr, sizeof(MixedRealityCaptureComponent_eventApplyCalibrationData_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_ApplyCalibrationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_ApplyCalibrationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_ApplyCalibrationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_ApplyCalibrationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_ApplyCalibrationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_ApplyCalibrationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_ConstructCalibrationData_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_ConstructCalibrationData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureComponent_eventConstructCalibrationData_Parms, ReturnValue), Z_Construct_UClass_UMrcCalibrationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_ConstructCalibrationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_ConstructCalibrationData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_ConstructCalibrationData_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|Calibration" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_ConstructCalibrationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "ConstructCalibrationData", nullptr, nullptr, sizeof(MixedRealityCaptureComponent_eventConstructCalibrationData_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_ConstructCalibrationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_ConstructCalibrationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_ConstructCalibrationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_ConstructCalibrationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_ConstructCalibrationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_ConstructCalibrationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_DetatchFromDevice_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_DetatchFromDevice_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|Tracking" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_DetatchFromDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "DetatchFromDevice", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_DetatchFromDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_DetatchFromDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_DetatchFromDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_DetatchFromDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_FillOutCalibrationData_Statics
	{
		struct MixedRealityCaptureComponent_eventFillOutCalibrationData_Parms
		{
			UMrcCalibrationData* Dst;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Dst;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_FillOutCalibrationData_Statics::NewProp_Dst = { "Dst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureComponent_eventFillOutCalibrationData_Parms, Dst), Z_Construct_UClass_UMrcCalibrationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_FillOutCalibrationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_FillOutCalibrationData_Statics::NewProp_Dst,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_FillOutCalibrationData_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|Calibration" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_FillOutCalibrationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "FillOutCalibrationData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMixedRealityCaptureComponent_FillOutCalibrationData_Statics::MixedRealityCaptureComponent_eventFillOutCalibrationData_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_FillOutCalibrationData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_FillOutCalibrationData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_FillOutCalibrationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_FillOutCalibrationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_FillOutCalibrationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_FillOutCalibrationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_GetProjectionActor_K2_Statics
	{
		struct MixedRealityCaptureComponent_eventGetProjectionActor_K2_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_GetProjectionActor_K2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureComponent_eventGetProjectionActor_K2_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_GetProjectionActor_K2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_GetProjectionActor_K2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_GetProjectionActor_K2_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|Projection" },
		{ "DisplayName", "GetProjectionActor" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_GetProjectionActor_K2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "GetProjectionActor_K2", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMixedRealityCaptureComponent_GetProjectionActor_K2_Statics::MixedRealityCaptureComponent_eventGetProjectionActor_K2_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_GetProjectionActor_K2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_GetProjectionActor_K2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_GetProjectionActor_K2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_GetProjectionActor_K2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_GetProjectionActor_K2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_GetProjectionActor_K2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_GetTrackingDelay_Statics
	{
		struct MixedRealityCaptureComponent_eventGetTrackingDelay_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_GetTrackingDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureComponent_eventGetTrackingDelay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_GetTrackingDelay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_GetTrackingDelay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_GetTrackingDelay_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_GetTrackingDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "GetTrackingDelay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMixedRealityCaptureComponent_GetTrackingDelay_Statics::MixedRealityCaptureComponent_eventGetTrackingDelay_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_GetTrackingDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_GetTrackingDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_GetTrackingDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_GetTrackingDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_GetTrackingDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_GetTrackingDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_IsTracked_Statics
	{
		struct MixedRealityCaptureComponent_eventIsTracked_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMixedRealityCaptureComponent_IsTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MixedRealityCaptureComponent_eventIsTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_IsTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MixedRealityCaptureComponent_eventIsTracked_Parms), &Z_Construct_UFunction_UMixedRealityCaptureComponent_IsTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_IsTracked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_IsTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_IsTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|Tracking" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_IsTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "IsTracked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMixedRealityCaptureComponent_IsTracked_Statics::MixedRealityCaptureComponent_eventIsTracked_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_IsTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_IsTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_IsTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_IsTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_IsTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_IsTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics
	{
		struct MixedRealityCaptureComponent_eventLoadConfiguration_Parms
		{
			FString SlotName;
			int32 UserIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureComponent_eventLoadConfiguration_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::NewProp_SlotName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureComponent_eventLoadConfiguration_Parms, UserIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MixedRealityCaptureComponent_eventLoadConfiguration_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MixedRealityCaptureComponent_eventLoadConfiguration_Parms), &Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|Calibration" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "LoadConfiguration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::MixedRealityCaptureComponent_eventLoadConfiguration_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadDefaultConfiguration_Statics
	{
		struct MixedRealityCaptureComponent_eventLoadDefaultConfiguration_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadDefaultConfiguration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MixedRealityCaptureComponent_eventLoadDefaultConfiguration_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadDefaultConfiguration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MixedRealityCaptureComponent_eventLoadDefaultConfiguration_Parms), &Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadDefaultConfiguration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadDefaultConfiguration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadDefaultConfiguration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadDefaultConfiguration_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|Calibration" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadDefaultConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "LoadDefaultConfiguration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadDefaultConfiguration_Statics::MixedRealityCaptureComponent_eventLoadDefaultConfiguration_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadDefaultConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadDefaultConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadDefaultConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadDefaultConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadDefaultConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadDefaultConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_OnVideoFeedOpened_Statics
	{
		struct MixedRealityCaptureComponent_eventOnVideoFeedOpened_Parms
		{
			FMrcVideoCaptureFeedIndex FeedRef;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeedRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FeedRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_OnVideoFeedOpened_Statics::NewProp_FeedRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_OnVideoFeedOpened_Statics::NewProp_FeedRef = { "FeedRef", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureComponent_eventOnVideoFeedOpened_Parms, FeedRef), Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_OnVideoFeedOpened_Statics::NewProp_FeedRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_OnVideoFeedOpened_Statics::NewProp_FeedRef_MetaData)) }; // 628712410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_OnVideoFeedOpened_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_OnVideoFeedOpened_Statics::NewProp_FeedRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_OnVideoFeedOpened_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// needs to be a UFunction for binding purposes\n" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
		{ "ToolTip", "needs to be a UFunction for binding purposes" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_OnVideoFeedOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "OnVideoFeedOpened", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMixedRealityCaptureComponent_OnVideoFeedOpened_Statics::MixedRealityCaptureComponent_eventOnVideoFeedOpened_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_OnVideoFeedOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_OnVideoFeedOpened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_OnVideoFeedOpened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_OnVideoFeedOpened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_OnVideoFeedOpened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_OnVideoFeedOpened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveAsDefaultConfiguration_K2_Statics
	{
		struct MixedRealityCaptureComponent_eventSaveAsDefaultConfiguration_K2_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveAsDefaultConfiguration_K2_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MixedRealityCaptureComponent_eventSaveAsDefaultConfiguration_K2_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveAsDefaultConfiguration_K2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MixedRealityCaptureComponent_eventSaveAsDefaultConfiguration_K2_Parms), &Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveAsDefaultConfiguration_K2_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveAsDefaultConfiguration_K2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveAsDefaultConfiguration_K2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveAsDefaultConfiguration_K2_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|Calibration" },
		{ "Comment", "//~ Blueprint API\x09\n" },
		{ "DisplayName", "SaveAsDefaultConfiguration" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveAsDefaultConfiguration_K2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "SaveAsDefaultConfiguration_K2", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveAsDefaultConfiguration_K2_Statics::MixedRealityCaptureComponent_eventSaveAsDefaultConfiguration_K2_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveAsDefaultConfiguration_K2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveAsDefaultConfiguration_K2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveAsDefaultConfiguration_K2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveAsDefaultConfiguration_K2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveAsDefaultConfiguration_K2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveAsDefaultConfiguration_K2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics
	{
		struct MixedRealityCaptureComponent_eventSaveConfiguration_K2_Parms
		{
			FString SlotName;
			int32 UserIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureComponent_eventSaveConfiguration_K2_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::NewProp_SlotName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureComponent_eventSaveConfiguration_K2_Parms, UserIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MixedRealityCaptureComponent_eventSaveConfiguration_K2_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MixedRealityCaptureComponent_eventSaveConfiguration_K2_Parms), &Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|Calibration" },
		{ "DisplayName", "SaveConfiguration" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "SaveConfiguration_K2", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::MixedRealityCaptureComponent_eventSaveConfiguration_K2_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_SetCaptureDevice_Statics
	{
		struct MixedRealityCaptureComponent_eventSetCaptureDevice_Parms
		{
			FMrcVideoCaptureFeedIndex FeedRef;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeedRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FeedRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_SetCaptureDevice_Statics::NewProp_FeedRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SetCaptureDevice_Statics::NewProp_FeedRef = { "FeedRef", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureComponent_eventSetCaptureDevice_Parms, FeedRef), Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetCaptureDevice_Statics::NewProp_FeedRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetCaptureDevice_Statics::NewProp_FeedRef_MetaData)) }; // 628712410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_SetCaptureDevice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_SetCaptureDevice_Statics::NewProp_FeedRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_SetCaptureDevice_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SetCaptureDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "SetCaptureDevice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetCaptureDevice_Statics::MixedRealityCaptureComponent_eventSetCaptureDevice_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_SetCaptureDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetCaptureDevice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetCaptureDevice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetCaptureDevice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_SetCaptureDevice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_SetCaptureDevice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_SetDeviceAttachment_Statics
	{
		struct MixedRealityCaptureComponent_eventSetDeviceAttachment_Parms
		{
			FName SourceName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SetDeviceAttachment_Statics::NewProp_SourceName = { "SourceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureComponent_eventSetDeviceAttachment_Parms, SourceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_SetDeviceAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_SetDeviceAttachment_Statics::NewProp_SourceName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_SetDeviceAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|Tracking" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SetDeviceAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "SetDeviceAttachment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetDeviceAttachment_Statics::MixedRealityCaptureComponent_eventSetDeviceAttachment_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_SetDeviceAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetDeviceAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetDeviceAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetDeviceAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_SetDeviceAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_SetDeviceAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_SetEnableProjectionDepthTracking_Statics
	{
		struct MixedRealityCaptureComponent_eventSetEnableProjectionDepthTracking_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMixedRealityCaptureComponent_SetEnableProjectionDepthTracking_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((MixedRealityCaptureComponent_eventSetEnableProjectionDepthTracking_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SetEnableProjectionDepthTracking_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MixedRealityCaptureComponent_eventSetEnableProjectionDepthTracking_Parms), &Z_Construct_UFunction_UMixedRealityCaptureComponent_SetEnableProjectionDepthTracking_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_SetEnableProjectionDepthTracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_SetEnableProjectionDepthTracking_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_SetEnableProjectionDepthTracking_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/** \n\x09 * Enabled by default, the projection plane tracks with the HMD to simulate \n\x09 * the depth of the player. Disable to keep the projection plane from moving.\n\x09 */" },
		{ "CPP_Default_bEnable", "true" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
		{ "ToolTip", "Enabled by default, the projection plane tracks with the HMD to simulate\nthe depth of the player. Disable to keep the projection plane from moving." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SetEnableProjectionDepthTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "SetEnableProjectionDepthTracking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetEnableProjectionDepthTracking_Statics::MixedRealityCaptureComponent_eventSetEnableProjectionDepthTracking_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_SetEnableProjectionDepthTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetEnableProjectionDepthTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetEnableProjectionDepthTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetEnableProjectionDepthTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_SetEnableProjectionDepthTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_SetEnableProjectionDepthTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_SetGarbageMatteActor_Statics
	{
		struct MixedRealityCaptureComponent_eventSetGarbageMatteActor_Parms
		{
			AMrcGarbageMatteActor* Actor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SetGarbageMatteActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureComponent_eventSetGarbageMatteActor_Parms, Actor), Z_Construct_UClass_AMrcGarbageMatteActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMixedRealityCaptureComponent_SetGarbageMatteActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MixedRealityCaptureComponent_eventSetGarbageMatteActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SetGarbageMatteActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MixedRealityCaptureComponent_eventSetGarbageMatteActor_Parms), &Z_Construct_UFunction_UMixedRealityCaptureComponent_SetGarbageMatteActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_SetGarbageMatteActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_SetGarbageMatteActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_SetGarbageMatteActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_SetGarbageMatteActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "MixedRealityCapture|GarbageMatting" },
		{ "Comment", "/**\n\x09 * Set an external garbage matte actor to be used instead of the mixed reality component's\n\x09 * normal configuration save game based actor.  This is used during garbage matte setup to\n\x09 * preview the garbage mask in realtime.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
		{ "ToolTip", "Set an external garbage matte actor to be used instead of the mixed reality component's\nnormal configuration save game based actor.  This is used during garbage matte setup to\npreview the garbage mask in realtime." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SetGarbageMatteActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "SetGarbageMatteActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetGarbageMatteActor_Statics::MixedRealityCaptureComponent_eventSetGarbageMatteActor_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_SetGarbageMatteActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetGarbageMatteActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetGarbageMatteActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetGarbageMatteActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_SetGarbageMatteActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_SetGarbageMatteActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_SetLensDistortionParameters_Statics
	{
		struct MixedRealityCaptureComponent_eventSetLensDistortionParameters_Parms
		{
			FOpenCVLensDistortionParameters ModelRef;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModelRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_SetLensDistortionParameters_Statics::NewProp_ModelRef_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SetLensDistortionParameters_Statics::NewProp_ModelRef = { "ModelRef", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureComponent_eventSetLensDistortionParameters_Parms, ModelRef), Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetLensDistortionParameters_Statics::NewProp_ModelRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetLensDistortionParameters_Statics::NewProp_ModelRef_MetaData)) }; // 1893023535
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_SetLensDistortionParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_SetLensDistortionParameters_Statics::NewProp_ModelRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_SetLensDistortionParameters_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SetLensDistortionParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "SetLensDistortionParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetLensDistortionParameters_Statics::MixedRealityCaptureComponent_eventSetLensDistortionParameters_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_SetLensDistortionParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetLensDistortionParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetLensDistortionParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetLensDistortionParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_SetLensDistortionParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_SetLensDistortionParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_SetProjectionDepthOffset_Statics
	{
		struct MixedRealityCaptureComponent_eventSetProjectionDepthOffset_Parms
		{
			float DepthOffset;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DepthOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SetProjectionDepthOffset_Statics::NewProp_DepthOffset = { "DepthOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureComponent_eventSetProjectionDepthOffset_Parms, DepthOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_SetProjectionDepthOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_SetProjectionDepthOffset_Statics::NewProp_DepthOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_SetProjectionDepthOffset_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SetProjectionDepthOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "SetProjectionDepthOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetProjectionDepthOffset_Statics::MixedRealityCaptureComponent_eventSetProjectionDepthOffset_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_SetProjectionDepthOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetProjectionDepthOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetProjectionDepthOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetProjectionDepthOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_SetProjectionDepthOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_SetProjectionDepthOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_SetTrackingDelay_Statics
	{
		struct MixedRealityCaptureComponent_eventSetTrackingDelay_Parms
		{
			int32 DelayMS;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_DelayMS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SetTrackingDelay_Statics::NewProp_DelayMS = { "DelayMS", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureComponent_eventSetTrackingDelay_Parms, DelayMS), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_SetTrackingDelay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_SetTrackingDelay_Statics::NewProp_DelayMS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_SetTrackingDelay_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SetTrackingDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "SetTrackingDelay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetTrackingDelay_Statics::MixedRealityCaptureComponent_eventSetTrackingDelay_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_SetTrackingDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetTrackingDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetTrackingDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetTrackingDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_SetTrackingDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_SetTrackingDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProcessingParams_Statics
	{
		struct MixedRealityCaptureComponent_eventSetVidProcessingParams_Parms
		{
			FMrcVideoProcessingParams NewVidProcessingParams;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewVidProcessingParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewVidProcessingParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProcessingParams_Statics::NewProp_NewVidProcessingParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProcessingParams_Statics::NewProp_NewVidProcessingParams = { "NewVidProcessingParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureComponent_eventSetVidProcessingParams_Parms, NewVidProcessingParams), Z_Construct_UScriptStruct_FMrcVideoProcessingParams, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProcessingParams_Statics::NewProp_NewVidProcessingParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProcessingParams_Statics::NewProp_NewVidProcessingParams_MetaData)) }; // 1034952718
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProcessingParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProcessingParams_Statics::NewProp_NewVidProcessingParams,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProcessingParams_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProcessingParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "SetVidProcessingParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProcessingParams_Statics::MixedRealityCaptureComponent_eventSetVidProcessingParams_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProcessingParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProcessingParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProcessingParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProcessingParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProcessingParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProcessingParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProjectionMat_Statics
	{
		struct MixedRealityCaptureComponent_eventSetVidProjectionMat_Parms
		{
			UMaterialInterface* NewMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProjectionMat_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MixedRealityCaptureComponent_eventSetVidProjectionMat_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProjectionMat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProjectionMat_Statics::NewProp_NewMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProjectionMat_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProjectionMat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCaptureComponent, nullptr, "SetVidProjectionMat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProjectionMat_Statics::MixedRealityCaptureComponent_eventSetVidProjectionMat_Parms), Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProjectionMat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProjectionMat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProjectionMat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProjectionMat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProjectionMat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProjectionMat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMixedRealityCaptureComponent);
	UClass* Z_Construct_UClass_UMixedRealityCaptureComponent_NoRegister()
	{
		return UMixedRealityCaptureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMixedRealityCaptureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoProcessingMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VideoProcessingMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VideoProcessingParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VideoProcessingParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureFeedRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureFeedRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensDistortionParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensDistortionParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingSourceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackingSourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GarbageMatteCaptureTextureTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GarbageMatteCaptureTextureTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingLatency_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrackingLatency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLoadConfiguration_MetaData[];
#endif
		static void NewProp_bAutoLoadConfiguration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLoadConfiguration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDepthOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionDepthOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProjectionDepthTracking_MetaData[];
#endif
		static void NewProp_bProjectionDepthTracking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectionDepthTracking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCaptureSourceOpened_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCaptureSourceOpened;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProxyMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProxyMeshComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ProjectionActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PairedTracker_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PairedTracker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackingOriginOffset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TrackingOriginOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GarbageMatteCaptureComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GarbageMatteCaptureComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionDisplacementMap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DistortionDisplacementMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent2D,
		(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityCaptureFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_ApplyCalibrationData, "ApplyCalibrationData" }, // 1739713937
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_ConstructCalibrationData, "ConstructCalibrationData" }, // 3936473757
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_DetatchFromDevice, "DetatchFromDevice" }, // 2246460444
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_FillOutCalibrationData, "FillOutCalibrationData" }, // 2381590530
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_GetProjectionActor_K2, "GetProjectionActor_K2" }, // 1129647727
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_GetTrackingDelay, "GetTrackingDelay" }, // 2729912512
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_IsTracked, "IsTracked" }, // 2757096166
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadConfiguration, "LoadConfiguration" }, // 1095605827
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_LoadDefaultConfiguration, "LoadDefaultConfiguration" }, // 3568691828
		{ &Z_Construct_UDelegateFunction_UMixedRealityCaptureComponent_MRCaptureFeedOpenedDelegate__DelegateSignature, "MRCaptureFeedOpenedDelegate__DelegateSignature" }, // 1667714000
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_OnVideoFeedOpened, "OnVideoFeedOpened" }, // 509516475
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveAsDefaultConfiguration_K2, "SaveAsDefaultConfiguration_K2" }, // 3323633518
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_SaveConfiguration_K2, "SaveConfiguration_K2" }, // 846288815
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_SetCaptureDevice, "SetCaptureDevice" }, // 3600140324
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_SetDeviceAttachment, "SetDeviceAttachment" }, // 3469313365
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_SetEnableProjectionDepthTracking, "SetEnableProjectionDepthTracking" }, // 3949568156
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_SetGarbageMatteActor, "SetGarbageMatteActor" }, // 694055789
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_SetLensDistortionParameters, "SetLensDistortionParameters" }, // 2346949756
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_SetProjectionDepthOffset, "SetProjectionDepthOffset" }, // 1704028152
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_SetTrackingDelay, "SetTrackingDelay" }, // 1295811143
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProcessingParams, "SetVidProcessingParams" }, // 282640319
		{ &Z_Construct_UFunction_UMixedRealityCaptureComponent_SetVidProjectionMat, "SetVidProjectionMat" }, // 1170650229
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n *\x09\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "MixedRealityCaptureComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_MediaSource_MetaData[] = {
		{ "Category", "VideoCapture" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_MediaSource = { "MediaSource", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMixedRealityCaptureComponent, MediaSource), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_MediaSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_MediaSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_VideoProcessingMaterial_MetaData[] = {
		{ "BlueprintSetter", "SetVidProjectionMat" },
		{ "Category", "Composition" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_VideoProcessingMaterial = { "VideoProcessingMaterial", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMixedRealityCaptureComponent, VideoProcessingMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_VideoProcessingMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_VideoProcessingMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_VideoProcessingParams_MetaData[] = {
		{ "BlueprintSetter", "SetVidProcessingParams" },
		{ "Category", "Composition" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_VideoProcessingParams = { "VideoProcessingParams", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMixedRealityCaptureComponent, VideoProcessingParams), Z_Construct_UScriptStruct_FMrcVideoProcessingParams, METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_VideoProcessingParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_VideoProcessingParams_MetaData)) }; // 1034952718
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_CaptureFeedRef_MetaData[] = {
		{ "BlueprintSetter", "SetCaptureDevice" },
		{ "Category", "Composition" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_CaptureFeedRef = { "CaptureFeedRef", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMixedRealityCaptureComponent, CaptureFeedRef), Z_Construct_UScriptStruct_FMrcVideoCaptureFeedIndex, METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_CaptureFeedRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_CaptureFeedRef_MetaData)) }; // 628712410
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_LensDistortionParameters_MetaData[] = {
		{ "BlueprintSetter", "SetLensDistortionParameters" },
		{ "Category", "VideoCapture" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_LensDistortionParameters = { "LensDistortionParameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMixedRealityCaptureComponent, LensDistortionParameters), Z_Construct_UScriptStruct_FOpenCVLensDistortionParameters, METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_LensDistortionParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_LensDistortionParameters_MetaData)) }; // 1893023535
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_TrackingSourceName_MetaData[] = {
		{ "Category", "Tracking" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_TrackingSourceName = { "TrackingSourceName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMixedRealityCaptureComponent, TrackingSourceName), METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_TrackingSourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_TrackingSourceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_GarbageMatteCaptureTextureTarget_MetaData[] = {
		{ "Category", "Composition" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_GarbageMatteCaptureTextureTarget = { "GarbageMatteCaptureTextureTarget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMixedRealityCaptureComponent, GarbageMatteCaptureTextureTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_GarbageMatteCaptureTextureTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_GarbageMatteCaptureTextureTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_TrackingLatency_MetaData[] = {
		{ "BlueprintGetter", "GetTrackingDelay" },
		{ "BlueprintSetter", "SetTrackingDelay" },
		{ "Category", "Composition" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Millisecond delay to apply to motion controller components when rendering to the capture view (to better align with latent camera feeds) */" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
		{ "ToolTip", "Millisecond delay to apply to motion controller components when rendering to the capture view (to better align with latent camera feeds)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_TrackingLatency = { "TrackingLatency", nullptr, (EPropertyFlags)0x0010000000004004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMixedRealityCaptureComponent, TrackingLatency), METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_TrackingLatency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_TrackingLatency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_bAutoLoadConfiguration_MetaData[] = {
		{ "Category", "Calibration" },
		{ "Comment", "/** Determines if this component should attempt to load the default MR calibration file on initialization */" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
		{ "ToolTip", "Determines if this component should attempt to load the default MR calibration file on initialization" },
	};
#endif
	void Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_bAutoLoadConfiguration_SetBit(void* Obj)
	{
		((UMixedRealityCaptureComponent*)Obj)->bAutoLoadConfiguration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_bAutoLoadConfiguration = { "bAutoLoadConfiguration", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMixedRealityCaptureComponent), &Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_bAutoLoadConfiguration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_bAutoLoadConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_bAutoLoadConfiguration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProjectionDepthOffset_MetaData[] = {
		{ "BlueprintSetter", "SetProjectionDepthOffset" },
		{ "Category", "Composition" },
		{ "Comment", "/** Depth offset (in UE units) for the card that the camera feed is projected onto. By default the card is aligned with the HMD. */" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
		{ "ToolTip", "Depth offset (in UE units) for the card that the camera feed is projected onto. By default the card is aligned with the HMD." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProjectionDepthOffset = { "ProjectionDepthOffset", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMixedRealityCaptureComponent, ProjectionDepthOffset), METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProjectionDepthOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProjectionDepthOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_bProjectionDepthTracking_MetaData[] = {
		{ "BlueprintSetter", "SetEnableProjectionDepthTracking" },
		{ "Category", "Tracking" },
		{ "Comment", "/** Enabled by default, the projection plane tracks with the HMD to simulate the depth of the player. Disable to keep the projection plane from moving. */" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
		{ "ToolTip", "Enabled by default, the projection plane tracks with the HMD to simulate the depth of the player. Disable to keep the projection plane from moving." },
	};
#endif
	void Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_bProjectionDepthTracking_SetBit(void* Obj)
	{
		((UMixedRealityCaptureComponent*)Obj)->bProjectionDepthTracking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_bProjectionDepthTracking = { "bProjectionDepthTracking", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMixedRealityCaptureComponent), &Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_bProjectionDepthTracking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_bProjectionDepthTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_bProjectionDepthTracking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_OnCaptureSourceOpened_MetaData[] = {
		{ "Category", "VideoCapture" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_OnCaptureSourceOpened = { "OnCaptureSourceOpened", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMixedRealityCaptureComponent, OnCaptureSourceOpened), Z_Construct_UDelegateFunction_UMixedRealityCaptureComponent_MRCaptureFeedOpenedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_OnCaptureSourceOpened_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_OnCaptureSourceOpened_MetaData)) }; // 1667714000
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProxyMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProxyMesh = { "ProxyMesh", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMixedRealityCaptureComponent, ProxyMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProxyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProxyMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProxyMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProxyMeshComponent = { "ProxyMeshComponent", nullptr, (EPropertyFlags)0x0044000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMixedRealityCaptureComponent, ProxyMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProxyMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProxyMeshComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProjectionActor_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProjectionActor = { "ProjectionActor", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMixedRealityCaptureComponent, ProjectionActor), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProjectionActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProjectionActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_PairedTracker_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_PairedTracker = { "PairedTracker", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMixedRealityCaptureComponent, PairedTracker), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_PairedTracker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_PairedTracker_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_TrackingOriginOffset_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_TrackingOriginOffset = { "TrackingOriginOffset", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMixedRealityCaptureComponent, TrackingOriginOffset), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_TrackingOriginOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_TrackingOriginOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_GarbageMatteCaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_GarbageMatteCaptureComponent = { "GarbageMatteCaptureComponent", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMixedRealityCaptureComponent, GarbageMatteCaptureComponent), Z_Construct_UClass_UMrcGarbageMatteCaptureComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_GarbageMatteCaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_GarbageMatteCaptureComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_DistortionDisplacementMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/MixedRealityCaptureComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_DistortionDisplacementMap = { "DistortionDisplacementMap", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMixedRealityCaptureComponent, DistortionDisplacementMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_DistortionDisplacementMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_DistortionDisplacementMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_MediaSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_VideoProcessingMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_VideoProcessingParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_CaptureFeedRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_LensDistortionParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_TrackingSourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_GarbageMatteCaptureTextureTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_TrackingLatency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_bAutoLoadConfiguration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProjectionDepthOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_bProjectionDepthTracking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_OnCaptureSourceOpened,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProxyMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProxyMeshComponent,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_ProjectionActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_PairedTracker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_TrackingOriginOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_GarbageMatteCaptureComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::NewProp_DistortionDisplacementMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMixedRealityCaptureComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::ClassParams = {
		&UMixedRealityCaptureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMixedRealityCaptureComponent()
	{
		if (!Z_Registration_Info_UClass_UMixedRealityCaptureComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMixedRealityCaptureComponent.OuterSingleton, Z_Construct_UClass_UMixedRealityCaptureComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMixedRealityCaptureComponent.OuterSingleton;
	}
	template<> MIXEDREALITYCAPTUREFRAMEWORK_API UClass* StaticClass<UMixedRealityCaptureComponent>()
	{
		return UMixedRealityCaptureComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMixedRealityCaptureComponent);
	UMixedRealityCaptureComponent::~UMixedRealityCaptureComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMixedRealityCaptureComponent, UMixedRealityCaptureComponent::StaticClass, TEXT("UMixedRealityCaptureComponent"), &Z_Registration_Info_UClass_UMixedRealityCaptureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMixedRealityCaptureComponent), 142102795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_4254442862(TEXT("/Script/MixedRealityCaptureFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MixedRealityCaptureFramework_Source_MixedRealityCaptureFramework_Public_MixedRealityCaptureComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
