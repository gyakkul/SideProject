// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Math/Simulation/CRSimPointContainer.h"
#include "Math/Simulation/CRSimLinearSpring.h"
#include "Math/Simulation/CRSimPointConstraint.h"
#include "Math/Simulation/CRSimPointForce.h"
#include "Math/Simulation/CRSimSoftCollision.h"
#include "RigVMFunctions/Math/RigVMMathLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCRSimPointContainer() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimContainer();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimLinearSpring();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointConstraint();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointContainer();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointForce();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimSoftCollision();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMSimPoint();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FCRSimPointContainer>() == std::is_polymorphic<FCRSimContainer>(), "USTRUCT FCRSimPointContainer cannot be polymorphic unless super FCRSimContainer is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CRSimPointContainer;
class UScriptStruct* FCRSimPointContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CRSimPointContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CRSimPointContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCRSimPointContainer, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("CRSimPointContainer"));
	}
	return Z_Registration_Info_UScriptStruct_CRSimPointContainer.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FCRSimPointContainer>()
{
	return FCRSimPointContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCRSimPointContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Springs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Springs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Springs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Forces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Forces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Forces;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionVolumes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionVolumes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionVolumes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Constraints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Constraints;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousStep_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousStep_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviousStep;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCRSimPointContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMSimPoint, METADATA_PARAMS(nullptr, 0) }; // 4039935554
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Points_MetaData[] = {
		{ "Comment", "/**\n\x09 * The points within the simulation\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointContainer.h" },
		{ "ToolTip", "The points within the simulation" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimPointContainer, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Points_MetaData)) }; // 4039935554
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Springs_Inner = { "Springs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCRSimLinearSpring, METADATA_PARAMS(nullptr, 0) }; // 954756495
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Springs_MetaData[] = {
		{ "Comment", "/**\n\x09 * The springs within the simulation\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointContainer.h" },
		{ "ToolTip", "The springs within the simulation" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Springs = { "Springs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimPointContainer, Springs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Springs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Springs_MetaData)) }; // 954756495
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Forces_Inner = { "Forces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCRSimPointForce, METADATA_PARAMS(nullptr, 0) }; // 1073332189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Forces_MetaData[] = {
		{ "Comment", "/**\n\x09 * The forces to apply to the points\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointContainer.h" },
		{ "ToolTip", "The forces to apply to the points" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Forces = { "Forces", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimPointContainer, Forces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Forces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Forces_MetaData)) }; // 1073332189
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_CollisionVolumes_Inner = { "CollisionVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCRSimSoftCollision, METADATA_PARAMS(nullptr, 0) }; // 3884990973
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_CollisionVolumes_MetaData[] = {
		{ "Comment", "/**\n     * The collision volumes for the simulation\n     */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointContainer.h" },
		{ "ToolTip", "The collision volumes for the simulation" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_CollisionVolumes = { "CollisionVolumes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimPointContainer, CollisionVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_CollisionVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_CollisionVolumes_MetaData)) }; // 3884990973
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Constraints_Inner = { "Constraints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCRSimPointConstraint, METADATA_PARAMS(nullptr, 0) }; // 2830395273
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Constraints_MetaData[] = {
		{ "Comment", "/**\n\x09 * The constraints within the simulation\n\x09 */" },
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointContainer.h" },
		{ "ToolTip", "The constraints within the simulation" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimPointContainer, Constraints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Constraints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Constraints_MetaData)) }; // 2830395273
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_PreviousStep_Inner = { "PreviousStep", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMSimPoint, METADATA_PARAMS(nullptr, 0) }; // 4039935554
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_PreviousStep_MetaData[] = {
		{ "ModuleRelativePath", "Public/Math/Simulation/CRSimPointContainer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_PreviousStep = { "PreviousStep", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCRSimPointContainer, PreviousStep), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_PreviousStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_PreviousStep_MetaData)) }; // 4039935554
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Springs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Springs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Forces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Forces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_CollisionVolumes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_CollisionVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Constraints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_Constraints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_PreviousStep_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewProp_PreviousStep,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FCRSimContainer,
		&NewStructOps,
		"CRSimPointContainer",
		sizeof(FCRSimPointContainer),
		alignof(FCRSimPointContainer),
		Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_CRSimPointContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CRSimPointContainer.InnerSingleton, Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CRSimPointContainer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointContainer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointContainer_h_Statics::ScriptStructInfo[] = {
		{ FCRSimPointContainer::StaticStruct, Z_Construct_UScriptStruct_FCRSimPointContainer_Statics::NewStructOps, TEXT("CRSimPointContainer"), &Z_Registration_Info_UScriptStruct_CRSimPointContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCRSimPointContainer), 3813261209U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointContainer_h_4000286874(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Math_Simulation_CRSimPointContainer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
