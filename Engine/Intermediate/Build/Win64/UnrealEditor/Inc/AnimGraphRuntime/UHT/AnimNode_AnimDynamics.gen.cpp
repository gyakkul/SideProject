// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_AnimDynamics.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
#include "CommonAnimationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_AnimDynamics() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AnimDynamics();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysBodyDefinition();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysConstraintSetup();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysPlanarLimit();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysSphericalLimit();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRotationRetargetingInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimPhysCollisionType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimPhysTwistAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AnimPhysAngularConstraintType;
	static UEnum* AnimPhysAngularConstraintType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AnimPhysAngularConstraintType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AnimPhysAngularConstraintType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysAngularConstraintType"));
		}
		return Z_Registration_Info_UEnum_AnimPhysAngularConstraintType.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<AnimPhysAngularConstraintType>()
	{
		return AnimPhysAngularConstraintType_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType_Statics::Enumerators[] = {
		{ "AnimPhysAngularConstraintType::Angular", (int64)AnimPhysAngularConstraintType::Angular },
		{ "AnimPhysAngularConstraintType::Cone", (int64)AnimPhysAngularConstraintType::Cone },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType_Statics::Enum_MetaDataParams[] = {
		{ "Angular.Name", "AnimPhysAngularConstraintType::Angular" },
		{ "Comment", "/** Supported angular constraint types */" },
		{ "Cone.Name", "AnimPhysAngularConstraintType::Cone" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Supported angular constraint types" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"AnimPhysAngularConstraintType",
		"AnimPhysAngularConstraintType",
		Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType()
	{
		if (!Z_Registration_Info_UEnum_AnimPhysAngularConstraintType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AnimPhysAngularConstraintType.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AnimPhysAngularConstraintType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AnimPhysLinearConstraintType;
	static UEnum* AnimPhysLinearConstraintType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AnimPhysLinearConstraintType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AnimPhysLinearConstraintType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysLinearConstraintType"));
		}
		return Z_Registration_Info_UEnum_AnimPhysLinearConstraintType.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<AnimPhysLinearConstraintType>()
	{
		return AnimPhysLinearConstraintType_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType_Statics::Enumerators[] = {
		{ "AnimPhysLinearConstraintType::Free", (int64)AnimPhysLinearConstraintType::Free },
		{ "AnimPhysLinearConstraintType::Limited", (int64)AnimPhysLinearConstraintType::Limited },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Supported linear axis constraints */" },
		{ "Free.Name", "AnimPhysLinearConstraintType::Free" },
		{ "Limited.Name", "AnimPhysLinearConstraintType::Limited" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Supported linear axis constraints" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"AnimPhysLinearConstraintType",
		"AnimPhysLinearConstraintType",
		Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType()
	{
		if (!Z_Registration_Info_UEnum_AnimPhysLinearConstraintType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AnimPhysLinearConstraintType.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AnimPhysLinearConstraintType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AnimPhysSimSpaceType;
	static UEnum* AnimPhysSimSpaceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AnimPhysSimSpaceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AnimPhysSimSpaceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysSimSpaceType"));
		}
		return Z_Registration_Info_UEnum_AnimPhysSimSpaceType.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<AnimPhysSimSpaceType>()
	{
		return AnimPhysSimSpaceType_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType_Statics::Enumerators[] = {
		{ "AnimPhysSimSpaceType::Component", (int64)AnimPhysSimSpaceType::Component },
		{ "AnimPhysSimSpaceType::Actor", (int64)AnimPhysSimSpaceType::Actor },
		{ "AnimPhysSimSpaceType::World", (int64)AnimPhysSimSpaceType::World },
		{ "AnimPhysSimSpaceType::RootRelative", (int64)AnimPhysSimSpaceType::RootRelative },
		{ "AnimPhysSimSpaceType::BoneRelative", (int64)AnimPhysSimSpaceType::BoneRelative },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType_Statics::Enum_MetaDataParams[] = {
		{ "Actor.Name", "AnimPhysSimSpaceType::Actor" },
		{ "Actor.ToolTip", "Sim origin is the location/orientation of the actor containing the skeletal mesh component." },
		{ "BlueprintType", "true" },
		{ "BoneRelative.Name", "AnimPhysSimSpaceType::BoneRelative" },
		{ "BoneRelative.ToolTip", "Sim origin is the location/orientation of the bone specified in RelativeSpaceBone" },
		{ "Component.Name", "AnimPhysSimSpaceType::Component" },
		{ "Component.ToolTip", "Sim origin is the location/orientation of the skeletal mesh component." },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "RootRelative.Name", "AnimPhysSimSpaceType::RootRelative" },
		{ "RootRelative.ToolTip", "Sim origin is the location/orientation of the root bone." },
		{ "World.Name", "AnimPhysSimSpaceType::World" },
		{ "World.ToolTip", "Sim origin is the world origin. Teleporting characters is not recommended in this mode." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"AnimPhysSimSpaceType",
		"AnimPhysSimSpaceType",
		Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType()
	{
		if (!Z_Registration_Info_UEnum_AnimPhysSimSpaceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AnimPhysSimSpaceType.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AnimPhysSimSpaceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimPhysConstraintSetup;
class UScriptStruct* FAnimPhysConstraintSetup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPhysConstraintSetup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimPhysConstraintSetup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysConstraintSetup"));
	}
	return Z_Registration_Info_UScriptStruct_AnimPhysConstraintSetup.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimPhysConstraintSetup>()
{
	return FAnimPhysConstraintSetup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinearXLimitType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearXLimitType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LinearXLimitType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinearYLimitType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearYLimitType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LinearYLimitType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LinearZLimitType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearZLimitType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LinearZLimitType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearAxesMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearAxesMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearAxesMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearAxesMax;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AngularConstraintType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularConstraintType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AngularConstraintType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TwistAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TwistAxis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AngularTargetAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularTargetAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AngularTargetAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConeAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConeAngle;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularXAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularXAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularYAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularYAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularZAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularZAngle;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularLimitsMin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularLimitsMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularLimitsMax_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularLimitsMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Constraint setup struct, holds data required to build a physics constraint */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Constraint setup struct, holds data required to build a physics constraint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimPhysConstraintSetup>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearXLimitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearXLimitType_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** Whether to limit the linear X axis */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Whether to limit the linear X axis" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearXLimitType = { "LinearXLimitType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, LinearXLimitType), Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearXLimitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearXLimitType_MetaData)) }; // 638599924
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearYLimitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearYLimitType_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** Whether to limit the linear Y axis */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Whether to limit the linear Y axis" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearYLimitType = { "LinearYLimitType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, LinearYLimitType), Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearYLimitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearYLimitType_MetaData)) }; // 638599924
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearZLimitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearZLimitType_MetaData[] = {
		{ "Category", "Linear" },
		{ "Comment", "/** Whether to limit the linear Z axis */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Whether to limit the linear Z axis" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearZLimitType = { "LinearZLimitType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, LinearZLimitType), Z_Construct_UEnum_AnimGraphRuntime_AnimPhysLinearConstraintType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearZLimitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearZLimitType_MetaData)) }; // 638599924
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearAxesMin_MetaData[] = {
		{ "Category", "Linear" },
		{ "ClampMax", "0" },
		{ "Comment", "/** Minimum linear movement per-axis (Set zero here and in the max limit to lock) */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Minimum linear movement per-axis (Set zero here and in the max limit to lock)" },
		{ "UIMax", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearAxesMin = { "LinearAxesMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, LinearAxesMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearAxesMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearAxesMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearAxesMax_MetaData[] = {
		{ "Category", "Linear" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum linear movement per-axis (Set zero here and in the min limit to lock) */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Maximum linear movement per-axis (Set zero here and in the min limit to lock)" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearAxesMax = { "LinearAxesMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, LinearAxesMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearAxesMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearAxesMax_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularConstraintType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularConstraintType_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/** Method to use when constraining angular motion */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Method to use when constraining angular motion" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularConstraintType = { "AngularConstraintType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularConstraintType), Z_Construct_UEnum_AnimGraphRuntime_AnimPhysAngularConstraintType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularConstraintType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularConstraintType_MetaData)) }; // 337478770
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_TwistAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_TwistAxis_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/** Axis to consider for twist when constraining angular motion (forward axis) */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Axis to consider for twist when constraining angular motion (forward axis)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, TwistAxis), Z_Construct_UEnum_Engine_AnimPhysTwistAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_TwistAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_TwistAxis_MetaData)) }; // 1872604052
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularTargetAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularTargetAxis_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/**\n\x09 * The axis in the simulation pose to align to the Angular Target.\n\x09 * This is typically the axis pointing along the bone.\n\x09 * Note: This is affected by the Angular Spring Constant.\n\x09 */" },
		{ "DisplayAfter", "AngularLimitsMax" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "The axis in the simulation pose to align to the Angular Target.\nThis is typically the axis pointing along the bone.\nNote: This is affected by the Angular Spring Constant." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularTargetAxis = { "AngularTargetAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularTargetAxis), Z_Construct_UEnum_Engine_AnimPhysTwistAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularTargetAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularTargetAxis_MetaData)) }; // 1872604052
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_ConeAngle_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "90" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Angle to use when constraining using a cone */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Angle to use when constraining using a cone" },
		{ "UIMax", "90" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_ConeAngle = { "ConeAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, ConeAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_ConeAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_ConeAngle_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularXAngle_MetaData[] = {
		{ "Comment", "/** X-axis limit for angular motion when using the \"Angular\" constraint type (Set to 0 to lock, or 180 to remain free) */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "X-axis limit for angular motion when using the \"Angular\" constraint type (Set to 0 to lock, or 180 to remain free)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularXAngle = { "AngularXAngle", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularXAngle_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularXAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularXAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularYAngle_MetaData[] = {
		{ "Comment", "/** Y-axis limit for angular motion when using the \"Angular\" constraint type (Set to 0 to lock, or 180 to remain free) */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Y-axis limit for angular motion when using the \"Angular\" constraint type (Set to 0 to lock, or 180 to remain free)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularYAngle = { "AngularYAngle", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularYAngle_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularYAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularYAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularZAngle_MetaData[] = {
		{ "Comment", "/** Z-axis limit for angular motion when using the \"Angular\" constraint type (Set to 0 to lock, or 180 to remain free) */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Z-axis limit for angular motion when using the \"Angular\" constraint type (Set to 0 to lock, or 180 to remain free)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularZAngle = { "AngularZAngle", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularZAngle_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularZAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularZAngle_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularLimitsMin_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularLimitsMin = { "AngularLimitsMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularLimitsMin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularLimitsMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularLimitsMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularLimitsMax_MetaData[] = {
		{ "Category", "Angular" },
		{ "ClampMax", "180" },
		{ "ClampMin", "-180" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "UIMax", "180" },
		{ "UIMin", "-180" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularLimitsMax = { "AngularLimitsMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularLimitsMax), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularLimitsMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularLimitsMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularTarget_MetaData[] = {
		{ "Category", "Angular" },
		{ "Comment", "/**\n\x09 * The axis to align the angular spring constraint to in the animation pose.\n\x09 * This typically points down the bone - so values of (1.0, 0.0, 0.0) are common,\n\x09 * but you can pick other values to align the spring to a different direction.\n\x09 * Note: This is affected by the Angular Spring Constant.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "The axis to align the angular spring constraint to in the animation pose.\nThis typically points down the bone - so values of (1.0, 0.0, 0.0) are common,\nbut you can pick other values to align the spring to a different direction.\nNote: This is affected by the Angular Spring Constant." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularTarget = { "AngularTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysConstraintSetup, AngularTarget), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearXLimitType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearXLimitType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearYLimitType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearYLimitType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearZLimitType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearZLimitType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearAxesMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_LinearAxesMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularConstraintType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularConstraintType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_TwistAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_TwistAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularTargetAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularTargetAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_ConeAngle,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularXAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularYAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularZAngle,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularLimitsMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularLimitsMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewProp_AngularTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"AnimPhysConstraintSetup",
		sizeof(FAnimPhysConstraintSetup),
		alignof(FAnimPhysConstraintSetup),
		Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysConstraintSetup()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimPhysConstraintSetup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimPhysConstraintSetup.InnerSingleton, Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimPhysConstraintSetup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimPhysPlanarLimit;
class UScriptStruct* FAnimPhysPlanarLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPhysPlanarLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimPhysPlanarLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimPhysPlanarLimit, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysPlanarLimit"));
	}
	return Z_Registration_Info_UScriptStruct_AnimPhysPlanarLimit.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimPhysPlanarLimit>()
{
	return FAnimPhysPlanarLimit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivingBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrivingBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaneTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimPhysPlanarLimit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::NewProp_DrivingBone_MetaData[] = {
		{ "Category", "PlanarLimit" },
		{ "Comment", "/** When using a driving bone, the plane transform will be relative to the bone transform */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "When using a driving bone, the plane transform will be relative to the bone transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::NewProp_DrivingBone = { "DrivingBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysPlanarLimit, DrivingBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::NewProp_DrivingBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::NewProp_DrivingBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::NewProp_PlaneTransform_MetaData[] = {
		{ "Category", "PlanarLimit" },
		{ "Comment", "/** Transform of the plane, this is either in component-space if no DrivinBone is specified\n\x09 *  or in bone-space if a driving bone is present.\n\x09 */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Transform of the plane, this is either in component-space if no DrivinBone is specified\nor in bone-space if a driving bone is present." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::NewProp_PlaneTransform = { "PlaneTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysPlanarLimit, PlaneTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::NewProp_PlaneTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::NewProp_PlaneTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::NewProp_DrivingBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::NewProp_PlaneTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"AnimPhysPlanarLimit",
		sizeof(FAnimPhysPlanarLimit),
		alignof(FAnimPhysPlanarLimit),
		Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysPlanarLimit()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimPhysPlanarLimit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimPhysPlanarLimit.InnerSingleton, Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimPhysPlanarLimit.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESphericalLimitType;
	static UEnum* ESphericalLimitType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESphericalLimitType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESphericalLimitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("ESphericalLimitType"));
		}
		return Z_Registration_Info_UEnum_ESphericalLimitType.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<ESphericalLimitType>()
	{
		return ESphericalLimitType_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType_Statics::Enumerators[] = {
		{ "ESphericalLimitType::Inner", (int64)ESphericalLimitType::Inner },
		{ "ESphericalLimitType::Outer", (int64)ESphericalLimitType::Outer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Whether spheres keep bodies inside, or outside of their shape */" },
		{ "Inner.Name", "ESphericalLimitType::Inner" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "Outer.Name", "ESphericalLimitType::Outer" },
		{ "ToolTip", "Whether spheres keep bodies inside, or outside of their shape" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"ESphericalLimitType",
		"ESphericalLimitType",
		Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType()
	{
		if (!Z_Registration_Info_UEnum_ESphericalLimitType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESphericalLimitType.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESphericalLimitType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimPhysSphericalLimit;
class UScriptStruct* FAnimPhysSphericalLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPhysSphericalLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimPhysSphericalLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimPhysSphericalLimit, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysSphericalLimit"));
	}
	return Z_Registration_Info_UScriptStruct_AnimPhysSphericalLimit.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimPhysSphericalLimit>()
{
	return FAnimPhysSphericalLimit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivingBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DrivingBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereLocalOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphereLocalOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LimitRadius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LimitType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimitType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LimitType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimPhysSphericalLimit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_DrivingBone_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "Comment", "/** Bone to attach the sphere to */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Bone to attach the sphere to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_DrivingBone = { "DrivingBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysSphericalLimit, DrivingBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_DrivingBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_DrivingBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_SphereLocalOffset_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "Comment", "/** Local offset for the sphere, if no driving bone is set this is in node space, otherwise bone space */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Local offset for the sphere, if no driving bone is set this is in node space, otherwise bone space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_SphereLocalOffset = { "SphereLocalOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysSphericalLimit, SphereLocalOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_SphereLocalOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_SphereLocalOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_LimitRadius_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "Comment", "/** Radius of the sphere */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Radius of the sphere" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_LimitRadius = { "LimitRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysSphericalLimit, LimitRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_LimitRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_LimitRadius_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_LimitType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_LimitType_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "Comment", "/** Whether to lock bodies inside or outside of the sphere */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Whether to lock bodies inside or outside of the sphere" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_LimitType = { "LimitType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysSphericalLimit, LimitType), Z_Construct_UEnum_AnimGraphRuntime_ESphericalLimitType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_LimitType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_LimitType_MetaData)) }; // 1502951913
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_DrivingBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_SphereLocalOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_LimitRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_LimitType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewProp_LimitType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"AnimPhysSphericalLimit",
		sizeof(FAnimPhysSphericalLimit),
		alignof(FAnimPhysSphericalLimit),
		Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysSphericalLimit()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimPhysSphericalLimit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimPhysSphericalLimit.InnerSingleton, Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimPhysSphericalLimit.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimPhysBodyDefinition;
class UScriptStruct* FAnimPhysBodyDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPhysBodyDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimPhysBodyDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimPhysBodyDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_AnimPhysBodyDefinition.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimPhysBodyDefinition>()
{
	return FAnimPhysBodyDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalJointOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalJointOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintSetup;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollisionRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereCollisionRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimPhysBodyDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_BoundBone_MetaData[] = {
		{ "Category", "PhysicsBodyDefinition" },
		{ "EditCondition", "false" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_BoundBone = { "BoundBone", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysBodyDefinition, BoundBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_BoundBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_BoundBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_BoxExtents_MetaData[] = {
		{ "Category", "PhysicsBodyDefinition" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Extents of the box to use for simulation */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Extents of the box to use for simulation" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_BoxExtents = { "BoxExtents", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysBodyDefinition, BoxExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_BoxExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_BoxExtents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_LocalJointOffset_MetaData[] = {
		{ "Category", "PhysicsBodyDefinition" },
		{ "Comment", "/** Vector relative to the body being simulated to attach the constraint to */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Vector relative to the body being simulated to attach the constraint to" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_LocalJointOffset = { "LocalJointOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysBodyDefinition, LocalJointOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_LocalJointOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_LocalJointOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_ConstraintSetup_MetaData[] = {
		{ "Category", "Constraint" },
		{ "Comment", "/** Data describing the constraints we will apply to the body */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Data describing the constraints we will apply to the body" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_ConstraintSetup = { "ConstraintSetup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysBodyDefinition, ConstraintSetup), Z_Construct_UScriptStruct_FAnimPhysConstraintSetup, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_ConstraintSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_ConstraintSetup_MetaData)) }; // 3574477019
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Resolution method for planar limits */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Resolution method for planar limits" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysBodyDefinition, CollisionType), Z_Construct_UEnum_Engine_AnimPhysCollisionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_CollisionType_MetaData)) }; // 2956383599
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_SphereCollisionRadius_MetaData[] = {
		{ "Category", "PhysicsBodyDefinition" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Radius to use if CollisionType is set to CustomSphere */" },
		{ "EditCondition", "CollisionType == AnimPhysCollisionType::CustomSphere" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Radius to use if CollisionType is set to CustomSphere" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_SphereCollisionRadius = { "SphereCollisionRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPhysBodyDefinition, SphereCollisionRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_SphereCollisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_SphereCollisionRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_BoundBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_BoxExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_LocalJointOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_ConstraintSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_CollisionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_CollisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewProp_SphereCollisionRadius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"AnimPhysBodyDefinition",
		sizeof(FAnimPhysBodyDefinition),
		alignof(FAnimPhysBodyDefinition),
		Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimPhysBodyDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimPhysBodyDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimPhysBodyDefinition.InnerSingleton, Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimPhysBodyDefinition.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_AnimDynamics>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_AnimDynamics cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_AnimDynamics;
class UScriptStruct* FAnimNode_AnimDynamics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_AnimDynamics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_AnimDynamics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_AnimDynamics"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_AnimDynamics.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_AnimDynamics>()
{
	return FAnimNode_AnimDynamics::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearDampingOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDampingOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularDampingOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDampingOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeSpaceBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeSpaceBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChainEnd;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicsBodyDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsBodyDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicsBodyDefinitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GravityOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GravityOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearSpringConstant_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearSpringConstant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularSpringConstant_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularSpringConstant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WindScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WindScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentLinearAccScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentLinearAccScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentLinearVelScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentLinearVelScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentAppliedLinearAccClamp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentAppliedLinearAccClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularBiasOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularBiasOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSolverIterationsPreUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSolverIterationsPreUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSolverIterationsPostUpdate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSolverIterationsPostUpdate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SphericalLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphericalLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SphericalLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalForce_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalForce;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlanarLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanarLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlanarLimits;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimulationSpace_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationSpace_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimulationSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSphericalLimits_MetaData[];
#endif
		static void NewProp_bUseSphericalLimits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSphericalLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePlanarLimit_MetaData[];
#endif
		static void NewProp_bUsePlanarLimit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePlanarLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoUpdate_MetaData[];
#endif
		static void NewProp_bDoUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDoEval_MetaData[];
#endif
		static void NewProp_bDoEval_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDoEval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLinearDamping_MetaData[];
#endif
		static void NewProp_bOverrideLinearDamping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLinearDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAngularBias_MetaData[];
#endif
		static void NewProp_bOverrideAngularBias_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAngularBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAngularDamping_MetaData[];
#endif
		static void NewProp_bOverrideAngularDamping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAngularDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableWind_MetaData[];
#endif
		static void NewProp_bEnableWind_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableWind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseGravityOverride_MetaData[];
#endif
		static void NewProp_bUseGravityOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGravityOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGravityOverrideInSimSpace_MetaData[];
#endif
		static void NewProp_bGravityOverrideInSimSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGravityOverrideInSimSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLinearSpring_MetaData[];
#endif
		static void NewProp_bLinearSpring_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinearSpring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAngularSpring_MetaData[];
#endif
		static void NewProp_bAngularSpring_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAngularSpring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChain_MetaData[];
#endif
		static void NewProp_bChain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RetargetingSettings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalJointOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalJointOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintSetup_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstraintSetup;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SphereCollisionRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereCollisionRadius;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_AnimDynamics>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LinearDampingOverride_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/**\n\x09* Overridden linear damping value. The default is 0.7. Values below 0.7 won't have an effect.\n\x09*/" },
		{ "DisplayAfter", "NumSolverIterationsPostUpdate" },
		{ "EditCondition", "bOverrideLinearDamping" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Overridden linear damping value. The default is 0.7. Values below 0.7 won't have an effect." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LinearDampingOverride = { "LinearDampingOverride", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, LinearDampingOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LinearDampingOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LinearDampingOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularDampingOverride_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/**\n\x09 * Overridden angular damping value. The default is 0.7. Values below 0.7 won't have an effect.\n\x09 */" },
		{ "DisplayAfter", "LinearDampingOverride" },
		{ "EditCondition", "bOverrideAngularDamping" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Overridden angular damping value. The default is 0.7. Values below 0.7 won't have an effect." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularDampingOverride = { "AngularDampingOverride", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, AngularDampingOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularDampingOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularDampingOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_RelativeSpaceBone_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** When in BoneRelative sim space, the simulation will use this bone as the origin */" },
		{ "DisplayAfter", "SimulationSpace" },
		{ "EditCondition", "SimulationSpace == AnimPhysSimSpaceType::BoneRelative" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "When in BoneRelative sim space, the simulation will use this bone as the origin" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_RelativeSpaceBone = { "RelativeSpaceBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, RelativeSpaceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_RelativeSpaceBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_RelativeSpaceBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_BoundBone_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** The bone to attach the physics body to, if bChain is true this is the top of the chain */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "The bone to attach the physics body to, if bChain is true this is the top of the chain" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_BoundBone = { "BoundBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, BoundBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_BoundBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_BoundBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ChainEnd_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** If bChain is true this is the bottom of the chain, otherwise ignored */" },
		{ "DisplayAfter", "BoundBone" },
		{ "EditCondition", "bChain" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "If bChain is true this is the bottom of the chain, otherwise ignored" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ChainEnd = { "ChainEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, ChainEnd), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ChainEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ChainEnd_MetaData)) }; // 2906976723
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PhysicsBodyDefinitions_Inner = { "PhysicsBodyDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimPhysBodyDefinition, METADATA_PARAMS(nullptr, 0) }; // 517694751
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PhysicsBodyDefinitions_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "DisplayAfter", "ChainEnd" },
		{ "DisplayName", "Body Definitions" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PhysicsBodyDefinitions = { "PhysicsBodyDefinitions", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, PhysicsBodyDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PhysicsBodyDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PhysicsBodyDefinitions_MetaData)) }; // 517694751
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_GravityScale_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** Scale for gravity, higher values increase forces due to gravity */" },
		{ "DisplayAfter", "bGravityOverrideInSimSpace" },
		{ "EditCondition", "!bUseGravityOverride" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Scale for gravity, higher values increase forces due to gravity" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, GravityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_GravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_GravityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_GravityOverride_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** Gravity Override Value */" },
		{ "DisplayAfter", "bUseGravityOverride" },
		{ "EditCondition", "bUseGravityOverride" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Gravity Override Value" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_GravityOverride = { "GravityOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, GravityOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_GravityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_GravityOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LinearSpringConstant_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** \n\x09 * Spring constant to use when calculating linear springs, higher values mean a stronger spring.\n\x09 * You need to enable the Linear Spring checkbox for this to have an effect.\n\x09 */" },
		{ "DisplayAfter", "AngularSpringConstant" },
		{ "EditCondition", "bLinearSpring" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Spring constant to use when calculating linear springs, higher values mean a stronger spring.\nYou need to enable the Linear Spring checkbox for this to have an effect." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LinearSpringConstant = { "LinearSpringConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, LinearSpringConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LinearSpringConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LinearSpringConstant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularSpringConstant_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** \n\x09 * Spring constant to use when calculating angular springs, higher values mean a stronger spring.\n\x09 * You need to enable the Angular Spring checkbox for this to have an effect.\n\x09 * Note: Make sure to also set the Angular Target Axis and Angular Target in the Constraint Setup for this to have an effect.\n\x09 */" },
		{ "DisplayAfter", "PhysicsBodyDefinitions" },
		{ "EditCondition", "bAngularSpring" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Spring constant to use when calculating angular springs, higher values mean a stronger spring.\nYou need to enable the Angular Spring checkbox for this to have an effect.\nNote: Make sure to also set the Angular Target Axis and Angular Target in the Constraint Setup for this to have an effect." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularSpringConstant = { "AngularSpringConstant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, AngularSpringConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularSpringConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularSpringConstant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_WindScale_MetaData[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Scale to apply to calculated wind velocities in the solver */" },
		{ "DisplayAfter", "bEnableWind" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Scale to apply to calculated wind velocities in the solver" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_WindScale = { "WindScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, WindScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_WindScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_WindScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentLinearAccScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When using non-world-space sim, this controls how much of the components world-space acceleration is passed on to the local-space simulation. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When using non-world-space sim, this controls how much of the components world-space acceleration is passed on to the local-space simulation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentLinearAccScale = { "ComponentLinearAccScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, ComponentLinearAccScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentLinearAccScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentLinearAccScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentLinearVelScale_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When using non-world-space sim, this applies a 'drag' to the bodies in the local space simulation, based on the components world-space velocity. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "When using non-world-space sim, this applies a 'drag' to the bodies in the local space simulation, based on the components world-space velocity." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentLinearVelScale = { "ComponentLinearVelScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, ComponentLinearVelScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentLinearVelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentLinearVelScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentAppliedLinearAccClamp_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** When using non-world-space sim, this is an overall clamp on acceleration derived from ComponentLinearAccScale and ComponentLinearVelScale, to ensure it is not too large. */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "When using non-world-space sim, this is an overall clamp on acceleration derived from ComponentLinearAccScale and ComponentLinearVelScale, to ensure it is not too large." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentAppliedLinearAccClamp = { "ComponentAppliedLinearAccClamp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, ComponentAppliedLinearAccClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentAppliedLinearAccClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentAppliedLinearAccClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularBiasOverride_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** Overridden angular bias value\n\x09 *  Angular bias is essentially a twist reduction for chain forces and defaults to a value to keep chains stability\n\x09*  in check. When using single-body systems sometimes angular forces will look like they are \"catching-up\" with\n\x09*  the mesh, if that's the case override this and push it towards 1.0f until it settles correctly\n\x09*/" },
		{ "DisplayAfter", "AngularDampingOverride" },
		{ "EditCondition", "bOverrideAngularBias" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Overridden angular bias value\nAngular bias is essentially a twist reduction for chain forces and defaults to a value to keep chains stability\nin check. When using single-body systems sometimes angular forces will look like they are \"catching-up\" with\nthe mesh, if that's the case override this and push it towards 1.0f until it settles correctly" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularBiasOverride = { "AngularBiasOverride", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, AngularBiasOverride), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularBiasOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularBiasOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_NumSolverIterationsPreUpdate_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** Number of update passes on the linear and angular limits before we solve the position of the bodies recommended to be four times the value of NumSolverIterationsPostUpdate */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Number of update passes on the linear and angular limits before we solve the position of the bodies recommended to be four times the value of NumSolverIterationsPostUpdate" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_NumSolverIterationsPreUpdate = { "NumSolverIterationsPreUpdate", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, NumSolverIterationsPreUpdate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_NumSolverIterationsPreUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_NumSolverIterationsPreUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_NumSolverIterationsPostUpdate_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** Number of update passes on the linear and angular limits after we solve the position of the bodies, recommended to be around a quarter of NumSolverIterationsPreUpdate */" },
		{ "DisplayAfter", "NumSolverIterationsPreUpdate" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Number of update passes on the linear and angular limits after we solve the position of the bodies, recommended to be around a quarter of NumSolverIterationsPreUpdate" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_NumSolverIterationsPostUpdate = { "NumSolverIterationsPostUpdate", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, NumSolverIterationsPostUpdate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_NumSolverIterationsPostUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_NumSolverIterationsPostUpdate_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SphericalLimits_Inner = { "SphericalLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimPhysSphericalLimit, METADATA_PARAMS(nullptr, 0) }; // 88252527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SphericalLimits_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "Comment", "/** List of available spherical limits for this node */" },
		{ "DisplayAfter", "bUseSphericalLimits" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "List of available spherical limits for this node" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SphericalLimits = { "SphericalLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, SphericalLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SphericalLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SphericalLimits_MetaData)) }; // 88252527
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ExternalForce_MetaData[] = {
		{ "Category", "Forces" },
		{ "Comment", "/** An external force to apply to all bodies in the simulation when ticked, specified in world space */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "An external force to apply to all bodies in the simulation when ticked, specified in world space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ExternalForce = { "ExternalForce", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, ExternalForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ExternalForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ExternalForce_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PlanarLimits_Inner = { "PlanarLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimPhysPlanarLimit, METADATA_PARAMS(nullptr, 0) }; // 1312969378
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PlanarLimits_MetaData[] = {
		{ "Category", "PlanarLimit" },
		{ "Comment", "/** List of available planar limits for this node */" },
		{ "DisplayAfter", "bUsePlanarLimit" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "List of available planar limits for this node" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PlanarLimits = { "PlanarLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, PlanarLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PlanarLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PlanarLimits_MetaData)) }; // 1312969378
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SimulationSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SimulationSpace_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** The space used to run the simulation */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The space used to run the simulation" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SimulationSpace = { "SimulationSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, SimulationSpace), Z_Construct_UEnum_AnimGraphRuntime_AnimPhysSimSpaceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SimulationSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SimulationSpace_MetaData)) }; // 2687138646
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseSphericalLimits_MetaData[] = {
		{ "Category", "SphericalLimit" },
		{ "Comment", "/** Whether to evaluate spherical limits */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Whether to evaluate spherical limits" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseSphericalLimits_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamics*)Obj)->bUseSphericalLimits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseSphericalLimits = { "bUseSphericalLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseSphericalLimits_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseSphericalLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseSphericalLimits_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUsePlanarLimit_MetaData[] = {
		{ "Category", "PlanarLimit" },
		{ "Comment", "/** Whether to evaluate planar limits */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Whether to evaluate planar limits" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUsePlanarLimit_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamics*)Obj)->bUsePlanarLimit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUsePlanarLimit = { "bUsePlanarLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUsePlanarLimit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUsePlanarLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUsePlanarLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoUpdate_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** If true we will perform physics update, otherwise skip - allows visualization of the initial state of the bodies */" },
		{ "DisplayAfter", "bDoEval" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "If true we will perform physics update, otherwise skip - allows visualization of the initial state of the bodies" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoUpdate_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamics*)Obj)->bDoUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoUpdate = { "bDoUpdate", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoUpdate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoEval_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** If true we will perform bone transform evaluation, otherwise skip - allows visualization of the initial anim state compared to the physics sim */" },
		{ "DisplayAfter", "AngularBiasOverride" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "If true we will perform bone transform evaluation, otherwise skip - allows visualization of the initial anim state compared to the physics sim" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoEval_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamics*)Obj)->bDoEval = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoEval = { "bDoEval", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoEval_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoEval_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoEval_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideLinearDamping_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** If true, the override value will be used for linear damping */" },
		{ "DisplayAfter", "AngularSpringConstraint" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "If true, the override value will be used for linear damping" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideLinearDamping_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamics*)Obj)->bOverrideLinearDamping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideLinearDamping = { "bOverrideLinearDamping", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideLinearDamping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideLinearDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideLinearDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularBias_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** If true, the override value will be used for the angular bias for bodies in this node. \n\x09 *  Angular bias is essentially a twist reduction for chain forces and defaults to a value to keep chains stability\n\x09 *  in check. When using single-body systems sometimes angular forces will look like they are \"catching-up\" with\n\x09 *  the mesh, if that's the case override this and push it towards 1.0f until it settles correctly\n\x09 */" },
		{ "DisplayAfter", "AngularDampingOverride" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "If true, the override value will be used for the angular bias for bodies in this node.\nAngular bias is essentially a twist reduction for chain forces and defaults to a value to keep chains stability\nin check. When using single-body systems sometimes angular forces will look like they are \"catching-up\" with\nthe mesh, if that's the case override this and push it towards 1.0f until it settles correctly" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularBias_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamics*)Obj)->bOverrideAngularBias = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularBias = { "bOverrideAngularBias", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularBias_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularDamping_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** If true, the override value will be used for angular damping */" },
		{ "DisplayAfter", "LinearDampingOverride" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "If true, the override value will be used for angular damping" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularDamping_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamics*)Obj)->bOverrideAngularDamping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularDamping = { "bOverrideAngularDamping", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularDamping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bEnableWind_MetaData[] = {
		{ "Category", "Wind" },
		{ "Comment", "/** Whether or not wind is enabled for the bodies in this simulation */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Whether or not wind is enabled for the bodies in this simulation" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bEnableWind_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamics*)Obj)->bEnableWind = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bEnableWind = { "bEnableWind", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bEnableWind_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bEnableWind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bEnableWind_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseGravityOverride_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** Use gravity override value vs gravity scale */" },
		{ "DisplayAfter", "LinearSpringConstant" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Use gravity override value vs gravity scale" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseGravityOverride_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamics*)Obj)->bUseGravityOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseGravityOverride = { "bUseGravityOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseGravityOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseGravityOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseGravityOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bGravityOverrideInSimSpace_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** If true the gravity override value is defined in simulation space, by default it is in world space */" },
		{ "DisplayAfter", "GravityOverride" },
		{ "DisplayName", "Gravity Override In Sim Space" },
		{ "EditCondition", "bUseGravityOverride" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "If true the gravity override value is defined in simulation space, by default it is in world space" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bGravityOverrideInSimSpace_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamics*)Obj)->bGravityOverrideInSimSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bGravityOverrideInSimSpace = { "bGravityOverrideInSimSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bGravityOverrideInSimSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bGravityOverrideInSimSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bGravityOverrideInSimSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bLinearSpring_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** If true the body will attempt to spring back to its initial position */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "If true the body will attempt to spring back to its initial position" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bLinearSpring_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamics*)Obj)->bLinearSpring = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bLinearSpring = { "bLinearSpring", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bLinearSpring_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bLinearSpring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bLinearSpring_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bAngularSpring_MetaData[] = {
		{ "Category", "PhysicsParameters" },
		{ "Comment", "/** If true the body will attempt to align itself with the specified angular target */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "If true the body will attempt to align itself with the specified angular target" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bAngularSpring_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamics*)Obj)->bAngularSpring = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bAngularSpring = { "bAngularSpring", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bAngularSpring_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bAngularSpring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bAngularSpring_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bChain_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "/** Set to true to use the solver to simulate a connected chain */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "Set to true to use the solver to simulate a connected chain" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bChain_SetBit(void* Obj)
	{
		((FAnimNode_AnimDynamics*)Obj)->bChain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bChain = { "bChain", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_AnimDynamics), &Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bChain_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bChain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_RetargetingSettings_MetaData[] = {
		{ "Category", "Retargeting" },
		{ "Comment", "/** The settings for rotation retargeting */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
		{ "ToolTip", "The settings for rotation retargeting" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_RetargetingSettings = { "RetargetingSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, RetargetingSettings), Z_Construct_UScriptStruct_FRotationRetargetingInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_RetargetingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_RetargetingSettings_MetaData)) }; // 1928826221
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_BoxExtents_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_BoxExtents = { "BoxExtents", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, BoxExtents_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_BoxExtents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_BoxExtents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LocalJointOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LocalJointOffset = { "LocalJointOffset", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, LocalJointOffset_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LocalJointOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LocalJointOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ConstraintSetup_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ConstraintSetup = { "ConstraintSetup", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, ConstraintSetup_DEPRECATED), Z_Construct_UScriptStruct_FAnimPhysConstraintSetup, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ConstraintSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ConstraintSetup_MetaData)) }; // 3574477019
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_CollisionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, CollisionType_DEPRECATED), Z_Construct_UEnum_Engine_AnimPhysCollisionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_CollisionType_MetaData)) }; // 2956383599
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SphereCollisionRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_AnimDynamics.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SphereCollisionRadius = { "SphereCollisionRadius", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_AnimDynamics, SphereCollisionRadius_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SphereCollisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SphereCollisionRadius_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LinearDampingOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularDampingOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_RelativeSpaceBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_BoundBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ChainEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PhysicsBodyDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PhysicsBodyDefinitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_GravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_GravityOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LinearSpringConstant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularSpringConstant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_WindScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentLinearAccScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentLinearVelScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ComponentAppliedLinearAccClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_AngularBiasOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_NumSolverIterationsPreUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_NumSolverIterationsPostUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SphericalLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SphericalLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ExternalForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PlanarLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_PlanarLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SimulationSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SimulationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseSphericalLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUsePlanarLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bDoEval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideLinearDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bOverrideAngularDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bEnableWind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bUseGravityOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bGravityOverrideInSimSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bLinearSpring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bAngularSpring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_bChain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_RetargetingSettings,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_BoxExtents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_LocalJointOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_ConstraintSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_CollisionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_CollisionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewProp_SphereCollisionRadius,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_AnimDynamics",
		sizeof(FAnimNode_AnimDynamics),
		alignof(FAnimNode_AnimDynamics),
		Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_AnimDynamics()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_AnimDynamics.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_AnimDynamics.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_AnimDynamics.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_Statics::EnumInfo[] = {
		{ AnimPhysAngularConstraintType_StaticEnum, TEXT("AnimPhysAngularConstraintType"), &Z_Registration_Info_UEnum_AnimPhysAngularConstraintType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 337478770U) },
		{ AnimPhysLinearConstraintType_StaticEnum, TEXT("AnimPhysLinearConstraintType"), &Z_Registration_Info_UEnum_AnimPhysLinearConstraintType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 638599924U) },
		{ AnimPhysSimSpaceType_StaticEnum, TEXT("AnimPhysSimSpaceType"), &Z_Registration_Info_UEnum_AnimPhysSimSpaceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2687138646U) },
		{ ESphericalLimitType_StaticEnum, TEXT("ESphericalLimitType"), &Z_Registration_Info_UEnum_ESphericalLimitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1502951913U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_Statics::ScriptStructInfo[] = {
		{ FAnimPhysConstraintSetup::StaticStruct, Z_Construct_UScriptStruct_FAnimPhysConstraintSetup_Statics::NewStructOps, TEXT("AnimPhysConstraintSetup"), &Z_Registration_Info_UScriptStruct_AnimPhysConstraintSetup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimPhysConstraintSetup), 3574477019U) },
		{ FAnimPhysPlanarLimit::StaticStruct, Z_Construct_UScriptStruct_FAnimPhysPlanarLimit_Statics::NewStructOps, TEXT("AnimPhysPlanarLimit"), &Z_Registration_Info_UScriptStruct_AnimPhysPlanarLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimPhysPlanarLimit), 1312969378U) },
		{ FAnimPhysSphericalLimit::StaticStruct, Z_Construct_UScriptStruct_FAnimPhysSphericalLimit_Statics::NewStructOps, TEXT("AnimPhysSphericalLimit"), &Z_Registration_Info_UScriptStruct_AnimPhysSphericalLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimPhysSphericalLimit), 88252527U) },
		{ FAnimPhysBodyDefinition::StaticStruct, Z_Construct_UScriptStruct_FAnimPhysBodyDefinition_Statics::NewStructOps, TEXT("AnimPhysBodyDefinition"), &Z_Registration_Info_UScriptStruct_AnimPhysBodyDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimPhysBodyDefinition), 517694751U) },
		{ FAnimNode_AnimDynamics::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_AnimDynamics_Statics::NewStructOps, TEXT("AnimNode_AnimDynamics"), &Z_Registration_Info_UScriptStruct_AnimNode_AnimDynamics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_AnimDynamics), 1006801442U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_2286156003(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_AnimDynamics_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
