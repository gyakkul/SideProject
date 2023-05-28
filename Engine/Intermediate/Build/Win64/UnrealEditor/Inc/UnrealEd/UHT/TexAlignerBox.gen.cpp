// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/TexAligner/TexAlignerBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexAlignerBox() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTexAligner();
	UNREALED_API UClass* Z_Construct_UClass_UTexAlignerBox();
	UNREALED_API UClass* Z_Construct_UClass_UTexAlignerBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTexAlignerBox::StaticRegisterNativesUTexAlignerBox()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexAlignerBox);
	UClass* Z_Construct_UClass_UTexAlignerBox_NoRegister()
	{
		return UTexAlignerBox::StaticClass();
	}
	struct Z_Construct_UClass_UTexAlignerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexAlignerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTexAligner,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexAlignerBox_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "TexAligner/TexAlignerBox.h" },
		{ "ModuleRelativePath", "Classes/TexAligner/TexAlignerBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexAlignerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexAlignerBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexAlignerBox_Statics::ClassParams = {
		&UTexAlignerBox::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTexAlignerBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTexAlignerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexAlignerBox()
	{
		if (!Z_Registration_Info_UClass_UTexAlignerBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexAlignerBox.OuterSingleton, Z_Construct_UClass_UTexAlignerBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTexAlignerBox.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTexAlignerBox>()
	{
		return UTexAlignerBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexAlignerBox);
	UTexAlignerBox::~UTexAlignerBox() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTexAlignerBox, UTexAlignerBox::StaticClass, TEXT("UTexAlignerBox"), &Z_Registration_Info_UClass_UTexAlignerBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexAlignerBox), 681114591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerBox_h_1336554801(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAlignerBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
