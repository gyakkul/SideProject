// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationEditorPreviewActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationEditorPreviewActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PERSONA_API UClass* Z_Construct_UClass_AAnimationEditorPreviewActor();
	PERSONA_API UClass* Z_Construct_UClass_AAnimationEditorPreviewActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Persona();
// End Cross Module References
	void AAnimationEditorPreviewActor::StaticRegisterNativesAAnimationEditorPreviewActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAnimationEditorPreviewActor);
	UClass* Z_Construct_UClass_AAnimationEditorPreviewActor_NoRegister()
	{
		return AAnimationEditorPreviewActor::StaticClass();
	}
	struct Z_Construct_UClass_AAnimationEditorPreviewActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAnimationEditorPreviewActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnimationEditorPreviewActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationEditorPreviewActor.h" },
		{ "ModuleRelativePath", "Public/AnimationEditorPreviewActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAnimationEditorPreviewActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnimationEditorPreviewActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAnimationEditorPreviewActor_Statics::ClassParams = {
		&AAnimationEditorPreviewActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAnimationEditorPreviewActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAnimationEditorPreviewActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAnimationEditorPreviewActor()
	{
		if (!Z_Registration_Info_UClass_AAnimationEditorPreviewActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAnimationEditorPreviewActor.OuterSingleton, Z_Construct_UClass_AAnimationEditorPreviewActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAnimationEditorPreviewActor.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<AAnimationEditorPreviewActor>()
	{
		return AAnimationEditorPreviewActor::StaticClass();
	}
	AAnimationEditorPreviewActor::AAnimationEditorPreviewActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAnimationEditorPreviewActor);
	AAnimationEditorPreviewActor::~AAnimationEditorPreviewActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_AnimationEditorPreviewActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_AnimationEditorPreviewActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAnimationEditorPreviewActor, AAnimationEditorPreviewActor::StaticClass, TEXT("AAnimationEditorPreviewActor"), &Z_Registration_Info_UClass_AAnimationEditorPreviewActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAnimationEditorPreviewActor), 2657559037U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_AnimationEditorPreviewActor_h_2877579126(TEXT("/Script/Persona"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_AnimationEditorPreviewActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Public_AnimationEditorPreviewActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
