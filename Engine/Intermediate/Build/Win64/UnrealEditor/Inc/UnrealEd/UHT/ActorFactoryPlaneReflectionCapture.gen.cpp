// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryPlaneReflectionCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryPlaneReflectionCapture() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryPlaneReflectionCapture();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryPlaneReflectionCapture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryPlaneReflectionCapture::StaticRegisterNativesUActorFactoryPlaneReflectionCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryPlaneReflectionCapture);
	UClass* Z_Construct_UClass_UActorFactoryPlaneReflectionCapture_NoRegister()
	{
		return UActorFactoryPlaneReflectionCapture::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryPlaneReflectionCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryPlaneReflectionCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryPlaneReflectionCapture_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryPlaneReflectionCapture.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryPlaneReflectionCapture.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryPlaneReflectionCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryPlaneReflectionCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryPlaneReflectionCapture_Statics::ClassParams = {
		&UActorFactoryPlaneReflectionCapture::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryPlaneReflectionCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryPlaneReflectionCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryPlaneReflectionCapture()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryPlaneReflectionCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryPlaneReflectionCapture.OuterSingleton, Z_Construct_UClass_UActorFactoryPlaneReflectionCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryPlaneReflectionCapture.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryPlaneReflectionCapture>()
	{
		return UActorFactoryPlaneReflectionCapture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryPlaneReflectionCapture);
	UActorFactoryPlaneReflectionCapture::~UActorFactoryPlaneReflectionCapture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlaneReflectionCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlaneReflectionCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryPlaneReflectionCapture, UActorFactoryPlaneReflectionCapture::StaticClass, TEXT("UActorFactoryPlaneReflectionCapture"), &Z_Registration_Info_UClass_UActorFactoryPlaneReflectionCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryPlaneReflectionCapture), 2967494497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlaneReflectionCapture_h_2048525935(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlaneReflectionCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryPlaneReflectionCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
