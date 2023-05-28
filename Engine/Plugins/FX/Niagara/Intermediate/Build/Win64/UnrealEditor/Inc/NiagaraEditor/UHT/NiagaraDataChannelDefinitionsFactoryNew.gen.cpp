// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraDataChannelDefinitionsFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataChannelDefinitionsFactoryNew() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraDataChannelDefinitionsFactoryNew();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraDataChannelDefinitionsFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraDataChannelDefinitionsFactoryNew::StaticRegisterNativesUNiagaraDataChannelDefinitionsFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannelDefinitionsFactoryNew);
	UClass* Z_Construct_UClass_UNiagaraDataChannelDefinitionsFactoryNew_NoRegister()
	{
		return UNiagaraDataChannelDefinitionsFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataChannelDefinitionsFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataChannelDefinitionsFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelDefinitionsFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "NiagaraDataChannelDefinitionsFactoryNew.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataChannelDefinitionsFactoryNew.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataChannelDefinitionsFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannelDefinitionsFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannelDefinitionsFactoryNew_Statics::ClassParams = {
		&UNiagaraDataChannelDefinitionsFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannelDefinitionsFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelDefinitionsFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataChannelDefinitionsFactoryNew()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataChannelDefinitionsFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannelDefinitionsFactoryNew.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannelDefinitionsFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataChannelDefinitionsFactoryNew.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraDataChannelDefinitionsFactoryNew>()
	{
		return UNiagaraDataChannelDefinitionsFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannelDefinitionsFactoryNew);
	UNiagaraDataChannelDefinitionsFactoryNew::~UNiagaraDataChannelDefinitionsFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraDataChannelDefinitionsFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraDataChannelDefinitionsFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataChannelDefinitionsFactoryNew, UNiagaraDataChannelDefinitionsFactoryNew::StaticClass, TEXT("UNiagaraDataChannelDefinitionsFactoryNew"), &Z_Registration_Info_UClass_UNiagaraDataChannelDefinitionsFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannelDefinitionsFactoryNew), 1429799242U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraDataChannelDefinitionsFactoryNew_h_1591065554(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraDataChannelDefinitionsFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraDataChannelDefinitionsFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
