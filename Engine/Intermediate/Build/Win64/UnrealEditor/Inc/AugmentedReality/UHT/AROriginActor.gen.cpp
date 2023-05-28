// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AROriginActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAROriginActor() {}
// Cross Module References
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AAROriginActor();
	AUGMENTEDREALITY_API UClass* Z_Construct_UClass_AAROriginActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality();
// End Cross Module References
	void AAROriginActor::StaticRegisterNativesAAROriginActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAROriginActor);
	UClass* Z_Construct_UClass_AAROriginActor_NoRegister()
	{
		return AAROriginActor::StaticClass();
	}
	struct Z_Construct_UClass_AAROriginActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAROriginActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AugmentedReality,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAROriginActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Simple actor that is spawned at the origin for AR systems that want to hang components on an actor\n * Spawned as a custom class for easier TObjectIterator use\n */" },
		{ "IncludePath", "AROriginActor.h" },
		{ "ModuleRelativePath", "Public/AROriginActor.h" },
		{ "ToolTip", "Simple actor that is spawned at the origin for AR systems that want to hang components on an actor\nSpawned as a custom class for easier TObjectIterator use" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAROriginActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAROriginActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAROriginActor_Statics::ClassParams = {
		&AAROriginActor::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAROriginActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAROriginActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAROriginActor()
	{
		if (!Z_Registration_Info_UClass_AAROriginActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAROriginActor.OuterSingleton, Z_Construct_UClass_AAROriginActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAROriginActor.OuterSingleton;
	}
	template<> AUGMENTEDREALITY_API UClass* StaticClass<AAROriginActor>()
	{
		return AAROriginActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAROriginActor);
	AAROriginActor::~AAROriginActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAROriginActor, AAROriginActor::StaticClass, TEXT("AAROriginActor"), &Z_Registration_Info_UClass_AAROriginActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAROriginActor), 3701346960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h_3211332106(TEXT("/Script/AugmentedReality"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
