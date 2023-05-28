// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraNodeParameterMapBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeParameterMapBase() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeParameterMapBase();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeParameterMapBase_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeWithDynamicPins();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraNodeParameterMapBase::StaticRegisterNativesUNiagaraNodeParameterMapBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeParameterMapBase);
	UClass* Z_Construct_UClass_UNiagaraNodeParameterMapBase_NoRegister()
	{
		return UNiagaraNodeParameterMapBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeParameterMapBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeParameterMapBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNodeWithDynamicPins,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeParameterMapBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base node for parameter maps. */" },
		{ "IncludePath", "NiagaraNodeParameterMapBase.h" },
		{ "ModuleRelativePath", "Private/NiagaraNodeParameterMapBase.h" },
		{ "ToolTip", "Base node for parameter maps." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeParameterMapBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeParameterMapBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeParameterMapBase_Statics::ClassParams = {
		&UNiagaraNodeParameterMapBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeParameterMapBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeParameterMapBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeParameterMapBase()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeParameterMapBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeParameterMapBase.OuterSingleton, Z_Construct_UClass_UNiagaraNodeParameterMapBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeParameterMapBase.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeParameterMapBase>()
	{
		return UNiagaraNodeParameterMapBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeParameterMapBase);
	UNiagaraNodeParameterMapBase::~UNiagaraNodeParameterMapBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeParameterMapBase, UNiagaraNodeParameterMapBase::StaticClass, TEXT("UNiagaraNodeParameterMapBase"), &Z_Registration_Info_UClass_UNiagaraNodeParameterMapBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeParameterMapBase), 4145630241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapBase_h_2803366952(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Private_NiagaraNodeParameterMapBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
