// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Hierarchy/RigUnit_SetControlOffset.h"
#include "Rigs/RigHierarchyCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SetControlOffset() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlOffset();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMTransformSpace();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_SetControlOffset>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetControlOffset cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetControlOffset;
class UScriptStruct* FRigUnit_SetControlOffset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlOffset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetControlOffset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetControlOffset, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetControlOffset"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetControlOffset_Execute;
		Arguments_FRigUnit_SetControlOffset_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_SetControlOffset_Execute.Emplace(TEXT("Offset"), TEXT("FTransform"));
		Arguments_FRigUnit_SetControlOffset_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_SetControlOffset_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetControlOffset::Execute"), &FRigUnit_SetControlOffset::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetControlOffset.OuterSingleton, Arguments_FRigUnit_SetControlOffset_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetControlOffset.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetControlOffset>()
{
	return FRigUnit_SetControlOffset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * SetControlOffset is used to perform a change in the hierarchy by setting a single control's transform.\n * This is typically only used during the Construction Event.\n */" },
		{ "DisplayName", "Set Control Offset" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetControlOffset,Initial,InitialTransform,SetInitialTransform,SetInitialControlTransform" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetControlOffset.h" },
		{ "NodeColor", "0, 0.364706, 1.0" },
		{ "ToolTip", "SetControlOffset is used to perform a change in the hierarchy by setting a single control's transform.\nThis is typically only used during the Construction Event." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetControlOffset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to set the transform for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetControlOffset.h" },
		{ "ToolTip", "The name of the Control to set the transform for." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetControlOffset, Control), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_Control_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_Control_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The offset transform to set for the control\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetControlOffset.h" },
		{ "Output", "" },
		{ "ToolTip", "The offset transform to set for the control" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetControlOffset, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_Offset_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Defines if the bone's transform should be set\n\x09 * in local or global space.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetControlOffset.h" },
		{ "ToolTip", "Defines if the bone's transform should be set\nin local or global space." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetControlOffset, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_Space_MetaData)) }; // 1140043897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// user to internally cache the index of the bone\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetControlOffset.h" },
		{ "ToolTip", "user to internally cache the index of the bone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetControlOffset, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_CachedControlIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_CachedControlIndex_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_Control,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewProp_CachedControlIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_SetControlOffset",
		sizeof(FRigUnit_SetControlOffset),
		alignof(FRigUnit_SetControlOffset),
		Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetControlOffset()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetControlOffset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetControlOffset.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetControlOffset.InnerSingleton;
	}

void FRigUnit_SetControlOffset::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetControlOffset::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		Offset,
		Space,
		CachedControlIndex
	);
}


static_assert(std::is_polymorphic<FRigUnit_GetShapeTransform>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetShapeTransform cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetShapeTransform;
class UScriptStruct* FRigUnit_GetShapeTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetShapeTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetShapeTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetShapeTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetShapeTransform_Execute;
		Arguments_FRigUnit_GetShapeTransform_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_GetShapeTransform_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_GetShapeTransform_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetShapeTransform::Execute"), &FRigUnit_GetShapeTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetShapeTransform.OuterSingleton, Arguments_FRigUnit_GetShapeTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetShapeTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetShapeTransform>()
{
	return FRigUnit_GetShapeTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * GetShapeTransform is used to retrieve single control's shape transform.\n * This is typically only used during the Construction Event.\n */" },
		{ "DisplayName", "Get Shape Transform" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "GetControlShapeTransform,Gizmo,GizmoTransform,MeshTransform" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetControlOffset.h" },
		{ "NodeColor", "0, 0.364706, 1.0" },
		{ "ToolTip", "GetShapeTransform is used to retrieve single control's shape transform.\nThis is typically only used during the Construction Event." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetShapeTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to set the transform for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetControlOffset.h" },
		{ "ToolTip", "The name of the Control to set the transform for." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetShapeTransform, Control), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::NewProp_Control_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::NewProp_Control_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The shape transform to set for the control\n\x09 */" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetControlOffset.h" },
		{ "Output", "" },
		{ "ToolTip", "The shape transform to set for the control" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetShapeTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// user to internally cache the index of the bone\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetControlOffset.h" },
		{ "ToolTip", "user to internally cache the index of the bone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetShapeTransform, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::NewProp_CachedControlIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::NewProp_CachedControlIndex_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::NewProp_Control,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::NewProp_CachedControlIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_GetShapeTransform",
		sizeof(FRigUnit_GetShapeTransform),
		alignof(FRigUnit_GetShapeTransform),
		Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_GetShapeTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetShapeTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_GetShapeTransform.InnerSingleton;
	}

void FRigUnit_GetShapeTransform::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_GetShapeTransform::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		Transform,
		CachedControlIndex
	);
}


static_assert(std::is_polymorphic<FRigUnit_SetShapeTransform>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_SetShapeTransform cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetShapeTransform;
class UScriptStruct* FRigUnit_SetShapeTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetShapeTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetShapeTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetShapeTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetShapeTransform_Execute;
		Arguments_FRigUnit_SetShapeTransform_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_SetShapeTransform_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		Arguments_FRigUnit_SetShapeTransform_Execute.Emplace(TEXT("CachedControlIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetShapeTransform::Execute"), &FRigUnit_SetShapeTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetShapeTransform.OuterSingleton, Arguments_FRigUnit_SetShapeTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetShapeTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetShapeTransform>()
{
	return FRigUnit_SetShapeTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedControlIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedControlIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/**\n * SetShapeTransform is used to perform a change in the hierarchy by setting a single control's shape transform.\n * This is typically only used during the Construction Event.\n */" },
		{ "DisplayName", "Set Shape Transform" },
		{ "DocumentationPolicy", "Strict" },
		{ "Keywords", "SetControlShapeTransform,Gizmo,GizmoTransform,MeshTransform" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetControlOffset.h" },
		{ "NodeColor", "0, 0.364706, 1.0" },
		{ "ToolTip", "SetShapeTransform is used to perform a change in the hierarchy by setting a single control's shape transform.\nThis is typically only used during the Construction Event." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetShapeTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to set the transform for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetControlOffset.h" },
		{ "ToolTip", "The name of the Control to set the transform for." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetShapeTransform, Control), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::NewProp_Control_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::NewProp_Control_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The shape transform to set for the control\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetControlOffset.h" },
		{ "ToolTip", "The shape transform to set for the control" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetShapeTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::NewProp_CachedControlIndex_MetaData[] = {
		{ "Comment", "// user to internally cache the index of the bone\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_SetControlOffset.h" },
		{ "ToolTip", "user to internally cache the index of the bone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::NewProp_CachedControlIndex = { "CachedControlIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetShapeTransform, CachedControlIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::NewProp_CachedControlIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::NewProp_CachedControlIndex_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::NewProp_Control,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::NewProp_CachedControlIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_SetShapeTransform",
		sizeof(FRigUnit_SetShapeTransform),
		alignof(FRigUnit_SetShapeTransform),
		Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetShapeTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetShapeTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetShapeTransform.InnerSingleton;
	}

void FRigUnit_SetShapeTransform::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetShapeTransform::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Control,
		Transform,
		CachedControlIndex
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlOffset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlOffset_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_SetControlOffset::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetControlOffset_Statics::NewStructOps, TEXT("RigUnit_SetControlOffset"), &Z_Registration_Info_UScriptStruct_RigUnit_SetControlOffset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetControlOffset), 2799681160U) },
		{ FRigUnit_GetShapeTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetShapeTransform_Statics::NewStructOps, TEXT("RigUnit_GetShapeTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_GetShapeTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetShapeTransform), 2011491802U) },
		{ FRigUnit_SetShapeTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetShapeTransform_Statics::NewStructOps, TEXT("RigUnit_SetShapeTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_SetShapeTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetShapeTransform), 3936608964U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlOffset_h_3893853047(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlOffset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_SetControlOffset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
