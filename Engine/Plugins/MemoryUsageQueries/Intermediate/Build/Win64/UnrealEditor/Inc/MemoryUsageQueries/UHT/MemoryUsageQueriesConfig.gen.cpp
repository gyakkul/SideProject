// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MemoryUsageQueriesConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMemoryUsageQueriesConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MEMORYUSAGEQUERIES_API UClass* Z_Construct_UClass_UMemoryUsageQueriesConfig();
	MEMORYUSAGEQUERIES_API UClass* Z_Construct_UClass_UMemoryUsageQueriesConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MemoryUsageQueries();
// End Cross Module References
	void UMemoryUsageQueriesConfig::StaticRegisterNativesUMemoryUsageQueriesConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMemoryUsageQueriesConfig);
	UClass* Z_Construct_UClass_UMemoryUsageQueriesConfig_NoRegister()
	{
		return UMemoryUsageQueriesConfig::StaticClass();
	}
	struct Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavingsPresets_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavingsPresets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavingsPresets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SavingsPresets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MemoryUsageQueries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// \xe2\x80\x9cMemQuery Savings\xe2\x80\x9d command is supposed to list potential memory savings for assets based on predefined presets. \n// You can define them in DefaultMemoryUsageQueries.ini in your project \xe2\x80\x93 you have to provide preset name and UClass.\n// \"MemQuery Savings\" command should list all derived classes with potential savings for the specified preset.\n// \n// e.g.\n// [/Script/MemoryUsageQueries.MemoryUsageQueriesConfig]\n// +SavingsPresets = ((\"Pawns\", \"/Script/OurProject.OurCharacter\"))\n" },
		{ "IncludePath", "MemoryUsageQueriesConfig.h" },
		{ "ModuleRelativePath", "Public/MemoryUsageQueriesConfig.h" },
		{ "ToolTip", "\xe2\x80\x9cMemQuery Savings\xe2\x80\x9d command is supposed to list potential memory savings for assets based on predefined presets.\nYou can define them in DefaultMemoryUsageQueries.ini in your project \xe2\x80\x93 you have to provide preset name and UClass.\n\"MemQuery Savings\" command should list all derived classes with potential savings for the specified preset.\n\ne.g.\n[/Script/MemoryUsageQueries.MemoryUsageQueriesConfig]\n+SavingsPresets = ((\"Pawns\", \"/Script/OurProject.OurCharacter\"))" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_SavingsPresets_ValueProp = { "SavingsPresets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_SavingsPresets_Key_KeyProp = { "SavingsPresets_Key", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_SavingsPresets_MetaData[] = {
		{ "ModuleRelativePath", "Public/MemoryUsageQueriesConfig.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_SavingsPresets = { "SavingsPresets", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMemoryUsageQueriesConfig, SavingsPresets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_SavingsPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_SavingsPresets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_SavingsPresets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_SavingsPresets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::NewProp_SavingsPresets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMemoryUsageQueriesConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::ClassParams = {
		&UMemoryUsageQueriesConfig::StaticClass,
		"MemoryUsageQueries",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMemoryUsageQueriesConfig()
	{
		if (!Z_Registration_Info_UClass_UMemoryUsageQueriesConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMemoryUsageQueriesConfig.OuterSingleton, Z_Construct_UClass_UMemoryUsageQueriesConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMemoryUsageQueriesConfig.OuterSingleton;
	}
	template<> MEMORYUSAGEQUERIES_API UClass* StaticClass<UMemoryUsageQueriesConfig>()
	{
		return UMemoryUsageQueriesConfig::StaticClass();
	}
	UMemoryUsageQueriesConfig::UMemoryUsageQueriesConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMemoryUsageQueriesConfig);
	UMemoryUsageQueriesConfig::~UMemoryUsageQueriesConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMemoryUsageQueriesConfig, UMemoryUsageQueriesConfig::StaticClass, TEXT("UMemoryUsageQueriesConfig"), &Z_Registration_Info_UClass_UMemoryUsageQueriesConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMemoryUsageQueriesConfig), 1567150096U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_4041836554(TEXT("/Script/MemoryUsageQueries"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MemoryUsageQueries_Source_MemoryUsageQueries_Public_MemoryUsageQueriesConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
