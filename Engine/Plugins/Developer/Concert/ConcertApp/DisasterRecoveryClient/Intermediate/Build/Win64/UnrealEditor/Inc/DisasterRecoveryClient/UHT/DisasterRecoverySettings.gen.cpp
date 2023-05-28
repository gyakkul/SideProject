// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DisasterRecoverySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisasterRecoverySettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	DISASTERRECOVERYCLIENT_API UClass* Z_Construct_UClass_UDisasterRecoverClientConfig();
	DISASTERRECOVERYCLIENT_API UClass* Z_Construct_UClass_UDisasterRecoverClientConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DisasterRecoveryClient();
// End Cross Module References
	void UDisasterRecoverClientConfig::StaticRegisterNativesUDisasterRecoverClientConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisasterRecoverClientConfig);
	UClass* Z_Construct_UClass_UDisasterRecoverClientConfig_NoRegister()
	{
		return UDisasterRecoverClientConfig::StaticClass();
	}
	struct Z_Construct_UClass_UDisasterRecoverClientConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecoverySessionDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RecoverySessionDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecentSessionMaxCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RecentSessionMaxCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportedSessionMaxCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ImportedSessionMaxCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DisasterRecoveryClient,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DisasterRecoverySettings.h" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/**\n\x09 * Enables Recovery Hub plugin to create and/or restore a recovery sessions when needed.\n\x09 */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySettings.h" },
		{ "ToolTip", "Enables Recovery Hub plugin to create and/or restore a recovery sessions when needed." },
	};
#endif
	void Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((UDisasterRecoverClientConfig*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDisasterRecoverClientConfig), &Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_RecoverySessionDir_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "Comment", "/**\n\x09 * The root directory where recovery sessions should be stored. If not set or\n\x09 * invalid, the recovery sessions are stored in the project saved directory. The\n\x09 * existing sessions are not moved (but remains accessible) when the directory is changed.\n\x09 */" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySettings.h" },
		{ "ToolTip", "The root directory where recovery sessions should be stored. If not set or\ninvalid, the recovery sessions are stored in the project saved directory. The\nexisting sessions are not moved (but remains accessible) when the directory is changed." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_RecoverySessionDir = { "RecoverySessionDir", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisasterRecoverClientConfig, RecoverySessionDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_RecoverySessionDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_RecoverySessionDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_RecentSessionMaxCount_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The maximum number of recent recovery sessions to keep around. The sessions are rotated\n\x09 * at Editor startup and oldest ones are discarded.\n\x09 */" },
		{ "DisplayName", "Session History Size" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySettings.h" },
		{ "ToolTip", "The maximum number of recent recovery sessions to keep around. The sessions are rotated\nat Editor startup and oldest ones are discarded." },
		{ "UIMax", "50" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_RecentSessionMaxCount = { "RecentSessionMaxCount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisasterRecoverClientConfig, RecentSessionMaxCount), METADATA_PARAMS(Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_RecentSessionMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_RecentSessionMaxCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_ImportedSessionMaxCount_MetaData[] = {
		{ "Category", "Client Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The maximum number of imported recovery session to keep around. The sessions are rotated\n\x09 * at Editor startup and oldest imports are discarded.\n\x09 */" },
		{ "DisplayName", "Imported Session History Size" },
		{ "ModuleRelativePath", "Private/DisasterRecoverySettings.h" },
		{ "ToolTip", "The maximum number of imported recovery session to keep around. The sessions are rotated\nat Editor startup and oldest imports are discarded." },
		{ "UIMax", "50" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_ImportedSessionMaxCount = { "ImportedSessionMaxCount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDisasterRecoverClientConfig, ImportedSessionMaxCount), METADATA_PARAMS(Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_ImportedSessionMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_ImportedSessionMaxCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_RecoverySessionDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_RecentSessionMaxCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::NewProp_ImportedSessionMaxCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisasterRecoverClientConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::ClassParams = {
		&UDisasterRecoverClientConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisasterRecoverClientConfig()
	{
		if (!Z_Registration_Info_UClass_UDisasterRecoverClientConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisasterRecoverClientConfig.OuterSingleton, Z_Construct_UClass_UDisasterRecoverClientConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisasterRecoverClientConfig.OuterSingleton;
	}
	template<> DISASTERRECOVERYCLIENT_API UClass* StaticClass<UDisasterRecoverClientConfig>()
	{
		return UDisasterRecoverClientConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisasterRecoverClientConfig);
	UDisasterRecoverClientConfig::~UDisasterRecoverClientConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_DisasterRecoveryClient_Source_DisasterRecoveryClient_Private_DisasterRecoverySettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_DisasterRecoveryClient_Source_DisasterRecoveryClient_Private_DisasterRecoverySettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisasterRecoverClientConfig, UDisasterRecoverClientConfig::StaticClass, TEXT("UDisasterRecoverClientConfig"), &Z_Registration_Info_UClass_UDisasterRecoverClientConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisasterRecoverClientConfig), 104868085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_DisasterRecoveryClient_Source_DisasterRecoveryClient_Private_DisasterRecoverySettings_h_1865830465(TEXT("/Script/DisasterRecoveryClient"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_DisasterRecoveryClient_Source_DisasterRecoveryClient_Private_DisasterRecoverySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertApp_DisasterRecoveryClient_Source_DisasterRecoveryClient_Private_DisasterRecoverySettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
