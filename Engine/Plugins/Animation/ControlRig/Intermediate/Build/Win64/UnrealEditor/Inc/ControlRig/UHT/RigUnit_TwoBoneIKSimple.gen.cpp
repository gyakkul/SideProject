// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h"
#include "Rigs/RigHierarchyCache.h"
#include "Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_TwoBoneIKSimple() {}
// Cross Module References
	CONTROLRIG_API UEnum* Z_Construct_UEnum_ControlRig_EControlRigVectorKind();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimple_DebugSettings;
class UScriptStruct* FRigUnit_TwoBoneIKSimple_DebugSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimple_DebugSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimple_DebugSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_TwoBoneIKSimple_DebugSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimple_DebugSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_TwoBoneIKSimple_DebugSettings>()
{
	return FRigUnit_TwoBoneIKSimple_DebugSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TwoBoneIKSimple_DebugSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * If enabled debug information will be drawn \n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "If enabled debug information will be drawn" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigUnit_TwoBoneIKSimple_DebugSettings*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_TwoBoneIKSimple_DebugSettings), &Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * The size of the debug drawing information\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The size of the debug drawing information" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple_DebugSettings, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * The offset at which to draw the debug information in the world\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The offset at which to draw the debug information in the world" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple_DebugSettings, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::NewProp_WorldOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::NewProp_WorldOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_TwoBoneIKSimple_DebugSettings",
		sizeof(FRigUnit_TwoBoneIKSimple_DebugSettings),
		alignof(FRigUnit_TwoBoneIKSimple_DebugSettings),
		Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimple_DebugSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimple_DebugSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimple_DebugSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_TwoBoneIKSimple>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_TwoBoneIKSimple cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimple;
class UScriptStruct* FRigUnit_TwoBoneIKSimple::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimple.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimple.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_TwoBoneIKSimple"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_TwoBoneIKSimple_Execute;
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("BoneA"), TEXT("FName"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("BoneB"), TEXT("FName"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("EffectorBone"), TEXT("FName"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("Effector"), TEXT("FTransform"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("PrimaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("SecondaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("SecondaryAxisWeight"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("PoleVector"), TEXT("FVector"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("PoleVectorKind"), TEXT("EControlRigVectorKind"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("PoleVectorSpace"), TEXT("FName"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("bEnableStretch"), TEXT("bool"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("StretchStartRatio"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("StretchMaximumRatio"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("BoneALength"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("BoneBLength"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("DebugSettings"), TEXT("FRigUnit_TwoBoneIKSimple_DebugSettings"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("CachedBoneAIndex"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("CachedBoneBIndex"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("CachedEffectorBoneIndex"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_TwoBoneIKSimple_Execute.Emplace(TEXT("CachedPoleVectorSpaceIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TwoBoneIKSimple::Execute"), &FRigUnit_TwoBoneIKSimple::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimple.OuterSingleton, Arguments_FRigUnit_TwoBoneIKSimple_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimple.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_TwoBoneIKSimple>()
{
	return FRigUnit_TwoBoneIKSimple::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneA_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneB_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectorBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EffectorBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Effector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxisWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondaryAxisWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoleVector;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PoleVectorKind_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectorKind_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PoleVectorKind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectorSpace_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PoleVectorSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStretch_MetaData[];
#endif
		static void NewProp_bEnableStretch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStretch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StretchStartRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchStartRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StretchMaximumRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchMaximumRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneALength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoneALength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneBLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoneBLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBoneAIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBoneAIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedBoneBIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedBoneBIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedEffectorBoneIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedEffectorBoneIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPoleVectorSpaceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedPoleVectorSpaceIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Solves the two bone IK given two bones.\n * Note: This node operates in world space!\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Basic IK" },
		{ "Keywords", "TwoBone,IK" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "Solves the two bone IK given two bones.\nNote: This node operates in world space!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TwoBoneIKSimple>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneA_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of first bone\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The name of first bone" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneA = { "BoneA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, BoneA), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneB_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of second bone\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The name of second bone" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneB = { "BoneB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, BoneB), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_EffectorBone_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of the effector bone (if exists)\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The name of the effector bone (if exists)" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_EffectorBone = { "EffectorBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, EffectorBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_EffectorBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_EffectorBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_Effector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The transform of the effector\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The transform of the effector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_Effector = { "Effector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, Effector), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_Effector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_Effector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PrimaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The major axis being aligned - along the bone\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The major axis being aligned - along the bone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PrimaryAxis = { "PrimaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, PrimaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PrimaryAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PrimaryAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_SecondaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The minor axis being aligned - towards the polevector\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The minor axis being aligned - towards the polevector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_SecondaryAxis = { "SecondaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, SecondaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_SecondaryAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_SecondaryAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_SecondaryAxisWeight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Determines how much the secondary axis roll is being applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "Determines how much the secondary axis roll is being applied" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_SecondaryAxisWeight = { "SecondaryAxisWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, SecondaryAxisWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_SecondaryAxisWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_SecondaryAxisWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PoleVector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The polevector to use for the IK solver\n\x09 * This can be a location or direction.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The polevector to use for the IK solver\nThis can be a location or direction." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PoleVector = { "PoleVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, PoleVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PoleVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PoleVector_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PoleVectorKind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PoleVectorKind_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The kind of pole vector this is representing - can be a direction or a location\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The kind of pole vector this is representing - can be a direction or a location" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PoleVectorKind = { "PoleVectorKind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, PoleVectorKind), Z_Construct_UEnum_ControlRig_EControlRigVectorKind, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PoleVectorKind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PoleVectorKind_MetaData)) }; // 2351274891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PoleVectorSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The space in which the pole vector is expressed\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The space in which the pole vector is expressed" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PoleVectorSpace = { "PoleVectorSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, PoleVectorSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PoleVectorSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PoleVectorSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_bEnableStretch_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true the stretch feature of the solver will be enabled\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "If set to true the stretch feature of the solver will be enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_bEnableStretch_SetBit(void* Obj)
	{
		((FRigUnit_TwoBoneIKSimple*)Obj)->bEnableStretch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_bEnableStretch = { "bEnableStretch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_TwoBoneIKSimple), &Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_bEnableStretch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_bEnableStretch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_bEnableStretch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_StretchStartRatio_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The ratio where the stretch starts\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The ratio where the stretch starts" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_StretchStartRatio = { "StretchStartRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, StretchStartRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_StretchStartRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_StretchStartRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_StretchMaximumRatio_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n     * The maximum allowed stretch ratio\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The maximum allowed stretch ratio" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_StretchMaximumRatio = { "StretchMaximumRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, StretchMaximumRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_StretchMaximumRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_StretchMaximumRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The weight of the solver - how much the IK should be applied.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The weight of the solver - how much the IK should be applied." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneALength_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The length of the first bone.\n\x09 * If set to 0.0 it will be determined by the hierarchy\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The length of the first bone.\nIf set to 0.0 it will be determined by the hierarchy" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneALength = { "BoneALength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, BoneALength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneALength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneALength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneBLength_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The length of the second  bone.\n\x09 * If set to 0.0 it will be determined by the hierarchy\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The length of the second  bone.\nIf set to 0.0 it will be determined by the hierarchy" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneBLength = { "BoneBLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, BoneBLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneBLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneBLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_TwoBoneIKSimple*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_TwoBoneIKSimple), &Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The settings for debug drawing\n\x09 */" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The settings for debug drawing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, DebugSettings), Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_DebugSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_DebugSettings_MetaData)) }; // 2480932887
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedBoneAIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedBoneAIndex = { "CachedBoneAIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, CachedBoneAIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedBoneAIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedBoneAIndex_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedBoneBIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedBoneBIndex = { "CachedBoneBIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, CachedBoneBIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedBoneBIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedBoneBIndex_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedEffectorBoneIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedEffectorBoneIndex = { "CachedEffectorBoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, CachedEffectorBoneIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedEffectorBoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedEffectorBoneIndex_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedPoleVectorSpaceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedPoleVectorSpaceIndex = { "CachedPoleVectorSpaceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimple, CachedPoleVectorSpaceIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedPoleVectorSpaceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedPoleVectorSpaceIndex_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_EffectorBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_Effector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PrimaryAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_SecondaryAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_SecondaryAxisWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PoleVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PoleVectorKind_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PoleVectorKind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_PoleVectorSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_bEnableStretch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_StretchStartRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_StretchMaximumRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneALength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_BoneBLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_DebugSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedBoneAIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedBoneBIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedEffectorBoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewProp_CachedPoleVectorSpaceIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_TwoBoneIKSimple",
		sizeof(FRigUnit_TwoBoneIKSimple),
		alignof(FRigUnit_TwoBoneIKSimple),
		Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimple.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimple.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimple.InnerSingleton;
	}

void FRigUnit_TwoBoneIKSimple::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_TwoBoneIKSimple::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		BoneA,
		BoneB,
		EffectorBone,
		Effector,
		PrimaryAxis,
		SecondaryAxis,
		SecondaryAxisWeight,
		PoleVector,
		PoleVectorKind,
		PoleVectorSpace,
		bEnableStretch,
		StretchStartRatio,
		StretchMaximumRatio,
		Weight,
		BoneALength,
		BoneBLength,
		bPropagateToChildren,
		DebugSettings,
		CachedBoneAIndex,
		CachedBoneBIndex,
		CachedEffectorBoneIndex,
		CachedPoleVectorSpaceIndex
	);
}


static_assert(std::is_polymorphic<FRigUnit_TwoBoneIKSimplePerItem>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_TwoBoneIKSimplePerItem cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimplePerItem;
class UScriptStruct* FRigUnit_TwoBoneIKSimplePerItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimplePerItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimplePerItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_TwoBoneIKSimplePerItem"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute;
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("ItemA"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("ItemB"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("EffectorItem"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("Effector"), TEXT("FTransform"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("PrimaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("SecondaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("SecondaryAxisWeight"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("PoleVector"), TEXT("FVector"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("PoleVectorKind"), TEXT("EControlRigVectorKind"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("PoleVectorSpace"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("bEnableStretch"), TEXT("bool"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("StretchStartRatio"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("StretchMaximumRatio"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("Weight"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("ItemALength"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("ItemBLength"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("DebugSettings"), TEXT("FRigUnit_TwoBoneIKSimple_DebugSettings"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("CachedItemAIndex"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("CachedItemBIndex"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("CachedEffectorItemIndex"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute.Emplace(TEXT("CachedPoleVectorSpaceIndex"), TEXT("FCachedRigElement"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TwoBoneIKSimplePerItem::Execute"), &FRigUnit_TwoBoneIKSimplePerItem::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimplePerItem.OuterSingleton, Arguments_FRigUnit_TwoBoneIKSimplePerItem_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimplePerItem.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_TwoBoneIKSimplePerItem>()
{
	return FRigUnit_TwoBoneIKSimplePerItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ItemB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectorItem_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectorItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Effector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxisWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondaryAxisWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoleVector;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PoleVectorKind_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectorKind_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PoleVectorKind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleVectorSpace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoleVectorSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStretch_MetaData[];
#endif
		static void NewProp_bEnableStretch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStretch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StretchStartRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchStartRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StretchMaximumRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchMaximumRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemALength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemALength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemBLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ItemBLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedItemAIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItemAIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedItemBIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedItemBIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedEffectorItemIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedEffectorItemIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPoleVectorSpaceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedPoleVectorSpaceIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Solves the two bone IK given two bones.\n * Note: This node operates in world space!\n */" },
		{ "DisplayName", "Basic IK" },
		{ "Keywords", "TwoBone,IK" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "NodeColor", "0 1 1" },
		{ "ToolTip", "Solves the two bone IK given two bones.\nNote: This node operates in world space!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TwoBoneIKSimplePerItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemA_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of first item\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The name of first item" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemA = { "ItemA", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, ItemA), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemA_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemB_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of second item\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The name of second item" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemB = { "ItemB", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, ItemB), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemB_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_EffectorItem_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The name of the effector item (if exists)\n\x09 */" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The name of the effector item (if exists)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_EffectorItem = { "EffectorItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, EffectorItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_EffectorItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_EffectorItem_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_Effector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The transform of the effector\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The transform of the effector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_Effector = { "Effector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, Effector), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_Effector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_Effector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PrimaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The major axis being aligned - along the item\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The major axis being aligned - along the item" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PrimaryAxis = { "PrimaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, PrimaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PrimaryAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PrimaryAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_SecondaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The minor axis being aligned - towards the polevector\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The minor axis being aligned - towards the polevector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_SecondaryAxis = { "SecondaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, SecondaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_SecondaryAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_SecondaryAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_SecondaryAxisWeight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Determines how much the secondary axis roll is being applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "Determines how much the secondary axis roll is being applied" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_SecondaryAxisWeight = { "SecondaryAxisWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, SecondaryAxisWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_SecondaryAxisWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_SecondaryAxisWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PoleVector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The polevector to use for the IK solver\n\x09 * This can be a location or direction.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The polevector to use for the IK solver\nThis can be a location or direction." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PoleVector = { "PoleVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, PoleVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PoleVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PoleVector_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PoleVectorKind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PoleVectorKind_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The kind of pole vector this is representing - can be a direction or a location\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The kind of pole vector this is representing - can be a direction or a location" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PoleVectorKind = { "PoleVectorKind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, PoleVectorKind), Z_Construct_UEnum_ControlRig_EControlRigVectorKind, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PoleVectorKind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PoleVectorKind_MetaData)) }; // 2351274891
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PoleVectorSpace_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The space in which the pole vector is expressed\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The space in which the pole vector is expressed" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PoleVectorSpace = { "PoleVectorSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, PoleVectorSpace), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PoleVectorSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PoleVectorSpace_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_bEnableStretch_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true the stretch feature of the solver will be enabled\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "If set to true the stretch feature of the solver will be enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_bEnableStretch_SetBit(void* Obj)
	{
		((FRigUnit_TwoBoneIKSimplePerItem*)Obj)->bEnableStretch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_bEnableStretch = { "bEnableStretch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_TwoBoneIKSimplePerItem), &Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_bEnableStretch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_bEnableStretch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_bEnableStretch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_StretchStartRatio_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The ratio where the stretch starts\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The ratio where the stretch starts" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_StretchStartRatio = { "StretchStartRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, StretchStartRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_StretchStartRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_StretchStartRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_StretchMaximumRatio_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n     * The maximum allowed stretch ratio\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The maximum allowed stretch ratio" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_StretchMaximumRatio = { "StretchMaximumRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, StretchMaximumRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_StretchMaximumRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_StretchMaximumRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The weight of the solver - how much the IK should be applied.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The weight of the solver - how much the IK should be applied." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemALength_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The length of the first item.\n\x09 * If set to 0.0 it will be determined by the hierarchy\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The length of the first item.\nIf set to 0.0 it will be determined by the hierarchy" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemALength = { "ItemALength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, ItemALength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemALength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemALength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemBLength_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The length of the second item.\n\x09 * If set to 0.0 it will be determined by the hierarchy\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The length of the second item.\nIf set to 0.0 it will be determined by the hierarchy" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemBLength = { "ItemBLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, ItemBLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemBLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemBLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_TwoBoneIKSimplePerItem*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_TwoBoneIKSimplePerItem), &Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The settings for debug drawing\n\x09 */" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The settings for debug drawing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, DebugSettings), Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_DebugSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_DebugSettings_MetaData)) }; // 2480932887
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedItemAIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedItemAIndex = { "CachedItemAIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, CachedItemAIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedItemAIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedItemAIndex_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedItemBIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedItemBIndex = { "CachedItemBIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, CachedItemBIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedItemBIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedItemBIndex_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedEffectorItemIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedEffectorItemIndex = { "CachedEffectorItemIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, CachedEffectorItemIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedEffectorItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedEffectorItemIndex_MetaData)) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedPoleVectorSpaceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedPoleVectorSpaceIndex = { "CachedPoleVectorSpaceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimplePerItem, CachedPoleVectorSpaceIndex), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedPoleVectorSpaceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedPoleVectorSpaceIndex_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_EffectorItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_Effector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PrimaryAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_SecondaryAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_SecondaryAxisWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PoleVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PoleVectorKind_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PoleVectorKind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_PoleVectorSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_bEnableStretch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_StretchStartRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_StretchMaximumRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_Weight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemALength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_ItemBLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_DebugSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedItemAIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedItemBIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedEffectorItemIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewProp_CachedPoleVectorSpaceIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_TwoBoneIKSimplePerItem",
		sizeof(FRigUnit_TwoBoneIKSimplePerItem),
		alignof(FRigUnit_TwoBoneIKSimplePerItem),
		Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimplePerItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimplePerItem.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimplePerItem.InnerSingleton;
	}

void FRigUnit_TwoBoneIKSimplePerItem::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_TwoBoneIKSimplePerItem::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		ItemA,
		ItemB,
		EffectorItem,
		Effector,
		PrimaryAxis,
		SecondaryAxis,
		SecondaryAxisWeight,
		PoleVector,
		PoleVectorKind,
		PoleVectorSpace,
		bEnableStretch,
		StretchStartRatio,
		StretchMaximumRatio,
		Weight,
		ItemALength,
		ItemBLength,
		bPropagateToChildren,
		DebugSettings,
		CachedItemAIndex,
		CachedItemBIndex,
		CachedEffectorItemIndex,
		CachedPoleVectorSpaceIndex
	);
}


static_assert(std::is_polymorphic<FRigUnit_TwoBoneIKSimpleVectors>() == std::is_polymorphic<FRigUnit_HighlevelBase>(), "USTRUCT FRigUnit_TwoBoneIKSimpleVectors cannot be polymorphic unless super FRigUnit_HighlevelBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimpleVectors;
class UScriptStruct* FRigUnit_TwoBoneIKSimpleVectors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimpleVectors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimpleVectors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_TwoBoneIKSimpleVectors"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_TwoBoneIKSimpleVectors_Execute;
		Arguments_FRigUnit_TwoBoneIKSimpleVectors_Execute.Emplace(TEXT("Root"), TEXT("FVector"));
		Arguments_FRigUnit_TwoBoneIKSimpleVectors_Execute.Emplace(TEXT("PoleVector"), TEXT("FVector"));
		Arguments_FRigUnit_TwoBoneIKSimpleVectors_Execute.Emplace(TEXT("Effector"), TEXT("FVector"));
		Arguments_FRigUnit_TwoBoneIKSimpleVectors_Execute.Emplace(TEXT("bEnableStretch"), TEXT("bool"));
		Arguments_FRigUnit_TwoBoneIKSimpleVectors_Execute.Emplace(TEXT("StretchStartRatio"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimpleVectors_Execute.Emplace(TEXT("StretchMaximumRatio"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimpleVectors_Execute.Emplace(TEXT("BoneALength"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimpleVectors_Execute.Emplace(TEXT("BoneBLength"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimpleVectors_Execute.Emplace(TEXT("Elbow"), TEXT("FVector"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TwoBoneIKSimpleVectors::Execute"), &FRigUnit_TwoBoneIKSimpleVectors::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimpleVectors.OuterSingleton, Arguments_FRigUnit_TwoBoneIKSimpleVectors_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimpleVectors.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_TwoBoneIKSimpleVectors>()
{
	return FRigUnit_TwoBoneIKSimpleVectors::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoleVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Effector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStretch_MetaData[];
#endif
		static void NewProp_bEnableStretch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStretch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StretchStartRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchStartRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StretchMaximumRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchMaximumRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneALength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoneALength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneBLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoneBLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Elbow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Elbow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Solves the two bone IK given positions\n * Note: This node operates in world space!\n */" },
		{ "DisplayName", "Basic IK Positions" },
		{ "Keywords", "TwoBone,IK" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "NodeColor", "0 1 1" },
		{ "ToolTip", "Solves the two bone IK given positions\nNote: This node operates in world space!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TwoBoneIKSimpleVectors>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The position of the root of the triangle\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The position of the root of the triangle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimpleVectors, Root), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_PoleVector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The position of the pole of the triangle\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The position of the pole of the triangle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_PoleVector = { "PoleVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimpleVectors, PoleVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_PoleVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_PoleVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_Effector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The position of the effector\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "Output", "" },
		{ "ToolTip", "The position of the effector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_Effector = { "Effector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimpleVectors, Effector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_Effector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_Effector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_bEnableStretch_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true the stretch feature of the solver will be enabled\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "If set to true the stretch feature of the solver will be enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_bEnableStretch_SetBit(void* Obj)
	{
		((FRigUnit_TwoBoneIKSimpleVectors*)Obj)->bEnableStretch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_bEnableStretch = { "bEnableStretch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_TwoBoneIKSimpleVectors), &Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_bEnableStretch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_bEnableStretch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_bEnableStretch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_StretchStartRatio_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The ratio where the stretch starts\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The ratio where the stretch starts" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_StretchStartRatio = { "StretchStartRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimpleVectors, StretchStartRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_StretchStartRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_StretchStartRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_StretchMaximumRatio_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The maximum allowed stretch ratio\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The maximum allowed stretch ratio" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_StretchMaximumRatio = { "StretchMaximumRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimpleVectors, StretchMaximumRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_StretchMaximumRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_StretchMaximumRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_BoneALength_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The length of the first bone.\n\x09 * If set to 0.0 it will be determined by the hierarchy\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The length of the first bone.\nIf set to 0.0 it will be determined by the hierarchy" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_BoneALength = { "BoneALength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimpleVectors, BoneALength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_BoneALength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_BoneALength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_BoneBLength_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The length of the second  bone.\n\x09 * If set to 0.0 it will be determined by the hierarchy\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The length of the second  bone.\nIf set to 0.0 it will be determined by the hierarchy" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_BoneBLength = { "BoneBLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimpleVectors, BoneBLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_BoneBLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_BoneBLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_Elbow_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The resulting elbow position\n\x09 */" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "Output", "" },
		{ "ToolTip", "The resulting elbow position" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_Elbow = { "Elbow", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimpleVectors, Elbow), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_Elbow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_Elbow_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_PoleVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_Effector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_bEnableStretch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_StretchStartRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_StretchMaximumRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_BoneALength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_BoneBLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewProp_Elbow,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBase,
		&NewStructOps,
		"RigUnit_TwoBoneIKSimpleVectors",
		sizeof(FRigUnit_TwoBoneIKSimpleVectors),
		alignof(FRigUnit_TwoBoneIKSimpleVectors),
		Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimpleVectors.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimpleVectors.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimpleVectors.InnerSingleton;
	}

void FRigUnit_TwoBoneIKSimpleVectors::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_TwoBoneIKSimpleVectors::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Root,
		PoleVector,
		Effector,
		bEnableStretch,
		StretchStartRatio,
		StretchMaximumRatio,
		BoneALength,
		BoneBLength,
		Elbow
	);
}


static_assert(std::is_polymorphic<FRigUnit_TwoBoneIKSimpleTransforms>() == std::is_polymorphic<FRigUnit_HighlevelBase>(), "USTRUCT FRigUnit_TwoBoneIKSimpleTransforms cannot be polymorphic unless super FRigUnit_HighlevelBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimpleTransforms;
class UScriptStruct* FRigUnit_TwoBoneIKSimpleTransforms::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimpleTransforms.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimpleTransforms.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_TwoBoneIKSimpleTransforms"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_TwoBoneIKSimpleTransforms_Execute;
		Arguments_FRigUnit_TwoBoneIKSimpleTransforms_Execute.Emplace(TEXT("Root"), TEXT("FTransform"));
		Arguments_FRigUnit_TwoBoneIKSimpleTransforms_Execute.Emplace(TEXT("PoleVector"), TEXT("FVector"));
		Arguments_FRigUnit_TwoBoneIKSimpleTransforms_Execute.Emplace(TEXT("Effector"), TEXT("FTransform"));
		Arguments_FRigUnit_TwoBoneIKSimpleTransforms_Execute.Emplace(TEXT("PrimaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_TwoBoneIKSimpleTransforms_Execute.Emplace(TEXT("SecondaryAxis"), TEXT("FVector"));
		Arguments_FRigUnit_TwoBoneIKSimpleTransforms_Execute.Emplace(TEXT("SecondaryAxisWeight"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimpleTransforms_Execute.Emplace(TEXT("bEnableStretch"), TEXT("bool"));
		Arguments_FRigUnit_TwoBoneIKSimpleTransforms_Execute.Emplace(TEXT("StretchStartRatio"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimpleTransforms_Execute.Emplace(TEXT("StretchMaximumRatio"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimpleTransforms_Execute.Emplace(TEXT("BoneALength"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimpleTransforms_Execute.Emplace(TEXT("BoneBLength"), TEXT("float"));
		Arguments_FRigUnit_TwoBoneIKSimpleTransforms_Execute.Emplace(TEXT("Elbow"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TwoBoneIKSimpleTransforms::Execute"), &FRigUnit_TwoBoneIKSimpleTransforms::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimpleTransforms.OuterSingleton, Arguments_FRigUnit_TwoBoneIKSimpleTransforms_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimpleTransforms.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_TwoBoneIKSimpleTransforms>()
{
	return FRigUnit_TwoBoneIKSimpleTransforms::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoleVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Effector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxisWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondaryAxisWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStretch_MetaData[];
#endif
		static void NewProp_bEnableStretch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStretch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StretchStartRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchStartRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StretchMaximumRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StretchMaximumRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneALength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoneALength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneBLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoneBLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Elbow_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Elbow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Solves the two bone IK given transforms\n * Note: This node operates in world space!\n */" },
		{ "DisplayName", "Basic IK Transforms" },
		{ "Keywords", "TwoBone,IK" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "NodeColor", "0 1 1" },
		{ "ToolTip", "Solves the two bone IK given transforms\nNote: This node operates in world space!" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TwoBoneIKSimpleTransforms>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform of the root of the triangle\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "Output", "" },
		{ "ToolTip", "The transform of the root of the triangle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimpleTransforms, Root), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_PoleVector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The position of the pole of the triangle\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The position of the pole of the triangle" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_PoleVector = { "PoleVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimpleTransforms, PoleVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_PoleVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_PoleVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_Effector_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The transform of the effector\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "Output", "" },
		{ "ToolTip", "The transform of the effector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_Effector = { "Effector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimpleTransforms, Effector), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_Effector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_Effector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_PrimaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The major axis being aligned - along the bone\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The major axis being aligned - along the bone" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_PrimaryAxis = { "PrimaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimpleTransforms, PrimaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_PrimaryAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_PrimaryAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_SecondaryAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** \n\x09 * The minor axis being aligned - towards the polevector\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The minor axis being aligned - towards the polevector" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_SecondaryAxis = { "SecondaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimpleTransforms, SecondaryAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_SecondaryAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_SecondaryAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_SecondaryAxisWeight_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * Determines how much the secondary axis roll is being applied\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "Determines how much the secondary axis roll is being applied" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_SecondaryAxisWeight = { "SecondaryAxisWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimpleTransforms, SecondaryAxisWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_SecondaryAxisWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_SecondaryAxisWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_bEnableStretch_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true the stretch feature of the solver will be enabled\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "If set to true the stretch feature of the solver will be enabled" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_bEnableStretch_SetBit(void* Obj)
	{
		((FRigUnit_TwoBoneIKSimpleTransforms*)Obj)->bEnableStretch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_bEnableStretch = { "bEnableStretch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_TwoBoneIKSimpleTransforms), &Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_bEnableStretch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_bEnableStretch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_bEnableStretch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_StretchStartRatio_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The ratio where the stretch starts\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The ratio where the stretch starts" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_StretchStartRatio = { "StretchStartRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimpleTransforms, StretchStartRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_StretchStartRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_StretchStartRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_StretchMaximumRatio_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The maximum allowed stretch ratio\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The maximum allowed stretch ratio" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_StretchMaximumRatio = { "StretchMaximumRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimpleTransforms, StretchMaximumRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_StretchMaximumRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_StretchMaximumRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_BoneALength_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The length of the first bone.\n\x09 * If set to 0.0 it will be determined by the hierarchy\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The length of the first bone.\nIf set to 0.0 it will be determined by the hierarchy" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_BoneALength = { "BoneALength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimpleTransforms, BoneALength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_BoneALength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_BoneALength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_BoneBLength_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The length of the second  bone.\n\x09 * If set to 0.0 it will be determined by the hierarchy\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "ToolTip", "The length of the second  bone.\nIf set to 0.0 it will be determined by the hierarchy" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_BoneBLength = { "BoneBLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimpleTransforms, BoneBLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_BoneBLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_BoneBLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_Elbow_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The resulting elbow transform\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Highlevel/Hierarchy/RigUnit_TwoBoneIKSimple.h" },
		{ "Output", "" },
		{ "ToolTip", "The resulting elbow transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_Elbow = { "Elbow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TwoBoneIKSimpleTransforms, Elbow), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_Elbow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_Elbow_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_PoleVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_Effector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_PrimaryAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_SecondaryAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_SecondaryAxisWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_bEnableStretch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_StretchStartRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_StretchMaximumRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_BoneALength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_BoneBLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewProp_Elbow,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBase,
		&NewStructOps,
		"RigUnit_TwoBoneIKSimpleTransforms",
		sizeof(FRigUnit_TwoBoneIKSimpleTransforms),
		alignof(FRigUnit_TwoBoneIKSimpleTransforms),
		Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimpleTransforms.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimpleTransforms.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimpleTransforms.InnerSingleton;
	}

void FRigUnit_TwoBoneIKSimpleTransforms::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_TwoBoneIKSimpleTransforms::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Root,
		PoleVector,
		Effector,
		PrimaryAxis,
		SecondaryAxis,
		SecondaryAxisWeight,
		bEnableStretch,
		StretchStartRatio,
		StretchMaximumRatio,
		BoneALength,
		BoneBLength,
		Elbow
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwoBoneIKSimple_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwoBoneIKSimple_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_TwoBoneIKSimple_DebugSettings::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_DebugSettings_Statics::NewStructOps, TEXT("RigUnit_TwoBoneIKSimple_DebugSettings"), &Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimple_DebugSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TwoBoneIKSimple_DebugSettings), 2480932887U) },
		{ FRigUnit_TwoBoneIKSimple::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimple_Statics::NewStructOps, TEXT("RigUnit_TwoBoneIKSimple"), &Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimple, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TwoBoneIKSimple), 2196738894U) },
		{ FRigUnit_TwoBoneIKSimplePerItem::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimplePerItem_Statics::NewStructOps, TEXT("RigUnit_TwoBoneIKSimplePerItem"), &Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimplePerItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TwoBoneIKSimplePerItem), 1920328077U) },
		{ FRigUnit_TwoBoneIKSimpleVectors::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleVectors_Statics::NewStructOps, TEXT("RigUnit_TwoBoneIKSimpleVectors"), &Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimpleVectors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TwoBoneIKSimpleVectors), 716063204U) },
		{ FRigUnit_TwoBoneIKSimpleTransforms::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TwoBoneIKSimpleTransforms_Statics::NewStructOps, TEXT("RigUnit_TwoBoneIKSimpleTransforms"), &Z_Registration_Info_UScriptStruct_RigUnit_TwoBoneIKSimpleTransforms, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TwoBoneIKSimpleTransforms), 2281746013U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwoBoneIKSimple_h_2146675931(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwoBoneIKSimple_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Highlevel_Hierarchy_RigUnit_TwoBoneIKSimple_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
