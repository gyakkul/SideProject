// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Execution/RigUnit_Hierarchy.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
#include "Rigs/RigHierarchyPose.h"
#include "Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Hierarchy() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_ERigElementType();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigPose();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyBaseMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PoseGetItems();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PoseLoop();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMTransformSpace();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_HierarchyBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_HierarchyBase cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HierarchyBase;
class UScriptStruct* FRigUnit_HierarchyBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HierarchyBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyBase, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HierarchyBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HierarchyBase>()
{
	return FRigUnit_HierarchyBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_HierarchyBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Hierarchy" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_HierarchyBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HierarchyBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HierarchyBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_HierarchyBase",
		sizeof(FRigUnit_HierarchyBase),
		alignof(FRigUnit_HierarchyBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HierarchyBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HierarchyBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_HierarchyBaseMutable>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_HierarchyBaseMutable cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HierarchyBaseMutable;
class UScriptStruct* FRigUnit_HierarchyBaseMutable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyBaseMutable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HierarchyBaseMutable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyBaseMutable, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HierarchyBaseMutable"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyBaseMutable.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HierarchyBaseMutable>()
{
	return FRigUnit_HierarchyBaseMutable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_HierarchyBaseMutable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyBaseMutable_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Hierarchy" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_HierarchyBaseMutable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HierarchyBaseMutable>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HierarchyBaseMutable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_HierarchyBaseMutable",
		sizeof(FRigUnit_HierarchyBaseMutable),
		alignof(FRigUnit_HierarchyBaseMutable),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyBaseMutable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyBaseMutable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyBaseMutable()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyBaseMutable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HierarchyBaseMutable.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HierarchyBaseMutable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyBaseMutable.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_HierarchyGetParent>() == std::is_polymorphic<FRigUnit_HierarchyBase>(), "USTRUCT FRigUnit_HierarchyGetParent cannot be polymorphic unless super FRigUnit_HierarchyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParent;
class UScriptStruct* FRigUnit_HierarchyGetParent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HierarchyGetParent"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_HierarchyGetParent_Execute;
		Arguments_FRigUnit_HierarchyGetParent_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_HierarchyGetParent_Execute.Emplace(TEXT("Parent"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_HierarchyGetParent_Execute.Emplace(TEXT("CachedChild"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_HierarchyGetParent_Execute.Emplace(TEXT("CachedParent"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_HierarchyGetParent::Execute"), &FRigUnit_HierarchyGetParent::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParent.OuterSingleton, Arguments_FRigUnit_HierarchyGetParent_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParent.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HierarchyGetParent>()
{
	return FRigUnit_HierarchyGetParent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the item's parent\n */" },
		{ "DisplayName", "Get Parent" },
		{ "Keywords", "Child,Parent,Root,Up,Top" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Returns the item's parent" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HierarchyGetParent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_Child_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetParent, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_Child_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_Child_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetParent, Parent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_Parent_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_CachedChild_MetaData[] = {
		{ "Comment", "// Used to cache the internally used child\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Used to cache the internally used child" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_CachedChild = { "CachedChild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetParent, CachedChild), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_CachedChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_CachedChild_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_CachedParent_MetaData[] = {
		{ "Comment", "// Used to cache the internally used parent\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Used to cache the internally used parent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_CachedParent = { "CachedParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetParent, CachedParent), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_CachedParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_CachedParent_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_CachedChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewProp_CachedParent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HierarchyBase,
		&NewStructOps,
		"RigUnit_HierarchyGetParent",
		sizeof(FRigUnit_HierarchyGetParent),
		alignof(FRigUnit_HierarchyGetParent),
		Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParent.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParent.InnerSingleton;
	}

void FRigUnit_HierarchyGetParent::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_HierarchyGetParent::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Child,
		Parent,
		CachedChild,
		CachedParent
	);
}


static_assert(std::is_polymorphic<FRigUnit_HierarchyGetParents>() == std::is_polymorphic<FRigUnit_HierarchyBase>(), "USTRUCT FRigUnit_HierarchyGetParents cannot be polymorphic unless super FRigUnit_HierarchyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParents;
class UScriptStruct* FRigUnit_HierarchyGetParents::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParents.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParents.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HierarchyGetParents"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_HierarchyGetParents_Execute;
		Arguments_FRigUnit_HierarchyGetParents_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_HierarchyGetParents_Execute.Emplace(TEXT("bIncludeChild"), TEXT("bool"));
		Arguments_FRigUnit_HierarchyGetParents_Execute.Emplace(TEXT("bReverse"), TEXT("bool"));
		Arguments_FRigUnit_HierarchyGetParents_Execute.Emplace(TEXT("Parents"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_HierarchyGetParents_Execute.Emplace(TEXT("CachedChild"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_HierarchyGetParents_Execute.Emplace(TEXT("CachedParents"), TEXT("FRigElementKeyCollection"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_HierarchyGetParents::Execute"), &FRigUnit_HierarchyGetParents::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParents.OuterSingleton, Arguments_FRigUnit_HierarchyGetParents_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParents.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HierarchyGetParents>()
{
	return FRigUnit_HierarchyGetParents::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeChild_MetaData[];
#endif
		static void NewProp_bIncludeChild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[];
#endif
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedChild_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedChild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedParents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedParents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the item's parents\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Get Parents" },
		{ "Keywords", "Chain,Parents,Hierarchy" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Returns the item's parents" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HierarchyGetParents>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_Child_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetParents, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_Child_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_Child_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_bIncludeChild_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_bIncludeChild_SetBit(void* Obj)
	{
		((FRigUnit_HierarchyGetParents*)Obj)->bIncludeChild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_bIncludeChild = { "bIncludeChild", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_HierarchyGetParents), &Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_bIncludeChild_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_bIncludeChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_bIncludeChild_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_bReverse_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((FRigUnit_HierarchyGetParents*)Obj)->bReverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_HierarchyGetParents), &Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_bReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_bReverse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_Parents_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetParents, Parents), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_Parents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_Parents_MetaData)) }; // 2993270268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_CachedChild_MetaData[] = {
		{ "Comment", "// Used to cache the internally used child\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Used to cache the internally used child" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_CachedChild = { "CachedChild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetParents, CachedChild), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_CachedChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_CachedChild_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_CachedParents_MetaData[] = {
		{ "Comment", "// Used to cache the internally used parents\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Used to cache the internally used parents" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_CachedParents = { "CachedParents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetParents, CachedParents), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_CachedParents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_CachedParents_MetaData)) }; // 2993270268
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_bIncludeChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_bReverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_Parents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_CachedChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewProp_CachedParents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HierarchyBase,
		&NewStructOps,
		"RigUnit_HierarchyGetParents",
		sizeof(FRigUnit_HierarchyGetParents),
		alignof(FRigUnit_HierarchyGetParents),
		Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParents.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParents.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParents.InnerSingleton;
	}

void FRigUnit_HierarchyGetParents::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_HierarchyGetParents::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Child,
		bIncludeChild,
		bReverse,
		Parents,
		CachedChild,
		CachedParents
	);
}


static_assert(std::is_polymorphic<FRigUnit_HierarchyGetParentsItemArray>() == std::is_polymorphic<FRigUnit_HierarchyBase>(), "USTRUCT FRigUnit_HierarchyGetParentsItemArray cannot be polymorphic unless super FRigUnit_HierarchyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentsItemArray;
class UScriptStruct* FRigUnit_HierarchyGetParentsItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentsItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentsItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HierarchyGetParentsItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_HierarchyGetParentsItemArray_Execute;
		Arguments_FRigUnit_HierarchyGetParentsItemArray_Execute.Emplace(TEXT("Child"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_HierarchyGetParentsItemArray_Execute.Emplace(TEXT("bIncludeChild"), TEXT("bool"));
		Arguments_FRigUnit_HierarchyGetParentsItemArray_Execute.Emplace(TEXT("bReverse"), TEXT("bool"));
		Arguments_FRigUnit_HierarchyGetParentsItemArray_Execute.Emplace(TEXT("Parents"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_HierarchyGetParentsItemArray_Execute.Emplace(TEXT("CachedChild"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_HierarchyGetParentsItemArray_Execute.Emplace(TEXT("CachedParents"), TEXT("FRigElementKeyCollection"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_HierarchyGetParentsItemArray::Execute"), &FRigUnit_HierarchyGetParentsItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentsItemArray.OuterSingleton, Arguments_FRigUnit_HierarchyGetParentsItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentsItemArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HierarchyGetParentsItemArray>()
{
	return FRigUnit_HierarchyGetParentsItemArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeChild_MetaData[];
#endif
		static void NewProp_bIncludeChild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeChild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReverse_MetaData[];
#endif
		static void NewProp_bReverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverse;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedChild_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedChild;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedParents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedParents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the item's parents\n */" },
		{ "DisplayName", "Get Parents" },
		{ "Keywords", "Chain,Parents,Hierarchy" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Returns the item's parents" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HierarchyGetParentsItemArray>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_Child_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_Child = { "Child", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetParentsItemArray, Child), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_Child_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_Child_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_bIncludeChild_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_bIncludeChild_SetBit(void* Obj)
	{
		((FRigUnit_HierarchyGetParentsItemArray*)Obj)->bIncludeChild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_bIncludeChild = { "bIncludeChild", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_HierarchyGetParentsItemArray), &Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_bIncludeChild_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_bIncludeChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_bIncludeChild_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_bReverse_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_bReverse_SetBit(void* Obj)
	{
		((FRigUnit_HierarchyGetParentsItemArray*)Obj)->bReverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_bReverse = { "bReverse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_HierarchyGetParentsItemArray), &Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_bReverse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_bReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_bReverse_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_Parents_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetParentsItemArray, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_Parents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_Parents_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_CachedChild_MetaData[] = {
		{ "Comment", "// Used to cache the internally used child\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Used to cache the internally used child" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_CachedChild = { "CachedChild", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetParentsItemArray, CachedChild), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_CachedChild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_CachedChild_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_CachedParents_MetaData[] = {
		{ "Comment", "// Used to cache the internally used parents\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Used to cache the internally used parents" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_CachedParents = { "CachedParents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetParentsItemArray, CachedParents), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_CachedParents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_CachedParents_MetaData)) }; // 2993270268
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_Child,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_bIncludeChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_bReverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_Parents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_Parents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_CachedChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewProp_CachedParents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HierarchyBase,
		&NewStructOps,
		"RigUnit_HierarchyGetParentsItemArray",
		sizeof(FRigUnit_HierarchyGetParentsItemArray),
		alignof(FRigUnit_HierarchyGetParentsItemArray),
		Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentsItemArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentsItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentsItemArray.InnerSingleton;
	}

void FRigUnit_HierarchyGetParentsItemArray::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_HierarchyGetParentsItemArray::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Child,
		bIncludeChild,
		bReverse,
		Parents,
		CachedChild,
		CachedParents
	);
}


static_assert(std::is_polymorphic<FRigUnit_HierarchyGetChildren>() == std::is_polymorphic<FRigUnit_HierarchyBase>(), "USTRUCT FRigUnit_HierarchyGetChildren cannot be polymorphic unless super FRigUnit_HierarchyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetChildren;
class UScriptStruct* FRigUnit_HierarchyGetChildren::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetChildren.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetChildren.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HierarchyGetChildren"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_HierarchyGetChildren_Execute;
		Arguments_FRigUnit_HierarchyGetChildren_Execute.Emplace(TEXT("Parent"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_HierarchyGetChildren_Execute.Emplace(TEXT("bIncludeParent"), TEXT("bool"));
		Arguments_FRigUnit_HierarchyGetChildren_Execute.Emplace(TEXT("bRecursive"), TEXT("bool"));
		Arguments_FRigUnit_HierarchyGetChildren_Execute.Emplace(TEXT("Children"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_HierarchyGetChildren_Execute.Emplace(TEXT("CachedParent"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_HierarchyGetChildren_Execute.Emplace(TEXT("CachedChildren"), TEXT("FRigElementKeyCollection"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_HierarchyGetChildren::Execute"), &FRigUnit_HierarchyGetChildren::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetChildren.OuterSingleton, Arguments_FRigUnit_HierarchyGetChildren_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetChildren.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HierarchyGetChildren>()
{
	return FRigUnit_HierarchyGetChildren::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeParent_MetaData[];
#endif
		static void NewProp_bIncludeParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecursive_MetaData[];
#endif
		static void NewProp_bRecursive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecursive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Children;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedParent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedChildren_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedChildren;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the item's children\n */" },
		{ "Deprecated", "4.25.0" },
		{ "DisplayName", "Get Children" },
		{ "Keywords", "Chain,Children,Hierarchy" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Returns the item's children" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HierarchyGetChildren>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_Parent_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetChildren, Parent), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_Parent_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_bIncludeParent_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_bIncludeParent_SetBit(void* Obj)
	{
		((FRigUnit_HierarchyGetChildren*)Obj)->bIncludeParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_bIncludeParent = { "bIncludeParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_HierarchyGetChildren), &Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_bIncludeParent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_bIncludeParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_bIncludeParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_bRecursive_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_bRecursive_SetBit(void* Obj)
	{
		((FRigUnit_HierarchyGetChildren*)Obj)->bRecursive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_bRecursive = { "bRecursive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_HierarchyGetChildren), &Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_bRecursive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_bRecursive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_bRecursive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_Children_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetChildren, Children), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_Children_MetaData)) }; // 2993270268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_CachedParent_MetaData[] = {
		{ "Comment", "// Used to cache the internally used parent\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Used to cache the internally used parent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_CachedParent = { "CachedParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetChildren, CachedParent), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_CachedParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_CachedParent_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_CachedChildren_MetaData[] = {
		{ "Comment", "// Used to cache the internally used children\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Used to cache the internally used children" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_CachedChildren = { "CachedChildren", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetChildren, CachedChildren), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_CachedChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_CachedChildren_MetaData)) }; // 2993270268
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_bIncludeParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_bRecursive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_Children,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_CachedParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewProp_CachedChildren,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HierarchyBase,
		&NewStructOps,
		"RigUnit_HierarchyGetChildren",
		sizeof(FRigUnit_HierarchyGetChildren),
		alignof(FRigUnit_HierarchyGetChildren),
		Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetChildren.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetChildren.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetChildren.InnerSingleton;
	}

void FRigUnit_HierarchyGetChildren::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_HierarchyGetChildren::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Parent,
		bIncludeParent,
		bRecursive,
		Children,
		CachedParent,
		CachedChildren
	);
}


static_assert(std::is_polymorphic<FRigUnit_HierarchyGetSiblings>() == std::is_polymorphic<FRigUnit_HierarchyBase>(), "USTRUCT FRigUnit_HierarchyGetSiblings cannot be polymorphic unless super FRigUnit_HierarchyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetSiblings;
class UScriptStruct* FRigUnit_HierarchyGetSiblings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetSiblings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetSiblings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HierarchyGetSiblings"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_HierarchyGetSiblings_Execute;
		Arguments_FRigUnit_HierarchyGetSiblings_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_HierarchyGetSiblings_Execute.Emplace(TEXT("bIncludeItem"), TEXT("bool"));
		Arguments_FRigUnit_HierarchyGetSiblings_Execute.Emplace(TEXT("Siblings"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_HierarchyGetSiblings_Execute.Emplace(TEXT("CachedItem"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_HierarchyGetSiblings_Execute.Emplace(TEXT("CachedSiblings"), TEXT("FRigElementKeyCollection"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_HierarchyGetSiblings::Execute"), &FRigUnit_HierarchyGetSiblings::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetSiblings.OuterSingleton, Arguments_FRigUnit_HierarchyGetSiblings_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetSiblings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HierarchyGetSiblings>()
{
	return FRigUnit_HierarchyGetSiblings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeItem_MetaData[];
#endif
		static void NewProp_bIncludeItem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Siblings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Siblings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSiblings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedSiblings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the item's siblings\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Get Siblings" },
		{ "Keywords", "Chain,Siblings,Hierarchy" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Returns the item's siblings" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HierarchyGetSiblings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetSiblings, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_Item_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_bIncludeItem_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_bIncludeItem_SetBit(void* Obj)
	{
		((FRigUnit_HierarchyGetSiblings*)Obj)->bIncludeItem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_bIncludeItem = { "bIncludeItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_HierarchyGetSiblings), &Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_bIncludeItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_bIncludeItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_bIncludeItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_Siblings_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_Siblings = { "Siblings", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetSiblings, Siblings), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_Siblings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_Siblings_MetaData)) }; // 2993270268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_CachedItem_MetaData[] = {
		{ "Comment", "// Used to cache the internally used item\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Used to cache the internally used item" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_CachedItem = { "CachedItem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetSiblings, CachedItem), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_CachedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_CachedItem_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_CachedSiblings_MetaData[] = {
		{ "Comment", "// Used to cache the internally used siblings\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Used to cache the internally used siblings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_CachedSiblings = { "CachedSiblings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetSiblings, CachedSiblings), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_CachedSiblings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_CachedSiblings_MetaData)) }; // 2993270268
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_bIncludeItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_Siblings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_CachedItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewProp_CachedSiblings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HierarchyBase,
		&NewStructOps,
		"RigUnit_HierarchyGetSiblings",
		sizeof(FRigUnit_HierarchyGetSiblings),
		alignof(FRigUnit_HierarchyGetSiblings),
		Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetSiblings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetSiblings.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetSiblings.InnerSingleton;
	}

void FRigUnit_HierarchyGetSiblings::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_HierarchyGetSiblings::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		bIncludeItem,
		Siblings,
		CachedItem,
		CachedSiblings
	);
}


static_assert(std::is_polymorphic<FRigUnit_HierarchyGetSiblingsItemArray>() == std::is_polymorphic<FRigUnit_HierarchyBase>(), "USTRUCT FRigUnit_HierarchyGetSiblingsItemArray cannot be polymorphic unless super FRigUnit_HierarchyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetSiblingsItemArray;
class UScriptStruct* FRigUnit_HierarchyGetSiblingsItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetSiblingsItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetSiblingsItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HierarchyGetSiblingsItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_HierarchyGetSiblingsItemArray_Execute;
		Arguments_FRigUnit_HierarchyGetSiblingsItemArray_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_HierarchyGetSiblingsItemArray_Execute.Emplace(TEXT("bIncludeItem"), TEXT("bool"));
		Arguments_FRigUnit_HierarchyGetSiblingsItemArray_Execute.Emplace(TEXT("Siblings"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_HierarchyGetSiblingsItemArray_Execute.Emplace(TEXT("CachedItem"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_HierarchyGetSiblingsItemArray_Execute.Emplace(TEXT("CachedSiblings"), TEXT("FRigElementKeyCollection"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_HierarchyGetSiblingsItemArray::Execute"), &FRigUnit_HierarchyGetSiblingsItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetSiblingsItemArray.OuterSingleton, Arguments_FRigUnit_HierarchyGetSiblingsItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetSiblingsItemArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HierarchyGetSiblingsItemArray>()
{
	return FRigUnit_HierarchyGetSiblingsItemArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeItem_MetaData[];
#endif
		static void NewProp_bIncludeItem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeItem;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Siblings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Siblings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Siblings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSiblings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedSiblings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the item's siblings\n */" },
		{ "DisplayName", "Get Siblings" },
		{ "Keywords", "Chain,Siblings,Hierarchy" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Returns the item's siblings" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HierarchyGetSiblingsItemArray>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetSiblingsItemArray, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_Item_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_bIncludeItem_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_bIncludeItem_SetBit(void* Obj)
	{
		((FRigUnit_HierarchyGetSiblingsItemArray*)Obj)->bIncludeItem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_bIncludeItem = { "bIncludeItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_HierarchyGetSiblingsItemArray), &Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_bIncludeItem_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_bIncludeItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_bIncludeItem_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_Siblings_Inner = { "Siblings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_Siblings_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_Siblings = { "Siblings", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetSiblingsItemArray, Siblings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_Siblings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_Siblings_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_CachedItem_MetaData[] = {
		{ "Comment", "// Used to cache the internally used item\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Used to cache the internally used item" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_CachedItem = { "CachedItem", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetSiblingsItemArray, CachedItem), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_CachedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_CachedItem_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_CachedSiblings_MetaData[] = {
		{ "Comment", "// Used to cache the internally used siblings\n" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Used to cache the internally used siblings" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_CachedSiblings = { "CachedSiblings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetSiblingsItemArray, CachedSiblings), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_CachedSiblings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_CachedSiblings_MetaData)) }; // 2993270268
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_bIncludeItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_Siblings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_Siblings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_CachedItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewProp_CachedSiblings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HierarchyBase,
		&NewStructOps,
		"RigUnit_HierarchyGetSiblingsItemArray",
		sizeof(FRigUnit_HierarchyGetSiblingsItemArray),
		alignof(FRigUnit_HierarchyGetSiblingsItemArray),
		Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetSiblingsItemArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetSiblingsItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetSiblingsItemArray.InnerSingleton;
	}

void FRigUnit_HierarchyGetSiblingsItemArray::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_HierarchyGetSiblingsItemArray::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		bIncludeItem,
		Siblings,
		CachedItem,
		CachedSiblings
	);
}


static_assert(std::is_polymorphic<FRigUnit_HierarchyGetPose>() == std::is_polymorphic<FRigUnit_HierarchyBase>(), "USTRUCT FRigUnit_HierarchyGetPose cannot be polymorphic unless super FRigUnit_HierarchyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetPose;
class UScriptStruct* FRigUnit_HierarchyGetPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HierarchyGetPose"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_HierarchyGetPose_Execute;
		Arguments_FRigUnit_HierarchyGetPose_Execute.Emplace(TEXT("Initial"), TEXT("bool"));
		Arguments_FRigUnit_HierarchyGetPose_Execute.Emplace(TEXT("ElementType"), TEXT("ERigElementType"));
		Arguments_FRigUnit_HierarchyGetPose_Execute.Emplace(TEXT("ItemsToGet"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_HierarchyGetPose_Execute.Emplace(TEXT("Pose"), TEXT("FRigPose"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_HierarchyGetPose::Execute"), &FRigUnit_HierarchyGetPose::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetPose.OuterSingleton, Arguments_FRigUnit_HierarchyGetPose_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetPose.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HierarchyGetPose>()
{
	return FRigUnit_HierarchyGetPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Initial_MetaData[];
#endif
		static void NewProp_Initial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Initial;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ElementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsToGet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsToGet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Returns the hierarchy's pose\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Get Pose Cache" },
		{ "Keywords", "Hierarchy,Pose,State" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Returns the hierarchy's pose" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HierarchyGetPose>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_Initial_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_Initial_SetBit(void* Obj)
	{
		((FRigUnit_HierarchyGetPose*)Obj)->Initial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_Initial = { "Initial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_HierarchyGetPose), &Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_Initial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_Initial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_Initial_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_ElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_ElementType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_ElementType = { "ElementType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetPose, ElementType), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_ElementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_ElementType_MetaData)) }; // 3496922284
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_ItemsToGet_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// An optional collection to filter against\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "An optional collection to filter against" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_ItemsToGet = { "ItemsToGet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetPose, ItemsToGet), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_ItemsToGet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_ItemsToGet_MetaData)) }; // 2993270268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetPose, Pose), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_Pose_MetaData)) }; // 1272709228
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_Initial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_ElementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_ElementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_ItemsToGet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewProp_Pose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HierarchyBase,
		&NewStructOps,
		"RigUnit_HierarchyGetPose",
		sizeof(FRigUnit_HierarchyGetPose),
		alignof(FRigUnit_HierarchyGetPose),
		Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetPose.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetPose.InnerSingleton;
	}

void FRigUnit_HierarchyGetPose::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_HierarchyGetPose::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Initial,
		ElementType,
		ItemsToGet,
		Pose
	);
}


static_assert(std::is_polymorphic<FRigUnit_HierarchyGetPoseItemArray>() == std::is_polymorphic<FRigUnit_HierarchyBase>(), "USTRUCT FRigUnit_HierarchyGetPoseItemArray cannot be polymorphic unless super FRigUnit_HierarchyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetPoseItemArray;
class UScriptStruct* FRigUnit_HierarchyGetPoseItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetPoseItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetPoseItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HierarchyGetPoseItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_HierarchyGetPoseItemArray_Execute;
		Arguments_FRigUnit_HierarchyGetPoseItemArray_Execute.Emplace(TEXT("Initial"), TEXT("bool"));
		Arguments_FRigUnit_HierarchyGetPoseItemArray_Execute.Emplace(TEXT("ElementType"), TEXT("ERigElementType"));
		Arguments_FRigUnit_HierarchyGetPoseItemArray_Execute.Emplace(TEXT("ItemsToGet"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_HierarchyGetPoseItemArray_Execute.Emplace(TEXT("Pose"), TEXT("FRigPose"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_HierarchyGetPoseItemArray::Execute"), &FRigUnit_HierarchyGetPoseItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetPoseItemArray.OuterSingleton, Arguments_FRigUnit_HierarchyGetPoseItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetPoseItemArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HierarchyGetPoseItemArray>()
{
	return FRigUnit_HierarchyGetPoseItemArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Initial_MetaData[];
#endif
		static void NewProp_Initial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Initial;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ElementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsToGet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsToGet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsToGet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Pose Cache" },
		{ "Comment", "/**\n * Returns the hierarchy's pose\n */" },
		{ "DisplayName", "Get Pose Cache" },
		{ "Keywords", "Hierarchy,Pose,State" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Returns the hierarchy's pose" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HierarchyGetPoseItemArray>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_Initial_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_Initial_SetBit(void* Obj)
	{
		((FRigUnit_HierarchyGetPoseItemArray*)Obj)->Initial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_Initial = { "Initial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_HierarchyGetPoseItemArray), &Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_Initial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_Initial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_Initial_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_ElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_ElementType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_ElementType = { "ElementType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetPoseItemArray, ElementType), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_ElementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_ElementType_MetaData)) }; // 3496922284
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_ItemsToGet_Inner = { "ItemsToGet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_ItemsToGet_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// An optional collection to filter against\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "An optional collection to filter against" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_ItemsToGet = { "ItemsToGet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetPoseItemArray, ItemsToGet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_ItemsToGet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_ItemsToGet_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchyGetPoseItemArray, Pose), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_Pose_MetaData)) }; // 1272709228
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_Initial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_ElementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_ElementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_ItemsToGet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_ItemsToGet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewProp_Pose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HierarchyBase,
		&NewStructOps,
		"RigUnit_HierarchyGetPoseItemArray",
		sizeof(FRigUnit_HierarchyGetPoseItemArray),
		alignof(FRigUnit_HierarchyGetPoseItemArray),
		Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetPoseItemArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetPoseItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetPoseItemArray.InnerSingleton;
	}

void FRigUnit_HierarchyGetPoseItemArray::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_HierarchyGetPoseItemArray::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> ItemsToGet_2_Array(ItemsToGet);
	
	StaticExecute(
		InExecuteContext,
		Initial,
		ElementType,
		ItemsToGet_2_Array,
		Pose
	);
}


static_assert(std::is_polymorphic<FRigUnit_HierarchySetPose>() == std::is_polymorphic<FRigUnit_HierarchyBaseMutable>(), "USTRUCT FRigUnit_HierarchySetPose cannot be polymorphic unless super FRigUnit_HierarchyBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetPose;
class UScriptStruct* FRigUnit_HierarchySetPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HierarchySetPose"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_HierarchySetPose_Execute;
		Arguments_FRigUnit_HierarchySetPose_Execute.Emplace(TEXT("Pose"), TEXT("FRigPose"));
		Arguments_FRigUnit_HierarchySetPose_Execute.Emplace(TEXT("ElementType"), TEXT("ERigElementType"));
		Arguments_FRigUnit_HierarchySetPose_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_HierarchySetPose_Execute.Emplace(TEXT("ItemsToSet"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_HierarchySetPose_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_HierarchySetPose::Execute"), &FRigUnit_HierarchySetPose::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetPose.OuterSingleton, Arguments_FRigUnit_HierarchySetPose_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetPose.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HierarchySetPose>()
{
	return FRigUnit_HierarchySetPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ElementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsToSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsToSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Sets the hierarchy's pose\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Apply Pose Cache" },
		{ "Keywords", "Hierarchy,Pose,State" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Sets the hierarchy's pose" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HierarchySetPose>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchySetPose, Pose), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_Pose_MetaData)) }; // 1272709228
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_ElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_ElementType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_ElementType = { "ElementType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchySetPose, ElementType), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_ElementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_ElementType_MetaData)) }; // 3496922284
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchySetPose, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_Space_MetaData)) }; // 1140043897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_ItemsToSet_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// An optional collection to filter against\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "An optional collection to filter against" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_ItemsToSet = { "ItemsToSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchySetPose, ItemsToSet), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_ItemsToSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_ItemsToSet_MetaData)) }; // 2993270268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchySetPose, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_Weight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_ElementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_ElementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_ItemsToSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewProp_Weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HierarchyBaseMutable,
		&NewStructOps,
		"RigUnit_HierarchySetPose",
		sizeof(FRigUnit_HierarchySetPose),
		alignof(FRigUnit_HierarchySetPose),
		Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetPose.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetPose.InnerSingleton;
	}

void FRigUnit_HierarchySetPose::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_HierarchySetPose::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Pose,
		ElementType,
		Space,
		ItemsToSet,
		Weight
	);
}


static_assert(std::is_polymorphic<FRigUnit_HierarchySetPoseItemArray>() == std::is_polymorphic<FRigUnit_HierarchyBaseMutable>(), "USTRUCT FRigUnit_HierarchySetPoseItemArray cannot be polymorphic unless super FRigUnit_HierarchyBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetPoseItemArray;
class UScriptStruct* FRigUnit_HierarchySetPoseItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetPoseItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetPoseItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_HierarchySetPoseItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_HierarchySetPoseItemArray_Execute;
		Arguments_FRigUnit_HierarchySetPoseItemArray_Execute.Emplace(TEXT("Pose"), TEXT("FRigPose"));
		Arguments_FRigUnit_HierarchySetPoseItemArray_Execute.Emplace(TEXT("ElementType"), TEXT("ERigElementType"));
		Arguments_FRigUnit_HierarchySetPoseItemArray_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_HierarchySetPoseItemArray_Execute.Emplace(TEXT("ItemsToSet"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_HierarchySetPoseItemArray_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_HierarchySetPoseItemArray::Execute"), &FRigUnit_HierarchySetPoseItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetPoseItemArray.OuterSingleton, Arguments_FRigUnit_HierarchySetPoseItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetPoseItemArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_HierarchySetPoseItemArray>()
{
	return FRigUnit_HierarchySetPoseItemArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ElementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsToSet_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsToSet_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemsToSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Pose Cache" },
		{ "Comment", "/**\n * Sets the hierarchy's pose\n */" },
		{ "DisplayName", "Apply Pose Cache" },
		{ "Keywords", "Hierarchy,Pose,State" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Sets the hierarchy's pose" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_HierarchySetPoseItemArray>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchySetPoseItemArray, Pose), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_Pose_MetaData)) }; // 1272709228
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_ElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_ElementType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_ElementType = { "ElementType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchySetPoseItemArray, ElementType), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_ElementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_ElementType_MetaData)) }; // 3496922284
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchySetPoseItemArray, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_Space_MetaData)) }; // 1140043897
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_ItemsToSet_Inner = { "ItemsToSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_ItemsToSet_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// An optional collection to filter against\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "An optional collection to filter against" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_ItemsToSet = { "ItemsToSet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchySetPoseItemArray, ItemsToSet), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_ItemsToSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_ItemsToSet_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_HierarchySetPoseItemArray, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_Weight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_ElementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_ElementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_ItemsToSet_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_ItemsToSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewProp_Weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HierarchyBaseMutable,
		&NewStructOps,
		"RigUnit_HierarchySetPoseItemArray",
		sizeof(FRigUnit_HierarchySetPoseItemArray),
		alignof(FRigUnit_HierarchySetPoseItemArray),
		Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetPoseItemArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetPoseItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetPoseItemArray.InnerSingleton;
	}

void FRigUnit_HierarchySetPoseItemArray::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_HierarchySetPoseItemArray::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> ItemsToSet_3_Array(ItemsToSet);
	
	StaticExecute(
		InExecuteContext,
		Pose,
		ElementType,
		Space,
		ItemsToSet_3_Array,
		Weight
	);
}


static_assert(std::is_polymorphic<FRigUnit_PoseIsEmpty>() == std::is_polymorphic<FRigUnit_HierarchyBase>(), "USTRUCT FRigUnit_PoseIsEmpty cannot be polymorphic unless super FRigUnit_HierarchyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PoseIsEmpty;
class UScriptStruct* FRigUnit_PoseIsEmpty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PoseIsEmpty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PoseIsEmpty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PoseIsEmpty"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PoseIsEmpty_Execute;
		Arguments_FRigUnit_PoseIsEmpty_Execute.Emplace(TEXT("Pose"), TEXT("FRigPose"));
		Arguments_FRigUnit_PoseIsEmpty_Execute.Emplace(TEXT("IsEmpty"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PoseIsEmpty::Execute"), &FRigUnit_PoseIsEmpty::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PoseIsEmpty.OuterSingleton, Arguments_FRigUnit_PoseIsEmpty_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PoseIsEmpty.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PoseIsEmpty>()
{
	return FRigUnit_PoseIsEmpty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsEmpty_MetaData[];
#endif
		static void NewProp_IsEmpty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEmpty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Pose Cache" },
		{ "Comment", "/**\n* Returns true if the hierarchy pose is empty (has no items)\n*/" },
		{ "DisplayName", "Is Pose Cache Empty" },
		{ "Keywords", "Hierarchy,Pose,State" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Returns true if the hierarchy pose is empty (has no items)" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PoseIsEmpty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseIsEmpty, Pose), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::NewProp_Pose_MetaData)) }; // 1272709228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::NewProp_IsEmpty_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::NewProp_IsEmpty_SetBit(void* Obj)
	{
		((FRigUnit_PoseIsEmpty*)Obj)->IsEmpty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::NewProp_IsEmpty = { "IsEmpty", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_PoseIsEmpty), &Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::NewProp_IsEmpty_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::NewProp_IsEmpty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::NewProp_IsEmpty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::NewProp_IsEmpty,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HierarchyBase,
		&NewStructOps,
		"RigUnit_PoseIsEmpty",
		sizeof(FRigUnit_PoseIsEmpty),
		alignof(FRigUnit_PoseIsEmpty),
		Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PoseIsEmpty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PoseIsEmpty.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PoseIsEmpty.InnerSingleton;
	}

void FRigUnit_PoseIsEmpty::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_PoseIsEmpty::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Pose,
		IsEmpty
	);
}


static_assert(std::is_polymorphic<FRigUnit_PoseGetItems>() == std::is_polymorphic<FRigUnit_HierarchyBase>(), "USTRUCT FRigUnit_PoseGetItems cannot be polymorphic unless super FRigUnit_HierarchyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PoseGetItems;
class UScriptStruct* FRigUnit_PoseGetItems::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PoseGetItems.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PoseGetItems.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PoseGetItems, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PoseGetItems"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PoseGetItems_Execute;
		Arguments_FRigUnit_PoseGetItems_Execute.Emplace(TEXT("Pose"), TEXT("FRigPose"));
		Arguments_FRigUnit_PoseGetItems_Execute.Emplace(TEXT("ElementType"), TEXT("ERigElementType"));
		Arguments_FRigUnit_PoseGetItems_Execute.Emplace(TEXT("Items"), TEXT("FRigElementKeyCollection"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PoseGetItems::Execute"), &FRigUnit_PoseGetItems::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PoseGetItems.OuterSingleton, Arguments_FRigUnit_PoseGetItems_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PoseGetItems.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PoseGetItems>()
{
	return FRigUnit_PoseGetItems::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ElementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Returns the items in the hierarchy pose\n*/" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Get Pose Cache Items" },
		{ "Keywords", "Hierarchy,Pose,State" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Returns the items in the hierarchy pose" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PoseGetItems>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetItems, Pose), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::NewProp_Pose_MetaData)) }; // 1272709228
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::NewProp_ElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::NewProp_ElementType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::NewProp_ElementType = { "ElementType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetItems, ElementType), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::NewProp_ElementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::NewProp_ElementType_MetaData)) }; // 3496922284
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetItems, Items), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::NewProp_Items_MetaData)) }; // 2993270268
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::NewProp_ElementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::NewProp_ElementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::NewProp_Items,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HierarchyBase,
		&NewStructOps,
		"RigUnit_PoseGetItems",
		sizeof(FRigUnit_PoseGetItems),
		alignof(FRigUnit_PoseGetItems),
		Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PoseGetItems()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PoseGetItems.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PoseGetItems.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PoseGetItems.InnerSingleton;
	}

void FRigUnit_PoseGetItems::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_PoseGetItems::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Pose,
		ElementType,
		Items
	);
}


static_assert(std::is_polymorphic<FRigUnit_PoseGetItemsItemArray>() == std::is_polymorphic<FRigUnit_HierarchyBase>(), "USTRUCT FRigUnit_PoseGetItemsItemArray cannot be polymorphic unless super FRigUnit_HierarchyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PoseGetItemsItemArray;
class UScriptStruct* FRigUnit_PoseGetItemsItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PoseGetItemsItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PoseGetItemsItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PoseGetItemsItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PoseGetItemsItemArray_Execute;
		Arguments_FRigUnit_PoseGetItemsItemArray_Execute.Emplace(TEXT("Pose"), TEXT("FRigPose"));
		Arguments_FRigUnit_PoseGetItemsItemArray_Execute.Emplace(TEXT("ElementType"), TEXT("ERigElementType"));
		Arguments_FRigUnit_PoseGetItemsItemArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PoseGetItemsItemArray::Execute"), &FRigUnit_PoseGetItemsItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PoseGetItemsItemArray.OuterSingleton, Arguments_FRigUnit_PoseGetItemsItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PoseGetItemsItemArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PoseGetItemsItemArray>()
{
	return FRigUnit_PoseGetItemsItemArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ElementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Pose Cache" },
		{ "Comment", "/**\n* Returns the items in the hierarchy pose\n*/" },
		{ "DisplayName", "Get Pose Cache Items" },
		{ "Keywords", "Hierarchy,Pose,State" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Returns the items in the hierarchy pose" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PoseGetItemsItemArray>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetItemsItemArray, Pose), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewProp_Pose_MetaData)) }; // 1272709228
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewProp_ElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewProp_ElementType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewProp_ElementType = { "ElementType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetItemsItemArray, ElementType), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewProp_ElementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewProp_ElementType_MetaData)) }; // 3496922284
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetItemsItemArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewProp_Items_MetaData)) }; // 2461395651
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewProp_ElementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewProp_ElementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewProp_Items,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HierarchyBase,
		&NewStructOps,
		"RigUnit_PoseGetItemsItemArray",
		sizeof(FRigUnit_PoseGetItemsItemArray),
		alignof(FRigUnit_PoseGetItemsItemArray),
		Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PoseGetItemsItemArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PoseGetItemsItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PoseGetItemsItemArray.InnerSingleton;
	}

void FRigUnit_PoseGetItemsItemArray::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_PoseGetItemsItemArray::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Pose,
		ElementType,
		Items
	);
}


static_assert(std::is_polymorphic<FRigUnit_PoseGetDelta>() == std::is_polymorphic<FRigUnit_HierarchyBase>(), "USTRUCT FRigUnit_PoseGetDelta cannot be polymorphic unless super FRigUnit_HierarchyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PoseGetDelta;
class UScriptStruct* FRigUnit_PoseGetDelta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PoseGetDelta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PoseGetDelta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PoseGetDelta"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PoseGetDelta_Execute;
		Arguments_FRigUnit_PoseGetDelta_Execute.Emplace(TEXT("PoseA"), TEXT("FRigPose"));
		Arguments_FRigUnit_PoseGetDelta_Execute.Emplace(TEXT("PoseB"), TEXT("FRigPose"));
		Arguments_FRigUnit_PoseGetDelta_Execute.Emplace(TEXT("PositionThreshold"), TEXT("float"));
		Arguments_FRigUnit_PoseGetDelta_Execute.Emplace(TEXT("RotationThreshold"), TEXT("float"));
		Arguments_FRigUnit_PoseGetDelta_Execute.Emplace(TEXT("ScaleThreshold"), TEXT("float"));
		Arguments_FRigUnit_PoseGetDelta_Execute.Emplace(TEXT("CurveThreshold"), TEXT("float"));
		Arguments_FRigUnit_PoseGetDelta_Execute.Emplace(TEXT("ElementType"), TEXT("ERigElementType"));
		Arguments_FRigUnit_PoseGetDelta_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_PoseGetDelta_Execute.Emplace(TEXT("ItemsToCompare"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_PoseGetDelta_Execute.Emplace(TEXT("PosesAreEqual"), TEXT("bool"));
		Arguments_FRigUnit_PoseGetDelta_Execute.Emplace(TEXT("ItemsWithDelta"), TEXT("FRigElementKeyCollection"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PoseGetDelta::Execute"), &FRigUnit_PoseGetDelta::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PoseGetDelta.OuterSingleton, Arguments_FRigUnit_PoseGetDelta_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PoseGetDelta.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PoseGetDelta>()
{
	return FRigUnit_PoseGetDelta::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveThreshold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ElementType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ElementType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsToCompare_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsToCompare;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosesAreEqual_MetaData[];
#endif
		static void NewProp_PosesAreEqual_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PosesAreEqual;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemsWithDelta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemsWithDelta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Pose Cache" },
		{ "Comment", "/**\n* Compares two pose caches and compares their values.\n*/" },
		{ "DisplayName", "Get Pose Cache Delta" },
		{ "Keywords", "Hierarchy,Pose,State" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Compares two pose caches and compares their values." },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PoseGetDelta>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PoseA_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PoseA = { "PoseA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetDelta, PoseA), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PoseA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PoseA_MetaData)) }; // 1272709228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PoseB_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PoseB = { "PoseB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetDelta, PoseB), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PoseB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PoseB_MetaData)) }; // 1272709228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PositionThreshold_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The delta threshold for a translation / position difference. 0.0 disables position differences.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "The delta threshold for a translation / position difference. 0.0 disables position differences." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PositionThreshold = { "PositionThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetDelta, PositionThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PositionThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PositionThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_RotationThreshold_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The delta threshold for a rotation difference (in degrees). 0.0 disables rotation differences.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "The delta threshold for a rotation difference (in degrees). 0.0 disables rotation differences." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_RotationThreshold = { "RotationThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetDelta, RotationThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_RotationThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_RotationThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ScaleThreshold_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The delta threshold for a scale difference. 0.0 disables scale differences.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "The delta threshold for a scale difference. 0.0 disables scale differences." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ScaleThreshold = { "ScaleThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetDelta, ScaleThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ScaleThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ScaleThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_CurveThreshold_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The delta threshold for curve value difference. 0.0 disables curve differences.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "The delta threshold for curve value difference. 0.0 disables curve differences." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_CurveThreshold = { "CurveThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetDelta, CurveThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_CurveThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_CurveThreshold_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ElementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ElementType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ElementType = { "ElementType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetDelta, ElementType), Z_Construct_UEnum_ControlRig_ERigElementType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ElementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ElementType_MetaData)) }; // 3496922284
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Defines in which space transform deltas should be computed\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Defines in which space transform deltas should be computed" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetDelta, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_Space_MetaData)) }; // 1140043897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ItemsToCompare_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// An optional list of items to compare\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "An optional list of items to compare" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ItemsToCompare = { "ItemsToCompare", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetDelta, ItemsToCompare), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ItemsToCompare_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ItemsToCompare_MetaData)) }; // 2993270268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PosesAreEqual_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PosesAreEqual_SetBit(void* Obj)
	{
		((FRigUnit_PoseGetDelta*)Obj)->PosesAreEqual = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PosesAreEqual = { "PosesAreEqual", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_PoseGetDelta), &Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PosesAreEqual_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PosesAreEqual_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PosesAreEqual_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ItemsWithDelta_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ItemsWithDelta = { "ItemsWithDelta", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetDelta, ItemsWithDelta), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ItemsWithDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ItemsWithDelta_MetaData)) }; // 2993270268
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PoseA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PoseB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PositionThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_RotationThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ScaleThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_CurveThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ElementType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ElementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ItemsToCompare,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_PosesAreEqual,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewProp_ItemsWithDelta,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HierarchyBase,
		&NewStructOps,
		"RigUnit_PoseGetDelta",
		sizeof(FRigUnit_PoseGetDelta),
		alignof(FRigUnit_PoseGetDelta),
		Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PoseGetDelta.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PoseGetDelta.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PoseGetDelta.InnerSingleton;
	}

void FRigUnit_PoseGetDelta::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_PoseGetDelta::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		PoseA,
		PoseB,
		PositionThreshold,
		RotationThreshold,
		ScaleThreshold,
		CurveThreshold,
		ElementType,
		Space,
		ItemsToCompare,
		PosesAreEqual,
		ItemsWithDelta
	);
}


static_assert(std::is_polymorphic<FRigUnit_PoseGetTransform>() == std::is_polymorphic<FRigUnit_HierarchyBase>(), "USTRUCT FRigUnit_PoseGetTransform cannot be polymorphic unless super FRigUnit_HierarchyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PoseGetTransform;
class UScriptStruct* FRigUnit_PoseGetTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PoseGetTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PoseGetTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PoseGetTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PoseGetTransform_Execute;
		Arguments_FRigUnit_PoseGetTransform_Execute.Emplace(TEXT("Pose"), TEXT("FRigPose"));
		Arguments_FRigUnit_PoseGetTransform_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_PoseGetTransform_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_PoseGetTransform_Execute.Emplace(TEXT("Valid"), TEXT("bool"));
		Arguments_FRigUnit_PoseGetTransform_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_PoseGetTransform_Execute.Emplace(TEXT("CurveValue"), TEXT("float"));
		Arguments_FRigUnit_PoseGetTransform_Execute.Emplace(TEXT("CachedPoseElementIndex"), TEXT("int32"));
		Arguments_FRigUnit_PoseGetTransform_Execute.Emplace(TEXT("CachedPoseHash"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PoseGetTransform::Execute"), &FRigUnit_PoseGetTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PoseGetTransform.OuterSingleton, Arguments_FRigUnit_PoseGetTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PoseGetTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PoseGetTransform>()
{
	return FRigUnit_PoseGetTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Valid_MetaData[];
#endif
		static void NewProp_Valid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Valid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPoseElementIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CachedPoseElementIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPoseHash_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CachedPoseHash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Pose Cache" },
		{ "Comment", "/**\n* Returns the hierarchy's pose transform\n*/" },
		{ "DisplayName", "Get Pose Cache Transform" },
		{ "Keywords", "Hierarchy,Pose,State" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Returns the hierarchy's pose transform" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PoseGetTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetTransform, Pose), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Pose_MetaData)) }; // 1272709228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetTransform, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Item_MetaData)) }; // 2461395651
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09* Defines if the transform should be retrieved in local or global space\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Defines if the transform should be retrieved in local or global space" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetTransform, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Space_MetaData)) }; // 1140043897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Valid_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((FRigUnit_PoseGetTransform*)Obj)->Valid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_PoseGetTransform), &Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Valid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Valid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_CurveValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_CurveValue = { "CurveValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetTransform, CurveValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_CurveValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_CurveValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_CachedPoseElementIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_CachedPoseElementIndex = { "CachedPoseElementIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetTransform, CachedPoseElementIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_CachedPoseElementIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_CachedPoseElementIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_CachedPoseHash_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_CachedPoseHash = { "CachedPoseHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetTransform, CachedPoseHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_CachedPoseHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_CachedPoseHash_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Valid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_CurveValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_CachedPoseElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewProp_CachedPoseHash,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HierarchyBase,
		&NewStructOps,
		"RigUnit_PoseGetTransform",
		sizeof(FRigUnit_PoseGetTransform),
		alignof(FRigUnit_PoseGetTransform),
		Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PoseGetTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PoseGetTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PoseGetTransform.InnerSingleton;
	}

void FRigUnit_PoseGetTransform::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_PoseGetTransform::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Pose,
		Item,
		Space,
		Valid,
		Transform,
		CurveValue,
		CachedPoseElementIndex,
		CachedPoseHash
	);
}


static_assert(std::is_polymorphic<FRigUnit_PoseGetTransformArray>() == std::is_polymorphic<FRigUnit_HierarchyBase>(), "USTRUCT FRigUnit_PoseGetTransformArray cannot be polymorphic unless super FRigUnit_HierarchyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PoseGetTransformArray;
class UScriptStruct* FRigUnit_PoseGetTransformArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PoseGetTransformArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PoseGetTransformArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PoseGetTransformArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PoseGetTransformArray_Execute;
		Arguments_FRigUnit_PoseGetTransformArray_Execute.Emplace(TEXT("Pose"), TEXT("FRigPose"));
		Arguments_FRigUnit_PoseGetTransformArray_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_PoseGetTransformArray_Execute.Emplace(TEXT("Valid"), TEXT("bool"));
		Arguments_FRigUnit_PoseGetTransformArray_Execute.Emplace(TEXT("Transforms"), TEXT("TArray<FTransform>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PoseGetTransformArray::Execute"), &FRigUnit_PoseGetTransformArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PoseGetTransformArray.OuterSingleton, Arguments_FRigUnit_PoseGetTransformArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PoseGetTransformArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PoseGetTransformArray>()
{
	return FRigUnit_PoseGetTransformArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Valid_MetaData[];
#endif
		static void NewProp_Valid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Valid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Pose Cache" },
		{ "Comment", "/**\n* Returns an array of transforms from a given hierarchy pose\n*/" },
		{ "DisplayName", "Get Pose Cache Transform Array" },
		{ "Keywords", "Hierarchy,Pose,State" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Returns an array of transforms from a given hierarchy pose" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PoseGetTransformArray>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetTransformArray, Pose), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Pose_MetaData)) }; // 1272709228
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09* Defines if the transform should be retrieved in local or global space\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Defines if the transform should be retrieved in local or global space" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetTransformArray, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Space_MetaData)) }; // 1140043897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Valid_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((FRigUnit_PoseGetTransformArray*)Obj)->Valid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_PoseGetTransformArray), &Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Valid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Valid_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Transforms_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetTransformArray, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Transforms_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Valid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewProp_Transforms,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HierarchyBase,
		&NewStructOps,
		"RigUnit_PoseGetTransformArray",
		sizeof(FRigUnit_PoseGetTransformArray),
		alignof(FRigUnit_PoseGetTransformArray),
		Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PoseGetTransformArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PoseGetTransformArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PoseGetTransformArray.InnerSingleton;
	}

void FRigUnit_PoseGetTransformArray::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_PoseGetTransformArray::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Pose,
		Space,
		Valid,
		Transforms
	);
}


static_assert(std::is_polymorphic<FRigUnit_PoseGetCurve>() == std::is_polymorphic<FRigUnit_HierarchyBase>(), "USTRUCT FRigUnit_PoseGetCurve cannot be polymorphic unless super FRigUnit_HierarchyBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PoseGetCurve;
class UScriptStruct* FRigUnit_PoseGetCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PoseGetCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PoseGetCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PoseGetCurve"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PoseGetCurve_Execute;
		Arguments_FRigUnit_PoseGetCurve_Execute.Emplace(TEXT("Pose"), TEXT("FRigPose"));
		Arguments_FRigUnit_PoseGetCurve_Execute.Emplace(TEXT("Curve"), TEXT("FName"));
		Arguments_FRigUnit_PoseGetCurve_Execute.Emplace(TEXT("Valid"), TEXT("bool"));
		Arguments_FRigUnit_PoseGetCurve_Execute.Emplace(TEXT("CurveValue"), TEXT("float"));
		Arguments_FRigUnit_PoseGetCurve_Execute.Emplace(TEXT("CachedPoseElementIndex"), TEXT("int32"));
		Arguments_FRigUnit_PoseGetCurve_Execute.Emplace(TEXT("CachedPoseHash"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PoseGetCurve::Execute"), &FRigUnit_PoseGetCurve::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PoseGetCurve.OuterSingleton, Arguments_FRigUnit_PoseGetCurve_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PoseGetCurve.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PoseGetCurve>()
{
	return FRigUnit_PoseGetCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Valid_MetaData[];
#endif
		static void NewProp_Valid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Valid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPoseElementIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CachedPoseElementIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPoseHash_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CachedPoseHash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Pose Cache" },
		{ "Comment", "/**\n* Returns the hierarchy's pose curve value\n*/" },
		{ "DisplayName", "Get Pose Cache Curve" },
		{ "Keywords", "Hierarchy,Pose,State" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Returns the hierarchy's pose curve value" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PoseGetCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetCurve, Pose), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_Pose_MetaData)) }; // 1272709228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "Pins" },
		{ "CustomWidget", "CurveName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetCurve, Curve), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_Curve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_Valid_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((FRigUnit_PoseGetCurve*)Obj)->Valid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_PoseGetCurve), &Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_Valid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_Valid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_CurveValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_CurveValue = { "CurveValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetCurve, CurveValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_CurveValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_CurveValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_CachedPoseElementIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_CachedPoseElementIndex = { "CachedPoseElementIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetCurve, CachedPoseElementIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_CachedPoseElementIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_CachedPoseElementIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_CachedPoseHash_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_CachedPoseHash = { "CachedPoseHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseGetCurve, CachedPoseHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_CachedPoseHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_CachedPoseHash_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_Valid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_CurveValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_CachedPoseElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewProp_CachedPoseHash,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HierarchyBase,
		&NewStructOps,
		"RigUnit_PoseGetCurve",
		sizeof(FRigUnit_PoseGetCurve),
		alignof(FRigUnit_PoseGetCurve),
		Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PoseGetCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PoseGetCurve.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PoseGetCurve.InnerSingleton;
	}

void FRigUnit_PoseGetCurve::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_PoseGetCurve::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Pose,
		Curve,
		Valid,
		CurveValue,
		CachedPoseElementIndex,
		CachedPoseHash
	);
}


static_assert(std::is_polymorphic<FRigUnit_PoseLoop>() == std::is_polymorphic<FRigUnit_HierarchyBaseMutable>(), "USTRUCT FRigUnit_PoseLoop cannot be polymorphic unless super FRigUnit_HierarchyBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PoseLoop;
class UScriptStruct* FRigUnit_PoseLoop::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PoseLoop.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PoseLoop.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PoseLoop, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PoseLoop"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PoseLoop_Execute;
		Arguments_FRigUnit_PoseLoop_Execute.Emplace(TEXT("BlockToRun"), TEXT("FName"));
		Arguments_FRigUnit_PoseLoop_Execute.Emplace(TEXT("Pose"), TEXT("FRigPose"));
		Arguments_FRigUnit_PoseLoop_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_PoseLoop_Execute.Emplace(TEXT("GlobalTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_PoseLoop_Execute.Emplace(TEXT("LocalTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_PoseLoop_Execute.Emplace(TEXT("CurveValue"), TEXT("float"));
		Arguments_FRigUnit_PoseLoop_Execute.Emplace(TEXT("Index"), TEXT("int32"));
		Arguments_FRigUnit_PoseLoop_Execute.Emplace(TEXT("Count"), TEXT("int32"));
		Arguments_FRigUnit_PoseLoop_Execute.Emplace(TEXT("Ratio"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PoseLoop::Execute"), &FRigUnit_PoseLoop::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PoseLoop.OuterSingleton, Arguments_FRigUnit_PoseLoop_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PoseLoop.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PoseLoop>()
{
	return FRigUnit_PoseLoop::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockToRun_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BlockToRun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Item;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlobalTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlobalTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Completed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Pose Cache" },
		{ "Comment", "/**\n* Given a pose, execute iteratively across all items in the pose\n*/" },
		{ "DisplayName", "For Each Pose Cache Element" },
		{ "Icon", "EditorStyle|GraphEditor.Macro.ForEach_16x" },
		{ "Keywords", "Collection,Loop,Iterate" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "ToolTip", "Given a pose, execute iteratively across all items in the pose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PoseLoop>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_BlockToRun_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Singleton", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_BlockToRun = { "BlockToRun", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseLoop, BlockToRun), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_BlockToRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_BlockToRun_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseLoop, Pose), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Pose_MetaData)) }; // 1272709228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
		{ "Singleton", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseLoop, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Item_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_GlobalTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
		{ "Singleton", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_GlobalTransform = { "GlobalTransform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseLoop, GlobalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_GlobalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_GlobalTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_LocalTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
		{ "Singleton", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_LocalTransform = { "LocalTransform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseLoop, LocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_LocalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_LocalTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_CurveValue_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
		{ "Singleton", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_CurveValue = { "CurveValue", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseLoop, CurveValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_CurveValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_CurveValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
		{ "Singleton", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseLoop, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Count_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
		{ "Singleton", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseLoop, Count), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Count_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Count_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Ratio_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09* Ranging from 0.0 (first item) and 1.0 (last item)\n\x09* This is useful to drive a consecutive node with a \n\x09* curve or an ease to distribute a value.\n\x09*/" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
		{ "Singleton", "" },
		{ "ToolTip", "Ranging from 0.0 (first item) and 1.0 (last item)\nThis is useful to drive a consecutive node with a\ncurve or an ease to distribute a value." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseLoop, Ratio), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Ratio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Ratio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Completed_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Execution/RigUnit_Hierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseLoop, Completed), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Completed_MetaData)) }; // 1930646767
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_BlockToRun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_GlobalTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_LocalTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_CurveValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Ratio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewProp_Completed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HierarchyBaseMutable,
		&NewStructOps,
		"RigUnit_PoseLoop",
		sizeof(FRigUnit_PoseLoop),
		alignof(FRigUnit_PoseLoop),
		Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PoseLoop()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PoseLoop.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PoseLoop.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PoseLoop.InnerSingleton;
	}

void FRigUnit_PoseLoop::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = Completed;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_PoseLoop::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		BlockToRun,
		Pose,
		Item,
		GlobalTransform,
		LocalTransform,
		CurveValue,
		Index,
		Count,
		Ratio
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_HierarchyBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HierarchyBase_Statics::NewStructOps, TEXT("RigUnit_HierarchyBase"), &Z_Registration_Info_UScriptStruct_RigUnit_HierarchyBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HierarchyBase), 811855573U) },
		{ FRigUnit_HierarchyBaseMutable::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HierarchyBaseMutable_Statics::NewStructOps, TEXT("RigUnit_HierarchyBaseMutable"), &Z_Registration_Info_UScriptStruct_RigUnit_HierarchyBaseMutable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HierarchyBaseMutable), 125104825U) },
		{ FRigUnit_HierarchyGetParent::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParent_Statics::NewStructOps, TEXT("RigUnit_HierarchyGetParent"), &Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HierarchyGetParent), 415508315U) },
		{ FRigUnit_HierarchyGetParents::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParents_Statics::NewStructOps, TEXT("RigUnit_HierarchyGetParents"), &Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParents, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HierarchyGetParents), 161693166U) },
		{ FRigUnit_HierarchyGetParentsItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetParentsItemArray_Statics::NewStructOps, TEXT("RigUnit_HierarchyGetParentsItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetParentsItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HierarchyGetParentsItemArray), 2200192784U) },
		{ FRigUnit_HierarchyGetChildren::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetChildren_Statics::NewStructOps, TEXT("RigUnit_HierarchyGetChildren"), &Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetChildren, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HierarchyGetChildren), 3290448458U) },
		{ FRigUnit_HierarchyGetSiblings::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblings_Statics::NewStructOps, TEXT("RigUnit_HierarchyGetSiblings"), &Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetSiblings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HierarchyGetSiblings), 2343948987U) },
		{ FRigUnit_HierarchyGetSiblingsItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetSiblingsItemArray_Statics::NewStructOps, TEXT("RigUnit_HierarchyGetSiblingsItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetSiblingsItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HierarchyGetSiblingsItemArray), 1175612827U) },
		{ FRigUnit_HierarchyGetPose::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPose_Statics::NewStructOps, TEXT("RigUnit_HierarchyGetPose"), &Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HierarchyGetPose), 4018154965U) },
		{ FRigUnit_HierarchyGetPoseItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HierarchyGetPoseItemArray_Statics::NewStructOps, TEXT("RigUnit_HierarchyGetPoseItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_HierarchyGetPoseItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HierarchyGetPoseItemArray), 3015145412U) },
		{ FRigUnit_HierarchySetPose::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HierarchySetPose_Statics::NewStructOps, TEXT("RigUnit_HierarchySetPose"), &Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HierarchySetPose), 2039770450U) },
		{ FRigUnit_HierarchySetPoseItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_HierarchySetPoseItemArray_Statics::NewStructOps, TEXT("RigUnit_HierarchySetPoseItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_HierarchySetPoseItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_HierarchySetPoseItemArray), 140596406U) },
		{ FRigUnit_PoseIsEmpty::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PoseIsEmpty_Statics::NewStructOps, TEXT("RigUnit_PoseIsEmpty"), &Z_Registration_Info_UScriptStruct_RigUnit_PoseIsEmpty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PoseIsEmpty), 2564280905U) },
		{ FRigUnit_PoseGetItems::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PoseGetItems_Statics::NewStructOps, TEXT("RigUnit_PoseGetItems"), &Z_Registration_Info_UScriptStruct_RigUnit_PoseGetItems, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PoseGetItems), 2083429069U) },
		{ FRigUnit_PoseGetItemsItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PoseGetItemsItemArray_Statics::NewStructOps, TEXT("RigUnit_PoseGetItemsItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_PoseGetItemsItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PoseGetItemsItemArray), 3466635099U) },
		{ FRigUnit_PoseGetDelta::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PoseGetDelta_Statics::NewStructOps, TEXT("RigUnit_PoseGetDelta"), &Z_Registration_Info_UScriptStruct_RigUnit_PoseGetDelta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PoseGetDelta), 1720146265U) },
		{ FRigUnit_PoseGetTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PoseGetTransform_Statics::NewStructOps, TEXT("RigUnit_PoseGetTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_PoseGetTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PoseGetTransform), 3726385177U) },
		{ FRigUnit_PoseGetTransformArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PoseGetTransformArray_Statics::NewStructOps, TEXT("RigUnit_PoseGetTransformArray"), &Z_Registration_Info_UScriptStruct_RigUnit_PoseGetTransformArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PoseGetTransformArray), 723588248U) },
		{ FRigUnit_PoseGetCurve::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PoseGetCurve_Statics::NewStructOps, TEXT("RigUnit_PoseGetCurve"), &Z_Registration_Info_UScriptStruct_RigUnit_PoseGetCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PoseGetCurve), 1203879814U) },
		{ FRigUnit_PoseLoop::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PoseLoop_Statics::NewStructOps, TEXT("RigUnit_PoseLoop"), &Z_Registration_Info_UScriptStruct_RigUnit_PoseLoop, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PoseLoop), 602128033U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_3051489194(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Execution_RigUnit_Hierarchy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
