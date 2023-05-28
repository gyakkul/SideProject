// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraParameterDefinitionsFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraParameterDefinitionsFactory() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsFactory();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraParameterDefinitionsFactory::StaticRegisterNativesUNiagaraParameterDefinitionsFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraParameterDefinitionsFactory);
	UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsFactory_NoRegister()
	{
		return UNiagaraParameterDefinitionsFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraParameterDefinitionsFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraParameterDefinitionsFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraParameterDefinitionsFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "NiagaraParameterDefinitionsFactory.h" },
		{ "ModuleRelativePath", "Public/NiagaraParameterDefinitionsFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraParameterDefinitionsFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraParameterDefinitionsFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraParameterDefinitionsFactory_Statics::ClassParams = {
		&UNiagaraParameterDefinitionsFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraParameterDefinitionsFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraParameterDefinitionsFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraParameterDefinitionsFactory()
	{
		if (!Z_Registration_Info_UClass_UNiagaraParameterDefinitionsFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraParameterDefinitionsFactory.OuterSingleton, Z_Construct_UClass_UNiagaraParameterDefinitionsFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraParameterDefinitionsFactory.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraParameterDefinitionsFactory>()
	{
		return UNiagaraParameterDefinitionsFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraParameterDefinitionsFactory);
	UNiagaraParameterDefinitionsFactory::~UNiagaraParameterDefinitionsFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitionsFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitionsFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraParameterDefinitionsFactory, UNiagaraParameterDefinitionsFactory::StaticClass, TEXT("UNiagaraParameterDefinitionsFactory"), &Z_Registration_Info_UClass_UNiagaraParameterDefinitionsFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraParameterDefinitionsFactory), 3017999352U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitionsFactory_h_1600270376(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitionsFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraParameterDefinitionsFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
