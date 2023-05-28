// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Units/Control/RigUnit_Control.h"
#include "Constraint.h"
#include "EulerTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_Control() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEulerTransform();
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformFilter();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Control();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_Control>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_Control cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_Control;
class UScriptStruct* FRigUnit_Control::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_Control.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_Control.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_Control, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_Control"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_Control_Execute;
		Arguments_FRigUnit_Control_Execute.Emplace(TEXT("Transform"), TEXT("FEulerTransform"));
		Arguments_FRigUnit_Control_Execute.Emplace(TEXT("Base"), TEXT("FTransform"));
		Arguments_FRigUnit_Control_Execute.Emplace(TEXT("InitTransform"), TEXT("FTransform"));
		Arguments_FRigUnit_Control_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		Arguments_FRigUnit_Control_Execute.Emplace(TEXT("Filter"), TEXT("FTransformFilter"));
		Arguments_FRigUnit_Control_Execute.Emplace(TEXT("bIsInitialized"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_Control::Execute"), &FRigUnit_Control::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_Control.OuterSingleton, Arguments_FRigUnit_Control_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_Control.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_Control>()
{
	return FRigUnit_Control::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Control_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Base;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitialized_MetaData[];
#endif
		static void NewProp_bIsInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitialized;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Control_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Controls" },
		{ "Comment", "/** A control unit used to drive a transform from an external source */" },
		{ "Deprecated", "4.24.0" },
		{ "DisplayName", "Control" },
		{ "ModuleRelativePath", "Public/Units/Control/RigUnit_Control.h" },
		{ "ShowVariableNameInTitle", "" },
		{ "ToolTip", "A control unit used to drive a transform from an external source" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_Control>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Transform_MetaData[] = {
		{ "AnimationInput", "" },
		{ "Category", "Control" },
		{ "Comment", "/** The transform of this control */" },
		{ "ModuleRelativePath", "Public/Units/Control/RigUnit_Control.h" },
		{ "ToolTip", "The transform of this control" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_Control, Transform), Z_Construct_UScriptStruct_FEulerTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Transform_MetaData)) }; // 3672886731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Base_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The base that transform is relative to */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Control/RigUnit_Control.h" },
		{ "ToolTip", "The base that transform is relative to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_Control, Base), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Base_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Base_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_InitTransform_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The initial transform that The Transform is initialized to. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Control/RigUnit_Control.h" },
		{ "ToolTip", "The initial transform that The Transform is initialized to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_InitTransform = { "InitTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_Control, InitTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_InitTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_InitTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The resultant transform of this unit (Base * Filter(Transform)) */" },
		{ "ModuleRelativePath", "Public/Units/Control/RigUnit_Control.h" },
		{ "Output", "" },
		{ "ToolTip", "The resultant transform of this unit (Base * Filter(Transform))" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_Control, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Result_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The filter determines what axes can be manipulated by the in-viewport widgets */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Control/RigUnit_Control.h" },
		{ "ToolTip", "The filter determines what axes can be manipulated by the in-viewport widgets" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_Control, Filter), Z_Construct_UScriptStruct_FTransformFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Filter_MetaData)) }; // 3739889549
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_bIsInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Control/RigUnit_Control.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_bIsInitialized_SetBit(void* Obj)
	{
		((FRigUnit_Control*)Obj)->bIsInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_bIsInitialized = { "bIsInitialized", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_Control), &Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_bIsInitialized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_bIsInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_bIsInitialized_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_Control_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Base,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_InitTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewProp_bIsInitialized,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Control_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_Control",
		sizeof(FRigUnit_Control),
		alignof(FRigUnit_Control),
		Z_Construct_UScriptStruct_FRigUnit_Control_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Control_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Control_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Control_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_Control()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_Control.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_Control.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Control_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_Control.InnerSingleton;
	}

void FRigUnit_Control::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_Control::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Transform,
		Base,
		InitTransform,
		Result,
		Filter,
		bIsInitialized
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Control_RigUnit_Control_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Control_RigUnit_Control_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_Control::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Control_Statics::NewStructOps, TEXT("RigUnit_Control"), &Z_Registration_Info_UScriptStruct_RigUnit_Control, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_Control), 690704775U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Control_RigUnit_Control_h_2327011628(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Control_RigUnit_Control_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Control_RigUnit_Control_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
