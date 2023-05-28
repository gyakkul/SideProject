// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraNodeWithDynamicPins.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeWithDynamicPins() {}
// Cross Module References
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNode();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeWithDynamicPins();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeWithDynamicPins_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraNodeWithDynamicPins::StaticRegisterNativesUNiagaraNodeWithDynamicPins()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeWithDynamicPins);
	UClass* Z_Construct_UClass_UNiagaraNodeWithDynamicPins_NoRegister()
	{
		return UNiagaraNodeWithDynamicPins::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeWithDynamicPins_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeWithDynamicPins_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNode,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeWithDynamicPins_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A base node for niagara nodes with pins which can be dynamically added and removed by the user. */" },
		{ "IncludePath", "NiagaraNodeWithDynamicPins.h" },
		{ "ModuleRelativePath", "Public/NiagaraNodeWithDynamicPins.h" },
		{ "ToolTip", "A base node for niagara nodes with pins which can be dynamically added and removed by the user." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeWithDynamicPins_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeWithDynamicPins>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeWithDynamicPins_Statics::ClassParams = {
		&UNiagaraNodeWithDynamicPins::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeWithDynamicPins_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeWithDynamicPins_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeWithDynamicPins()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeWithDynamicPins.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeWithDynamicPins.OuterSingleton, Z_Construct_UClass_UNiagaraNodeWithDynamicPins_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeWithDynamicPins.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeWithDynamicPins>()
	{
		return UNiagaraNodeWithDynamicPins::StaticClass();
	}
	UNiagaraNodeWithDynamicPins::UNiagaraNodeWithDynamicPins(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeWithDynamicPins);
	UNiagaraNodeWithDynamicPins::~UNiagaraNodeWithDynamicPins() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeWithDynamicPins_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeWithDynamicPins_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeWithDynamicPins, UNiagaraNodeWithDynamicPins::StaticClass, TEXT("UNiagaraNodeWithDynamicPins"), &Z_Registration_Info_UClass_UNiagaraNodeWithDynamicPins, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeWithDynamicPins), 3468708213U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeWithDynamicPins_h_2732013679(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeWithDynamicPins_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeWithDynamicPins_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
