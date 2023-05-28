// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SlideChain() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SlideChain();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SlideChain_WorkData;
class UScriptStruct* FRigUnit_SlideChain_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SlideChain_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SlideChain_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SlideChain_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SlideChain_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SlideChain_WorkData>()
{
	return FRigUnit_SlideChain_WorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChainLength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemSegments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemSegments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemSegments;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedItems;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendedTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendedTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendedTransforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SlideChain_WorkData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_ChainLength_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_ChainLength = { "ChainLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SlideChain_WorkData, ChainLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_ChainLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_ChainLength_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_ItemSegments_Inner = { "ItemSegments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_ItemSegments_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_ItemSegments = { "ItemSegments", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SlideChain_WorkData, ItemSegments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_ItemSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_ItemSegments_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_CachedItems_Inner = { "CachedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(nullptr, 0) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_CachedItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_CachedItems = { "CachedItems", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SlideChain_WorkData, CachedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_CachedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_CachedItems_MetaData)) }; // 861402166
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_Transforms_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SlideChain_WorkData, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_BlendedTransforms_Inner = { "BlendedTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_BlendedTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_BlendedTransforms = { "BlendedTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SlideChain_WorkData, BlendedTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_BlendedTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_BlendedTransforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_ChainLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_ItemSegments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_ItemSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_CachedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_CachedItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_BlendedTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewProp_BlendedTransforms,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_SlideChain_WorkData",
		sizeof(FRigUnit_SlideChain_WorkData),
		alignof(FRigUnit_SlideChain_WorkData),
		Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SlideChain_WorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SlideChain_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SlideChain_WorkData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_SlideChain>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_SlideChain cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SlideChain;
class UScriptStruct* FRigUnit_SlideChain::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SlideChain.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SlideChain.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SlideChain, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SlideChain"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SlideChain_Execute;
		Arguments_FRigUnit_SlideChain_Execute.Emplace(TEXT("StartBone"), TEXT("FName"));
		Arguments_FRigUnit_SlideChain_Execute.Emplace(TEXT("EndBone"), TEXT("FName"));
		Arguments_FRigUnit_SlideChain_Execute.Emplace(TEXT("SlideAmount"), TEXT("float"));
		Arguments_FRigUnit_SlideChain_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_SlideChain_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_SlideChain_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SlideChain::Execute"), &FRigUnit_SlideChain::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SlideChain.OuterSingleton, Arguments_FRigUnit_SlideChain_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SlideChain.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SlideChain>()
{
	return FRigUnit_SlideChain::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EndBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlideAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlideAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Slides an existing chain along itself with control over extrapolation.\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Slide Chain" },
		{ "Keywords", "Fit,Refit" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "Slides an existing chain along itself with control over extrapolation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SlideChain>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_StartBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of the first bone to slide\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "The name of the first bone to slide" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_StartBone = { "StartBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SlideChain, StartBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_StartBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_StartBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_EndBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of the last bone to slide\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "The name of the last bone to slide" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_EndBone = { "EndBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SlideChain, EndBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_EndBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_EndBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_SlideAmount_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The amount of sliding. This unit is multiple of the chain length.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "The amount of sliding. This unit is multiple of the chain length." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_SlideAmount = { "SlideAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SlideChain, SlideAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_SlideAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_SlideAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_SlideChain*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SlideChain), &Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SlideChain, WorkData), Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_WorkData_MetaData)) }; // 3252705148
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_StartBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_EndBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_SlideAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_SlideChain",
		sizeof(FRigUnit_SlideChain),
		alignof(FRigUnit_SlideChain),
		Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SlideChain()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SlideChain.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SlideChain.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SlideChain.InnerSingleton;
	}

void FRigUnit_SlideChain::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SlideChain::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		StartBone,
		EndBone,
		SlideAmount,
		bPropagateToChildren,
		WorkData
	);
}


static_assert(std::is_polymorphic<FRigUnit_SlideChainPerItem>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_SlideChainPerItem cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SlideChainPerItem;
class UScriptStruct* FRigUnit_SlideChainPerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SlideChainPerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SlideChainPerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SlideChainPerItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SlideChainPerItem_Execute;
		Arguments_FRigUnit_SlideChainPerItem_Execute.Emplace(TEXT("Items"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_SlideChainPerItem_Execute.Emplace(TEXT("SlideAmount"), TEXT("float"));
		Arguments_FRigUnit_SlideChainPerItem_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_SlideChainPerItem_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_SlideChain_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SlideChainPerItem::Execute"), &FRigUnit_SlideChainPerItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SlideChainPerItem.OuterSingleton, Arguments_FRigUnit_SlideChainPerItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SlideChainPerItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SlideChainPerItem>()
{
	return FRigUnit_SlideChainPerItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlideAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlideAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Slides an existing chain along itself with control over extrapolation.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Slide Chain" },
		{ "Keywords", "Fit,Refit" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "Slides an existing chain along itself with control over extrapolation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SlideChainPerItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to slide\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "The items to slide" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SlideChainPerItem, Items), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_Items_MetaData)) }; // 2993270268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_SlideAmount_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The amount of sliding. This unit is multiple of the chain length.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "The amount of sliding. This unit is multiple of the chain length." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_SlideAmount = { "SlideAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SlideChainPerItem, SlideAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_SlideAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_SlideAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_SlideChainPerItem*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SlideChainPerItem), &Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SlideChainPerItem, WorkData), Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_WorkData_MetaData)) }; // 3252705148
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_SlideAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_SlideChainPerItem",
		sizeof(FRigUnit_SlideChainPerItem),
		alignof(FRigUnit_SlideChainPerItem),
		Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SlideChainPerItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SlideChainPerItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SlideChainPerItem.InnerSingleton;
	}

void FRigUnit_SlideChainPerItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SlideChainPerItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Items,
		SlideAmount,
		bPropagateToChildren,
		WorkData
	);
}


static_assert(std::is_polymorphic<FRigUnit_SlideChainItemArray>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_SlideChainItemArray cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SlideChainItemArray;
class UScriptStruct* FRigUnit_SlideChainItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SlideChainItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SlideChainItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SlideChainItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SlideChainItemArray_Execute;
		Arguments_FRigUnit_SlideChainItemArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_SlideChainItemArray_Execute.Emplace(TEXT("SlideAmount"), TEXT("float"));
		Arguments_FRigUnit_SlideChainItemArray_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_SlideChainItemArray_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_SlideChain_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SlideChainItemArray::Execute"), &FRigUnit_SlideChainItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SlideChainItemArray.OuterSingleton, Arguments_FRigUnit_SlideChainItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SlideChainItemArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SlideChainItemArray>()
{
	return FRigUnit_SlideChainItemArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlideAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlideAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Slides an existing chain along itself with control over extrapolation.\n */" },
		{ "DisplayName", "Slide Chain" },
		{ "Keywords", "Fit,Refit" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "Slides an existing chain along itself with control over extrapolation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SlideChainItemArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The items to slide\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "The items to slide" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SlideChainItemArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_Items_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_SlideAmount_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The amount of sliding. This unit is multiple of the chain length.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "The amount of sliding. This unit is multiple of the chain length." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_SlideAmount = { "SlideAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SlideChainItemArray, SlideAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_SlideAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_SlideAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_SlideChainItemArray*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SlideChainItemArray), &Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_SlideChain.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SlideChainItemArray, WorkData), Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_WorkData_MetaData)) }; // 3252705148
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_SlideAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_SlideChainItemArray",
		sizeof(FRigUnit_SlideChainItemArray),
		alignof(FRigUnit_SlideChainItemArray),
		Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SlideChainItemArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SlideChainItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SlideChainItemArray.InnerSingleton;
	}

void FRigUnit_SlideChainItemArray::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SlideChainItemArray::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		SlideAmount,
		bPropagateToChildren,
		WorkData
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SlideChain_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SlideChain_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_SlideChain_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SlideChain_WorkData_Statics::NewStructOps, TEXT("RigUnit_SlideChain_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_SlideChain_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SlideChain_WorkData), 3252705148U) },
		{ FRigUnit_SlideChain::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SlideChain_Statics::NewStructOps, TEXT("RigUnit_SlideChain"), &Z_Registration_Info_UScriptStruct_RigUnit_SlideChain, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SlideChain), 407403994U) },
		{ FRigUnit_SlideChainPerItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SlideChainPerItem_Statics::NewStructOps, TEXT("RigUnit_SlideChainPerItem"), &Z_Registration_Info_UScriptStruct_RigUnit_SlideChainPerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SlideChainPerItem), 235172893U) },
		{ FRigUnit_SlideChainItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SlideChainItemArray_Statics::NewStructOps, TEXT("RigUnit_SlideChainItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_SlideChainItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SlideChainItemArray), 3652857075U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SlideChain_h_859248528(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SlideChain_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_SlideChain_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
