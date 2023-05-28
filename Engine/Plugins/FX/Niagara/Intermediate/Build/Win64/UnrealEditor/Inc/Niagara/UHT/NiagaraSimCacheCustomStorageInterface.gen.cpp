// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraSimCacheCustomStorageInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSimCacheCustomStorageInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraSimCacheCustomStorageInterface::StaticRegisterNativesUNiagaraSimCacheCustomStorageInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSimCacheCustomStorageInterface);
	UClass* Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_NoRegister()
	{
		return UNiagaraSimCacheCustomStorageInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraSimCacheCustomStorageInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INiagaraSimCacheCustomStorageInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_Statics::ClassParams = {
		&UNiagaraSimCacheCustomStorageInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSimCacheCustomStorageInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSimCacheCustomStorageInterface.OuterSingleton, Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSimCacheCustomStorageInterface.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraSimCacheCustomStorageInterface>()
	{
		return UNiagaraSimCacheCustomStorageInterface::StaticClass();
	}
	UNiagaraSimCacheCustomStorageInterface::UNiagaraSimCacheCustomStorageInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSimCacheCustomStorageInterface);
	UNiagaraSimCacheCustomStorageInterface::~UNiagaraSimCacheCustomStorageInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCustomStorageInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCustomStorageInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraSimCacheCustomStorageInterface, UNiagaraSimCacheCustomStorageInterface::StaticClass, TEXT("UNiagaraSimCacheCustomStorageInterface"), &Z_Registration_Info_UClass_UNiagaraSimCacheCustomStorageInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSimCacheCustomStorageInterface), 2981400260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCustomStorageInterface_h_959397861(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCustomStorageInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraSimCacheCustomStorageInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
