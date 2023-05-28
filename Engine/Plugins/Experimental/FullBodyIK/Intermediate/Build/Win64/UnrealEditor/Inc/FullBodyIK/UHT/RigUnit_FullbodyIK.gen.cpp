// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/RigUnit_FullbodyIK.h"
#include "FBIKConstraintOption.h"
#include "FBIKDebugOption.h"
#include "FBIKShared.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_FullbodyIK() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FFBIKConstraintOption();
	FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FFBIKDebugOption();
	FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FFBIKEndEffector();
	FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FMotionProcessInput();
	FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FullbodyIK();
	FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData();
	FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FSolverInput();
	UPackage* Z_Construct_UPackage__Script_FullBodyIK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FBIKEndEffector;
class UScriptStruct* FFBIKEndEffector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FBIKEndEffector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FBIKEndEffector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFBIKEndEffector, (UObject*)Z_Construct_UPackage__Script_FullBodyIK(), TEXT("FBIKEndEffector"));
	}
	return Z_Registration_Info_UScriptStruct_FBIKEndEffector.OuterSingleton;
}
template<> FULLBODYIK_API UScriptStruct* StaticStruct<FFBIKEndEffector>()
{
	return FFBIKEndEffector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFBIKEndEffector_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PositionDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationDepth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RotationDepth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pull_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pull;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFBIKEndEffector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Item_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The last item in the chain to solve - the effector\n\x09 */" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
		{ "ToolTip", "The last item in the chain to solve - the effector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKEndEffector, Item), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Item_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKEndEffector, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_PositionAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_PositionAlpha = { "PositionAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKEndEffector, PositionAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_PositionAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_PositionAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_PositionDepth_MetaData[] = {
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_PositionDepth = { "PositionDepth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKEndEffector, PositionDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_PositionDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_PositionDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKEndEffector, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_RotationAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKEndEffector, RotationAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_RotationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_RotationAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_RotationDepth_MetaData[] = {
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_RotationDepth = { "RotationDepth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKEndEffector, RotationDepth), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_RotationDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_RotationDepth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Pull_MetaData[] = {
		{ "Comment", "/*\n\x09 * Clamps the total length to target by this scale for each iteration \n\x09 * This helps to stabilize solver to reduce singularity by avoiding to try to reach target too far. \n\x09 */" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
		{ "ToolTip", "* Clamps the total length to target by this scale for each iteration\n* This helps to stabilize solver to reduce singularity by avoiding to try to reach target too far." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Pull = { "Pull", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFBIKEndEffector, Pull), METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Pull_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Pull_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Item,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_PositionAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_PositionDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_RotationAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_RotationDepth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewProp_Pull,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FullBodyIK,
		nullptr,
		&NewStructOps,
		"FBIKEndEffector",
		sizeof(FFBIKEndEffector),
		alignof(FFBIKEndEffector),
		Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFBIKEndEffector()
	{
		if (!Z_Registration_Info_UScriptStruct_FBIKEndEffector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FBIKEndEffector.InnerSingleton, Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FBIKEndEffector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK_WorkData;
class UScriptStruct* FRigUnit_FullbodyIK_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData, (UObject*)Z_Construct_UPackage__Script_FullBodyIK(), TEXT("RigUnit_FullbodyIK_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK_WorkData.OuterSingleton;
}
template<> FULLBODYIK_API UScriptStruct* StaticStruct<FRigUnit_FullbodyIK_WorkData>()
{
	return FRigUnit_FullbodyIK_WorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FullbodyIK_WorkData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FullBodyIK,
		nullptr,
		&NewStructOps,
		"RigUnit_FullbodyIK_WorkData",
		sizeof(FRigUnit_FullbodyIK_WorkData),
		alignof(FRigUnit_FullbodyIK_WorkData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK_WorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK_WorkData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_FullbodyIK>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_FullbodyIK cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK;
class UScriptStruct* FRigUnit_FullbodyIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK, (UObject*)Z_Construct_UPackage__Script_FullBodyIK(), TEXT("RigUnit_FullbodyIK"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FullbodyIK_Execute;
		Arguments_FRigUnit_FullbodyIK_Execute.Emplace(TEXT("Root"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_FullbodyIK_Execute.Emplace(TEXT("Effectors"), TEXT("TArray<FFBIKEndEffector>"));
		Arguments_FRigUnit_FullbodyIK_Execute.Emplace(TEXT("Constraints"), TEXT("TArray<FFBIKConstraintOption>"));
		Arguments_FRigUnit_FullbodyIK_Execute.Emplace(TEXT("SolverProperty"), TEXT("FSolverInput"));
		Arguments_FRigUnit_FullbodyIK_Execute.Emplace(TEXT("MotionProperty"), TEXT("FMotionProcessInput"));
		Arguments_FRigUnit_FullbodyIK_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_FullbodyIK_Execute.Emplace(TEXT("DebugOption"), TEXT("FFBIKDebugOption"));
		Arguments_FRigUnit_FullbodyIK_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_FullbodyIK_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FullbodyIK::Execute"), &FRigUnit_FullbodyIK::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK.OuterSingleton, Arguments_FRigUnit_FullbodyIK_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK.OuterSingleton;
}
template<> FULLBODYIK_API UScriptStruct* StaticStruct<FRigUnit_FullbodyIK>()
{
	return FRigUnit_FullbodyIK::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Root;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Effectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Effectors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Constraints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Constraints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolverProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SolverProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MotionProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugOption_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Based on Jacobian solver at core, this can solve multi chains within a root using multi effectors\n */" },
		{ "Deprecated", "5.0" },
		{ "DisplayName", "Fullbody IK" },
		{ "Keywords", "Multi, Effector, N-Chain, FB, IK" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
		{ "ToolTip", "Based on Jacobian solver at core, this can solve multi chains within a root using multi effectors" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FullbodyIK>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The first bone in the chain to solve\n\x09 */" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
		{ "ToolTip", "The first bone in the chain to solve" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FullbodyIK, Root), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Root_MetaData)) }; // 2461395651
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Effectors_Inner = { "Effectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFBIKEndEffector, METADATA_PARAMS(nullptr, 0) }; // 297124703
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Effectors_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Effectors = { "Effectors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FullbodyIK, Effectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Effectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Effectors_MetaData)) }; // 297124703
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Constraints_Inner = { "Constraints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFBIKConstraintOption, METADATA_PARAMS(nullptr, 0) }; // 2380895814
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Constraints_MetaData[] = {
		{ "Category", "FRigUnit_Jacobian" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FullbodyIK, Constraints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Constraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Constraints_MetaData)) }; // 2380895814
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_SolverProperty_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_SolverProperty = { "SolverProperty", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FullbodyIK, SolverProperty), Z_Construct_UScriptStruct_FSolverInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_SolverProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_SolverProperty_MetaData)) }; // 439754141
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_MotionProperty_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_MotionProperty = { "MotionProperty", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FullbodyIK, MotionProperty), Z_Construct_UScriptStruct_FMotionProcessInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_MotionProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_MotionProperty_MetaData)) }; // 2662287061
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_FullbodyIK*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_FullbodyIK), &Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_DebugOption_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_DebugOption = { "DebugOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FullbodyIK, DebugOption), Z_Construct_UScriptStruct_FFBIKDebugOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_DebugOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_DebugOption_MetaData)) }; // 2858317537
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/RigUnit_FullbodyIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FullbodyIK, WorkData), Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_WorkData_MetaData)) }; // 1628815489
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Effectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Effectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Constraints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_Constraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_SolverProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_MotionProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_DebugOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FullBodyIK,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_FullbodyIK",
		sizeof(FRigUnit_FullbodyIK),
		alignof(FRigUnit_FullbodyIK),
		Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FullbodyIK()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK.InnerSingleton;
	}

void FRigUnit_FullbodyIK::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_FullbodyIK::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FFBIKEndEffector> Effectors_1_Array(Effectors);
	TArrayView<const FFBIKConstraintOption> Constraints_2_Array(Constraints);
	
	StaticExecute(
		InExecuteContext,
		Root,
		Effectors_1_Array,
		Constraints_2_Array,
		SolverProperty,
		MotionProperty,
		bPropagateToChildren,
		DebugOption,
		WorkData
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Private_RigUnit_FullbodyIK_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Private_RigUnit_FullbodyIK_h_Statics::ScriptStructInfo[] = {
		{ FFBIKEndEffector::StaticStruct, Z_Construct_UScriptStruct_FFBIKEndEffector_Statics::NewStructOps, TEXT("FBIKEndEffector"), &Z_Registration_Info_UScriptStruct_FBIKEndEffector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFBIKEndEffector), 297124703U) },
		{ FRigUnit_FullbodyIK_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_WorkData_Statics::NewStructOps, TEXT("RigUnit_FullbodyIK_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FullbodyIK_WorkData), 1628815489U) },
		{ FRigUnit_FullbodyIK::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FullbodyIK_Statics::NewStructOps, TEXT("RigUnit_FullbodyIK"), &Z_Registration_Info_UScriptStruct_RigUnit_FullbodyIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FullbodyIK), 2903402710U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Private_RigUnit_FullbodyIK_h_2125676370(TEXT("/Script/FullBodyIK"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Private_RigUnit_FullbodyIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Private_RigUnit_FullbodyIK_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
