// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_OrientationWarping.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_OrientationWarping() {}
// Cross Module References
	ANIMATIONWARPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_OrientationWarping();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_AnimationWarpingRuntime();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_OrientationWarping>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_OrientationWarping cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_OrientationWarping;
class UScriptStruct* FAnimNode_OrientationWarping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_OrientationWarping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_OrientationWarping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping, (UObject*)Z_Construct_UPackage__Script_AnimationWarpingRuntime(), TEXT("AnimNode_OrientationWarping"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_OrientationWarping.OuterSingleton;
}
template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_OrientationWarping>()
{
	return FAnimNode_OrientationWarping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientationAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrientationAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocomotionAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRootMotionSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRootMotionSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionAngleDeltaThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocomotionAngleDeltaThreshold;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpineBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpineBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpineBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKFootRootBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKFootRootBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKFootBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKFootBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IKFootBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistributedBoneOrientationAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistributedBoneOrientationAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpingAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WarpingAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxOffsetAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxOffsetAngle;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugDrawScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugDraw_MetaData[];
#endif
		static void NewProp_bEnableDebugDraw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugDraw;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OrientationWarping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_OrientationWarping>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "// Orientation warping evaluation mode (Graph or Manual)\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OrientationWarping.h" },
		{ "ToolTip", "Orientation warping evaluation mode (Graph or Manual)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OrientationWarping, Mode), Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_Mode_MetaData)) }; // 2839837007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_OrientationAngle_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "// The desired orientation angle (in degrees) to warp by relative to the specified RotationAxis\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OrientationWarping.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The desired orientation angle (in degrees) to warp by relative to the specified RotationAxis" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_OrientationAngle = { "OrientationAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OrientationWarping, OrientationAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_OrientationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_OrientationAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_LocomotionAngle_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "// The character locomotion angle (in degrees) relative to the specified RotationAxis\n// This will be used in the following equation for computing the orientation angle: [Orientation = RotationBetween(RootMotionDirection, LocomotionDirection)]\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OrientationWarping.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The character locomotion angle (in degrees) relative to the specified RotationAxis\nThis will be used in the following equation for computing the orientation angle: [Orientation = RotationBetween(RootMotionDirection, LocomotionDirection)]" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_LocomotionAngle = { "LocomotionAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OrientationWarping, LocomotionAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_LocomotionAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_LocomotionAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_MinRootMotionSpeedThreshold_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Minimum root motion speed required to apply orientation warping\n// This is useful to prevent unnatural re-orientation when the animation has a portion with no root motion (i.e starts/stops/idles)\n// When this value is greater than 0, it's recommended to enable interpolation with RotationInterpSpeed > 0\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OrientationWarping.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Minimum root motion speed required to apply orientation warping\nThis is useful to prevent unnatural re-orientation when the animation has a portion with no root motion (i.e starts/stops/idles)\nWhen this value is greater than 0, it's recommended to enable interpolation with RotationInterpSpeed > 0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_MinRootMotionSpeedThreshold = { "MinRootMotionSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OrientationWarping, MinRootMotionSpeedThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_MinRootMotionSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_MinRootMotionSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_LocomotionAngleDeltaThreshold_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Specifies an angle threshold to prevent erroneous over-rotation of the character, disabled with a value of 0\n//\n// When the effective orientation warping angle is detected to be greater than this value (default: 90 degrees) the locomotion direction will be inverted prior to warping\n// This will be used in the following equation: [Orientation = RotationBetween(RootMotionDirection, -LocomotionDirection)]\n//\n// Example: Playing a forward running animation while the motion is going backward \n// Rather than orientation warping by 180 degrees, the system will warp by 0 degrees \n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OrientationWarping.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Specifies an angle threshold to prevent erroneous over-rotation of the character, disabled with a value of 0\n\nWhen the effective orientation warping angle is detected to be greater than this value (default: 90 degrees) the locomotion direction will be inverted prior to warping\nThis will be used in the following equation: [Orientation = RotationBetween(RootMotionDirection, -LocomotionDirection)]\n\nExample: Playing a forward running animation while the motion is going backward\nRather than orientation warping by 180 degrees, the system will warp by 0 degrees" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_LocomotionAngleDeltaThreshold = { "LocomotionAngleDeltaThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OrientationWarping, LocomotionAngleDeltaThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_LocomotionAngleDeltaThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_LocomotionAngleDeltaThreshold_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_SpineBones_Inner = { "SpineBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_SpineBones_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Spine bone definitions\n// Used to counter rotate the body in order to keep the character facing forward\n// The amount of counter rotation applied is driven by DistributedBoneOrientationAlpha\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OrientationWarping.h" },
		{ "ToolTip", "Spine bone definitions\nUsed to counter rotate the body in order to keep the character facing forward\nThe amount of counter rotation applied is driven by DistributedBoneOrientationAlpha" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_SpineBones = { "SpineBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OrientationWarping, SpineBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_SpineBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_SpineBones_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_IKFootRootBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// IK Foot Root Bone definition\n" },
		{ "DisplayName", "IK Foot Root Bone" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OrientationWarping.h" },
		{ "ToolTip", "IK Foot Root Bone definition" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_IKFootRootBone = { "IKFootRootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OrientationWarping, IKFootRootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_IKFootRootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_IKFootRootBone_MetaData)) }; // 2906976723
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_IKFootBones_Inner = { "IKFootBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_IKFootBones_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// IK Foot definitions\n" },
		{ "DisplayName", "IK Foot Bones" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OrientationWarping.h" },
		{ "ToolTip", "IK Foot definitions" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_IKFootBones = { "IKFootBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OrientationWarping, IKFootBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_IKFootBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_IKFootBones_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_RotationAxis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Rotation axis used when rotating the character body\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OrientationWarping.h" },
		{ "ToolTip", "Rotation axis used when rotating the character body" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_RotationAxis = { "RotationAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OrientationWarping, RotationAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_RotationAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_RotationAxis_MetaData)) }; // 2376982772
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_DistributedBoneOrientationAlpha_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Specifies how much rotation is applied to the character body versus IK feet\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OrientationWarping.h" },
		{ "ToolTip", "Specifies how much rotation is applied to the character body versus IK feet" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_DistributedBoneOrientationAlpha = { "DistributedBoneOrientationAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OrientationWarping, DistributedBoneOrientationAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_DistributedBoneOrientationAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_DistributedBoneOrientationAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Specifies the interpolation speed (in Alpha per second) towards reaching the final warped rotation angle\n// A value of 0 will cause instantaneous rotation, while a greater value will introduce smoothing\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OrientationWarping.h" },
		{ "ToolTip", "Specifies the interpolation speed (in Alpha per second) towards reaching the final warped rotation angle\nA value of 0 will cause instantaneous rotation, while a greater value will introduce smoothing" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OrientationWarping, RotationInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_RotationInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_RotationInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_WarpingAlpha_MetaData[] = {
		{ "Category", "Experimental" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OrientationWarping.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_WarpingAlpha = { "WarpingAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OrientationWarping, WarpingAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_WarpingAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_WarpingAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_OffsetAlpha_MetaData[] = {
		{ "Category", "Experimental" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OrientationWarping.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_OffsetAlpha = { "OffsetAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OrientationWarping, OffsetAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_OffsetAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_OffsetAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_MaxOffsetAngle_MetaData[] = {
		{ "Category", "Experimental" },
		{ "ClampMax", "180.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OrientationWarping.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_MaxOffsetAngle = { "MaxOffsetAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OrientationWarping, MaxOffsetAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_MaxOffsetAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_MaxOffsetAngle_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_DebugDrawScale_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Scale all debug drawing visualization by a factor\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OrientationWarping.h" },
		{ "ToolTip", "Scale all debug drawing visualization by a factor" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_DebugDrawScale = { "DebugDrawScale", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OrientationWarping, DebugDrawScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_DebugDrawScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_DebugDrawScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_bEnableDebugDraw_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "// Enable/Disable orientation warping debug drawing\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OrientationWarping.h" },
		{ "ToolTip", "Enable/Disable orientation warping debug drawing" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_bEnableDebugDraw_SetBit(void* Obj)
	{
		((FAnimNode_OrientationWarping*)Obj)->bEnableDebugDraw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_bEnableDebugDraw = { "bEnableDebugDraw", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_OrientationWarping), &Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_bEnableDebugDraw_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_bEnableDebugDraw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_bEnableDebugDraw_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_OrientationAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_LocomotionAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_MinRootMotionSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_LocomotionAngleDeltaThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_SpineBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_SpineBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_IKFootRootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_IKFootBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_IKFootBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_RotationAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_DistributedBoneOrientationAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_RotationInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_WarpingAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_OffsetAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_MaxOffsetAngle,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_DebugDrawScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewProp_bEnableDebugDraw,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationWarpingRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_OrientationWarping",
		sizeof(FAnimNode_OrientationWarping),
		alignof(FAnimNode_OrientationWarping),
		Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_OrientationWarping()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_OrientationWarping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_OrientationWarping.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_OrientationWarping.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OrientationWarping_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OrientationWarping_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_OrientationWarping::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_OrientationWarping_Statics::NewStructOps, TEXT("AnimNode_OrientationWarping"), &Z_Registration_Info_UScriptStruct_AnimNode_OrientationWarping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_OrientationWarping), 2935656085U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OrientationWarping_h_715303804(TEXT("/Script/AnimationWarpingRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OrientationWarping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OrientationWarping_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
