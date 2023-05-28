// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_FootPlacement.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_FootPlacement() {}
// Cross Module References
	ANIMATIONWARPINGRUNTIME_API UEnum* Z_Construct_UEnum_AnimationWarpingRuntime_EActorMovementCompensationMode();
	ANIMATIONWARPINGRUNTIME_API UEnum* Z_Construct_UEnum_AnimationWarpingRuntime_EFootPlacementLockType();
	ANIMATIONWARPINGRUNTIME_API UEnum* Z_Construct_UEnum_AnimationWarpingRuntime_EPelvisHeightMode();
	ANIMATIONWARPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_FootPlacement();
	ANIMATIONWARPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFootPlacemenLegDefinition();
	ANIMATIONWARPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings();
	ANIMATIONWARPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFootPlacementPelvisSettings();
	ANIMATIONWARPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFootPlacementPlantSettings();
	ANIMATIONWARPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFootPlacementRootDefinition();
	ANIMATIONWARPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFootPlacementTraceSettings();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_AnimationWarpingRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFootPlacementLockType;
	static UEnum* EFootPlacementLockType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFootPlacementLockType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFootPlacementLockType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimationWarpingRuntime_EFootPlacementLockType, (UObject*)Z_Construct_UPackage__Script_AnimationWarpingRuntime(), TEXT("EFootPlacementLockType"));
		}
		return Z_Registration_Info_UEnum_EFootPlacementLockType.OuterSingleton;
	}
	template<> ANIMATIONWARPINGRUNTIME_API UEnum* StaticEnum<EFootPlacementLockType>()
	{
		return EFootPlacementLockType_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimationWarpingRuntime_EFootPlacementLockType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimationWarpingRuntime_EFootPlacementLockType_Statics::Enumerators[] = {
		{ "EFootPlacementLockType::Unlocked", (int64)EFootPlacementLockType::Unlocked },
		{ "EFootPlacementLockType::PivotAroundBall", (int64)EFootPlacementLockType::PivotAroundBall },
		{ "EFootPlacementLockType::PivotAroundAnkle", (int64)EFootPlacementLockType::PivotAroundAnkle },
		{ "EFootPlacementLockType::LockRotation", (int64)EFootPlacementLockType::LockRotation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimationWarpingRuntime_EFootPlacementLockType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LockRotation.Comment", "// Foot is fully locked. Useful for bigger/mechanical creatures\n" },
		{ "LockRotation.Name", "EFootPlacementLockType::LockRotation" },
		{ "LockRotation.ToolTip", "Foot is fully locked. Useful for bigger/mechanical creatures" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "PivotAroundAnkle.Comment", "// Foot can lock, and will pivot around the ankle/foot bone.\n" },
		{ "PivotAroundAnkle.Name", "EFootPlacementLockType::PivotAroundAnkle" },
		{ "PivotAroundAnkle.ToolTip", "Foot can lock, and will pivot around the ankle/foot bone." },
		{ "PivotAroundBall.Comment", "// Foot can lock, and will pivot around its ball/toes.\n" },
		{ "PivotAroundBall.Name", "EFootPlacementLockType::PivotAroundBall" },
		{ "PivotAroundBall.ToolTip", "Foot can lock, and will pivot around its ball/toes." },
		{ "Unlocked.Comment", "// Foot is unlocked but free to move\n" },
		{ "Unlocked.Name", "EFootPlacementLockType::Unlocked" },
		{ "Unlocked.ToolTip", "Foot is unlocked but free to move" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimationWarpingRuntime_EFootPlacementLockType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimationWarpingRuntime,
		nullptr,
		"EFootPlacementLockType",
		"EFootPlacementLockType",
		Z_Construct_UEnum_AnimationWarpingRuntime_EFootPlacementLockType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationWarpingRuntime_EFootPlacementLockType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimationWarpingRuntime_EFootPlacementLockType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationWarpingRuntime_EFootPlacementLockType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimationWarpingRuntime_EFootPlacementLockType()
	{
		if (!Z_Registration_Info_UEnum_EFootPlacementLockType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFootPlacementLockType.InnerSingleton, Z_Construct_UEnum_AnimationWarpingRuntime_EFootPlacementLockType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFootPlacementLockType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FootPlacementInterpolationSettings;
class UScriptStruct* FFootPlacementInterpolationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FootPlacementInterpolationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FootPlacementInterpolationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings, (UObject*)Z_Construct_UPackage__Script_AnimationWarpingRuntime(), TEXT("FootPlacementInterpolationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FootPlacementInterpolationSettings.OuterSingleton;
}
template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<FFootPlacementInterpolationSettings>()
{
	return FFootPlacementInterpolationSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnplantLinearStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnplantLinearStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnplantLinearDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnplantLinearDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnplantAngularStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnplantAngularStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnplantAngularDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnplantAngularDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorLinearStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorLinearStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorLinearDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorLinearDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorAngularStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorAngularStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorAngularDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorAngularDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFloorInterpolation_MetaData[];
#endif
		static void NewProp_bEnableFloorInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFloorInterpolation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootPlacementInterpolationSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantLinearStiffness_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantLinearStiffness = { "UnplantLinearStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementInterpolationSettings, UnplantLinearStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantLinearStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantLinearStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantLinearDamping_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantLinearDamping = { "UnplantLinearDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementInterpolationSettings, UnplantLinearDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantLinearDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantLinearDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantAngularStiffness_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantAngularStiffness = { "UnplantAngularStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementInterpolationSettings, UnplantAngularStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantAngularStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantAngularStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantAngularDamping_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantAngularDamping = { "UnplantAngularDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementInterpolationSettings, UnplantAngularDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantAngularDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantAngularDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorLinearStiffness_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "DisplayAfter", "bEnableFloorInterpolation" },
		{ "EditCondition", "bEnableFloorInterpolation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorLinearStiffness = { "FloorLinearStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementInterpolationSettings, FloorLinearStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorLinearStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorLinearStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorLinearDamping_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "DisplayAfter", "bEnableFloorInterpolation" },
		{ "EditCondition", "bEnableFloorInterpolation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorLinearDamping = { "FloorLinearDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementInterpolationSettings, FloorLinearDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorLinearDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorLinearDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorAngularStiffness_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "DisplayAfter", "bEnableFloorInterpolation" },
		{ "EditCondition", "bEnableFloorInterpolation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorAngularStiffness = { "FloorAngularStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementInterpolationSettings, FloorAngularStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorAngularStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorAngularStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorAngularDamping_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "DisplayAfter", "bEnableFloorInterpolation" },
		{ "EditCondition", "bEnableFloorInterpolation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorAngularDamping = { "FloorAngularDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementInterpolationSettings, FloorAngularDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorAngularDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorAngularDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_bEnableFloorInterpolation_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_bEnableFloorInterpolation_SetBit(void* Obj)
	{
		((FFootPlacementInterpolationSettings*)Obj)->bEnableFloorInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_bEnableFloorInterpolation = { "bEnableFloorInterpolation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFootPlacementInterpolationSettings), &Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_bEnableFloorInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_bEnableFloorInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_bEnableFloorInterpolation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantLinearStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantLinearDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantAngularStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_UnplantAngularDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorLinearStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorLinearDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorAngularStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_FloorAngularDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewProp_bEnableFloorInterpolation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationWarpingRuntime,
		nullptr,
		&NewStructOps,
		"FootPlacementInterpolationSettings",
		sizeof(FFootPlacementInterpolationSettings),
		alignof(FFootPlacementInterpolationSettings),
		Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_FootPlacementInterpolationSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FootPlacementInterpolationSettings.InnerSingleton, Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FootPlacementInterpolationSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FootPlacementTraceSettings;
class UScriptStruct* FFootPlacementTraceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FootPlacementTraceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FootPlacementTraceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootPlacementTraceSettings, (UObject*)Z_Construct_UPackage__Script_AnimationWarpingRuntime(), TEXT("FootPlacementTraceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FootPlacementTraceSettings.OuterSingleton;
}
template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<FFootPlacementTraceSettings>()
{
	return FFootPlacementTraceSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SweepRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComplexTraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ComplexTraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxGroundPenetration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxGroundPenetration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimpleCollisionInfluence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimpleCollisionInfluence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimpleTraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimpleTraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootPlacementTraceSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_StartOffset_MetaData[] = {
		{ "Category", "Trace Settings" },
		{ "Comment", "// A negative value extends the trace length above the bone\n" },
		{ "DisplayAfter", "bEnabled" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "A negative value extends the trace length above the bone" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_StartOffset = { "StartOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementTraceSettings, StartOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_StartOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_StartOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_EndOffset_MetaData[] = {
		{ "Category", "Trace Settings" },
		{ "Comment", "// A positive value extends the trace length below the bone\n" },
		{ "DisplayAfter", "bEnabled" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "A positive value extends the trace length below the bone" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_EndOffset = { "EndOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementTraceSettings, EndOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_EndOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_EndOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_SweepRadius_MetaData[] = {
		{ "Category", "Trace Settings" },
		{ "Comment", "// The trace is a sphere sweep with this radius. It should be big enough to prevent the trace from going through \n// small geometry gaps\n" },
		{ "DisplayAfter", "bEnabled" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "The trace is a sphere sweep with this radius. It should be big enough to prevent the trace from going through\nsmall geometry gaps" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_SweepRadius = { "SweepRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementTraceSettings, SweepRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_SweepRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_SweepRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_ComplexTraceChannel_MetaData[] = {
		{ "Category", "Trace Settings" },
		{ "Comment", "// The channel to use for our complex trace\n" },
		{ "DisplayAfter", "bEnabled" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "The channel to use for our complex trace" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_ComplexTraceChannel = { "ComplexTraceChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementTraceSettings, ComplexTraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_ComplexTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_ComplexTraceChannel_MetaData)) }; // 2906040657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_MaxGroundPenetration_MetaData[] = {
		{ "Category", "Trace Settings" },
		{ "Comment", "// How much the feet can penetrate the ground geometry. It's recommended to allow some to account for interpolation\n// Negative values disable this effect\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "How much the feet can penetrate the ground geometry. It's recommended to allow some to account for interpolation\nNegative values disable this effect" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_MaxGroundPenetration = { "MaxGroundPenetration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementTraceSettings, MaxGroundPenetration), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_MaxGroundPenetration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_MaxGroundPenetration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_SimpleCollisionInfluence_MetaData[] = {
		{ "Category", "Trace Settings" },
		{ "Comment", "// How much we align to simple vs complex collision when the foot is in flight\n// Tracing against simple geometry (i.e. it's common for stairs to have simplified ramp collisions) can provide a \n// smoother trajectory when the foot is in flight\n" },
		{ "DisplayAfter", "bEnabled" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "How much we align to simple vs complex collision when the foot is in flight\nTracing against simple geometry (i.e. it's common for stairs to have simplified ramp collisions) can provide a\nsmoother trajectory when the foot is in flight" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_SimpleCollisionInfluence = { "SimpleCollisionInfluence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementTraceSettings, SimpleCollisionInfluence), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_SimpleCollisionInfluence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_SimpleCollisionInfluence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_SimpleTraceChannel_MetaData[] = {
		{ "Category", "Trace Settings" },
		{ "Comment", "// The channel to use for our simple trace\n" },
		{ "DisplayAfter", "bEnabled" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "The channel to use for our simple trace" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_SimpleTraceChannel = { "SimpleTraceChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementTraceSettings, SimpleTraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_SimpleTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_SimpleTraceChannel_MetaData)) }; // 2906040657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Trace Settings" },
		{ "Comment", "// Enabling tracing for ground alignment\n// @TODO: Use ground normal when not tracing\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "Enabling tracing for ground alignment\n@TODO: Use ground normal when not tracing" },
	};
#endif
	void Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FFootPlacementTraceSettings*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFootPlacementTraceSettings), &Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_StartOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_EndOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_SweepRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_ComplexTraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_MaxGroundPenetration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_SimpleCollisionInfluence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_SimpleTraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewProp_bEnabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationWarpingRuntime,
		nullptr,
		&NewStructOps,
		"FootPlacementTraceSettings",
		sizeof(FFootPlacementTraceSettings),
		alignof(FFootPlacementTraceSettings),
		Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFootPlacementTraceSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_FootPlacementTraceSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FootPlacementTraceSettings.InnerSingleton, Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FootPlacementTraceSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FootPlacementRootDefinition;
class UScriptStruct* FFootPlacementRootDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FootPlacementRootDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FootPlacementRootDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootPlacementRootDefinition, (UObject*)Z_Construct_UPackage__Script_AnimationWarpingRuntime(), TEXT("FootPlacementRootDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_FootPlacementRootDefinition.OuterSingleton;
}
template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<FFootPlacementRootDefinition>()
{
	return FFootPlacementRootDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PelvisBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKRootBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKRootBone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootPlacementRootDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::NewProp_PelvisBone_MetaData[] = {
		{ "Category", "Pelvis Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::NewProp_PelvisBone = { "PelvisBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementRootDefinition, PelvisBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::NewProp_PelvisBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::NewProp_PelvisBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::NewProp_IKRootBone_MetaData[] = {
		{ "Category", "Pelvis Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::NewProp_IKRootBone = { "IKRootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementRootDefinition, IKRootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::NewProp_IKRootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::NewProp_IKRootBone_MetaData)) }; // 2906976723
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::NewProp_PelvisBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::NewProp_IKRootBone,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationWarpingRuntime,
		nullptr,
		&NewStructOps,
		"FootPlacementRootDefinition",
		sizeof(FFootPlacementRootDefinition),
		alignof(FFootPlacementRootDefinition),
		Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFootPlacementRootDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_FootPlacementRootDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FootPlacementRootDefinition.InnerSingleton, Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FootPlacementRootDefinition.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPelvisHeightMode;
	static UEnum* EPelvisHeightMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPelvisHeightMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPelvisHeightMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimationWarpingRuntime_EPelvisHeightMode, (UObject*)Z_Construct_UPackage__Script_AnimationWarpingRuntime(), TEXT("EPelvisHeightMode"));
		}
		return Z_Registration_Info_UEnum_EPelvisHeightMode.OuterSingleton;
	}
	template<> ANIMATIONWARPINGRUNTIME_API UEnum* StaticEnum<EPelvisHeightMode>()
	{
		return EPelvisHeightMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimationWarpingRuntime_EPelvisHeightMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimationWarpingRuntime_EPelvisHeightMode_Statics::Enumerators[] = {
		{ "EPelvisHeightMode::AllLegs", (int64)EPelvisHeightMode::AllLegs },
		{ "EPelvisHeightMode::AllPlantedFeet", (int64)EPelvisHeightMode::AllPlantedFeet },
		{ "EPelvisHeightMode::FrontPlantedFeetUphill_FrontFeetDownhill", (int64)EPelvisHeightMode::FrontPlantedFeetUphill_FrontFeetDownhill },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimationWarpingRuntime_EPelvisHeightMode_Statics::Enum_MetaDataParams[] = {
		{ "AllLegs.Comment", "// Consider all legs for pelvis height, whether they're planted or not\n// Generally good for flat/not too steep ground\n" },
		{ "AllLegs.Name", "EPelvisHeightMode::AllLegs" },
		{ "AllLegs.ToolTip", "Consider all legs for pelvis height, whether they're planted or not\nGenerally good for flat/not too steep ground" },
		{ "AllPlantedFeet.Comment", "// Consider only the planted feet when calculating pelvis height\n// Generally good we pelvis height to be defined by the weight supporting leg\n" },
		{ "AllPlantedFeet.Name", "EPelvisHeightMode::AllPlantedFeet" },
		{ "AllPlantedFeet.ToolTip", "Consider only the planted feet when calculating pelvis height\nGenerally good we pelvis height to be defined by the weight supporting leg" },
		{ "BlueprintType", "true" },
		{ "FrontPlantedFeetUphill_FrontFeetDownhill.Comment", "// When moving uphill, use the front foot, as long as it's planted.\n// It's recommended to also enable pelvis interpolation to smooth out the swap between what's considered the \"planted\" leg\n// When moving downhill, both feet will be considered relevant.\n// The algorithm tends to prefer the lower foot, except when the higher foot would become over-compresseed.\n" },
		{ "FrontPlantedFeetUphill_FrontFeetDownhill.Name", "EPelvisHeightMode::FrontPlantedFeetUphill_FrontFeetDownhill" },
		{ "FrontPlantedFeetUphill_FrontFeetDownhill.ToolTip", "When moving uphill, use the front foot, as long as it's planted.\nIt's recommended to also enable pelvis interpolation to smooth out the swap between what's considered the \"planted\" leg\nWhen moving downhill, both feet will be considered relevant.\nThe algorithm tends to prefer the lower foot, except when the higher foot would become over-compresseed." },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimationWarpingRuntime_EPelvisHeightMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimationWarpingRuntime,
		nullptr,
		"EPelvisHeightMode",
		"EPelvisHeightMode",
		Z_Construct_UEnum_AnimationWarpingRuntime_EPelvisHeightMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationWarpingRuntime_EPelvisHeightMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimationWarpingRuntime_EPelvisHeightMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationWarpingRuntime_EPelvisHeightMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimationWarpingRuntime_EPelvisHeightMode()
	{
		if (!Z_Registration_Info_UEnum_EPelvisHeightMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPelvisHeightMode.InnerSingleton, Z_Construct_UEnum_AnimationWarpingRuntime_EPelvisHeightMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPelvisHeightMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActorMovementCompensationMode;
	static UEnum* EActorMovementCompensationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EActorMovementCompensationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EActorMovementCompensationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimationWarpingRuntime_EActorMovementCompensationMode, (UObject*)Z_Construct_UPackage__Script_AnimationWarpingRuntime(), TEXT("EActorMovementCompensationMode"));
		}
		return Z_Registration_Info_UEnum_EActorMovementCompensationMode.OuterSingleton;
	}
	template<> ANIMATIONWARPINGRUNTIME_API UEnum* StaticEnum<EActorMovementCompensationMode>()
	{
		return EActorMovementCompensationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimationWarpingRuntime_EActorMovementCompensationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimationWarpingRuntime_EActorMovementCompensationMode_Statics::Enumerators[] = {
		{ "EActorMovementCompensationMode::ComponentSpace", (int64)EActorMovementCompensationMode::ComponentSpace },
		{ "EActorMovementCompensationMode::WorldSpace", (int64)EActorMovementCompensationMode::WorldSpace },
		{ "EActorMovementCompensationMode::SuddenMotionOnly", (int64)EActorMovementCompensationMode::SuddenMotionOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimationWarpingRuntime_EActorMovementCompensationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ComponentSpace.Comment", "// Keep pelvis component-space and follow along all of the actor's vertical ground movement\n" },
		{ "ComponentSpace.Name", "EActorMovementCompensationMode::ComponentSpace" },
		{ "ComponentSpace.ToolTip", "Keep pelvis component-space and follow along all of the actor's vertical ground movement" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "SuddenMotionOnly.Comment", "// Keep pelvis component-space, but hold world-space transform when the actor does sudden changes (i.e. a big step), and let springs interpolate the difference.\n" },
		{ "SuddenMotionOnly.Name", "EActorMovementCompensationMode::SuddenMotionOnly" },
		{ "SuddenMotionOnly.ToolTip", "Keep pelvis component-space, but hold world-space transform when the actor does sudden changes (i.e. a big step), and let springs interpolate the difference." },
		{ "WorldSpace.Comment", "// Hold pelvis world-space and ignore the actor's vertical ground movement. Let springs interpolate the difference\n" },
		{ "WorldSpace.Name", "EActorMovementCompensationMode::WorldSpace" },
		{ "WorldSpace.ToolTip", "Hold pelvis world-space and ignore the actor's vertical ground movement. Let springs interpolate the difference" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimationWarpingRuntime_EActorMovementCompensationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimationWarpingRuntime,
		nullptr,
		"EActorMovementCompensationMode",
		"EActorMovementCompensationMode",
		Z_Construct_UEnum_AnimationWarpingRuntime_EActorMovementCompensationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationWarpingRuntime_EActorMovementCompensationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimationWarpingRuntime_EActorMovementCompensationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationWarpingRuntime_EActorMovementCompensationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimationWarpingRuntime_EActorMovementCompensationMode()
	{
		if (!Z_Registration_Info_UEnum_EActorMovementCompensationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActorMovementCompensationMode.InnerSingleton, Z_Construct_UEnum_AnimationWarpingRuntime_EActorMovementCompensationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EActorMovementCompensationMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FootPlacementPelvisSettings;
class UScriptStruct* FFootPlacementPelvisSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FootPlacementPelvisSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FootPlacementPelvisSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings, (UObject*)Z_Construct_UPackage__Script_AnimationWarpingRuntime(), TEXT("FootPlacementPelvisSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FootPlacementPelvisSettings.OuterSingleton;
}
template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<FFootPlacementPelvisSettings>()
{
	return FFootPlacementPelvisSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearStiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearStiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinearDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LinearDamping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalRebalancingWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalRebalancingWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxOffsetHorizontal_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxOffsetHorizontal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeelLiftRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeelLiftRatio;
		static const UECodeGen_Private::FBytePropertyParams NewProp_PelvisHeightMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisHeightMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PelvisHeightMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActorMovementCompensationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorMovementCompensationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActorMovementCompensationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableInterpolation_MetaData[];
#endif
		static void NewProp_bEnableInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableInterpolation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootPlacementPelvisSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_MaxOffset_MetaData[] = {
		{ "Category", "Pelvis Settings" },
		{ "Comment", "// Max vertical offset from the input pose for the Pelvis.\n// Reaching this limit means the feet may not reach their plant plane\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "Max vertical offset from the input pose for the Pelvis.\nReaching this limit means the feet may not reach their plant plane" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_MaxOffset = { "MaxOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPelvisSettings, MaxOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_MaxOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_MaxOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_LinearStiffness_MetaData[] = {
		{ "Category", "Pelvis Settings" },
		{ "DisplayAfter", "bEnableInterpolation" },
		{ "EditCondition", "bEnableInterpolation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_LinearStiffness = { "LinearStiffness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPelvisSettings, LinearStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_LinearStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_LinearStiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_LinearDamping_MetaData[] = {
		{ "Category", "Pelvis Settings" },
		{ "DisplayAfter", "bEnableInterpolation" },
		{ "EditCondition", "bEnableInterpolation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_LinearDamping = { "LinearDamping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPelvisSettings, LinearDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_LinearDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_LinearDamping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_HorizontalRebalancingWeight_MetaData[] = {
		{ "Category", "Pelvis Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much we move the pelvis horizontally to re-balance the characters weight due to foot offsets.\n// A value of 0 will disable this effect.\n// Higher values may move the mesh outside of the character's capsule\n" },
		{ "DisplayAfter", "bEnableInterpolation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "How much we move the pelvis horizontally to re-balance the characters weight due to foot offsets.\nA value of 0 will disable this effect.\nHigher values may move the mesh outside of the character's capsule" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_HorizontalRebalancingWeight = { "HorizontalRebalancingWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPelvisSettings, HorizontalRebalancingWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_HorizontalRebalancingWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_HorizontalRebalancingWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_MaxOffsetHorizontal_MetaData[] = {
		{ "Category", "Pelvis Settings" },
		{ "Comment", "// Max horizontal foot adjustment we consider to lower the hips\n// This can be used to prevent the hips from dropping too low when the feet are locked\n// Exceeding this value will first attempt to roll the planted feet, and then slide\n" },
		{ "DisplayAfter", "bEnableInterpolation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "Max horizontal foot adjustment we consider to lower the hips\nThis can be used to prevent the hips from dropping too low when the feet are locked\nExceeding this value will first attempt to roll the planted feet, and then slide" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_MaxOffsetHorizontal = { "MaxOffsetHorizontal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPelvisSettings, MaxOffsetHorizontal), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_MaxOffsetHorizontal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_MaxOffsetHorizontal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_HeelLiftRatio_MetaData[] = {
		{ "Category", "Pelvis Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much we prefer lifting the heel before dropping the hips to achieve the desired pose.\n// 1 fully favors heel lift first.\n// 0 fully favors pelvis drop first.\n" },
		{ "DisplayAfter", "bEnableInterpolation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "How much we prefer lifting the heel before dropping the hips to achieve the desired pose.\n1 fully favors heel lift first.\n0 fully favors pelvis drop first." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_HeelLiftRatio = { "HeelLiftRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPelvisSettings, HeelLiftRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_HeelLiftRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_HeelLiftRatio_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_PelvisHeightMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_PelvisHeightMode_MetaData[] = {
		{ "Category", "Pelvis Settings" },
		{ "DisplayAfter", "bEnableInterpolation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_PelvisHeightMode = { "PelvisHeightMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPelvisSettings, PelvisHeightMode), Z_Construct_UEnum_AnimationWarpingRuntime_EPelvisHeightMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_PelvisHeightMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_PelvisHeightMode_MetaData)) }; // 4039819913
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_ActorMovementCompensationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_ActorMovementCompensationMode_MetaData[] = {
		{ "Category", "Pelvis Settings" },
		{ "Comment", "// This is used to hold the Pelvis's interpolator in a fixed spot when the capsule moves up/down\n// If your camera is directly attached to the character with little to no smoothing, you may want this on ComponentSpace\n" },
		{ "DisplayAfter", "bEnableInterpolation" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "This is used to hold the Pelvis's interpolator in a fixed spot when the capsule moves up/down\nIf your camera is directly attached to the character with little to no smoothing, you may want this on ComponentSpace" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_ActorMovementCompensationMode = { "ActorMovementCompensationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPelvisSettings, ActorMovementCompensationMode), Z_Construct_UEnum_AnimationWarpingRuntime_EActorMovementCompensationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_ActorMovementCompensationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_ActorMovementCompensationMode_MetaData)) }; // 1127123913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_bEnableInterpolation_MetaData[] = {
		{ "Category", "Pelvis Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_bEnableInterpolation_SetBit(void* Obj)
	{
		((FFootPlacementPelvisSettings*)Obj)->bEnableInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_bEnableInterpolation = { "bEnableInterpolation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFootPlacementPelvisSettings), &Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_bEnableInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_bEnableInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_bEnableInterpolation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_MaxOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_LinearStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_LinearDamping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_HorizontalRebalancingWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_MaxOffsetHorizontal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_HeelLiftRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_PelvisHeightMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_PelvisHeightMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_ActorMovementCompensationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_ActorMovementCompensationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewProp_bEnableInterpolation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationWarpingRuntime,
		nullptr,
		&NewStructOps,
		"FootPlacementPelvisSettings",
		sizeof(FFootPlacementPelvisSettings),
		alignof(FFootPlacementPelvisSettings),
		Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFootPlacementPelvisSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_FootPlacementPelvisSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FootPlacementPelvisSettings.InnerSingleton, Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FootPlacementPelvisSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FootPlacemenLegDefinition;
class UScriptStruct* FFootPlacemenLegDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FootPlacemenLegDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FootPlacemenLegDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootPlacemenLegDefinition, (UObject*)Z_Construct_UPackage__Script_AnimationWarpingRuntime(), TEXT("FootPlacemenLegDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_FootPlacemenLegDefinition.OuterSingleton;
}
template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<FFootPlacemenLegDefinition>()
{
	return FFootPlacemenLegDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FKFootBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FKFootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKFootBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKFootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BallBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BallBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumBonesInLimb_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumBonesInLimb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpeedCurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableLockCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DisableLockCurveName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootPlacemenLegDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_FKFootBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Bone to be planted. For feet, use the heel/ankle joint.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "Bone to be planted. For feet, use the heel/ankle joint." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_FKFootBone = { "FKFootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacemenLegDefinition, FKFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_FKFootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_FKFootBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_IKFootBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// TODO: can we optionally output as an attribute?\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "TODO: can we optionally output as an attribute?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_IKFootBone = { "IKFootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacemenLegDefinition, IKFootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_IKFootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_IKFootBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_BallBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Secondary plant bone. For feet, use the ball joint.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "Secondary plant bone. For feet, use the ball joint." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_BallBone = { "BallBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacemenLegDefinition, BallBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_BallBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_BallBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_NumBonesInLimb_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_NumBonesInLimb = { "NumBonesInLimb", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacemenLegDefinition, NumBonesInLimb), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_NumBonesInLimb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_NumBonesInLimb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_SpeedCurveName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Name of the curve representing the foot/ball speed. Not required in Graph speed mode\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "Name of the curve representing the foot/ball speed. Not required in Graph speed mode" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_SpeedCurveName = { "SpeedCurveName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacemenLegDefinition, SpeedCurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_SpeedCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_SpeedCurveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_DisableLockCurveName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Name of the curve representing the alpha of the locking alpha.\n// This allows you to disable locking precisely, instead of relying on the procedural mechanism based on springs and foot analysis\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "Name of the curve representing the alpha of the locking alpha.\nThis allows you to disable locking precisely, instead of relying on the procedural mechanism based on springs and foot analysis" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_DisableLockCurveName = { "DisableLockCurveName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacemenLegDefinition, DisableLockCurveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_DisableLockCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_DisableLockCurveName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_FKFootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_IKFootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_BallBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_NumBonesInLimb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_SpeedCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewProp_DisableLockCurveName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationWarpingRuntime,
		nullptr,
		&NewStructOps,
		"FootPlacemenLegDefinition",
		sizeof(FFootPlacemenLegDefinition),
		alignof(FFootPlacemenLegDefinition),
		Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFootPlacemenLegDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_FootPlacemenLegDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FootPlacemenLegDefinition.InnerSingleton, Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FootPlacemenLegDefinition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FootPlacementPlantSettings;
class UScriptStruct* FFootPlacementPlantSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FootPlacementPlantSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FootPlacementPlantSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootPlacementPlantSettings, (UObject*)Z_Construct_UPackage__Script_AnimationWarpingRuntime(), TEXT("FootPlacementPlantSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FootPlacementPlantSettings.OuterSingleton;
}
template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<FFootPlacementPlantSettings>()
{
	return FFootPlacementPlantSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToGround_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToGround;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LockType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LockType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnplantRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnplantRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplantRadiusRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReplantRadiusRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnplantAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnplantAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplantAngleRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReplantAngleRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxExtensionRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxExtensionRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinExtensionRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinExtensionRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeparatingDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SeparatingDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnalignmentSpeedThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnalignmentSpeedThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnkleTwistReduction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnkleTwistReduction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdjustHeelBeforePlanting_MetaData[];
#endif
		static void NewProp_bAdjustHeelBeforePlanting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdjustHeelBeforePlanting;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootPlacementPlantSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_SpeedThreshold_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "Comment", "// Bone is considered planted below this speed. Value is obtained from FKSpeedCurveName\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "Bone is considered planted below this speed. Value is obtained from FKSpeedCurveName" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_SpeedThreshold = { "SpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPlantSettings, SpeedThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_SpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_SpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_DistanceToGround_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "Comment", "// At this distance from the planting plane the bone is considered planted and will be fully aligned.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "At this distance from the planting plane the bone is considered planted and will be fully aligned." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_DistanceToGround = { "DistanceToGround", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPlantSettings, DistanceToGround), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_DistanceToGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_DistanceToGround_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_LockType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_LockType_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_LockType = { "LockType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPlantSettings, LockType), Z_Construct_UEnum_AnimationWarpingRuntime_EFootPlacementLockType, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_LockType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_LockType_MetaData)) }; // 1540336169
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_UnplantRadius_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "Comment", "// How much linear deviation causes the constraint to be released\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "How much linear deviation causes the constraint to be released" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_UnplantRadius = { "UnplantRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPlantSettings, UnplantRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_UnplantRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_UnplantRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_ReplantRadiusRatio_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Below this value, proportional to UnplantRadius, the bone will replant\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "Below this value, proportional to UnplantRadius, the bone will replant" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_ReplantRadiusRatio = { "ReplantRadiusRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPlantSettings, ReplantRadiusRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_ReplantRadiusRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_ReplantRadiusRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_UnplantAngle_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "Comment", "// How much angular deviation (in degrees) causes the constraint to be released for replant\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "How much angular deviation (in degrees) causes the constraint to be released for replant" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_UnplantAngle = { "UnplantAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPlantSettings, UnplantAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_UnplantAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_UnplantAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_ReplantAngleRatio_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Below this value, proportional to UnplantAngle, the bone will replant\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "Below this value, proportional to UnplantAngle, the bone will replant" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_ReplantAngleRatio = { "ReplantAngleRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPlantSettings, ReplantAngleRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_ReplantAngleRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_ReplantAngleRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_MaxExtensionRatio_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Max extension ratio of the chain, calculated from the remaining length between current pose and full limb extension\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "Max extension ratio of the chain, calculated from the remaining length between current pose and full limb extension" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_MaxExtensionRatio = { "MaxExtensionRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPlantSettings, MaxExtensionRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_MaxExtensionRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_MaxExtensionRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_MinExtensionRatio_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Min extension ratio of the chain, calculated from the total limb length, and adjusted along the approach direction\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "Min extension ratio of the chain, calculated from the total limb length, and adjusted along the approach direction" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_MinExtensionRatio = { "MinExtensionRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPlantSettings, MinExtensionRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_MinExtensionRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_MinExtensionRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_SeparatingDistance_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The minimum distance the feet can be from the plane that separates the feet. \n// Value of 0 disables this\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "The minimum distance the feet can be from the plane that separates the feet.\nValue of 0 disables this" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_SeparatingDistance = { "SeparatingDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPlantSettings, SeparatingDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_SeparatingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_SeparatingDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_UnalignmentSpeedThreshold_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "Comment", "// Speed at which we transition to fully unplanted.\n// The range between SpeedThreshold and UnalignmentSpeedThreshold should roughly represent the roll-phase of the foot\n// TODO: This feels innaccurate most of the time, and varies depending on anim speed. Improve this\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "Speed at which we transition to fully unplanted.\nThe range between SpeedThreshold and UnalignmentSpeedThreshold should roughly represent the roll-phase of the foot\nTODO: This feels innaccurate most of the time, and varies depending on anim speed. Improve this" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_UnalignmentSpeedThreshold = { "UnalignmentSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPlantSettings, UnalignmentSpeedThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_UnalignmentSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_UnalignmentSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_AnkleTwistReduction_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How much we reduce the procedural ankle twist adjustment used to align the foot to the ground slope.\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "How much we reduce the procedural ankle twist adjustment used to align the foot to the ground slope." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_AnkleTwistReduction = { "AnkleTwistReduction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFootPlacementPlantSettings, AnkleTwistReduction), METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_AnkleTwistReduction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_AnkleTwistReduction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_bAdjustHeelBeforePlanting_MetaData[] = {
		{ "Category", "Plant Settings" },
		{ "Comment", "// Whether to allow adjusting the heel lift before we plant\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "Whether to allow adjusting the heel lift before we plant" },
	};
#endif
	void Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_bAdjustHeelBeforePlanting_SetBit(void* Obj)
	{
		((FFootPlacementPlantSettings*)Obj)->bAdjustHeelBeforePlanting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_bAdjustHeelBeforePlanting = { "bAdjustHeelBeforePlanting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FFootPlacementPlantSettings), &Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_bAdjustHeelBeforePlanting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_bAdjustHeelBeforePlanting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_bAdjustHeelBeforePlanting_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_SpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_DistanceToGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_LockType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_LockType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_UnplantRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_ReplantRadiusRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_UnplantAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_ReplantAngleRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_MaxExtensionRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_MinExtensionRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_SeparatingDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_UnalignmentSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_AnkleTwistReduction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewProp_bAdjustHeelBeforePlanting,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationWarpingRuntime,
		nullptr,
		&NewStructOps,
		"FootPlacementPlantSettings",
		sizeof(FFootPlacementPlantSettings),
		alignof(FFootPlacementPlantSettings),
		Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFootPlacementPlantSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_FootPlacementPlantSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FootPlacementPlantSettings.InnerSingleton, Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FootPlacementPlantSettings.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_FootPlacement>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_FootPlacement cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_FootPlacement;
class UScriptStruct* FAnimNode_FootPlacement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_FootPlacement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_FootPlacement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_FootPlacement, (UObject*)Z_Construct_UPackage__Script_AnimationWarpingRuntime(), TEXT("AnimNode_FootPlacement"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_FootPlacement.OuterSingleton;
}
template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_FootPlacement>()
{
	return FAnimNode_FootPlacement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlantSpeedMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlantSpeedMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlantSpeedMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKFootRootBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IKFootRootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PelvisBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PelvisSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PelvisSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LegDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LegDefinitions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlantSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlantSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InterpolationSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TraceSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_FootPlacement>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PlantSpeedMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PlantSpeedMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Foot/Ball speed evaluation mode (Graph or Manual) used to decide when the feet are locked\n// Graph mode uses the root motion attribute from the animations to calculate the joint's speed\n// Manual mode uses a per-foot curve name representing the joint's speed\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "ToolTip", "Foot/Ball speed evaluation mode (Graph or Manual) used to decide when the feet are locked\nGraph mode uses the root motion attribute from the animations to calculate the joint's speed\nManual mode uses a per-foot curve name representing the joint's speed" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PlantSpeedMode = { "PlantSpeedMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_FootPlacement, PlantSpeedMode), Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PlantSpeedMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PlantSpeedMode_MetaData)) }; // 2839837007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_IKFootRootBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_IKFootRootBone = { "IKFootRootBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_FootPlacement, IKFootRootBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_IKFootRootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_IKFootRootBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PelvisBone_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PelvisBone = { "PelvisBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_FootPlacement, PelvisBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PelvisBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PelvisBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PelvisSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PelvisSettings = { "PelvisSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_FootPlacement, PelvisSettings), Z_Construct_UScriptStruct_FFootPlacementPelvisSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PelvisSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PelvisSettings_MetaData)) }; // 2220535668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_LegDefinitions_Inner = { "LegDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFootPlacemenLegDefinition, METADATA_PARAMS(nullptr, 0) }; // 2441074594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_LegDefinitions_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_LegDefinitions = { "LegDefinitions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_FootPlacement, LegDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_LegDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_LegDefinitions_MetaData)) }; // 2441074594
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PlantSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PlantSettings = { "PlantSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_FootPlacement, PlantSettings), Z_Construct_UScriptStruct_FFootPlacementPlantSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PlantSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PlantSettings_MetaData)) }; // 2459428730
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_InterpolationSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_InterpolationSettings = { "InterpolationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_FootPlacement, InterpolationSettings), Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_InterpolationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_InterpolationSettings_MetaData)) }; // 3321071715
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_TraceSettings_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_FootPlacement.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_TraceSettings = { "TraceSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_FootPlacement, TraceSettings), Z_Construct_UScriptStruct_FFootPlacementTraceSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_TraceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_TraceSettings_MetaData)) }; // 3577104452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PlantSpeedMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PlantSpeedMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_IKFootRootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PelvisBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PelvisSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_LegDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_LegDefinitions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_PlantSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_InterpolationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewProp_TraceSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationWarpingRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_FootPlacement",
		sizeof(FAnimNode_FootPlacement),
		alignof(FAnimNode_FootPlacement),
		Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_FootPlacement()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_FootPlacement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_FootPlacement.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_FootPlacement.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_Statics::EnumInfo[] = {
		{ EFootPlacementLockType_StaticEnum, TEXT("EFootPlacementLockType"), &Z_Registration_Info_UEnum_EFootPlacementLockType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1540336169U) },
		{ EPelvisHeightMode_StaticEnum, TEXT("EPelvisHeightMode"), &Z_Registration_Info_UEnum_EPelvisHeightMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4039819913U) },
		{ EActorMovementCompensationMode_StaticEnum, TEXT("EActorMovementCompensationMode"), &Z_Registration_Info_UEnum_EActorMovementCompensationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1127123913U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_Statics::ScriptStructInfo[] = {
		{ FFootPlacementInterpolationSettings::StaticStruct, Z_Construct_UScriptStruct_FFootPlacementInterpolationSettings_Statics::NewStructOps, TEXT("FootPlacementInterpolationSettings"), &Z_Registration_Info_UScriptStruct_FootPlacementInterpolationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFootPlacementInterpolationSettings), 3321071715U) },
		{ FFootPlacementTraceSettings::StaticStruct, Z_Construct_UScriptStruct_FFootPlacementTraceSettings_Statics::NewStructOps, TEXT("FootPlacementTraceSettings"), &Z_Registration_Info_UScriptStruct_FootPlacementTraceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFootPlacementTraceSettings), 3577104452U) },
		{ FFootPlacementRootDefinition::StaticStruct, Z_Construct_UScriptStruct_FFootPlacementRootDefinition_Statics::NewStructOps, TEXT("FootPlacementRootDefinition"), &Z_Registration_Info_UScriptStruct_FootPlacementRootDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFootPlacementRootDefinition), 3229498820U) },
		{ FFootPlacementPelvisSettings::StaticStruct, Z_Construct_UScriptStruct_FFootPlacementPelvisSettings_Statics::NewStructOps, TEXT("FootPlacementPelvisSettings"), &Z_Registration_Info_UScriptStruct_FootPlacementPelvisSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFootPlacementPelvisSettings), 2220535668U) },
		{ FFootPlacemenLegDefinition::StaticStruct, Z_Construct_UScriptStruct_FFootPlacemenLegDefinition_Statics::NewStructOps, TEXT("FootPlacemenLegDefinition"), &Z_Registration_Info_UScriptStruct_FootPlacemenLegDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFootPlacemenLegDefinition), 2441074594U) },
		{ FFootPlacementPlantSettings::StaticStruct, Z_Construct_UScriptStruct_FFootPlacementPlantSettings_Statics::NewStructOps, TEXT("FootPlacementPlantSettings"), &Z_Registration_Info_UScriptStruct_FootPlacementPlantSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFootPlacementPlantSettings), 2459428730U) },
		{ FAnimNode_FootPlacement::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_FootPlacement_Statics::NewStructOps, TEXT("AnimNode_FootPlacement"), &Z_Registration_Info_UScriptStruct_AnimNode_FootPlacement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_FootPlacement), 1768957967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_2729017979(TEXT("/Script/AnimationWarpingRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_FootPlacement_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
