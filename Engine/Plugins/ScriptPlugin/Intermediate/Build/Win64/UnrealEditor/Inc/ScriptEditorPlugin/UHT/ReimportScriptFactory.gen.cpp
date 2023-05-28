// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReimportScriptFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReimportScriptFactory() {}
// Cross Module References
	SCRIPTEDITORPLUGIN_API UClass* Z_Construct_UClass_UReimportScriptFactory();
	SCRIPTEDITORPLUGIN_API UClass* Z_Construct_UClass_UReimportScriptFactory_NoRegister();
	SCRIPTEDITORPLUGIN_API UClass* Z_Construct_UClass_UScriptFactory();
	SCRIPTPLUGIN_API UClass* Z_Construct_UClass_UScriptBlueprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ScriptEditorPlugin();
// End Cross Module References
	void UReimportScriptFactory::StaticRegisterNativesUReimportScriptFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReimportScriptFactory);
	UClass* Z_Construct_UClass_UReimportScriptFactory_NoRegister()
	{
		return UReimportScriptFactory::StaticClass();
	}
	struct Z_Construct_UClass_UReimportScriptFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalScript_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OriginalScript;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReimportScriptFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptEditorPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportScriptFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Script Blueprint re-import factory\n*/" },
		{ "DevelopmentStatus", "EarlyAccess" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ReimportScriptFactory.h" },
		{ "ModuleRelativePath", "Classes/ReimportScriptFactory.h" },
		{ "ToolTip", "Script Blueprint re-import factory" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReimportScriptFactory_Statics::NewProp_OriginalScript_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ReimportScriptFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UReimportScriptFactory_Statics::NewProp_OriginalScript = { "OriginalScript", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReimportScriptFactory, OriginalScript), Z_Construct_UClass_UScriptBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReimportScriptFactory_Statics::NewProp_OriginalScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportScriptFactory_Statics::NewProp_OriginalScript_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReimportScriptFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReimportScriptFactory_Statics::NewProp_OriginalScript,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReimportScriptFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportScriptFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReimportScriptFactory_Statics::ClassParams = {
		&UReimportScriptFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReimportScriptFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReimportScriptFactory_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReimportScriptFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReimportScriptFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReimportScriptFactory()
	{
		if (!Z_Registration_Info_UClass_UReimportScriptFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReimportScriptFactory.OuterSingleton, Z_Construct_UClass_UReimportScriptFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReimportScriptFactory.OuterSingleton;
	}
	template<> SCRIPTEDITORPLUGIN_API UClass* StaticClass<UReimportScriptFactory>()
	{
		return UReimportScriptFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportScriptFactory);
	UReimportScriptFactory::~UReimportScriptFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ReimportScriptFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ReimportScriptFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReimportScriptFactory, UReimportScriptFactory::StaticClass, TEXT("UReimportScriptFactory"), &Z_Registration_Info_UClass_UReimportScriptFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReimportScriptFactory), 1208617289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ReimportScriptFactory_h_741098461(TEXT("/Script/ScriptEditorPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ReimportScriptFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ReimportScriptFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
