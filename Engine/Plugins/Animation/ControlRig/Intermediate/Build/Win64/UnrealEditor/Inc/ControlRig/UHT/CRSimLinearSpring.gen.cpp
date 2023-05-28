// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Math/Simulation/CRSimLinearSpring.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRSimLinearSpring() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimLinearSpring();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CRSimLinearSpring;
class UScriptStruct* FCRSimLinearSpring::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CRSimLinearSpring.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CRSimLinearSpring.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCRSimLinearSpring, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("CRSimLinearSpring"));
	}
	return Z_Registration_Info_UScriptStruct_CRSimLinearSpring.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FCRSimLinearSpring>()
{
	return FCRSimLinearSpring::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectA_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubjectA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectB_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SubjectB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Coefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Equilibrium_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Equilibrium;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimLinearSpring.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCRSimLinearSpring>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_SubjectA_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The first point affected by this spring\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimLinearSpring.h" },
		{ "ToolTip", "The first point affected by this spring" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_SubjectA = { "SubjectA", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimLinearSpring, SubjectA), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_SubjectA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_SubjectA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_SubjectB_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The second point affected by this spring\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimLinearSpring.h" },
		{ "ToolTip", "The second point affected by this spring" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_SubjectB = { "SubjectB", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimLinearSpring, SubjectB), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_SubjectB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_SubjectB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_Coefficient_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The power of this spring\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimLinearSpring.h" },
		{ "ToolTip", "The power of this spring" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_Coefficient = { "Coefficient", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimLinearSpring, Coefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_Coefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_Coefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_Equilibrium_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * The rest length of this spring.\n\x09 * A value of lower than zero indicates that the equilibrium\n\x09 * should be based on the current distance of the two subjects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimLinearSpring.h" },
		{ "ToolTip", "The rest length of this spring.\nA value of lower than zero indicates that the equilibrium\nshould be based on the current distance of the two subjects." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_Equilibrium = { "Equilibrium", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimLinearSpring, Equilibrium), METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_Equilibrium_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_Equilibrium_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_SubjectA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_SubjectB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_Coefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewProp_Equilibrium,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"CRSimLinearSpring",
		sizeof(FCRSimLinearSpring),
		alignof(FCRSimLinearSpring),
		Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCRSimLinearSpring()
	{
		if (!Z_Registration_Info_UScriptStruct_CRSimLinearSpring.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CRSimLinearSpring.InnerSingleton, Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CRSimLinearSpring.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimLinearSpring_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimLinearSpring_h_Statics::ScriptStructInfo[] = {
		{ FCRSimLinearSpring::StaticStruct, Z_Construct_UScriptStruct_FCRSimLinearSpring_Statics::NewStructOps, TEXT("CRSimLinearSpring"), &Z_Registration_Info_UScriptStruct_CRSimLinearSpring, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCRSimLinearSpring), 954756495U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimLinearSpring_h_4056084919(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimLinearSpring_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimLinearSpring_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
