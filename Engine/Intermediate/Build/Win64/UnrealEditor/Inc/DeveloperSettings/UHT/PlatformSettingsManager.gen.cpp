// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/PlatformSettingsManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformSettingsManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UPlatformSettings_NoRegister();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UPlatformSettingsManager();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UPlatformSettingsManager_NoRegister();
	DEVELOPERSETTINGS_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformSettingsInstances();
	UPackage* Z_Construct_UPackage__Script_DeveloperSettings();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlatformSettingsInstances;
class UScriptStruct* FPlatformSettingsInstances::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlatformSettingsInstances.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlatformSettingsInstances.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlatformSettingsInstances, (UObject*)Z_Construct_UPackage__Script_DeveloperSettings(), TEXT("PlatformSettingsInstances"));
	}
	return Z_Registration_Info_UScriptStruct_PlatformSettingsInstances.OuterSingleton;
}
template<> DEVELOPERSETTINGS_API UScriptStruct* StaticStruct<FPlatformSettingsInstances>()
{
	return FPlatformSettingsInstances::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlatformInstance;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OtherPlatforms_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OtherPlatforms_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherPlatforms_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OtherPlatforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// List of platform-specific instances for a class\n" },
		{ "ModuleRelativePath", "Public/Engine/PlatformSettingsManager.h" },
		{ "ToolTip", "List of platform-specific instances for a class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlatformSettingsInstances>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_PlatformInstance_MetaData[] = {
		{ "Comment", "// The instance for the native platform\n" },
		{ "ModuleRelativePath", "Public/Engine/PlatformSettingsManager.h" },
		{ "ToolTip", "The instance for the native platform" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_PlatformInstance = { "PlatformInstance", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlatformSettingsInstances, PlatformInstance), Z_Construct_UClass_UPlatformSettings_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_PlatformInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_PlatformInstance_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_OtherPlatforms_ValueProp = { "OtherPlatforms", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UPlatformSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_OtherPlatforms_Key_KeyProp = { "OtherPlatforms_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_OtherPlatforms_MetaData[] = {
		{ "Comment", "// Instances for other platforms (only used in the editor)\n" },
		{ "ModuleRelativePath", "Public/Engine/PlatformSettingsManager.h" },
		{ "ToolTip", "Instances for other platforms (only used in the editor)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_OtherPlatforms = { "OtherPlatforms", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlatformSettingsInstances, OtherPlatforms), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_OtherPlatforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_OtherPlatforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_PlatformInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_OtherPlatforms_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_OtherPlatforms_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewProp_OtherPlatforms,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeveloperSettings,
		nullptr,
		&NewStructOps,
		"PlatformSettingsInstances",
		sizeof(FPlatformSettingsInstances),
		alignof(FPlatformSettingsInstances),
		Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlatformSettingsInstances()
	{
		if (!Z_Registration_Info_UScriptStruct_PlatformSettingsInstances.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlatformSettingsInstances.InnerSingleton, Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlatformSettingsInstances.InnerSingleton;
	}
	void UPlatformSettingsManager::StaticRegisterNativesUPlatformSettingsManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlatformSettingsManager);
	UClass* Z_Construct_UClass_UPlatformSettingsManager_NoRegister()
	{
		return UPlatformSettingsManager::StaticClass();
	}
	struct Z_Construct_UClass_UPlatformSettingsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsMap_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_SettingsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SettingsMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlatformSettingsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeveloperSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformSettingsManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// The manager for all platform-specific settings\n" },
		{ "IncludePath", "Engine/PlatformSettingsManager.h" },
		{ "ModuleRelativePath", "Public/Engine/PlatformSettingsManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The manager for all platform-specific settings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlatformSettingsManager_Statics::NewProp_SettingsMap_ValueProp = { "SettingsMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPlatformSettingsInstances, METADATA_PARAMS(nullptr, 0) }; // 2819187011
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlatformSettingsManager_Statics::NewProp_SettingsMap_Key_KeyProp = { "SettingsMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UPlatformSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlatformSettingsManager_Statics::NewProp_SettingsMap_MetaData[] = {
		{ "Comment", "// Created platform-specific settings\n" },
		{ "ModuleRelativePath", "Public/Engine/PlatformSettingsManager.h" },
		{ "ToolTip", "Created platform-specific settings" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPlatformSettingsManager_Statics::NewProp_SettingsMap = { "SettingsMap", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlatformSettingsManager, SettingsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPlatformSettingsManager_Statics::NewProp_SettingsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformSettingsManager_Statics::NewProp_SettingsMap_MetaData)) }; // 2819187011
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlatformSettingsManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformSettingsManager_Statics::NewProp_SettingsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformSettingsManager_Statics::NewProp_SettingsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlatformSettingsManager_Statics::NewProp_SettingsMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlatformSettingsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlatformSettingsManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlatformSettingsManager_Statics::ClassParams = {
		&UPlatformSettingsManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlatformSettingsManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformSettingsManager_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlatformSettingsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlatformSettingsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlatformSettingsManager()
	{
		if (!Z_Registration_Info_UClass_UPlatformSettingsManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlatformSettingsManager.OuterSingleton, Z_Construct_UClass_UPlatformSettingsManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlatformSettingsManager.OuterSingleton;
	}
	template<> DEVELOPERSETTINGS_API UClass* StaticClass<UPlatformSettingsManager>()
	{
		return UPlatformSettingsManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlatformSettingsManager);
	UPlatformSettingsManager::~UPlatformSettingsManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_Statics::ScriptStructInfo[] = {
		{ FPlatformSettingsInstances::StaticStruct, Z_Construct_UScriptStruct_FPlatformSettingsInstances_Statics::NewStructOps, TEXT("PlatformSettingsInstances"), &Z_Registration_Info_UScriptStruct_PlatformSettingsInstances, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlatformSettingsInstances), 2819187011U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlatformSettingsManager, UPlatformSettingsManager::StaticClass, TEXT("UPlatformSettingsManager"), &Z_Registration_Info_UClass_UPlatformSettingsManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlatformSettingsManager), 3216707548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_21244385(TEXT("/Script/DeveloperSettings"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_DeveloperSettings_Public_Engine_PlatformSettingsManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
