// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Units/Hierarchy/RigUnit_SetTransform.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SetTransform() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetRotation();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetScale();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetTransformArray();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetTranslation();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMTransformSpace();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_SetTransform>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetTransform cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetTransform;
class UScriptStruct* FRigUnit_SetTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetTransform_Execute;
		Arguments_FRigUnit_SetTransform_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetTransform_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_SetTransform_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_SetTransform_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigUnit_SetTransform_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetTransform_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_SetTransform_Execute.Emplace(TEXT("CachedIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetTransform::Execute"), &FRigUnit_SetTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetTransform.OuterSingleton, Arguments_FRigUnit_SetTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetTransform>()
{
	return FRigUnit_SetTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitial_MetaData[];
#endif
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Comment", "/**\n * SetTransform is used to set a single transform on hierarchy.\n * \n * Note: For Controls when setting the initial transform this node\n * actually sets the Control's offset transform and resets the local\n * values to (0, 0, 0).\n */" },
		{ "DisplayName", "Set Transform" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetBoneTransform,SetControlTransform,SetInitialTransform,SetSpaceTransform" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "NodeColor", "0, 0.364706, 1.0" },
		{ "TemplateName", "Set Transform" },
		{ "ToolTip", "SetTransform is used to set a single transform on hierarchy.\n\nNote: For Controls when setting the initial transform this node\nactually sets the Control's offset transform and resets the local\nvalues to (0, 0, 0)." },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The item to set the transform for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "The item to set the transform for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTransform, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Item_MetaData)) }; // 2461395651
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the transform should be set in local or global space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Defines if the transform should be set in local or global space" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTransform, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Space_MetaData)) }; // 1140043897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_bInitial_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the transform should be set as current (false) or initial (true).\n\x09 * Initial transforms for bones and other elements in the hierarchy represent the reference pose's value.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Defines if the transform should be set as current (false) or initial (true).\nInitial transforms for bones and other elements in the hierarchy represent the reference pose's value." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((FRigUnit_SetTransform*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetTransform), &Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_bInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_bInitial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new transform of the given item\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "The new transform of the given item" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTransform, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Defines how much the change will be applied\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Defines how much the change will be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTransform, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// If set to true children of affected items in the hierarchy\n// will follow the transform change - otherwise only the parent will move.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "If set to true children of affected items in the hierarchy\nwill follow the transform change - otherwise only the parent will move." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_SetTransform*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetTransform), &Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTransform, CachedIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_CachedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_CachedIndex_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewProp_CachedIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_SetTransform",
		sizeof(FRigUnit_SetTransform),
		alignof(FRigUnit_SetTransform),
		Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetTransform.InnerSingleton;
	}

void FRigUnit_SetTransform::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetTransform::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		Space,
		bInitial,
		Value,
		Weight,
		bPropagateToChildren,
		CachedIndex
	);
}


static_assert(std::is_polymorphic<FRigUnit_SetTranslation>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetTranslation cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetTranslation;
class UScriptStruct* FRigUnit_SetTranslation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetTranslation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetTranslation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetTranslation, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetTranslation"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetTranslation_Execute;
		Arguments_FRigUnit_SetTranslation_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetTranslation_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_SetTranslation_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_SetTranslation_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigUnit_SetTranslation_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetTranslation_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_SetTranslation_Execute.Emplace(TEXT("CachedIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetTranslation::Execute"), &FRigUnit_SetTranslation::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetTranslation.OuterSingleton, Arguments_FRigUnit_SetTranslation_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetTranslation.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetTranslation>()
{
	return FRigUnit_SetTranslation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitial_MetaData[];
#endif
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Comment", "/**\n * SetTranslation is used to set a single translation on hierarchy.\n */" },
		{ "DisplayName", "Set Translation" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetBoneTranslation,SetControlTranslation,SetInitialTranslation,SetSpaceTranslation,SetBoneLocation,SetControlLocation,SetInitialLocation,SetSpaceLocation,SetBonePosition,SetControlPosition,SetInitialPosition,SetSpacePosition,SetTranslation,SetLocation,SetPosition" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "NodeColor", "0, 0.364706, 1.0" },
		{ "TemplateName", "Set Transform" },
		{ "ToolTip", "SetTranslation is used to set a single translation on hierarchy." },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetTranslation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The item to set the translation for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "The item to set the translation for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTranslation, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Item_MetaData)) }; // 2461395651
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the translation should be set in local or global space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Defines if the translation should be set in local or global space" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTranslation, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Space_MetaData)) }; // 1140043897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_bInitial_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the transform should be set as current (false) or initial (true).\n\x09 * Initial transforms for bones and other elements in the hierarchy represent the reference pose's value.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Defines if the transform should be set as current (false) or initial (true).\nInitial transforms for bones and other elements in the hierarchy represent the reference pose's value." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((FRigUnit_SetTranslation*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetTranslation), &Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_bInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_bInitial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new translation of the given item\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "The new translation of the given item" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTranslation, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Defines how much the change will be applied\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Defines how much the change will be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTranslation, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// If set to true children of affected items in the hierarchy\n// will follow the transform change - otherwise only the parent will move.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "If set to true children of affected items in the hierarchy\nwill follow the transform change - otherwise only the parent will move." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_SetTranslation*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetTranslation), &Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTranslation, CachedIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_CachedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_CachedIndex_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewProp_CachedIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_SetTranslation",
		sizeof(FRigUnit_SetTranslation),
		alignof(FRigUnit_SetTranslation),
		Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetTranslation()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetTranslation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetTranslation.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetTranslation.InnerSingleton;
	}

void FRigUnit_SetTranslation::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetTranslation::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		Space,
		bInitial,
		Value,
		Weight,
		bPropagateToChildren,
		CachedIndex
	);
}


static_assert(std::is_polymorphic<FRigUnit_SetRotation>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetRotation cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetRotation;
class UScriptStruct* FRigUnit_SetRotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetRotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetRotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetRotation, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetRotation"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetRotation_Execute;
		Arguments_FRigUnit_SetRotation_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetRotation_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_SetRotation_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_SetRotation_Execute.Emplace(TEXT("Value"), TEXT("FQuat"));
		Arguments_FRigUnit_SetRotation_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetRotation_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_SetRotation_Execute.Emplace(TEXT("CachedIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetRotation::Execute"), &FRigUnit_SetRotation::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetRotation.OuterSingleton, Arguments_FRigUnit_SetRotation_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetRotation.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetRotation>()
{
	return FRigUnit_SetRotation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitial_MetaData[];
#endif
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Comment", "/**\n * SetRotation is used to set a single rotation on hierarchy.\n */" },
		{ "DisplayName", "Set Rotation" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetBoneRotation,SetControlRotation,SetInitialRotation,SetSpaceRotation,SetBoneOrientation,SetControlOrientation,SetInitialOrientation,SetSpaceOrientation,SetRotation,SetOrientation" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "NodeColor", "0, 0.364706, 1.0" },
		{ "TemplateName", "Set Transform" },
		{ "ToolTip", "SetRotation is used to set a single rotation on hierarchy." },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetRotation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The item to set the rotation for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "The item to set the rotation for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRotation, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Item_MetaData)) }; // 2461395651
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the rotation should be set in local or global space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Defines if the rotation should be set in local or global space" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRotation, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Space_MetaData)) }; // 1140043897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_bInitial_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the transform should be set as current (false) or initial (true).\n\x09 * Initial transforms for bones and other elements in the hierarchy represent the reference pose's value.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Defines if the transform should be set as current (false) or initial (true).\nInitial transforms for bones and other elements in the hierarchy represent the reference pose's value." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((FRigUnit_SetRotation*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetRotation), &Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_bInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_bInitial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new rotation of the given item\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "The new rotation of the given item" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRotation, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Defines how much the change will be applied\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Defines how much the change will be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRotation, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// If set to true children of affected items in the hierarchy\n// will follow the transform change - otherwise only the parent will move.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "If set to true children of affected items in the hierarchy\nwill follow the transform change - otherwise only the parent will move." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_SetRotation*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetRotation), &Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRotation, CachedIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_CachedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_CachedIndex_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewProp_CachedIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_SetRotation",
		sizeof(FRigUnit_SetRotation),
		alignof(FRigUnit_SetRotation),
		Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetRotation()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetRotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetRotation.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetRotation.InnerSingleton;
	}

void FRigUnit_SetRotation::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetRotation::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		Space,
		bInitial,
		Value,
		Weight,
		bPropagateToChildren,
		CachedIndex
	);
}


static_assert(std::is_polymorphic<FRigUnit_SetScale>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetScale cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetScale;
class UScriptStruct* FRigUnit_SetScale::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetScale.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetScale.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetScale, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetScale"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetScale_Execute;
		Arguments_FRigUnit_SetScale_Execute.Emplace(TEXT("Item"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetScale_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_SetScale_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_SetScale_Execute.Emplace(TEXT("Scale"), TEXT("FVector"));
		Arguments_FRigUnit_SetScale_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetScale_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_SetScale_Execute.Emplace(TEXT("CachedIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetScale::Execute"), &FRigUnit_SetScale::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetScale.OuterSingleton, Arguments_FRigUnit_SetScale_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetScale.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetScale>()
{
	return FRigUnit_SetScale::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitial_MetaData[];
#endif
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Comment", "/**\n * SetScale is used to set a single scale on hierarchy.\n */" },
		{ "DisplayName", "Set Scale" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetBoneScale,SetControlScale,SetInitialScale,SetSpaceScale,SetScale" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "NodeColor", "0, 0.364706, 1.0" },
		{ "ToolTip", "SetScale is used to set a single scale on hierarchy." },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetScale>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The item to set the scale for\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "The item to set the scale for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetScale, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Item_MetaData)) }; // 2461395651
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the scale should be set in local or global space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Defines if the scale should be set in local or global space" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetScale, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Space_MetaData)) }; // 1140043897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_bInitial_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the transform should be set as current (false) or initial (true).\n\x09 * Initial transforms for bones and other elements in the hierarchy represent the reference pose's value.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Defines if the transform should be set as current (false) or initial (true).\nInitial transforms for bones and other elements in the hierarchy represent the reference pose's value." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((FRigUnit_SetScale*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetScale), &Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_bInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_bInitial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new scale of the given item\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "The new scale of the given item" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetScale, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Defines how much the change will be applied\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Defines how much the change will be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetScale, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// If set to true children of affected items in the hierarchy\n// will follow the transform change - otherwise only the parent will move.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "If set to true children of affected items in the hierarchy\nwill follow the transform change - otherwise only the parent will move." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_SetScale*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetScale), &Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetScale, CachedIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_CachedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_CachedIndex_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewProp_CachedIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_SetScale",
		sizeof(FRigUnit_SetScale),
		alignof(FRigUnit_SetScale),
		Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetScale()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetScale.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetScale.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetScale.InnerSingleton;
	}

void FRigUnit_SetScale::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetScale::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Item,
		Space,
		bInitial,
		Scale,
		Weight,
		bPropagateToChildren,
		CachedIndex
	);
}


static_assert(std::is_polymorphic<FRigUnit_SetTransformArray>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetTransformArray cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetTransformArray;
class UScriptStruct* FRigUnit_SetTransformArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetTransformArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetTransformArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetTransformArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetTransformArray_Execute;
		Arguments_FRigUnit_SetTransformArray_Execute.Emplace(TEXT("Items"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_SetTransformArray_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_SetTransformArray_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_SetTransformArray_Execute.Emplace(TEXT("Transforms"), TEXT("TArray<FTransform>"));
		Arguments_FRigUnit_SetTransformArray_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetTransformArray_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_SetTransformArray_Execute.Emplace(TEXT("CachedIndex"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetTransformArray::Execute"), &FRigUnit_SetTransformArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetTransformArray.OuterSingleton, Arguments_FRigUnit_SetTransformArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetTransformArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetTransformArray>()
{
	return FRigUnit_SetTransformArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Items;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitial_MetaData[];
#endif
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * SetTransformArray is used to set an array of transforms on the hierarchy.\n * \n * Note: For Controls when setting the initial transform this node\n * actually sets the Control's offset transform and resets the local\n * values to (0, 0, 0).\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Set Transform Array" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetBoneTransform,SetControlTransform,SetInitialTransform,SetSpaceTransform" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "NodeColor", "0, 0.364706, 1.0" },
		{ "ToolTip", "SetTransformArray is used to set an array of transforms on the hierarchy.\n\nNote: For Controls when setting the initial transform this node\nactually sets the Control's offset transform and resets the local\nvalues to (0, 0, 0)." },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetTransformArray>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The item to set the transform for\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "The item to set the transform for" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTransformArray, Items), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Items_MetaData)) }; // 2993270268
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the transform should be set in local or global space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Defines if the transform should be set in local or global space" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTransformArray, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Space_MetaData)) }; // 1140043897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_bInitial_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the transform should be set as current (false) or initial (true).\n\x09 * Initial transforms for bones and other elements in the hierarchy represent the reference pose's value.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Defines if the transform should be set as current (false) or initial (true).\nInitial transforms for bones and other elements in the hierarchy represent the reference pose's value." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((FRigUnit_SetTransformArray*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetTransformArray), &Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_bInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_bInitial_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Transforms_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new transform of the given item\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "The new transform of the given item" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTransformArray, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Transforms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Defines how much the change will be applied\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Defines how much the change will be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTransformArray, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// If set to true children of affected items in the hierarchy\n// will follow the transform change - otherwise only the parent will move.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "If set to true children of affected items in the hierarchy\nwill follow the transform change - otherwise only the parent will move." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_SetTransformArray*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetTransformArray), &Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_bPropagateToChildren_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_CachedIndex_Inner = { "CachedIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(nullptr, 0) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTransformArray, CachedIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_CachedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_CachedIndex_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_CachedIndex_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewProp_CachedIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_SetTransformArray",
		sizeof(FRigUnit_SetTransformArray),
		alignof(FRigUnit_SetTransformArray),
		Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetTransformArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetTransformArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetTransformArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetTransformArray.InnerSingleton;
	}

void FRigUnit_SetTransformArray::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetTransformArray::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FTransform> Transforms_3_Array(Transforms);
	
	StaticExecute(
		InExecuteContext,
		Items,
		Space,
		bInitial,
		Transforms_3_Array,
		Weight,
		bPropagateToChildren,
		CachedIndex
	);
}


static_assert(std::is_polymorphic<FRigUnit_SetTransformItemArray>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetTransformItemArray cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetTransformItemArray;
class UScriptStruct* FRigUnit_SetTransformItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetTransformItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetTransformItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetTransformItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetTransformItemArray_Execute;
		Arguments_FRigUnit_SetTransformItemArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_SetTransformItemArray_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_SetTransformItemArray_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_SetTransformItemArray_Execute.Emplace(TEXT("Transforms"), TEXT("TArray<FTransform>"));
		Arguments_FRigUnit_SetTransformItemArray_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetTransformItemArray_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_SetTransformItemArray_Execute.Emplace(TEXT("CachedIndex"), TEXT("TArray<FCachedRigElement>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetTransformItemArray::Execute"), &FRigUnit_SetTransformItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetTransformItemArray.OuterSingleton, Arguments_FRigUnit_SetTransformItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetTransformItemArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetTransformItemArray>()
{
	return FRigUnit_SetTransformItemArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitial_MetaData[];
#endif
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transforms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedIndex_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedIndex_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Transforms" },
		{ "Comment", "/**\n * SetTransformArray is used to set an array of transforms on the hierarchy.\n * \n * Note: For Controls when setting the initial transform this node\n * actually sets the Control's offset transform and resets the local\n * values to (0, 0, 0).\n */" },
		{ "DisplayName", "Set Transform Array" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetBoneTransform,SetControlTransform,SetInitialTransform,SetSpaceTransform" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "NodeColor", "0, 0.364706, 1.0" },
		{ "ToolTip", "SetTransformArray is used to set an array of transforms on the hierarchy.\n\nNote: For Controls when setting the initial transform this node\nactually sets the Control's offset transform and resets the local\nvalues to (0, 0, 0)." },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetTransformItemArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The item to set the transform for\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "The item to set the transform for" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTransformItemArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Items_MetaData)) }; // 2461395651
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the transform should be set in local or global space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Defines if the transform should be set in local or global space" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTransformItemArray, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Space_MetaData)) }; // 1140043897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_bInitial_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the transform should be set as current (false) or initial (true).\n\x09 * Initial transforms for bones and other elements in the hierarchy represent the reference pose's value.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Defines if the transform should be set as current (false) or initial (true).\nInitial transforms for bones and other elements in the hierarchy represent the reference pose's value." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((FRigUnit_SetTransformItemArray*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetTransformItemArray), &Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_bInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_bInitial_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Transforms_Inner = { "Transforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Transforms_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new transform of the given item\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "The new transform of the given item" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Transforms = { "Transforms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTransformItemArray, Transforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Transforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Transforms_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Defines how much the change will be applied\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Defines how much the change will be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTransformItemArray, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// If set to true children of affected items in the hierarchy\n// will follow the transform change - otherwise only the parent will move.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "If set to true children of affected items in the hierarchy\nwill follow the transform change - otherwise only the parent will move." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_SetTransformItemArray*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetTransformItemArray), &Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_bPropagateToChildren_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_CachedIndex_Inner = { "CachedIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(nullptr, 0) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_CachedIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_SetTransform.h" },
		{ "ToolTip", "Used to cache the internally used index" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_CachedIndex = { "CachedIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTransformItemArray, CachedIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_CachedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_CachedIndex_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Transforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Transforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_CachedIndex_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewProp_CachedIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_SetTransformItemArray",
		sizeof(FRigUnit_SetTransformItemArray),
		alignof(FRigUnit_SetTransformItemArray),
		Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetTransformItemArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetTransformItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetTransformItemArray.InnerSingleton;
	}

void FRigUnit_SetTransformItemArray::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetTransformItemArray::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	TArrayView<const FTransform> Transforms_3_Array(Transforms);
	
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		Space,
		bInitial,
		Transforms_3_Array,
		Weight,
		bPropagateToChildren,
		CachedIndex
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetTransform_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetTransform_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_SetTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetTransform_Statics::NewStructOps, TEXT("RigUnit_SetTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_SetTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetTransform), 1057342775U) },
		{ FRigUnit_SetTranslation::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetTranslation_Statics::NewStructOps, TEXT("RigUnit_SetTranslation"), &Z_Registration_Info_UScriptStruct_RigUnit_SetTranslation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetTranslation), 1715114071U) },
		{ FRigUnit_SetRotation::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetRotation_Statics::NewStructOps, TEXT("RigUnit_SetRotation"), &Z_Registration_Info_UScriptStruct_RigUnit_SetRotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetRotation), 279462121U) },
		{ FRigUnit_SetScale::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetScale_Statics::NewStructOps, TEXT("RigUnit_SetScale"), &Z_Registration_Info_UScriptStruct_RigUnit_SetScale, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetScale), 1666910633U) },
		{ FRigUnit_SetTransformArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetTransformArray_Statics::NewStructOps, TEXT("RigUnit_SetTransformArray"), &Z_Registration_Info_UScriptStruct_RigUnit_SetTransformArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetTransformArray), 2496512947U) },
		{ FRigUnit_SetTransformItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetTransformItemArray_Statics::NewStructOps, TEXT("RigUnit_SetTransformItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_SetTransformItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetTransformItemArray), 4257332017U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetTransform_h_2963114593(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_SetTransform_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
