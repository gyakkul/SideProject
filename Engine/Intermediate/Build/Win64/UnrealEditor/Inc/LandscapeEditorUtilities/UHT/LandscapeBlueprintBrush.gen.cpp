// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeBlueprintBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeBlueprintBrush() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeBlueprintBrushBase();
	LANDSCAPEEDITORUTILITIES_API UClass* Z_Construct_UClass_ALandscapeBlueprintBrush();
	LANDSCAPEEDITORUTILITIES_API UClass* Z_Construct_UClass_ALandscapeBlueprintBrush_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LandscapeEditorUtilities();
// End Cross Module References
	void ALandscapeBlueprintBrush::StaticRegisterNativesALandscapeBlueprintBrush()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscapeBlueprintBrush);
	UClass* Z_Construct_UClass_ALandscapeBlueprintBrush_NoRegister()
	{
		return ALandscapeBlueprintBrush::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapeBlueprintBrush_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscapeBlueprintBrush_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALandscapeBlueprintBrushBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapeEditorUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintBrush_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Replication Input LOD Actor Rendering" },
		{ "IncludePath", "LandscapeBlueprintBrush.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrush.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapeBlueprintBrush_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeBlueprintBrush>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeBlueprintBrush_Statics::ClassParams = {
		&ALandscapeBlueprintBrush::StaticClass,
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
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintBrush_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrush_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscapeBlueprintBrush()
	{
		if (!Z_Registration_Info_UClass_ALandscapeBlueprintBrush.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscapeBlueprintBrush.OuterSingleton, Z_Construct_UClass_ALandscapeBlueprintBrush_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALandscapeBlueprintBrush.OuterSingleton;
	}
	template<> LANDSCAPEEDITORUTILITIES_API UClass* StaticClass<ALandscapeBlueprintBrush>()
	{
		return ALandscapeBlueprintBrush::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeBlueprintBrush);
	ALandscapeBlueprintBrush::~ALandscapeBlueprintBrush() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditorUtilities_Public_LandscapeBlueprintBrush_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditorUtilities_Public_LandscapeBlueprintBrush_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALandscapeBlueprintBrush, ALandscapeBlueprintBrush::StaticClass, TEXT("ALandscapeBlueprintBrush"), &Z_Registration_Info_UClass_ALandscapeBlueprintBrush, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscapeBlueprintBrush), 2410801770U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditorUtilities_Public_LandscapeBlueprintBrush_h_4208660281(TEXT("/Script/LandscapeEditorUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditorUtilities_Public_LandscapeBlueprintBrush_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_LandscapeEditorUtilities_Public_LandscapeBlueprintBrush_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
