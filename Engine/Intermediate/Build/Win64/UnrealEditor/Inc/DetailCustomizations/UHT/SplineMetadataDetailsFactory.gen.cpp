// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SplineMetadataDetailsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineMetadataDetailsFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DETAILCUSTOMIZATIONS_API UClass* Z_Construct_UClass_USplineMetadataDetailsFactoryBase();
	DETAILCUSTOMIZATIONS_API UClass* Z_Construct_UClass_USplineMetadataDetailsFactoryBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DetailCustomizations();
// End Cross Module References
	void USplineMetadataDetailsFactoryBase::StaticRegisterNativesUSplineMetadataDetailsFactoryBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USplineMetadataDetailsFactoryBase);
	UClass* Z_Construct_UClass_USplineMetadataDetailsFactoryBase_NoRegister()
	{
		return USplineMetadataDetailsFactoryBase::StaticClass();
	}
	struct Z_Construct_UClass_USplineMetadataDetailsFactoryBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplineMetadataDetailsFactoryBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DetailCustomizations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplineMetadataDetailsFactoryBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplineMetadataDetailsFactory.h" },
		{ "ModuleRelativePath", "Public/SplineMetadataDetailsFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplineMetadataDetailsFactoryBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplineMetadataDetailsFactoryBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USplineMetadataDetailsFactoryBase_Statics::ClassParams = {
		&USplineMetadataDetailsFactoryBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USplineMetadataDetailsFactoryBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USplineMetadataDetailsFactoryBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplineMetadataDetailsFactoryBase()
	{
		if (!Z_Registration_Info_UClass_USplineMetadataDetailsFactoryBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplineMetadataDetailsFactoryBase.OuterSingleton, Z_Construct_UClass_USplineMetadataDetailsFactoryBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USplineMetadataDetailsFactoryBase.OuterSingleton;
	}
	template<> DETAILCUSTOMIZATIONS_API UClass* StaticClass<USplineMetadataDetailsFactoryBase>()
	{
		return USplineMetadataDetailsFactoryBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplineMetadataDetailsFactoryBase);
	USplineMetadataDetailsFactoryBase::~USplineMetadataDetailsFactoryBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_DetailCustomizations_Public_SplineMetadataDetailsFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_DetailCustomizations_Public_SplineMetadataDetailsFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USplineMetadataDetailsFactoryBase, USplineMetadataDetailsFactoryBase::StaticClass, TEXT("USplineMetadataDetailsFactoryBase"), &Z_Registration_Info_UClass_USplineMetadataDetailsFactoryBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplineMetadataDetailsFactoryBase), 2726589136U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_DetailCustomizations_Public_SplineMetadataDetailsFactory_h_85846181(TEXT("/Script/DetailCustomizations"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_DetailCustomizations_Public_SplineMetadataDetailsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_DetailCustomizations_Public_SplineMetadataDetailsFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
