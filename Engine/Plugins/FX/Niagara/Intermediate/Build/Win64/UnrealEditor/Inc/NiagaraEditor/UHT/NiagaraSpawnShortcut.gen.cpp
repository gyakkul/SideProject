// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraSpawnShortcut.h"
#include "Framework/Commands/InputChord.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSpawnShortcut() {}
// Cross Module References
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSpawnShortcut();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraSpawnShortcut;
class UScriptStruct* FNiagaraSpawnShortcut::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraSpawnShortcut.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraSpawnShortcut.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSpawnShortcut, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraSpawnShortcut"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraSpawnShortcut.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraSpawnShortcut>()
{
	return FNiagaraSpawnShortcut::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraSpawnShortcut.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraSpawnShortcut>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Shortcut" },
		{ "ModuleRelativePath", "Public/NiagaraSpawnShortcut.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSpawnShortcut, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "Shortcut" },
		{ "ModuleRelativePath", "Public/NiagaraSpawnShortcut.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraSpawnShortcut, Input), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::NewProp_Input_MetaData)) }; // 2392822822
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::NewProp_Input,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraSpawnShortcut",
		sizeof(FNiagaraSpawnShortcut),
		alignof(FNiagaraSpawnShortcut),
		Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSpawnShortcut()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraSpawnShortcut.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraSpawnShortcut.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraSpawnShortcut.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSpawnShortcut_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSpawnShortcut_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraSpawnShortcut::StaticStruct, Z_Construct_UScriptStruct_FNiagaraSpawnShortcut_Statics::NewStructOps, TEXT("NiagaraSpawnShortcut"), &Z_Registration_Info_UScriptStruct_NiagaraSpawnShortcut, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraSpawnShortcut), 3052947975U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSpawnShortcut_h_1607388606(TEXT("/Script/NiagaraEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSpawnShortcut_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSpawnShortcut_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
