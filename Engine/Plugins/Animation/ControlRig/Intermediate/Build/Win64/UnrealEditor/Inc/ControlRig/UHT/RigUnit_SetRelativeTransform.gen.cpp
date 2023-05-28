// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SetRelativeTransform() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_SetRelativeTransformForItem>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetRelativeTransformForItem cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeTransformForItem;
class UScriptStruct* FRigUnit_SetRelativeTransformForItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeTransformForItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeTransformForItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetRelativeTransformForItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetRelativeTransformForItem_Execute;
		Arguments_FRigUnit_SetRelativeTransformForItem_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetRelativeTransformForItem_Execute.Emplace(TEXT("Parent"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetRelativeTransformForItem_Execute.Emplace(TEXT("bParentInitial"), TEXT("bool"));
		Arguments_FRigUnit_SetRelativeTransformForItem_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigUnit_SetRelativeTransformForItem_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetRelativeTransformForItem_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_SetRelativeTransformForItem_Execute.Emplace(TEXT("CachedChild"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_SetRelativeTransformForItem_Execute.Emplace(TEXT("CachedParent"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetRelativeTransformForItem::Execute"), &FRigUnit_SetRelativeTransformForItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeTransformForItem.OuterSingleton, Arguments_FRigUnit_SetRelativeTransformForItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeTransformForItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetRelativeTransformForItem>()
{
	return FRigUnit_SetRelativeTransformForItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bParentInitial_MetaData[];
#endif
		static void NewProp_bParentInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParentInitial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedChild_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedChild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedParent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Comment", "/**\n * SetRelativeTransform is used to set a single transform from a hierarchy in the space of another item\n */" },
		{ "DisplayName", "Set Relative Transform" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "Offset,Local" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "NodeColor", "0, 0.364706, 1.0" },
		{ "TemplateName", "Set Relative Transform" },
		{ "ToolTip", "SetRelativeTransform is used to set a single transform from a hierarchy in the space of another item" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetRelativeTransformForItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Child_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The child item to set the transform for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "The child item to set the transform for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeTransformForItem, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Child_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Child_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The parent item to use.\n\x09 * The child transform will be set in the space of the parent.\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "The parent item to use.\nThe child transform will be set in the space of the parent." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeTransformForItem, Parent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Parent_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_bParentInitial_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the parent's transform should be determined as current (false) or initial (true).\n\x09 * Initial transforms for bones and other elements in the hierarchy represent the reference pose's value.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "Defines if the parent's transform should be determined as current (false) or initial (true).\nInitial transforms for bones and other elements in the hierarchy represent the reference pose's value." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_bParentInitial_SetBit(void* Obj)
	{
		((FRigUnit_SetRelativeTransformForItem*)Obj)->bParentInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_bParentInitial = { "bParentInitial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetRelativeTransformForItem), &Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_bParentInitial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_bParentInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_bParentInitial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The transform of the child item relative to the provided parent\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "The transform of the child item relative to the provided parent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeTransformForItem, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Defines how much the change will be applied\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "Defines how much the change will be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeTransformForItem, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// If set to true children of affected items in the hierarchy\n// will follow the transform change - otherwise only the parent will move.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "If set to true children of affected items in the hierarchy\nwill follow the transform change - otherwise only the parent will move." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_SetRelativeTransformForItem*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetRelativeTransformForItem), &Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_CachedChild_MetaData[] = {
		{ "Comment", "// Used to cache the child internally\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "Used to cache the child internally" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_CachedChild = { "CachedChild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeTransformForItem, CachedChild), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_CachedChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_CachedChild_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_CachedParent_MetaData[] = {
		{ "Comment", "// Used to cache the parent internally\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "Used to cache the parent internally" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_CachedParent = { "CachedParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeTransformForItem, CachedParent), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_CachedParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_CachedParent_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_bParentInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_CachedChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewProp_CachedParent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_SetRelativeTransformForItem",
		sizeof(FRigUnit_SetRelativeTransformForItem),
		alignof(FRigUnit_SetRelativeTransformForItem),
		Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeTransformForItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeTransformForItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeTransformForItem.InnerSingleton;
	}

void FRigUnit_SetRelativeTransformForItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetRelativeTransformForItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Child,
		Parent,
		bParentInitial,
		Value,
		Weight,
		bPropagateToChildren,
		CachedChild,
		CachedParent
	);
}


static_assert(std::is_polymorphic<FRigUnit_SetRelativeTranslationForItem>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetRelativeTranslationForItem cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeTranslationForItem;
class UScriptStruct* FRigUnit_SetRelativeTranslationForItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeTranslationForItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeTranslationForItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetRelativeTranslationForItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetRelativeTranslationForItem_Execute;
		Arguments_FRigUnit_SetRelativeTranslationForItem_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetRelativeTranslationForItem_Execute.Emplace(TEXT("Parent"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetRelativeTranslationForItem_Execute.Emplace(TEXT("bParentInitial"), TEXT("bool"));
		Arguments_FRigUnit_SetRelativeTranslationForItem_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigUnit_SetRelativeTranslationForItem_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetRelativeTranslationForItem_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_SetRelativeTranslationForItem_Execute.Emplace(TEXT("CachedChild"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_SetRelativeTranslationForItem_Execute.Emplace(TEXT("CachedParent"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetRelativeTranslationForItem::Execute"), &FRigUnit_SetRelativeTranslationForItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeTranslationForItem.OuterSingleton, Arguments_FRigUnit_SetRelativeTranslationForItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeTranslationForItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetRelativeTranslationForItem>()
{
	return FRigUnit_SetRelativeTranslationForItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bParentInitial_MetaData[];
#endif
		static void NewProp_bParentInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParentInitial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedChild_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedChild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedParent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Comment", "/**\n * SetRelativeTranslation is used to set a single translation from a hierarchy in the space of another item\n */" },
		{ "DisplayName", "Set Relative Translation" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "Offset,Local" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "NodeColor", "0, 0.364706, 1.0" },
		{ "TemplateName", "Set Relative Transform" },
		{ "ToolTip", "SetRelativeTranslation is used to set a single translation from a hierarchy in the space of another item" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetRelativeTranslationForItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Child_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The child item to set the transform for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "The child item to set the transform for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeTranslationForItem, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Child_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Child_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The parent item to use.\n\x09 * The child transform will be set in the space of the parent.\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "The parent item to use.\nThe child transform will be set in the space of the parent." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeTranslationForItem, Parent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Parent_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_bParentInitial_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the parent's transform should be determined as current (false) or initial (true).\n\x09 * Initial transforms for bones and other elements in the hierarchy represent the reference pose's value.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "Defines if the parent's transform should be determined as current (false) or initial (true).\nInitial transforms for bones and other elements in the hierarchy represent the reference pose's value." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_bParentInitial_SetBit(void* Obj)
	{
		((FRigUnit_SetRelativeTranslationForItem*)Obj)->bParentInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_bParentInitial = { "bParentInitial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetRelativeTranslationForItem), &Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_bParentInitial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_bParentInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_bParentInitial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The transform of the child item relative to the provided parent\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "The transform of the child item relative to the provided parent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeTranslationForItem, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Defines how much the change will be applied\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "Defines how much the change will be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeTranslationForItem, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// If set to true children of affected items in the hierarchy\n// will follow the transform change - otherwise only the parent will move.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "If set to true children of affected items in the hierarchy\nwill follow the transform change - otherwise only the parent will move." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_SetRelativeTranslationForItem*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetRelativeTranslationForItem), &Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_CachedChild_MetaData[] = {
		{ "Comment", "// Used to cache the child internally\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "Used to cache the child internally" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_CachedChild = { "CachedChild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeTranslationForItem, CachedChild), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_CachedChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_CachedChild_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_CachedParent_MetaData[] = {
		{ "Comment", "// Used to cache the parent internally\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "Used to cache the parent internally" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_CachedParent = { "CachedParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeTranslationForItem, CachedParent), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_CachedParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_CachedParent_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_bParentInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_CachedChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewProp_CachedParent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_SetRelativeTranslationForItem",
		sizeof(FRigUnit_SetRelativeTranslationForItem),
		alignof(FRigUnit_SetRelativeTranslationForItem),
		Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeTranslationForItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeTranslationForItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeTranslationForItem.InnerSingleton;
	}

void FRigUnit_SetRelativeTranslationForItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetRelativeTranslationForItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Child,
		Parent,
		bParentInitial,
		Value,
		Weight,
		bPropagateToChildren,
		CachedChild,
		CachedParent
	);
}


static_assert(std::is_polymorphic<FRigUnit_SetRelativeRotationForItem>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetRelativeRotationForItem cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeRotationForItem;
class UScriptStruct* FRigUnit_SetRelativeRotationForItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeRotationForItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeRotationForItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetRelativeRotationForItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetRelativeRotationForItem_Execute;
		Arguments_FRigUnit_SetRelativeRotationForItem_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetRelativeRotationForItem_Execute.Emplace(TEXT("Parent"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetRelativeRotationForItem_Execute.Emplace(TEXT("bParentInitial"), TEXT("bool"));
		Arguments_FRigUnit_SetRelativeRotationForItem_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigUnit_SetRelativeRotationForItem_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetRelativeRotationForItem_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_SetRelativeRotationForItem_Execute.Emplace(TEXT("CachedChild"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_SetRelativeRotationForItem_Execute.Emplace(TEXT("CachedParent"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetRelativeRotationForItem::Execute"), &FRigUnit_SetRelativeRotationForItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeRotationForItem.OuterSingleton, Arguments_FRigUnit_SetRelativeRotationForItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeRotationForItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetRelativeRotationForItem>()
{
	return FRigUnit_SetRelativeRotationForItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Child_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Child;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bParentInitial_MetaData[];
#endif
		static void NewProp_bParentInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParentInitial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedChild_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedChild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedParent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Comment", "/**\n * SetRelativeRotation is used to set a single rotation from a hierarchy in the space of another item\n */" },
		{ "DisplayName", "Set Relative Rotation" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "Offset,Local" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "NodeColor", "0, 0.364706, 1.0" },
		{ "TemplateName", "Set Relative Transform" },
		{ "ToolTip", "SetRelativeRotation is used to set a single rotation from a hierarchy in the space of another item" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetRelativeRotationForItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Child_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The child item to set the transform for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "The child item to set the transform for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeRotationForItem, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Child_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Child_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The parent item to use.\n\x09 * The child transform will be set in the space of the parent.\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "The parent item to use.\nThe child transform will be set in the space of the parent." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeRotationForItem, Parent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Parent_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_bParentInitial_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the parent's transform should be determined as current (false) or initial (true).\n\x09 * Initial transforms for bones and other elements in the hierarchy represent the reference pose's value.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "Defines if the parent's transform should be determined as current (false) or initial (true).\nInitial transforms for bones and other elements in the hierarchy represent the reference pose's value." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_bParentInitial_SetBit(void* Obj)
	{
		((FRigUnit_SetRelativeRotationForItem*)Obj)->bParentInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_bParentInitial = { "bParentInitial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetRelativeRotationForItem), &Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_bParentInitial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_bParentInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_bParentInitial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The transform of the child item relative to the provided parent\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "The transform of the child item relative to the provided parent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeRotationForItem, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Defines how much the change will be applied\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "Defines how much the change will be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeRotationForItem, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// If set to true children of affected items in the hierarchy\n// will follow the transform change - otherwise only the parent will move.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "If set to true children of affected items in the hierarchy\nwill follow the transform change - otherwise only the parent will move." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_SetRelativeRotationForItem*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetRelativeRotationForItem), &Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_CachedChild_MetaData[] = {
		{ "Comment", "// Used to cache the child internally\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "Used to cache the child internally" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_CachedChild = { "CachedChild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeRotationForItem, CachedChild), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_CachedChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_CachedChild_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_CachedParent_MetaData[] = {
		{ "Comment", "// Used to cache the parent internally\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeTransform.h" },
		{ "ToolTip", "Used to cache the parent internally" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_CachedParent = { "CachedParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeRotationForItem, CachedParent), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_CachedParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_CachedParent_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_bParentInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_CachedChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewProp_CachedParent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_SetRelativeRotationForItem",
		sizeof(FRigUnit_SetRelativeRotationForItem),
		alignof(FRigUnit_SetRelativeRotationForItem),
		Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeRotationForItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeRotationForItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeRotationForItem.InnerSingleton;
	}

void FRigUnit_SetRelativeRotationForItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetRelativeRotationForItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Child,
		Parent,
		bParentInitial,
		Value,
		Weight,
		bPropagateToChildren,
		CachedChild,
		CachedParent
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetRelativeTransform_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetRelativeTransform_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_SetRelativeTransformForItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetRelativeTransformForItem_Statics::NewStructOps, TEXT("RigUnit_SetRelativeTransformForItem"), &Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeTransformForItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetRelativeTransformForItem), 2524833722U) },
		{ FRigUnit_SetRelativeTranslationForItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetRelativeTranslationForItem_Statics::NewStructOps, TEXT("RigUnit_SetRelativeTranslationForItem"), &Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeTranslationForItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetRelativeTranslationForItem), 4121809785U) },
		{ FRigUnit_SetRelativeRotationForItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetRelativeRotationForItem_Statics::NewStructOps, TEXT("RigUnit_SetRelativeRotationForItem"), &Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeRotationForItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetRelativeRotationForItem), 1028724954U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetRelativeTransform_h_4230551599(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetRelativeTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetRelativeTransform_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
