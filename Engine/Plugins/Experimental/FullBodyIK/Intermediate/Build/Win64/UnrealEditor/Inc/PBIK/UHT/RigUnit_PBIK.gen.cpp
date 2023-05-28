// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigUnit_PBIK.h"
#include "Core/PBIKSolver.h"
#include "PBIK_Shared.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_PBIK() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	PBIK_API UScriptStruct* Z_Construct_UScriptStruct_FPBIKBoneSetting();
	PBIK_API UScriptStruct* Z_Construct_UScriptStruct_FPBIKDebug();
	PBIK_API UScriptStruct* Z_Construct_UScriptStruct_FPBIKEffector();
	PBIK_API UScriptStruct* Z_Construct_UScriptStruct_FPBIKSolver();
	PBIK_API UScriptStruct* Z_Construct_UScriptStruct_FPBIKSolverSettings();
	PBIK_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PBIK();
	UPackage* Z_Construct_UPackage__Script_PBIK();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PBIKDebug;
class UScriptStruct* FPBIKDebug::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PBIKDebug.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PBIKDebug.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPBIKDebug, (UObject*)Z_Construct_UPackage__Script_PBIK(), TEXT("PBIKDebug"));
	}
	return Z_Registration_Info_UScriptStruct_PBIKDebug.OuterSingleton;
}
template<> PBIK_API UScriptStruct* StaticStruct<FPBIKDebug>()
{
	return FPBIKDebug::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPBIKDebug_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKDebug_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPBIKDebug>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_DrawScale_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** The scale of the debug drawing. */" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
		{ "ToolTip", "The scale of the debug drawing." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_DrawScale = { "DrawScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPBIKDebug, DrawScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_DrawScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_DrawScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** If true, turns on debug drawing for the node. */" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
		{ "ToolTip", "If true, turns on debug drawing for the node." },
	};
#endif
	void Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((FPBIKDebug*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPBIKDebug), &Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_bDrawDebug_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPBIKDebug_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_DrawScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewProp_bDrawDebug,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPBIKDebug_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PBIK,
		nullptr,
		&NewStructOps,
		"PBIKDebug",
		sizeof(FPBIKDebug),
		alignof(FPBIKDebug),
		Z_Construct_UScriptStruct_FPBIKDebug_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKDebug_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKDebug_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKDebug_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPBIKDebug()
	{
		if (!Z_Registration_Info_UScriptStruct_PBIKDebug.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PBIKDebug.InnerSingleton, Z_Construct_UScriptStruct_FPBIKDebug_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PBIKDebug.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PBIKEffector;
class UScriptStruct* FPBIKEffector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PBIKEffector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PBIKEffector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPBIKEffector, (UObject*)Z_Construct_UPackage__Script_PBIK(), TEXT("PBIKEffector"));
	}
	return Z_Registration_Info_UScriptStruct_PBIKEffector.OuterSingleton;
}
template<> PBIK_API UScriptStruct* StaticStruct<FPBIKEffector>()
{
	return FPBIKEffector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPBIKEffector_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PositionAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StrengthAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StrengthAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PullChainAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PullChainAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PinRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKEffector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPBIKEffector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Bone_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** The bone that this effector will pull on. */" },
		{ "CustomWidget", "BoneName" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
		{ "ToolTip", "The bone that this effector will pull on." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Bone = { "Bone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPBIKEffector, Bone), METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Bone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** The target location and rotation for this effector. The solver will try to get the specified bone to reach this location.*/" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
		{ "ToolTip", "The target location and rotation for this effector. The solver will try to get the specified bone to reach this location." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPBIKEffector, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_PositionAlpha_MetaData[] = {
		{ "Category", "Goal Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0-1, default is 1. Blend between the input bone position (0.0) and the current effector position (1.0).*/" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
		{ "ToolTip", "Range 0-1, default is 1. Blend between the input bone position (0.0) and the current effector position (1.0)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_PositionAlpha = { "PositionAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPBIKEffector, PositionAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_PositionAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_PositionAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_RotationAlpha_MetaData[] = {
		{ "Category", "Goal Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0-1, default is 1. Blend between the input bone rotation (0.0) and the current effector rotation (1.0).*/" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
		{ "ToolTip", "Range 0-1, default is 1. Blend between the input bone rotation (0.0) and the current effector rotation (1.0)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_RotationAlpha = { "RotationAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPBIKEffector, RotationAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_RotationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_RotationAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_StrengthAlpha_MetaData[] = {
		{ "Category", "Effector" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0-1 (default is 1.0). The strength of the effector when pulling the bone towards it's target location.\n\x09 * At 0.0, the effector does not pull at all, but the bones between the effector and the root will still slightly resist motion from other effectors.\n\x09 * This can thus act as a \"stabilizer\" of sorts for parts of the body that you do not want to behave in a pure FK fashion.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
		{ "ToolTip", "Range 0-1 (default is 1.0). The strength of the effector when pulling the bone towards it's target location.\nAt 0.0, the effector does not pull at all, but the bones between the effector and the root will still slightly resist motion from other effectors.\nThis can thus act as a \"stabilizer\" of sorts for parts of the body that you do not want to behave in a pure FK fashion." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_StrengthAlpha = { "StrengthAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPBIKEffector, StrengthAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_StrengthAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_StrengthAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_PullChainAlpha_MetaData[] = {
		{ "Category", "Effector" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0-1 (default is 1.0). When enabled (greater than 0.0), the solver internally partitions the skeleton into 'chains' which extend from the effector to the nearest fork in the skeleton.\n\x09 *These chains are pre-rotated and translated, as a whole, towards the effector targets.\n\x09 *This can improve the results for sparse bone chains, and significantly improve convergence on dense bone chains.\n\x09 *But it may cause undesirable results in highly constrained bone chains (like robot arms).\n\x09 */" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
		{ "ToolTip", "Range 0-1 (default is 1.0). When enabled (greater than 0.0), the solver internally partitions the skeleton into 'chains' which extend from the effector to the nearest fork in the skeleton.\nThese chains are pre-rotated and translated, as a whole, towards the effector targets.\nThis can improve the results for sparse bone chains, and significantly improve convergence on dense bone chains.\nBut it may cause undesirable results in highly constrained bone chains (like robot arms)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_PullChainAlpha = { "PullChainAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPBIKEffector, PullChainAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_PullChainAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_PullChainAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_PinRotation_MetaData[] = {
		{ "Category", "Effector" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Range 0-1 (default is 1.0).\n\x09 *Blends the effector bone rotation between the rotation of the effector transform (1.0) and the rotation of the input bone (0.0).*/" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
		{ "ToolTip", "Range 0-1 (default is 1.0).\nBlends the effector bone rotation between the rotation of the effector transform (1.0) and the rotation of the input bone (0.0)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_PinRotation = { "PinRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPBIKEffector, PinRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_PinRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_PinRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPBIKEffector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_PositionAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_RotationAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_StrengthAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_PullChainAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewProp_PinRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPBIKEffector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PBIK,
		nullptr,
		&NewStructOps,
		"PBIKEffector",
		sizeof(FPBIKEffector),
		alignof(FPBIKEffector),
		Z_Construct_UScriptStruct_FPBIKEffector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKEffector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPBIKEffector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPBIKEffector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPBIKEffector()
	{
		if (!Z_Registration_Info_UScriptStruct_PBIKEffector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PBIKEffector.InnerSingleton, Z_Construct_UScriptStruct_FPBIKEffector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PBIKEffector.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_PBIK>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_PBIK cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PBIK;
class UScriptStruct* FRigUnit_PBIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PBIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PBIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PBIK, (UObject*)Z_Construct_UPackage__Script_PBIK(), TEXT("RigUnit_PBIK"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PBIK_Execute;
		Arguments_FRigUnit_PBIK_Execute.Emplace(TEXT("Root"), TEXT("FName"));
		Arguments_FRigUnit_PBIK_Execute.Emplace(TEXT("Effectors"), TEXT("TArray<FPBIKEffector>"));
		Arguments_FRigUnit_PBIK_Execute.Emplace(TEXT("EffectorSolverIndices"), TEXT("TArray<int32>"));
		Arguments_FRigUnit_PBIK_Execute.Emplace(TEXT("BoneSettings"), TEXT("TArray<FPBIKBoneSetting>"));
		Arguments_FRigUnit_PBIK_Execute.Emplace(TEXT("ExcludedBones"), TEXT("TArray<FName>"));
		Arguments_FRigUnit_PBIK_Execute.Emplace(TEXT("Settings"), TEXT("FPBIKSolverSettings"));
		Arguments_FRigUnit_PBIK_Execute.Emplace(TEXT("Debug"), TEXT("FPBIKDebug"));
		Arguments_FRigUnit_PBIK_Execute.Emplace(TEXT("BoneSettingToSolverBoneIndex"), TEXT("TArray<int32>"));
		Arguments_FRigUnit_PBIK_Execute.Emplace(TEXT("SolverBoneToElementIndex"), TEXT("TArray<int32>"));
		Arguments_FRigUnit_PBIK_Execute.Emplace(TEXT("Solver"), TEXT("FPBIKSolver"));
		Arguments_FRigUnit_PBIK_Execute.Emplace(TEXT("bNeedsInit"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PBIK::Execute"), &FRigUnit_PBIK::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PBIK.OuterSingleton, Arguments_FRigUnit_PBIK_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PBIK.OuterSingleton;
}
template<> PBIK_API UScriptStruct* StaticStruct<FRigUnit_PBIK>()
{
	return FRigUnit_PBIK::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Root;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Effectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Effectors;
		static const UECodeGen_Private::FIntPropertyParams NewProp_EffectorSolverIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectorSolverIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EffectorSolverIndices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneSettings;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ExcludedBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Debug_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Debug;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneSettingToSolverBoneIndex_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneSettingToSolverBoneIndex_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneSettingToSolverBoneIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverBoneToElementIndex_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolverBoneToElementIndex_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SolverBoneToElementIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Solver_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Solver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsInit_MetaData[];
#endif
		static void NewProp_bNeedsInit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsInit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/*\n * Based on a Position Based solver at core, this node can solve multi chains within a root using multi effectors\n */" },
		{ "DisplayName", "Full Body IK" },
		{ "Keywords", "Position Based, PBIK, IK, Full Body, Multi, Effector, N-Chain, FB, HIK, HumanIK" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
		{ "NodeColor", "0 1 1" },
		{ "ToolTip", "* Based on a Position Based solver at core, this node can solve multi chains within a root using multi effectors" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PBIK>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**This is usually the top-most skinned bone; often the \"Pelvis\" or \"Hips\", but can be set to any bone.\n\x09 *Bones above the root will be ignored by the solver.\n\x09 *Bones that are located *between* the Root and the effectors will be included in the solve.*/" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
		{ "ToolTip", "This is usually the top-most skinned bone; often the \"Pelvis\" or \"Hips\", but can be set to any bone.\nBones above the root will be ignored by the solver.\nBones that are located *between* the Root and the effectors will be included in the solve." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PBIK, Root), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Root_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Effectors_Inner = { "Effectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPBIKEffector, METADATA_PARAMS(nullptr, 0) }; // 2855693425
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Effectors_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** An array of effectors. These specify target transforms for different parts of the skeleton. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
		{ "ToolTip", "An array of effectors. These specify target transforms for different parts of the skeleton." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Effectors = { "Effectors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PBIK, Effectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Effectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Effectors_MetaData)) }; // 2855693425
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices_Inner = { "EffectorSolverIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices = { "EffectorSolverIndices", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PBIK, EffectorSolverIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettings_Inner = { "BoneSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPBIKBoneSetting, METADATA_PARAMS(nullptr, 0) }; // 3383504264
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettings_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Per-bone settings to control the resulting pose. Includes limits and preferred angles. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
		{ "ToolTip", "Per-bone settings to control the resulting pose. Includes limits and preferred angles." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettings = { "BoneSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PBIK, BoneSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettings_MetaData)) }; // 3383504264
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_ExcludedBones_Inner = { "ExcludedBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_ExcludedBones_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** These bones will be excluded from the solver. They will not bend and will not contribute to the constraint set.\n\x09 * Use the ExcludedBones array instead of setting Rotation Stiffness to very high values or Rotation Limits with zero range. */" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
		{ "ToolTip", "These bones will be excluded from the solver. They will not bend and will not contribute to the constraint set.\nUse the ExcludedBones array instead of setting Rotation Stiffness to very high values or Rotation Limits with zero range." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_ExcludedBones = { "ExcludedBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PBIK, ExcludedBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_ExcludedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_ExcludedBones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Global solver settings. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
		{ "ToolTip", "Global solver settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PBIK, Settings), Z_Construct_UScriptStruct_FPBIKSolverSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Settings_MetaData)) }; // 1712660096
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Debug_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/** Debug drawing options. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
		{ "ToolTip", "Debug drawing options." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PBIK, Debug), Z_Construct_UScriptStruct_FPBIKDebug, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Debug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Debug_MetaData)) }; // 3777280392
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettingToSolverBoneIndex_Inner = { "BoneSettingToSolverBoneIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettingToSolverBoneIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettingToSolverBoneIndex = { "BoneSettingToSolverBoneIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PBIK, BoneSettingToSolverBoneIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettingToSolverBoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettingToSolverBoneIndex_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_SolverBoneToElementIndex_Inner = { "SolverBoneToElementIndex", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_SolverBoneToElementIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_SolverBoneToElementIndex = { "SolverBoneToElementIndex", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PBIK, SolverBoneToElementIndex), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_SolverBoneToElementIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_SolverBoneToElementIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Solver_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Solver = { "Solver", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PBIK, Solver), Z_Construct_UScriptStruct_FPBIKSolver, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Solver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Solver_MetaData)) }; // 588474320
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_bNeedsInit_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_PBIK.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_bNeedsInit_SetBit(void* Obj)
	{
		((FRigUnit_PBIK*)Obj)->bNeedsInit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_bNeedsInit = { "bNeedsInit", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_PBIK), &Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_bNeedsInit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_bNeedsInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_bNeedsInit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Effectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Effectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_EffectorSolverIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_ExcludedBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_ExcludedBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Debug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettingToSolverBoneIndex_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_BoneSettingToSolverBoneIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_SolverBoneToElementIndex_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_SolverBoneToElementIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_Solver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewProp_bNeedsInit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PBIK,
		Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
		&NewStructOps,
		"RigUnit_PBIK",
		sizeof(FRigUnit_PBIK),
		alignof(FRigUnit_PBIK),
		Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PBIK()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PBIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PBIK.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PBIK.InnerSingleton;
	}

void FRigUnit_PBIK::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_PBIK::Execute(FControlRigExecuteContext& InExecuteContext)
{
	TArrayView<const FPBIKEffector> Effectors_1_Array(Effectors);
	TArrayView<const FPBIKBoneSetting> BoneSettings_3_Array(BoneSettings);
	TArrayView<const FName> ExcludedBones_4_Array(ExcludedBones);
	
	StaticExecute(
		InExecuteContext,
		Root,
		Effectors_1_Array,
		EffectorSolverIndices,
		BoneSettings_3_Array,
		ExcludedBones_4_Array,
		Settings,
		Debug,
		BoneSettingToSolverBoneIndex,
		SolverBoneToElementIndex,
		Solver,
		bNeedsInit
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_RigUnit_PBIK_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_RigUnit_PBIK_h_Statics::ScriptStructInfo[] = {
		{ FPBIKDebug::StaticStruct, Z_Construct_UScriptStruct_FPBIKDebug_Statics::NewStructOps, TEXT("PBIKDebug"), &Z_Registration_Info_UScriptStruct_PBIKDebug, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPBIKDebug), 3777280392U) },
		{ FPBIKEffector::StaticStruct, Z_Construct_UScriptStruct_FPBIKEffector_Statics::NewStructOps, TEXT("PBIKEffector"), &Z_Registration_Info_UScriptStruct_PBIKEffector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPBIKEffector), 2855693425U) },
		{ FRigUnit_PBIK::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PBIK_Statics::NewStructOps, TEXT("RigUnit_PBIK"), &Z_Registration_Info_UScriptStruct_RigUnit_PBIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PBIK), 662819529U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_RigUnit_PBIK_h_3841042033(TEXT("/Script/PBIK"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_RigUnit_PBIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_FullBodyIK_Source_PBIK_Public_RigUnit_PBIK_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
