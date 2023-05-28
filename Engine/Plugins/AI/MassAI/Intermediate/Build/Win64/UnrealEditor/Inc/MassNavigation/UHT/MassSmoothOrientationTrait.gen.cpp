// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmoothOrientation/MassSmoothOrientationTrait.h"
#include "SmoothOrientation/MassSmoothOrientationFragments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassSmoothOrientationTrait() {}
// Cross Module References
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassSmoothOrientationTrait();
	MASSNAVIGATION_API UClass* Z_Construct_UClass_UMassSmoothOrientationTrait_NoRegister();
	MASSNAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassSmoothOrientationParameters();
	MASSSPAWNER_API UClass* Z_Construct_UClass_UMassEntityTraitBase();
	UPackage* Z_Construct_UPackage__Script_MassNavigation();
// End Cross Module References
	void UMassSmoothOrientationTrait::StaticRegisterNativesUMassSmoothOrientationTrait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassSmoothOrientationTrait);
	UClass* Z_Construct_UClass_UMassSmoothOrientationTrait_NoRegister()
	{
		return UMassSmoothOrientationTrait::StaticClass();
	}
	struct Z_Construct_UClass_UMassSmoothOrientationTrait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassSmoothOrientationTrait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassEntityTraitBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MassNavigation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSmoothOrientationTrait_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Smooth Orientation" },
		{ "IncludePath", "SmoothOrientation/MassSmoothOrientationTrait.h" },
		{ "ModuleRelativePath", "Public/SmoothOrientation/MassSmoothOrientationTrait.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassSmoothOrientationTrait_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/SmoothOrientation/MassSmoothOrientationTrait.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMassSmoothOrientationTrait_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMassSmoothOrientationTrait, Orientation), Z_Construct_UScriptStruct_FMassSmoothOrientationParameters, METADATA_PARAMS(Z_Construct_UClass_UMassSmoothOrientationTrait_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSmoothOrientationTrait_Statics::NewProp_Orientation_MetaData)) }; // 3769550743
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMassSmoothOrientationTrait_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMassSmoothOrientationTrait_Statics::NewProp_Orientation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassSmoothOrientationTrait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassSmoothOrientationTrait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassSmoothOrientationTrait_Statics::ClassParams = {
		&UMassSmoothOrientationTrait::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMassSmoothOrientationTrait_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMassSmoothOrientationTrait_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMassSmoothOrientationTrait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassSmoothOrientationTrait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassSmoothOrientationTrait()
	{
		if (!Z_Registration_Info_UClass_UMassSmoothOrientationTrait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassSmoothOrientationTrait.OuterSingleton, Z_Construct_UClass_UMassSmoothOrientationTrait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassSmoothOrientationTrait.OuterSingleton;
	}
	template<> MASSNAVIGATION_API UClass* StaticClass<UMassSmoothOrientationTrait>()
	{
		return UMassSmoothOrientationTrait::StaticClass();
	}
	UMassSmoothOrientationTrait::UMassSmoothOrientationTrait(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassSmoothOrientationTrait);
	UMassSmoothOrientationTrait::~UMassSmoothOrientationTrait() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationTrait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationTrait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassSmoothOrientationTrait, UMassSmoothOrientationTrait::StaticClass, TEXT("UMassSmoothOrientationTrait"), &Z_Registration_Info_UClass_UMassSmoothOrientationTrait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassSmoothOrientationTrait), 4061411664U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationTrait_h_3197199219(TEXT("/Script/MassNavigation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationTrait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassNavigation_Public_SmoothOrientation_MassSmoothOrientationTrait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
