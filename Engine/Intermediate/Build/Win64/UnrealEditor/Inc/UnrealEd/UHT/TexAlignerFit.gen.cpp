// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/TexAligner/TexAlignerFit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexAlignerFit() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTexAligner();
	UNREALED_API UClass* Z_Construct_UClass_UTexAlignerFit();
	UNREALED_API UClass* Z_Construct_UClass_UTexAlignerFit_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTexAlignerFit::StaticRegisterNativesUTexAlignerFit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexAlignerFit);
	UClass* Z_Construct_UClass_UTexAlignerFit_NoRegister()
	{
		return UTexAlignerFit::StaticClass();
	}
	struct Z_Construct_UClass_UTexAlignerFit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexAlignerFit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexAligner,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexAlignerFit_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "TexAligner/TexAlignerFit.h" },
		{ "ModuleRelativePath", "Classes/TexAligner/TexAlignerFit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexAlignerFit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexAlignerFit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexAlignerFit_Statics::ClassParams = {
		&UTexAlignerFit::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTexAlignerFit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTexAlignerFit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexAlignerFit()
	{
		if (!Z_Registration_Info_UClass_UTexAlignerFit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexAlignerFit.OuterSingleton, Z_Construct_UClass_UTexAlignerFit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTexAlignerFit.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTexAlignerFit>()
	{
		return UTexAlignerFit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexAlignerFit);
	UTexAlignerFit::~UTexAlignerFit() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerFit_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerFit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTexAlignerFit, UTexAlignerFit::StaticClass, TEXT("UTexAlignerFit"), &Z_Registration_Info_UClass_UTexAlignerFit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexAlignerFit), 1305074565U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerFit_h_4037329147(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerFit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerFit_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
