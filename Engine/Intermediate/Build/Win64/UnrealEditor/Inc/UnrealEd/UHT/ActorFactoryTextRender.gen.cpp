// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/ActorFactories/ActorFactoryTextRender.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryTextRender() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryTextRender();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactoryTextRender_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorFactoryTextRender::StaticRegisterNativesUActorFactoryTextRender()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryTextRender);
	UClass* Z_Construct_UClass_UActorFactoryTextRender_NoRegister()
	{
		return UActorFactoryTextRender::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryTextRender_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryTextRender_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryTextRender_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ActorFactories/ActorFactoryTextRender.h" },
		{ "ModuleRelativePath", "Classes/ActorFactories/ActorFactoryTextRender.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryTextRender_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryTextRender>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryTextRender_Statics::ClassParams = {
		&UActorFactoryTextRender::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryTextRender_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryTextRender_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryTextRender()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryTextRender.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryTextRender.OuterSingleton, Z_Construct_UClass_UActorFactoryTextRender_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryTextRender.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorFactoryTextRender>()
	{
		return UActorFactoryTextRender::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryTextRender);
	UActorFactoryTextRender::~UActorFactoryTextRender() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTextRender_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTextRender_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryTextRender, UActorFactoryTextRender::StaticClass, TEXT("UActorFactoryTextRender"), &Z_Registration_Info_UClass_UActorFactoryTextRender, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryTextRender), 1945197587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTextRender_h_186653631(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTextRender_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_ActorFactories_ActorFactoryTextRender_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
