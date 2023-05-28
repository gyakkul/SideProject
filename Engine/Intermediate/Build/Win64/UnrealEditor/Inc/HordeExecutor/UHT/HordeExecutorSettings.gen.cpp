// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HordeExecutorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHordeExecutorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HORDEEXECUTOR_API UClass* Z_Construct_UClass_UHordeExecutorSettings();
	HORDEEXECUTOR_API UClass* Z_Construct_UClass_UHordeExecutorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HordeExecutor();
// End Cross Module References
	void UHordeExecutorSettings::StaticRegisterNativesUHordeExecutorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHordeExecutorSettings);
	UClass* Z_Construct_UClass_UHordeExecutorSettings_NoRegister()
	{
		return UHordeExecutorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHordeExecutorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentAddressableStorageTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentAddressableStorageTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExecutionTarget;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentAddressableStorageHeaders_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ContentAddressableStorageHeaders_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentAddressableStorageHeaders_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ContentAddressableStorageHeaders;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExecutionHeaders_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExecutionHeaders_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionHeaders_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ExecutionHeaders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHordeExecutorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HordeExecutor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHordeExecutorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HordeExecutorSettings.h" },
		{ "ModuleRelativePath", "Private/HordeExecutorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ContentAddressableStorageTarget_MetaData[] = {
		{ "Category", "Horde" },
		{ "Comment", "/** The Horde server content addressable storage address. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Content Addressable Storage Target" },
		{ "ModuleRelativePath", "Private/HordeExecutorSettings.h" },
		{ "ToolTip", "The Horde server content addressable storage address." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ContentAddressableStorageTarget = { "ContentAddressableStorageTarget", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHordeExecutorSettings, ContentAddressableStorageTarget), METADATA_PARAMS(Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ContentAddressableStorageTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ContentAddressableStorageTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ExecutionTarget_MetaData[] = {
		{ "Category", "Horde" },
		{ "Comment", "/** The Horde server execution address. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Execution Target" },
		{ "ModuleRelativePath", "Private/HordeExecutorSettings.h" },
		{ "ToolTip", "The Horde server execution address." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ExecutionTarget = { "ExecutionTarget", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHordeExecutorSettings, ExecutionTarget), METADATA_PARAMS(Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ExecutionTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ExecutionTarget_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ContentAddressableStorageHeaders_ValueProp = { "ContentAddressableStorageHeaders", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ContentAddressableStorageHeaders_Key_KeyProp = { "ContentAddressableStorageHeaders_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ContentAddressableStorageHeaders_MetaData[] = {
		{ "Category", "Horde" },
		{ "Comment", "/** Extra headers required for content addressable storage requests. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Content Addressable Storage Headers" },
		{ "ModuleRelativePath", "Private/HordeExecutorSettings.h" },
		{ "ToolTip", "Extra headers required for content addressable storage requests." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ContentAddressableStorageHeaders = { "ContentAddressableStorageHeaders", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHordeExecutorSettings, ContentAddressableStorageHeaders), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ContentAddressableStorageHeaders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ContentAddressableStorageHeaders_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ExecutionHeaders_ValueProp = { "ExecutionHeaders", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ExecutionHeaders_Key_KeyProp = { "ExecutionHeaders_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ExecutionHeaders_MetaData[] = {
		{ "Category", "Horde" },
		{ "Comment", "/** Extra headers required for execution requests. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Execution Headers" },
		{ "ModuleRelativePath", "Private/HordeExecutorSettings.h" },
		{ "ToolTip", "Extra headers required for execution requests." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ExecutionHeaders = { "ExecutionHeaders", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHordeExecutorSettings, ExecutionHeaders), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ExecutionHeaders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ExecutionHeaders_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHordeExecutorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ContentAddressableStorageTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ExecutionTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ContentAddressableStorageHeaders_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ContentAddressableStorageHeaders_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ContentAddressableStorageHeaders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ExecutionHeaders_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ExecutionHeaders_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHordeExecutorSettings_Statics::NewProp_ExecutionHeaders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHordeExecutorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHordeExecutorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHordeExecutorSettings_Statics::ClassParams = {
		&UHordeExecutorSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHordeExecutorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHordeExecutorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHordeExecutorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHordeExecutorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHordeExecutorSettings()
	{
		if (!Z_Registration_Info_UClass_UHordeExecutorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHordeExecutorSettings.OuterSingleton, Z_Construct_UClass_UHordeExecutorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHordeExecutorSettings.OuterSingleton;
	}
	template<> HORDEEXECUTOR_API UClass* StaticClass<UHordeExecutorSettings>()
	{
		return UHordeExecutorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHordeExecutorSettings);
	UHordeExecutorSettings::~UHordeExecutorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_HordeExecutor_Private_HordeExecutorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_HordeExecutor_Private_HordeExecutorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHordeExecutorSettings, UHordeExecutorSettings::StaticClass, TEXT("UHordeExecutorSettings"), &Z_Registration_Info_UClass_UHordeExecutorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHordeExecutorSettings), 3535234131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_HordeExecutor_Private_HordeExecutorSettings_h_298250688(TEXT("/Script/HordeExecutor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_HordeExecutor_Private_HordeExecutorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_HordeExecutor_Private_HordeExecutorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
