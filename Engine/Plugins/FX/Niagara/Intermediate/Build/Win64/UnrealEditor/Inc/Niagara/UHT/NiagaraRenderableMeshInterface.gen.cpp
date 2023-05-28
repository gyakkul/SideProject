// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraRenderableMeshInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraRenderableMeshInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRenderableMeshInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRenderableMeshInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraRenderableMeshInterface::StaticRegisterNativesUNiagaraRenderableMeshInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraRenderableMeshInterface);
	UClass* Z_Construct_UClass_UNiagaraRenderableMeshInterface_NoRegister()
	{
		return UNiagaraRenderableMeshInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraRenderableMeshInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraRenderableMeshInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraRenderableMeshInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraRenderableMeshInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraRenderableMeshInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INiagaraRenderableMeshInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraRenderableMeshInterface_Statics::ClassParams = {
		&UNiagaraRenderableMeshInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraRenderableMeshInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRenderableMeshInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraRenderableMeshInterface()
	{
		if (!Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface.OuterSingleton, Z_Construct_UClass_UNiagaraRenderableMeshInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraRenderableMeshInterface>()
	{
		return UNiagaraRenderableMeshInterface::StaticClass();
	}
	UNiagaraRenderableMeshInterface::UNiagaraRenderableMeshInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraRenderableMeshInterface);
	UNiagaraRenderableMeshInterface::~UNiagaraRenderableMeshInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraRenderableMeshInterface, UNiagaraRenderableMeshInterface::StaticClass, TEXT("UNiagaraRenderableMeshInterface"), &Z_Registration_Info_UClass_UNiagaraRenderableMeshInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraRenderableMeshInterface), 841067250U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_3343448111(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRenderableMeshInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
