// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StateTreeReference.h"
#include "PropertyBag.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeReference() {}
// Cross Module References
	STATETREEMODULE_API UClass* Z_Construct_UClass_UStateTree_NoRegister();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeReference();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
	UPackage* Z_Construct_UPackage__Script_StateTreeModule();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StateTreeReference;
class UScriptStruct* FStateTreeReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StateTreeReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StateTreeReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeReference, (UObject*)Z_Construct_UPackage__Script_StateTreeModule(), TEXT("StateTreeReference"));
	}
	return Z_Registration_Info_UScriptStruct_StateTreeReference.OuterSingleton;
}
template<> STATETREEMODULE_API UScriptStruct* StaticStruct<FStateTreeReference>()
{
	return FStateTreeReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStateTreeReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StateTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeReference_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Struct to hold reference to a StateTree asset along with values to parameterized it.\n */" },
		{ "ModuleRelativePath", "Public/StateTreeReference.h" },
		{ "ToolTip", "Struct to hold reference to a StateTree asset along with values to parameterized it." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStateTreeReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewProp_StateTree_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/StateTreeReference.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewProp_StateTree = { "StateTree", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeReference, StateTree), Z_Construct_UClass_UStateTree_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewProp_StateTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewProp_StateTree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "" },
		{ "FixedLayout", "" },
		{ "ModuleRelativePath", "Public/StateTreeReference.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStateTreeReference, Parameters), Z_Construct_UScriptStruct_FInstancedPropertyBag, METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewProp_Parameters_MetaData)) }; // 3551882691
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStateTreeReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewProp_StateTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewProp_Parameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStateTreeReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeModule,
		nullptr,
		&NewStructOps,
		"StateTreeReference",
		sizeof(FStateTreeReference),
		alignof(FStateTreeReference),
		Z_Construct_UScriptStruct_FStateTreeReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStateTreeReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStateTreeReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStateTreeReference()
	{
		if (!Z_Registration_Info_UScriptStruct_StateTreeReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StateTreeReference.InnerSingleton, Z_Construct_UScriptStruct_FStateTreeReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StateTreeReference.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeReference_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeReference_h_Statics::ScriptStructInfo[] = {
		{ FStateTreeReference::StaticStruct, Z_Construct_UScriptStruct_FStateTreeReference_Statics::NewStructOps, TEXT("StateTreeReference"), &Z_Registration_Info_UScriptStruct_StateTreeReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStateTreeReference), 323372279U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeReference_h_4182186414(TEXT("/Script/StateTreeModule"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeModule_Public_StateTreeReference_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
