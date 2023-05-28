// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Classes/ActorFactoryLandscape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorFactoryLandscape() {}
// Cross Module References
	LANDSCAPEEDITOR_API UClass* Z_Construct_UClass_UActorFactoryLandscape();
	LANDSCAPEEDITOR_API UClass* Z_Construct_UClass_UActorFactoryLandscape_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_LandscapeEditor();
// End Cross Module References
	void UActorFactoryLandscape::StaticRegisterNativesUActorFactoryLandscape()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorFactoryLandscape);
	UClass* Z_Construct_UClass_UActorFactoryLandscape_NoRegister()
	{
		return UActorFactoryLandscape::StaticClass();
	}
	struct Z_Construct_UClass_UActorFactoryLandscape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorFactoryLandscape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorFactoryLandscape_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Classes/ActorFactoryLandscape.h" },
		{ "ModuleRelativePath", "Private/Classes/ActorFactoryLandscape.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorFactoryLandscape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorFactoryLandscape>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorFactoryLandscape_Statics::ClassParams = {
		&UActorFactoryLandscape::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorFactoryLandscape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorFactoryLandscape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorFactoryLandscape()
	{
		if (!Z_Registration_Info_UClass_UActorFactoryLandscape.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorFactoryLandscape.OuterSingleton, Z_Construct_UClass_UActorFactoryLandscape_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorFactoryLandscape.OuterSingleton;
	}
	template<> LANDSCAPEEDITOR_API UClass* StaticClass<UActorFactoryLandscape>()
	{
		return UActorFactoryLandscape::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorFactoryLandscape);
	UActorFactoryLandscape::~UActorFactoryLandscape() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_ActorFactoryLandscape_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_ActorFactoryLandscape_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorFactoryLandscape, UActorFactoryLandscape::StaticClass, TEXT("UActorFactoryLandscape"), &Z_Registration_Info_UClass_UActorFactoryLandscape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorFactoryLandscape), 481752227U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_ActorFactoryLandscape_h_3336877482(TEXT("/Script/LandscapeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_ActorFactoryLandscape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_ActorFactoryLandscape_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
