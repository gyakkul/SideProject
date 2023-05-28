// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Highlevel/Hierarchy/RigUnit_MultiFABRIK.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_MultiFABRIK() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_WorkData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK_WorkData;
class UScriptStruct* FRigUnit_MultiFABRIK_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MultiFABRIK_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MultiFABRIK_WorkData>()
{
	return FRigUnit_MultiFABRIK_WorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_WorkData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_WorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_MultiFABRIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_WorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MultiFABRIK_WorkData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_WorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_MultiFABRIK_WorkData",
		sizeof(FRigUnit_MultiFABRIK_WorkData),
		alignof(FRigUnit_MultiFABRIK_WorkData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_WorkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_WorkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_WorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK_WorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_WorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK_WorkData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK_EndEffector;
class UScriptStruct* FRigUnit_MultiFABRIK_EndEffector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK_EndEffector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK_EndEffector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MultiFABRIK_EndEffector"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK_EndEffector.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MultiFABRIK_EndEffector>()
{
	return FRigUnit_MultiFABRIK_EndEffector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Bone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_MultiFABRIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MultiFABRIK_EndEffector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The last bone in the chain to solve - the effector\n\x09 */" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_MultiFABRIK.h" },
		{ "ToolTip", "The last bone in the chain to solve - the effector" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MultiFABRIK_EndEffector, Bone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform of the effector in global space\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_MultiFABRIK.h" },
		{ "ToolTip", "The transform of the effector in global space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MultiFABRIK_EndEffector, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::NewProp_Location,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_MultiFABRIK_EndEffector",
		sizeof(FRigUnit_MultiFABRIK_EndEffector),
		alignof(FRigUnit_MultiFABRIK_EndEffector),
		Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK_EndEffector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK_EndEffector.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK_EndEffector.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_MultiFABRIK>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_MultiFABRIK cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK;
class UScriptStruct* FRigUnit_MultiFABRIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_MultiFABRIK"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_MultiFABRIK_Execute;
		Arguments_FRigUnit_MultiFABRIK_Execute.Emplace(TEXT("RootBone"), TEXT("FName"));
		Arguments_FRigUnit_MultiFABRIK_Execute.Emplace(TEXT("Effectors"), TEXT("TArray<FRigUnit_MultiFABRIK_EndEffector>"));
		Arguments_FRigUnit_MultiFABRIK_Execute.Emplace(TEXT("Precision"), TEXT("float"));
		Arguments_FRigUnit_MultiFABRIK_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_MultiFABRIK_Execute.Emplace(TEXT("MaxIterations"), TEXT("int32"));
		Arguments_FRigUnit_MultiFABRIK_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_MultiFABRIK_WorkData"));
		Arguments_FRigUnit_MultiFABRIK_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_MultiFABRIK::Execute"), &FRigUnit_MultiFABRIK::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK.OuterSingleton, Arguments_FRigUnit_MultiFABRIK_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_MultiFABRIK>()
{
	return FRigUnit_MultiFABRIK::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RootBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Effectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Effectors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * The FABRIK solver can solve multi chains within a root using multi effectors\n * the Forward and Backward Reaching Inverse Kinematics algorithm.\n * For now this node supports single effector chains only.\n */" },
		{ "DisplayName", "Multi Effector FABRIK" },
		{ "Keywords", "Multi, Effector, N-Chain,IK" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_MultiFABRIK.h" },
		{ "NodeColor", "0 1 1" },
		{ "ToolTip", "The FABRIK solver can solve multi chains within a root using multi effectors\nthe Forward and Backward Reaching Inverse Kinematics algorithm.\nFor now this node supports single effector chains only." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_MultiFABRIK>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_RootBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The first bone in the chain to solve\n\x09 */" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_MultiFABRIK.h" },
		{ "ToolTip", "The first bone in the chain to solve" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_RootBone = { "RootBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MultiFABRIK, RootBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_RootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_RootBone_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_Effectors_Inner = { "Effectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector, METADATA_PARAMS(nullptr, 0) }; // 3163549124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_Effectors_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_MultiFABRIK.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_Effectors = { "Effectors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MultiFABRIK, Effectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_Effectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_Effectors_MetaData)) }; // 3163549124
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_Precision_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The precision to use for the fabrik solver\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_MultiFABRIK.h" },
		{ "ToolTip", "The precision to use for the fabrik solver" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MultiFABRIK, Precision), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_Precision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_Precision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_MultiFABRIK.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_MultiFABRIK*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_MultiFABRIK), &Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The maximum number of iterations. Values between 4 and 16 are common.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_MultiFABRIK.h" },
		{ "ToolTip", "The maximum number of iterations. Values between 4 and 16 are common." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MultiFABRIK, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_MultiFABRIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_MultiFABRIK, WorkData), Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_WorkData_MetaData)) }; // 3342354317
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_MultiFABRIK.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FRigUnit_MultiFABRIK*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_MultiFABRIK), &Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_bIsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_RootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_Effectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_Effectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_Precision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_MaxIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_WorkData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewProp_bIsInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_MultiFABRIK",
		sizeof(FRigUnit_MultiFABRIK),
		alignof(FRigUnit_MultiFABRIK),
		Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK.InnerSingleton;
	}

void FRigUnit_MultiFABRIK::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_MultiFABRIK::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FRigUnit_MultiFABRIK_EndEffector> Effectors_1_Array(Effectors);
	
	StaticExecute(
		InExecuteContext,
		RootBone,
		Effectors_1_Array,
		Precision,
		bPropagateToChildren,
		MaxIterations,
		WorkData,
		bIsInitialized
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_MultiFABRIK_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_MultiFABRIK_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_MultiFABRIK_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_WorkData_Statics::NewStructOps, TEXT("RigUnit_MultiFABRIK_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MultiFABRIK_WorkData), 3342354317U) },
		{ FRigUnit_MultiFABRIK_EndEffector::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_EndEffector_Statics::NewStructOps, TEXT("RigUnit_MultiFABRIK_EndEffector"), &Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK_EndEffector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MultiFABRIK_EndEffector), 3163549124U) },
		{ FRigUnit_MultiFABRIK::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_MultiFABRIK_Statics::NewStructOps, TEXT("RigUnit_MultiFABRIK"), &Z_Registration_Info_UScriptStruct_RigUnit_MultiFABRIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_MultiFABRIK), 3671256011U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_MultiFABRIK_h_1315108067(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_MultiFABRIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_MultiFABRIK_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
