// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNode_Root.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_Root() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Root();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_Root>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_Root cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_Root;
class UScriptStruct* FAnimNode_Root::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Root.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_Root.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Root, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_Root"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Root.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_Root>()
{
	return FAnimNode_Root::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_Root_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Group;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Root_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Root node of an animation tree (sink)\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Root.h" },
		{ "ToolTip", "Root node of an animation tree (sink)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Root>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Root.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Root, Result), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Result_MetaData)) }; // 2393943538
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Name_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Comment", "/** The name of this root node, used to identify the output of this graph. Filled in by the compiler, propagated from the parent graph. */" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Root.h" },
		{ "ToolTip", "The name of this root node, used to identify the output of this graph. Filled in by the compiler, propagated from the parent graph." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Root, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Group_MetaData[] = {
		{ "Comment", "/** The group of this root node, used to group this output with others when used in a layer. */" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_Root.h" },
		{ "ToolTip", "The group of this root node, used to group this output with others when used in a layer." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0020080800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Root, Group), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Group_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Root_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Result,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewProp_Group,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Root_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_Root",
		sizeof(FAnimNode_Root),
		alignof(FAnimNode_Root),
		Z_Construct_UScriptStruct_FAnimNode_Root_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Root_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Root_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Root_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Root()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_Root.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_Root.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_Root_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_Root.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Root_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Root_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_Root::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_Root_Statics::NewStructOps, TEXT("AnimNode_Root"), &Z_Registration_Info_UScriptStruct_AnimNode_Root, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_Root), 2949606254U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Root_h_1222506185(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Root_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_Root_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
