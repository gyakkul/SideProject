// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeAnyEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeAnyEnum() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeAnyEnum();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeAnyEnum;
class UScriptStruct* FStateTreeAnyEnum::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeAnyEnum.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeAnyEnum.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeAnyEnum, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeAnyEnum"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeAnyEnum.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeAnyEnum>()
{
	return FStateTreeAnyEnum::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Enum;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Enum that can be any type in the UI. Helper class to deal with any enum in property binding.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeAnyEnum.h" },
		{ "ToolTip", "Enum that can be any type in the UI. Helper class to deal with any enum in property binding." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeAnyEnum>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Enum" },
		{ "Comment", "/** The enum integer value. */" },
		{ "ModuleRelativePath", "Public/StateTreeAnyEnum.h" },
		{ "ToolTip", "The enum integer value." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeAnyEnum, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::NewProp_Enum_MetaData[] = {
		{ "Category", "Enum" },
		{ "Comment", "/** The enum class associated with this enum. */" },
		{ "ModuleRelativePath", "Public/StateTreeAnyEnum.h" },
		{ "ToolTip", "The enum class associated with this enum." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeAnyEnum, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::NewProp_Enum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::NewProp_Enum_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::NewProp_Enum,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeAnyEnum",
		sizeof(FStateTreeAnyEnum),
		alignof(FStateTreeAnyEnum),
		Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeAnyEnum()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeAnyEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeAnyEnum.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeAnyEnum.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeAnyEnum_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeAnyEnum_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeAnyEnum::StaticStruct, Z_Construct_UScriptStruct_FStateTreeAnyEnum_Statics::NewStructOps, TEXT("StateTreeAnyEnum"), &Z_Registration_Info_UScriptStruct_StateTreeAnyEnum, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeAnyEnum), 700851845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeAnyEnum_h_3099837008(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeAnyEnum_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeAnyEnum_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
