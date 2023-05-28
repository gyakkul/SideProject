// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Hierarchy/RigUnit_PropagateTransform.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_PropagateTransform() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PropagateTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_PropagateTransform>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_PropagateTransform cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PropagateTransform;
class UScriptStruct* FRigUnit_PropagateTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PropagateTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PropagateTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PropagateTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PropagateTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PropagateTransform_Execute;
		Arguments_FRigUnit_PropagateTransform_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_PropagateTransform_Execute.Emplace(TEXT("bRecomputeGlobal"), TEXT("bool"));
		Arguments_FRigUnit_PropagateTransform_Execute.Emplace(TEXT("bApplyToChildren"), TEXT("bool"));
		Arguments_FRigUnit_PropagateTransform_Execute.Emplace(TEXT("bRecursive"), TEXT("bool"));
		Arguments_FRigUnit_PropagateTransform_Execute.Emplace(TEXT("CachedIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PropagateTransform::Execute"), &FRigUnit_PropagateTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PropagateTransform.OuterSingleton, Arguments_FRigUnit_PropagateTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PropagateTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PropagateTransform>()
{
	return FRigUnit_PropagateTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecomputeGlobal_MetaData[];
#endif
		static void NewProp_bRecomputeGlobal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecomputeGlobal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyToChildren_MetaData[];
#endif
		static void NewProp_bApplyToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyToChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecursive_MetaData[];
#endif
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Propagate Transform can be used to force a recalculation of a bone's global transform\n * from its local - as well as propagating that change onto the children.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Propagate Transform" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "PropagateToChildren,RecomputeGlobal,RecalculateGlobal" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_PropagateTransform.h" },
		{ "ToolTip", "Propagate Transform can be used to force a recalculation of a bone's global transform\nfrom its local - as well as propagating that change onto the children." },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PropagateTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The item to offset the transform for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_PropagateTransform.h" },
		{ "ToolTip", "The item to offset the transform for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PropagateTransform, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_Item_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bRecomputeGlobal_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// If set to true the item's global transform will be recomputed from\n// its parent's transform and its local.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_PropagateTransform.h" },
		{ "ToolTip", "If set to true the item's global transform will be recomputed from\nits parent's transform and its local." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bRecomputeGlobal_SetBit(void* Obj)
	{
		((FRigUnit_PropagateTransform*)Obj)->bRecomputeGlobal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bRecomputeGlobal = { "bRecomputeGlobal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_PropagateTransform), &Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bRecomputeGlobal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bRecomputeGlobal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bRecomputeGlobal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bApplyToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// If set to true the direct children of this item will be recomputed as well.\n// Combined with bRecursive all children will be affected recursively.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_PropagateTransform.h" },
		{ "ToolTip", "If set to true the direct children of this item will be recomputed as well.\nCombined with bRecursive all children will be affected recursively." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bApplyToChildren_SetBit(void* Obj)
	{
		((FRigUnit_PropagateTransform*)Obj)->bApplyToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bApplyToChildren = { "bApplyToChildren", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_PropagateTransform), &Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bApplyToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bApplyToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bApplyToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bRecursive_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// If set to true and with bApplyToChildren enabled\n// all children will be affected recursively.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_PropagateTransform.h" },
		{ "ToolTip", "If set to true and with bApplyToChildren enabled\nall children will be affected recursively." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((FRigUnit_PropagateTransform*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_PropagateTransform), &Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bRecursive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bRecursive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the item internally\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_PropagateTransform.h" },
		{ "ToolTip", "Used to cache the item internally" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PropagateTransform, CachedIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_CachedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_CachedIndex_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bRecomputeGlobal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bApplyToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewProp_CachedIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_PropagateTransform",
		sizeof(FRigUnit_PropagateTransform),
		alignof(FRigUnit_PropagateTransform),
		Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PropagateTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PropagateTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PropagateTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PropagateTransform.InnerSingleton;
	}

void FRigUnit_PropagateTransform::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_PropagateTransform::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		bRecomputeGlobal,
		bApplyToChildren,
		bRecursive,
		CachedIndex
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_PropagateTransform_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_PropagateTransform_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_PropagateTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PropagateTransform_Statics::NewStructOps, TEXT("RigUnit_PropagateTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_PropagateTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PropagateTransform), 3647635658U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_PropagateTransform_h_1664400877(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_PropagateTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_PropagateTransform_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
