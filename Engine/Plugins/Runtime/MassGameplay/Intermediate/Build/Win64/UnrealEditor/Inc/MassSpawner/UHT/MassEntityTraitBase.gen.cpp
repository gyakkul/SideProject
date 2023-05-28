// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassEntityTraitBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntityTraitBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassSpawner();
// End Cross Module References
	void UMassEntityTraitBase::StaticRegisterNativesUMassEntityTraitBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassEntityTraitBase);
	UClass* Z_Construct_UClass_UMassEntityTraitBase_NoRegister()
	{
		return UMassEntityTraitBase::StaticClass();
	}
	struct Z_Construct_UClass_UMassEntityTraitBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassEntityTraitBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MassSpawner,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassEntityTraitBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base class for Mass Entity Traits.\n * An entity trait is a set of fragments that create a logical trait tha makes sense to end use (i.e. replication, visualization).\n * The template building method allows to configure some fragments based on properties or cached values.\n * For example, a fragment can be added based on a referenced asset, or some memory hungry settings can be\n * cached and just and index stored on a fragment.\n */" },
		{ "IncludePath", "MassEntityTraitBase.h" },
		{ "ModuleRelativePath", "Public/MassEntityTraitBase.h" },
		{ "ToolTip", "Base class for Mass Entity Traits.\nAn entity trait is a set of fragments that create a logical trait tha makes sense to end use (i.e. replication, visualization).\nThe template building method allows to configure some fragments based on properties or cached values.\nFor example, a fragment can be added based on a referenced asset, or some memory hungry settings can be\ncached and just and index stored on a fragment." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassEntityTraitBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassEntityTraitBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassEntityTraitBase_Statics::ClassParams = {
		&UMassEntityTraitBase::StaticClass,
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
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMassEntityTraitBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntityTraitBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassEntityTraitBase()
	{
		if (!Z_Registration_Info_UClass_UMassEntityTraitBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassEntityTraitBase.OuterSingleton, Z_Construct_UClass_UMassEntityTraitBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassEntityTraitBase.OuterSingleton;
	}
	template<> MASSSPAWNER_API UClass* StaticClass<UMassEntityTraitBase>()
	{
		return UMassEntityTraitBase::StaticClass();
	}
	UMassEntityTraitBase::UMassEntityTraitBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassEntityTraitBase);
	UMassEntityTraitBase::~UMassEntityTraitBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTraitBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTraitBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassEntityTraitBase, UMassEntityTraitBase::StaticClass, TEXT("UMassEntityTraitBase"), &Z_Registration_Info_UClass_UMassEntityTraitBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassEntityTraitBase), 771413425U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTraitBase_h_2418072354(TEXT("/Script/MassSpawner"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTraitBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassSpawner_Public_MassEntityTraitBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
