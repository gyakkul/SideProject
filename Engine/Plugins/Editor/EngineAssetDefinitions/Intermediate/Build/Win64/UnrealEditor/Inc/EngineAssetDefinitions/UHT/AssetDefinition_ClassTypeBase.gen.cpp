// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Script/AssetDefinition_ClassTypeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetDefinition_ClassTypeBase() {}
// Cross Module References
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_ClassTypeBase();
	ENGINEASSETDEFINITIONS_API UClass* Z_Construct_UClass_UAssetDefinition_ClassTypeBase_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAssetDefinitionDefault();
	UPackage* Z_Construct_UPackage__Script_EngineAssetDefinitions();
// End Cross Module References
	void UAssetDefinition_ClassTypeBase::StaticRegisterNativesUAssetDefinition_ClassTypeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetDefinition_ClassTypeBase);
	UClass* Z_Construct_UClass_UAssetDefinition_ClassTypeBase_NoRegister()
	{
		return UAssetDefinition_ClassTypeBase::StaticClass();
	}
	struct Z_Construct_UClass_UAssetDefinition_ClassTypeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetDefinition_ClassTypeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetDefinitionDefault,
		(UObject* (*)())Z_Construct_UPackage__Script_EngineAssetDefinitions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetDefinition_ClassTypeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for \"class type\" assets (C++ classes and Blueprints */" },
		{ "IncludePath", "Script/AssetDefinition_ClassTypeBase.h" },
		{ "ModuleRelativePath", "Public/Script/AssetDefinition_ClassTypeBase.h" },
		{ "ToolTip", "Base class for \"class type\" assets (C++ classes and Blueprints" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetDefinition_ClassTypeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetDefinition_ClassTypeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetDefinition_ClassTypeBase_Statics::ClassParams = {
		&UAssetDefinition_ClassTypeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetDefinition_ClassTypeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetDefinition_ClassTypeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetDefinition_ClassTypeBase()
	{
		if (!Z_Registration_Info_UClass_UAssetDefinition_ClassTypeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetDefinition_ClassTypeBase.OuterSingleton, Z_Construct_UClass_UAssetDefinition_ClassTypeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetDefinition_ClassTypeBase.OuterSingleton;
	}
	template<> ENGINEASSETDEFINITIONS_API UClass* StaticClass<UAssetDefinition_ClassTypeBase>()
	{
		return UAssetDefinition_ClassTypeBase::StaticClass();
	}
	UAssetDefinition_ClassTypeBase::UAssetDefinition_ClassTypeBase() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetDefinition_ClassTypeBase);
	UAssetDefinition_ClassTypeBase::~UAssetDefinition_ClassTypeBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_ClassTypeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_ClassTypeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetDefinition_ClassTypeBase, UAssetDefinition_ClassTypeBase::StaticClass, TEXT("UAssetDefinition_ClassTypeBase"), &Z_Registration_Info_UClass_UAssetDefinition_ClassTypeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetDefinition_ClassTypeBase), 1446807824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_ClassTypeBase_h_3589579747(TEXT("/Script/EngineAssetDefinitions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_ClassTypeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_EngineAssetDefinitions_Source_Public_Script_AssetDefinition_ClassTypeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
