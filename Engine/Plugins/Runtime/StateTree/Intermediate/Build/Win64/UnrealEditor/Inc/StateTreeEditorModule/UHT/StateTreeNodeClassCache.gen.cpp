// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeNodeClassCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeNodeClassCache() {}
// Cross Module References
	STATETREEEDITORMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeNodeClassData();
	UPackage* Z_Construct_UPackage__Script_StateTreeEditorModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeNodeClassData;
class UScriptStruct* FStateTreeNodeClassData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeNodeClassData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeNodeClassData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeNodeClassData, (UObject*)Z_Construct_UPackage__Script_StateTreeEditorModule(), TEXT("StateTreeNodeClassData"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeNodeClassData.OuterSingleton;
}
template<> STATETREEEDITORMODULE_API UScriptStruct* StaticStruct<FStateTreeNodeClassData>()
{
	return FStateTreeNodeClassData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeNodeClassData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeNodeClassData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes a class or struct.\n * If the class or struct is from a package that is not yet loaded, the data will update on GetStruct/Class/Scripstruct()\n */" },
		{ "ModuleRelativePath", "Public/StateTreeNodeClassCache.h" },
		{ "ToolTip", "Describes a class or struct.\nIf the class or struct is from a package that is not yet loaded, the data will update on GetStruct/Class/Scripstruct()" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeNodeClassData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeNodeClassData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeNodeClassData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
		nullptr,
		&NewStructOps,
		"StateTreeNodeClassData",
		sizeof(FStateTreeNodeClassData),
		alignof(FStateTreeNodeClassData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeNodeClassData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeNodeClassData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeNodeClassData()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeNodeClassData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeNodeClassData.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeNodeClassData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeNodeClassData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeNodeClassCache_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeNodeClassCache_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeNodeClassData::StaticStruct, Z_Construct_UScriptStruct_FStateTreeNodeClassData_Statics::NewStructOps, TEXT("StateTreeNodeClassData"), &Z_Registration_Info_UScriptStruct_StateTreeNodeClassData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeNodeClassData), 3366778694U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeNodeClassCache_h_1745960306(TEXT("/Script/StateTreeEditorModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeNodeClassCache_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Public_StateTreeNodeClassCache_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
