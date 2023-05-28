// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirtualCameraActor.h"
#include "LiveLinkRole.h"
#include "VirtualCameraSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualCameraActor() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation();
	REMOTESESSION_API UClass* Z_Construct_UClass_URemoteSessionMediaCapture_NoRegister();
	REMOTESESSION_API UClass* Z_Construct_UClass_URemoteSessionMediaOutput_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VirtualCamera();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_AVirtualCameraActor();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_AVirtualCameraActor_NoRegister();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraController_NoRegister();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraMovement_NoRegister();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraOptions_NoRegister();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraPresetContainer_NoRegister();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_OnActorClickedDelegate__DelegateSignature();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature();
	VIRTUALCAMERA_API UFunction* Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegateGroup__DelegateSignature();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPFullScreenUserWidget_NoRegister();
// End Cross Module References
	void AVirtualCameraActor::StaticRegisterNativesAVirtualCameraActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVirtualCameraActor);
	UClass* Z_Construct_UClass_AVirtualCameraActor_NoRegister()
	{
		return AVirtualCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_AVirtualCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneCaptureComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneCaptureComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiveLinkSubject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LiveLinkSubject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraUMGClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CameraUMGClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetDeviceResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetDeviceResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteSessionPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RemoteSessionPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraScreenWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraScreenWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaCapture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaCapture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorWorld_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousViewTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviousViewTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFocusVisualization_MetaData[];
#endif
		static void NewProp_bAllowFocusVisualization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFocusVisualization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPreSetVirtualCameraTransform_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnPreSetVirtualCameraTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnActorClickedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnActorClickedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnVirtualCameraUpdatedDelegates_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnVirtualCameraUpdatedDelegates;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsPresets_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SettingsPresets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsPresets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SettingsPresets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamedCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StreamedCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVirtualCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACineCameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "VirtualCamera" },
		{ "DisplayName", "VirtualCameraActor" },
		{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "VirtualCameraActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VirtualCameraActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_SceneCaptureComponent_MetaData[] = {
		{ "Category", "VirtualCamera | Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VirtualCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_SceneCaptureComponent = { "SceneCaptureComponent", nullptr, (EPropertyFlags)0x00140000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraActor, SceneCaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_SceneCaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_SceneCaptureComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_LiveLinkSubject_MetaData[] = {
		{ "Category", "VirtualCamera | Movement" },
		{ "ModuleRelativePath", "Public/VirtualCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_LiveLinkSubject = { "LiveLinkSubject", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraActor, LiveLinkSubject), Z_Construct_UScriptStruct_FLiveLinkSubjectRepresentation, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_LiveLinkSubject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_LiveLinkSubject_MetaData)) }; // 4150041114
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "Category", "VirtualCamera | Movement" },
		{ "ModuleRelativePath", "Public/VirtualCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0014000000020005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraActor, MovementComponent), Z_Construct_UClass_UVirtualCameraMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_MediaOutput_MetaData[] = {
		{ "Category", "VirtualCamera | MediaOutput" },
		{ "ModuleRelativePath", "Public/VirtualCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_MediaOutput = { "MediaOutput", nullptr, (EPropertyFlags)0x0014000000012001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraActor, MediaOutput), Z_Construct_UClass_URemoteSessionMediaOutput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_MediaOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_MediaOutput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_CameraUMGClass_MetaData[] = {
		{ "Category", "VirtualCamera | UMG" },
		{ "ModuleRelativePath", "Public/VirtualCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_CameraUMGClass = { "CameraUMGClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraActor, CameraUMGClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_CameraUMGClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_CameraUMGClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_TargetDeviceResolution_MetaData[] = {
		{ "Category", "VirtualCamera | Streaming" },
		{ "ModuleRelativePath", "Public/VirtualCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_TargetDeviceResolution = { "TargetDeviceResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraActor, TargetDeviceResolution), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_TargetDeviceResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_TargetDeviceResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_RemoteSessionPort_MetaData[] = {
		{ "Category", "VirtualCamera | Streaming" },
		{ "ModuleRelativePath", "Public/VirtualCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_RemoteSessionPort = { "RemoteSessionPort", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraActor, RemoteSessionPort), METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_RemoteSessionPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_RemoteSessionPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_CameraScreenWidget_MetaData[] = {
		{ "Category", "VirtualCamera | UMG" },
		{ "ModuleRelativePath", "Public/VirtualCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_CameraScreenWidget = { "CameraScreenWidget", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraActor, CameraScreenWidget), Z_Construct_UClass_UVPFullScreenUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_CameraScreenWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_CameraScreenWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_MediaCapture_MetaData[] = {
		{ "Category", "VirtualCamera | MediaOutput" },
		{ "ModuleRelativePath", "Public/VirtualCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_MediaCapture = { "MediaCapture", nullptr, (EPropertyFlags)0x0024080000012001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraActor, MediaCapture), Z_Construct_UClass_URemoteSessionMediaCapture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_MediaCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_MediaCapture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_ActorWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/VirtualCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_ActorWorld = { "ActorWorld", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraActor, ActorWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_ActorWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_ActorWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_PreviousViewTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/VirtualCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_PreviousViewTarget = { "PreviousViewTarget", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraActor, PreviousViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_PreviousViewTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_PreviousViewTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_bAllowFocusVisualization_MetaData[] = {
		{ "Category", "VirtualCamera | Focus" },
		{ "Comment", "/** Should focus plane be shown on all touch focus events */" },
		{ "ModuleRelativePath", "Public/VirtualCameraActor.h" },
		{ "ToolTip", "Should focus plane be shown on all touch focus events" },
	};
#endif
	void Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_bAllowFocusVisualization_SetBit(void* Obj)
	{
		((AVirtualCameraActor*)Obj)->bAllowFocusVisualization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_bAllowFocusVisualization = { "bAllowFocusVisualization", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AVirtualCameraActor), &Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_bAllowFocusVisualization_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_bAllowFocusVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_bAllowFocusVisualization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_OnPreSetVirtualCameraTransform_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * Delegate that will is triggered before transform is set onto Actor.\n\x09 * @param FVirtualCameraTransform Transform data that is passed to delegate.\n\x09 * @return FVirtualCameraTransform Manipulated transform that will be set onto Actor.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraActor.h" },
		{ "ToolTip", "Delegate that will is triggered before transform is set onto Actor.\n@param FVirtualCameraTransform Transform data that is passed to delegate.\n@return FVirtualCameraTransform Manipulated transform that will be set onto Actor." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_OnPreSetVirtualCameraTransform = { "OnPreSetVirtualCameraTransform", nullptr, (EPropertyFlags)0x0020080000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraActor, OnPreSetVirtualCameraTransform), Z_Construct_UDelegateFunction_VirtualCamera_PreSetVirtualCameraTransform__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_OnPreSetVirtualCameraTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_OnPreSetVirtualCameraTransform_MetaData)) }; // 718134135
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_OnActorClickedDelegate_MetaData[] = {
		{ "Category", "VirtualCamera | Focus" },
		{ "Comment", "/**\n\x09 * Delegate that will be triggered when an actor has been clicked/touched.\n\x09 * @note Delegate will run on Touch/Mouse-Down\n\x09 * @param AActor* Pointer to the actor that was clicked.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraActor.h" },
		{ "ToolTip", "Delegate that will be triggered when an actor has been clicked/touched.\n@note Delegate will run on Touch/Mouse-Down\n@param AActor* Pointer to the actor that was clicked." },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_OnActorClickedDelegate = { "OnActorClickedDelegate", nullptr, (EPropertyFlags)0x0020080000080001, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraActor, OnActorClickedDelegate), Z_Construct_UDelegateFunction_VirtualCamera_OnActorClickedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_OnActorClickedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_OnActorClickedDelegate_MetaData)) }; // 327141094
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_OnVirtualCameraUpdatedDelegates_MetaData[] = {
		{ "Category", "VirtualCamera" },
		{ "Comment", "/**\n\x09 * This delegate is triggered at the end of a tick in editor/pie/game.\n\x09 * @note The Actor is only ticked while it is being streamed.\n\x09 * @param float Delta Time in seconds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraActor.h" },
		{ "ToolTip", "This delegate is triggered at the end of a tick in editor/pie/game.\n@note The Actor is only ticked while it is being streamed.\n@param float Delta Time in seconds." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_OnVirtualCameraUpdatedDelegates = { "OnVirtualCameraUpdatedDelegates", nullptr, (EPropertyFlags)0x0020080000080001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraActor, OnVirtualCameraUpdatedDelegates), Z_Construct_UDelegateFunction_VirtualCamera_VirtualCameraTickDelegateGroup__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_OnVirtualCameraUpdatedDelegates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_OnVirtualCameraUpdatedDelegates_MetaData)) }; // 2107477437
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_SettingsPresets_ValueProp = { "SettingsPresets", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset, METADATA_PARAMS(nullptr, 0) }; // 1209101004
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_SettingsPresets_Key_KeyProp = { "SettingsPresets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_SettingsPresets_MetaData[] = {
		{ "Category", "VirtualCamera | Settings" },
		{ "Comment", "/* Stores the list of settings presets, and saved presets */" },
		{ "ModuleRelativePath", "Public/VirtualCameraActor.h" },
		{ "ToolTip", "Stores the list of settings presets, and saved presets" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_SettingsPresets = { "SettingsPresets", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraActor, SettingsPresets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_SettingsPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_SettingsPresets_MetaData)) }; // 1209101004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_StreamedCamera_MetaData[] = {
		{ "BlueprintGetter", "GetCineCameraComponent" },
		{ "Category", "VirtualCamera | Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VirtualCameraActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_StreamedCamera = { "StreamedCamera", nullptr, (EPropertyFlags)0x004400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraActor, StreamedCamera), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_StreamedCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_StreamedCamera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVirtualCameraActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_SceneCaptureComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_LiveLinkSubject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_MediaOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_CameraUMGClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_TargetDeviceResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_RemoteSessionPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_CameraScreenWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_MediaCapture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_ActorWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_PreviousViewTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_bAllowFocusVisualization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_OnPreSetVirtualCameraTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_OnActorClickedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_OnVirtualCameraUpdatedDelegates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_SettingsPresets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_SettingsPresets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_SettingsPresets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraActor_Statics::NewProp_StreamedCamera,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVirtualCameraActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVirtualCameraController_NoRegister, (int32)VTABLE_OFFSET(AVirtualCameraActor, IVirtualCameraController), false },  // 154999263
			{ Z_Construct_UClass_UVirtualCameraPresetContainer_NoRegister, (int32)VTABLE_OFFSET(AVirtualCameraActor, IVirtualCameraPresetContainer), false },  // 1144967962
			{ Z_Construct_UClass_UVirtualCameraOptions_NoRegister, (int32)VTABLE_OFFSET(AVirtualCameraActor, IVirtualCameraOptions), false },  // 1664845038
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVirtualCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVirtualCameraActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVirtualCameraActor_Statics::ClassParams = {
		&AVirtualCameraActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVirtualCameraActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVirtualCameraActor()
	{
		if (!Z_Registration_Info_UClass_AVirtualCameraActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVirtualCameraActor.OuterSingleton, Z_Construct_UClass_AVirtualCameraActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVirtualCameraActor.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UClass* StaticClass<AVirtualCameraActor>()
	{
		return AVirtualCameraActor::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVirtualCameraActor, AVirtualCameraActor::StaticClass, TEXT("AVirtualCameraActor"), &Z_Registration_Info_UClass_AVirtualCameraActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVirtualCameraActor), 3296205069U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_4170025042(TEXT("/Script/VirtualCamera"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
