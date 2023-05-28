// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_PoseByName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_PoseByName() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseByName();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseHandler();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_PoseByName>() == std::is_polymorphic<FAnimNode_PoseHandler>(), "USTRUCT FAnimNode_PoseByName cannot be polymorphic unless super FAnimNode_PoseHandler is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_PoseByName;
class UScriptStruct* FAnimNode_PoseByName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseByName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_PoseByName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseByName, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_PoseByName"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_PoseByName.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_PoseByName>()
{
	return FAnimNode_PoseByName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PoseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PoseWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Evaluates a point in an anim sequence, using a specific time input rather than advancing time internally.\n// Typically the playback position of the animation for this node will represent something other than time, like jump height.\n// This node will not trigger any notifies present in the associated sequence.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseByName.h" },
		{ "ToolTip", "Evaluates a point in an anim sequence, using a specific time input rather than advancing time internally.\nTypically the playback position of the animation for this node will represent something other than time, like jump height.\nThis node will not trigger any notifies present in the associated sequence." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PoseByName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::NewProp_PoseName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseByName.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::NewProp_PoseName = { "PoseName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_PoseByName, PoseName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::NewProp_PoseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::NewProp_PoseName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::NewProp_PoseWeight_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseByName.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::NewProp_PoseWeight = { "PoseWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_PoseByName, PoseWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::NewProp_PoseWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::NewProp_PoseWeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::NewProp_PoseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::NewProp_PoseWeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_PoseHandler,
		&NewStructOps,
		"AnimNode_PoseByName",
		sizeof(FAnimNode_PoseByName),
		alignof(FAnimNode_PoseByName),
		Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseByName()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseByName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_PoseByName.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_PoseByName.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseByName_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseByName_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_PoseByName::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_PoseByName_Statics::NewStructOps, TEXT("AnimNode_PoseByName"), &Z_Registration_Info_UScriptStruct_AnimNode_PoseByName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_PoseByName), 210670036U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseByName_h_3159623278(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseByName_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseByName_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
