// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FBIKShared.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFBIKShared() {}
// Cross Module References
	FULLBODYIK_API UScriptStruct* Z_Construct_UScriptStruct_FSolverInput();
	UPackage* Z_Construct_UPackage__Script_FullBodyIK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SolverInput;
class UScriptStruct* FSolverInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SolverInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SolverInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSolverInput, (UObject*)Z_Construct_UPackage__Script_FullBodyIK(), TEXT("SolverInput"));
	}
	return Z_Registration_Info_UScriptStruct_SolverInput.OuterSingleton;
}
template<> FULLBODYIK_API UScriptStruct* StaticStruct<FSolverInput>()
{
	return FSolverInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSolverInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearMotionStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearMotionStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLinearMotionStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLinearMotionStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularMotionStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularMotionStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAngularMotionStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAngularMotionStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTargetClamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultTargetClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseJacobianTranspose_MetaData[];
#endif
		static void NewProp_bUseJacobianTranspose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseJacobianTranspose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverInput_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FBIKShared.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSolverInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSolverInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_LinearMotionStrength_MetaData[] = {
		{ "Category", "FSolverInput" },
		{ "Comment", "/*\n\x09 * This value is applied to the target information for effectors, which influence back to \n\x09 * Joint's motion that are affected by the end effector\n\x09 * The reason min/max is used when we apply the depth through the chain that are affected\n\n\x09 */" },
		{ "ModuleRelativePath", "Public/FBIKShared.h" },
		{ "ToolTip", "* This value is applied to the target information for effectors, which influence back to\n* Joint's motion that are affected by the end effector\n* The reason min/max is used when we apply the depth through the chain that are affected" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_LinearMotionStrength = { "LinearMotionStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverInput, LinearMotionStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_LinearMotionStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_LinearMotionStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_MinLinearMotionStrength_MetaData[] = {
		{ "Category", "FSolverInput" },
		{ "ModuleRelativePath", "Public/FBIKShared.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_MinLinearMotionStrength = { "MinLinearMotionStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverInput, MinLinearMotionStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_MinLinearMotionStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_MinLinearMotionStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_AngularMotionStrength_MetaData[] = {
		{ "Category", "FSolverInput" },
		{ "Comment", "/*\n\x09 * This value is applied to the target information for effectors, which influence back to \n\x09 * Joint's motion that are affected by the end effector\n\x09 * The reason min/max is used when we apply the depth through the chain that are affected\n\x09 */" },
		{ "ModuleRelativePath", "Public/FBIKShared.h" },
		{ "ToolTip", "* This value is applied to the target information for effectors, which influence back to\n* Joint's motion that are affected by the end effector\n* The reason min/max is used when we apply the depth through the chain that are affected" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_AngularMotionStrength = { "AngularMotionStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverInput, AngularMotionStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_AngularMotionStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_AngularMotionStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_MinAngularMotionStrength_MetaData[] = {
		{ "Category", "FSolverInput" },
		{ "ModuleRelativePath", "Public/FBIKShared.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_MinAngularMotionStrength = { "MinAngularMotionStrength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverInput, MinAngularMotionStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_MinAngularMotionStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_MinAngularMotionStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_DefaultTargetClamp_MetaData[] = {
		{ "Category", "FSolverInput" },
		{ "Comment", "/* This is a scale value (range from 0-0.7) that is used to stablize the target vector. If less, it's more stable, but it can reduce speed of converge. */" },
		{ "ModuleRelativePath", "Public/FBIKShared.h" },
		{ "ToolTip", "This is a scale value (range from 0-0.7) that is used to stablize the target vector. If less, it's more stable, but it can reduce speed of converge." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_DefaultTargetClamp = { "DefaultTargetClamp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverInput, DefaultTargetClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_DefaultTargetClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_DefaultTargetClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_Precision_MetaData[] = {
		{ "Category", "FSolverInput" },
		{ "Comment", "/**\n\x09 * The precision to use for the solver\n\x09 */" },
		{ "ModuleRelativePath", "Public/FBIKShared.h" },
		{ "ToolTip", "The precision to use for the solver" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverInput, Precision), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_Precision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_Precision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_Damping_MetaData[] = {
		{ "Category", "FSolverInput" },
		{ "Comment", "/**\n\x09* The precision to use for the fabrik solver\n\x09*/" },
		{ "ModuleRelativePath", "Public/FBIKShared.h" },
		{ "ToolTip", "The precision to use for the fabrik solver" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverInput, Damping), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "FSolverInput" },
		{ "Comment", "/**\n\x09 * The maximum number of iterations. Values between 4 and 16 are common.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FBIKShared.h" },
		{ "ToolTip", "The maximum number of iterations. Values between 4 and 16 are common." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSolverInput, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_bUseJacobianTranspose_MetaData[] = {
		{ "Category", "FSolverInput" },
		{ "Comment", "/**\n\x09 * Cheaper solution than default Jacobian Pseudo Inverse Damped Least Square\n\x09 */" },
		{ "ModuleRelativePath", "Public/FBIKShared.h" },
		{ "ToolTip", "Cheaper solution than default Jacobian Pseudo Inverse Damped Least Square" },
	};
#endif
	void Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_bUseJacobianTranspose_SetBit(void* Obj)
	{
		((FSolverInput*)Obj)->bUseJacobianTranspose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_bUseJacobianTranspose = { "bUseJacobianTranspose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSolverInput), &Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_bUseJacobianTranspose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_bUseJacobianTranspose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_bUseJacobianTranspose_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSolverInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_LinearMotionStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_MinLinearMotionStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_AngularMotionStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_MinAngularMotionStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_DefaultTargetClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_Precision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_Damping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_MaxIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSolverInput_Statics::NewProp_bUseJacobianTranspose,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSolverInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FullBodyIK,
		nullptr,
		&NewStructOps,
		"SolverInput",
		sizeof(FSolverInput),
		alignof(FSolverInput),
		Z_Construct_UScriptStruct_FSolverInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSolverInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSolverInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSolverInput()
	{
		if (!Z_Registration_Info_UScriptStruct_SolverInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SolverInput.InnerSingleton, Z_Construct_UScriptStruct_FSolverInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SolverInput.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKShared_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKShared_h_Statics::ScriptStructInfo[] = {
		{ FSolverInput::StaticStruct, Z_Construct_UScriptStruct_FSolverInput_Statics::NewStructOps, TEXT("SolverInput"), &Z_Registration_Info_UScriptStruct_SolverInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSolverInput), 439754141U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKShared_h_2277273373(TEXT("/Script/FullBodyIK"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKShared_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_FullBodyIK_Public_FBIKShared_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
