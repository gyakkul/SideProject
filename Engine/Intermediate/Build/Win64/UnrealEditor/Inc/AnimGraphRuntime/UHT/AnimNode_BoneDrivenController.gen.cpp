// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_BoneDrivenController.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_BoneDrivenController() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDrivenBoneModificationMode;
	static UEnum* EDrivenBoneModificationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDrivenBoneModificationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDrivenBoneModificationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EDrivenBoneModificationMode"));
		}
		return Z_Registration_Info_UEnum_EDrivenBoneModificationMode.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EDrivenBoneModificationMode>()
	{
		return EDrivenBoneModificationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode_Statics::Enumerators[] = {
		{ "EDrivenBoneModificationMode::AddToInput", (int64)EDrivenBoneModificationMode::AddToInput },
		{ "EDrivenBoneModificationMode::ReplaceComponent", (int64)EDrivenBoneModificationMode::ReplaceComponent },
		{ "EDrivenBoneModificationMode::AddToRefPose", (int64)EDrivenBoneModificationMode::AddToRefPose },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode_Statics::Enum_MetaDataParams[] = {
		{ "AddToInput.Comment", "// Add the driven value to the input component value(s)\n" },
		{ "AddToInput.Name", "EDrivenBoneModificationMode::AddToInput" },
		{ "AddToInput.ToolTip", "Add the driven value to the input component value(s)" },
		{ "AddToRefPose.Comment", "// Add the driven value to the reference pose value\n" },
		{ "AddToRefPose.Name", "EDrivenBoneModificationMode::AddToRefPose" },
		{ "AddToRefPose.ToolTip", "Add the driven value to the reference pose value" },
		{ "Comment", "// The type of modification to make to the destination component(s)\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ReplaceComponent.Comment", "// Replace the input component value(s) with the driven value\n" },
		{ "ReplaceComponent.Name", "EDrivenBoneModificationMode::ReplaceComponent" },
		{ "ReplaceComponent.ToolTip", "Replace the input component value(s) with the driven value" },
		{ "ToolTip", "The type of modification to make to the destination component(s)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"EDrivenBoneModificationMode",
		"EDrivenBoneModificationMode",
		Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode()
	{
		if (!Z_Registration_Info_UEnum_EDrivenBoneModificationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDrivenBoneModificationMode.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDrivenBoneModificationMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDrivenDestinationMode;
	static UEnum* EDrivenDestinationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDrivenDestinationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDrivenDestinationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EDrivenDestinationMode"));
		}
		return Z_Registration_Info_UEnum_EDrivenDestinationMode.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EDrivenDestinationMode>()
	{
		return EDrivenDestinationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode_Statics::Enumerators[] = {
		{ "EDrivenDestinationMode::Bone", (int64)EDrivenDestinationMode::Bone },
		{ "EDrivenDestinationMode::MorphTarget", (int64)EDrivenDestinationMode::MorphTarget },
		{ "EDrivenDestinationMode::MaterialParameter", (int64)EDrivenDestinationMode::MaterialParameter },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode_Statics::Enum_MetaDataParams[] = {
		{ "Bone.Name", "EDrivenDestinationMode::Bone" },
		{ "Comment", "// Type of destination value to drive\n" },
		{ "MaterialParameter.Name", "EDrivenDestinationMode::MaterialParameter" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "MorphTarget.Name", "EDrivenDestinationMode::MorphTarget" },
		{ "ToolTip", "Type of destination value to drive" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"EDrivenDestinationMode",
		"EDrivenDestinationMode",
		Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode()
	{
		if (!Z_Registration_Info_UEnum_EDrivenDestinationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDrivenDestinationMode.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDrivenDestinationMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_BoneDrivenController>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_BoneDrivenController cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_BoneDrivenController;
class UScriptStruct* FAnimNode_BoneDrivenController::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_BoneDrivenController.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_BoneDrivenController.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_BoneDrivenController"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_BoneDrivenController.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_BoneDrivenController>()
{
	return FAnimNode_BoneDrivenController::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivingCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DrivingCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeMin_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RangeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeMax_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RangeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemappedMin_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RemappedMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemappedMax_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_RemappedMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetBone;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetComponent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_DestinationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DestinationMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModificationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModificationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ModificationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRange_MetaData[];
#endif
		static void NewProp_bUseRange_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetTranslationX_MetaData[];
#endif
		static void NewProp_bAffectTargetTranslationX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetTranslationX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetTranslationY_MetaData[];
#endif
		static void NewProp_bAffectTargetTranslationY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetTranslationY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetTranslationZ_MetaData[];
#endif
		static void NewProp_bAffectTargetTranslationZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetTranslationZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetRotationX_MetaData[];
#endif
		static void NewProp_bAffectTargetRotationX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetRotationX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetRotationY_MetaData[];
#endif
		static void NewProp_bAffectTargetRotationY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetRotationY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetRotationZ_MetaData[];
#endif
		static void NewProp_bAffectTargetRotationZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetRotationZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetScaleX_MetaData[];
#endif
		static void NewProp_bAffectTargetScaleX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetScaleX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetScaleY_MetaData[];
#endif
		static void NewProp_bAffectTargetScaleY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetScaleY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAffectTargetScaleZ_MetaData[];
#endif
		static void NewProp_bAffectTargetScaleZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectTargetScaleZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This is the runtime version of a bone driven controller, which maps part of the state from one bone to another (e.g., 2 * source.x -> target.z)\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "This is the runtime version of a bone driven controller, which maps part of the state from one bone to another (e.g., 2 * source.x -> target.z)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_BoneDrivenController>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceBone_MetaData[] = {
		{ "Category", "Source (driver)" },
		{ "Comment", "// Bone to use as controller input\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Bone to use as controller input" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceBone = { "SourceBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, SourceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DrivingCurve_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "/** Curve used to map from the source attribute to the driven attributes if present (otherwise the Multiplier will be used) */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Curve used to map from the source attribute to the driven attributes if present (otherwise the Multiplier will be used)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DrivingCurve = { "DrivingCurve", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, DrivingCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DrivingCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DrivingCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_Multiplier_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// Multiplier to apply to the input value (Note: Ignored when a curve is used)\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Multiplier to apply to the input value (Note: Ignored when a curve is used)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, Multiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_Multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_Multiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMin_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// Minimum limit of the input value (mapped to RemappedMin, only used when limiting the source range)\n// If this is rotation, the unit is radian\n" },
		{ "DisplayName", "Source Range Min" },
		{ "EditCondition", "bUseRange" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Minimum limit of the input value (mapped to RemappedMin, only used when limiting the source range)\nIf this is rotation, the unit is radian" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMin = { "RangeMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, RangeMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMax_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// Maximum limit of the input value (mapped to RemappedMax, only used when limiting the source range)\n// If this is rotation, the unit is radian\n" },
		{ "DisplayName", "Source Range Max" },
		{ "EditCondition", "bUseRange" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Maximum limit of the input value (mapped to RemappedMax, only used when limiting the source range)\nIf this is rotation, the unit is radian" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMax = { "RangeMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, RangeMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMin_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// Minimum value to apply to the destination (remapped from the input range)\n// If this is rotation, the unit is radian\n" },
		{ "DisplayName", "Mapped Range Min" },
		{ "EditCondition", "bUseRange" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Minimum value to apply to the destination (remapped from the input range)\nIf this is rotation, the unit is radian" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMin = { "RemappedMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, RemappedMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMax_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// Maximum value to apply to the destination (remapped from the input range)\n// If this is rotation, the unit is radian\n" },
		{ "DisplayName", "Mapped Range Max" },
		{ "EditCondition", "bUseRange" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Maximum value to apply to the destination (remapped from the input range)\nIf this is rotation, the unit is radian" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMax = { "RemappedMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, RemappedMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "Comment", "/** Name of Morph Target to drive using the source attribute */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Name of Morph Target to drive using the source attribute" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetBone_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "Comment", "// Bone to drive using controller input\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Bone to drive using controller input" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetBone = { "TargetBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, TargetBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetBone_MetaData)) }; // 2906976723
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetComponent = { "TargetComponent", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, TargetComponent_DEPRECATED), Z_Construct_UEnum_Engine_EComponentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetComponent_MetaData)) }; // 2228860366
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DestinationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DestinationMode_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "Comment", "// Type of destination to drive, currently either bone or morph target\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Type of destination to drive, currently either bone or morph target" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DestinationMode = { "DestinationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, DestinationMode), Z_Construct_UEnum_AnimGraphRuntime_EDrivenDestinationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DestinationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DestinationMode_MetaData)) }; // 3688566257
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ModificationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ModificationMode_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "Comment", "// The type of modification to make to the destination component(s)\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "The type of modification to make to the destination component(s)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ModificationMode = { "ModificationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, ModificationMode), Z_Construct_UEnum_AnimGraphRuntime_EDrivenBoneModificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ModificationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ModificationMode_MetaData)) }; // 1499021623
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "Category", "Source (driver)" },
		{ "Comment", "// Transform component to use as input\n" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Transform component to use as input" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_BoneDrivenController, SourceComponent), Z_Construct_UEnum_Engine_EComponentType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceComponent_MetaData)) }; // 2228860366
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bUseRange_MetaData[] = {
		{ "Category", "Mapping" },
		{ "Comment", "// Whether or not to clamp the driver value and remap it before scaling it\n" },
		{ "DisplayName", "Remap Source" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Whether or not to clamp the driver value and remap it before scaling it" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bUseRange_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bUseRange = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bUseRange = { "bUseRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bUseRange_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bUseRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bUseRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationX_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "Comment", "// Affect the X component of translation on the target bone\n" },
		{ "DisplayName", "X" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Affect the X component of translation on the target bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationX_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetTranslationX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationX = { "bAffectTargetTranslationX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationY_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "Comment", "// Affect the Y component of translation on the target bone\n" },
		{ "DisplayName", "Y" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Affect the Y component of translation on the target bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationY_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetTranslationY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationY = { "bAffectTargetTranslationY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationZ_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "Comment", "// Affect the Z component of translation on the target bone\n" },
		{ "DisplayName", "Z" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Affect the Z component of translation on the target bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationZ_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetTranslationZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationZ = { "bAffectTargetTranslationZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationX_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "Comment", "// Affect the X component of rotation on the target bone\n" },
		{ "DisplayName", "X" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Affect the X component of rotation on the target bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationX_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetRotationX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationX = { "bAffectTargetRotationX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationY_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "Comment", "// Affect the Y component of rotation on the target bone\n" },
		{ "DisplayName", "Y" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Affect the Y component of rotation on the target bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationY_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetRotationY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationY = { "bAffectTargetRotationY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationZ_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "Comment", "// Affect the Z component of rotation on the target bone\n" },
		{ "DisplayName", "Z" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Affect the Z component of rotation on the target bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationZ_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetRotationZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationZ = { "bAffectTargetRotationZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleX_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "Comment", "// Affect the X component of scale on the target bone\n" },
		{ "DisplayName", "X" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Affect the X component of scale on the target bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleX_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetScaleX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleX = { "bAffectTargetScaleX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleY_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "Comment", "// Affect the Y component of scale on the target bone\n" },
		{ "DisplayName", "Y" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Affect the Y component of scale on the target bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleY_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetScaleY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleY = { "bAffectTargetScaleY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleZ_MetaData[] = {
		{ "Category", "Destination (driven)" },
		{ "Comment", "// Affect the Z component of scale on the target bone\n" },
		{ "DisplayName", "Z" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_BoneDrivenController.h" },
		{ "ToolTip", "Affect the Z component of scale on the target bone" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleZ_SetBit(void* Obj)
	{
		((FAnimNode_BoneDrivenController*)Obj)->bAffectTargetScaleZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleZ = { "bAffectTargetScaleZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_BoneDrivenController), &Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DrivingCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RangeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_RemappedMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetBone,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_TargetComponent,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DestinationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_DestinationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ModificationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_ModificationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_SourceComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bUseRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetTranslationZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetRotationZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewProp_bAffectTargetScaleZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_BoneDrivenController",
		sizeof(FAnimNode_BoneDrivenController),
		alignof(FAnimNode_BoneDrivenController),
		Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_BoneDrivenController.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_BoneDrivenController.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_BoneDrivenController.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_BoneDrivenController_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_BoneDrivenController_h_Statics::EnumInfo[] = {
		{ EDrivenBoneModificationMode_StaticEnum, TEXT("EDrivenBoneModificationMode"), &Z_Registration_Info_UEnum_EDrivenBoneModificationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1499021623U) },
		{ EDrivenDestinationMode_StaticEnum, TEXT("EDrivenDestinationMode"), &Z_Registration_Info_UEnum_EDrivenDestinationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3688566257U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_BoneDrivenController_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_BoneDrivenController::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_BoneDrivenController_Statics::NewStructOps, TEXT("AnimNode_BoneDrivenController"), &Z_Registration_Info_UScriptStruct_AnimNode_BoneDrivenController, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_BoneDrivenController), 4237913366U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_BoneDrivenController_h_2707454537(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_BoneDrivenController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_BoneDrivenController_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_BoneDrivenController_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_BoneDrivenController_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
