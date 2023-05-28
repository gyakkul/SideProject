// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraScalabilityManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScalabilityManager() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEffectType_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScalabilityManager();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraScalabilityManager;
class UScriptStruct* FNiagaraScalabilityManager::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraScalabilityManager.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraScalabilityManager.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScalabilityManager, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraScalabilityManager"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraScalabilityManager.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraScalabilityManager>()
{
	return FNiagaraScalabilityManager::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EffectType;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ManagedComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagedComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ManagedComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraScalabilityManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraScalabilityManager>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_EffectType_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraScalabilityManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_EffectType = { "EffectType", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScalabilityManager, EffectType), Z_Construct_UClass_UNiagaraEffectType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_EffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_EffectType_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_ManagedComponents_Inner = { "ManagedComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_ManagedComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraScalabilityManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_ManagedComponents = { "ManagedComponents", nullptr, (EPropertyFlags)0x0014008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraScalabilityManager, ManagedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_ManagedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_ManagedComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_EffectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_ManagedComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewProp_ManagedComponents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraScalabilityManager",
		sizeof(FNiagaraScalabilityManager),
		alignof(FNiagaraScalabilityManager),
		Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScalabilityManager()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraScalabilityManager.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraScalabilityManager.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraScalabilityManager.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScalabilityManager_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScalabilityManager_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraScalabilityManager::StaticStruct, Z_Construct_UScriptStruct_FNiagaraScalabilityManager_Statics::NewStructOps, TEXT("NiagaraScalabilityManager"), &Z_Registration_Info_UScriptStruct_NiagaraScalabilityManager, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraScalabilityManager), 528016696U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScalabilityManager_h_1697303045(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScalabilityManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraScalabilityManager_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
