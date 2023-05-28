// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_BlendListByBool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendListByBool() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListBase();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByBool();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_BlendListByBool>() == std::is_polymorphic<FAnimNode_BlendListBase>(), "USTRUCT FAnimNode_BlendListByBool cannot be polymorphic unless super FAnimNode_BlendListBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendListByBool;
class UScriptStruct* FAnimNode_BlendListByBool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendListByBool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendListByBool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendListByBool"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendListByBool.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendListByBool>()
{
	return FAnimNode_BlendListByBool::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActiveValue_MetaData[];
#endif
		static void NewProp_bActiveValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActiveValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// This node is effectively a 'branch', picking one of two input poses based on an input Boolean value\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByBool.h" },
		{ "ToolTip", "This node is effectively a 'branch', picking one of two input poses based on an input Boolean value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendListByBool>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewProp_bActiveValue_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "// Which input should be connected to the output?\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByBool.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Which input should be connected to the output?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewProp_bActiveValue_SetBit(void* Obj)
	{
		((FAnimNode_BlendListByBool*)Obj)->bActiveValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewProp_bActiveValue = { "bActiveValue", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_BlendListByBool), &Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewProp_bActiveValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewProp_bActiveValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewProp_bActiveValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewProp_bActiveValue,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_BlendListBase,
		&NewStructOps,
		"AnimNode_BlendListByBool",
		sizeof(FAnimNode_BlendListByBool),
		alignof(FAnimNode_BlendListByBool),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByBool()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendListByBool.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendListByBool.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_BlendListByBool.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByBool_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByBool_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_BlendListByBool::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendListByBool_Statics::NewStructOps, TEXT("AnimNode_BlendListByBool"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendListByBool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendListByBool), 516809813U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByBool_h_3614517634(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByBool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByBool_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
