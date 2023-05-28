// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PoseSearch/AnimNode_PoseSearchHistoryCollector.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_PoseSearchHistoryCollector() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	POSESEARCH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector();
	UPackage* Z_Construct_UPackage__Script_PoseSearch();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_PoseSearchHistoryCollector>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_PoseSearchHistoryCollector cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector;
class UScriptStruct* FAnimNode_PoseSearchHistoryCollector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector, (UObject*)Z_Construct_UPackage__Script_PoseSearch(), TEXT("AnimNode_PoseSearchHistoryCollector"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector.OuterSingleton;
}
template<> POSESEARCH_API UScriptStruct* StaticStruct<FAnimNode_PoseSearchHistoryCollector>()
{
	return FAnimNode_PoseSearchHistoryCollector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PoseCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PoseDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRootMotion_MetaData[];
#endif
		static void NewProp_bUseRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRootMotion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_PoseSearchHistoryCollector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PoseSearchHistoryCollector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_PoseSearchHistoryCollector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_PoseSearchHistoryCollector, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_Source_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_PoseCount_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// The maximum amount of poses that can be stored\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_PoseSearchHistoryCollector.h" },
		{ "ToolTip", "The maximum amount of poses that can be stored" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_PoseCount = { "PoseCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_PoseSearchHistoryCollector, PoseCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_PoseCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_PoseCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_PoseDuration_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "// The time horizon for how long a pose will be stored in seconds\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_PoseSearchHistoryCollector.h" },
		{ "ToolTip", "The time horizon for how long a pose will be stored in seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_PoseDuration = { "PoseDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_PoseSearchHistoryCollector, PoseDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_PoseDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_PoseDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_bUseRootMotion_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// If this node should compute velocities using the playing animation root motion, or \n// the actual movement of the component in the world. While using root motion can \n// be more stable, not all input animations support it, and it may produce bad results \n// if the current movement in the world does not match closely the animation data.\n" },
		{ "ModuleRelativePath", "Public/PoseSearch/AnimNode_PoseSearchHistoryCollector.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "If this node should compute velocities using the playing animation root motion, or\nthe actual movement of the component in the world. While using root motion can\nbe more stable, not all input animations support it, and it may produce bad results\nif the current movement in the world does not match closely the animation data." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_bUseRootMotion_SetBit(void* Obj)
	{
		((FAnimNode_PoseSearchHistoryCollector*)Obj)->bUseRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_bUseRootMotion = { "bUseRootMotion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_PoseSearchHistoryCollector), &Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_bUseRootMotion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_bUseRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_bUseRootMotion_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_PoseCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_PoseDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewProp_bUseRootMotion,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PoseSearch,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_PoseSearchHistoryCollector",
		sizeof(FAnimNode_PoseSearchHistoryCollector),
		alignof(FAnimNode_PoseSearchHistoryCollector),
		Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_PoseSearchHistoryCollector_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_PoseSearchHistoryCollector_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_PoseSearchHistoryCollector::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Statics::NewStructOps, TEXT("AnimNode_PoseSearchHistoryCollector"), &Z_Registration_Info_UScriptStruct_AnimNode_PoseSearchHistoryCollector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_PoseSearchHistoryCollector), 1852257079U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_PoseSearchHistoryCollector_h_949619798(TEXT("/Script/PoseSearch"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_PoseSearchHistoryCollector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_PoseSearch_Source_Runtime_Public_PoseSearch_AnimNode_PoseSearchHistoryCollector_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
