// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraScriptSourceBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScriptSourceBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScriptSourceBase();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScriptSourceBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraScriptSourceBase::StaticRegisterNativesUNiagaraScriptSourceBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraScriptSourceBase);
	UClass* Z_Construct_UClass_UNiagaraScriptSourceBase_NoRegister()
	{
		return UNiagaraScriptSourceBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraScriptSourceBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraScriptSourceBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScriptSourceBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Runtime data for a Niagara system */" },
		{ "IncludePath", "NiagaraScriptSourceBase.h" },
		{ "ModuleRelativePath", "Classes/NiagaraScriptSourceBase.h" },
		{ "ToolTip", "Runtime data for a Niagara system" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraScriptSourceBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraScriptSourceBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraScriptSourceBase_Statics::ClassParams = {
		&UNiagaraScriptSourceBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraScriptSourceBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScriptSourceBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraScriptSourceBase()
	{
		if (!Z_Registration_Info_UClass_UNiagaraScriptSourceBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraScriptSourceBase.OuterSingleton, Z_Construct_UClass_UNiagaraScriptSourceBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraScriptSourceBase.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraScriptSourceBase>()
	{
		return UNiagaraScriptSourceBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraScriptSourceBase);
	UNiagaraScriptSourceBase::~UNiagaraScriptSourceBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptSourceBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptSourceBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraScriptSourceBase, UNiagaraScriptSourceBase::StaticClass, TEXT("UNiagaraScriptSourceBase"), &Z_Registration_Info_UClass_UNiagaraScriptSourceBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraScriptSourceBase), 129712031U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptSourceBase_h_3875323535(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptSourceBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScriptSourceBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
