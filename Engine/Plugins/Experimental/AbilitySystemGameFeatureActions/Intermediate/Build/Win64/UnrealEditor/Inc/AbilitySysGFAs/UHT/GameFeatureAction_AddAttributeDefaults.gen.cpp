// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatureAction_AddAttributeDefaults.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddAttributeDefaults() {}
// Cross Module References
	ABILITYSYSTEMGAMEFEATUREACTIONS_API UClass* Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults();
	ABILITYSYSTEMGAMEFEATUREACTIONS_API UClass* Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
	UPackage* Z_Construct_UPackage__Script_AbilitySystemGameFeatureActions();
// End Cross Module References
	void UGameFeatureAction_AddAttributeDefaults::StaticRegisterNativesUGameFeatureAction_AddAttributeDefaults()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_AddAttributeDefaults);
	UClass* Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_NoRegister()
	{
		return UGameFeatureAction_AddAttributeDefaults::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttribDefaultTableNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttribDefaultTableNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttribDefaultTableNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
		(UObject* (*)())Z_Construct_UPackage__Script_AbilitySystemGameFeatureActions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Adds ability system attribute defaults from this game feature\n */" },
		{ "DisplayName", "Add Attribute Defaults" },
		{ "IncludePath", "GameFeatureAction_AddAttributeDefaults.h" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_AddAttributeDefaults.h" },
		{ "ToolTip", "Adds ability system attribute defaults from this game feature" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_Statics::NewProp_AttribDefaultTableNames_Inner = { "AttribDefaultTableNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_Statics::NewProp_AttribDefaultTableNames_MetaData[] = {
		{ "Category", "Attributes" },
		{ "Comment", "/** List of attribute default tables to add */" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_AddAttributeDefaults.h" },
		{ "ToolTip", "List of attribute default tables to add" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_Statics::NewProp_AttribDefaultTableNames = { "AttribDefaultTableNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeatureAction_AddAttributeDefaults, AttribDefaultTableNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_Statics::NewProp_AttribDefaultTableNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_Statics::NewProp_AttribDefaultTableNames_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_Statics::NewProp_AttribDefaultTableNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_Statics::NewProp_AttribDefaultTableNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddAttributeDefaults>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_Statics::ClassParams = {
		&UGameFeatureAction_AddAttributeDefaults::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_Statics::PropPointers),
		0,
		0x002810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureAction_AddAttributeDefaults.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddAttributeDefaults.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureAction_AddAttributeDefaults.OuterSingleton;
	}
	template<> ABILITYSYSTEMGAMEFEATUREACTIONS_API UClass* StaticClass<UGameFeatureAction_AddAttributeDefaults>()
	{
		return UGameFeatureAction_AddAttributeDefaults::StaticClass();
	}
	UGameFeatureAction_AddAttributeDefaults::UGameFeatureAction_AddAttributeDefaults(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddAttributeDefaults);
	UGameFeatureAction_AddAttributeDefaults::~UGameFeatureAction_AddAttributeDefaults() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AbilitySystemGameFeatureActions_Source_AbilitySystemGameFeatureActions_Public_GameFeatureAction_AddAttributeDefaults_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AbilitySystemGameFeatureActions_Source_AbilitySystemGameFeatureActions_Public_GameFeatureAction_AddAttributeDefaults_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddAttributeDefaults, UGameFeatureAction_AddAttributeDefaults::StaticClass, TEXT("UGameFeatureAction_AddAttributeDefaults"), &Z_Registration_Info_UClass_UGameFeatureAction_AddAttributeDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddAttributeDefaults), 289185346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AbilitySystemGameFeatureActions_Source_AbilitySystemGameFeatureActions_Public_GameFeatureAction_AddAttributeDefaults_h_3652335568(TEXT("/Script/AbilitySystemGameFeatureActions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AbilitySystemGameFeatureActions_Source_AbilitySystemGameFeatureActions_Public_GameFeatureAction_AddAttributeDefaults_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AbilitySystemGameFeatureActions_Source_AbilitySystemGameFeatureActions_Public_GameFeatureAction_AddAttributeDefaults_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
