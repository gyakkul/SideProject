// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSimulationFactoryNv.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingSimulationFactoryNv() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationFactory();
	CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothingSimulationFactoryNv();
	CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothingSimulationFactoryNv_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeNv();
// End Cross Module References
	void UClothingSimulationFactoryNv::StaticRegisterNativesUClothingSimulationFactoryNv()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothingSimulationFactoryNv);
	UClass* Z_Construct_UClass_UClothingSimulationFactoryNv_NoRegister()
	{
		return UClothingSimulationFactoryNv::StaticClass();
	}
	struct Z_Construct_UClass_UClothingSimulationFactoryNv_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingSimulationFactoryNv_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothingSimulationFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeNv,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingSimulationFactoryNv_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ClothingSimulationFactoryNv.h" },
		{ "ModuleRelativePath", "Public/ClothingSimulationFactoryNv.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingSimulationFactoryNv_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingSimulationFactoryNv>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothingSimulationFactoryNv_Statics::ClassParams = {
		&UClothingSimulationFactoryNv::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClothingSimulationFactoryNv_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationFactoryNv_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingSimulationFactoryNv()
	{
		if (!Z_Registration_Info_UClass_UClothingSimulationFactoryNv.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothingSimulationFactoryNv.OuterSingleton, Z_Construct_UClass_UClothingSimulationFactoryNv_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothingSimulationFactoryNv.OuterSingleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMENV_API UClass* StaticClass<UClothingSimulationFactoryNv>()
	{
		return UClothingSimulationFactoryNv::StaticClass();
	}
	UClothingSimulationFactoryNv::UClothingSimulationFactoryNv(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingSimulationFactoryNv);
	UClothingSimulationFactoryNv::~UClothingSimulationFactoryNv() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationFactoryNv_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationFactoryNv_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothingSimulationFactoryNv, UClothingSimulationFactoryNv::StaticClass, TEXT("UClothingSimulationFactoryNv"), &Z_Registration_Info_UClass_UClothingSimulationFactoryNv, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothingSimulationFactoryNv), 1389413419U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationFactoryNv_h_3908569450(TEXT("/Script/ClothingSystemRuntimeNv"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationFactoryNv_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeNv_Public_ClothingSimulationFactoryNv_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
