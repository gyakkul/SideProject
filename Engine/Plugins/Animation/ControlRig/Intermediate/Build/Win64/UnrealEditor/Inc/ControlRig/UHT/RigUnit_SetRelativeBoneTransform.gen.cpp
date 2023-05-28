// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Hierarchy/RigUnit_SetRelativeBoneTransform.h"
#include "Rigs/RigHierarchyCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SetRelativeBoneTransform() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_SetRelativeBoneTransform>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetRelativeBoneTransform cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeBoneTransform;
class UScriptStruct* FRigUnit_SetRelativeBoneTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeBoneTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeBoneTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetRelativeBoneTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetRelativeBoneTransform_Execute;
		Arguments_FRigUnit_SetRelativeBoneTransform_Execute.Emplace(TEXT("Bone"), TEXT("FName"));
		Arguments_FRigUnit_SetRelativeBoneTransform_Execute.Emplace(TEXT("Space"), TEXT("FName"));
		Arguments_FRigUnit_SetRelativeBoneTransform_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_SetRelativeBoneTransform_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_SetRelativeBoneTransform_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_SetRelativeBoneTransform_Execute.Emplace(TEXT("CachedBone"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_SetRelativeBoneTransform_Execute.Emplace(TEXT("CachedSpaceIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetRelativeBoneTransform::Execute"), &FRigUnit_SetRelativeBoneTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeBoneTransform.OuterSingleton, Arguments_FRigUnit_SetRelativeBoneTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeBoneTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetRelativeBoneTransform>()
{
	return FRigUnit_SetRelativeBoneTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSpaceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedSpaceIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * SetRelativeBoneTransform is used to perform a change in the hierarchy by setting a single bone's transform.\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Set Relative Transform" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetRelativeBoneTransform" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeBoneTransform.h" },
		{ "ToolTip", "SetRelativeBoneTransform is used to perform a change in the hierarchy by setting a single bone's transform." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetRelativeBoneTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Bone to set the transform for.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeBoneTransform.h" },
		{ "ToolTip", "The name of the Bone to set the transform for." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeBoneTransform, Bone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Bone to set the transform relative within.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeBoneTransform.h" },
		{ "ToolTip", "The name of the Bone to set the transform relative within." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeBoneTransform, Space), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Space_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform value to set for the given Bone.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeBoneTransform.h" },
		{ "ToolTip", "The transform value to set for the given Bone." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeBoneTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The weight of the change - how much the change should be applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeBoneTransform.h" },
		{ "ToolTip", "The weight of the change - how much the change should be applied" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeBoneTransform, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children \n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeBoneTransform.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_SetRelativeBoneTransform*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetRelativeBoneTransform), &Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_CachedBone_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeBoneTransform.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_CachedBone = { "CachedBone", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeBoneTransform, CachedBone), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_CachedBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_CachedBone_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_CachedSpaceIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used space index\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetRelativeBoneTransform.h" },
		{ "ToolTip", "Used to cache the internally used space index" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_CachedSpaceIndex = { "CachedSpaceIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRelativeBoneTransform, CachedSpaceIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_CachedSpaceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_CachedSpaceIndex_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_CachedBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewProp_CachedSpaceIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_SetRelativeBoneTransform",
		sizeof(FRigUnit_SetRelativeBoneTransform),
		alignof(FRigUnit_SetRelativeBoneTransform),
		Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeBoneTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeBoneTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeBoneTransform.InnerSingleton;
	}

void FRigUnit_SetRelativeBoneTransform::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetRelativeBoneTransform::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Bone,
		Space,
		Transform,
		Weight,
		bPropagateToChildren,
		CachedBone,
		CachedSpaceIndex
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetRelativeBoneTransform_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetRelativeBoneTransform_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_SetRelativeBoneTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetRelativeBoneTransform_Statics::NewStructOps, TEXT("RigUnit_SetRelativeBoneTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_SetRelativeBoneTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetRelativeBoneTransform), 1624974526U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetRelativeBoneTransform_h_3681085899(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetRelativeBoneTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetRelativeBoneTransform_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
