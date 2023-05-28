// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/ReplaceAssetsCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplaceAssetsCommandlet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UReplaceAssetsCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UReplaceAssetsCommandlet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UReplaceAssetsCommandlet::StaticRegisterNativesUReplaceAssetsCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplaceAssetsCommandlet);
	UClass* Z_Construct_UClass_UReplaceAssetsCommandlet_NoRegister()
	{
		return UReplaceAssetsCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UReplaceAssetsCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplaceAssetsCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplaceAssetsCommandlet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Commandlet for replacing assets with those from another location (intended use is replacing with cooked assets) */" },
		{ "IncludePath", "Commandlets/ReplaceAssetsCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/ReplaceAssetsCommandlet.h" },
		{ "ToolTip", "Commandlet for replacing assets with those from another location (intended use is replacing with cooked assets)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplaceAssetsCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplaceAssetsCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplaceAssetsCommandlet_Statics::ClassParams = {
		&UReplaceAssetsCommandlet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UReplaceAssetsCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplaceAssetsCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplaceAssetsCommandlet()
	{
		if (!Z_Registration_Info_UClass_UReplaceAssetsCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplaceAssetsCommandlet.OuterSingleton, Z_Construct_UClass_UReplaceAssetsCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplaceAssetsCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UReplaceAssetsCommandlet>()
	{
		return UReplaceAssetsCommandlet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplaceAssetsCommandlet);
	UReplaceAssetsCommandlet::~UReplaceAssetsCommandlet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceAssetsCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceAssetsCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReplaceAssetsCommandlet, UReplaceAssetsCommandlet::StaticClass, TEXT("UReplaceAssetsCommandlet"), &Z_Registration_Info_UClass_UReplaceAssetsCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplaceAssetsCommandlet), 3717714251U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceAssetsCommandlet_h_1343110271(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceAssetsCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_ReplaceAssetsCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
