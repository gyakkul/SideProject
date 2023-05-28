// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/ThumbnailHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThumbnailHelpers() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor();
	UNREALED_API UClass* Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor();
	UNREALED_API UClass* Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void AAnimationThumbnailSkeletalMeshActor::StaticRegisterNativesAAnimationThumbnailSkeletalMeshActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAnimationThumbnailSkeletalMeshActor);
	UClass* Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_NoRegister()
	{
		return AAnimationThumbnailSkeletalMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASkeletalMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "ISkeletalMeshes" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "ThumbnailHelpers.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/ThumbnailHelpers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnimationThumbnailSkeletalMeshActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_Statics::ClassParams = {
		&AAnimationThumbnailSkeletalMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor()
	{
		if (!Z_Registration_Info_UClass_AAnimationThumbnailSkeletalMeshActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnimationThumbnailSkeletalMeshActor.OuterSingleton, Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAnimationThumbnailSkeletalMeshActor.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<AAnimationThumbnailSkeletalMeshActor>()
	{
		return AAnimationThumbnailSkeletalMeshActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAnimationThumbnailSkeletalMeshActor);
	AAnimationThumbnailSkeletalMeshActor::~AAnimationThumbnailSkeletalMeshActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ThumbnailHelpers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ThumbnailHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAnimationThumbnailSkeletalMeshActor, AAnimationThumbnailSkeletalMeshActor::StaticClass, TEXT("AAnimationThumbnailSkeletalMeshActor"), &Z_Registration_Info_UClass_AAnimationThumbnailSkeletalMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnimationThumbnailSkeletalMeshActor), 2315089147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ThumbnailHelpers_h_1224338107(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ThumbnailHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ThumbnailHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
