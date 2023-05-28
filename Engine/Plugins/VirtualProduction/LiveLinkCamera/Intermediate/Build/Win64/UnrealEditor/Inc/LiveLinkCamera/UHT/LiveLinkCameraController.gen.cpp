// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkCameraController.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "CineCameraSettings.h"
#include "Controllers/LiveLinkTransformController.h"
#include "LensFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkCameraController() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLensFilePicker();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
	LIVELINKCAMERA_API UClass* Z_Construct_UClass_ULiveLinkCameraController();
	LIVELINKCAMERA_API UClass* Z_Construct_UClass_ULiveLinkCameraController_NoRegister();
	LIVELINKCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags();
	LIVELINKCOMPONENTS_API UClass* Z_Construct_UClass_ULiveLinkControllerBase();
	LIVELINKCOMPONENTS_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkTransformControllerData();
	UPackage* Z_Construct_UPackage__Script_LiveLinkCamera();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkCameraControllerUpdateFlags;
class UScriptStruct* FLiveLinkCameraControllerUpdateFlags::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkCameraControllerUpdateFlags.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkCameraControllerUpdateFlags.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags, (UObject*)Z_Construct_UPackage__Script_LiveLinkCamera(), TEXT("LiveLinkCameraControllerUpdateFlags"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkCameraControllerUpdateFlags.OuterSingleton;
}
template<> LIVELINKCAMERA_API UScriptStruct* StaticStruct<FLiveLinkCameraControllerUpdateFlags>()
{
	return FLiveLinkCameraControllerUpdateFlags::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyFieldOfView_MetaData[];
#endif
		static void NewProp_bApplyFieldOfView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyFieldOfView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyAspectRatio_MetaData[];
#endif
		static void NewProp_bApplyAspectRatio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyFocalLength_MetaData[];
#endif
		static void NewProp_bApplyFocalLength_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyFocalLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyProjectionMode_MetaData[];
#endif
		static void NewProp_bApplyProjectionMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyProjectionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyFilmBack_MetaData[];
#endif
		static void NewProp_bApplyFilmBack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyFilmBack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyAperture_MetaData[];
#endif
		static void NewProp_bApplyAperture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyAperture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyFocusDistance_MetaData[];
#endif
		static void NewProp_bApplyFocusDistance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyFocusDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Flags to control whether incoming values from LiveLink Camera FrameData should be applied or not */" },
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
		{ "ToolTip", "Flags to control whether incoming values from LiveLink Camera FrameData should be applied or not" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkCameraControllerUpdateFlags>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFieldOfView_MetaData[] = {
		{ "Category", "Updates" },
		{ "Comment", "/** Whether to apply FOV if it's available in LiveLink FrameData */" },
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
		{ "ToolTip", "Whether to apply FOV if it's available in LiveLink FrameData" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFieldOfView_SetBit(void* Obj)
	{
		((FLiveLinkCameraControllerUpdateFlags*)Obj)->bApplyFieldOfView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFieldOfView = { "bApplyFieldOfView", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkCameraControllerUpdateFlags), &Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFieldOfView_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFieldOfView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyAspectRatio_MetaData[] = {
		{ "Category", "Updates" },
		{ "Comment", "/** Whether to apply Aspect Ratio if it's available in LiveLink FrameData */" },
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
		{ "ToolTip", "Whether to apply Aspect Ratio if it's available in LiveLink FrameData" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyAspectRatio_SetBit(void* Obj)
	{
		((FLiveLinkCameraControllerUpdateFlags*)Obj)->bApplyAspectRatio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyAspectRatio = { "bApplyAspectRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkCameraControllerUpdateFlags), &Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFocalLength_MetaData[] = {
		{ "Category", "Updates" },
		{ "Comment", "/** Whether to apply Focal Length if it's available in LiveLink FrameData */" },
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
		{ "ToolTip", "Whether to apply Focal Length if it's available in LiveLink FrameData" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFocalLength_SetBit(void* Obj)
	{
		((FLiveLinkCameraControllerUpdateFlags*)Obj)->bApplyFocalLength = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFocalLength = { "bApplyFocalLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkCameraControllerUpdateFlags), &Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFocalLength_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFocalLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFocalLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyProjectionMode_MetaData[] = {
		{ "Category", "Updates" },
		{ "Comment", "/** Whether to apply Projection Mode if it's available in LiveLink FrameData */" },
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
		{ "ToolTip", "Whether to apply Projection Mode if it's available in LiveLink FrameData" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyProjectionMode_SetBit(void* Obj)
	{
		((FLiveLinkCameraControllerUpdateFlags*)Obj)->bApplyProjectionMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyProjectionMode = { "bApplyProjectionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkCameraControllerUpdateFlags), &Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyProjectionMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyProjectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyProjectionMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFilmBack_MetaData[] = {
		{ "Category", "Updates" },
		{ "Comment", "/** Whether to apply Filmback if it's available in LiveLink StaticData */" },
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
		{ "ToolTip", "Whether to apply Filmback if it's available in LiveLink StaticData" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFilmBack_SetBit(void* Obj)
	{
		((FLiveLinkCameraControllerUpdateFlags*)Obj)->bApplyFilmBack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFilmBack = { "bApplyFilmBack", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkCameraControllerUpdateFlags), &Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFilmBack_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFilmBack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFilmBack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyAperture_MetaData[] = {
		{ "Category", "Updates" },
		{ "Comment", "/** Whether to apply Aperture if it's available in LiveLink FrameData */" },
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
		{ "ToolTip", "Whether to apply Aperture if it's available in LiveLink FrameData" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyAperture_SetBit(void* Obj)
	{
		((FLiveLinkCameraControllerUpdateFlags*)Obj)->bApplyAperture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyAperture = { "bApplyAperture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkCameraControllerUpdateFlags), &Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyAperture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyAperture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyAperture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFocusDistance_MetaData[] = {
		{ "Category", "Updates" },
		{ "Comment", "/** Whether to apply Focus Distance if it's available in LiveLink FrameData */" },
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
		{ "ToolTip", "Whether to apply Focus Distance if it's available in LiveLink FrameData" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFocusDistance_SetBit(void* Obj)
	{
		((FLiveLinkCameraControllerUpdateFlags*)Obj)->bApplyFocusDistance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFocusDistance = { "bApplyFocusDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkCameraControllerUpdateFlags), &Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFocusDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFocusDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFocusDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFieldOfView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyProjectionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFilmBack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyAperture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewProp_bApplyFocusDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkCamera,
		nullptr,
		&NewStructOps,
		"LiveLinkCameraControllerUpdateFlags",
		sizeof(FLiveLinkCameraControllerUpdateFlags),
		alignof(FLiveLinkCameraControllerUpdateFlags),
		Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkCameraControllerUpdateFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkCameraControllerUpdateFlags.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkCameraControllerUpdateFlags.InnerSingleton;
	}
	void ULiveLinkCameraController::StaticRegisterNativesULiveLinkCameraController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkCameraController);
	UClass* Z_Construct_UClass_ULiveLinkCameraController_NoRegister()
	{
		return ULiveLinkCameraController::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkCameraController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentToControl_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentToControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCameraRange_MetaData[];
#endif
		static void NewProp_bUseCameraRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCameraRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensFilePicker_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LensFilePicker;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyNodalOffset_MetaData[];
#endif
		static void NewProp_bApplyNodalOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyNodalOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCroppedFilmback_MetaData[];
#endif
		static void NewProp_bUseCroppedFilmback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCroppedFilmback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CroppedFilmback_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CroppedFilmback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleOverscan_MetaData[];
#endif
		static void NewProp_bScaleOverscan_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleOverscan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverscanMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverscanMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalCameraRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalCameraRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalCameraLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalCameraLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensDistortionHandler_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LensDistortionHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionProducerID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionProducerID;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateFlags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateFlags;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldUpdateVisualComponentOnChange_MetaData[];
#endif
		static void NewProp_bShouldUpdateVisualComponentOnChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldUpdateVisualComponentOnChange;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkCameraController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkControllerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCameraController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n */" },
		{ "IncludePath", "LiveLinkCameraController.h" },
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_ComponentToControl_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_ComponentToControl = { "ComponentToControl", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkCameraController, ComponentToControl_DEPRECATED), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_ComponentToControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_ComponentToControl_MetaData)) }; // 1758507179
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_TransformData_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_TransformData = { "TransformData", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkCameraController, TransformData_DEPRECATED), Z_Construct_UScriptStruct_FLiveLinkTransformControllerData, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_TransformData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_TransformData_MetaData)) }; // 2924455617
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bUseCameraRange_MetaData[] = {
		{ "Category", "Camera Calibration" },
		{ "Comment", "/**\n\x09 * Should LiveLink inputs be remapped (i.e normalized to physical units) using camera component range\n\x09 */" },
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
		{ "ToolTip", "Should LiveLink inputs be remapped (i.e normalized to physical units) using camera component range" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bUseCameraRange_SetBit(void* Obj)
	{
		((ULiveLinkCameraController*)Obj)->bUseCameraRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bUseCameraRange = { "bUseCameraRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkCameraController), &Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bUseCameraRange_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bUseCameraRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bUseCameraRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_LensFilePicker_MetaData[] = {
		{ "Category", "Camera Calibration" },
		{ "Comment", "/** Asset containing encoder and fiz mapping */" },
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
		{ "ToolTip", "Asset containing encoder and fiz mapping" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_LensFilePicker = { "LensFilePicker", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkCameraController, LensFilePicker), Z_Construct_UScriptStruct_FLensFilePicker, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_LensFilePicker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_LensFilePicker_MetaData)) }; // 209465330
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bApplyNodalOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bApplyNodalOffset_SetBit(void* Obj)
	{
		((ULiveLinkCameraController*)Obj)->bApplyNodalOffset_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bApplyNodalOffset = { "bApplyNodalOffset", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkCameraController), &Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bApplyNodalOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bApplyNodalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bApplyNodalOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bUseCroppedFilmback_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bUseCroppedFilmback_SetBit(void* Obj)
	{
		((ULiveLinkCameraController*)Obj)->bUseCroppedFilmback_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bUseCroppedFilmback = { "bUseCroppedFilmback", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkCameraController), &Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bUseCroppedFilmback_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bUseCroppedFilmback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bUseCroppedFilmback_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_CroppedFilmback_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_CroppedFilmback = { "CroppedFilmback", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkCameraController, CroppedFilmback_DEPRECATED), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_CroppedFilmback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_CroppedFilmback_MetaData)) }; // 833749679
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bScaleOverscan_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bScaleOverscan_SetBit(void* Obj)
	{
		((ULiveLinkCameraController*)Obj)->bScaleOverscan_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bScaleOverscan = { "bScaleOverscan", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkCameraController), &Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bScaleOverscan_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bScaleOverscan_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bScaleOverscan_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_OverscanMultiplier_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_OverscanMultiplier = { "OverscanMultiplier", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkCameraController, OverscanMultiplier_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_OverscanMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_OverscanMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_OriginalCameraRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_OriginalCameraRotation = { "OriginalCameraRotation", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkCameraController, OriginalCameraRotation_DEPRECATED), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_OriginalCameraRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_OriginalCameraRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_OriginalCameraLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_OriginalCameraLocation = { "OriginalCameraLocation", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkCameraController, OriginalCameraLocation_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_OriginalCameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_OriginalCameraLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_LensDistortionHandler_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_LensDistortionHandler = { "LensDistortionHandler", nullptr, (EPropertyFlags)0x0024080820002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkCameraController, LensDistortionHandler_DEPRECATED), Z_Construct_UClass_ULensDistortionModelHandlerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_LensDistortionHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_LensDistortionHandler_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_DistortionProducerID_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_DistortionProducerID = { "DistortionProducerID", nullptr, (EPropertyFlags)0x0020080820200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkCameraController, DistortionProducerID_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_DistortionProducerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_DistortionProducerID_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_UpdateFlags_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Used to control which data from LiveLink is actually applied to camera */" },
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
		{ "ToolTip", "Used to control which data from LiveLink is actually applied to camera" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_UpdateFlags = { "UpdateFlags", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkCameraController, UpdateFlags), Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_UpdateFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_UpdateFlags_MetaData)) }; // 2192336396
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bShouldUpdateVisualComponentOnChange_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Whether to refresh frustum drawing on value change */" },
		{ "ModuleRelativePath", "Public/LiveLinkCameraController.h" },
		{ "ToolTip", "Whether to refresh frustum drawing on value change" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bShouldUpdateVisualComponentOnChange_SetBit(void* Obj)
	{
		((ULiveLinkCameraController*)Obj)->bShouldUpdateVisualComponentOnChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bShouldUpdateVisualComponentOnChange = { "bShouldUpdateVisualComponentOnChange", nullptr, (EPropertyFlags)0x0020080800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkCameraController), &Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bShouldUpdateVisualComponentOnChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bShouldUpdateVisualComponentOnChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bShouldUpdateVisualComponentOnChange_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkCameraController_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_ComponentToControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_TransformData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bUseCameraRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_LensFilePicker,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bApplyNodalOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bUseCroppedFilmback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_CroppedFilmback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bScaleOverscan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_OverscanMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_OriginalCameraRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_OriginalCameraLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_LensDistortionHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_DistortionProducerID,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_UpdateFlags,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkCameraController_Statics::NewProp_bShouldUpdateVisualComponentOnChange,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkCameraController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkCameraController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkCameraController_Statics::ClassParams = {
		&ULiveLinkCameraController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkCameraController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraController_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkCameraController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkCameraController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkCameraController()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkCameraController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkCameraController.OuterSingleton, Z_Construct_UClass_ULiveLinkCameraController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkCameraController.OuterSingleton;
	}
	template<> LIVELINKCAMERA_API UClass* StaticClass<ULiveLinkCameraController>()
	{
		return ULiveLinkCameraController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkCameraController);
	ULiveLinkCameraController::~ULiveLinkCameraController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCamera_Public_LiveLinkCameraController_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCamera_Public_LiveLinkCameraController_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkCameraControllerUpdateFlags::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkCameraControllerUpdateFlags_Statics::NewStructOps, TEXT("LiveLinkCameraControllerUpdateFlags"), &Z_Registration_Info_UScriptStruct_LiveLinkCameraControllerUpdateFlags, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkCameraControllerUpdateFlags), 2192336396U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCamera_Public_LiveLinkCameraController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkCameraController, ULiveLinkCameraController::StaticClass, TEXT("ULiveLinkCameraController"), &Z_Registration_Info_UClass_ULiveLinkCameraController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkCameraController), 442737068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCamera_Public_LiveLinkCameraController_h_620439772(TEXT("/Script/LiveLinkCamera"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCamera_Public_LiveLinkCameraController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCamera_Public_LiveLinkCameraController_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCamera_Public_LiveLinkCameraController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LiveLinkCamera_Source_LiveLinkCamera_Public_LiveLinkCameraController_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
