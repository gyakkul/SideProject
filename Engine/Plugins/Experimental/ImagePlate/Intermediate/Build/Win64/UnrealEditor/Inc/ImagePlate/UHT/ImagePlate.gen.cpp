// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImagePlate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImagePlate() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	IMAGEPLATE_API UClass* Z_Construct_UClass_AImagePlate();
	IMAGEPLATE_API UClass* Z_Construct_UClass_AImagePlate_NoRegister();
	IMAGEPLATE_API UClass* Z_Construct_UClass_UImagePlateComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ImagePlate();
// End Cross Module References
	void AImagePlate::StaticRegisterNativesAImagePlate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AImagePlate);
	UClass* Z_Construct_UClass_AImagePlate_NoRegister()
	{
		return AImagePlate::StaticClass();
	}
	struct Z_Construct_UClass_AImagePlate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImagePlate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ImagePlate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AImagePlate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ImagePlate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImagePlate_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object Activation Physics Collision Input PhysicsVolume" },
		{ "IncludePath", "ImagePlate.h" },
		{ "ModuleRelativePath", "Public/ImagePlate.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImagePlate_Statics::NewProp_ImagePlate_MetaData[] = {
		{ "Category", "ImagePlate" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh" },
		{ "ModuleRelativePath", "Public/ImagePlate.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AImagePlate_Statics::NewProp_ImagePlate = { "ImagePlate", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AImagePlate, ImagePlate), Z_Construct_UClass_UImagePlateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AImagePlate_Statics::NewProp_ImagePlate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AImagePlate_Statics::NewProp_ImagePlate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AImagePlate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AImagePlate_Statics::NewProp_ImagePlate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AImagePlate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AImagePlate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AImagePlate_Statics::ClassParams = {
		&AImagePlate::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AImagePlate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AImagePlate_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AImagePlate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AImagePlate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AImagePlate()
	{
		if (!Z_Registration_Info_UClass_AImagePlate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AImagePlate.OuterSingleton, Z_Construct_UClass_AImagePlate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AImagePlate.OuterSingleton;
	}
	template<> IMAGEPLATE_API UClass* StaticClass<AImagePlate>()
	{
		return AImagePlate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AImagePlate);
	AImagePlate::~AImagePlate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AImagePlate, AImagePlate::StaticClass, TEXT("AImagePlate"), &Z_Registration_Info_UClass_AImagePlate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AImagePlate), 2552519646U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlate_h_2252852756(TEXT("/Script/ImagePlate"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
