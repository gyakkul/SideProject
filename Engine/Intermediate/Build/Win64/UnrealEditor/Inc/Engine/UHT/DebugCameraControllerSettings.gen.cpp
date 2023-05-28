// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DebugCameraControllerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugCameraControllerSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDebugCameraControllerSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDebugCameraControllerSettings_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewModeIndex();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DebugCameraControllerSettingsViewModeIndex;
class UScriptStruct* FDebugCameraControllerSettingsViewModeIndex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DebugCameraControllerSettingsViewModeIndex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DebugCameraControllerSettingsViewModeIndex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DebugCameraControllerSettingsViewModeIndex"));
	}
	return Z_Registration_Info_UScriptStruct_DebugCameraControllerSettingsViewModeIndex.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDebugCameraControllerSettingsViewModeIndex>()
{
	return FDebugCameraControllerSettingsViewModeIndex::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewModeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewModeIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraControllerSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugCameraControllerSettingsViewModeIndex>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::NewProp_ViewModeIndex_MetaData[] = {
		{ "Category", "General" },
		{ "DisplayName", "Cycle View Mode" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraControllerSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::NewProp_ViewModeIndex = { "ViewModeIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugCameraControllerSettingsViewModeIndex, ViewModeIndex), Z_Construct_UEnum_Engine_EViewModeIndex, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::NewProp_ViewModeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::NewProp_ViewModeIndex_MetaData)) }; // 1054163023
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::NewProp_ViewModeIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DebugCameraControllerSettingsViewModeIndex",
		sizeof(FDebugCameraControllerSettingsViewModeIndex),
		alignof(FDebugCameraControllerSettingsViewModeIndex),
		Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex()
	{
		if (!Z_Registration_Info_UScriptStruct_DebugCameraControllerSettingsViewModeIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DebugCameraControllerSettingsViewModeIndex.InnerSingleton, Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DebugCameraControllerSettingsViewModeIndex.InnerSingleton;
	}
	void UDebugCameraControllerSettings::StaticRegisterNativesUDebugCameraControllerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDebugCameraControllerSettings);
	UClass* Z_Construct_UClass_UDebugCameraControllerSettings_NoRegister()
	{
		return UDebugCameraControllerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDebugCameraControllerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CycleViewModes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CycleViewModes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CycleViewModes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDebugCameraControllerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugCameraControllerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default debug camera controller settings.\n */" },
		{ "DisplayName", "Debug Camera Controller" },
		{ "IncludePath", "Engine/DebugCameraControllerSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraControllerSettings.h" },
		{ "ToolTip", "Default debug camera controller settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDebugCameraControllerSettings_Statics::NewProp_CycleViewModes_Inner = { "CycleViewModes", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex, METADATA_PARAMS(nullptr, 0) }; // 1725137839
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugCameraControllerSettings_Statics::NewProp_CycleViewModes_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Classes/Engine/DebugCameraControllerSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDebugCameraControllerSettings_Statics::NewProp_CycleViewModes = { "CycleViewModes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDebugCameraControllerSettings, CycleViewModes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDebugCameraControllerSettings_Statics::NewProp_CycleViewModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugCameraControllerSettings_Statics::NewProp_CycleViewModes_MetaData)) }; // 1725137839
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDebugCameraControllerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugCameraControllerSettings_Statics::NewProp_CycleViewModes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugCameraControllerSettings_Statics::NewProp_CycleViewModes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDebugCameraControllerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugCameraControllerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDebugCameraControllerSettings_Statics::ClassParams = {
		&UDebugCameraControllerSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDebugCameraControllerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDebugCameraControllerSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDebugCameraControllerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugCameraControllerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDebugCameraControllerSettings()
	{
		if (!Z_Registration_Info_UClass_UDebugCameraControllerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDebugCameraControllerSettings.OuterSingleton, Z_Construct_UClass_UDebugCameraControllerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDebugCameraControllerSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDebugCameraControllerSettings>()
	{
		return UDebugCameraControllerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugCameraControllerSettings);
	UDebugCameraControllerSettings::~UDebugCameraControllerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_Statics::ScriptStructInfo[] = {
		{ FDebugCameraControllerSettingsViewModeIndex::StaticStruct, Z_Construct_UScriptStruct_FDebugCameraControllerSettingsViewModeIndex_Statics::NewStructOps, TEXT("DebugCameraControllerSettingsViewModeIndex"), &Z_Registration_Info_UScriptStruct_DebugCameraControllerSettingsViewModeIndex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDebugCameraControllerSettingsViewModeIndex), 1725137839U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDebugCameraControllerSettings, UDebugCameraControllerSettings::StaticClass, TEXT("UDebugCameraControllerSettings"), &Z_Registration_Info_UClass_UDebugCameraControllerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDebugCameraControllerSettings), 3802270790U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_1390212920(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugCameraControllerSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
