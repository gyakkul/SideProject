// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AnimBlueprintExtension_CachedPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprintExtension_CachedPose() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension_CachedPose();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimBlueprintExtension_CachedPose_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimBlueprintExtension_CachedPose::StaticRegisterNativesUAnimBlueprintExtension_CachedPose()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBlueprintExtension_CachedPose);
	UClass* Z_Construct_UClass_UAnimBlueprintExtension_CachedPose_NoRegister()
	{
		return UAnimBlueprintExtension_CachedPose::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBlueprintExtension_CachedPose_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBlueprintExtension_CachedPose_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimBlueprintExtension,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintExtension_CachedPose_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimBlueprintExtension_CachedPose.h" },
		{ "ModuleRelativePath", "Private/AnimBlueprintExtension_CachedPose.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBlueprintExtension_CachedPose_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBlueprintExtension_CachedPose>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBlueprintExtension_CachedPose_Statics::ClassParams = {
		&UAnimBlueprintExtension_CachedPose::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintExtension_CachedPose_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintExtension_CachedPose_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBlueprintExtension_CachedPose()
	{
		if (!Z_Registration_Info_UClass_UAnimBlueprintExtension_CachedPose.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBlueprintExtension_CachedPose.OuterSingleton, Z_Construct_UClass_UAnimBlueprintExtension_CachedPose_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimBlueprintExtension_CachedPose.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimBlueprintExtension_CachedPose>()
	{
		return UAnimBlueprintExtension_CachedPose::StaticClass();
	}
	UAnimBlueprintExtension_CachedPose::UAnimBlueprintExtension_CachedPose(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprintExtension_CachedPose);
	UAnimBlueprintExtension_CachedPose::~UAnimBlueprintExtension_CachedPose() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_CachedPose_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_CachedPose_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBlueprintExtension_CachedPose, UAnimBlueprintExtension_CachedPose::StaticClass, TEXT("UAnimBlueprintExtension_CachedPose"), &Z_Registration_Info_UClass_UAnimBlueprintExtension_CachedPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBlueprintExtension_CachedPose), 144761707U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_CachedPose_h_4287170791(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_CachedPose_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Private_AnimBlueprintExtension_CachedPose_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
