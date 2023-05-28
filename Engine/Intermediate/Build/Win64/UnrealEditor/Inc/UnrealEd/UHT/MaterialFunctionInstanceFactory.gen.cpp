// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/MaterialFunctionInstanceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionInstanceFactory() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionInstanceFactory();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionInstanceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory();
	UNREALED_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMaterialFunctionInstanceFactory::StaticRegisterNativesUMaterialFunctionInstanceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionInstanceFactory);
	UClass* Z_Construct_UClass_UMaterialFunctionInstanceFactory_NoRegister()
	{
		return UMaterialFunctionInstanceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialParent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InitialParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/MaterialFunctionInstanceFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialFunctionInstanceFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::NewProp_InitialParent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/MaterialFunctionInstanceFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::NewProp_InitialParent = { "InitialParent", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionInstanceFactory, InitialParent), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::NewProp_InitialParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::NewProp_InitialParent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::NewProp_InitialParent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionInstanceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::ClassParams = {
		&UMaterialFunctionInstanceFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::PropPointers),
		0,
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionInstanceFactory()
	{
		if (!Z_Registration_Info_UClass_UMaterialFunctionInstanceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionInstanceFactory.OuterSingleton, Z_Construct_UClass_UMaterialFunctionInstanceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialFunctionInstanceFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialFunctionInstanceFactory>()
	{
		return UMaterialFunctionInstanceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionInstanceFactory);
	UMaterialFunctionInstanceFactory::~UMaterialFunctionInstanceFactory() {}
	void UMaterialFunctionMaterialLayerInstanceFactory::StaticRegisterNativesUMaterialFunctionMaterialLayerInstanceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionMaterialLayerInstanceFactory);
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_NoRegister()
	{
		return UMaterialFunctionMaterialLayerInstanceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialFunctionInstanceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/MaterialFunctionInstanceFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialFunctionInstanceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionMaterialLayerInstanceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_Statics::ClassParams = {
		&UMaterialFunctionMaterialLayerInstanceFactory::StaticClass,
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
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory()
	{
		if (!Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerInstanceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerInstanceFactory.OuterSingleton, Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerInstanceFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialFunctionMaterialLayerInstanceFactory>()
	{
		return UMaterialFunctionMaterialLayerInstanceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionMaterialLayerInstanceFactory);
	UMaterialFunctionMaterialLayerInstanceFactory::~UMaterialFunctionMaterialLayerInstanceFactory() {}
	void UMaterialFunctionMaterialLayerBlendInstanceFactory::StaticRegisterNativesUMaterialFunctionMaterialLayerBlendInstanceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionMaterialLayerBlendInstanceFactory);
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_NoRegister()
	{
		return UMaterialFunctionMaterialLayerBlendInstanceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialFunctionInstanceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/MaterialFunctionInstanceFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/MaterialFunctionInstanceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionMaterialLayerBlendInstanceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_Statics::ClassParams = {
		&UMaterialFunctionMaterialLayerBlendInstanceFactory::StaticClass,
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
		0x000820A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory()
	{
		if (!Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory.OuterSingleton, Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMaterialFunctionMaterialLayerBlendInstanceFactory>()
	{
		return UMaterialFunctionMaterialLayerBlendInstanceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionMaterialLayerBlendInstanceFactory);
	UMaterialFunctionMaterialLayerBlendInstanceFactory::~UMaterialFunctionMaterialLayerBlendInstanceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionInstanceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionInstanceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialFunctionInstanceFactory, UMaterialFunctionInstanceFactory::StaticClass, TEXT("UMaterialFunctionInstanceFactory"), &Z_Registration_Info_UClass_UMaterialFunctionInstanceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionInstanceFactory), 860598437U) },
		{ Z_Construct_UClass_UMaterialFunctionMaterialLayerInstanceFactory, UMaterialFunctionMaterialLayerInstanceFactory::StaticClass, TEXT("UMaterialFunctionMaterialLayerInstanceFactory"), &Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerInstanceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionMaterialLayerInstanceFactory), 2096755305U) },
		{ Z_Construct_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory, UMaterialFunctionMaterialLayerBlendInstanceFactory::StaticClass, TEXT("UMaterialFunctionMaterialLayerBlendInstanceFactory"), &Z_Registration_Info_UClass_UMaterialFunctionMaterialLayerBlendInstanceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionMaterialLayerBlendInstanceFactory), 3921340805U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionInstanceFactory_h_2756742586(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionInstanceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MaterialFunctionInstanceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
