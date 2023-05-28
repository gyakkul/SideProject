// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Simulation/RigUnit_PointSimulation.h"
#include "Math/Simulation/CRSimLinearSpring.h"
#include "Math/Simulation/CRSimPointContainer.h"
#include "Math/Simulation/CRSimPointForce.h"
#include "Math/Simulation/CRSimSoftCollision.h"
#include "Rigs/RigHierarchyCache.h"
#include "RigVMFunctions/Math/RigVMMathLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_PointSimulation() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimLinearSpring();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointContainer();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimPointForce();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCRSimSoftCollision();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PointSimulation();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFourPointBezier();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_SimBaseMutable();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMSimPoint();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_DebugSettings;
class UScriptStruct* FRigUnit_PointSimulation_DebugSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_DebugSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_DebugSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PointSimulation_DebugSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_DebugSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PointSimulation_DebugSettings>()
{
	return FRigUnit_PointSimulation_DebugSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawPointsAsSpheres_MetaData[];
#endif
		static void NewProp_bDrawPointsAsSpheres_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawPointsAsSpheres;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PointSimulation_DebugSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * If enabled debug information will be drawn \n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "If enabled debug information will be drawn" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FRigUnit_PointSimulation_DebugSettings*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_PointSimulation_DebugSettings), &Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * The size of the debug drawing information\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The size of the debug drawing information" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation_DebugSettings, Scale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_CollisionScale_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n     * The size of the debug drawing information\n     */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The size of the debug drawing information" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_CollisionScale = { "CollisionScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation_DebugSettings, CollisionScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_CollisionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_CollisionScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bDrawPointsAsSpheres_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * If set to true points will be drawn as spheres with their sizes reflected\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "If set to true points will be drawn as spheres with their sizes reflected" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bDrawPointsAsSpheres_SetBit(void* Obj)
	{
		((FRigUnit_PointSimulation_DebugSettings*)Obj)->bDrawPointsAsSpheres = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bDrawPointsAsSpheres = { "bDrawPointsAsSpheres", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_PointSimulation_DebugSettings), &Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bDrawPointsAsSpheres_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bDrawPointsAsSpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bDrawPointsAsSpheres_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * The color to use for debug drawing\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The color to use for debug drawing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation_DebugSettings, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_WorldOffset_MetaData[] = {
		{ "Category", "DebugSettings" },
		{ "Comment", "/**\n\x09 * The offset at which to draw the debug information in the world\n\x09 */" },
		{ "EditCondition", "bEnabled" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The offset at which to draw the debug information in the world" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_WorldOffset = { "WorldOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation_DebugSettings, WorldOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_WorldOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_WorldOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_CollisionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_bDrawPointsAsSpheres,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewProp_WorldOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_PointSimulation_DebugSettings",
		sizeof(FRigUnit_PointSimulation_DebugSettings),
		alignof(FRigUnit_PointSimulation_DebugSettings),
		Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_DebugSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_DebugSettings.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_DebugSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_BoneTarget;
class UScriptStruct* FRigUnit_PointSimulation_BoneTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_BoneTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_BoneTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PointSimulation_BoneTarget"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_BoneTarget.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PointSimulation_BoneTarget>()
{
	return FRigUnit_PointSimulation_BoneTarget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Bone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationPoint_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TranslationPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAimPoint_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrimaryAimPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAimPoint_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SecondaryAimPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PointSimulation_BoneTarget>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "BoneTarget" },
		{ "Comment", "/**\n\x09 * The name of the bone to map\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The name of the bone to map" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation_BoneTarget, Bone), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_TranslationPoint_MetaData[] = {
		{ "Category", "BoneTarget" },
		{ "Comment", "/**\n\x09 * The index of the point to use for translation\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The index of the point to use for translation" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_TranslationPoint = { "TranslationPoint", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation_BoneTarget, TranslationPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_TranslationPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_TranslationPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_PrimaryAimPoint_MetaData[] = {
		{ "Category", "BoneTarget" },
		{ "Comment", "/**\n\x09 * The index of the point to use for aiming the primary axis.\n\x09 * Use -1 to indicate that you don't want to aim the bone.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The index of the point to use for aiming the primary axis.\nUse -1 to indicate that you don't want to aim the bone." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_PrimaryAimPoint = { "PrimaryAimPoint", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation_BoneTarget, PrimaryAimPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_PrimaryAimPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_PrimaryAimPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_SecondaryAimPoint_MetaData[] = {
		{ "Category", "BoneTarget" },
		{ "Comment", "/**\n\x09 * The index of the point to use for aiming the secondary axis.\n\x09 * Use -1 to indicate that you don't want to aim the bone.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The index of the point to use for aiming the secondary axis.\nUse -1 to indicate that you don't want to aim the bone." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_SecondaryAimPoint = { "SecondaryAimPoint", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation_BoneTarget, SecondaryAimPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_SecondaryAimPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_SecondaryAimPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_TranslationPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_PrimaryAimPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewProp_SecondaryAimPoint,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_PointSimulation_BoneTarget",
		sizeof(FRigUnit_PointSimulation_BoneTarget),
		alignof(FRigUnit_PointSimulation_BoneTarget),
		Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_BoneTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_BoneTarget.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_BoneTarget.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_WorkData;
class UScriptStruct* FRigUnit_PointSimulation_WorkData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_WorkData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_WorkData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PointSimulation_WorkData"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_WorkData.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PointSimulation_WorkData>()
{
	return FRigUnit_PointSimulation_WorkData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Simulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Simulation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PointSimulation_WorkData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewProp_Simulation_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewProp_Simulation = { "Simulation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation_WorkData, Simulation), Z_Construct_UScriptStruct_FCRSimPointContainer, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewProp_Simulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewProp_Simulation_MetaData)) }; // 3813261209
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewProp_BoneIndices_Inner = { "BoneIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(nullptr, 0) }; // 861402166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewProp_BoneIndices_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewProp_BoneIndices = { "BoneIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation_WorkData, BoneIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewProp_BoneIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewProp_BoneIndices_MetaData)) }; // 861402166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewProp_Simulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewProp_BoneIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewProp_BoneIndices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigUnit_PointSimulation_WorkData",
		sizeof(FRigUnit_PointSimulation_WorkData),
		alignof(FRigUnit_PointSimulation_WorkData),
		Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_WorkData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_WorkData.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_WorkData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_PointSimulation>() == std::is_polymorphic<FRigVMFunction_SimBaseMutable>(), "USTRUCT FRigUnit_PointSimulation cannot be polymorphic unless super FRigVMFunction_SimBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation;
class UScriptStruct* FRigUnit_PointSimulation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PointSimulation, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_PointSimulation"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PointSimulation_Execute;
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("Points"), TEXT("TArray<FRigVMSimPoint>"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("Links"), TEXT("TArray<FCRSimLinearSpring>"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("Forces"), TEXT("TArray<FCRSimPointForce>"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("CollisionVolumes"), TEXT("TArray<FCRSimSoftCollision>"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("SimulatedStepsPerSecond"), TEXT("float"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("IntegratorType"), TEXT("ERigVMSimPointIntegrateType"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("VerletBlend"), TEXT("float"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("BoneTargets"), TEXT("TArray<FRigUnit_PointSimulation_BoneTarget>"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("bLimitLocalPosition"), TEXT("bool"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("bPropagateToChildren"), TEXT("bool"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("PrimaryAimAxis"), TEXT("FVector"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("SecondaryAimAxis"), TEXT("FVector"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("DebugSettings"), TEXT("FRigUnit_PointSimulation_DebugSettings"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("Bezier"), TEXT("FRigVMFourPointBezier"));
		Arguments_FRigUnit_PointSimulation_Execute.Emplace(TEXT("WorkData"), TEXT("FRigUnit_PointSimulation_WorkData"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PointSimulation::Execute"), &FRigUnit_PointSimulation::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation.OuterSingleton, Arguments_FRigUnit_PointSimulation_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_PointSimulation>()
{
	return FRigUnit_PointSimulation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics
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
		static const UECodeGen_Private::FStructPropertyParams NewProp_Links_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Links_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Links;
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulatedStepsPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimulatedStepsPerSecond;
		static const UECodeGen_Private::FBytePropertyParams NewProp_IntegratorType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntegratorType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IntegratorType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerletBlend_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VerletBlend;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitLocalPosition_MetaData[];
#endif
		static void NewProp_bLimitLocalPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitLocalPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPropagateToChildren_MetaData[];
#endif
		static void NewProp_bPropagateToChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPropagateToChildren;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryAimAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryAimAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryAimAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SecondaryAimAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bezier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bezier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorkData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorkData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Performs point based simulation\n * Note: Disabled for now.\n */" },
		{ "Deprecated", "4.25" },
		{ "DisplayName", "Point Simulation" },
		{ "Keywords", "Simulate,Verlet,Springs" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "Performs point based simulation\nNote: Disabled for now." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PointSimulation>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMSimPoint, METADATA_PARAMS(nullptr, 0) }; // 4039935554
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The points to simulate */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The points to simulate" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Points_MetaData)) }; // 4039935554
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Links_Inner = { "Links", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCRSimLinearSpring, METADATA_PARAMS(nullptr, 0) }; // 954756495
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Links_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The links to connect the points with */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The links to connect the points with" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Links = { "Links", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation, Links), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Links_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Links_MetaData)) }; // 954756495
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Forces_Inner = { "Forces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCRSimPointForce, METADATA_PARAMS(nullptr, 0) }; // 1073332189
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Forces_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The forces to apply */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The forces to apply" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Forces = { "Forces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation, Forces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Forces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Forces_MetaData)) }; // 1073332189
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_CollisionVolumes_Inner = { "CollisionVolumes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCRSimSoftCollision, METADATA_PARAMS(nullptr, 0) }; // 3884990973
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_CollisionVolumes_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The collision volumes to define */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The collision volumes to define" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_CollisionVolumes = { "CollisionVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation, CollisionVolumes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_CollisionVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_CollisionVolumes_MetaData)) }; // 3884990973
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_SimulatedStepsPerSecond_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The frame rate of the simulation */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The frame rate of the simulation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_SimulatedStepsPerSecond = { "SimulatedStepsPerSecond", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation, SimulatedStepsPerSecond), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_SimulatedStepsPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_SimulatedStepsPerSecond_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_IntegratorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_IntegratorType_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The type of integrator to use */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The type of integrator to use" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_IntegratorType = { "IntegratorType", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation, IntegratorType), Z_Construct_UEnum_RigVM_ERigVMSimPointIntegrateType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_IntegratorType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_IntegratorType_MetaData)) }; // 853092892
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_VerletBlend_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The amount of blending to apply per second ( only for verlet integrations )*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The amount of blending to apply per second ( only for verlet integrations )" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_VerletBlend = { "VerletBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation, VerletBlend), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_VerletBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_VerletBlend_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_BoneTargets_Inner = { "BoneTargets", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget, METADATA_PARAMS(nullptr, 0) }; // 35447498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_BoneTargets_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The bones to map to the simulated points. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The bones to map to the simulated points." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_BoneTargets = { "BoneTargets", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation, BoneTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_BoneTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_BoneTargets_MetaData)) }; // 35447498
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bLimitLocalPosition_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true bones are placed within the original distance of\n\x09 * the previous local transform. This can be used to avoid stretch.\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "If set to true bones are placed within the original distance of\nthe previous local transform. This can be used to avoid stretch." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bLimitLocalPosition_SetBit(void* Obj)
	{
		((FRigUnit_PointSimulation*)Obj)->bLimitLocalPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bLimitLocalPosition = { "bLimitLocalPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_PointSimulation), &Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bLimitLocalPosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bLimitLocalPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bLimitLocalPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bPropagateToChildren_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true all of the global transforms of the children\n\x09 * of this bone will be recalculated based on their local transforms.\n\x09 * Note: This is computationally more expensive than turning it off.\n\x09 */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "If set to true all of the global transforms of the children\nof this bone will be recalculated based on their local transforms.\nNote: This is computationally more expensive than turning it off." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bPropagateToChildren_SetBit(void* Obj)
	{
		((FRigUnit_PointSimulation*)Obj)->bPropagateToChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bPropagateToChildren = { "bPropagateToChildren", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_PointSimulation), &Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bPropagateToChildren_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bPropagateToChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bPropagateToChildren_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_PrimaryAimAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The primary axis to use for the aim */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The primary axis to use for the aim" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_PrimaryAimAxis = { "PrimaryAimAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation, PrimaryAimAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_PrimaryAimAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_PrimaryAimAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_SecondaryAimAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** The secondary axis to use for the aim */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "The secondary axis to use for the aim" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_SecondaryAimAxis = { "SecondaryAimAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation, SecondaryAimAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_SecondaryAimAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_SecondaryAimAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_DebugSettings_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Debug draw settings for this simulation */" },
		{ "DetailsOnly", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "ToolTip", "Debug draw settings for this simulation" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_DebugSettings = { "DebugSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation, DebugSettings), Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_DebugSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_DebugSettings_MetaData)) }; // 2997908306
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Bezier_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** If the simulation has at least four points they will be stored in here. */" },
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
		{ "Output", "" },
		{ "ToolTip", "If the simulation has at least four points they will be stored in here." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Bezier = { "Bezier", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation, Bezier), Z_Construct_UScriptStruct_FRigVMFourPointBezier, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Bezier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Bezier_MetaData)) }; // 2203843897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_WorkData_MetaData[] = {
		{ "ModuleRelativePath", "Private/Units/Simulation/RigUnit_PointSimulation.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_WorkData = { "WorkData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PointSimulation, WorkData), Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_WorkData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_WorkData_MetaData)) }; // 2146827404
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Links_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Links,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Forces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Forces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_CollisionVolumes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_CollisionVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_SimulatedStepsPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_IntegratorType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_IntegratorType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_VerletBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_BoneTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_BoneTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bLimitLocalPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_bPropagateToChildren,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_PrimaryAimAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_SecondaryAimAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_DebugSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_Bezier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewProp_WorkData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigVMFunction_SimBaseMutable,
		&NewStructOps,
		"RigUnit_PointSimulation",
		sizeof(FRigUnit_PointSimulation),
		alignof(FRigUnit_PointSimulation),
		Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PointSimulation()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation.InnerSingleton;
	}

void FRigUnit_PointSimulation::Execute()
{
	FRigVMExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_PointSimulation::Execute(FRigVMExecuteContext& InExecuteContext)
{
	TArrayView<const FRigVMSimPoint> Points_0_Array(Points);
	TArrayView<const FCRSimLinearSpring> Links_1_Array(Links);
	TArrayView<const FCRSimPointForce> Forces_2_Array(Forces);
	TArrayView<const FCRSimSoftCollision> CollisionVolumes_3_Array(CollisionVolumes);
	TArrayView<const FRigUnit_PointSimulation_BoneTarget> BoneTargets_7_Array(BoneTargets);
	
	StaticExecute(
		InExecuteContext,
		Points_0_Array,
		Links_1_Array,
		Forces_2_Array,
		CollisionVolumes_3_Array,
		SimulatedStepsPerSecond,
		IntegratorType,
		VerletBlend,
		BoneTargets_7_Array,
		bLimitLocalPosition,
		bPropagateToChildren,
		PrimaryAimAxis,
		SecondaryAimAxis,
		DebugSettings,
		Bezier,
		WorkData
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_PointSimulation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_PointSimulation_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_PointSimulation_DebugSettings::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PointSimulation_DebugSettings_Statics::NewStructOps, TEXT("RigUnit_PointSimulation_DebugSettings"), &Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_DebugSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PointSimulation_DebugSettings), 2997908306U) },
		{ FRigUnit_PointSimulation_BoneTarget::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PointSimulation_BoneTarget_Statics::NewStructOps, TEXT("RigUnit_PointSimulation_BoneTarget"), &Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_BoneTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PointSimulation_BoneTarget), 35447498U) },
		{ FRigUnit_PointSimulation_WorkData::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PointSimulation_WorkData_Statics::NewStructOps, TEXT("RigUnit_PointSimulation_WorkData"), &Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation_WorkData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PointSimulation_WorkData), 2146827404U) },
		{ FRigUnit_PointSimulation::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PointSimulation_Statics::NewStructOps, TEXT("RigUnit_PointSimulation"), &Z_Registration_Info_UScriptStruct_RigUnit_PointSimulation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PointSimulation), 3265665204U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_PointSimulation_h_1609748185(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_PointSimulation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Simulation_RigUnit_PointSimulation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
