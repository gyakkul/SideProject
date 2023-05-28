// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraEmitterFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEmitterFactoryNew() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraEmitterFactoryNew();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraEmitterFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraEmitterFactoryNew::StaticRegisterNativesUNiagaraEmitterFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraEmitterFactoryNew);
	UClass* Z_Construct_UClass_UNiagaraEmitterFactoryNew_NoRegister()
	{
		return UNiagaraEmitterFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraEmitterFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraEmitterFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEmitterFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A factory for niagara emitter assets. */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "NiagaraEmitterFactoryNew.h" },
		{ "ModuleRelativePath", "Public/NiagaraEmitterFactoryNew.h" },
		{ "ToolTip", "A factory for niagara emitter assets." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraEmitterFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraEmitterFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraEmitterFactoryNew_Statics::ClassParams = {
		&UNiagaraEmitterFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraEmitterFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEmitterFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraEmitterFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UNiagaraEmitterFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraEmitterFactoryNew.OuterSingleton, Z_Construct_UClass_UNiagaraEmitterFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraEmitterFactoryNew.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraEmitterFactoryNew>()
	{
		return UNiagaraEmitterFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraEmitterFactoryNew);
	UNiagaraEmitterFactoryNew::~UNiagaraEmitterFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraEmitterFactoryNew, UNiagaraEmitterFactoryNew::StaticClass, TEXT("UNiagaraEmitterFactoryNew"), &Z_Registration_Info_UClass_UNiagaraEmitterFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraEmitterFactoryNew), 3621224079U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterFactoryNew_h_3373832481(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraEmitterFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
