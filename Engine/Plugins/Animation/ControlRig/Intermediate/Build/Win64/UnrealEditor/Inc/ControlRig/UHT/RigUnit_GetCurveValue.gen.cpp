// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Hierarchy/RigUnit_GetCurveValue.h"
#include "Rigs/RigHierarchyCache.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_GetCurveValue() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetCurveValue();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_GetCurveValue>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetCurveValue cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetCurveValue;
class UScriptStruct* FRigUnit_GetCurveValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetCurveValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetCurveValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetCurveValue, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetCurveValue"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetCurveValue_Execute;
		Arguments_FRigUnit_GetCurveValue_Execute.Emplace(TEXT("Curve"), TEXT("FName"));
		Arguments_FRigUnit_GetCurveValue_Execute.Emplace(TEXT("Valid"), TEXT("bool"));
		Arguments_FRigUnit_GetCurveValue_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FRigUnit_GetCurveValue_Execute.Emplace(TEXT("CachedCurveIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetCurveValue::Execute"), &FRigUnit_GetCurveValue::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetCurveValue.OuterSingleton, Arguments_FRigUnit_GetCurveValue_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetCurveValue.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetCurveValue>()
{
	return FRigUnit_GetCurveValue::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Valid_MetaData[];
#endif
		static void NewProp_Valid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Valid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedCurveIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedCurveIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Curve" },
		{ "Comment", "/**\n * GetCurveValue is used to retrieve a single float from a Curve\n */" },
		{ "DisplayName", "Get Curve Value" },
		{ "Keywords", "GetCurveValue,float" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetCurveValue.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "GetCurveValue is used to retrieve a single float from a Curve" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetCurveValue>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Curve to retrieve the transform for.\n\x09 */" },
		{ "CustomWidget", "CurveName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetCurveValue.h" },
		{ "ToolTip", "The name of the Curve to retrieve the transform for." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetCurveValue, Curve), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_Curve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_Valid_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetCurveValue.h" },
		{ "Output", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((FRigUnit_GetCurveValue*)Obj)->Valid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_GetCurveValue), &Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_Valid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_Valid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current transform of the given Curve - or identity in case it wasn't found.\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetCurveValue.h" },
		{ "Output", "" },
		{ "ToolTip", "The current transform of the given Curve - or identity in case it wasn't found." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetCurveValue, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_CachedCurveIndex_MetaData[] = {
		{ "Comment", "// Used to cache the internally used Curve index\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_GetCurveValue.h" },
		{ "ToolTip", "Used to cache the internally used Curve index" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_CachedCurveIndex = { "CachedCurveIndex", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetCurveValue, CachedCurveIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_CachedCurveIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_CachedCurveIndex_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_Valid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewProp_CachedCurveIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_GetCurveValue",
		sizeof(FRigUnit_GetCurveValue),
		alignof(FRigUnit_GetCurveValue),
		Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetCurveValue()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_GetCurveValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetCurveValue.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_GetCurveValue.InnerSingleton;
	}

void FRigUnit_GetCurveValue::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_GetCurveValue::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Curve,
		Valid,
		Value,
		CachedCurveIndex
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetCurveValue_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetCurveValue_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_GetCurveValue::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetCurveValue_Statics::NewStructOps, TEXT("RigUnit_GetCurveValue"), &Z_Registration_Info_UScriptStruct_RigUnit_GetCurveValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetCurveValue), 2834623501U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetCurveValue_h_3223311491(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetCurveValue_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_GetCurveValue_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
