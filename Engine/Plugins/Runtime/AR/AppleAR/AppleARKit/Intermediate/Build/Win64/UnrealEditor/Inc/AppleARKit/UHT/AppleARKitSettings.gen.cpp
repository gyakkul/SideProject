// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AppleARKitSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleARKitSettings() {}
// Cross Module References
	APPLEARKIT_API UClass* Z_Construct_UClass_UAppleARKitSettings();
	APPLEARKIT_API UClass* Z_Construct_UClass_UAppleARKitSettings_NoRegister();
	APPLEARKIT_API UEnum* Z_Construct_UEnum_AppleARKit_EARFaceTrackingFileWriterType();
	APPLEARKIT_API UEnum* Z_Construct_UEnum_AppleARKit_ELivelinkTrackingType();
	APPLEIMAGEUTILS_API UEnum* Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AppleARKit();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARFaceTrackingFileWriterType;
	static UEnum* EARFaceTrackingFileWriterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARFaceTrackingFileWriterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARFaceTrackingFileWriterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AppleARKit_EARFaceTrackingFileWriterType, (UObject*)Z_Construct_UPackage__Script_AppleARKit(), TEXT("EARFaceTrackingFileWriterType"));
		}
		return Z_Registration_Info_UEnum_EARFaceTrackingFileWriterType.OuterSingleton;
	}
	template<> APPLEARKIT_API UEnum* StaticEnum<EARFaceTrackingFileWriterType>()
	{
		return EARFaceTrackingFileWriterType_StaticEnum();
	}
	struct Z_Construct_UEnum_AppleARKit_EARFaceTrackingFileWriterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AppleARKit_EARFaceTrackingFileWriterType_Statics::Enumerators[] = {
		{ "EARFaceTrackingFileWriterType::None", (int64)EARFaceTrackingFileWriterType::None },
		{ "EARFaceTrackingFileWriterType::CSV", (int64)EARFaceTrackingFileWriterType::CSV },
		{ "EARFaceTrackingFileWriterType::JSON", (int64)EARFaceTrackingFileWriterType::JSON },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AppleARKit_EARFaceTrackingFileWriterType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "CSV.Comment", "/** Comma delimited file, one row per captured frame */" },
		{ "CSV.Name", "EARFaceTrackingFileWriterType::CSV" },
		{ "CSV.ToolTip", "Comma delimited file, one row per captured frame" },
		{ "Experimental", "" },
		{ "JSON.Comment", "/** JSON object array, one frame object per captured frame */" },
		{ "JSON.Name", "EARFaceTrackingFileWriterType::JSON" },
		{ "JSON.ToolTip", "JSON object array, one frame object per captured frame" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
		{ "None.Comment", "/** Disables creation of a file writer */" },
		{ "None.Name", "EARFaceTrackingFileWriterType::None" },
		{ "None.ToolTip", "Disables creation of a file writer" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AppleARKit_EARFaceTrackingFileWriterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AppleARKit,
		nullptr,
		"EARFaceTrackingFileWriterType",
		"EARFaceTrackingFileWriterType",
		Z_Construct_UEnum_AppleARKit_EARFaceTrackingFileWriterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AppleARKit_EARFaceTrackingFileWriterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AppleARKit_EARFaceTrackingFileWriterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AppleARKit_EARFaceTrackingFileWriterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AppleARKit_EARFaceTrackingFileWriterType()
	{
		if (!Z_Registration_Info_UEnum_EARFaceTrackingFileWriterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARFaceTrackingFileWriterType.InnerSingleton, Z_Construct_UEnum_AppleARKit_EARFaceTrackingFileWriterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARFaceTrackingFileWriterType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELivelinkTrackingType;
	static UEnum* ELivelinkTrackingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELivelinkTrackingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELivelinkTrackingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AppleARKit_ELivelinkTrackingType, (UObject*)Z_Construct_UPackage__Script_AppleARKit(), TEXT("ELivelinkTrackingType"));
		}
		return Z_Registration_Info_UEnum_ELivelinkTrackingType.OuterSingleton;
	}
	template<> APPLEARKIT_API UEnum* StaticEnum<ELivelinkTrackingType>()
	{
		return ELivelinkTrackingType_StaticEnum();
	}
	struct Z_Construct_UEnum_AppleARKit_ELivelinkTrackingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AppleARKit_ELivelinkTrackingType_Statics::Enumerators[] = {
		{ "ELivelinkTrackingType::FaceTracking", (int64)ELivelinkTrackingType::FaceTracking },
		{ "ELivelinkTrackingType::PoseTracking", (int64)ELivelinkTrackingType::PoseTracking },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AppleARKit_ELivelinkTrackingType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "AR AugmentedReality" },
		{ "FaceTracking.Name", "ELivelinkTrackingType::FaceTracking" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
		{ "PoseTracking.Name", "ELivelinkTrackingType::PoseTracking" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AppleARKit_ELivelinkTrackingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AppleARKit,
		nullptr,
		"ELivelinkTrackingType",
		"ELivelinkTrackingType",
		Z_Construct_UEnum_AppleARKit_ELivelinkTrackingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AppleARKit_ELivelinkTrackingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AppleARKit_ELivelinkTrackingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AppleARKit_ELivelinkTrackingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AppleARKit_ELivelinkTrackingType()
	{
		if (!Z_Registration_Info_UEnum_ELivelinkTrackingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELivelinkTrackingType.InnerSingleton, Z_Construct_UEnum_AppleARKit_ELivelinkTrackingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELivelinkTrackingType.InnerSingleton;
	}
	void UAppleARKitSettings::StaticRegisterNativesUAppleARKitSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAppleARKitSettings);
	UClass* Z_Construct_UClass_UAppleARKitSettings_NoRegister()
	{
		return UAppleARKitSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAppleARKitSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequireARKitSupport_MetaData[];
#endif
		static void NewProp_bRequireARKitSupport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireARKitSupport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceTrackingLogDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FaceTrackingLogDir;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LivelinkTrackingTypes_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LivelinkTrackingTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LivelinkTrackingTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LivelinkTrackingTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFaceTrackingLogData_MetaData[];
#endif
		static void NewProp_bFaceTrackingLogData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFaceTrackingLogData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFaceTrackingWriteEachFrame_MetaData[];
#endif
		static void NewProp_bFaceTrackingWriteEachFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFaceTrackingWriteEachFrame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FaceTrackingFileWriterType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceTrackingFileWriterType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FaceTrackingFileWriterType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldWriteCameraImagePerFrame_MetaData[];
#endif
		static void NewProp_bShouldWriteCameraImagePerFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldWriteCameraImagePerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WrittenCameraImageScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WrittenCameraImageScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WrittenCameraImageQuality_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WrittenCameraImageQuality;
		static const UECodeGen_Private::FBytePropertyParams NewProp_WrittenCameraImageRotation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WrittenCameraImageRotation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_WrittenCameraImageRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiveLinkPublishingPort_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LiveLinkPublishingPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFaceTrackingLiveLinkSubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultFaceTrackingLiveLinkSubjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPoseTrackingLiveLinkSubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultPoseTrackingLiveLinkSubjectName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultFaceTrackingDirection_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFaceTrackingDirection_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultFaceTrackingDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdjustThreadPrioritiesDuringARSession_MetaData[];
#endif
		static void NewProp_bAdjustThreadPrioritiesDuringARSession_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdjustThreadPrioritiesDuringARSession;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameThreadPriorityOverride_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GameThreadPriorityOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderThreadPriorityOverride_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RenderThreadPriorityOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ARKitTimecodeProvider_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ARKitTimecodeProvider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAppleARKitSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AppleARKit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AppleARKitSettings.h" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bRequireARKitSupport_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
		{ "ToolTip", "When True the project can only be installed on devices that support ARKit." },
	};
#endif
	void Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bRequireARKitSupport_SetBit(void* Obj)
	{
		((UAppleARKitSettings*)Obj)->bRequireARKitSupport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bRequireARKitSupport = { "bRequireARKitSupport", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAppleARKitSettings), &Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bRequireARKitSupport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bRequireARKitSupport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bRequireARKitSupport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_FaceTrackingLogDir_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_FaceTrackingLogDir = { "FaceTrackingLogDir", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleARKitSettings, FaceTrackingLogDir), METADATA_PARAMS(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_FaceTrackingLogDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_FaceTrackingLogDir_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_LivelinkTrackingTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_LivelinkTrackingTypes_Inner = { "LivelinkTrackingTypes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_AppleARKit_ELivelinkTrackingType, METADATA_PARAMS(nullptr, 0) }; // 1080770665
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_LivelinkTrackingTypes_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Livelink tracking type. To publish face blend shapes, or body pose data to LiveLink, or none */" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
		{ "ToolTip", "Livelink tracking type. To publish face blend shapes, or body pose data to LiveLink, or none" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_LivelinkTrackingTypes = { "LivelinkTrackingTypes", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleARKitSettings, LivelinkTrackingTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_LivelinkTrackingTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_LivelinkTrackingTypes_MetaData)) }; // 1080770665
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bFaceTrackingLogData_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Whether file writing is enabled at all or not */" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
		{ "ToolTip", "Whether file writing is enabled at all or not" },
	};
#endif
	void Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bFaceTrackingLogData_SetBit(void* Obj)
	{
		((UAppleARKitSettings*)Obj)->bFaceTrackingLogData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bFaceTrackingLogData = { "bFaceTrackingLogData", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAppleARKitSettings), &Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bFaceTrackingLogData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bFaceTrackingLogData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bFaceTrackingLogData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bFaceTrackingWriteEachFrame_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Whether to publish each frame or when the \"FaceAR WriteCurveFile */" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
		{ "ToolTip", "Whether to publish each frame or when the \"FaceAR WriteCurveFile" },
	};
#endif
	void Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bFaceTrackingWriteEachFrame_SetBit(void* Obj)
	{
		((UAppleARKitSettings*)Obj)->bFaceTrackingWriteEachFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bFaceTrackingWriteEachFrame = { "bFaceTrackingWriteEachFrame", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAppleARKitSettings), &Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bFaceTrackingWriteEachFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bFaceTrackingWriteEachFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bFaceTrackingWriteEachFrame_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_FaceTrackingFileWriterType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_FaceTrackingFileWriterType_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** The type of face AR publisher that writes to disk to create */" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
		{ "ToolTip", "The type of face AR publisher that writes to disk to create" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_FaceTrackingFileWriterType = { "FaceTrackingFileWriterType", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleARKitSettings, FaceTrackingFileWriterType), Z_Construct_UEnum_AppleARKit_EARFaceTrackingFileWriterType, METADATA_PARAMS(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_FaceTrackingFileWriterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_FaceTrackingFileWriterType_MetaData)) }; // 2889779777
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bShouldWriteCameraImagePerFrame_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Whether to publish the camera image each frame */" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
		{ "ToolTip", "Whether to publish the camera image each frame" },
	};
#endif
	void Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bShouldWriteCameraImagePerFrame_SetBit(void* Obj)
	{
		((UAppleARKitSettings*)Obj)->bShouldWriteCameraImagePerFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bShouldWriteCameraImagePerFrame = { "bShouldWriteCameraImagePerFrame", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAppleARKitSettings), &Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bShouldWriteCameraImagePerFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bShouldWriteCameraImagePerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bShouldWriteCameraImagePerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_WrittenCameraImageScale_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** The scale to write the images at. Used to reduce data footprint */" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
		{ "ToolTip", "The scale to write the images at. Used to reduce data footprint" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_WrittenCameraImageScale = { "WrittenCameraImageScale", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleARKitSettings, WrittenCameraImageScale), METADATA_PARAMS(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_WrittenCameraImageScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_WrittenCameraImageScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_WrittenCameraImageQuality_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** The quality setting to generate the jpeg images at. Defaults to 85, which is \"high quality\". Lower values reduce data footprint */" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
		{ "ToolTip", "The quality setting to generate the jpeg images at. Defaults to 85, which is \"high quality\". Lower values reduce data footprint" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_WrittenCameraImageQuality = { "WrittenCameraImageQuality", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleARKitSettings, WrittenCameraImageQuality), METADATA_PARAMS(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_WrittenCameraImageQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_WrittenCameraImageQuality_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_WrittenCameraImageRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_WrittenCameraImageRotation_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Defaults to none. Use Right when in portrait mode */" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
		{ "ToolTip", "Defaults to none. Use Right when in portrait mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_WrittenCameraImageRotation = { "WrittenCameraImageRotation", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleARKitSettings, WrittenCameraImageRotation), Z_Construct_UEnum_AppleImageUtils_ETextureRotationDirection, METADATA_PARAMS(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_WrittenCameraImageRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_WrittenCameraImageRotation_MetaData)) }; // 4067816981
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_LiveLinkPublishingPort_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** The port to use when listening/sending LiveLink face blend shapes via the network */" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
		{ "ToolTip", "The port to use when listening/sending LiveLink face blend shapes via the network" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_LiveLinkPublishingPort = { "LiveLinkPublishingPort", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleARKitSettings, LiveLinkPublishingPort), METADATA_PARAMS(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_LiveLinkPublishingPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_LiveLinkPublishingPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_DefaultFaceTrackingLiveLinkSubjectName_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/**\n\x09 * The default name to use when publishing face tracking name\n\x09 * If multiple faces are tracked, the subject name for the faces will be:\n\x09 * #1: DefaultFaceTrackingLiveLinkSubjectName\n\x09 * #2: DefaultFaceTrackingLiveLinkSubjectName-1\n\x09 * #3: DefaultFaceTrackingLiveLinkSubjectName-2, etc\n\x09 */" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
		{ "ToolTip", "The default name to use when publishing face tracking name\nIf multiple faces are tracked, the subject name for the faces will be:\n#1: DefaultFaceTrackingLiveLinkSubjectName\n#2: DefaultFaceTrackingLiveLinkSubjectName-1\n#3: DefaultFaceTrackingLiveLinkSubjectName-2, etc" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_DefaultFaceTrackingLiveLinkSubjectName = { "DefaultFaceTrackingLiveLinkSubjectName", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleARKitSettings, DefaultFaceTrackingLiveLinkSubjectName), METADATA_PARAMS(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_DefaultFaceTrackingLiveLinkSubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_DefaultFaceTrackingLiveLinkSubjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_DefaultPoseTrackingLiveLinkSubjectName_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** The default name to use when publishing pose tracking name */" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
		{ "ToolTip", "The default name to use when publishing pose tracking name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_DefaultPoseTrackingLiveLinkSubjectName = { "DefaultPoseTrackingLiveLinkSubjectName", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleARKitSettings, DefaultPoseTrackingLiveLinkSubjectName), METADATA_PARAMS(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_DefaultPoseTrackingLiveLinkSubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_DefaultPoseTrackingLiveLinkSubjectName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_DefaultFaceTrackingDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_DefaultFaceTrackingDirection_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** The default tracking to use when tracking face blend shapes (face relative or mirrored). Defaults to face relative */" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
		{ "ToolTip", "The default tracking to use when tracking face blend shapes (face relative or mirrored). Defaults to face relative" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_DefaultFaceTrackingDirection = { "DefaultFaceTrackingDirection", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleARKitSettings, DefaultFaceTrackingDirection), Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection, METADATA_PARAMS(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_DefaultFaceTrackingDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_DefaultFaceTrackingDirection_MetaData)) }; // 3500389980
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bAdjustThreadPrioritiesDuringARSession_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** Whether to adjust thread priorities during an AR session or not */" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
		{ "ToolTip", "Whether to adjust thread priorities during an AR session or not" },
	};
#endif
	void Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bAdjustThreadPrioritiesDuringARSession_SetBit(void* Obj)
	{
		((UAppleARKitSettings*)Obj)->bAdjustThreadPrioritiesDuringARSession = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bAdjustThreadPrioritiesDuringARSession = { "bAdjustThreadPrioritiesDuringARSession", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAppleARKitSettings), &Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bAdjustThreadPrioritiesDuringARSession_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bAdjustThreadPrioritiesDuringARSession_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bAdjustThreadPrioritiesDuringARSession_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_GameThreadPriorityOverride_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** The game thread priority to change to when an AR session is running, default is 47 */" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
		{ "ToolTip", "The game thread priority to change to when an AR session is running, default is 47" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_GameThreadPriorityOverride = { "GameThreadPriorityOverride", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleARKitSettings, GameThreadPriorityOverride), METADATA_PARAMS(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_GameThreadPriorityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_GameThreadPriorityOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_RenderThreadPriorityOverride_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/** The render thread priority to change to when an AR session is running, default is 45 */" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
		{ "ToolTip", "The render thread priority to change to when an AR session is running, default is 45" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_RenderThreadPriorityOverride = { "RenderThreadPriorityOverride", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleARKitSettings, RenderThreadPriorityOverride), METADATA_PARAMS(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_RenderThreadPriorityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_RenderThreadPriorityOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_ARKitTimecodeProvider_MetaData[] = {
		{ "Category", "AR Settings" },
		{ "Comment", "/**\n\x09 * Used to specify the timecode provider to use when identifying when an update occurred.\n\x09 * Useful when using external timecode generators to sync multiple devices/machines\n\x09 */" },
		{ "ModuleRelativePath", "Public/AppleARKitSettings.h" },
		{ "ToolTip", "Used to specify the timecode provider to use when identifying when an update occurred.\nUseful when using external timecode generators to sync multiple devices/machines" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_ARKitTimecodeProvider = { "ARKitTimecodeProvider", nullptr, (EPropertyFlags)0x0020080000004015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAppleARKitSettings, ARKitTimecodeProvider), METADATA_PARAMS(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_ARKitTimecodeProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_ARKitTimecodeProvider_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAppleARKitSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bRequireARKitSupport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_FaceTrackingLogDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_LivelinkTrackingTypes_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_LivelinkTrackingTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_LivelinkTrackingTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bFaceTrackingLogData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bFaceTrackingWriteEachFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_FaceTrackingFileWriterType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_FaceTrackingFileWriterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bShouldWriteCameraImagePerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_WrittenCameraImageScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_WrittenCameraImageQuality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_WrittenCameraImageRotation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_WrittenCameraImageRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_LiveLinkPublishingPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_DefaultFaceTrackingLiveLinkSubjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_DefaultPoseTrackingLiveLinkSubjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_DefaultFaceTrackingDirection_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_DefaultFaceTrackingDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_bAdjustThreadPrioritiesDuringARSession,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_GameThreadPriorityOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_RenderThreadPriorityOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppleARKitSettings_Statics::NewProp_ARKitTimecodeProvider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAppleARKitSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAppleARKitSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAppleARKitSettings_Statics::ClassParams = {
		&UAppleARKitSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAppleARKitSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAppleARKitSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAppleARKitSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAppleARKitSettings()
	{
		if (!Z_Registration_Info_UClass_UAppleARKitSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAppleARKitSettings.OuterSingleton, Z_Construct_UClass_UAppleARKitSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAppleARKitSettings.OuterSingleton;
	}
	template<> APPLEARKIT_API UClass* StaticClass<UAppleARKitSettings>()
	{
		return UAppleARKitSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAppleARKitSettings);
	UAppleARKitSettings::~UAppleARKitSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_Statics::EnumInfo[] = {
		{ EARFaceTrackingFileWriterType_StaticEnum, TEXT("EARFaceTrackingFileWriterType"), &Z_Registration_Info_UEnum_EARFaceTrackingFileWriterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2889779777U) },
		{ ELivelinkTrackingType_StaticEnum, TEXT("ELivelinkTrackingType"), &Z_Registration_Info_UEnum_ELivelinkTrackingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1080770665U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAppleARKitSettings, UAppleARKitSettings::StaticClass, TEXT("UAppleARKitSettings"), &Z_Registration_Info_UClass_UAppleARKitSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAppleARKitSettings), 4270260269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_1621837019(TEXT("/Script/AppleARKit"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_AppleAR_AppleARKit_Source_AppleARKit_Public_AppleARKitSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
