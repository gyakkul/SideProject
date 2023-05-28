// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_AimOffsetLookAt.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AimOffsetLookAt() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_AimOffsetLookAt>() == std::is_polymorphic<FAnimNode_BlendSpacePlayer>(), "USTRUCT FAnimNode_AimOffsetLookAt cannot be polymorphic unless super FAnimNode_BlendSpacePlayer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_AimOffsetLookAt;
class UScriptStruct* FAnimNode_AimOffsetLookAt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_AimOffsetLookAt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_AimOffsetLookAt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_AimOffsetLookAt"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_AimOffsetLookAt.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_AimOffsetLookAt>()
{
	return FAnimNode_AimOffsetLookAt::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BasePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SourceSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PivotSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PivotSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SocketAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * This node uses a source transform of a socket on the skeletal mesh to automatically calculate\n * Yaw and Pitch directions for a referenced aim offset given a point in the world to look at.\n */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
		{ "ToolTip", "This node uses a source transform of a socket on the skeletal mesh to automatically calculate\nYaw and Pitch directions for a referenced aim offset given a point in the world to look at." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AimOffsetLookAt>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_BasePose_MetaData[] = {
		{ "Category", "Links" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_BasePose = { "BasePose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, BasePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_BasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_BasePose_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/*\n\x09* Max LOD that this node is allowed to run\n\x09* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n\x09* when the component LOD becomes 3, it will stop update/evaluate\n\x09* currently transition would be issue and that has to be re-visited\n\x09*/" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LODThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SourceSocketName_MetaData[] = {
		{ "Category", "LookAt" },
		{ "Comment", "/** Socket or bone to treat as the look at source. This will then be pointed at LookAtLocation */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Socket or bone to treat as the look at source. This will then be pointed at LookAtLocation" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SourceSocketName = { "SourceSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, SourceSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SourceSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SourceSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_PivotSocketName_MetaData[] = {
		{ "Category", "LookAt" },
		{ "Comment", "/** \n\x09 * Socket or bone to treat as the look at pivot (optional). This will overwrite the translation of the \n\x09 * source socket transform improve the lookat direction, especially when the target is close \n\x09 * to the character \n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Socket or bone to treat as the look at pivot (optional). This will overwrite the translation of the\nsource socket transform improve the lookat direction, especially when the target is close\nto the character" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_PivotSocketName = { "PivotSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, PivotSocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_PivotSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_PivotSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LookAtLocation_MetaData[] = {
		{ "Category", "LookAt" },
		{ "Comment", "/** Location, in world space to look at */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Location, in world space to look at" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LookAtLocation = { "LookAtLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, LookAtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LookAtLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LookAtLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SocketAxis_MetaData[] = {
		{ "Category", "LookAt" },
		{ "Comment", "/** Direction in the socket transform to consider the 'forward' or look at axis */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Direction in the socket transform to consider the 'forward' or look at axis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SocketAxis = { "SocketAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, SocketAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SocketAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SocketAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "LookAt" },
		{ "Comment", "/** Amount of this node to blend into the output pose */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_AimOffsetLookAt.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Amount of this node to blend into the output pose" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AimOffsetLookAt, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_Alpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_BasePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LODThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SourceSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_PivotSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_LookAtLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_SocketAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewProp_Alpha,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayer,
		&NewStructOps,
		"AnimNode_AimOffsetLookAt",
		sizeof(FAnimNode_AimOffsetLookAt),
		alignof(FAnimNode_AimOffsetLookAt),
		Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_AimOffsetLookAt.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_AimOffsetLookAt.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_AimOffsetLookAt.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_AimOffsetLookAt_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_AimOffsetLookAt_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_AimOffsetLookAt::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_AimOffsetLookAt_Statics::NewStructOps, TEXT("AnimNode_AimOffsetLookAt"), &Z_Registration_Info_UScriptStruct_AnimNode_AimOffsetLookAt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_AimOffsetLookAt), 2616417244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_AimOffsetLookAt_h_1749895760(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_AimOffsetLookAt_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_AimOffsetLookAt_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
