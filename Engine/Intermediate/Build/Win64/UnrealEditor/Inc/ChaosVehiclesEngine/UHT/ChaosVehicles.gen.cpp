// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosVehicles.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosVehicles() {}
// Cross Module References
	CHAOSVEHICLESENGINE_API UClass* Z_Construct_UClass_UChaosVehicles();
	CHAOSVEHICLESENGINE_API UClass* Z_Construct_UClass_UChaosVehicles_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ChaosVehiclesEngine();
// End Cross Module References
	void UChaosVehicles::StaticRegisterNativesUChaosVehicles()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosVehicles);
	UClass* Z_Construct_UClass_UChaosVehicles_NoRegister()
	{
		return UChaosVehicles::StaticClass();
	}
	struct Z_Construct_UClass_UChaosVehicles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosVehicles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehiclesEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosVehicles_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* UChaosVehicles (UObject)\n*\n*/" },
		{ "IncludePath", "ChaosVehicles.h" },
		{ "ModuleRelativePath", "Public/ChaosVehicles.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UChaosVehicles (UObject)" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosVehicles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosVehicles>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosVehicles_Statics::ClassParams = {
		&UChaosVehicles::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChaosVehicles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosVehicles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosVehicles()
	{
		if (!Z_Registration_Info_UClass_UChaosVehicles.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosVehicles.OuterSingleton, Z_Construct_UClass_UChaosVehicles_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosVehicles.OuterSingleton;
	}
	template<> CHAOSVEHICLESENGINE_API UClass* StaticClass<UChaosVehicles>()
	{
		return UChaosVehicles::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosVehicles);
	UChaosVehicles::~UChaosVehicles() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesEngine_Public_ChaosVehicles_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesEngine_Public_ChaosVehicles_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosVehicles, UChaosVehicles::StaticClass, TEXT("UChaosVehicles"), &Z_Registration_Info_UClass_UChaosVehicles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosVehicles), 787866641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesEngine_Public_ChaosVehicles_h_75194319(TEXT("/Script/ChaosVehiclesEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesEngine_Public_ChaosVehicles_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVehicles_ChaosVehiclesEngine_Public_ChaosVehicles_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
