// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassDebuggerSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassDebuggerSettings() {}
// Cross Module References
	MASSENTITY_API UClass* Z_Construct_UClass_UMassModuleSettings();
	MASSENTITYDEBUGGER_API UClass* Z_Construct_UClass_UMassDebuggerSettings();
	MASSENTITYDEBUGGER_API UClass* Z_Construct_UClass_UMassDebuggerSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassEntityDebugger();
// End Cross Module References
	void UMassDebuggerSettings::StaticRegisterNativesUMassDebuggerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassDebuggerSettings);
	UClass* Z_Construct_UClass_UMassDebuggerSettings_NoRegister()
	{
		return UMassDebuggerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMassDebuggerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStripMassPrefix_MetaData[];
#endif
		static void NewProp_bStripMassPrefix_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStripMassPrefix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassDebuggerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassModuleSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntityDebugger,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassDebuggerSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Mass Debugger" },
		{ "IncludePath", "MassDebuggerSettings.h" },
		{ "ModuleRelativePath", "Public/MassDebuggerSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassDebuggerSettings_Statics::NewProp_bStripMassPrefix_MetaData[] = {
		{ "Category", "Debugger" },
		{ "ModuleRelativePath", "Public/MassDebuggerSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMassDebuggerSettings_Statics::NewProp_bStripMassPrefix_SetBit(void* Obj)
	{
		((UMassDebuggerSettings*)Obj)->bStripMassPrefix = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMassDebuggerSettings_Statics::NewProp_bStripMassPrefix = { "bStripMassPrefix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMassDebuggerSettings), &Z_Construct_UClass_UMassDebuggerSettings_Statics::NewProp_bStripMassPrefix_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMassDebuggerSettings_Statics::NewProp_bStripMassPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassDebuggerSettings_Statics::NewProp_bStripMassPrefix_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassDebuggerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassDebuggerSettings_Statics::NewProp_bStripMassPrefix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassDebuggerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassDebuggerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassDebuggerSettings_Statics::ClassParams = {
		&UMassDebuggerSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassDebuggerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassDebuggerSettings_Statics::PropPointers),
		0,
		0x001020A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMassDebuggerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassDebuggerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassDebuggerSettings()
	{
		if (!Z_Registration_Info_UClass_UMassDebuggerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassDebuggerSettings.OuterSingleton, Z_Construct_UClass_UMassDebuggerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassDebuggerSettings.OuterSingleton;
	}
	template<> MASSENTITYDEBUGGER_API UClass* StaticClass<UMassDebuggerSettings>()
	{
		return UMassDebuggerSettings::StaticClass();
	}
	UMassDebuggerSettings::UMassDebuggerSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassDebuggerSettings);
	UMassDebuggerSettings::~UMassDebuggerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassDebuggerSettings, UMassDebuggerSettings::StaticClass, TEXT("UMassDebuggerSettings"), &Z_Registration_Info_UClass_UMassDebuggerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassDebuggerSettings), 87968357U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_2506834909(TEXT("/Script/MassEntityDebugger"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntityDebugger_Public_MassDebuggerSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
