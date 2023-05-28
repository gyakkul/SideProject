// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hierarchies/TargetModifierPerNodeHierarchyRules.h"
#include "UI/VCamConnectionStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetModifierPerNodeHierarchyRules() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VCamExtensions();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamConnectionTargetSettings();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UBaseModifierGroup();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UModifierHierarchyRules();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_NoRegister();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules_NoRegister();
// End Cross Module References
	void USingleModifierPerNodeWithTargetSettings::StaticRegisterNativesUSingleModifierPerNodeWithTargetSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleModifierPerNodeWithTargetSettings);
	UClass* Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_NoRegister()
	{
		return USingleModifierPerNodeWithTargetSettings::StaticClass();
	}
	struct Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildElements_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildElements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildElements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildElements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseModifierGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Hierarchies/TargetModifierPerNodeHierarchyRules.h" },
		{ "ModuleRelativePath", "Public/Hierarchies/TargetModifierPerNodeHierarchyRules.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::NewProp_TargetSettings_MetaData[] = {
		{ "Category", "Hierarchy" },
		{ "ModuleRelativePath", "Public/Hierarchies/TargetModifierPerNodeHierarchyRules.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::NewProp_TargetSettings = { "TargetSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USingleModifierPerNodeWithTargetSettings, TargetSettings), Z_Construct_UScriptStruct_FVCamConnectionTargetSettings, METADATA_PARAMS(Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::NewProp_TargetSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::NewProp_TargetSettings_MetaData)) }; // 259595779
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::NewProp_ChildElements_Inner_MetaData[] = {
		{ "Category", "Hierarchy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hierarchies/TargetModifierPerNodeHierarchyRules.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::NewProp_ChildElements_Inner = { "ChildElements", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::NewProp_ChildElements_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::NewProp_ChildElements_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::NewProp_ChildElements_MetaData[] = {
		{ "Category", "Hierarchy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hierarchies/TargetModifierPerNodeHierarchyRules.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::NewProp_ChildElements = { "ChildElements", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USingleModifierPerNodeWithTargetSettings, ChildElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::NewProp_ChildElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::NewProp_ChildElements_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::NewProp_TargetSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::NewProp_ChildElements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::NewProp_ChildElements,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleModifierPerNodeWithTargetSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::ClassParams = {
		&USingleModifierPerNodeWithTargetSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings()
	{
		if (!Z_Registration_Info_UClass_USingleModifierPerNodeWithTargetSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleModifierPerNodeWithTargetSettings.OuterSingleton, Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USingleModifierPerNodeWithTargetSettings.OuterSingleton;
	}
	template<> VCAMEXTENSIONS_API UClass* StaticClass<USingleModifierPerNodeWithTargetSettings>()
	{
		return USingleModifierPerNodeWithTargetSettings::StaticClass();
	}
	USingleModifierPerNodeWithTargetSettings::USingleModifierPerNodeWithTargetSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USingleModifierPerNodeWithTargetSettings);
	USingleModifierPerNodeWithTargetSettings::~USingleModifierPerNodeWithTargetSettings() {}
	void UTargetModifierPerNodeHierarchyRules::StaticRegisterNativesUTargetModifierPerNodeHierarchyRules()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetModifierPerNodeHierarchyRules);
	UClass* Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules_NoRegister()
	{
		return UTargetModifierPerNodeHierarchyRules::StaticClass();
	}
	struct Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Root;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UModifierHierarchyRules,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Hierarchies/TargetModifierPerNodeHierarchyRules.h" },
		{ "ModuleRelativePath", "Public/Hierarchies/TargetModifierPerNodeHierarchyRules.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Hierarchy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Hierarchies/TargetModifierPerNodeHierarchyRules.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0046000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetModifierPerNodeHierarchyRules, Root), Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules_Statics::NewProp_Root_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules_Statics::NewProp_Root,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetModifierPerNodeHierarchyRules>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules_Statics::ClassParams = {
		&UTargetModifierPerNodeHierarchyRules::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules()
	{
		if (!Z_Registration_Info_UClass_UTargetModifierPerNodeHierarchyRules.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetModifierPerNodeHierarchyRules.OuterSingleton, Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetModifierPerNodeHierarchyRules.OuterSingleton;
	}
	template<> VCAMEXTENSIONS_API UClass* StaticClass<UTargetModifierPerNodeHierarchyRules>()
	{
		return UTargetModifierPerNodeHierarchyRules::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetModifierPerNodeHierarchyRules);
	UTargetModifierPerNodeHierarchyRules::~UTargetModifierPerNodeHierarchyRules() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_TargetModifierPerNodeHierarchyRules_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_TargetModifierPerNodeHierarchyRules_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USingleModifierPerNodeWithTargetSettings, USingleModifierPerNodeWithTargetSettings::StaticClass, TEXT("USingleModifierPerNodeWithTargetSettings"), &Z_Registration_Info_UClass_USingleModifierPerNodeWithTargetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleModifierPerNodeWithTargetSettings), 4007300214U) },
		{ Z_Construct_UClass_UTargetModifierPerNodeHierarchyRules, UTargetModifierPerNodeHierarchyRules::StaticClass, TEXT("UTargetModifierPerNodeHierarchyRules"), &Z_Registration_Info_UClass_UTargetModifierPerNodeHierarchyRules, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetModifierPerNodeHierarchyRules), 3712900569U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_TargetModifierPerNodeHierarchyRules_h_969818577(TEXT("/Script/VCamExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_TargetModifierPerNodeHierarchyRules_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Hierarchies_TargetModifierPerNodeHierarchyRules_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
