// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Hierarchy/RigUnit_UnsetCurveValue.h"
#include "Rigs/RigHierarchyCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_UnsetCurveValue() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_UnsetCurveValue>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_UnsetCurveValue cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_UnsetCurveValue;
class UScriptStruct* FRigUnit_UnsetCurveValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_UnsetCurveValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_UnsetCurveValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_UnsetCurveValue"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_UnsetCurveValue_Execute;
		Arguments_FRigUnit_UnsetCurveValue_Execute.Emplace(TEXT("Curve"), TEXT("FName"));
		Arguments_FRigUnit_UnsetCurveValue_Execute.Emplace(TEXT("CachedCurveIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_UnsetCurveValue::Execute"), &FRigUnit_UnsetCurveValue::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_UnsetCurveValue.OuterSingleton, Arguments_FRigUnit_UnsetCurveValue_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_UnsetCurveValue.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_UnsetCurveValue>()
{
	return FRigUnit_UnsetCurveValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Curve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedCurveIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedCurveIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Curve" },
		{ "Comment", "/**\n * UnsetCurveValue is used to perform a change in the curve container by invalidating a single Curve value.\n */" },
		{ "DisplayName", "Unset Curve Value" },
		{ "Keywords", "UnsetCurveValue" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_UnsetCurveValue.h" },
		{ "NodeColor", "0.0 0.36470600962638855 1.0" },
		{ "ToolTip", "UnsetCurveValue is used to perform a change in the curve container by invalidating a single Curve value." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_UnsetCurveValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Curve to set the Value for.\n\x09 */" },
		{ "CustomWidget", "CurveName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_UnsetCurveValue.h" },
		{ "ToolTip", "The name of the Curve to set the Value for." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_UnsetCurveValue, Curve), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::NewProp_Curve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::NewProp_CachedCurveIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used curve index\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_UnsetCurveValue.h" },
		{ "ToolTip", "Used to cache the internally used curve index" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::NewProp_CachedCurveIndex = { "CachedCurveIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_UnsetCurveValue, CachedCurveIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::NewProp_CachedCurveIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::NewProp_CachedCurveIndex_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::NewProp_CachedCurveIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_UnsetCurveValue",
		sizeof(FRigUnit_UnsetCurveValue),
		alignof(FRigUnit_UnsetCurveValue),
		Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_UnsetCurveValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_UnsetCurveValue.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_UnsetCurveValue.InnerSingleton;
	}

void FRigUnit_UnsetCurveValue::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_UnsetCurveValue::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Curve,
		CachedCurveIndex
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_UnsetCurveValue_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_UnsetCurveValue_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_UnsetCurveValue::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_UnsetCurveValue_Statics::NewStructOps, TEXT("RigUnit_UnsetCurveValue"), &Z_Registration_Info_UScriptStruct_RigUnit_UnsetCurveValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_UnsetCurveValue), 2192762740U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_UnsetCurveValue_h_613226866(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_UnsetCurveValue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_UnsetCurveValue_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
