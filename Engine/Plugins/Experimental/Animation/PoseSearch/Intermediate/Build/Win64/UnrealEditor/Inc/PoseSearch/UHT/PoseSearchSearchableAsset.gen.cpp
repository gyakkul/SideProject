// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoseSearch/PoseSearchSearchableAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoseSearchSearchableAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchSearchableAsset();
	POSESEARCH_API UClass* Z_Construct_UClass_UPoseSearchSearchableAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References
	void UPoseSearchSearchableAsset::StaticRegisterNativesUPoseSearchSearchableAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoseSearchSearchableAsset);
	UClass* Z_Construct_UClass_UPoseSearchSearchableAsset_NoRegister()
	{
		return UPoseSearchSearchableAsset::StaticClass();
	}
	struct Z_Construct_UClass_UPoseSearchSearchableAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoseSearchSearchableAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoseSearchSearchableAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A data asset for indexing a collection of animation sequences. */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "PoseSearch/PoseSearchSearchableAsset.h" },
		{ "ModuleRelativePath", "Public/PoseSearch/PoseSearchSearchableAsset.h" },
		{ "ToolTip", "A data asset for indexing a collection of animation sequences." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoseSearchSearchableAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoseSearchSearchableAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoseSearchSearchableAsset_Statics::ClassParams = {
		&UPoseSearchSearchableAsset::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPoseSearchSearchableAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoseSearchSearchableAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoseSearchSearchableAsset()
	{
		if (!Z_Registration_Info_UClass_UPoseSearchSearchableAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoseSearchSearchableAsset.OuterSingleton, Z_Construct_UClass_UPoseSearchSearchableAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoseSearchSearchableAsset.OuterSingleton;
	}
	template<> POSESEARCH_API UClass* StaticClass<UPoseSearchSearchableAsset>()
	{
		return UPoseSearchSearchableAsset::StaticClass();
	}
	UPoseSearchSearchableAsset::UPoseSearchSearchableAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoseSearchSearchableAsset);
	UPoseSearchSearchableAsset::~UPoseSearchSearchableAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSearchableAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSearchableAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoseSearchSearchableAsset, UPoseSearchSearchableAsset::StaticClass, TEXT("UPoseSearchSearchableAsset"), &Z_Registration_Info_UClass_UPoseSearchSearchableAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoseSearchSearchableAsset), 2853656173U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSearchableAsset_h_479387614(TEXT("/Script/PoseSearch"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSearchableAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_PoseSearchSearchableAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
