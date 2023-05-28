// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Debug/RigUnit_DebugHierarchy.h"
#include "Rigs/RigHierarchyPose.h"
#include "Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_DebugHierarchy() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigPose();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugPose();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_DebugBase();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode;
	static UEnum* EControlRigDrawHierarchyMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("EControlRigDrawHierarchyMode"));
		}
		return Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode.OuterSingleton;
	}
	template<> CONTROLRIG_API UEnum* StaticEnum<EControlRigDrawHierarchyMode::Type>()
	{
		return EControlRigDrawHierarchyMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::Enumerators[] = {
		{ "EControlRigDrawHierarchyMode::Axes", (int64)EControlRigDrawHierarchyMode::Axes },
		{ "EControlRigDrawHierarchyMode::Max", (int64)EControlRigDrawHierarchyMode::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::Enum_MetaDataParams[] = {
		{ "Axes.Comment", "/** Draw as axes */" },
		{ "Axes.Name", "EControlRigDrawHierarchyMode::Axes" },
		{ "Axes.ToolTip", "Draw as axes" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EControlRigDrawHierarchyMode::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		"EControlRigDrawHierarchyMode",
		"EControlRigDrawHierarchyMode::Type",
		Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode()
	{
		if (!Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode.InnerSingleton, Z_Construct_UEnum_ControlRig_EControlRigDrawHierarchyMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_DebugHierarchy>() == std::is_polymorphic<FRigVMFunction_DebugBase>(), "USTRUCT FRigUnit_DebugHierarchy cannot be polymorphic unless super FRigVMFunction_DebugBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DebugHierarchy;
class UScriptStruct* FRigUnit_DebugHierarchy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugHierarchy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DebugHierarchy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DebugHierarchy"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DebugHierarchy_Execute;
		Arguments_FRigUnit_DebugHierarchy_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigUnit_DebugHierarchy_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigUnit_DebugHierarchy_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigUnit_DebugHierarchy_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigUnit_DebugHierarchy_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DebugHierarchy::Execute"), &FRigUnit_DebugHierarchy::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DebugHierarchy.OuterSingleton, Arguments_FRigUnit_DebugHierarchy_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DebugHierarchy.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DebugHierarchy>()
{
	return FRigUnit_DebugHierarchy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Draws vectors on each bone in the viewport across the entire hierarchy\n */" },
		{ "DisplayName", "Draw Hierarchy" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugHierarchy.h" },
		{ "ToolTip", "Draws vectors on each bone in the viewport across the entire hierarchy" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DebugHierarchy>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "Pins" },
		{ "DisplayName", "Execute" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugHierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DebugHierarchy, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_ExecuteContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_ExecuteContext_MetaData)) }; // 1930646767
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DebugHierarchy, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DebugHierarchy, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DebugHierarchy, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DebugHierarchy, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_WorldOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigUnit_DebugHierarchy*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_DebugHierarchy), &Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_ExecuteContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_WorldOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigVMFunction_DebugBase,
		&NewStructOps,
		"RigUnit_DebugHierarchy",
		sizeof(FRigUnit_DebugHierarchy),
		alignof(FRigUnit_DebugHierarchy),
		Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugHierarchy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DebugHierarchy.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_DebugHierarchy.InnerSingleton;
	}

void FRigUnit_DebugHierarchy::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_DebugHierarchy::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Scale,
		Color,
		Thickness,
		WorldOffset,
		bEnabled
	);
}


static_assert(std::is_polymorphic<FRigUnit_DebugPose>() == std::is_polymorphic<FRigVMFunction_DebugBase>(), "USTRUCT FRigUnit_DebugPose cannot be polymorphic unless super FRigVMFunction_DebugBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_DebugPose;
class UScriptStruct* FRigUnit_DebugPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_DebugPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_DebugPose, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_DebugPose"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_DebugPose_Execute;
		Arguments_FRigUnit_DebugPose_Execute.Emplace(TEXT("Pose"), TEXT("FRigPose"));
		Arguments_FRigUnit_DebugPose_Execute.Emplace(TEXT("Scale"), TEXT("float"));
		Arguments_FRigUnit_DebugPose_Execute.Emplace(TEXT("Color"), TEXT("FLinearColor"));
		Arguments_FRigUnit_DebugPose_Execute.Emplace(TEXT("Thickness"), TEXT("float"));
		Arguments_FRigUnit_DebugPose_Execute.Emplace(TEXT("WorldOffset"), TEXT("FTransform"));
		Arguments_FRigUnit_DebugPose_Execute.Emplace(TEXT("bEnabled"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_DebugPose::Execute"), &FRigUnit_DebugPose::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_DebugPose.OuterSingleton, Arguments_FRigUnit_DebugPose_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_DebugPose.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_DebugPose>()
{
	return FRigUnit_DebugPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Draws vectors on each bone in the viewport across the entire pose\n*/" },
		{ "DisplayName", "Draw Pose Cache" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugHierarchy.h" },
		{ "ToolTip", "Draws vectors on each bone in the viewport across the entire pose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_DebugPose>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "Pins" },
		{ "DisplayName", "Execute" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugHierarchy.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DebugPose, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_ExecuteContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_ExecuteContext_MetaData)) }; // 1930646767
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Pose_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DebugPose, Pose), Z_Construct_UScriptStruct_FRigPose, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Pose_MetaData)) }; // 1272709228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DebugPose, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DebugPose, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DebugPose, Thickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_DebugPose, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_WorldOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Debug/RigUnit_DebugHierarchy.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigUnit_DebugPose*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_DebugPose), &Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_ExecuteContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_WorldOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigVMFunction_DebugBase,
		&NewStructOps,
		"RigUnit_DebugPose",
		sizeof(FRigUnit_DebugPose),
		alignof(FRigUnit_DebugPose),
		Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_DebugPose()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_DebugPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_DebugPose.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_DebugPose.InnerSingleton;
	}

void FRigUnit_DebugPose::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_DebugPose::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Pose,
		Scale,
		Color,
		Thickness,
		WorldOffset,
		bEnabled
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugHierarchy_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugHierarchy_h_Statics::EnumInfo[] = {
		{ EControlRigDrawHierarchyMode_StaticEnum, TEXT("EControlRigDrawHierarchyMode"), &Z_Registration_Info_UEnum_EControlRigDrawHierarchyMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3435707675U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugHierarchy_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_DebugHierarchy::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DebugHierarchy_Statics::NewStructOps, TEXT("RigUnit_DebugHierarchy"), &Z_Registration_Info_UScriptStruct_RigUnit_DebugHierarchy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DebugHierarchy), 2182381367U) },
		{ FRigUnit_DebugPose::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_DebugPose_Statics::NewStructOps, TEXT("RigUnit_DebugPose"), &Z_Registration_Info_UScriptStruct_RigUnit_DebugPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_DebugPose), 1460744667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugHierarchy_h_3563749640(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugHierarchy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugHierarchy_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugHierarchy_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Debug_RigUnit_DebugHierarchy_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
