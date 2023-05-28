// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/TexAligner/TexAlignerPlanar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexAlignerPlanar() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTexAligner();
	UNREALED_API UClass* Z_Construct_UClass_UTexAlignerPlanar();
	UNREALED_API UClass* Z_Construct_UClass_UTexAlignerPlanar_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTexAlignerPlanar::StaticRegisterNativesUTexAlignerPlanar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexAlignerPlanar);
	UClass* Z_Construct_UClass_UTexAlignerPlanar_NoRegister()
	{
		return UTexAlignerPlanar::StaticClass();
	}
	struct Z_Construct_UClass_UTexAlignerPlanar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexAlignerPlanar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexAligner,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexAlignerPlanar_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "TexAligner/TexAlignerPlanar.h" },
		{ "ModuleRelativePath", "Classes/TexAligner/TexAlignerPlanar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexAlignerPlanar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexAlignerPlanar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexAlignerPlanar_Statics::ClassParams = {
		&UTexAlignerPlanar::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTexAlignerPlanar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTexAlignerPlanar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexAlignerPlanar()
	{
		if (!Z_Registration_Info_UClass_UTexAlignerPlanar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexAlignerPlanar.OuterSingleton, Z_Construct_UClass_UTexAlignerPlanar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTexAlignerPlanar.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTexAlignerPlanar>()
	{
		return UTexAlignerPlanar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexAlignerPlanar);
	UTexAlignerPlanar::~UTexAlignerPlanar() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerPlanar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerPlanar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTexAlignerPlanar, UTexAlignerPlanar::StaticClass, TEXT("UTexAlignerPlanar"), &Z_Registration_Info_UClass_UTexAlignerPlanar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexAlignerPlanar), 2893073316U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerPlanar_h_2902373246(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerPlanar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerPlanar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
