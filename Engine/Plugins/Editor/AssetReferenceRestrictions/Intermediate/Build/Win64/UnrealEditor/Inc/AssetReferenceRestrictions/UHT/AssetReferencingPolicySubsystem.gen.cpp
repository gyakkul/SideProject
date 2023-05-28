// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetReferencingPolicySubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetReferencingPolicySubsystem() {}
// Cross Module References
	ASSETREFERENCERESTRICTIONS_API UClass* Z_Construct_UClass_UAssetReferencingPolicySubsystem();
	ASSETREFERENCERESTRICTIONS_API UClass* Z_Construct_UClass_UAssetReferencingPolicySubsystem_NoRegister();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UPackage* Z_Construct_UPackage__Script_AssetReferenceRestrictions();
// End Cross Module References
	void UAssetReferencingPolicySubsystem::StaticRegisterNativesUAssetReferencingPolicySubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetReferencingPolicySubsystem);
	UClass* Z_Construct_UClass_UAssetReferencingPolicySubsystem_NoRegister()
	{
		return UAssetReferencingPolicySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAssetReferencingPolicySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetReferencingPolicySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetReferenceRestrictions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetReferencingPolicySubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Subsystem to register the domain-based asset referencing policy restrictions with the editor */" },
		{ "IncludePath", "AssetReferencingPolicySubsystem.h" },
		{ "ModuleRelativePath", "Private/AssetReferencingPolicySubsystem.h" },
		{ "ToolTip", "Subsystem to register the domain-based asset referencing policy restrictions with the editor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetReferencingPolicySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetReferencingPolicySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetReferencingPolicySubsystem_Statics::ClassParams = {
		&UAssetReferencingPolicySubsystem::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetReferencingPolicySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetReferencingPolicySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetReferencingPolicySubsystem()
	{
		if (!Z_Registration_Info_UClass_UAssetReferencingPolicySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetReferencingPolicySubsystem.OuterSingleton, Z_Construct_UClass_UAssetReferencingPolicySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetReferencingPolicySubsystem.OuterSingleton;
	}
	template<> ASSETREFERENCERESTRICTIONS_API UClass* StaticClass<UAssetReferencingPolicySubsystem>()
	{
		return UAssetReferencingPolicySubsystem::StaticClass();
	}
	UAssetReferencingPolicySubsystem::UAssetReferencingPolicySubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetReferencingPolicySubsystem);
	UAssetReferencingPolicySubsystem::~UAssetReferencingPolicySubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetReferencingPolicySubsystem, UAssetReferencingPolicySubsystem::StaticClass, TEXT("UAssetReferencingPolicySubsystem"), &Z_Registration_Info_UClass_UAssetReferencingPolicySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetReferencingPolicySubsystem), 1377475750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySubsystem_h_2114315057(TEXT("/Script/AssetReferenceRestrictions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetReferenceRestrictions_Source_AssetReferenceRestrictions_Private_AssetReferencingPolicySubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
