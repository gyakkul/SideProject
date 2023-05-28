// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassAssortedFragmentsTrait.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassAssortedFragmentsTrait() {}
// Cross Module References
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassAssortedFragmentsTrait();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassAssortedFragmentsTrait_NoRegister();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_MassSpawner();
// End Cross Module References
	void UMassAssortedFragmentsTrait::StaticRegisterNativesUMassAssortedFragmentsTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassAssortedFragmentsTrait);
	UClass* Z_Construct_UClass_UMassAssortedFragmentsTrait_NoRegister()
	{
		return UMassAssortedFragmentsTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Fragments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fragments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Fragments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Mass Agent Feature which appends a list of specified fragments.  \n*/" },
		{ "DisplayName", "Assorted Fragments" },
		{ "IncludePath", "MassAssortedFragmentsTrait.h" },
		{ "ModuleRelativePath", "Public/MassAssortedFragmentsTrait.h" },
		{ "ToolTip", "Mass Agent Feature which appends a list of specified fragments." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics::NewProp_Fragments_Inner = { "Fragments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(nullptr, 0) }; // 3026308664
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics::NewProp_Fragments_MetaData[] = {
		{ "BaseStruct", "/Script/MassEntity.MassFragment" },
		{ "Category", "Fragments" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Public/MassAssortedFragmentsTrait.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics::NewProp_Fragments = { "Fragments", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassAssortedFragmentsTrait, Fragments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics::NewProp_Fragments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics::NewProp_Fragments_MetaData)) }; // 3026308664
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics::NewProp_Fragments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics::NewProp_Fragments,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassAssortedFragmentsTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics::ClassParams = {
		&UMassAssortedFragmentsTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassAssortedFragmentsTrait()
	{
		if (!Z_Registration_Info_UClass_UMassAssortedFragmentsTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassAssortedFragmentsTrait.OuterSingleton, Z_Construct_UClass_UMassAssortedFragmentsTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassAssortedFragmentsTrait.OuterSingleton;
	}
	template<> MASSSPAWNER_API UClass* StaticClass<UMassAssortedFragmentsTrait>()
	{
		return UMassAssortedFragmentsTrait::StaticClass();
	}
	UMassAssortedFragmentsTrait::UMassAssortedFragmentsTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassAssortedFragmentsTrait);
	UMassAssortedFragmentsTrait::~UMassAssortedFragmentsTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassAssortedFragmentsTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassAssortedFragmentsTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassAssortedFragmentsTrait, UMassAssortedFragmentsTrait::StaticClass, TEXT("UMassAssortedFragmentsTrait"), &Z_Registration_Info_UClass_UMassAssortedFragmentsTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassAssortedFragmentsTrait), 3707826679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassAssortedFragmentsTrait_h_1808487778(TEXT("/Script/MassSpawner"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassAssortedFragmentsTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassAssortedFragmentsTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
