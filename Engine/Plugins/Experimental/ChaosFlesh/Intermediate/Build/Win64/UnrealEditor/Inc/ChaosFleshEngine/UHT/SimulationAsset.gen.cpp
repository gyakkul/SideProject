// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosFlesh/SimulationAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimulationAsset() {}
// Cross Module References
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_USimulationAsset();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_USimulationAsset_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshEngine();
// End Cross Module References
	void USimulationAsset::StaticRegisterNativesUSimulationAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimulationAsset);
	UClass* Z_Construct_UClass_USimulationAsset_NoRegister()
	{
		return USimulationAsset::StaticClass();
	}
	struct Z_Construct_UClass_USimulationAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimulationAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimulationAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* USimulationAsset (UObject)\n*\n* UObject wrapper for the dynamic attributes that are inputs to the tetrahedral simulation. \n*/" },
		{ "IncludePath", "ChaosFlesh/SimulationAsset.h" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/SimulationAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "USimulationAsset (UObject)\n\nUObject wrapper for the dynamic attributes that are inputs to the tetrahedral simulation." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimulationAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimulationAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimulationAsset_Statics::ClassParams = {
		&USimulationAsset::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USimulationAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimulationAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimulationAsset()
	{
		if (!Z_Registration_Info_UClass_USimulationAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimulationAsset.OuterSingleton, Z_Construct_UClass_USimulationAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimulationAsset.OuterSingleton;
	}
	template<> CHAOSFLESHENGINE_API UClass* StaticClass<USimulationAsset>()
	{
		return USimulationAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimulationAsset);
	USimulationAsset::~USimulationAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_SimulationAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_SimulationAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimulationAsset, USimulationAsset::StaticClass, TEXT("USimulationAsset"), &Z_Registration_Info_UClass_USimulationAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimulationAsset), 3047288472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_SimulationAsset_h_618390325(TEXT("/Script/ChaosFleshEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_SimulationAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_SimulationAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
