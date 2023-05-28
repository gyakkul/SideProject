// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprints/DisplayClusterBlueprintGeneratedClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterBlueprintGeneratedClass() {}
// Cross Module References
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterBlueprintGeneratedClass();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterBlueprintGeneratedClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	void UDisplayClusterBlueprintGeneratedClass::StaticRegisterNativesUDisplayClusterBlueprintGeneratedClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterBlueprintGeneratedClass);
	UClass* Z_Construct_UClass_UDisplayClusterBlueprintGeneratedClass_NoRegister()
	{
		return UDisplayClusterBlueprintGeneratedClass::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterBlueprintGeneratedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterBlueprintGeneratedClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blueprints/DisplayClusterBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Public/Blueprints/DisplayClusterBlueprintGeneratedClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterBlueprintGeneratedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterBlueprintGeneratedClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterBlueprintGeneratedClass_Statics::ClassParams = {
		&UDisplayClusterBlueprintGeneratedClass::StaticClass,
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
		0x009200A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterBlueprintGeneratedClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterBlueprintGeneratedClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterBlueprintGeneratedClass()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterBlueprintGeneratedClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterBlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_UDisplayClusterBlueprintGeneratedClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterBlueprintGeneratedClass.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterBlueprintGeneratedClass>()
	{
		return UDisplayClusterBlueprintGeneratedClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterBlueprintGeneratedClass);
	UDisplayClusterBlueprintGeneratedClass::~UDisplayClusterBlueprintGeneratedClass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprintGeneratedClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprintGeneratedClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterBlueprintGeneratedClass, UDisplayClusterBlueprintGeneratedClass::StaticClass, TEXT("UDisplayClusterBlueprintGeneratedClass"), &Z_Registration_Info_UClass_UDisplayClusterBlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterBlueprintGeneratedClass), 2184194547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprintGeneratedClass_h_3520053408(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprintGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Public_Blueprints_DisplayClusterBlueprintGeneratedClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
