// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_PoseHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_PoseHandler() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseHandler();
	ENGINE_API UClass* Z_Construct_UClass_UPoseAsset_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_PoseHandler>() == std::is_polymorphic<FAnimNode_AssetPlayerBase>(), "USTRUCT FAnimNode_PoseHandler cannot be polymorphic unless super FAnimNode_AssetPlayerBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_PoseHandler;
class UScriptStruct* FAnimNode_PoseHandler::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseHandler.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_PoseHandler.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseHandler, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_PoseHandler"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_PoseHandler.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_PoseHandler>()
{
	return FAnimNode_PoseHandler::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_PoseHandler_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PoseAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseHandler_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "// Evaluates a point in an anim sequence, using a specific time input rather than advancing time internally.\n// Typically the playback position of the animation for this node will represent something other than time, like jump height.\n// This node will not trigger any notifies present in the associated sequence.\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseHandler.h" },
		{ "ToolTip", "Evaluates a point in an anim sequence, using a specific time input rather than advancing time internally.\nTypically the playback position of the animation for this node will represent something other than time, like jump height.\nThis node will not trigger any notifies present in the associated sequence." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_PoseHandler_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PoseHandler>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseHandler_Statics::NewProp_PoseAsset_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The animation sequence asset to evaluate\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseHandler.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The animation sequence asset to evaluate" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseHandler_Statics::NewProp_PoseAsset = { "PoseAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_PoseHandler, PoseAsset), Z_Construct_UClass_UPoseAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseHandler_Statics::NewProp_PoseAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseHandler_Statics::NewProp_PoseAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_PoseHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseHandler_Statics::NewProp_PoseAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_PoseHandler_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase,
		&NewStructOps,
		"AnimNode_PoseHandler",
		sizeof(FAnimNode_PoseHandler),
		alignof(FAnimNode_PoseHandler),
		Z_Construct_UScriptStruct_FAnimNode_PoseHandler_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseHandler_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseHandler_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseHandler_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseHandler()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseHandler.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_PoseHandler.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_PoseHandler_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_PoseHandler.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseHandler_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseHandler_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_PoseHandler::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_PoseHandler_Statics::NewStructOps, TEXT("AnimNode_PoseHandler"), &Z_Registration_Info_UScriptStruct_AnimNode_PoseHandler, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_PoseHandler), 874796395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseHandler_h_76404169(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseHandler_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseHandler_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
