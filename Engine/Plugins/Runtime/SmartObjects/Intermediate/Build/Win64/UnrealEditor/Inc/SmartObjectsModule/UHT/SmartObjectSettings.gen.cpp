// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartObjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSettings();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectSettings_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectWorldConditionSchema_NoRegister();
	SMARTOBJECTSMODULE_API UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy();
	SMARTOBJECTSMODULE_API UEnum* Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	void USmartObjectSettings::StaticRegisterNativesUSmartObjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectSettings);
	UClass* Z_Construct_UClass_USmartObjectSettings_NoRegister()
	{
		return USmartObjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultUserTagsFilteringPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultUserTagsFilteringPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultUserTagsFilteringPolicy;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultActivityTagsMergingPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultActivityTagsMergingPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultActivityTagsMergingPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWorldConditionSchemaClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultWorldConditionSchemaClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSettings_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "SmartObject" },
		{ "DisplayName", "SmartObject" },
		{ "IncludePath", "SmartObjectSettings.h" },
		{ "ModuleRelativePath", "Public/SmartObjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USmartObjectSettings_Statics::NewProp_DefaultUserTagsFilteringPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSettings_Statics::NewProp_DefaultUserTagsFilteringPolicy_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Default filtering policy to use for TagQueries applied on User Tags in newly created SmartObjectDefinitions.\n\x09 * Indicates how TagQueries from slots and parent object will be processed against User Tags from a find request.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSettings.h" },
		{ "ToolTip", "Default filtering policy to use for TagQueries applied on User Tags in newly created SmartObjectDefinitions.\nIndicates how TagQueries from slots and parent object will be processed against User Tags from a find request." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USmartObjectSettings_Statics::NewProp_DefaultUserTagsFilteringPolicy = { "DefaultUserTagsFilteringPolicy", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectSettings, DefaultUserTagsFilteringPolicy), Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagFilteringPolicy, METADATA_PARAMS(Z_Construct_UClass_USmartObjectSettings_Statics::NewProp_DefaultUserTagsFilteringPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSettings_Statics::NewProp_DefaultUserTagsFilteringPolicy_MetaData)) }; // 46274684
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USmartObjectSettings_Statics::NewProp_DefaultActivityTagsMergingPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSettings_Statics::NewProp_DefaultActivityTagsMergingPolicy_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Default merging policy to use for Activity Tags in newly created SmartObjectDefinitions.\n\x09 * Indicates how Activity Tags from slots and parent object are combined to be evaluated by an Activity TagQuery from a find request.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectSettings.h" },
		{ "ToolTip", "Default merging policy to use for Activity Tags in newly created SmartObjectDefinitions.\nIndicates how Activity Tags from slots and parent object are combined to be evaluated by an Activity TagQuery from a find request." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USmartObjectSettings_Statics::NewProp_DefaultActivityTagsMergingPolicy = { "DefaultActivityTagsMergingPolicy", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectSettings, DefaultActivityTagsMergingPolicy), Z_Construct_UEnum_SmartObjectsModule_ESmartObjectTagMergingPolicy, METADATA_PARAMS(Z_Construct_UClass_USmartObjectSettings_Statics::NewProp_DefaultActivityTagsMergingPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSettings_Statics::NewProp_DefaultActivityTagsMergingPolicy_MetaData)) }; // 124876394
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectSettings_Statics::NewProp_DefaultWorldConditionSchemaClass_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/** Base world condition class for all new Smart Object definitions. */" },
		{ "ModuleRelativePath", "Public/SmartObjectSettings.h" },
		{ "ToolTip", "Base world condition class for all new Smart Object definitions." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USmartObjectSettings_Statics::NewProp_DefaultWorldConditionSchemaClass = { "DefaultWorldConditionSchemaClass", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartObjectSettings, DefaultWorldConditionSchemaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USmartObjectWorldConditionSchema_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USmartObjectSettings_Statics::NewProp_DefaultWorldConditionSchemaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSettings_Statics::NewProp_DefaultWorldConditionSchemaClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmartObjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSettings_Statics::NewProp_DefaultUserTagsFilteringPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSettings_Statics::NewProp_DefaultUserTagsFilteringPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSettings_Statics::NewProp_DefaultActivityTagsMergingPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSettings_Statics::NewProp_DefaultActivityTagsMergingPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartObjectSettings_Statics::NewProp_DefaultWorldConditionSchemaClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectSettings_Statics::ClassParams = {
		&USmartObjectSettings::StaticClass,
		"SmartObjects",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USmartObjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectSettings()
	{
		if (!Z_Registration_Info_UClass_USmartObjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectSettings.OuterSingleton, Z_Construct_UClass_USmartObjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectSettings.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<USmartObjectSettings>()
	{
		return USmartObjectSettings::StaticClass();
	}
	USmartObjectSettings::USmartObjectSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectSettings);
	USmartObjectSettings::~USmartObjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectSettings, USmartObjectSettings::StaticClass, TEXT("USmartObjectSettings"), &Z_Registration_Info_UClass_USmartObjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectSettings), 2018492485U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSettings_h_1645332538(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
