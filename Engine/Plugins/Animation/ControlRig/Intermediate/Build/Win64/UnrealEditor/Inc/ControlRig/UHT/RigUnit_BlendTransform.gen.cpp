// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Deprecated/RigUnit_BlendTransform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_BlendTransform() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FBlendTarget();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BlendTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlendTarget;
class UScriptStruct* FBlendTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlendTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlendTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlendTarget, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("BlendTarget"));
	}
	return Z_Registration_Info_UScriptStruct_BlendTarget.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FBlendTarget>()
{
	return FBlendTarget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlendTarget_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendTarget_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_BlendTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlendTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlendTarget>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendTarget_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "FConstraintTarget" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_BlendTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBlendTarget_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendTarget, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendTarget_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendTarget_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlendTarget_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "FConstraintTarget" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_BlendTransform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBlendTarget_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlendTarget, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendTarget_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendTarget_Statics::NewProp_Weight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlendTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendTarget_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlendTarget_Statics::NewProp_Weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlendTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"BlendTarget",
		sizeof(FBlendTarget),
		alignof(FBlendTarget),
		Z_Construct_UScriptStruct_FBlendTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlendTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlendTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlendTarget()
	{
		if (!Z_Registration_Info_UScriptStruct_BlendTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlendTarget.InnerSingleton, Z_Construct_UScriptStruct_FBlendTarget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlendTarget.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_BlendTransform>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_BlendTransform cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_BlendTransform;
class UScriptStruct* FRigUnit_BlendTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_BlendTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_BlendTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_BlendTransform, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_BlendTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_BlendTransform_Execute;
		Arguments_FRigUnit_BlendTransform_Execute.Emplace(TEXT("Source"), TEXT("FTransform"));
		Arguments_FRigUnit_BlendTransform_Execute.Emplace(TEXT("Targets"), TEXT("TArray<FBlendTarget>"));
		Arguments_FRigUnit_BlendTransform_Execute.Emplace(TEXT("Result"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_BlendTransform::Execute"), &FRigUnit_BlendTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_BlendTransform.OuterSingleton, Arguments_FRigUnit_BlendTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_BlendTransform.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_BlendTransform>()
{
	return FRigUnit_BlendTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Blend" },
		{ "Deprecated", "4.26.0" },
		{ "DisplayName", "Blend(Transform)" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_BlendTransform.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_BlendTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_BlendTransform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_BlendTransform, Source), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Source_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlendTarget, METADATA_PARAMS(nullptr, 0) }; // 1194311361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_BlendTransform.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_BlendTransform, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Targets_MetaData)) }; // 1194311361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Deprecated/RigUnit_BlendTransform.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_BlendTransform, Result), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_BlendTransform",
		sizeof(FRigUnit_BlendTransform),
		alignof(FRigUnit_BlendTransform),
		Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_BlendTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_BlendTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_BlendTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_BlendTransform.InnerSingleton;
	}

void FRigUnit_BlendTransform::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_BlendTransform::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FBlendTarget> Targets_1_Array(Targets);
	
	StaticExecute(
		InExecuteContext,
		Source,
		Targets_1_Array,
		Result
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_BlendTransform_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_BlendTransform_h_Statics::ScriptStructInfo[] = {
		{ FBlendTarget::StaticStruct, Z_Construct_UScriptStruct_FBlendTarget_Statics::NewStructOps, TEXT("BlendTarget"), &Z_Registration_Info_UScriptStruct_BlendTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlendTarget), 1194311361U) },
		{ FRigUnit_BlendTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_BlendTransform_Statics::NewStructOps, TEXT("RigUnit_BlendTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_BlendTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_BlendTransform), 592806297U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_BlendTransform_h_3295204115(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_BlendTransform_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Deprecated_RigUnit_BlendTransform_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
