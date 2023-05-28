// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNode_LinkedInputPose.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LinkedInputPose() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_LinkedInputPose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_LinkedInputPose cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_LinkedInputPose;
class UScriptStruct* FAnimNode_LinkedInputPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LinkedInputPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_LinkedInputPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_LinkedInputPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LinkedInputPose.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_LinkedInputPose>()
{
	return FAnimNode_LinkedInputPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Graph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedInputPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LinkedInputPose>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Inputs" },
		{ "Comment", "/** The name of this linked input pose node's pose, used to identify the input of this graph. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedInputPose.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "The name of this linked input pose node's pose, used to identify the input of this graph." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LinkedInputPose, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Graph_MetaData[] = {
		{ "Comment", "/** The graph that this linked input pose node is in, filled in by the compiler */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedInputPose.h" },
		{ "ToolTip", "The graph that this linked input pose node is in, filled in by the compiler" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LinkedInputPose, Graph), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Graph_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Graph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_InputPose_MetaData[] = {
		{ "Comment", "/** Input pose, optionally linked dynamically to another graph */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_LinkedInputPose.h" },
		{ "ToolTip", "Input pose, optionally linked dynamically to another graph" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_InputPose = { "InputPose", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LinkedInputPose, InputPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_InputPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_InputPose_MetaData)) }; // 2393943538
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_Graph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewProp_InputPose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_LinkedInputPose",
		sizeof(FAnimNode_LinkedInputPose),
		alignof(FAnimNode_LinkedInputPose),
		Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_LinkedInputPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_LinkedInputPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_LinkedInputPose.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedInputPose_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedInputPose_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_LinkedInputPose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_LinkedInputPose_Statics::NewStructOps, TEXT("AnimNode_LinkedInputPose"), &Z_Registration_Info_UScriptStruct_AnimNode_LinkedInputPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_LinkedInputPose), 1191250412U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedInputPose_h_2139199283(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedInputPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_LinkedInputPose_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
