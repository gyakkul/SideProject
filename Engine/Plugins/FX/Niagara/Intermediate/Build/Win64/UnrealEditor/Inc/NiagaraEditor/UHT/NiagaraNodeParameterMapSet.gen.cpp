// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraNodeParameterMapSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeParameterMapSet() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeParameterMapBase();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeParameterMapSet();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeParameterMapSet_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraNodeParameterMapSet::StaticRegisterNativesUNiagaraNodeParameterMapSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeParameterMapSet);
	UClass* Z_Construct_UClass_UNiagaraNodeParameterMapSet_NoRegister()
	{
		return UNiagaraNodeParameterMapSet::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeParameterMapSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeParameterMapSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNodeParameterMapBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeParameterMapSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A node that allows a user to set multiple values into a parameter map. */" },
		{ "IncludePath", "NiagaraNodeParameterMapSet.h" },
		{ "ModuleRelativePath", "Private/NiagaraNodeParameterMapSet.h" },
		{ "ToolTip", "A node that allows a user to set multiple values into a parameter map." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeParameterMapSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeParameterMapSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeParameterMapSet_Statics::ClassParams = {
		&UNiagaraNodeParameterMapSet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeParameterMapSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeParameterMapSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeParameterMapSet()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeParameterMapSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeParameterMapSet.OuterSingleton, Z_Construct_UClass_UNiagaraNodeParameterMapSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeParameterMapSet.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeParameterMapSet>()
	{
		return UNiagaraNodeParameterMapSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeParameterMapSet);
	UNiagaraNodeParameterMapSet::~UNiagaraNodeParameterMapSet() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeParameterMapSet, UNiagaraNodeParameterMapSet::StaticClass, TEXT("UNiagaraNodeParameterMapSet"), &Z_Registration_Info_UClass_UNiagaraNodeParameterMapSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeParameterMapSet), 1941644335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapSet_h_2286187701(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
