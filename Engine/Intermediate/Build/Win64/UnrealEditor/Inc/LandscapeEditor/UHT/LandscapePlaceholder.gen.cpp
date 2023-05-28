// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Classes/LandscapePlaceholder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapePlaceholder() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LANDSCAPEEDITOR_API UClass* Z_Construct_UClass_ALandscapePlaceholder();
	LANDSCAPEEDITOR_API UClass* Z_Construct_UClass_ALandscapePlaceholder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LandscapeEditor();
// End Cross Module References
	void ALandscapePlaceholder::StaticRegisterNativesALandscapePlaceholder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscapePlaceholder);
	UClass* Z_Construct_UClass_ALandscapePlaceholder_NoRegister()
	{
		return ALandscapePlaceholder::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapePlaceholder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscapePlaceholder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapePlaceholder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Classes/LandscapePlaceholder.h" },
		{ "ModuleRelativePath", "Private/Classes/LandscapePlaceholder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapePlaceholder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapePlaceholder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscapePlaceholder_Statics::ClassParams = {
		&ALandscapePlaceholder::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscapePlaceholder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapePlaceholder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscapePlaceholder()
	{
		if (!Z_Registration_Info_UClass_ALandscapePlaceholder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscapePlaceholder.OuterSingleton, Z_Construct_UClass_ALandscapePlaceholder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALandscapePlaceholder.OuterSingleton;
	}
	template<> LANDSCAPEEDITOR_API UClass* StaticClass<ALandscapePlaceholder>()
	{
		return ALandscapePlaceholder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapePlaceholder);
	ALandscapePlaceholder::~ALandscapePlaceholder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_LandscapePlaceholder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_LandscapePlaceholder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALandscapePlaceholder, ALandscapePlaceholder::StaticClass, TEXT("ALandscapePlaceholder"), &Z_Registration_Info_UClass_ALandscapePlaceholder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscapePlaceholder), 949865925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_LandscapePlaceholder_h_1024869947(TEXT("/Script/LandscapeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_LandscapePlaceholder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditor_Private_Classes_LandscapePlaceholder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
