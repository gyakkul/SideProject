// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h"
#include "FABRIK.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_FABRIK() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFABRIKChainLink();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKeyCollection();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FABRIK();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FABRIK_WorkData;
class UScriptStruct* FRigUnit_FABRIK_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FABRIK_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FABRIK_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_FABRIK_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FABRIK_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_FABRIK_WorkData>()
{
	return FRigUnit_FABRIK_WorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Chain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Chain;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedEffector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedEffector;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FABRIK_WorkData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewProp_Chain_Inner = { "Chain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFABRIKChainLink, METADATA_PARAMS(nullptr, 0) }; // 820746939
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewProp_Chain_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewProp_Chain = { "Chain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIK_WorkData, Chain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewProp_Chain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewProp_Chain_MetaData)) }; // 820746939
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewProp_CachedItems_Inner = { "CachedItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(nullptr, 0) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewProp_CachedItems_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewProp_CachedItems = { "CachedItems", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIK_WorkData, CachedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewProp_CachedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewProp_CachedItems_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewProp_CachedEffector_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewProp_CachedEffector = { "CachedEffector", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIK_WorkData, CachedEffector), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewProp_CachedEffector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewProp_CachedEffector_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewProp_Chain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewProp_Chain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewProp_CachedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewProp_CachedItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewProp_CachedEffector,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_FABRIK_WorkData",
		sizeof(FRigUnit_FABRIK_WorkData),
		alignof(FRigUnit_FABRIK_WorkData),
		Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_FABRIK_WorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FABRIK_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_FABRIK_WorkData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_FABRIK>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_FABRIK cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FABRIK;
class UScriptStruct* FRigUnit_FABRIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FABRIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FABRIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FABRIK, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_FABRIK"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FABRIK_Execute;
		Arguments_FRigUnit_FABRIK_Execute.Emplace(TEXT("StartBone"), TEXT("FName"));
		Arguments_FRigUnit_FABRIK_Execute.Emplace(TEXT("EffectorBone"), TEXT("FName"));
		Arguments_FRigUnit_FABRIK_Execute.Emplace(TEXT("EffectorTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_FABRIK_Execute.Emplace(TEXT("Precision"), TEXT("float"));
		Arguments_FRigUnit_FABRIK_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_FABRIK_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_FABRIK_Execute.Emplace(TEXT("MaxIterations"), TEXT("int32"));
		Arguments_FRigUnit_FABRIK_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_FABRIK_WorkData"));
		Arguments_FRigUnit_FABRIK_Execute.Emplace(TEXT("bSetEffectorTransform"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FABRIK::Execute"), &FRigUnit_FABRIK::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FABRIK.OuterSingleton, Arguments_FRigUnit_FABRIK_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FABRIK.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_FABRIK>()
{
	return FRigUnit_FABRIK::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectorBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EffectorBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectorTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectorTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetEffectorTransform_MetaData[];
#endif
		static void NewProp_bSetEffectorTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetEffectorTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * The FABRIK solver can solve N-Bone chains using \n * the Forward and Backward Reaching Inverse Kinematics algorithm.\n * For now this node supports single effector chains only.\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Basic FABRIK" },
		{ "Keywords", "N-Bone,IK" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The FABRIK solver can solve N-Bone chains using\nthe Forward and Backward Reaching Inverse Kinematics algorithm.\nFor now this node supports single effector chains only." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FABRIK>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_StartBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The first bone in the chain to solve\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The first bone in the chain to solve" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_StartBone = { "StartBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIK, StartBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_StartBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_StartBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_EffectorBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The last bone in the chain to solve - the effector\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The last bone in the chain to solve - the effector" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_EffectorBone = { "EffectorBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIK, EffectorBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_EffectorBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_EffectorBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_EffectorTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform of the effector in global space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The transform of the effector in global space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_EffectorTransform = { "EffectorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIK, EffectorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_EffectorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_EffectorTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_Precision_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The precision to use for the fabrik solver\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The precision to use for the fabrik solver" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIK, Precision), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_Precision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_Precision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the IK should be applied.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The weight of the solver - how much the IK should be applied." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIK, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_FABRIK*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_FABRIK), &Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The maximum number of iterations. Values between 4 and 16 are common.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The maximum number of iterations. Values between 4 and 16 are common." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIK, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIK, WorkData), Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_WorkData_MetaData)) }; // 993782736
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_bSetEffectorTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09* The option to set the effector transform\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The option to set the effector transform" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_bSetEffectorTransform_SetBit(void* Obj)
	{
		((FRigUnit_FABRIK*)Obj)->bSetEffectorTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_bSetEffectorTransform = { "bSetEffectorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_FABRIK), &Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_bSetEffectorTransform_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_bSetEffectorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_bSetEffectorTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_StartBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_EffectorBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_EffectorTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_Precision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_MaxIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_WorkData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewProp_bSetEffectorTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_FABRIK",
		sizeof(FRigUnit_FABRIK),
		alignof(FRigUnit_FABRIK),
		Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FABRIK()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_FABRIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FABRIK.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_FABRIK.InnerSingleton;
	}

void FRigUnit_FABRIK::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_FABRIK::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		StartBone,
		EffectorBone,
		EffectorTransform,
		Precision,
		Weight,
		bPropagateToChildren,
		MaxIterations,
		WorkData,
		bSetEffectorTransform
	);
}


static_assert(std::is_polymorphic<FRigUnit_FABRIKPerItem>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_FABRIKPerItem cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FABRIKPerItem;
class UScriptStruct* FRigUnit_FABRIKPerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FABRIKPerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FABRIKPerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_FABRIKPerItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FABRIKPerItem_Execute;
		Arguments_FRigUnit_FABRIKPerItem_Execute.Emplace(TEXT("Items"), TEXT("FRigElementKeyCollection"));
		Arguments_FRigUnit_FABRIKPerItem_Execute.Emplace(TEXT("EffectorTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_FABRIKPerItem_Execute.Emplace(TEXT("Precision"), TEXT("float"));
		Arguments_FRigUnit_FABRIKPerItem_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_FABRIKPerItem_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_FABRIKPerItem_Execute.Emplace(TEXT("MaxIterations"), TEXT("int32"));
		Arguments_FRigUnit_FABRIKPerItem_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_FABRIK_WorkData"));
		Arguments_FRigUnit_FABRIKPerItem_Execute.Emplace(TEXT("bSetEffectorTransform"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FABRIKPerItem::Execute"), &FRigUnit_FABRIKPerItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FABRIKPerItem.OuterSingleton, Arguments_FRigUnit_FABRIKPerItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FABRIKPerItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_FABRIKPerItem>()
{
	return FRigUnit_FABRIKPerItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectorTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectorTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetEffectorTransform_MetaData[];
#endif
		static void NewProp_bSetEffectorTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetEffectorTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * The FABRIK solver can solve N-Bone chains using \n * the Forward and Backward Reaching Inverse Kinematics algorithm.\n * For now this node supports single effector chains only.\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Basic FABRIK" },
		{ "Keywords", "N-Bone,IK" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The FABRIK solver can solve N-Bone chains using\nthe Forward and Backward Reaching Inverse Kinematics algorithm.\nFor now this node supports single effector chains only." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FABRIKPerItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The chain to use\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The chain to use" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIKPerItem, Items), Z_Construct_UScriptStruct_FRigElementKeyCollection, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_Items_MetaData)) }; // 2993270268
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_EffectorTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform of the effector in global space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The transform of the effector in global space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_EffectorTransform = { "EffectorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIKPerItem, EffectorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_EffectorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_EffectorTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_Precision_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The precision to use for the fabrik solver\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The precision to use for the fabrik solver" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIKPerItem, Precision), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_Precision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_Precision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the IK should be applied.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The weight of the solver - how much the IK should be applied." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIKPerItem, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_FABRIKPerItem*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_FABRIKPerItem), &Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The maximum number of iterations. Values between 4 and 16 are common.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The maximum number of iterations. Values between 4 and 16 are common." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIKPerItem, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIKPerItem, WorkData), Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_WorkData_MetaData)) }; // 993782736
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_bSetEffectorTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09* The option to set the effector transform\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The option to set the effector transform" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_bSetEffectorTransform_SetBit(void* Obj)
	{
		((FRigUnit_FABRIKPerItem*)Obj)->bSetEffectorTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_bSetEffectorTransform = { "bSetEffectorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_FABRIKPerItem), &Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_bSetEffectorTransform_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_bSetEffectorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_bSetEffectorTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_EffectorTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_Precision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_MaxIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_WorkData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewProp_bSetEffectorTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_FABRIKPerItem",
		sizeof(FRigUnit_FABRIKPerItem),
		alignof(FRigUnit_FABRIKPerItem),
		Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_FABRIKPerItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FABRIKPerItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_FABRIKPerItem.InnerSingleton;
	}

void FRigUnit_FABRIKPerItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_FABRIKPerItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Items,
		EffectorTransform,
		Precision,
		Weight,
		bPropagateToChildren,
		MaxIterations,
		WorkData,
		bSetEffectorTransform
	);
}


static_assert(std::is_polymorphic<FRigUnit_FABRIKItemArray>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_FABRIKItemArray cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FABRIKItemArray;
class UScriptStruct* FRigUnit_FABRIKItemArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FABRIKItemArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FABRIKItemArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_FABRIKItemArray"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FABRIKItemArray_Execute;
		Arguments_FRigUnit_FABRIKItemArray_Execute.Emplace(TEXT("Items"), TEXT("TArray<FRigElementKey>"));
		Arguments_FRigUnit_FABRIKItemArray_Execute.Emplace(TEXT("EffectorTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_FABRIKItemArray_Execute.Emplace(TEXT("Precision"), TEXT("float"));
		Arguments_FRigUnit_FABRIKItemArray_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_FABRIKItemArray_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_FABRIKItemArray_Execute.Emplace(TEXT("MaxIterations"), TEXT("int32"));
		Arguments_FRigUnit_FABRIKItemArray_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_FABRIK_WorkData"));
		Arguments_FRigUnit_FABRIKItemArray_Execute.Emplace(TEXT("bSetEffectorTransform"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FABRIKItemArray::Execute"), &FRigUnit_FABRIKItemArray::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FABRIKItemArray.OuterSingleton, Arguments_FRigUnit_FABRIKItemArray_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FABRIKItemArray.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_FABRIKItemArray>()
{
	return FRigUnit_FABRIKItemArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectorTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectorTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetEffectorTransform_MetaData[];
#endif
		static void NewProp_bSetEffectorTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetEffectorTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * The FABRIK solver can solve N-Bone chains using \n * the Forward and Backward Reaching Inverse Kinematics algorithm.\n * For now this node supports single effector chains only.\n */" },
		{ "DisplayName", "Basic FABRIK" },
		{ "Keywords", "N-Bone,IK" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "NodeColor", "0 1 1" },
		{ "ToolTip", "The FABRIK solver can solve N-Bone chains using\nthe Forward and Backward Reaching Inverse Kinematics algorithm.\nFor now this node supports single effector chains only." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FABRIKItemArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(nullptr, 0) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The chain to use\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The chain to use" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIKItemArray, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_Items_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_EffectorTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform of the effector in global space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The transform of the effector in global space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_EffectorTransform = { "EffectorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIKItemArray, EffectorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_EffectorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_EffectorTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_Precision_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The precision to use for the fabrik solver\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The precision to use for the fabrik solver" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIKItemArray, Precision), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_Precision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_Precision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the solver - how much the IK should be applied.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The weight of the solver - how much the IK should be applied." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIKItemArray, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_FABRIKItemArray*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_FABRIKItemArray), &Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The maximum number of iterations. Values between 4 and 16 are common.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The maximum number of iterations. Values between 4 and 16 are common." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIKItemArray, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FABRIKItemArray, WorkData), Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_WorkData_MetaData)) }; // 993782736
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_bSetEffectorTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09* The option to set the effector transform\n\x09*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_FABRIK.h" },
		{ "ToolTip", "The option to set the effector transform" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_bSetEffectorTransform_SetBit(void* Obj)
	{
		((FRigUnit_FABRIKItemArray*)Obj)->bSetEffectorTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_bSetEffectorTransform = { "bSetEffectorTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_FABRIKItemArray), &Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_bSetEffectorTransform_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_bSetEffectorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_bSetEffectorTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_EffectorTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_Precision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_MaxIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_WorkData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewProp_bSetEffectorTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_FABRIKItemArray",
		sizeof(FRigUnit_FABRIKItemArray),
		alignof(FRigUnit_FABRIKItemArray),
		Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_FABRIKItemArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FABRIKItemArray.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_FABRIKItemArray.InnerSingleton;
	}

void FRigUnit_FABRIKItemArray::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_FABRIKItemArray::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigElementKey> Items_0_Array(Items);
	
	StaticExecute(
		InExecuteContext,
		Items_0_Array,
		EffectorTransform,
		Precision,
		Weight,
		bPropagateToChildren,
		MaxIterations,
		WorkData,
		bSetEffectorTransform
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_FABRIK_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_FABRIK_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_FABRIK_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FABRIK_WorkData_Statics::NewStructOps, TEXT("RigUnit_FABRIK_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_FABRIK_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FABRIK_WorkData), 993782736U) },
		{ FRigUnit_FABRIK::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FABRIK_Statics::NewStructOps, TEXT("RigUnit_FABRIK"), &Z_Registration_Info_UScriptStruct_RigUnit_FABRIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FABRIK), 4246494020U) },
		{ FRigUnit_FABRIKPerItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FABRIKPerItem_Statics::NewStructOps, TEXT("RigUnit_FABRIKPerItem"), &Z_Registration_Info_UScriptStruct_RigUnit_FABRIKPerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FABRIKPerItem), 3436168079U) },
		{ FRigUnit_FABRIKItemArray::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FABRIKItemArray_Statics::NewStructOps, TEXT("RigUnit_FABRIKItemArray"), &Z_Registration_Info_UScriptStruct_RigUnit_FABRIKItemArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FABRIKItemArray), 47262073U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_FABRIK_h_2064160546(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_FABRIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_FABRIK_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
