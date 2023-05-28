// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/SubUVAnimationFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubUVAnimationFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_USubUVAnimationFactory();
	UNREALED_API UClass* Z_Construct_UClass_USubUVAnimationFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USubUVAnimationFactory::StaticRegisterNativesUSubUVAnimationFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubUVAnimationFactory);
	UClass* Z_Construct_UClass_USubUVAnimationFactory_NoRegister()
	{
		return USubUVAnimationFactory::StaticClass();
	}
	struct Z_Construct_UClass_USubUVAnimationFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InitialTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubUVAnimationFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubUVAnimationFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/SubUVAnimationFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SubUVAnimationFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubUVAnimationFactory_Statics::NewProp_InitialTexture_MetaData[] = {
		{ "Comment", "/** An initial texture to use */" },
		{ "ModuleRelativePath", "Classes/Factories/SubUVAnimationFactory.h" },
		{ "ToolTip", "An initial texture to use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USubUVAnimationFactory_Statics::NewProp_InitialTexture = { "InitialTexture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USubUVAnimationFactory, InitialTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USubUVAnimationFactory_Statics::NewProp_InitialTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USubUVAnimationFactory_Statics::NewProp_InitialTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USubUVAnimationFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USubUVAnimationFactory_Statics::NewProp_InitialTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubUVAnimationFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubUVAnimationFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubUVAnimationFactory_Statics::ClassParams = {
		&USubUVAnimationFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USubUVAnimationFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USubUVAnimationFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USubUVAnimationFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubUVAnimationFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubUVAnimationFactory()
	{
		if (!Z_Registration_Info_UClass_USubUVAnimationFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubUVAnimationFactory.OuterSingleton, Z_Construct_UClass_USubUVAnimationFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubUVAnimationFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USubUVAnimationFactory>()
	{
		return USubUVAnimationFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubUVAnimationFactory);
	USubUVAnimationFactory::~USubUVAnimationFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SubUVAnimationFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SubUVAnimationFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubUVAnimationFactory, USubUVAnimationFactory::StaticClass, TEXT("USubUVAnimationFactory"), &Z_Registration_Info_UClass_USubUVAnimationFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubUVAnimationFactory), 2817202131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SubUVAnimationFactory_h_859522341(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SubUVAnimationFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SubUVAnimationFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
