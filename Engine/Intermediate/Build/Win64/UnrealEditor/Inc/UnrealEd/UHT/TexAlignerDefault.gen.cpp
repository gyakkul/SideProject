// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/TexAligner/TexAlignerDefault.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexAlignerDefault() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTexAligner();
	UNREALED_API UClass* Z_Construct_UClass_UTexAlignerDefault();
	UNREALED_API UClass* Z_Construct_UClass_UTexAlignerDefault_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTexAlignerDefault::StaticRegisterNativesUTexAlignerDefault()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexAlignerDefault);
	UClass* Z_Construct_UClass_UTexAlignerDefault_NoRegister()
	{
		return UTexAlignerDefault::StaticClass();
	}
	struct Z_Construct_UClass_UTexAlignerDefault_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexAlignerDefault_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexAligner,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexAlignerDefault_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "TexAligner/TexAlignerDefault.h" },
		{ "ModuleRelativePath", "Classes/TexAligner/TexAlignerDefault.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexAlignerDefault_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexAlignerDefault>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexAlignerDefault_Statics::ClassParams = {
		&UTexAlignerDefault::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTexAlignerDefault_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTexAlignerDefault_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexAlignerDefault()
	{
		if (!Z_Registration_Info_UClass_UTexAlignerDefault.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexAlignerDefault.OuterSingleton, Z_Construct_UClass_UTexAlignerDefault_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTexAlignerDefault.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTexAlignerDefault>()
	{
		return UTexAlignerDefault::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexAlignerDefault);
	UTexAlignerDefault::~UTexAlignerDefault() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerDefault_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerDefault_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTexAlignerDefault, UTexAlignerDefault::StaticClass, TEXT("UTexAlignerDefault"), &Z_Registration_Info_UClass_UTexAlignerDefault, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexAlignerDefault), 1162083683U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerDefault_h_706510971(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerDefault_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerDefault_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
