// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaCapture() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaCapture();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaCapture_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput_NoRegister();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaCaptureCroppingType();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaCaptureOverrunAction();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaCapturePhase();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaCaptureResourceType();
	MEDIAIOCORE_API UEnum* Z_Construct_UEnum_MediaIOCore_EMediaCaptureState();
	MEDIAIOCORE_API UFunction* Z_Construct_UDelegateFunction_MediaIOCore_MediaCaptureStateChangedSignature__DelegateSignature();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaCaptureOptions();
	UPackage* Z_Construct_UPackage__Script_MediaIOCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaCaptureState;
	static UEnum* EMediaCaptureState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaCaptureState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaCaptureState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCaptureState, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("EMediaCaptureState"));
		}
		return Z_Registration_Info_UEnum_EMediaCaptureState.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaCaptureState>()
	{
		return EMediaCaptureState_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaIOCore_EMediaCaptureState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaIOCore_EMediaCaptureState_Statics::Enumerators[] = {
		{ "EMediaCaptureState::Error", (int64)EMediaCaptureState::Error },
		{ "EMediaCaptureState::Capturing", (int64)EMediaCaptureState::Capturing },
		{ "EMediaCaptureState::Preparing", (int64)EMediaCaptureState::Preparing },
		{ "EMediaCaptureState::StopRequested", (int64)EMediaCaptureState::StopRequested },
		{ "EMediaCaptureState::Stopped", (int64)EMediaCaptureState::Stopped },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaIOCore_EMediaCaptureState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Capturing.Comment", "/** Media is currently capturing. */" },
		{ "Capturing.Name", "EMediaCaptureState::Capturing" },
		{ "Capturing.ToolTip", "Media is currently capturing." },
		{ "Comment", "/**\n * Possible states of media capture.\n */" },
		{ "Error.Comment", "/** Unrecoverable error occurred during capture. */" },
		{ "Error.Name", "EMediaCaptureState::Error" },
		{ "Error.ToolTip", "Unrecoverable error occurred during capture." },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "Preparing.Comment", "/** Media is being prepared for capturing. */" },
		{ "Preparing.Name", "EMediaCaptureState::Preparing" },
		{ "Preparing.ToolTip", "Media is being prepared for capturing." },
		{ "Stopped.Comment", "/** Capture has been stopped. */" },
		{ "Stopped.Name", "EMediaCaptureState::Stopped" },
		{ "Stopped.ToolTip", "Capture has been stopped." },
		{ "StopRequested.Comment", "/** Capture has been stopped but some frames may need to be process. */" },
		{ "StopRequested.Name", "EMediaCaptureState::StopRequested" },
		{ "StopRequested.ToolTip", "Capture has been stopped but some frames may need to be process." },
		{ "ToolTip", "Possible states of media capture." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaIOCore_EMediaCaptureState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		"EMediaCaptureState",
		"EMediaCaptureState",
		Z_Construct_UEnum_MediaIOCore_EMediaCaptureState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaCaptureState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaIOCore_EMediaCaptureState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaCaptureState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaIOCore_EMediaCaptureState()
	{
		if (!Z_Registration_Info_UEnum_EMediaCaptureState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaCaptureState.InnerSingleton, Z_Construct_UEnum_MediaIOCore_EMediaCaptureState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaCaptureState.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaCaptureResourceType;
	static UEnum* EMediaCaptureResourceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaCaptureResourceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaCaptureResourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCaptureResourceType, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("EMediaCaptureResourceType"));
		}
		return Z_Registration_Info_UEnum_EMediaCaptureResourceType.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaCaptureResourceType>()
	{
		return EMediaCaptureResourceType_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaIOCore_EMediaCaptureResourceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaIOCore_EMediaCaptureResourceType_Statics::Enumerators[] = {
		{ "EMediaCaptureResourceType::Texture", (int64)EMediaCaptureResourceType::Texture },
		{ "EMediaCaptureResourceType::Buffer", (int64)EMediaCaptureResourceType::Buffer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaIOCore_EMediaCaptureResourceType_Statics::Enum_MetaDataParams[] = {
		{ "Buffer.Comment", "/** RWBuffer resources are used for the readback. */" },
		{ "Buffer.Name", "EMediaCaptureResourceType::Buffer" },
		{ "Buffer.ToolTip", "RWBuffer resources are used for the readback." },
		{ "Comment", "/**\n * Possible resource type the MediaCapture can create based on the conversion operation.\n */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "Texture.Comment", "/** Texture resources are used for the readback. */" },
		{ "Texture.Name", "EMediaCaptureResourceType::Texture" },
		{ "Texture.ToolTip", "Texture resources are used for the readback." },
		{ "ToolTip", "Possible resource type the MediaCapture can create based on the conversion operation." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaIOCore_EMediaCaptureResourceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		"EMediaCaptureResourceType",
		"EMediaCaptureResourceType",
		Z_Construct_UEnum_MediaIOCore_EMediaCaptureResourceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaCaptureResourceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaIOCore_EMediaCaptureResourceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaCaptureResourceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaIOCore_EMediaCaptureResourceType()
	{
		if (!Z_Registration_Info_UEnum_EMediaCaptureResourceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaCaptureResourceType.InnerSingleton, Z_Construct_UEnum_MediaIOCore_EMediaCaptureResourceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaCaptureResourceType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaCaptureCroppingType;
	static UEnum* EMediaCaptureCroppingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaCaptureCroppingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaCaptureCroppingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCaptureCroppingType, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("EMediaCaptureCroppingType"));
		}
		return Z_Registration_Info_UEnum_EMediaCaptureCroppingType.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaCaptureCroppingType>()
	{
		return EMediaCaptureCroppingType_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaIOCore_EMediaCaptureCroppingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaIOCore_EMediaCaptureCroppingType_Statics::Enumerators[] = {
		{ "EMediaCaptureCroppingType::None", (int64)EMediaCaptureCroppingType::None },
		{ "EMediaCaptureCroppingType::Center", (int64)EMediaCaptureCroppingType::Center },
		{ "EMediaCaptureCroppingType::TopLeft", (int64)EMediaCaptureCroppingType::TopLeft },
		{ "EMediaCaptureCroppingType::Custom", (int64)EMediaCaptureCroppingType::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaIOCore_EMediaCaptureCroppingType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Center.Comment", "/** Keep the center of the captured image. */" },
		{ "Center.Name", "EMediaCaptureCroppingType::Center" },
		{ "Center.ToolTip", "Keep the center of the captured image." },
		{ "Comment", "/**\n * Type of cropping \n */" },
		{ "Custom.Comment", "/** Use the StartCapturePoint and the size of the MediaOutput to keep of the captured image. */" },
		{ "Custom.Name", "EMediaCaptureCroppingType::Custom" },
		{ "Custom.ToolTip", "Use the StartCapturePoint and the size of the MediaOutput to keep of the captured image." },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "None.Comment", "/** Do not crop the captured image. */" },
		{ "None.Name", "EMediaCaptureCroppingType::None" },
		{ "None.ToolTip", "Do not crop the captured image." },
		{ "ToolTip", "Type of cropping" },
		{ "TopLeft.Comment", "/** Keep the top left corner of the captured image. */" },
		{ "TopLeft.Name", "EMediaCaptureCroppingType::TopLeft" },
		{ "TopLeft.ToolTip", "Keep the top left corner of the captured image." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaIOCore_EMediaCaptureCroppingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		"EMediaCaptureCroppingType",
		"EMediaCaptureCroppingType",
		Z_Construct_UEnum_MediaIOCore_EMediaCaptureCroppingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaCaptureCroppingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaIOCore_EMediaCaptureCroppingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaCaptureCroppingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaIOCore_EMediaCaptureCroppingType()
	{
		if (!Z_Registration_Info_UEnum_EMediaCaptureCroppingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaCaptureCroppingType.InnerSingleton, Z_Construct_UEnum_MediaIOCore_EMediaCaptureCroppingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaCaptureCroppingType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaCaptureOverrunAction;
	static UEnum* EMediaCaptureOverrunAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaCaptureOverrunAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaCaptureOverrunAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCaptureOverrunAction, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("EMediaCaptureOverrunAction"));
		}
		return Z_Registration_Info_UEnum_EMediaCaptureOverrunAction.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaCaptureOverrunAction>()
	{
		return EMediaCaptureOverrunAction_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaIOCore_EMediaCaptureOverrunAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaIOCore_EMediaCaptureOverrunAction_Statics::Enumerators[] = {
		{ "EMediaCaptureOverrunAction::Flush", (int64)EMediaCaptureOverrunAction::Flush },
		{ "EMediaCaptureOverrunAction::Skip", (int64)EMediaCaptureOverrunAction::Skip },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaIOCore_EMediaCaptureOverrunAction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Action when overrun occurs\n */" },
		{ "Flush.Comment", "/** Flush rendering thread such that all scheduled commands are executed. */" },
		{ "Flush.Name", "EMediaCaptureOverrunAction::Flush" },
		{ "Flush.ToolTip", "Flush rendering thread such that all scheduled commands are executed." },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "Skip.Comment", "/** Skip capturing a frame if readback is trailing too much. */" },
		{ "Skip.Name", "EMediaCaptureOverrunAction::Skip" },
		{ "Skip.ToolTip", "Skip capturing a frame if readback is trailing too much." },
		{ "ToolTip", "Action when overrun occurs" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaIOCore_EMediaCaptureOverrunAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		"EMediaCaptureOverrunAction",
		"EMediaCaptureOverrunAction",
		Z_Construct_UEnum_MediaIOCore_EMediaCaptureOverrunAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaCaptureOverrunAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaIOCore_EMediaCaptureOverrunAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaCaptureOverrunAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaIOCore_EMediaCaptureOverrunAction()
	{
		if (!Z_Registration_Info_UEnum_EMediaCaptureOverrunAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaCaptureOverrunAction.InnerSingleton, Z_Construct_UEnum_MediaIOCore_EMediaCaptureOverrunAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaCaptureOverrunAction.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaCapturePhase;
	static UEnum* EMediaCapturePhase_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMediaCapturePhase.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMediaCapturePhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaIOCore_EMediaCapturePhase, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("EMediaCapturePhase"));
		}
		return Z_Registration_Info_UEnum_EMediaCapturePhase.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UEnum* StaticEnum<EMediaCapturePhase>()
	{
		return EMediaCapturePhase_StaticEnum();
	}
	struct Z_Construct_UEnum_MediaIOCore_EMediaCapturePhase_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MediaIOCore_EMediaCapturePhase_Statics::Enumerators[] = {
		{ "EMediaCapturePhase::BeforePostProcessing", (int64)EMediaCapturePhase::BeforePostProcessing },
		{ "EMediaCapturePhase::AfterMotionBlur", (int64)EMediaCapturePhase::AfterMotionBlur },
		{ "EMediaCapturePhase::AfterToneMap", (int64)EMediaCapturePhase::AfterToneMap },
		{ "EMediaCapturePhase::AfterFXAA", (int64)EMediaCapturePhase::AfterFXAA },
		{ "EMediaCapturePhase::EndFrame", (int64)EMediaCapturePhase::EndFrame },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MediaIOCore_EMediaCapturePhase_Statics::Enum_MetaDataParams[] = {
		{ "AfterFXAA.Name", "EMediaCapturePhase::AfterFXAA" },
		{ "AfterMotionBlur.Comment", "// Will happen after TSR in order to get a texture of the right size.\n" },
		{ "AfterMotionBlur.Name", "EMediaCapturePhase::AfterMotionBlur" },
		{ "AfterMotionBlur.ToolTip", "Will happen after TSR in order to get a texture of the right size." },
		{ "AfterToneMap.Name", "EMediaCapturePhase::AfterToneMap" },
		{ "BeforePostProcessing.Name", "EMediaCapturePhase::BeforePostProcessing" },
		{ "BlueprintType", "true" },
		{ "EndFrame.Name", "EMediaCapturePhase::EndFrame" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaIOCore_EMediaCapturePhase_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		"EMediaCapturePhase",
		"EMediaCapturePhase",
		Z_Construct_UEnum_MediaIOCore_EMediaCapturePhase_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaCapturePhase_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MediaIOCore_EMediaCapturePhase_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MediaIOCore_EMediaCapturePhase_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MediaIOCore_EMediaCapturePhase()
	{
		if (!Z_Registration_Info_UEnum_EMediaCapturePhase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaCapturePhase.InnerSingleton, Z_Construct_UEnum_MediaIOCore_EMediaCapturePhase_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMediaCapturePhase.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaCaptureOptions;
class UScriptStruct* FMediaCaptureOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaCaptureOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaCaptureOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaCaptureOptions, (UObject*)Z_Construct_UPackage__Script_MediaIOCore(), TEXT("MediaCaptureOptions"));
	}
	return Z_Registration_Info_UScriptStruct_MediaCaptureOptions.OuterSingleton;
}
template<> MEDIAIOCORE_API UScriptStruct* StaticStruct<FMediaCaptureOptions>()
{
	return FMediaCaptureOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRestartOnSourceSizeChange_MetaData[];
#endif
		static void NewProp_bAutoRestartOnSourceSizeChange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRestartOnSourceSizeChange;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverrunAction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrunAction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverrunAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Crop_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Crop_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Crop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomCapturePoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomCapturePoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResizeSourceBuffer_MetaData[];
#endif
		static void NewProp_bResizeSourceBuffer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResizeSourceBuffer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipFrameWhenRunningExpensiveTasks_MetaData[];
#endif
		static void NewProp_bSkipFrameWhenRunningExpensiveTasks_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipFrameWhenRunningExpensiveTasks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConvertToDesiredPixelFormat_MetaData[];
#endif
		static void NewProp_bConvertToDesiredPixelFormat_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertToDesiredPixelFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceAlphaToOneOnConversion_MetaData[];
#endif
		static void NewProp_bForceAlphaToOneOnConversion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceAlphaToOneOnConversion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyLinearToSRGBConversion_MetaData[];
#endif
		static void NewProp_bApplyLinearToSRGBConversion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyLinearToSRGBConversion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutostopOnCapture_MetaData[];
#endif
		static void NewProp_bAutostopOnCapture_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutostopOnCapture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfFramesToCapture_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfFramesToCapture;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CapturePhase_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturePhase_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CapturePhase;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class of additional data that can be stored for each requested capture.\n */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "Base class of additional data that can be stored for each requested capture." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaCaptureOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bAutoRestartOnSourceSizeChange_MetaData[] = {
		{ "Category", "MediaCapture" },
		{ "Comment", "/** If source texture's size change, auto restart capture to follow source resolution if implementation supports it. */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "If source texture's size change, auto restart capture to follow source resolution if implementation supports it." },
	};
#endif
	void Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bAutoRestartOnSourceSizeChange_SetBit(void* Obj)
	{
		((FMediaCaptureOptions*)Obj)->bAutoRestartOnSourceSizeChange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bAutoRestartOnSourceSizeChange = { "bAutoRestartOnSourceSizeChange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMediaCaptureOptions), &Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bAutoRestartOnSourceSizeChange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bAutoRestartOnSourceSizeChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bAutoRestartOnSourceSizeChange_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_OverrunAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_OverrunAction_MetaData[] = {
		{ "Category", "MediaCapture" },
		{ "Comment", "/** Action to do when game thread overruns render thread and all frames are in flights being captured / readback. */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "Action to do when game thread overruns render thread and all frames are in flights being captured / readback." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_OverrunAction = { "OverrunAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaCaptureOptions, OverrunAction), Z_Construct_UEnum_MediaIOCore_EMediaCaptureOverrunAction, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_OverrunAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_OverrunAction_MetaData)) }; // 2784011523
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_Crop_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_Crop_MetaData[] = {
		{ "Category", "MediaCapture" },
		{ "Comment", "/** Crop the captured SceneViewport or TextureRenderTarget2D to the desired size. */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "Crop the captured SceneViewport or TextureRenderTarget2D to the desired size." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_Crop = { "Crop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaCaptureOptions, Crop), Z_Construct_UEnum_MediaIOCore_EMediaCaptureCroppingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_Crop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_Crop_MetaData)) }; // 502630153
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_CustomCapturePoint_MetaData[] = {
		{ "Category", "MediaCapture" },
		{ "Comment", "/**\n\x09 * Crop the captured SceneViewport or TextureRenderTarget2D to the desired size.\n\x09 * @note Only valid when Crop is set to Custom.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "Crop the captured SceneViewport or TextureRenderTarget2D to the desired size.\n@note Only valid when Crop is set to Custom." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_CustomCapturePoint = { "CustomCapturePoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaCaptureOptions, CustomCapturePoint), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_CustomCapturePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_CustomCapturePoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bResizeSourceBuffer_MetaData[] = {
		{ "Category", "MediaCapture" },
		{ "Comment", "/**\n\x09 * When the capture start, resize the source buffer to the desired size.\n\x09 * @note Only valid when a size is specified by the MediaOutput.\n\x09 * @note For viewport, the window size will not change. Only the viewport will be resized.\n\x09 * @note For RenderTarget, the asset will be modified and resized to the desired size.\n\x09 * @note Not valid for immediate capture of RHI resource\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "When the capture start, resize the source buffer to the desired size.\n@note Only valid when a size is specified by the MediaOutput.\n@note For viewport, the window size will not change. Only the viewport will be resized.\n@note For RenderTarget, the asset will be modified and resized to the desired size.\n@note Not valid for immediate capture of RHI resource" },
	};
#endif
	void Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bResizeSourceBuffer_SetBit(void* Obj)
	{
		((FMediaCaptureOptions*)Obj)->bResizeSourceBuffer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bResizeSourceBuffer = { "bResizeSourceBuffer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMediaCaptureOptions), &Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bResizeSourceBuffer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bResizeSourceBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bResizeSourceBuffer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bSkipFrameWhenRunningExpensiveTasks_MetaData[] = {
		{ "Category", "MediaCapture" },
		{ "Comment", "/**\n\x09 * When the application enters responsive mode, skip the frame capture.\n\x09 * The application can enter responsive mode on mouse down, viewport resize, ...\n\x09 * That is to ensure responsiveness in low FPS situations.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "When the application enters responsive mode, skip the frame capture.\nThe application can enter responsive mode on mouse down, viewport resize, ...\nThat is to ensure responsiveness in low FPS situations." },
	};
#endif
	void Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bSkipFrameWhenRunningExpensiveTasks_SetBit(void* Obj)
	{
		((FMediaCaptureOptions*)Obj)->bSkipFrameWhenRunningExpensiveTasks = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bSkipFrameWhenRunningExpensiveTasks = { "bSkipFrameWhenRunningExpensiveTasks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMediaCaptureOptions), &Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bSkipFrameWhenRunningExpensiveTasks_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bSkipFrameWhenRunningExpensiveTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bSkipFrameWhenRunningExpensiveTasks_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bConvertToDesiredPixelFormat_MetaData[] = {
		{ "Category", "MediaCapture" },
		{ "Comment", "/**\n\x09 * Allows to enable/disable pixel format conversion for the cases where render target is not of the desired pixel format. \n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "Allows to enable/disable pixel format conversion for the cases where render target is not of the desired pixel format." },
	};
#endif
	void Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bConvertToDesiredPixelFormat_SetBit(void* Obj)
	{
		((FMediaCaptureOptions*)Obj)->bConvertToDesiredPixelFormat = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bConvertToDesiredPixelFormat = { "bConvertToDesiredPixelFormat", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMediaCaptureOptions), &Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bConvertToDesiredPixelFormat_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bConvertToDesiredPixelFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bConvertToDesiredPixelFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bForceAlphaToOneOnConversion_MetaData[] = {
		{ "Category", "MediaCapture" },
		{ "Comment", "/**\n\x09 * In some cases when we want to stream irregular render targets containing limited number\n\x09 * of channels (for example RG16f), we would like to force Alpha to 1.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "In some cases when we want to stream irregular render targets containing limited number\nof channels (for example RG16f), we would like to force Alpha to 1." },
	};
#endif
	void Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bForceAlphaToOneOnConversion_SetBit(void* Obj)
	{
		((FMediaCaptureOptions*)Obj)->bForceAlphaToOneOnConversion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bForceAlphaToOneOnConversion = { "bForceAlphaToOneOnConversion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMediaCaptureOptions), &Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bForceAlphaToOneOnConversion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bForceAlphaToOneOnConversion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bForceAlphaToOneOnConversion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bApplyLinearToSRGBConversion_MetaData[] = {
		{ "Category", "MediaCapture" },
		{ "Comment", "/**\n\x09 * Whether to apply a linear to sRGB conversion to the texture before outputting. \n\x09 */" },
		{ "DisplayName", "Apply linear to sRGB conversion" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "Whether to apply a linear to sRGB conversion to the texture before outputting." },
	};
#endif
	void Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bApplyLinearToSRGBConversion_SetBit(void* Obj)
	{
		((FMediaCaptureOptions*)Obj)->bApplyLinearToSRGBConversion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bApplyLinearToSRGBConversion = { "bApplyLinearToSRGBConversion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMediaCaptureOptions), &Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bApplyLinearToSRGBConversion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bApplyLinearToSRGBConversion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bApplyLinearToSRGBConversion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bAutostopOnCapture_MetaData[] = {
		{ "Category", "MediaCapture" },
		{ "Comment", "/** Automatically stop capturing after a predetermined number of images. */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "Automatically stop capturing after a predetermined number of images." },
	};
#endif
	void Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bAutostopOnCapture_SetBit(void* Obj)
	{
		((FMediaCaptureOptions*)Obj)->bAutostopOnCapture = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bAutostopOnCapture = { "bAutostopOnCapture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMediaCaptureOptions), &Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bAutostopOnCapture_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bAutostopOnCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bAutostopOnCapture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_NumberOfFramesToCapture_MetaData[] = {
		{ "Category", "MediaCapture" },
		{ "Comment", "/** The number of images to capture*/" },
		{ "editcondition", "bAutostopOnCapture" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "The number of images to capture" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_NumberOfFramesToCapture = { "NumberOfFramesToCapture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaCaptureOptions, NumberOfFramesToCapture), METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_NumberOfFramesToCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_NumberOfFramesToCapture_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_CapturePhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_CapturePhase_MetaData[] = {
		{ "Category", "MediaCapture" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_CapturePhase = { "CapturePhase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMediaCaptureOptions, CapturePhase), Z_Construct_UEnum_MediaIOCore_EMediaCapturePhase, METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_CapturePhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_CapturePhase_MetaData)) }; // 1854259242
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bAutoRestartOnSourceSizeChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_OverrunAction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_OverrunAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_Crop_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_Crop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_CustomCapturePoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bResizeSourceBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bSkipFrameWhenRunningExpensiveTasks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bConvertToDesiredPixelFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bForceAlphaToOneOnConversion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bApplyLinearToSRGBConversion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_bAutostopOnCapture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_NumberOfFramesToCapture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_CapturePhase_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewProp_CapturePhase,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOCore,
		nullptr,
		&NewStructOps,
		"MediaCaptureOptions",
		sizeof(FMediaCaptureOptions),
		alignof(FMediaCaptureOptions),
		Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMediaCaptureOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_MediaCaptureOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaCaptureOptions.InnerSingleton, Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MediaCaptureOptions.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_MediaIOCore_MediaCaptureStateChangedSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_MediaIOCore_MediaCaptureStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate signatures */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "Delegate signatures" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MediaIOCore_MediaCaptureStateChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MediaIOCore, nullptr, "MediaCaptureStateChangedSignature__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_MediaIOCore_MediaCaptureStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MediaIOCore_MediaCaptureStateChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_MediaIOCore_MediaCaptureStateChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MediaIOCore_MediaCaptureStateChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMediaCaptureStateChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& MediaCaptureStateChangedSignature)
{
	MediaCaptureStateChangedSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UMediaCapture::execGetDesiredPixelFormat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EPixelFormat>*)Z_Param__Result=P_THIS->GetDesiredPixelFormat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaCapture::execGetDesiredSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=P_THIS->GetDesiredSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaCapture::execSetMediaOutput)
	{
		P_GET_OBJECT(UMediaOutput,Z_Param_InMediaOutput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMediaOutput(Z_Param_InMediaOutput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaCapture::execGetState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EMediaCaptureState*)Z_Param__Result=P_THIS->GetState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaCapture::execStopCapture)
	{
		P_GET_UBOOL(Z_Param_bAllowPendingFrameToBeProcess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCapture(Z_Param_bAllowPendingFrameToBeProcess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaCapture::execUpdateTextureRenderTarget2D)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateTextureRenderTarget2D(Z_Param_RenderTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaCapture::execCaptureTextureRenderTarget2D)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_GET_STRUCT(FMediaCaptureOptions,Z_Param_CaptureOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CaptureTextureRenderTarget2D(Z_Param_RenderTarget,Z_Param_CaptureOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaCapture::execCaptureActiveSceneViewport)
	{
		P_GET_STRUCT(FMediaCaptureOptions,Z_Param_CaptureOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CaptureActiveSceneViewport(Z_Param_CaptureOptions);
		P_NATIVE_END;
	}
	void UMediaCapture::StaticRegisterNativesUMediaCapture()
	{
		UClass* Class = UMediaCapture::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CaptureActiveSceneViewport", &UMediaCapture::execCaptureActiveSceneViewport },
			{ "CaptureTextureRenderTarget2D", &UMediaCapture::execCaptureTextureRenderTarget2D },
			{ "GetDesiredPixelFormat", &UMediaCapture::execGetDesiredPixelFormat },
			{ "GetDesiredSize", &UMediaCapture::execGetDesiredSize },
			{ "GetState", &UMediaCapture::execGetState },
			{ "SetMediaOutput", &UMediaCapture::execSetMediaOutput },
			{ "StopCapture", &UMediaCapture::execStopCapture },
			{ "UpdateTextureRenderTarget2D", &UMediaCapture::execUpdateTextureRenderTarget2D },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport_Statics
	{
		struct MediaCapture_eventCaptureActiveSceneViewport_Parms
		{
			FMediaCaptureOptions CaptureOptions;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport_Statics::NewProp_CaptureOptions = { "CaptureOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaCapture_eventCaptureActiveSceneViewport_Parms, CaptureOptions), Z_Construct_UScriptStruct_FMediaCaptureOptions, METADATA_PARAMS(nullptr, 0) }; // 2657660499
	void Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaCapture_eventCaptureActiveSceneViewport_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaCapture_eventCaptureActiveSceneViewport_Parms), &Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport_Statics::NewProp_CaptureOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|Output" },
		{ "Comment", "/**\n\x09 * Stop the current capture if there is one.\n\x09 * Then find and capture every frame from active SceneViewport.\n\x09 * It can only find a SceneViewport when you play in Standalone or in \"New Editor Window PIE\".\n\x09 * If the active SceneViewport is destroyed, the capture will stop.\n\x09 * The SceneViewport needs to be of the same size and have the same pixel format as requested by the media output.\n\x09 * @return True if the capture was successfully started\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "Stop the current capture if there is one.\nThen find and capture every frame from active SceneViewport.\nIt can only find a SceneViewport when you play in Standalone or in \"New Editor Window PIE\".\nIf the active SceneViewport is destroyed, the capture will stop.\nThe SceneViewport needs to be of the same size and have the same pixel format as requested by the media output.\n@return True if the capture was successfully started" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaCapture, nullptr, "CaptureActiveSceneViewport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport_Statics::MediaCapture_eventCaptureActiveSceneViewport_Parms), Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics
	{
		struct MediaCapture_eventCaptureTextureRenderTarget2D_Parms
		{
			UTextureRenderTarget2D* RenderTarget;
			FMediaCaptureOptions CaptureOptions;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureOptions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaCapture_eventCaptureTextureRenderTarget2D_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics::NewProp_CaptureOptions = { "CaptureOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaCapture_eventCaptureTextureRenderTarget2D_Parms, CaptureOptions), Z_Construct_UScriptStruct_FMediaCaptureOptions, METADATA_PARAMS(nullptr, 0) }; // 2657660499
	void Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaCapture_eventCaptureTextureRenderTarget2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaCapture_eventCaptureTextureRenderTarget2D_Parms), &Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics::NewProp_CaptureOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|Output" },
		{ "Comment", "/**\n\x09 * Stop the actual capture if there is one.\n\x09 * Then capture every frame for a TextureRenderTarget2D.\n\x09 * The TextureRenderTarget2D needs to be of the same size and have the same pixel format as requested by the media output.\n\x09 * @return True if the capture was successfully started\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "Stop the actual capture if there is one.\nThen capture every frame for a TextureRenderTarget2D.\nThe TextureRenderTarget2D needs to be of the same size and have the same pixel format as requested by the media output.\n@return True if the capture was successfully started" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaCapture, nullptr, "CaptureTextureRenderTarget2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics::MediaCapture_eventCaptureTextureRenderTarget2D_Parms), Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaCapture_GetDesiredPixelFormat_Statics
	{
		struct MediaCapture_eventGetDesiredPixelFormat_Parms
		{
			TEnumAsByte<EPixelFormat> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMediaCapture_GetDesiredPixelFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaCapture_eventGetDesiredPixelFormat_Parms, ReturnValue), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(nullptr, 0) }; // 2651536151
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaCapture_GetDesiredPixelFormat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaCapture_GetDesiredPixelFormat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaCapture_GetDesiredPixelFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|Output" },
		{ "Comment", "/** Get the desired pixel format of the current capture. */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "Get the desired pixel format of the current capture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaCapture_GetDesiredPixelFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaCapture, nullptr, "GetDesiredPixelFormat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaCapture_GetDesiredPixelFormat_Statics::MediaCapture_eventGetDesiredPixelFormat_Parms), Z_Construct_UFunction_UMediaCapture_GetDesiredPixelFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaCapture_GetDesiredPixelFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaCapture_GetDesiredPixelFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaCapture_GetDesiredPixelFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaCapture_GetDesiredPixelFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaCapture_GetDesiredPixelFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaCapture_GetDesiredSize_Statics
	{
		struct MediaCapture_eventGetDesiredSize_Parms
		{
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaCapture_GetDesiredSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaCapture_eventGetDesiredSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaCapture_GetDesiredSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaCapture_GetDesiredSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaCapture_GetDesiredSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|Output" },
		{ "Comment", "/** Get the desired size of the current capture. */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "Get the desired size of the current capture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaCapture_GetDesiredSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaCapture, nullptr, "GetDesiredSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaCapture_GetDesiredSize_Statics::MediaCapture_eventGetDesiredSize_Parms), Z_Construct_UFunction_UMediaCapture_GetDesiredSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaCapture_GetDesiredSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaCapture_GetDesiredSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaCapture_GetDesiredSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaCapture_GetDesiredSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaCapture_GetDesiredSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaCapture_GetState_Statics
	{
		struct MediaCapture_eventGetState_Parms
		{
			EMediaCaptureState ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMediaCapture_GetState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMediaCapture_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaCapture_eventGetState_Parms, ReturnValue), Z_Construct_UEnum_MediaIOCore_EMediaCaptureState, METADATA_PARAMS(nullptr, 0) }; // 3465915534
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaCapture_GetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaCapture_GetState_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaCapture_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaCapture_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|Output" },
		{ "Comment", "/** Get the current state of the capture. */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "Get the current state of the capture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaCapture_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaCapture, nullptr, "GetState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaCapture_GetState_Statics::MediaCapture_eventGetState_Parms), Z_Construct_UFunction_UMediaCapture_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaCapture_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaCapture_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaCapture_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaCapture_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaCapture_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaCapture_SetMediaOutput_Statics
	{
		struct MediaCapture_eventSetMediaOutput_Parms
		{
			UMediaOutput* InMediaOutput;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InMediaOutput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaCapture_SetMediaOutput_Statics::NewProp_InMediaOutput = { "InMediaOutput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaCapture_eventSetMediaOutput_Parms, InMediaOutput), Z_Construct_UClass_UMediaOutput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaCapture_SetMediaOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaCapture_SetMediaOutput_Statics::NewProp_InMediaOutput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaCapture_SetMediaOutput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|Output" },
		{ "Comment", "/** Set the media output. Can only be set when the capture is stopped. */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "Set the media output. Can only be set when the capture is stopped." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaCapture_SetMediaOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaCapture, nullptr, "SetMediaOutput", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaCapture_SetMediaOutput_Statics::MediaCapture_eventSetMediaOutput_Parms), Z_Construct_UFunction_UMediaCapture_SetMediaOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaCapture_SetMediaOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaCapture_SetMediaOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaCapture_SetMediaOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaCapture_SetMediaOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaCapture_SetMediaOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaCapture_StopCapture_Statics
	{
		struct MediaCapture_eventStopCapture_Parms
		{
			bool bAllowPendingFrameToBeProcess;
		};
		static void NewProp_bAllowPendingFrameToBeProcess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPendingFrameToBeProcess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMediaCapture_StopCapture_Statics::NewProp_bAllowPendingFrameToBeProcess_SetBit(void* Obj)
	{
		((MediaCapture_eventStopCapture_Parms*)Obj)->bAllowPendingFrameToBeProcess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaCapture_StopCapture_Statics::NewProp_bAllowPendingFrameToBeProcess = { "bAllowPendingFrameToBeProcess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaCapture_eventStopCapture_Parms), &Z_Construct_UFunction_UMediaCapture_StopCapture_Statics::NewProp_bAllowPendingFrameToBeProcess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaCapture_StopCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaCapture_StopCapture_Statics::NewProp_bAllowPendingFrameToBeProcess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaCapture_StopCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|Output" },
		{ "Comment", "/**\n\x09 * Stop the previous requested capture.\n\x09 * @param bAllowPendingFrameToBeProcess\x09Keep copying the pending frames asynchronously or stop immediately without copying the pending frames.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "Stop the previous requested capture.\n@param bAllowPendingFrameToBeProcess Keep copying the pending frames asynchronously or stop immediately without copying the pending frames." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaCapture_StopCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaCapture, nullptr, "StopCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaCapture_StopCapture_Statics::MediaCapture_eventStopCapture_Parms), Z_Construct_UFunction_UMediaCapture_StopCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaCapture_StopCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaCapture_StopCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaCapture_StopCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaCapture_StopCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaCapture_StopCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D_Statics
	{
		struct MediaCapture_eventUpdateTextureRenderTarget2D_Parms
		{
			UTextureRenderTarget2D* RenderTarget;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaCapture_eventUpdateTextureRenderTarget2D_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaCapture_eventUpdateTextureRenderTarget2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MediaCapture_eventUpdateTextureRenderTarget2D_Parms), &Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|Output" },
		{ "Comment", "/**\n\x09 * Update the current capture with every frame for a TextureRenderTarget2D.\n\x09 * The TextureRenderTarget2D needs to be of the same size and have the same pixel format as requested by the media output.\n\x09 * @return Return true if the capture was successfully updated. If false is returned, the capture was stopped.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "Update the current capture with every frame for a TextureRenderTarget2D.\nThe TextureRenderTarget2D needs to be of the same size and have the same pixel format as requested by the media output.\n@return Return true if the capture was successfully updated. If false is returned, the capture was stopped." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaCapture, nullptr, "UpdateTextureRenderTarget2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D_Statics::MediaCapture_eventUpdateTextureRenderTarget2D_Parms), Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaCapture);
	UClass* Z_Construct_UClass_UMediaCapture_NoRegister()
	{
		return UMediaCapture::StaticClass();
	}
	struct Z_Construct_UClass_UMediaCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStateChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaOutput_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaOutput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaCapture_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaCapture_CaptureActiveSceneViewport, "CaptureActiveSceneViewport" }, // 1555383953
		{ &Z_Construct_UFunction_UMediaCapture_CaptureTextureRenderTarget2D, "CaptureTextureRenderTarget2D" }, // 4142988091
		{ &Z_Construct_UFunction_UMediaCapture_GetDesiredPixelFormat, "GetDesiredPixelFormat" }, // 221246314
		{ &Z_Construct_UFunction_UMediaCapture_GetDesiredSize, "GetDesiredSize" }, // 3741272006
		{ &Z_Construct_UFunction_UMediaCapture_GetState, "GetState" }, // 3915346677
		{ &Z_Construct_UFunction_UMediaCapture_SetMediaOutput, "SetMediaOutput" }, // 2210542181
		{ &Z_Construct_UFunction_UMediaCapture_StopCapture, "StopCapture" }, // 670440696
		{ &Z_Construct_UFunction_UMediaCapture_UpdateTextureRenderTarget2D, "UpdateTextureRenderTarget2D" }, // 3257230223
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaCapture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Abstract base class for media capture.\n *\n * MediaCapture capture the texture of the Render target or the SceneViewport and sends it to an external media device.\n * MediaCapture should be created by a MediaOutput.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MediaCapture.h" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "Abstract base class for media capture.\n\nMediaCapture capture the texture of the Render target or the SceneViewport and sends it to an external media device.\nMediaCapture should be created by a MediaOutput." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaCapture_Statics::NewProp_OnStateChanged_MetaData[] = {
		{ "Category", "Media|Output" },
		{ "Comment", "/** Called when the state of the capture changed. */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "Called when the state of the capture changed." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMediaCapture_Statics::NewProp_OnStateChanged = { "OnStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaCapture, OnStateChanged), Z_Construct_UDelegateFunction_MediaIOCore_MediaCaptureStateChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMediaCapture_Statics::NewProp_OnStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaCapture_Statics::NewProp_OnStateChanged_MetaData)) }; // 2242875002
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaCapture_Statics::NewProp_MediaOutput_MetaData[] = {
		{ "Comment", "/** MediaOutput associated with this capture */" },
		{ "ModuleRelativePath", "Public/MediaCapture.h" },
		{ "ToolTip", "MediaOutput associated with this capture" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaCapture_Statics::NewProp_MediaOutput = { "MediaOutput", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaCapture, MediaOutput), Z_Construct_UClass_UMediaOutput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaCapture_Statics::NewProp_MediaOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaCapture_Statics::NewProp_MediaOutput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaCapture_Statics::NewProp_OnStateChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaCapture_Statics::NewProp_MediaOutput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaCapture_Statics::ClassParams = {
		&UMediaCapture::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMediaCapture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaCapture_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaCapture()
	{
		if (!Z_Registration_Info_UClass_UMediaCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaCapture.OuterSingleton, Z_Construct_UClass_UMediaCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaCapture.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UClass* StaticClass<UMediaCapture>()
	{
		return UMediaCapture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaCapture);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_Statics::EnumInfo[] = {
		{ EMediaCaptureState_StaticEnum, TEXT("EMediaCaptureState"), &Z_Registration_Info_UEnum_EMediaCaptureState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3465915534U) },
		{ EMediaCaptureResourceType_StaticEnum, TEXT("EMediaCaptureResourceType"), &Z_Registration_Info_UEnum_EMediaCaptureResourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3438412610U) },
		{ EMediaCaptureCroppingType_StaticEnum, TEXT("EMediaCaptureCroppingType"), &Z_Registration_Info_UEnum_EMediaCaptureCroppingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 502630153U) },
		{ EMediaCaptureOverrunAction_StaticEnum, TEXT("EMediaCaptureOverrunAction"), &Z_Registration_Info_UEnum_EMediaCaptureOverrunAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2784011523U) },
		{ EMediaCapturePhase_StaticEnum, TEXT("EMediaCapturePhase"), &Z_Registration_Info_UEnum_EMediaCapturePhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1854259242U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_Statics::ScriptStructInfo[] = {
		{ FMediaCaptureOptions::StaticStruct, Z_Construct_UScriptStruct_FMediaCaptureOptions_Statics::NewStructOps, TEXT("MediaCaptureOptions"), &Z_Registration_Info_UScriptStruct_MediaCaptureOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaCaptureOptions), 2657660499U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaCapture, UMediaCapture::StaticClass, TEXT("UMediaCapture"), &Z_Registration_Info_UClass_UMediaCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaCapture), 1048139997U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_2675596111(TEXT("/Script/MediaIOCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaCapture_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
