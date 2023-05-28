// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Material/InterchangeMaterialFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeMaterialFactory() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeFactoryBase();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeMaterialFactory();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeMaterialFactory_NoRegister();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeMaterialFunctionFactory();
	INTERCHANGEIMPORT_API UClass* Z_Construct_UClass_UInterchangeMaterialFunctionFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_InterchangeImport();
// End Cross Module References
	void UInterchangeMaterialFactory::StaticRegisterNativesUInterchangeMaterialFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeMaterialFactory);
	UClass* Z_Construct_UClass_UInterchangeMaterialFactory_NoRegister()
	{
		return UInterchangeMaterialFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeMaterialFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeMaterialFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeMaterialFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Material/InterchangeMaterialFactory.h" },
		{ "ModuleRelativePath", "Public/Material/InterchangeMaterialFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeMaterialFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeMaterialFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeMaterialFactory_Statics::ClassParams = {
		&UInterchangeMaterialFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeMaterialFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMaterialFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeMaterialFactory()
	{
		if (!Z_Registration_Info_UClass_UInterchangeMaterialFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeMaterialFactory.OuterSingleton, Z_Construct_UClass_UInterchangeMaterialFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeMaterialFactory.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeMaterialFactory>()
	{
		return UInterchangeMaterialFactory::StaticClass();
	}
	UInterchangeMaterialFactory::UInterchangeMaterialFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeMaterialFactory);
	UInterchangeMaterialFactory::~UInterchangeMaterialFactory() {}
	void UInterchangeMaterialFunctionFactory::StaticRegisterNativesUInterchangeMaterialFunctionFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeMaterialFunctionFactory);
	UClass* Z_Construct_UClass_UInterchangeMaterialFunctionFactory_NoRegister()
	{
		return UInterchangeMaterialFunctionFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeMaterialFunctionFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeMaterialFunctionFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeFactoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeImport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeMaterialFunctionFactory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Material/InterchangeMaterialFactory.h" },
		{ "ModuleRelativePath", "Public/Material/InterchangeMaterialFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeMaterialFunctionFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeMaterialFunctionFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeMaterialFunctionFactory_Statics::ClassParams = {
		&UInterchangeMaterialFunctionFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeMaterialFunctionFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeMaterialFunctionFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeMaterialFunctionFactory()
	{
		if (!Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactory.OuterSingleton, Z_Construct_UClass_UInterchangeMaterialFunctionFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactory.OuterSingleton;
	}
	template<> INTERCHANGEIMPORT_API UClass* StaticClass<UInterchangeMaterialFunctionFactory>()
	{
		return UInterchangeMaterialFunctionFactory::StaticClass();
	}
	UInterchangeMaterialFunctionFactory::UInterchangeMaterialFunctionFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeMaterialFunctionFactory);
	UInterchangeMaterialFunctionFactory::~UInterchangeMaterialFunctionFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Material_InterchangeMaterialFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Material_InterchangeMaterialFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeMaterialFactory, UInterchangeMaterialFactory::StaticClass, TEXT("UInterchangeMaterialFactory"), &Z_Registration_Info_UClass_UInterchangeMaterialFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeMaterialFactory), 657514416U) },
		{ Z_Construct_UClass_UInterchangeMaterialFunctionFactory, UInterchangeMaterialFunctionFactory::StaticClass, TEXT("UInterchangeMaterialFunctionFactory"), &Z_Registration_Info_UClass_UInterchangeMaterialFunctionFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeMaterialFunctionFactory), 1347271778U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Material_InterchangeMaterialFactory_h_1506648776(TEXT("/Script/InterchangeImport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Material_InterchangeMaterialFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Import_Public_Material_InterchangeMaterialFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
