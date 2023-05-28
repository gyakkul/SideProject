// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Hierarchy/RigUnit_SetBoneRotation.h"
#include "Rigs/RigHierarchyCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SetBoneRotation() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMTransformSpace();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_SetBoneRotation>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetBoneRotation cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetBoneRotation;
class UScriptStruct* FRigUnit_SetBoneRotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetBoneRotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetBoneRotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetBoneRotation"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetBoneRotation_Execute;
		Arguments_FRigUnit_SetBoneRotation_Execute.Emplace(TEXT("Bone"), TEXT("FName"));
		Arguments_FRigUnit_SetBoneRotation_Execute.Emplace(TEXT("Rotation"), TEXT("FQuat"));
		Arguments_FRigUnit_SetBoneRotation_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_SetBoneRotation_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetBoneRotation_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_SetBoneRotation_Execute.Emplace(TEXT("CachedBone"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetBoneRotation::Execute"), &FRigUnit_SetBoneRotation::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetBoneRotation.OuterSingleton, Arguments_FRigUnit_SetBoneRotation_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetBoneRotation.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetBoneRotation>()
{
	return FRigUnit_SetBoneRotation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * SetBoneRotation is used to perform a change in the hierarchy by setting a single bone's rotation.\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Set Rotation" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetBoneRotation" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetBoneRotation.h" },
		{ "ToolTip", "SetBoneRotation is used to perform a change in the hierarchy by setting a single bone's rotation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetBoneRotation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Bone to set the rotation for.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetBoneRotation.h" },
		{ "ToolTip", "The name of the Bone to set the rotation for." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetBoneRotation, Bone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The rotation value to set for the given Bone.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetBoneRotation.h" },
		{ "ToolTip", "The rotation value to set for the given Bone." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetBoneRotation, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the bone's rotation should be set\n\x09 * in local or global space.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetBoneRotation.h" },
		{ "ToolTip", "Defines if the bone's rotation should be set\nin local or global space." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetBoneRotation, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Space_MetaData)) }; // 1140043897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetBoneRotation.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetBoneRotation, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children \n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetBoneRotation.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_SetBoneRotation*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetBoneRotation), &Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_CachedBone_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetBoneRotation.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_CachedBone = { "CachedBone", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetBoneRotation, CachedBone), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_CachedBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_CachedBone_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewProp_CachedBone,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_SetBoneRotation",
		sizeof(FRigUnit_SetBoneRotation),
		alignof(FRigUnit_SetBoneRotation),
		Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetBoneRotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetBoneRotation.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetBoneRotation.InnerSingleton;
	}

void FRigUnit_SetBoneRotation::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetBoneRotation::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Bone,
		Rotation,
		Space,
		Weight,
		bPropagateToChildren,
		CachedBone
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetBoneRotation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetBoneRotation_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_SetBoneRotation::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetBoneRotation_Statics::NewStructOps, TEXT("RigUnit_SetBoneRotation"), &Z_Registration_Info_UScriptStruct_RigUnit_SetBoneRotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetBoneRotation), 130971337U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetBoneRotation_h_2316809961(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetBoneRotation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetBoneRotation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
