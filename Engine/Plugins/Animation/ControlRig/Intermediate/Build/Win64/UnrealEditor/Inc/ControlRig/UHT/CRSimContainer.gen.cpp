// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Math/Simulation/CRSimContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRSimContainer() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimContainer();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CRSimContainer;
class UScriptStruct* FCRSimContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CRSimContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CRSimContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCRSimContainer, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("CRSimContainer"));
	}
	return Z_Registration_Info_UScriptStruct_CRSimContainer.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FCRSimContainer>()
{
	return FCRSimContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCRSimContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeLeftForStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLeftForStep;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimContainer_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCRSimContainer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_TimeStep_MetaData[] = {
		{ "Comment", "/**\n\x09 * The time step used by this container\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimContainer.h" },
		{ "ToolTip", "The time step used by this container" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_TimeStep = { "TimeStep", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimContainer, TimeStep), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_TimeStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_TimeStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_AccumulatedTime_MetaData[] = {
		{ "Comment", "/**\n\x09 * The time step used by this container\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimContainer.h" },
		{ "ToolTip", "The time step used by this container" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_AccumulatedTime = { "AccumulatedTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimContainer, AccumulatedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_AccumulatedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_AccumulatedTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_TimeLeftForStep_MetaData[] = {
		{ "Comment", "/**\n\x09 * The time left until the next step\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimContainer.h" },
		{ "ToolTip", "The time left until the next step" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_TimeLeftForStep = { "TimeLeftForStep", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimContainer, TimeLeftForStep), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_TimeLeftForStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_TimeLeftForStep_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCRSimContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_TimeStep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_AccumulatedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewProp_TimeLeftForStep,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCRSimContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"CRSimContainer",
		sizeof(FCRSimContainer),
		alignof(FCRSimContainer),
		Z_Construct_UScriptStruct_FCRSimContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCRSimContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_CRSimContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CRSimContainer.InnerSingleton, Z_Construct_UScriptStruct_FCRSimContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CRSimContainer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimContainer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimContainer_h_Statics::ScriptStructInfo[] = {
		{ FCRSimContainer::StaticStruct, Z_Construct_UScriptStruct_FCRSimContainer_Statics::NewStructOps, TEXT("CRSimContainer"), &Z_Registration_Info_UScriptStruct_CRSimContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCRSimContainer), 428851839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimContainer_h_1059159272(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimContainer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
