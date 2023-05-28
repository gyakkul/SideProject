// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/MassCrowdMemberTrait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdMemberTrait() {}
// Cross Module References
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdMemberTrait();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdMemberTrait_NoRegister();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
// End Cross Module References
	void UMassCrowdMemberTrait::StaticRegisterNativesUMassCrowdMemberTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdMemberTrait);
	UClass* Z_Construct_UClass_UMassCrowdMemberTrait_NoRegister()
	{
		return UMassCrowdMemberTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdMemberTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdMemberTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdMemberTrait_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Trait to mark an entity with the crowd tag and add required fragments to track current lane\n */" },
		{ "DisplayName", "CrowdMember" },
		{ "IncludePath", "MassCrowdMemberTrait.h" },
		{ "ModuleRelativePath", "Public/MassCrowdMemberTrait.h" },
		{ "ToolTip", "Trait to mark an entity with the crowd tag and add required fragments to track current lane" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdMemberTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdMemberTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdMemberTrait_Statics::ClassParams = {
		&UMassCrowdMemberTrait::StaticClass,
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
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdMemberTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdMemberTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdMemberTrait()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdMemberTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdMemberTrait.OuterSingleton, Z_Construct_UClass_UMassCrowdMemberTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdMemberTrait.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdMemberTrait>()
	{
		return UMassCrowdMemberTrait::StaticClass();
	}
	UMassCrowdMemberTrait::UMassCrowdMemberTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdMemberTrait);
	UMassCrowdMemberTrait::~UMassCrowdMemberTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdMemberTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdMemberTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdMemberTrait, UMassCrowdMemberTrait::StaticClass, TEXT("UMassCrowdMemberTrait"), &Z_Registration_Info_UClass_UMassCrowdMemberTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdMemberTrait), 2483891856U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdMemberTrait_h_24294933(TEXT("/Script/MassCrowd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdMemberTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdMemberTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
