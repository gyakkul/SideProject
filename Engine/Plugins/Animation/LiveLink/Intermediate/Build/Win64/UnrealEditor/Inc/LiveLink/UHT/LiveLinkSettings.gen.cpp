// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkPreset_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkSettings();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkSettings_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkUserSettings();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkUserSettings_NoRegister();
	LIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
	LIVELINKINTERFACE_API UEnum* Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkRoleProjectSetting;
class UScriptStruct* FLiveLinkRoleProjectSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkRoleProjectSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkRoleProjectSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting, (UObject*)Z_Construct_UPackage__Script_LiveLink(), TEXT("LiveLinkRoleProjectSetting"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkRoleProjectSetting.OuterSingleton;
}
template<> LIVELINK_API UScriptStruct* StaticStruct<FLiveLinkRoleProjectSetting>()
{
	return FLiveLinkRoleProjectSetting::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Role;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SettingClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameInterpolationProcessor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FrameInterpolationProcessor;
		static const UECodeGen_Private::FClassPropertyParams NewProp_FramePreProcessors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FramePreProcessors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FramePreProcessors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for LiveLinkRole.\n */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Settings for LiveLinkRole." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkRoleProjectSetting>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_Role_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The role of the current setting. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The role of the current setting." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkRoleProjectSetting, Role), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRole_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_Role_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_SettingClass_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The settings class to use for the subject. If null, LiveLinkSubjectSettings will be used by default. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The settings class to use for the subject. If null, LiveLinkSubjectSettings will be used by default." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_SettingClass = { "SettingClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkRoleProjectSetting, SettingClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_SettingClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_SettingClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FrameInterpolationProcessor_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The interpolation to use for the subject. If null, no interpolation will be performed. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The interpolation to use for the subject. If null, no interpolation will be performed." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FrameInterpolationProcessor = { "FrameInterpolationProcessor", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkRoleProjectSetting, FrameInterpolationProcessor), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FrameInterpolationProcessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FrameInterpolationProcessor_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FramePreProcessors_Inner = { "FramePreProcessors", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FramePreProcessors_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The pre processors to use for the subject. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The pre processors to use for the subject." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FramePreProcessors = { "FramePreProcessors", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLiveLinkRoleProjectSetting, FramePreProcessors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FramePreProcessors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FramePreProcessors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_SettingClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FrameInterpolationProcessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FramePreProcessors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewProp_FramePreProcessors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
		nullptr,
		&NewStructOps,
		"LiveLinkRoleProjectSetting",
		sizeof(FLiveLinkRoleProjectSetting),
		alignof(FLiveLinkRoleProjectSetting),
		Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkRoleProjectSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkRoleProjectSetting.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkRoleProjectSetting.InnerSingleton;
	}
	void ULiveLinkUserSettings::StaticRegisterNativesULiveLinkUserSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkUserSettings);
	UClass* Z_Construct_UClass_ULiveLinkUserSettings_NoRegister()
	{
		return ULiveLinkUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetSaveDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PresetSaveDir;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkUserSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkUserSettings_Statics::NewProp_PresetSaveDir_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The default location in which to save LiveLink presets */" },
		{ "DisplayName", "Preset Save Location" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The default location in which to save LiveLink presets" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkUserSettings_Statics::NewProp_PresetSaveDir = { "PresetSaveDir", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkUserSettings, PresetSaveDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkUserSettings_Statics::NewProp_PresetSaveDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkUserSettings_Statics::NewProp_PresetSaveDir_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkUserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkUserSettings_Statics::NewProp_PresetSaveDir,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkUserSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkUserSettings_Statics::ClassParams = {
		&ULiveLinkUserSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkUserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkUserSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkUserSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkUserSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkUserSettings()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkUserSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkUserSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkUserSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkUserSettings.OuterSingleton;
	}
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkUserSettings>()
	{
		return ULiveLinkUserSettings::StaticClass();
	}
	ULiveLinkUserSettings::ULiveLinkUserSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkUserSettings);
	ULiveLinkUserSettings::~ULiveLinkUserSettings() {}
	void ULiveLinkSettings::StaticRegisterNativesULiveLinkSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkSettings);
	UClass* Z_Construct_UClass_ULiveLinkSettings_NoRegister()
	{
		return ULiveLinkSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultRoleSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRoleSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultRoleSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameInterpolationProcessor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_FrameInterpolationProcessor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLiveLinkPreset_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultLiveLinkPreset;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetSaveDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PresetSaveDir;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClockOffsetCorrectionStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClockOffsetCorrectionStep;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultMessageBusSourceMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMessageBusSourceMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultMessageBusSourceMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageBusPingRequestFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MessageBusPingRequestFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageBusHeartbeatFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MessageBusHeartbeatFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageBusHeartbeatTimeout_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MessageBusHeartbeatTimeout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageBusTimeBeforeRemovingInactiveSource_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MessageBusTimeBeforeRemovingInactiveSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeWithoutFrameToBeConsiderAsInvalid_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_TimeWithoutFrameToBeConsiderAsInvalid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ValidColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InvalidColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InvalidColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextSizeSource_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextSizeSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextSizeSubject_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextSizeSubject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for LiveLink.\n */" },
		{ "IncludePath", "LiveLinkSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Settings for LiveLink." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultRoleSettings_Inner = { "DefaultRoleSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting, METADATA_PARAMS(nullptr, 0) }; // 224219941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultRoleSettings_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultRoleSettings = { "DefaultRoleSettings", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSettings, DefaultRoleSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultRoleSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultRoleSettings_MetaData)) }; // 224219941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_FrameInterpolationProcessor_MetaData[] = {
		{ "Comment", "/** The interpolation class to use for new Subjects if no specific settings we set for the Subject's role. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The interpolation class to use for new Subjects if no specific settings we set for the Subject's role." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_FrameInterpolationProcessor = { "FrameInterpolationProcessor", nullptr, (EPropertyFlags)0x0014000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSettings, FrameInterpolationProcessor), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_FrameInterpolationProcessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_FrameInterpolationProcessor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultLiveLinkPreset_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The default preset that should be applied */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The default preset that should be applied" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultLiveLinkPreset = { "DefaultLiveLinkPreset", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSettings, DefaultLiveLinkPreset), Z_Construct_UClass_ULiveLinkPreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultLiveLinkPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultLiveLinkPreset_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_PresetSaveDir_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_PresetSaveDir = { "PresetSaveDir", nullptr, (EPropertyFlags)0x0010000820004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSettings, PresetSaveDir_DEPRECATED), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_PresetSaveDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_PresetSaveDir_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_ClockOffsetCorrectionStep_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Continuous clock offset correction step */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Continuous clock offset correction step" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_ClockOffsetCorrectionStep = { "ClockOffsetCorrectionStep", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSettings, ClockOffsetCorrectionStep), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_ClockOffsetCorrectionStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_ClockOffsetCorrectionStep_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultMessageBusSourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultMessageBusSourceMode_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The default evaluation mode a source connected via the message bus should start with. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The default evaluation mode a source connected via the message bus should start with." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultMessageBusSourceMode = { "DefaultMessageBusSourceMode", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSettings, DefaultMessageBusSourceMode), Z_Construct_UEnum_LiveLinkInterface_ELiveLinkSourceMode, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultMessageBusSourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultMessageBusSourceMode_MetaData)) }; // 943220920
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusPingRequestFrequency_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The refresh frequency of the list of message bus provider (when discovery is requested). */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The refresh frequency of the list of message bus provider (when discovery is requested)." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusPingRequestFrequency = { "MessageBusPingRequestFrequency", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSettings, MessageBusPingRequestFrequency), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusPingRequestFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusPingRequestFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatFrequency_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The refresh frequency of the heartbeat when a provider didn't send us an updated. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "The refresh frequency of the heartbeat when a provider didn't send us an updated." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatFrequency = { "MessageBusHeartbeatFrequency", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSettings, MessageBusHeartbeatFrequency), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatTimeout_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** How long we should wait before a provider become unresponsive. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "How long we should wait before a provider become unresponsive." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatTimeout = { "MessageBusHeartbeatTimeout", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSettings, MessageBusHeartbeatTimeout), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatTimeout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusTimeBeforeRemovingInactiveSource_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Subjects will be removed when their source has been unresponsive for this long. */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Subjects will be removed when their source has been unresponsive for this long." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusTimeBeforeRemovingInactiveSource = { "MessageBusTimeBeforeRemovingInactiveSource", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSettings, MessageBusTimeBeforeRemovingInactiveSource), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusTimeBeforeRemovingInactiveSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusTimeBeforeRemovingInactiveSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TimeWithoutFrameToBeConsiderAsInvalid_MetaData[] = {
		{ "Category", "LiveLink|UI" },
		{ "Comment", "/**\n\x09 * A source may still exist but does not send frames for a subject.\n\x09 * Time before considering the subject as \"invalid\".\n\x09 * The subject still exists and can still be evaluated.\n\x09 * An invalid subject is shown as yellow in the LiveLink UI.\n\x09 */" },
		{ "DisplayName", "Time Without Frame to be Considered as Invalid" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "A source may still exist but does not send frames for a subject.\nTime before considering the subject as \"invalid\".\nThe subject still exists and can still be evaluated.\nAn invalid subject is shown as yellow in the LiveLink UI." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TimeWithoutFrameToBeConsiderAsInvalid = { "TimeWithoutFrameToBeConsiderAsInvalid", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSettings, TimeWithoutFrameToBeConsiderAsInvalid), METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TimeWithoutFrameToBeConsiderAsInvalid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TimeWithoutFrameToBeConsiderAsInvalid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_ValidColor_MetaData[] = {
		{ "Category", "LiveLink|UI" },
		{ "Comment", "/** Color for active Subjects receiving data from their Source. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Color for active Subjects receiving data from their Source." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_ValidColor = { "ValidColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSettings, ValidColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_ValidColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_ValidColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_InvalidColor_MetaData[] = {
		{ "Category", "LiveLink|UI" },
		{ "Comment", "/** Color for Subjects that have not received data from their Source for TimeWithoutFrameToBeConsiderAsInvalid. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Color for Subjects that have not received data from their Source for TimeWithoutFrameToBeConsiderAsInvalid." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_InvalidColor = { "InvalidColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSettings, InvalidColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_InvalidColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_InvalidColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TextSizeSource_MetaData[] = {
		{ "Category", "LiveLink|UI|Debug" },
		{ "Comment", "/** Font size of Source names shown in LiveLink Debug View. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Font size of Source names shown in LiveLink Debug View." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TextSizeSource = { "TextSizeSource", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSettings, TextSizeSource), nullptr, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TextSizeSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TextSizeSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TextSizeSubject_MetaData[] = {
		{ "Category", "LiveLink|UI|Debug" },
		{ "Comment", "/** Font size of Subject names shown in LiveLink Debug View. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSettings.h" },
		{ "ToolTip", "Font size of Subject names shown in LiveLink Debug View." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TextSizeSubject = { "TextSizeSubject", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSettings, TextSizeSubject), nullptr, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TextSizeSubject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TextSizeSubject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultRoleSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultRoleSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_FrameInterpolationProcessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultLiveLinkPreset,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_PresetSaveDir,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_ClockOffsetCorrectionStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultMessageBusSourceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_DefaultMessageBusSourceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusPingRequestFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusHeartbeatTimeout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_MessageBusTimeBeforeRemovingInactiveSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TimeWithoutFrameToBeConsiderAsInvalid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_ValidColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_InvalidColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TextSizeSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSettings_Statics::NewProp_TextSizeSubject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkSettings_Statics::ClassParams = {
		&ULiveLinkSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkSettings()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkSettings.OuterSingleton;
	}
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkSettings>()
	{
		return ULiveLinkSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkSettings);
	ULiveLinkSettings::~ULiveLinkSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkRoleProjectSetting::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkRoleProjectSetting_Statics::NewStructOps, TEXT("LiveLinkRoleProjectSetting"), &Z_Registration_Info_UScriptStruct_LiveLinkRoleProjectSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkRoleProjectSetting), 224219941U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkUserSettings, ULiveLinkUserSettings::StaticClass, TEXT("ULiveLinkUserSettings"), &Z_Registration_Info_UClass_ULiveLinkUserSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkUserSettings), 1451164158U) },
		{ Z_Construct_UClass_ULiveLinkSettings, ULiveLinkSettings::StaticClass, TEXT("ULiveLinkSettings"), &Z_Registration_Info_UClass_ULiveLinkSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkSettings), 2872990753U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_3387384772(TEXT("/Script/LiveLink"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_LiveLinkSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
