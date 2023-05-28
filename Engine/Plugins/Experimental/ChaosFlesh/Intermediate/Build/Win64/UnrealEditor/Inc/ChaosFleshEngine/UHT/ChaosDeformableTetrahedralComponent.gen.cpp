// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosFlesh/ChaosDeformableTetrahedralComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosDeformableTetrahedralComponent() {}
// Cross Module References
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDeformablePhysicsComponent();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDeformableTetrahedralComponent();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDeformableTetrahedralComponent_NoRegister();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UFleshAsset_NoRegister();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UFleshDynamicAsset_NoRegister();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_USimulationAsset_NoRegister();
	CHAOSFLESHENGINE_API UEnum* Z_Construct_UEnum_ChaosFleshEngine_ChaosDeformableBindingOption();
	CHAOSFLESHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyForcesGroup();
	CHAOSFLESHENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshEngine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ChaosDeformableBindingOption;
	static UEnum* ChaosDeformableBindingOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ChaosDeformableBindingOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ChaosDeformableBindingOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosFleshEngine_ChaosDeformableBindingOption, (UObject*)Z_Construct_UPackage__Script_ChaosFleshEngine(), TEXT("ChaosDeformableBindingOption"));
		}
		return Z_Registration_Info_UEnum_ChaosDeformableBindingOption.OuterSingleton;
	}
	template<> CHAOSFLESHENGINE_API UEnum* StaticEnum<ChaosDeformableBindingOption>()
	{
		return ChaosDeformableBindingOption_StaticEnum();
	}
	struct Z_Construct_UEnum_ChaosFleshEngine_ChaosDeformableBindingOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ChaosFleshEngine_ChaosDeformableBindingOption_Statics::Enumerators[] = {
		{ "WorldPos", (int64)WorldPos },
		{ "WorldDelta", (int64)WorldDelta },
		{ "ComponentPos", (int64)ComponentPos },
		{ "ComponentDelta", (int64)ComponentDelta },
		{ "BonePos", (int64)BonePos },
		{ "BoneDelta", (int64)BoneDelta },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ChaosFleshEngine_ChaosDeformableBindingOption_Statics::Enum_MetaDataParams[] = {
		{ "BoneDelta.DisplayName", "Bone Deltas" },
		{ "BoneDelta.Name", "BoneDelta" },
		{ "BonePos.DisplayName", "Bone Positions" },
		{ "BonePos.Name", "BonePos" },
		{ "Comment", "/**\n*  Options for binding positions query.\n*/" },
		{ "ComponentDelta.DisplayName", "Component Deltas" },
		{ "ComponentDelta.Name", "ComponentDelta" },
		{ "ComponentPos.DisplayName", "Component Positions" },
		{ "ComponentPos.Name", "ComponentPos" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
		{ "ToolTip", "Options for binding positions query." },
		{ "WorldDelta.DisplayName", "World Deltas" },
		{ "WorldDelta.Name", "WorldDelta" },
		{ "WorldPos.DisplayName", "World Positions" },
		{ "WorldPos.Name", "WorldPos" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosFleshEngine_ChaosDeformableBindingOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ChaosFleshEngine,
		nullptr,
		"ChaosDeformableBindingOption",
		"ChaosDeformableBindingOption",
		Z_Construct_UEnum_ChaosFleshEngine_ChaosDeformableBindingOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosFleshEngine_ChaosDeformableBindingOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_ChaosFleshEngine_ChaosDeformableBindingOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosFleshEngine_ChaosDeformableBindingOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ChaosFleshEngine_ChaosDeformableBindingOption()
	{
		if (!Z_Registration_Info_UEnum_ChaosDeformableBindingOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ChaosDeformableBindingOption.InnerSingleton, Z_Construct_UEnum_ChaosFleshEngine_ChaosDeformableBindingOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ChaosDeformableBindingOption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FleshSimulationSpaceGroup;
class UScriptStruct* FFleshSimulationSpaceGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FleshSimulationSpaceGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FleshSimulationSpaceGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup, (UObject*)Z_Construct_UPackage__Script_ChaosFleshEngine(), TEXT("FleshSimulationSpaceGroup"));
	}
	return Z_Registration_Info_UScriptStruct_FleshSimulationSpaceGroup.OuterSingleton;
}
template<> CHAOSFLESHENGINE_API UScriptStruct* StaticStruct<FFleshSimulationSpaceGroup>()
{
	return FFleshSimulationSpaceGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimSpaceBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SimSpaceBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimSpaceSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SimSpaceSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFleshSimulationSpaceGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::NewProp_SimSpaceBoneName_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09\x09* Bone from the associated skeletal mesh (indicated by RestCollection.TargetSkeletalMesh) to use as\n\x09\x09* the space the sim runs in.\n\x09\x09*/" },
		{ "EditCondition", "SimSpace == ChaosDeformableSimSpace::Bone" },
		{ "GetOptions", "GetSimSpaceBoneNameOptions" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
		{ "ToolTip", "Bone from the associated skeletal mesh (indicated by RestCollection.TargetSkeletalMesh) to use as\nthe space the sim runs in." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::NewProp_SimSpaceBoneName = { "SimSpaceBoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFleshSimulationSpaceGroup, SimSpaceBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::NewProp_SimSpaceBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::NewProp_SimSpaceBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::NewProp_SimSpace_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Space the simulation will run in. */" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
		{ "ToolTip", "Space the simulation will run in." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::NewProp_SimSpace = { "SimSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFleshSimulationSpaceGroup, SimSpace), Z_Construct_UEnum_Chaos_ChaosDeformableSimSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::NewProp_SimSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::NewProp_SimSpace_MetaData)) }; // 35828405
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::NewProp_SimSpaceSkeletalMesh_MetaData[] = {
		{ "Comment", "/** The skeletal mesh to use pull the \\c SimSpaceBoneName from. */" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
		{ "ToolTip", "The skeletal mesh to use pull the \\c SimSpaceBoneName from." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::NewProp_SimSpaceSkeletalMesh = { "SimSpaceSkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFleshSimulationSpaceGroup, SimSpaceSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::NewProp_SimSpaceSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::NewProp_SimSpaceSkeletalMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::NewProp_SimSpaceBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::NewProp_SimSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::NewProp_SimSpaceSkeletalMesh,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshEngine,
		nullptr,
		&NewStructOps,
		"FleshSimulationSpaceGroup",
		sizeof(FFleshSimulationSpaceGroup),
		alignof(FFleshSimulationSpaceGroup),
		Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_FleshSimulationSpaceGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FleshSimulationSpaceGroup.InnerSingleton, Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FleshSimulationSpaceGroup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BodyForcesGroup;
class UScriptStruct* FBodyForcesGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BodyForcesGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BodyForcesGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBodyForcesGroup, (UObject*)Z_Construct_UPackage__Script_ChaosFleshEngine(), TEXT("BodyForcesGroup"));
	}
	return Z_Registration_Info_UScriptStruct_BodyForcesGroup.OuterSingleton;
}
template<> CHAOSFLESHENGINE_API UScriptStruct* StaticStruct<FBodyForcesGroup>()
{
	return FBodyForcesGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBodyForcesGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyGravity_MetaData[];
#endif
		static void NewProp_bApplyGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampingMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DampingMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StiffnessMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StiffnessMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncompressibilityMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IncompressibilityMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InflationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InflationMultiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBodyForcesGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_bApplyGravity_MetaData[] = {
		{ "Category", "Physics" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_bApplyGravity_SetBit(void* Obj)
	{
		((FBodyForcesGroup*)Obj)->bApplyGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_bApplyGravity = { "bApplyGravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBodyForcesGroup), &Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_bApplyGravity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_bApplyGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_bApplyGravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_DampingMultiplier_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_DampingMultiplier = { "DampingMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBodyForcesGroup, DampingMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_DampingMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_DampingMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_StiffnessMultiplier_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_StiffnessMultiplier = { "StiffnessMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBodyForcesGroup, StiffnessMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_StiffnessMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_StiffnessMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_IncompressibilityMultiplier_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_IncompressibilityMultiplier = { "IncompressibilityMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBodyForcesGroup, IncompressibilityMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_IncompressibilityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_IncompressibilityMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_InflationMultiplier_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_InflationMultiplier = { "InflationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBodyForcesGroup, InflationMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_InflationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_InflationMultiplier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_bApplyGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_DampingMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_StiffnessMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_IncompressibilityMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewProp_InflationMultiplier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshEngine,
		nullptr,
		&NewStructOps,
		"BodyForcesGroup",
		sizeof(FBodyForcesGroup),
		alignof(FBodyForcesGroup),
		Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBodyForcesGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_BodyForcesGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BodyForcesGroup.InnerSingleton, Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BodyForcesGroup.InnerSingleton;
	}
	DEFINE_FUNCTION(UDeformableTetrahedralComponent::execGetSimSpaceBoneNameOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetSimSpaceBoneNameOptions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeformableTetrahedralComponent::execGetSkeletalMeshEmbeddedPositions)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Format);
		P_GET_STRUCT(FTransform,Z_Param_TargetDeformationSkeletonOffset);
		P_GET_PROPERTY(FNameProperty,Z_Param_TargetBone);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SimulationBlendWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetSkeletalMeshEmbeddedPositions(ChaosDeformableBindingOption(Z_Param_Format),Z_Param_TargetDeformationSkeletonOffset,Z_Param_TargetBone,Z_Param_SimulationBlendWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDeformableTetrahedralComponent::execGetSkeletalMeshBindingPositions)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_InSkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetSkeletalMeshBindingPositions(Z_Param_InSkeletalMesh);
		P_NATIVE_END;
	}
	void UDeformableTetrahedralComponent::StaticRegisterNativesUDeformableTetrahedralComponent()
	{
		UClass* Class = UDeformableTetrahedralComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSimSpaceBoneNameOptions", &UDeformableTetrahedralComponent::execGetSimSpaceBoneNameOptions },
			{ "GetSkeletalMeshBindingPositions", &UDeformableTetrahedralComponent::execGetSkeletalMeshBindingPositions },
			{ "GetSkeletalMeshEmbeddedPositions", &UDeformableTetrahedralComponent::execGetSkeletalMeshEmbeddedPositions },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSimSpaceBoneNameOptions_Statics
	{
		struct DeformableTetrahedralComponent_eventGetSimSpaceBoneNameOptions_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSimSpaceBoneNameOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSimSpaceBoneNameOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DeformableTetrahedralComponent_eventGetSimSpaceBoneNameOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSimSpaceBoneNameOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSimSpaceBoneNameOptions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSimSpaceBoneNameOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSimSpaceBoneNameOptions_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "/* Returns a list of bone names from the currently selected skeletal mesh. */" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
		{ "ToolTip", "Returns a list of bone names from the currently selected skeletal mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSimSpaceBoneNameOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeformableTetrahedralComponent, nullptr, "GetSimSpaceBoneNameOptions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSimSpaceBoneNameOptions_Statics::DeformableTetrahedralComponent_eventGetSimSpaceBoneNameOptions_Parms), Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSimSpaceBoneNameOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSimSpaceBoneNameOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSimSpaceBoneNameOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSimSpaceBoneNameOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSimSpaceBoneNameOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSimSpaceBoneNameOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions_Statics
	{
		struct DeformableTetrahedralComponent_eventGetSkeletalMeshBindingPositions_Parms
		{
			const USkeletalMesh* InSkeletalMesh;
			TArray<FVector> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSkeletalMesh;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions_Statics::NewProp_InSkeletalMesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions_Statics::NewProp_InSkeletalMesh = { "InSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DeformableTetrahedralComponent_eventGetSkeletalMeshBindingPositions_Parms, InSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions_Statics::NewProp_InSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions_Statics::NewProp_InSkeletalMesh_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DeformableTetrahedralComponent_eventGetSkeletalMeshBindingPositions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions_Statics::NewProp_InSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** @deprecated Use GetSkeletalMeshEmbeddedPositions() instead. */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetSkeletalMeshEmbeddedPositions() instead." },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
		{ "ToolTip", "@deprecated Use GetSkeletalMeshEmbeddedPositions() instead." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeformableTetrahedralComponent, nullptr, "GetSkeletalMeshBindingPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions_Statics::DeformableTetrahedralComponent_eventGetSkeletalMeshBindingPositions_Parms), Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics
	{
		struct DeformableTetrahedralComponent_eventGetSkeletalMeshEmbeddedPositions_Parms
		{
			TEnumAsByte<ChaosDeformableBindingOption> Format;
			FTransform TargetDeformationSkeletonOffset;
			FName TargetBone;
			float SimulationBlendWeight;
			TArray<FVector> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetDeformationSkeletonOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetDeformationSkeletonOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TargetBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationBlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimulationBlendWeight;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_Format_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DeformableTetrahedralComponent_eventGetSkeletalMeshEmbeddedPositions_Parms, Format), Z_Construct_UEnum_ChaosFleshEngine_ChaosDeformableBindingOption, METADATA_PARAMS(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_Format_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_Format_MetaData)) }; // 4273043714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_TargetDeformationSkeletonOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_TargetDeformationSkeletonOffset = { "TargetDeformationSkeletonOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DeformableTetrahedralComponent_eventGetSkeletalMeshEmbeddedPositions_Parms, TargetDeformationSkeletonOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_TargetDeformationSkeletonOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_TargetDeformationSkeletonOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_TargetBone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_TargetBone = { "TargetBone", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DeformableTetrahedralComponent_eventGetSkeletalMeshEmbeddedPositions_Parms, TargetBone), METADATA_PARAMS(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_TargetBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_TargetBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_SimulationBlendWeight_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_SimulationBlendWeight = { "SimulationBlendWeight", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DeformableTetrahedralComponent_eventGetSkeletalMeshEmbeddedPositions_Parms, SimulationBlendWeight), METADATA_PARAMS(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_SimulationBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_SimulationBlendWeight_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DeformableTetrahedralComponent_eventGetSkeletalMeshEmbeddedPositions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_TargetDeformationSkeletonOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_TargetBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_SimulationBlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09* Get the current positions of the transformation hierarchy from \\c TargetDeformationSkeleton,\n\x09* deformed by the tetrahedral mesh.  Results can be in world space postions/deltas, component space\n\x09* positions/deltas, or bone space positions/deltas.  If a bone space is desired \\p TargetBone\n\x09* must indicate which bone to use. TargetDeformationSkeletonOffset is an offset transform that moves \n\x09* the \\c TargetDeformationSkeleton to be co-located with the flesh mesh.\n\x09*/" },
		{ "CPP_Default_SimulationBlendWeight", "1.000000" },
		{ "CPP_Default_TargetBone", "" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
		{ "ToolTip", "Get the current positions of the transformation hierarchy from \\c TargetDeformationSkeleton,\ndeformed by the tetrahedral mesh.  Results can be in world space postions/deltas, component space\npositions/deltas, or bone space positions/deltas.  If a bone space is desired \\p TargetBone\nmust indicate which bone to use. TargetDeformationSkeletonOffset is an offset transform that moves\nthe \\c TargetDeformationSkeleton to be co-located with the flesh mesh." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeformableTetrahedralComponent, nullptr, "GetSkeletalMeshEmbeddedPositions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::DeformableTetrahedralComponent_eventGetSkeletalMeshEmbeddedPositions_Parms), Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeformableTetrahedralComponent);
	UClass* Z_Construct_UClass_UDeformableTetrahedralComponent_NoRegister()
	{
		return UDeformableTetrahedralComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDeformableTetrahedralComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyForces_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BodyForces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MassMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MassMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RestCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SimulationCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeformablePhysicsComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSimSpaceBoneNameOptions, "GetSimSpaceBoneNameOptions" }, // 1797773462
		{ &Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshBindingPositions, "GetSkeletalMeshBindingPositions" }, // 1595197456
		{ &Z_Construct_UFunction_UDeformableTetrahedralComponent_GetSkeletalMeshEmbeddedPositions, "GetSkeletalMeshEmbeddedPositions" }, // 3233082558
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n*\x09UDeformableTetrahedralComponent\n*/" },
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
		{ "ToolTip", "UDeformableTetrahedralComponent" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_SimulationSpace_MetaData[] = {
		{ "Category", "Physics" },
		{ "DisplayPriority", "10" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_SimulationSpace = { "SimulationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeformableTetrahedralComponent, SimulationSpace), Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup, METADATA_PARAMS(Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_SimulationSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_SimulationSpace_MetaData)) }; // 4210337050
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_BodyForces_MetaData[] = {
		{ "Category", "Physics" },
		{ "DisplayPriority", "10" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_BodyForces = { "BodyForces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeformableTetrahedralComponent, BodyForces), Z_Construct_UScriptStruct_FBodyForcesGroup, METADATA_PARAMS(Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_BodyForces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_BodyForces_MetaData)) }; // 4273452636
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_MassMultiplier_MetaData[] = {
		{ "Category", "Physics" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayPriority", "100" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_MassMultiplier = { "MassMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeformableTetrahedralComponent, MassMultiplier), METADATA_PARAMS(Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_MassMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_MassMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Rendering" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeformableTetrahedralComponent, Mesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_RestCollection_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** FleshAsset that describes the simulation rest state. */" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "FleshAsset that describes the simulation rest state." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_RestCollection = { "RestCollection", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeformableTetrahedralComponent, RestCollection), Z_Construct_UClass_UFleshAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_RestCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_RestCollection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_DynamicCollection_MetaData[] = {
		{ "Comment", "/** Current simulation state. */" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
		{ "ToolTip", "Current simulation state." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_DynamicCollection = { "DynamicCollection", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeformableTetrahedralComponent, DynamicCollection), Z_Construct_UClass_UFleshDynamicAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_DynamicCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_DynamicCollection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_SimulationCollection_MetaData[] = {
		{ "Comment", "/** Simulator input */" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableTetrahedralComponent.h" },
		{ "ToolTip", "Simulator input" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_SimulationCollection = { "SimulationCollection", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeformableTetrahedralComponent, SimulationCollection), Z_Construct_UClass_USimulationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_SimulationCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_SimulationCollection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_SimulationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_BodyForces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_MassMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_RestCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_DynamicCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::NewProp_SimulationCollection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeformableTetrahedralComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::ClassParams = {
		&UDeformableTetrahedralComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeformableTetrahedralComponent()
	{
		if (!Z_Registration_Info_UClass_UDeformableTetrahedralComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeformableTetrahedralComponent.OuterSingleton, Z_Construct_UClass_UDeformableTetrahedralComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDeformableTetrahedralComponent.OuterSingleton;
	}
	template<> CHAOSFLESHENGINE_API UClass* StaticClass<UDeformableTetrahedralComponent>()
	{
		return UDeformableTetrahedralComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeformableTetrahedralComponent);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_Statics::EnumInfo[] = {
		{ ChaosDeformableBindingOption_StaticEnum, TEXT("ChaosDeformableBindingOption"), &Z_Registration_Info_UEnum_ChaosDeformableBindingOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4273043714U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_Statics::ScriptStructInfo[] = {
		{ FFleshSimulationSpaceGroup::StaticStruct, Z_Construct_UScriptStruct_FFleshSimulationSpaceGroup_Statics::NewStructOps, TEXT("FleshSimulationSpaceGroup"), &Z_Registration_Info_UScriptStruct_FleshSimulationSpaceGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFleshSimulationSpaceGroup), 4210337050U) },
		{ FBodyForcesGroup::StaticStruct, Z_Construct_UScriptStruct_FBodyForcesGroup_Statics::NewStructOps, TEXT("BodyForcesGroup"), &Z_Registration_Info_UScriptStruct_BodyForcesGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBodyForcesGroup), 4273452636U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDeformableTetrahedralComponent, UDeformableTetrahedralComponent::StaticClass, TEXT("UDeformableTetrahedralComponent"), &Z_Registration_Info_UClass_UDeformableTetrahedralComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeformableTetrahedralComponent), 3877927377U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_2911678313(TEXT("/Script/ChaosFleshEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableTetrahedralComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
