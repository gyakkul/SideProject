// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationSettings() {}
// Cross Module References
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationInstance_NoRegister();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationSettings();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationSettings_NoRegister();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_CommonConversationRuntime();
// End Cross Module References
	void UConversationSettings::StaticRegisterNativesUConversationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationSettings);
	UClass* Z_Construct_UClass_UConversationSettings_NoRegister()
	{
		return UConversationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UConversationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversationInstanceClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ConversationInstanceClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Conversation settings.\n */" },
		{ "DisplayName", "Conversation" },
		{ "IncludePath", "ConversationSettings.h" },
		{ "ModuleRelativePath", "Public/ConversationSettings.h" },
		{ "ToolTip", "Conversation settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationSettings_Statics::NewProp_ConversationInstanceClass_MetaData[] = {
		{ "Category", "Conversation" },
		{ "ModuleRelativePath", "Public/ConversationSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UConversationSettings_Statics::NewProp_ConversationInstanceClass = { "ConversationInstanceClass", nullptr, (EPropertyFlags)0x0024080000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationSettings, ConversationInstanceClass), Z_Construct_UClass_UConversationInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConversationSettings_Statics::NewProp_ConversationInstanceClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationSettings_Statics::NewProp_ConversationInstanceClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConversationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationSettings_Statics::NewProp_ConversationInstanceClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationSettings_Statics::ClassParams = {
		&UConversationSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConversationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConversationSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UConversationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationSettings()
	{
		if (!Z_Registration_Info_UClass_UConversationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationSettings.OuterSingleton, Z_Construct_UClass_UConversationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationSettings.OuterSingleton;
	}
	template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<UConversationSettings>()
	{
		return UConversationSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationSettings);
	UConversationSettings::~UConversationSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationSettings, UConversationSettings::StaticClass, TEXT("UConversationSettings"), &Z_Registration_Info_UClass_UConversationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationSettings), 311112700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSettings_h_2840344060(TEXT("/Script/CommonConversationRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
