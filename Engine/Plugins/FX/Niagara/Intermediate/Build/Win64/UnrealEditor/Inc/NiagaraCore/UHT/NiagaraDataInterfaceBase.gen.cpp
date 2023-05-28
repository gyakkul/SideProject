// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraDataInterfaceBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceBase() {}
// Cross Module References
	NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceBase();
	NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceBase_NoRegister();
	NIAGARACORE_API UClass* Z_Construct_UClass_UNiagaraMergeable();
	UPackage* Z_Construct_UPackage__Script_NiagaraCore();
// End Cross Module References
	void UNiagaraDataInterfaceBase::StaticRegisterNativesUNiagaraDataInterfaceBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceBase);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceBase_NoRegister()
	{
		return UNiagaraDataInterfaceBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraMergeable,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for all Niagara data interfaces. */" },
		{ "IncludePath", "NiagaraDataInterfaceBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraDataInterfaceBase.h" },
		{ "ToolTip", "Base class for all Niagara data interfaces." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::ClassParams = {
		&UNiagaraDataInterfaceBase::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceBase()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceBase.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceBase.OuterSingleton;
	}
	template<> NIAGARACORE_API UClass* StaticClass<UNiagaraDataInterfaceBase>()
	{
		return UNiagaraDataInterfaceBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceBase);
	UNiagaraDataInterfaceBase::~UNiagaraDataInterfaceBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceBase, UNiagaraDataInterfaceBase::StaticClass, TEXT("UNiagaraDataInterfaceBase"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceBase), 3076511010U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_1800131810(TEXT("/Script/NiagaraCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraCore_Public_NiagaraDataInterfaceBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
