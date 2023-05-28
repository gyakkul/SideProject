// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Units/RigUnit.h"
#include "Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMStruct();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit>() == std::is_polymorphic<FRigVMStruct>(), "USTRUCT FRigUnit cannot be polymorphic unless super FRigVMStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit;
class UScriptStruct* FRigUnit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit>()
{
	return FRigUnit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Base class for all rig units */" },
		{ "ExecuteContext", "FControlRigExecuteContext" },
		{ "ModuleRelativePath", "Public/Units/RigUnit.h" },
		{ "NodeColor", "0.1 0.1 0.1" },
		{ "ToolTip", "Base class for all rig units" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigVMStruct,
		&NewStructOps,
		"RigUnit",
		sizeof(FRigUnit),
		alignof(FRigUnit),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnitMutable>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnitMutable cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnitMutable;
class UScriptStruct* FRigUnitMutable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnitMutable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnitMutable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnitMutable, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnitMutable"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnitMutable.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnitMutable>()
{
	return FRigUnitMutable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnitMutable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnitMutable_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Base class for all rig units that can change data */" },
		{ "ModuleRelativePath", "Public/Units/RigUnit.h" },
		{ "ToolTip", "Base class for all rig units that can change data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnitMutable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnitMutable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnitMutable_Statics::NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/*\n\x09 * This property is used to chain multiple mutable units together\n\x09 */" },
		{ "DisplayName", "Execute" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/RigUnit.h" },
		{ "Output", "" },
		{ "ToolTip", "* This property is used to chain multiple mutable units together" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnitMutable_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnitMutable, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnitMutable_Statics::NewProp_ExecuteContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnitMutable_Statics::NewProp_ExecuteContext_MetaData)) }; // 1930646767
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnitMutable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnitMutable_Statics::NewProp_ExecuteContext,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnitMutable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnitMutable",
		sizeof(FRigUnitMutable),
		alignof(FRigUnitMutable),
		Z_Construct_UScriptStruct_FRigUnitMutable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnitMutable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnitMutable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnitMutable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnitMutable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnitMutable.InnerSingleton, Z_Construct_UScriptStruct_FRigUnitMutable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnitMutable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnit_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnit_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_Statics::NewStructOps, TEXT("RigUnit"), &Z_Registration_Info_UScriptStruct_RigUnit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit), 2040811005U) },
		{ FRigUnitMutable::StaticStruct, Z_Construct_UScriptStruct_FRigUnitMutable_Statics::NewStructOps, TEXT("RigUnitMutable"), &Z_Registration_Info_UScriptStruct_RigUnitMutable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnitMutable), 844988461U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnit_h_1285205444(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnit_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_RigUnit_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
