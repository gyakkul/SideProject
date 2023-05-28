// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraValidationRuleSetFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraValidationRuleSetFactoryNew() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRuleSetFactoryNew();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraValidationRuleSetFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraValidationRuleSetFactoryNew::StaticRegisterNativesUNiagaraValidationRuleSetFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraValidationRuleSetFactoryNew);
	UClass* Z_Construct_UClass_UNiagaraValidationRuleSetFactoryNew_NoRegister()
	{
		return UNiagaraValidationRuleSetFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraValidationRuleSetFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraValidationRuleSetFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraValidationRuleSetFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "NiagaraValidationRuleSetFactoryNew.h" },
		{ "ModuleRelativePath", "Private/NiagaraValidationRuleSetFactoryNew.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraValidationRuleSetFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraValidationRuleSetFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraValidationRuleSetFactoryNew_Statics::ClassParams = {
		&UNiagaraValidationRuleSetFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraValidationRuleSetFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraValidationRuleSetFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraValidationRuleSetFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UNiagaraValidationRuleSetFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraValidationRuleSetFactoryNew.OuterSingleton, Z_Construct_UClass_UNiagaraValidationRuleSetFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraValidationRuleSetFactoryNew.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraValidationRuleSetFactoryNew>()
	{
		return UNiagaraValidationRuleSetFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraValidationRuleSetFactoryNew);
	UNiagaraValidationRuleSetFactoryNew::~UNiagaraValidationRuleSetFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraValidationRuleSetFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraValidationRuleSetFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraValidationRuleSetFactoryNew, UNiagaraValidationRuleSetFactoryNew::StaticClass, TEXT("UNiagaraValidationRuleSetFactoryNew"), &Z_Registration_Info_UClass_UNiagaraValidationRuleSetFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraValidationRuleSetFactoryNew), 2322840130U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraValidationRuleSetFactoryNew_h_1476742447(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraValidationRuleSetFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraValidationRuleSetFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
