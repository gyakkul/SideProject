// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryBoxReflectionCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryBoxReflectionCapture() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryBoxReflectionCapture();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryBoxReflectionCapture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryBoxReflectionCapture::StaticRegisterNativesUActorFactoryBoxReflectionCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryBoxReflectionCapture);
	UClass* Z_Construct_UClass_UActorFactoryBoxReflectionCapture_NoRegister()
	{
		return UActorFactoryBoxReflectionCapture::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryBoxReflectionCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryBoxReflectionCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryBoxReflectionCapture_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryBoxReflectionCapture.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryBoxReflectionCapture.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryBoxReflectionCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryBoxReflectionCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryBoxReflectionCapture_Statics::ClassParams = {
		&UActorFactoryBoxReflectionCapture::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryBoxReflectionCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryBoxReflectionCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryBoxReflectionCapture()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryBoxReflectionCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryBoxReflectionCapture.OuterSingleton, Z_Construct_UClass_UActorFactoryBoxReflectionCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryBoxReflectionCapture.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryBoxReflectionCapture>()
	{
		return UActorFactoryBoxReflectionCapture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryBoxReflectionCapture);
	UActorFactoryBoxReflectionCapture::~UActorFactoryBoxReflectionCapture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxReflectionCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxReflectionCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryBoxReflectionCapture, UActorFactoryBoxReflectionCapture::StaticClass, TEXT("UActorFactoryBoxReflectionCapture"), &Z_Registration_Info_UClass_UActorFactoryBoxReflectionCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryBoxReflectionCapture), 1699494360U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxReflectionCapture_h_216392148(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxReflectionCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryBoxReflectionCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
