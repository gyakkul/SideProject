// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Cascade/Classes/CascadeParticleSystemComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCascadeParticleSystemComponent() {}
// Cross Module References
	CASCADE_API UClass* Z_Construct_UClass_UCascadeParticleSystemComponent();
	CASCADE_API UClass* Z_Construct_UClass_UCascadeParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent();
	UPackage* Z_Construct_UPackage__Script_Cascade();
// End Cross Module References
	void UCascadeParticleSystemComponent::StaticRegisterNativesUCascadeParticleSystemComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCascadeParticleSystemComponent);
	UClass* Z_Construct_UClass_UCascadeParticleSystemComponent_NoRegister()
	{
		return UCascadeParticleSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCascadeParticleSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCascadeParticleSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleSystemComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Cascade,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCascadeParticleSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Used to provide an extended particle system component to allow collision to function in the preview window.\n */" },
		{ "HideCategories", "Object Physics Collision Object Physics Collision Mobility VirtualTexture" },
		{ "IncludePath", "CascadeParticleSystemComponent.h" },
		{ "ModuleRelativePath", "Classes/CascadeParticleSystemComponent.h" },
		{ "ToolTip", "Used to provide an extended particle system component to allow collision to function in the preview window." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCascadeParticleSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCascadeParticleSystemComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCascadeParticleSystemComponent_Statics::ClassParams = {
		&UCascadeParticleSystemComponent::StaticClass,
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
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCascadeParticleSystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCascadeParticleSystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCascadeParticleSystemComponent()
	{
		if (!Z_Registration_Info_UClass_UCascadeParticleSystemComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCascadeParticleSystemComponent.OuterSingleton, Z_Construct_UClass_UCascadeParticleSystemComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCascadeParticleSystemComponent.OuterSingleton;
	}
	template<> CASCADE_API UClass* StaticClass<UCascadeParticleSystemComponent>()
	{
		return UCascadeParticleSystemComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCascadeParticleSystemComponent);
	UCascadeParticleSystemComponent::~UCascadeParticleSystemComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Cascade_Classes_CascadeParticleSystemComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Cascade_Classes_CascadeParticleSystemComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCascadeParticleSystemComponent, UCascadeParticleSystemComponent::StaticClass, TEXT("UCascadeParticleSystemComponent"), &Z_Registration_Info_UClass_UCascadeParticleSystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCascadeParticleSystemComponent), 3449969213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Cascade_Classes_CascadeParticleSystemComponent_h_314602681(TEXT("/Script/Cascade"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Cascade_Classes_CascadeParticleSystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Cascade_Classes_CascadeParticleSystemComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
