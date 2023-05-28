// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraEffectTypeFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEffectTypeFactoryNew() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraEffectTypeFactoryNew();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraEffectTypeFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraEffectTypeFactoryNew::StaticRegisterNativesUNiagaraEffectTypeFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraEffectTypeFactoryNew);
	UClass* Z_Construct_UClass_UNiagaraEffectTypeFactoryNew_NoRegister()
	{
		return UNiagaraEffectTypeFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraEffectTypeFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraEffectTypeFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEffectTypeFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "NiagaraEffectTypeFactoryNew.h" },
		{ "ModuleRelativePath", "Public/NiagaraEffectTypeFactoryNew.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraEffectTypeFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraEffectTypeFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraEffectTypeFactoryNew_Statics::ClassParams = {
		&UNiagaraEffectTypeFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraEffectTypeFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEffectTypeFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraEffectTypeFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UNiagaraEffectTypeFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraEffectTypeFactoryNew.OuterSingleton, Z_Construct_UClass_UNiagaraEffectTypeFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraEffectTypeFactoryNew.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraEffectTypeFactoryNew>()
	{
		return UNiagaraEffectTypeFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraEffectTypeFactoryNew);
	UNiagaraEffectTypeFactoryNew::~UNiagaraEffectTypeFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEffectTypeFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEffectTypeFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraEffectTypeFactoryNew, UNiagaraEffectTypeFactoryNew::StaticClass, TEXT("UNiagaraEffectTypeFactoryNew"), &Z_Registration_Info_UClass_UNiagaraEffectTypeFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraEffectTypeFactoryNew), 4130275760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEffectTypeFactoryNew_h_2255593598(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEffectTypeFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEffectTypeFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
