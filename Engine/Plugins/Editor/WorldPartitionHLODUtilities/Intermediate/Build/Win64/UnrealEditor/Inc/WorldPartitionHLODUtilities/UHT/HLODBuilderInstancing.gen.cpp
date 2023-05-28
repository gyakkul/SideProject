// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HLODBuilderInstancing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODBuilderInstancing() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UHLODBuilder();
	ENGINE_API UClass* Z_Construct_UClass_UHLODBuilderSettings();
	UPackage* Z_Construct_UPackage__Script_WorldPartitionHLODUtilities();
	WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderInstancing();
	WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderInstancing_NoRegister();
	WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderInstancingSettings();
	WORLDPARTITIONHLODUTILITIES_API UClass* Z_Construct_UClass_UHLODBuilderInstancingSettings_NoRegister();
// End Cross Module References
	void UHLODBuilderInstancingSettings::StaticRegisterNativesUHLODBuilderInstancingSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODBuilderInstancingSettings);
	UClass* Z_Construct_UClass_UHLODBuilderInstancingSettings_NoRegister()
	{
		return UHLODBuilderInstancingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHLODBuilderInstancingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisallowNanite_MetaData[];
#endif
		static void NewProp_bDisallowNanite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisallowNanite;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLODBuilderInstancingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHLODBuilderSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldPartitionHLODUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODBuilderInstancingSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "HLODBuilderInstancing.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HLODBuilderInstancing.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODBuilderInstancingSettings_Statics::NewProp_bDisallowNanite_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 * If enabled, the components created for the HLODs will not use Nanite.\n\x09 * Necessary if you want to use the last LOD & the mesh is Nanite enabled, as forced LODs are ignored by Nanite\n\x09 */" },
		{ "ModuleRelativePath", "Public/HLODBuilderInstancing.h" },
		{ "ToolTip", "If enabled, the components created for the HLODs will not use Nanite.\nNecessary if you want to use the last LOD & the mesh is Nanite enabled, as forced LODs are ignored by Nanite" },
	};
#endif
	void Z_Construct_UClass_UHLODBuilderInstancingSettings_Statics::NewProp_bDisallowNanite_SetBit(void* Obj)
	{
		((UHLODBuilderInstancingSettings*)Obj)->bDisallowNanite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHLODBuilderInstancingSettings_Statics::NewProp_bDisallowNanite = { "bDisallowNanite", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHLODBuilderInstancingSettings), &Z_Construct_UClass_UHLODBuilderInstancingSettings_Statics::NewProp_bDisallowNanite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHLODBuilderInstancingSettings_Statics::NewProp_bDisallowNanite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderInstancingSettings_Statics::NewProp_bDisallowNanite_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHLODBuilderInstancingSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODBuilderInstancingSettings_Statics::NewProp_bDisallowNanite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLODBuilderInstancingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODBuilderInstancingSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODBuilderInstancingSettings_Statics::ClassParams = {
		&UHLODBuilderInstancingSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHLODBuilderInstancingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderInstancingSettings_Statics::PropPointers),
		0,
		0x001004A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHLODBuilderInstancingSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderInstancingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLODBuilderInstancingSettings()
	{
		if (!Z_Registration_Info_UClass_UHLODBuilderInstancingSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODBuilderInstancingSettings.OuterSingleton, Z_Construct_UClass_UHLODBuilderInstancingSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHLODBuilderInstancingSettings.OuterSingleton;
	}
	template<> WORLDPARTITIONHLODUTILITIES_API UClass* StaticClass<UHLODBuilderInstancingSettings>()
	{
		return UHLODBuilderInstancingSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODBuilderInstancingSettings);
	UHLODBuilderInstancingSettings::~UHLODBuilderInstancingSettings() {}
	void UHLODBuilderInstancing::StaticRegisterNativesUHLODBuilderInstancing()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODBuilderInstancing);
	UClass* Z_Construct_UClass_UHLODBuilderInstancing_NoRegister()
	{
		return UHLODBuilderInstancing::StaticClass();
	}
	struct Z_Construct_UClass_UHLODBuilderInstancing_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLODBuilderInstancing_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHLODBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldPartitionHLODUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODBuilderInstancing_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Build a AWorldPartitionHLOD whose components are ISMC\n */" },
		{ "IncludePath", "HLODBuilderInstancing.h" },
		{ "ModuleRelativePath", "Public/HLODBuilderInstancing.h" },
		{ "ToolTip", "Build a AWorldPartitionHLOD whose components are ISMC" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLODBuilderInstancing_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODBuilderInstancing>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODBuilderInstancing_Statics::ClassParams = {
		&UHLODBuilderInstancing::StaticClass,
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
		0x041000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHLODBuilderInstancing_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODBuilderInstancing_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLODBuilderInstancing()
	{
		if (!Z_Registration_Info_UClass_UHLODBuilderInstancing.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODBuilderInstancing.OuterSingleton, Z_Construct_UClass_UHLODBuilderInstancing_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHLODBuilderInstancing.OuterSingleton;
	}
	template<> WORLDPARTITIONHLODUTILITIES_API UClass* StaticClass<UHLODBuilderInstancing>()
	{
		return UHLODBuilderInstancing::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODBuilderInstancing);
	UHLODBuilderInstancing::~UHLODBuilderInstancing() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderInstancing_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderInstancing_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHLODBuilderInstancingSettings, UHLODBuilderInstancingSettings::StaticClass, TEXT("UHLODBuilderInstancingSettings"), &Z_Registration_Info_UClass_UHLODBuilderInstancingSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODBuilderInstancingSettings), 3962754487U) },
		{ Z_Construct_UClass_UHLODBuilderInstancing, UHLODBuilderInstancing::StaticClass, TEXT("UHLODBuilderInstancing"), &Z_Registration_Info_UClass_UHLODBuilderInstancing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODBuilderInstancing), 3157234176U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderInstancing_h_3500040313(TEXT("/Script/WorldPartitionHLODUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderInstancing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_WorldPartitionHLODUtilities_Source_Public_HLODBuilderInstancing_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
