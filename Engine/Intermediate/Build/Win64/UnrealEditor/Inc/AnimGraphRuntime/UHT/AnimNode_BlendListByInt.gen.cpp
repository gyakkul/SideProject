// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_BlendListByInt.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BlendListByInt() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListBase();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByInt();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_BlendListByInt>() == std::is_polymorphic<FAnimNode_BlendListBase>(), "USTRUCT FAnimNode_BlendListByInt cannot be polymorphic unless super FAnimNode_BlendListBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BlendListByInt;
class UScriptStruct* FAnimNode_BlendListByInt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendListByInt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BlendListByInt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByInt, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BlendListByInt"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BlendListByInt.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BlendListByInt>()
{
	return FAnimNode_BlendListByInt::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveChildIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveChildIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Blend list node; has many children\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByInt.h" },
		{ "ToolTip", "Blend list node; has many children" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BlendListByInt>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::NewProp_ActiveChildIndex_MetaData[] = {
		{ "Category", "Runtime" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_BlendListByInt.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::NewProp_ActiveChildIndex = { "ActiveChildIndex", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BlendListByInt, ActiveChildIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::NewProp_ActiveChildIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::NewProp_ActiveChildIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::NewProp_ActiveChildIndex,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_BlendListBase,
		&NewStructOps,
		"AnimNode_BlendListByInt",
		sizeof(FAnimNode_BlendListByInt),
		alignof(FAnimNode_BlendListByInt),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendListByInt()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_BlendListByInt.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BlendListByInt.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_BlendListByInt.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByInt_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByInt_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_BlendListByInt::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BlendListByInt_Statics::NewStructOps, TEXT("AnimNode_BlendListByInt"), &Z_Registration_Info_UScriptStruct_AnimNode_BlendListByInt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BlendListByInt), 2370193329U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByInt_h_3323258451(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByInt_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_BlendListByInt_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
