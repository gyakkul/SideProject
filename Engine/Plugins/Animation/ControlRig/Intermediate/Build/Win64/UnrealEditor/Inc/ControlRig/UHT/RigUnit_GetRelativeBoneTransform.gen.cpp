// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Hierarchy/RigUnit_GetRelativeBoneTransform.h"
#include "Rigs/RigHierarchyCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_GetRelativeBoneTransform() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_GetRelativeBoneTransform>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetRelativeBoneTransform cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeBoneTransform;
class UScriptStruct* FRigUnit_GetRelativeBoneTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeBoneTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeBoneTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetRelativeBoneTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetRelativeBoneTransform_Execute;
		Arguments_FRigUnit_GetRelativeBoneTransform_Execute.Emplace(TEXT("Bone"), TEXT("FName"));
		Arguments_FRigUnit_GetRelativeBoneTransform_Execute.Emplace(TEXT("Space"), TEXT("FName"));
		Arguments_FRigUnit_GetRelativeBoneTransform_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_GetRelativeBoneTransform_Execute.Emplace(TEXT("CachedBone"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_GetRelativeBoneTransform_Execute.Emplace(TEXT("CachedSpace"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetRelativeBoneTransform::Execute"), &FRigUnit_GetRelativeBoneTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeBoneTransform.OuterSingleton, Arguments_FRigUnit_GetRelativeBoneTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeBoneTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetRelativeBoneTransform>()
{
	return FRigUnit_GetRelativeBoneTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * GetBoneTransform is used to retrieve a single transform from a hierarchy.\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Get Relative Transform" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "GetRelativeBoneTransform" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetRelativeBoneTransform.h" },
		{ "ToolTip", "GetBoneTransform is used to retrieve a single transform from a hierarchy." },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetRelativeBoneTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Bone to retrieve the transform for.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetRelativeBoneTransform.h" },
		{ "ToolTip", "The name of the Bone to retrieve the transform for." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetRelativeBoneTransform, Bone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Bone to retrieve the transform relative within.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetRelativeBoneTransform.h" },
		{ "ToolTip", "The name of the Bone to retrieve the transform relative within." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetRelativeBoneTransform, Space), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_Space_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current transform of the given bone - or identity in case it wasn't found.\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetRelativeBoneTransform.h" },
		{ "Output", "" },
		{ "ToolTip", "The current transform of the given bone - or identity in case it wasn't found." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetRelativeBoneTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_CachedBone_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetRelativeBoneTransform.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_CachedBone = { "CachedBone", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetRelativeBoneTransform, CachedBone), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_CachedBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_CachedBone_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_CachedSpace_MetaData[] = {
		{ "Comment", "// Used to cache the internally used space index\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetRelativeBoneTransform.h" },
		{ "ToolTip", "Used to cache the internally used space index" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_CachedSpace = { "CachedSpace", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetRelativeBoneTransform, CachedSpace), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_CachedSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_CachedSpace_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_CachedBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewProp_CachedSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_GetRelativeBoneTransform",
		sizeof(FRigUnit_GetRelativeBoneTransform),
		alignof(FRigUnit_GetRelativeBoneTransform),
		Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeBoneTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeBoneTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeBoneTransform.InnerSingleton;
	}

void FRigUnit_GetRelativeBoneTransform::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_GetRelativeBoneTransform::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Bone,
		Space,
		Transform,
		CachedBone,
		CachedSpace
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetRelativeBoneTransform_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetRelativeBoneTransform_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_GetRelativeBoneTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetRelativeBoneTransform_Statics::NewStructOps, TEXT("RigUnit_GetRelativeBoneTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_GetRelativeBoneTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetRelativeBoneTransform), 3375829483U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetRelativeBoneTransform_h_3949283090(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetRelativeBoneTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetRelativeBoneTransform_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
