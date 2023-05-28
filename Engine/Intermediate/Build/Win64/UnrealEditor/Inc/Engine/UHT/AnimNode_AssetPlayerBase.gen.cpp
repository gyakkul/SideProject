// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNode_AssetPlayerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AssetPlayerBase() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimSyncGroupScope();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_AssetPlayerBase>() == std::is_polymorphic<FAnimNode_AssetPlayerRelevancyBase>(), "USTRUCT FAnimNode_AssetPlayerBase cannot be polymorphic unless super FAnimNode_AssetPlayerRelevancyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerBase;
class UScriptStruct* FAnimNode_AssetPlayerBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_AssetPlayerBase"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_AssetPlayerBase>()
{
	return FAnimNode_AssetPlayerBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GroupScope_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupScope_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GroupScope;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalTimeAccumulator_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InternalTimeAccumulator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/* Base class for any asset playing anim node */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
		{ "ToolTip", "Base class for any asset playing anim node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AssetPlayerBase>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AssetPlayerBase, GroupIndex_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupScope_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupScope_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupScope = { "GroupScope", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AssetPlayerBase, GroupScope_DEPRECATED), Z_Construct_UEnum_Engine_EAnimSyncGroupScope, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupScope_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupScope_MetaData)) }; // 1193155952
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "Category", "DoNotEdit" },
		{ "Comment", "/** Last encountered blendweight for this node */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
		{ "ToolTip", "Last encountered blendweight for this node" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0020080000002004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AssetPlayerBase, BlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_BlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_BlendWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_InternalTimeAccumulator_MetaData[] = {
		{ "Category", "DoNotEdit" },
		{ "Comment", "/** Accumulated time used to reference the asset in this node */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNode_AssetPlayerBase.h" },
		{ "ToolTip", "Accumulated time used to reference the asset in this node" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_InternalTimeAccumulator = { "InternalTimeAccumulator", nullptr, (EPropertyFlags)0x0020080000002004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AssetPlayerBase, InternalTimeAccumulator), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_InternalTimeAccumulator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_InternalTimeAccumulator_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupScope_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_GroupScope,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_BlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewProp_InternalTimeAccumulator,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimNode_AssetPlayerRelevancyBase,
		&NewStructOps,
		"AnimNode_AssetPlayerBase",
		sizeof(FAnimNode_AssetPlayerBase),
		alignof(FAnimNode_AssetPlayerBase),
		Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerBase.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerBase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_AssetPlayerBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_AssetPlayerBase_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_AssetPlayerBase::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_AssetPlayerBase_Statics::NewStructOps, TEXT("AnimNode_AssetPlayerBase"), &Z_Registration_Info_UScriptStruct_AnimNode_AssetPlayerBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_AssetPlayerBase), 2823400712U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_AssetPlayerBase_h_3859378878(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_AssetPlayerBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNode_AssetPlayerBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
