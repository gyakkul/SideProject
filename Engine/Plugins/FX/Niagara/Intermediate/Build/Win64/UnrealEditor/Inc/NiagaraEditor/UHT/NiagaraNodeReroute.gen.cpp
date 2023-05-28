// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraNodeReroute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeReroute() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNode();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeReroute();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeReroute_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraNodeReroute::StaticRegisterNativesUNiagaraNodeReroute()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeReroute);
	UClass* Z_Construct_UClass_UNiagaraNodeReroute_NoRegister()
	{
		return UNiagaraNodeReroute::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeReroute_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeReroute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNode,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeReroute_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraNodeReroute.h" },
		{ "ModuleRelativePath", "Private/NiagaraNodeReroute.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeReroute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeReroute>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeReroute_Statics::ClassParams = {
		&UNiagaraNodeReroute::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeReroute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeReroute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeReroute()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeReroute.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeReroute.OuterSingleton, Z_Construct_UClass_UNiagaraNodeReroute_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeReroute.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeReroute>()
	{
		return UNiagaraNodeReroute::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeReroute);
	UNiagaraNodeReroute::~UNiagaraNodeReroute() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeReroute_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeReroute_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeReroute, UNiagaraNodeReroute::StaticClass, TEXT("UNiagaraNodeReroute"), &Z_Registration_Info_UClass_UNiagaraNodeReroute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeReroute), 2951203599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeReroute_h_2742399097(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeReroute_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeReroute_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
