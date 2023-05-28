// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactorySphereReflectionCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactorySphereReflectionCapture() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactorySphereReflectionCapture();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactorySphereReflectionCapture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactorySphereReflectionCapture::StaticRegisterNativesUActorFactorySphereReflectionCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactorySphereReflectionCapture);
	UClass* Z_Construct_UClass_UActorFactorySphereReflectionCapture_NoRegister()
	{
		return UActorFactorySphereReflectionCapture::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactorySphereReflectionCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactorySphereReflectionCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactorySphereReflectionCapture_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactorySphereReflectionCapture.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactorySphereReflectionCapture.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactorySphereReflectionCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactorySphereReflectionCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactorySphereReflectionCapture_Statics::ClassParams = {
		&UActorFactorySphereReflectionCapture::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactorySphereReflectionCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactorySphereReflectionCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactorySphereReflectionCapture()
	{
		if (!Z_Registration_Info_UClass_UActorFactorySphereReflectionCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactorySphereReflectionCapture.OuterSingleton, Z_Construct_UClass_UActorFactorySphereReflectionCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactorySphereReflectionCapture.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactorySphereReflectionCapture>()
	{
		return UActorFactorySphereReflectionCapture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactorySphereReflectionCapture);
	UActorFactorySphereReflectionCapture::~UActorFactorySphereReflectionCapture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySphereReflectionCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySphereReflectionCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactorySphereReflectionCapture, UActorFactorySphereReflectionCapture::StaticClass, TEXT("UActorFactorySphereReflectionCapture"), &Z_Registration_Info_UClass_UActorFactorySphereReflectionCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactorySphereReflectionCapture), 4269414846U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySphereReflectionCapture_h_3541557783(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySphereReflectionCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactorySphereReflectionCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
