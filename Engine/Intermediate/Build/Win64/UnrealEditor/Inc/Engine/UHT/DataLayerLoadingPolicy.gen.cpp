// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/DataLayer/DataLayerLoadingPolicy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataLayerLoadingPolicy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerLoadingPolicy();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerLoadingPolicy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDataLayerLoadingPolicy::StaticRegisterNativesUDataLayerLoadingPolicy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataLayerLoadingPolicy);
	UClass* Z_Construct_UClass_UDataLayerLoadingPolicy_NoRegister()
	{
		return UDataLayerLoadingPolicy::StaticClass();
	}
	struct Z_Construct_UClass_UDataLayerLoadingPolicy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataLayerLoadingPolicy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataLayerLoadingPolicy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/DataLayer/DataLayerLoadingPolicy.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayerLoadingPolicy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataLayerLoadingPolicy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataLayerLoadingPolicy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataLayerLoadingPolicy_Statics::ClassParams = {
		&UDataLayerLoadingPolicy::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataLayerLoadingPolicy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataLayerLoadingPolicy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataLayerLoadingPolicy()
	{
		if (!Z_Registration_Info_UClass_UDataLayerLoadingPolicy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataLayerLoadingPolicy.OuterSingleton, Z_Construct_UClass_UDataLayerLoadingPolicy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataLayerLoadingPolicy.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDataLayerLoadingPolicy>()
	{
		return UDataLayerLoadingPolicy::StaticClass();
	}
	UDataLayerLoadingPolicy::UDataLayerLoadingPolicy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataLayerLoadingPolicy);
	UDataLayerLoadingPolicy::~UDataLayerLoadingPolicy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataLayerLoadingPolicy, UDataLayerLoadingPolicy::StaticClass, TEXT("UDataLayerLoadingPolicy"), &Z_Registration_Info_UClass_UDataLayerLoadingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataLayerLoadingPolicy), 2819017563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_1445410855(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayerLoadingPolicy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
