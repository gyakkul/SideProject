// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AbstractNavData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbstractNavData() {}
// Cross Module References
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_AAbstractNavData();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_AAbstractNavData_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void AAbstractNavData::StaticRegisterNativesAAbstractNavData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAbstractNavData);
	UClass* Z_Construct_UClass_AAbstractNavData_NoRegister()
	{
		return AAbstractNavData::StaticClass();
	}
	struct Z_Construct_UClass_AAbstractNavData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAbstractNavData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANavigationData,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAbstractNavData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AbstractNavData.h" },
		{ "ModuleRelativePath", "Public/AbstractNavData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAbstractNavData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAbstractNavData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAbstractNavData_Statics::ClassParams = {
		&AAbstractNavData::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A6u,
		METADATA_PARAMS(Z_Construct_UClass_AAbstractNavData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAbstractNavData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAbstractNavData()
	{
		if (!Z_Registration_Info_UClass_AAbstractNavData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAbstractNavData.OuterSingleton, Z_Construct_UClass_AAbstractNavData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAbstractNavData.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<AAbstractNavData>()
	{
		return AAbstractNavData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAbstractNavData);
	AAbstractNavData::~AAbstractNavData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAbstractNavData, AAbstractNavData::StaticClass, TEXT("AAbstractNavData"), &Z_Registration_Info_UClass_AAbstractNavData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAbstractNavData), 1939536840U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_4080569048(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_AbstractNavData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
