// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryRectLight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryRectLight() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryRectLight();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryRectLight_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryRectLight::StaticRegisterNativesUActorFactoryRectLight()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryRectLight);
	UClass* Z_Construct_UClass_UActorFactoryRectLight_NoRegister()
	{
		return UActorFactoryRectLight::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryRectLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryRectLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryRectLight_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryRectLight.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryRectLight.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryRectLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryRectLight>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryRectLight_Statics::ClassParams = {
		&UActorFactoryRectLight::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryRectLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryRectLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryRectLight()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryRectLight.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryRectLight.OuterSingleton, Z_Construct_UClass_UActorFactoryRectLight_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryRectLight.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryRectLight>()
	{
		return UActorFactoryRectLight::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryRectLight);
	UActorFactoryRectLight::~UActorFactoryRectLight() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryRectLight_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryRectLight_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryRectLight, UActorFactoryRectLight::StaticClass, TEXT("UActorFactoryRectLight"), &Z_Registration_Info_UClass_UActorFactoryRectLight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryRectLight), 2393203596U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryRectLight_h_1157070932(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryRectLight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryRectLight_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
