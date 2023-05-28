// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreePropertyBindingCompiler.h"
#include "StateTreePropertyBindings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreePropertyBindingCompiler() {}
// Cross Module References
	STATETREEEDITORMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeBindableStructDesc();
	UPackage* Z_Construct_UPackage__Script_StateTreeEditorModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreePropertyBindingCompiler;
class UScriptStruct* FStateTreePropertyBindingCompiler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreePropertyBindingCompiler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreePropertyBindingCompiler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler, (UObject*)Z_Construct_UPackage__Script_StateTreeEditorModule(), TEXT("StateTreePropertyBindingCompiler"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreePropertyBindingCompiler.OuterSingleton;
}
template<> STATETREEEDITORMODULE_API UScriptStruct* StaticStruct<FStateTreePropertyBindingCompiler>()
{
	return FStateTreePropertyBindingCompiler::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceStructs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceStructs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceStructs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Helper class to compile editor representation of property bindings into runtime representation.\n * TODO: Better error reporting, something that can be shown in the UI.\n */" },
		{ "ModuleRelativePath", "Public/StateTreePropertyBindingCompiler.h" },
		{ "ToolTip", "Helper class to compile editor representation of property bindings into runtime representation.\nTODO: Better error reporting, something that can be shown in the UI." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreePropertyBindingCompiler>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler_Statics::NewProp_SourceStructs_Inner = { "SourceStructs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStateTreeBindableStructDesc, METADATA_PARAMS(nullptr, 0) }; // 2837895941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler_Statics::NewProp_SourceStructs_MetaData[] = {
		{ "ModuleRelativePath", "Public/StateTreePropertyBindingCompiler.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler_Statics::NewProp_SourceStructs = { "SourceStructs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreePropertyBindingCompiler, SourceStructs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler_Statics::NewProp_SourceStructs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler_Statics::NewProp_SourceStructs_MetaData)) }; // 2837895941
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler_Statics::NewProp_SourceStructs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler_Statics::NewProp_SourceStructs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
		nullptr,
		&NewStructOps,
		"StateTreePropertyBindingCompiler",
		sizeof(FStateTreePropertyBindingCompiler),
		alignof(FStateTreePropertyBindingCompiler),
		Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreePropertyBindingCompiler.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreePropertyBindingCompiler.InnerSingleton, Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreePropertyBindingCompiler.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreePropertyBindingCompiler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreePropertyBindingCompiler_h_Statics::ScriptStructInfo[] = {
		{ FStateTreePropertyBindingCompiler::StaticStruct, Z_Construct_UScriptStruct_FStateTreePropertyBindingCompiler_Statics::NewStructOps, TEXT("StateTreePropertyBindingCompiler"), &Z_Registration_Info_UScriptStruct_StateTreePropertyBindingCompiler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreePropertyBindingCompiler), 650792706U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreePropertyBindingCompiler_h_1122083733(TEXT("/Script/StateTreeEditorModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreePropertyBindingCompiler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreePropertyBindingCompiler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
