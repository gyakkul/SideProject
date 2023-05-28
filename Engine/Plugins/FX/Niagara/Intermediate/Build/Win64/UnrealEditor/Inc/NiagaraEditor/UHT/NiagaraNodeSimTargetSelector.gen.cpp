// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraNodeSimTargetSelector.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeSimTargetSelector() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeSimTargetSelector();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeSimTargetSelector_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeUsageSelector();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraNodeSimTargetSelector::StaticRegisterNativesUNiagaraNodeSimTargetSelector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeSimTargetSelector);
	UClass* Z_Construct_UClass_UNiagaraNodeSimTargetSelector_NoRegister()
	{
		return UNiagaraNodeSimTargetSelector::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeSimTargetSelector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeSimTargetSelector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNodeUsageSelector,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeSimTargetSelector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraNodeSimTargetSelector.h" },
		{ "ModuleRelativePath", "Private/NiagaraNodeSimTargetSelector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeSimTargetSelector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeSimTargetSelector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeSimTargetSelector_Statics::ClassParams = {
		&UNiagaraNodeSimTargetSelector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeSimTargetSelector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeSimTargetSelector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeSimTargetSelector()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeSimTargetSelector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeSimTargetSelector.OuterSingleton, Z_Construct_UClass_UNiagaraNodeSimTargetSelector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeSimTargetSelector.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeSimTargetSelector>()
	{
		return UNiagaraNodeSimTargetSelector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeSimTargetSelector);
	UNiagaraNodeSimTargetSelector::~UNiagaraNodeSimTargetSelector() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSimTargetSelector_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSimTargetSelector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeSimTargetSelector, UNiagaraNodeSimTargetSelector::StaticClass, TEXT("UNiagaraNodeSimTargetSelector"), &Z_Registration_Info_UClass_UNiagaraNodeSimTargetSelector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeSimTargetSelector), 59361494U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSimTargetSelector_h_2750824598(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSimTargetSelector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeSimTargetSelector_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
