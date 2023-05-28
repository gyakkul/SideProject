// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_ParentSwitchConstraint() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_ParentSwitchConstraint>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_ParentSwitchConstraint cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraint;
class UScriptStruct* FRigUnit_ParentSwitchConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ParentSwitchConstraint"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ParentSwitchConstraint_Execute;
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("Subject"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("ParentIndex"), TEXT("int32"));
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("Parents"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("InitialGlobalTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("Switched"), TEXT("bool"));
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("CachedSubject"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("CachedParent"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_ParentSwitchConstraint_Execute.Emplace(TEXT("RelativeOffset"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ParentSwitchConstraint::Execute"), &FRigUnit_ParentSwitchConstraint::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraint.OuterSingleton, Arguments_FRigUnit_ParentSwitchConstraint_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraint.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ParentSwitchConstraint>()
{
	return FRigUnit_ParentSwitchConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Subject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialGlobalTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialGlobalTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Switched_MetaData[];
#endif
		static void NewProp_Switched_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Switched;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSubject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedSubject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedParent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * The Parent Switch Constraint is used to have an item follow one of multiple parents,\n * and allowing to switch between the parent in question.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Parent Switch Constraint" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SpaceSwitch" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The Parent Switch Constraint is used to have an item follow one of multiple parents,\nand allowing to switch between the parent in question." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ParentSwitchConstraint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Subject_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The subject to constrain\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The subject to constrain" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraint, Subject), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Subject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Subject_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_ParentIndex_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The parent index to use for constraining the subject\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The parent index to use for constraining the subject" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_ParentIndex = { "ParentIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraint, ParentIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_ParentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_ParentIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Parents_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The list of parents to constrain to\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The list of parents to constrain to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraint, Parents), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Parents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Parents_MetaData)) }; // 2993270268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_InitialGlobalTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The initial global transform for the subject\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The initial global transform for the subject" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_InitialGlobalTransform = { "InitialGlobalTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraint, InitialGlobalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_InitialGlobalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_InitialGlobalTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraint, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform result (full without weighting)\n\x09 */" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "Output", "" },
		{ "ToolTip", "The transform result (full without weighting)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraint, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Switched_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Returns true if the parent has changed\n\x09 */" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "Output", "" },
		{ "ToolTip", "Returns true if the parent has changed" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Switched_SetBit(void* Obj)
	{
		((FRigUnit_ParentSwitchConstraint*)Obj)->Switched = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Switched = { "Switched", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_ParentSwitchConstraint), &Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Switched_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Switched_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Switched_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_CachedSubject_MetaData[] = {
		{ "Comment", "// Used to cache the internally used subject\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "Used to cache the internally used subject" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_CachedSubject = { "CachedSubject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraint, CachedSubject), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_CachedSubject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_CachedSubject_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_CachedParent_MetaData[] = {
		{ "Comment", "// Used to cache the internally used parent\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "Used to cache the internally used parent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_CachedParent = { "CachedParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraint, CachedParent), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_CachedParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_CachedParent_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_RelativeOffset_MetaData[] = {
		{ "Comment", "// The cached relative offset between subject and parent\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The cached relative offset between subject and parent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_RelativeOffset = { "RelativeOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraint, RelativeOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_RelativeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_RelativeOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Subject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_ParentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Parents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_InitialGlobalTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_Switched,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_CachedSubject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_CachedParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewProp_RelativeOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_ParentSwitchConstraint",
		sizeof(FRigUnit_ParentSwitchConstraint),
		alignof(FRigUnit_ParentSwitchConstraint),
		Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraint.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraint.InnerSingleton;
	}

void FRigUnit_ParentSwitchConstraint::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ParentSwitchConstraint::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Subject,
		ParentIndex,
		Parents,
		InitialGlobalTransform,
		Weight,
		Transform,
		Switched,
		CachedSubject,
		CachedParent,
		RelativeOffset
	);
}


static_assert(std::is_polymorphic<FRigUnit_ParentSwitchConstraintArray>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_ParentSwitchConstraintArray cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraintArray;
class UScriptStruct* FRigUnit_ParentSwitchConstraintArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraintArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraintArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_ParentSwitchConstraintArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_ParentSwitchConstraintArray_Execute;
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("Subject"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("ParentIndex"), TEXT("int32"));
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("Parents"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("InitialGlobalTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("Switched"), TEXT("bool"));
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("CachedSubject"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("CachedParent"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_ParentSwitchConstraintArray_Execute.Emplace(TEXT("RelativeOffset"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_ParentSwitchConstraintArray::Execute"), &FRigUnit_ParentSwitchConstraintArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraintArray.OuterSingleton, Arguments_FRigUnit_ParentSwitchConstraintArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraintArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_ParentSwitchConstraintArray>()
{
	return FRigUnit_ParentSwitchConstraintArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Subject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParentIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialGlobalTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialGlobalTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Switched_MetaData[];
#endif
		static void NewProp_Switched_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Switched;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSubject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedSubject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedParent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/**\n * The Parent Switch Constraint is used to have an item follow one of multiple parents,\n * and allowing to switch between the parent in question.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Parent Switch Constraint" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SpaceSwitch" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The Parent Switch Constraint is used to have an item follow one of multiple parents,\nand allowing to switch between the parent in question." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_ParentSwitchConstraintArray>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Subject_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The subject to constrain\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The subject to constrain" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraintArray, Subject), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Subject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Subject_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_ParentIndex_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The parent index to use for constraining the subject\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The parent index to use for constraining the subject" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_ParentIndex = { "ParentIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraintArray, ParentIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_ParentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_ParentIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Parents_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The list of parents to constrain to\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The list of parents to constrain to" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraintArray, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Parents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Parents_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_InitialGlobalTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The initial global transform for the subject\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The initial global transform for the subject" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_InitialGlobalTransform = { "InitialGlobalTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraintArray, InitialGlobalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_InitialGlobalTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_InitialGlobalTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraintArray, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform result (full without weighting)\n\x09 */" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "Output", "" },
		{ "ToolTip", "The transform result (full without weighting)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraintArray, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Switched_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Returns true if the parent has changed\n\x09 */" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "Output", "" },
		{ "ToolTip", "Returns true if the parent has changed" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Switched_SetBit(void* Obj)
	{
		((FRigUnit_ParentSwitchConstraintArray*)Obj)->Switched = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Switched = { "Switched", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_ParentSwitchConstraintArray), &Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Switched_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Switched_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Switched_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_CachedSubject_MetaData[] = {
		{ "Comment", "// Used to cache the internally used subject\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "Used to cache the internally used subject" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_CachedSubject = { "CachedSubject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraintArray, CachedSubject), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_CachedSubject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_CachedSubject_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_CachedParent_MetaData[] = {
		{ "Comment", "// Used to cache the internally used parent\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "Used to cache the internally used parent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_CachedParent = { "CachedParent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraintArray, CachedParent), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_CachedParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_CachedParent_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_RelativeOffset_MetaData[] = {
		{ "Comment", "// The cached relative offset between subject and parent\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h" },
		{ "ToolTip", "The cached relative offset between subject and parent" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_RelativeOffset = { "RelativeOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_ParentSwitchConstraintArray, RelativeOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_RelativeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_RelativeOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Subject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_ParentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Parents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Parents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_InitialGlobalTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_Switched,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_CachedSubject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_CachedParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewProp_RelativeOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_ParentSwitchConstraintArray",
		sizeof(FRigUnit_ParentSwitchConstraintArray),
		alignof(FRigUnit_ParentSwitchConstraintArray),
		Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraintArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraintArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraintArray.InnerSingleton;
	}

void FRigUnit_ParentSwitchConstraintArray::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_ParentSwitchConstraintArray::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Parents_2_Array(Parents);
	
	StaticExecute(
		InExecuteContext,
		Subject,
		ParentIndex,
		Parents_2_Array,
		InitialGlobalTransform,
		Weight,
		Transform,
		Switched,
		CachedSubject,
		CachedParent,
		RelativeOffset
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ParentSwitchConstraint_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ParentSwitchConstraint_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_ParentSwitchConstraint::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraint_Statics::NewStructOps, TEXT("RigUnit_ParentSwitchConstraint"), &Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ParentSwitchConstraint), 3655796408U) },
		{ FRigUnit_ParentSwitchConstraintArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_ParentSwitchConstraintArray_Statics::NewStructOps, TEXT("RigUnit_ParentSwitchConstraintArray"), &Z_Registration_Info_UScriptStruct_RigUnit_ParentSwitchConstraintArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_ParentSwitchConstraintArray), 46396784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ParentSwitchConstraint_h_1689646028(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ParentSwitchConstraint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ParentSwitchConstraint_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
