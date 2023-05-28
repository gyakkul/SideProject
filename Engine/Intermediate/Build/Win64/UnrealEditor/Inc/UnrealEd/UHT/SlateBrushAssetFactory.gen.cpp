// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/SlateBrushAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateBrushAssetFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_USlateBrushAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_USlateBrushAssetFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USlateBrushAssetFactory::StaticRegisterNativesUSlateBrushAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateBrushAssetFactory);
	UClass* Z_Construct_UClass_USlateBrushAssetFactory_NoRegister()
	{
		return USlateBrushAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_USlateBrushAssetFactory_Statics
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
	UObject* (*const Z_Construct_UClass_USlateBrushAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateBrushAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Factory for creating SlateBrushAssets */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/SlateBrushAssetFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/SlateBrushAssetFactory.h" },
		{ "ToolTip", "Factory for creating SlateBrushAssets" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateBrushAssetFactory_Statics::NewProp_InitialTexture_MetaData[] = {
		{ "Comment", "/** An initial texture to assign to the newly created slate brush */" },
		{ "ModuleRelativePath", "Classes/Factories/SlateBrushAssetFactory.h" },
		{ "ToolTip", "An initial texture to assign to the newly created slate brush" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USlateBrushAssetFactory_Statics::NewProp_InitialTexture = { "InitialTexture", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlateBrushAssetFactory, InitialTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USlateBrushAssetFactory_Statics::NewProp_InitialTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateBrushAssetFactory_Statics::NewProp_InitialTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlateBrushAssetFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateBrushAssetFactory_Statics::NewProp_InitialTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateBrushAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateBrushAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateBrushAssetFactory_Statics::ClassParams = {
		&USlateBrushAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlateBrushAssetFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlateBrushAssetFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlateBrushAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlateBrushAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateBrushAssetFactory()
	{
		if (!Z_Registration_Info_UClass_USlateBrushAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateBrushAssetFactory.OuterSingleton, Z_Construct_UClass_USlateBrushAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlateBrushAssetFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USlateBrushAssetFactory>()
	{
		return USlateBrushAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateBrushAssetFactory);
	USlateBrushAssetFactory::~USlateBrushAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SlateBrushAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SlateBrushAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlateBrushAssetFactory, USlateBrushAssetFactory::StaticClass, TEXT("USlateBrushAssetFactory"), &Z_Registration_Info_UClass_USlateBrushAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateBrushAssetFactory), 261906317U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SlateBrushAssetFactory_h_3923339648(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SlateBrushAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_SlateBrushAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
