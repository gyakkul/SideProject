// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Units/Hierarchy/RigUnit_AddBoneTransform.h"
#include "Rigs/RigHierarchyCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_AddBoneTransform() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_AddBoneTransform>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_AddBoneTransform cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AddBoneTransform;
class UScriptStruct* FRigUnit_AddBoneTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AddBoneTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AddBoneTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_AddBoneTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AddBoneTransform_Execute;
		Arguments_FRigUnit_AddBoneTransform_Execute.Emplace(TEXT("Bone"), TEXT("FName"));
		Arguments_FRigUnit_AddBoneTransform_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_AddBoneTransform_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_AddBoneTransform_Execute.Emplace(TEXT("bPostMultiply"), TEXT("bool"));
		Arguments_FRigUnit_AddBoneTransform_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_AddBoneTransform_Execute.Emplace(TEXT("CachedBone"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AddBoneTransform::Execute"), &FRigUnit_AddBoneTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AddBoneTransform.OuterSingleton, Arguments_FRigUnit_AddBoneTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AddBoneTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_AddBoneTransform>()
{
	return FRigUnit_AddBoneTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPostMultiply_MetaData[];
#endif
		static void NewProp_bPostMultiply_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPostMultiply;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Offset Transform is used to perform a change in the hierarchy by setting a single bone's transform.\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Offset Transform" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "Offset,AddToBoneTransform" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_AddBoneTransform.h" },
		{ "ToolTip", "Offset Transform is used to perform a change in the hierarchy by setting a single bone's transform." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AddBoneTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Bone to set the transform for.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_AddBoneTransform.h" },
		{ "ToolTip", "The name of the Bone to set the transform for." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AddBoneTransform, Bone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform value to set for the given Bone.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_AddBoneTransform.h" },
		{ "ToolTip", "The transform value to set for the given Bone." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AddBoneTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_AddBoneTransform.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AddBoneTransform, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_bPostMultiply_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true the transform will be post multiplied, otherwise pre multiplied.\n\x09 * Post multiplying means that the transform is understood as a parent space change,\n\x09 * while pre multiplying means that the transform is understood as a child space change.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_AddBoneTransform.h" },
		{ "ToolTip", "If set to true the transform will be post multiplied, otherwise pre multiplied.\nPost multiplying means that the transform is understood as a parent space change,\nwhile pre multiplying means that the transform is understood as a child space change." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_bPostMultiply_SetBit(void* Obj)
	{
		((FRigUnit_AddBoneTransform*)Obj)->bPostMultiply = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_bPostMultiply = { "bPostMultiply", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_AddBoneTransform), &Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_bPostMultiply_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_bPostMultiply_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_bPostMultiply_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children \n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_AddBoneTransform.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_AddBoneTransform*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_AddBoneTransform), &Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_CachedBone_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Public/Units/Hierarchy/RigUnit_AddBoneTransform.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_CachedBone = { "CachedBone", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AddBoneTransform, CachedBone), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_CachedBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_CachedBone_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_bPostMultiply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewProp_CachedBone,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_AddBoneTransform",
		sizeof(FRigUnit_AddBoneTransform),
		alignof(FRigUnit_AddBoneTransform),
		Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AddBoneTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AddBoneTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AddBoneTransform.InnerSingleton;
	}

void FRigUnit_AddBoneTransform::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_AddBoneTransform::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Bone,
		Transform,
		Weight,
		bPostMultiply,
		bPropagateToChildren,
		CachedBone
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_AddBoneTransform_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_AddBoneTransform_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_AddBoneTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AddBoneTransform_Statics::NewStructOps, TEXT("RigUnit_AddBoneTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_AddBoneTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AddBoneTransform), 1655082752U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_AddBoneTransform_h_1976766921(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_AddBoneTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Hierarchy_RigUnit_AddBoneTransform_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
