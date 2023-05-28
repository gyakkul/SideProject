// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_IKRig.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "../../Source/Runtime/Engine/Classes/Animation/InputScaleBias.h"
#include "IKRigDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_IKRig() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAlphaInputType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_CustomProperty();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAlphaBoolBlend();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBias();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputScaleBiasClamp();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigDefinition_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigProcessor_NoRegister();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_IKRig();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FIKRigGoal();
	UPackage* Z_Construct_UPackage__Script_IKRig();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_IKRig>() == std::is_polymorphic<FAnimNode_CustomProperty>(), "USTRUCT FAnimNode_IKRig cannot be polymorphic unless super FAnimNode_CustomProperty is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_IKRig;
class UScriptStruct* FAnimNode_IKRig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_IKRig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_IKRig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_IKRig, (UObject*)Z_Construct_UPackage__Script_IKRig(), TEXT("AnimNode_IKRig"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_IKRig.OuterSingleton;
}
template<> IKRIG_API UScriptStruct* StaticStruct<FAnimNode_IKRig>()
{
	return FAnimNode_IKRig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigDefinitionAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RigDefinitionAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Goals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Goals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Goals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartFromRefPose_MetaData[];
#endif
		static void NewProp_bStartFromRefPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartFromRefPose;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDraw_MetaData[];
#endif
		static void NewProp_bEnableDebugDraw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDraw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugScale;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaInputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaInputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaInputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlphaBoolEnabled_MetaData[];
#endif
		static void NewProp_bAlphaBoolEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlphaBoolEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBias_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaBoolBlend_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaBoolBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AlphaCurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScaleBiasClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AlphaScaleBiasClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKRigProcessor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_IKRigProcessor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActualAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ActualAlpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_IKRig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Links" },
		{ "Comment", "/** The input pose to start the IK solve relative to. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "ToolTip", "The input pose to start the IK solve relative to." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_IKRig, Source), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Source_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_RigDefinitionAsset_MetaData[] = {
		{ "Category", "RigDefinition" },
		{ "Comment", "/** The IK rig to use to modify the incoming source pose. */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "The IK rig to use to modify the incoming source pose." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_RigDefinitionAsset = { "RigDefinitionAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_IKRig, RigDefinitionAsset), Z_Construct_UClass_UIKRigDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_RigDefinitionAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_RigDefinitionAsset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Goals_Inner = { "Goals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FIKRigGoal, METADATA_PARAMS(nullptr, 0) }; // 1237806036
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Goals_MetaData[] = {
		{ "Category", "Goal" },
		{ "Comment", "/** The input goal transforms used by the IK Rig solvers.*/" },
		{ "EditCondition", "FALSE" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "The input goal transforms used by the IK Rig solvers." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Goals = { "Goals", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_IKRig, Goals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Goals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Goals_MetaData)) }; // 1237806036
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bStartFromRefPose_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** optionally ignore the input pose and start from the reference pose each solve */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "ToolTip", "optionally ignore the input pose and start from the reference pose each solve" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bStartFromRefPose_SetBit(void* Obj)
	{
		((FAnimNode_IKRig*)Obj)->bStartFromRefPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bStartFromRefPose = { "bStartFromRefPose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_IKRig), &Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bStartFromRefPose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bStartFromRefPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bStartFromRefPose_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bEnableDebugDraw_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** Toggle debug drawing of goals when node is selected.*/" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "ToolTip", "Toggle debug drawing of goals when node is selected." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bEnableDebugDraw_SetBit(void* Obj)
	{
		((FAnimNode_IKRig*)Obj)->bEnableDebugDraw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bEnableDebugDraw = { "bEnableDebugDraw", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_IKRig), &Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bEnableDebugDraw_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bEnableDebugDraw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bEnableDebugDraw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_DebugScale_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** Adjust size of debug drawing.*/" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "ToolTip", "Adjust size of debug drawing." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_DebugScale = { "DebugScale", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_IKRig, DebugScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_DebugScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_DebugScale_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaInputType_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "/** alpha value handler **/" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "ToolTip", "alpha value handler *" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaInputType = { "AlphaInputType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_IKRig, AlphaInputType), Z_Construct_UEnum_Engine_EAnimAlphaInputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaInputType_MetaData)) }; // 1572332242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bAlphaBoolEnabled_MetaData[] = {
		{ "Category", "Alpha" },
		{ "DisplayName", "bEnabled" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bAlphaBoolEnabled_SetBit(void* Obj)
	{
		((FAnimNode_IKRig*)Obj)->bAlphaBoolEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bAlphaBoolEnabled = { "bAlphaBoolEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_IKRig), &Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bAlphaBoolEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bAlphaBoolEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bAlphaBoolEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Alpha" },
		{ "Comment", "// Current strength of the skeletal control\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Current strength of the skeletal control" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_IKRig, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaScaleBias_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaScaleBias = { "AlphaScaleBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_IKRig, AlphaScaleBias), Z_Construct_UScriptStruct_FInputScaleBias, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaScaleBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaScaleBias_MetaData)) }; // 4124520036
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaBoolBlend_MetaData[] = {
		{ "Category", "Alpha" },
		{ "DisplayName", "Blend Settings" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaBoolBlend = { "AlphaBoolBlend", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_IKRig, AlphaBoolBlend), Z_Construct_UScriptStruct_FInputAlphaBoolBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaBoolBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaBoolBlend_MetaData)) }; // 3565619021
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaCurveName_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaCurveName = { "AlphaCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_IKRig, AlphaCurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaCurveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaScaleBiasClamp_MetaData[] = {
		{ "Category", "Alpha" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaScaleBiasClamp = { "AlphaScaleBiasClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_IKRig, AlphaScaleBiasClamp), Z_Construct_UScriptStruct_FInputScaleBiasClamp, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaScaleBiasClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaScaleBiasClamp_MetaData)) }; // 1479025939
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_IKRigProcessor_MetaData[] = {
		{ "Comment", "/** IK Rig runtime processor */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
		{ "ToolTip", "IK Rig runtime processor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_IKRigProcessor = { "IKRigProcessor", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_IKRig, IKRigProcessor), Z_Construct_UClass_UIKRigProcessor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_IKRigProcessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_IKRigProcessor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_ActualAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_IKRig.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_ActualAlpha = { "ActualAlpha", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_IKRig, ActualAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_ActualAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_ActualAlpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_RigDefinitionAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Goals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Goals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bStartFromRefPose,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bEnableDebugDraw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_DebugScale,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaInputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_bAlphaBoolEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaScaleBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaBoolBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_AlphaScaleBiasClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_IKRigProcessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewProp_ActualAlpha,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IKRig,
		Z_Construct_UScriptStruct_FAnimNode_CustomProperty,
		&NewStructOps,
		"AnimNode_IKRig",
		sizeof(FAnimNode_IKRig),
		alignof(FAnimNode_IKRig),
		Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_IKRig()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_IKRig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_IKRig.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_IKRig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_IKRig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_IKRig_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_IKRig::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_IKRig_Statics::NewStructOps, TEXT("AnimNode_IKRig"), &Z_Registration_Info_UScriptStruct_AnimNode_IKRig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_IKRig), 733065193U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_IKRig_h_2651321719(TEXT("/Script/IKRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_IKRig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRig_Public_AnimNodes_AnimNode_IKRig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
