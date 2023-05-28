// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScriptFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	SCRIPTEDITORPLUGIN_API UClass* Z_Construct_UClass_UScriptFactory();
	SCRIPTEDITORPLUGIN_API UClass* Z_Construct_UClass_UScriptFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ScriptEditorPlugin();
// End Cross Module References
	void UScriptFactory::StaticRegisterNativesUScriptFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScriptFactory);
	UClass* Z_Construct_UClass_UScriptFactory_NoRegister()
	{
		return UScriptFactory::StaticClass();
	}
	struct Z_Construct_UClass_UScriptFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScriptFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ScriptEditorPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Script Blueprint factory\n*/" },
		{ "DevelopmentStatus", "EarlyAccess" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ScriptFactory.h" },
		{ "ModuleRelativePath", "Classes/ScriptFactory.h" },
		{ "ToolTip", "Script Blueprint factory" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScriptFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "BlueprintBaseOnly", "" },
		{ "Category", "ScriptFactory" },
		{ "ModuleRelativePath", "Classes/ScriptFactory.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UScriptFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UScriptFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UScriptFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScriptFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScriptFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScriptFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScriptFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScriptFactory_Statics::ClassParams = {
		&UScriptFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UScriptFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UScriptFactory_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScriptFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScriptFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScriptFactory()
	{
		if (!Z_Registration_Info_UClass_UScriptFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScriptFactory.OuterSingleton, Z_Construct_UClass_UScriptFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScriptFactory.OuterSingleton;
	}
	template<> SCRIPTEDITORPLUGIN_API UClass* StaticClass<UScriptFactory>()
	{
		return UScriptFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScriptFactory);
	UScriptFactory::~UScriptFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ScriptFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ScriptFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScriptFactory, UScriptFactory::StaticClass, TEXT("UScriptFactory"), &Z_Registration_Info_UClass_UScriptFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScriptFactory), 983090281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ScriptFactory_h_3370438342(TEXT("/Script/ScriptEditorPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ScriptFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_ScriptPlugin_Source_ScriptEditorPlugin_Classes_ScriptFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
