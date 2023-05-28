// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/RemoteExecutionSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteExecutionSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	REMOTEEXECUTION_API UClass* Z_Construct_UClass_URemoteExecutionSettings();
	REMOTEEXECUTION_API UClass* Z_Construct_UClass_URemoteExecutionSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteExecution();
// End Cross Module References
	void URemoteExecutionSettings::StaticRegisterNativesURemoteExecutionSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteExecutionSettings);
	UClass* Z_Construct_UClass_URemoteExecutionSettings_NoRegister()
	{
		return URemoteExecutionSettings::StaticClass();
	}
	struct Z_Construct_UClass_URemoteExecutionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreferredRemoteExecutor_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PreferredRemoteExecutor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteExecutionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteExecution,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteExecutionSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RemoteExecutionSettings.h" },
		{ "ModuleRelativePath", "Private/RemoteExecutionSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteExecutionSettings_Statics::NewProp_PreferredRemoteExecutor_MetaData[] = {
		{ "Category", "Remote Execution" },
		{ "Comment", "/** The remote executor we prefer to use. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Preferred Executor" },
		{ "ModuleRelativePath", "Private/RemoteExecutionSettings.h" },
		{ "ToolTip", "The remote executor we prefer to use." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URemoteExecutionSettings_Statics::NewProp_PreferredRemoteExecutor = { "PreferredRemoteExecutor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteExecutionSettings, PreferredRemoteExecutor), METADATA_PARAMS(Z_Construct_UClass_URemoteExecutionSettings_Statics::NewProp_PreferredRemoteExecutor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteExecutionSettings_Statics::NewProp_PreferredRemoteExecutor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteExecutionSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteExecutionSettings_Statics::NewProp_PreferredRemoteExecutor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteExecutionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteExecutionSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteExecutionSettings_Statics::ClassParams = {
		&URemoteExecutionSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoteExecutionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteExecutionSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteExecutionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteExecutionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteExecutionSettings()
	{
		if (!Z_Registration_Info_UClass_URemoteExecutionSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteExecutionSettings.OuterSingleton, Z_Construct_UClass_URemoteExecutionSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteExecutionSettings.OuterSingleton;
	}
	template<> REMOTEEXECUTION_API UClass* StaticClass<URemoteExecutionSettings>()
	{
		return URemoteExecutionSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteExecutionSettings);
	URemoteExecutionSettings::~URemoteExecutionSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_RemoteExecution_Private_RemoteExecutionSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_RemoteExecution_Private_RemoteExecutionSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteExecutionSettings, URemoteExecutionSettings::StaticClass, TEXT("URemoteExecutionSettings"), &Z_Registration_Info_UClass_URemoteExecutionSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteExecutionSettings), 3479698131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_RemoteExecution_Private_RemoteExecutionSettings_h_1903622324(TEXT("/Script/RemoteExecution"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_RemoteExecution_Private_RemoteExecutionSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_RemoteExecution_Private_RemoteExecutionSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
