// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSimulationFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingSimulationFactory() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationFactory();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationFactory_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
// End Cross Module References
	void UClothingSimulationFactory::StaticRegisterNativesUClothingSimulationFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothingSimulationFactory);
	UClass* Z_Construct_UClass_UClothingSimulationFactory_NoRegister()
	{
		return UClothingSimulationFactory::StaticClass();
	}
	struct Z_Construct_UClass_UClothingSimulationFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingSimulationFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingSimulationFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Any clothing simulation factory should derive from this interface object to interact with the engine\n" },
		{ "IncludePath", "ClothingSimulationFactory.h" },
		{ "ModuleRelativePath", "Public/ClothingSimulationFactory.h" },
		{ "ToolTip", "Any clothing simulation factory should derive from this interface object to interact with the engine" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingSimulationFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingSimulationFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothingSimulationFactory_Statics::ClassParams = {
		&UClothingSimulationFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UClothingSimulationFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingSimulationFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingSimulationFactory()
	{
		if (!Z_Registration_Info_UClass_UClothingSimulationFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothingSimulationFactory.OuterSingleton, Z_Construct_UClass_UClothingSimulationFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClothingSimulationFactory.OuterSingleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<UClothingSimulationFactory>()
	{
		return UClothingSimulationFactory::StaticClass();
	}
	UClothingSimulationFactory::UClothingSimulationFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingSimulationFactory);
	UClothingSimulationFactory::~UClothingSimulationFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClothingSimulationFactory, UClothingSimulationFactory::StaticClass, TEXT("UClothingSimulationFactory"), &Z_Registration_Info_UClass_UClothingSimulationFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothingSimulationFactory), 3724635195U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationFactory_h_2995199376(TEXT("/Script/ClothingSystemRuntimeInterface"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothingSimulationFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
