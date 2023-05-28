// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_OffsetRootBone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_OffsetRootBone() {}
// Cross Module References
	ANIMATIONWARPINGRUNTIME_API UEnum* Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode();
	ANIMATIONWARPINGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_AnimationWarpingRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOffsetRootBoneMode;
	static UEnum* EOffsetRootBoneMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOffsetRootBoneMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOffsetRootBoneMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode, (UObject*)Z_Construct_UPackage__Script_AnimationWarpingRuntime(), TEXT("EOffsetRootBoneMode"));
		}
		return Z_Registration_Info_UEnum_EOffsetRootBoneMode.OuterSingleton;
	}
	template<> ANIMATIONWARPINGRUNTIME_API UEnum* StaticEnum<EOffsetRootBoneMode>()
	{
		return EOffsetRootBoneMode_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode_Statics::Enumerators[] = {
		{ "EOffsetRootBoneMode::Accumulate", (int64)EOffsetRootBoneMode::Accumulate },
		{ "EOffsetRootBoneMode::Interpolate", (int64)EOffsetRootBoneMode::Interpolate },
		{ "EOffsetRootBoneMode::Hold", (int64)EOffsetRootBoneMode::Hold },
		{ "EOffsetRootBoneMode::Release", (int64)EOffsetRootBoneMode::Release },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode_Statics::Enum_MetaDataParams[] = {
		{ "Accumulate.Comment", "// Accumulate the mesh component's movement into the offset.\n// In this mode, if the mesh component moves \n// the offset will counter the motion, and the root will stay in place\n" },
		{ "Accumulate.Name", "EOffsetRootBoneMode::Accumulate" },
		{ "Accumulate.ToolTip", "Accumulate the mesh component's movement into the offset.\nIn this mode, if the mesh component moves\nthe offset will counter the motion, and the root will stay in place" },
		{ "BlueprintType", "true" },
		{ "Hold.Comment", "// Stops accumulating the mesh component's movement delta into the root offset\n// In this mode, whatever offset we have will be conserved, \n// but we won't accumulate any more\n" },
		{ "Hold.Name", "EOffsetRootBoneMode::Hold" },
		{ "Hold.ToolTip", "Stops accumulating the mesh component's movement delta into the root offset\nIn this mode, whatever offset we have will be conserved,\nbut we won't accumulate any more" },
		{ "Interpolate.Comment", "// Continuously interpolate the offset out\n// In this mode, if the mesh component moves\n// The root will stay behind, but will attempt to catch up\n" },
		{ "Interpolate.Name", "EOffsetRootBoneMode::Interpolate" },
		{ "Interpolate.ToolTip", "Continuously interpolate the offset out\nIn this mode, if the mesh component moves\nThe root will stay behind, but will attempt to catch up" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OffsetRootBone.h" },
		{ "Release.Comment", "// Release the offset and stop accumulating the mesh component's movement delta.\n// In this mode we will \"blend out\" the offset\n" },
		{ "Release.Name", "EOffsetRootBoneMode::Release" },
		{ "Release.ToolTip", "Release the offset and stop accumulating the mesh component's movement delta.\nIn this mode we will \"blend out\" the offset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimationWarpingRuntime,
		nullptr,
		"EOffsetRootBoneMode",
		"EOffsetRootBoneMode",
		Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode()
	{
		if (!Z_Registration_Info_UEnum_EOffsetRootBoneMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOffsetRootBoneMode.InnerSingleton, Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOffsetRootBoneMode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_OffsetRootBone>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_OffsetRootBone cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_OffsetRootBone;
class UScriptStruct* FAnimNode_OffsetRootBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_OffsetRootBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_OffsetRootBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone, (UObject*)Z_Construct_UPackage__Script_AnimationWarpingRuntime(), TEXT("AnimNode_OffsetRootBone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_OffsetRootBone.OuterSingleton;
}
template<> ANIMATIONWARPINGRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_OffsetRootBone>()
{
	return FAnimNode_OffsetRootBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_EvaluationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EvaluationMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TranslationMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationHalflife_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslationHalflife;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationHalfLife_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationHalfLife;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTranslationError_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTranslationError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRotationError_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRotationError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampToTranslationVelocity_MetaData[];
#endif
		static void NewProp_bClampToTranslationVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampToTranslationVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClampToRotationVelocity_MetaData[];
#endif
		static void NewProp_bClampToRotationVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampToRotationVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationSpeedRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslationSpeedRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeedRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeedRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationDelta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationDelta_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationDelta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OffsetRootBone.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_OffsetRootBone>();
	}
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_EvaluationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_EvaluationMode_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OffsetRootBone.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_EvaluationMode = { "EvaluationMode", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OffsetRootBone, EvaluationMode), Z_Construct_UEnum_AnimGraphRuntime_EWarpingEvaluationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_EvaluationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_EvaluationMode_MetaData)) }; // 2839837007
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The translation offset behavior mode\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OffsetRootBone.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The translation offset behavior mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationMode = { "TranslationMode", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OffsetRootBone, TranslationMode), Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationMode_MetaData)) }; // 528239077
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// The rotation offset behavior mode\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OffsetRootBone.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The rotation offset behavior mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OffsetRootBone, RotationMode), Z_Construct_UEnum_AnimationWarpingRuntime_EOffsetRootBoneMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationMode_MetaData)) }; // 528239077
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationHalflife_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Controls how fast the translation offset is blended out\n// Values closer to 0 make it faster\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OffsetRootBone.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Controls how fast the translation offset is blended out\nValues closer to 0 make it faster" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationHalflife = { "TranslationHalflife", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OffsetRootBone, TranslationHalflife), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationHalflife_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationHalflife_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationHalfLife_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Controls how fast the rotation offset is blended out\n// Values closer to 0 make it faster\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OffsetRootBone.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Controls how fast the rotation offset is blended out\nValues closer to 0 make it faster" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationHalfLife = { "RotationHalfLife", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OffsetRootBone, RotationHalfLife), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationHalfLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationHalfLife_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_MaxTranslationError_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// How much the offset can deviate from the mesh component's translation in units\n// Values lower than 0 disable this limit\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OffsetRootBone.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How much the offset can deviate from the mesh component's translation in units\nValues lower than 0 disable this limit" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_MaxTranslationError = { "MaxTranslationError", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OffsetRootBone, MaxTranslationError), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_MaxTranslationError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_MaxTranslationError_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_MaxRotationError_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// How much the offset can deviate from the mesh component's rotation in degrees\n// Values lower than 0 disable this limit\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OffsetRootBone.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How much the offset can deviate from the mesh component's rotation in degrees\nValues lower than 0 disable this limit" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_MaxRotationError = { "MaxRotationError", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OffsetRootBone, MaxRotationError), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_MaxRotationError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_MaxRotationError_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_bClampToTranslationVelocity_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Whether to limit the offset's translation interpolation speed to the velocity on the incoming motion\n// Enabling this prevents the offset sliding when there's little to no translation speed\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OffsetRootBone.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Whether to limit the offset's translation interpolation speed to the velocity on the incoming motion\nEnabling this prevents the offset sliding when there's little to no translation speed" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_bClampToTranslationVelocity_SetBit(void* Obj)
	{
		((FAnimNode_OffsetRootBone*)Obj)->bClampToTranslationVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_bClampToTranslationVelocity = { "bClampToTranslationVelocity", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_OffsetRootBone), &Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_bClampToTranslationVelocity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_bClampToTranslationVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_bClampToTranslationVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_bClampToRotationVelocity_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Whether to limit the offset's rotation interpolation speed to the velocity on the incoming motion\n// Enabling this prevents the offset sliding when there's little to no rotation speed\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OffsetRootBone.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Whether to limit the offset's rotation interpolation speed to the velocity on the incoming motion\nEnabling this prevents the offset sliding when there's little to no rotation speed" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_bClampToRotationVelocity_SetBit(void* Obj)
	{
		((FAnimNode_OffsetRootBone*)Obj)->bClampToRotationVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_bClampToRotationVelocity = { "bClampToRotationVelocity", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_OffsetRootBone), &Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_bClampToRotationVelocity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_bClampToRotationVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_bClampToRotationVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationSpeedRatio_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// How much the offset can blend out, relative to the incoming translation speed\n// i.e. If root motion is moving at 400cm/s, at 0.5, the offset can blend out at 200cm/s\n" },
		{ "EditCondition", "bClampToTranslationVelocity" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OffsetRootBone.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How much the offset can blend out, relative to the incoming translation speed\ni.e. If root motion is moving at 400cm/s, at 0.5, the offset can blend out at 200cm/s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationSpeedRatio = { "TranslationSpeedRatio", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OffsetRootBone, TranslationSpeedRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationSpeedRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationSpeedRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationSpeedRatio_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// How much the offset can blend out, relative to the incoming rotation speed\n// i.e. If root motion is rotating at 90 degrees/s, at 0.5, the offset can blend out at 45 degree/s\n" },
		{ "EditCondition", "bClampToRotationVelocity" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OffsetRootBone.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How much the offset can blend out, relative to the incoming rotation speed\ni.e. If root motion is rotating at 90 degrees/s, at 0.5, the offset can blend out at 45 degree/s" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationSpeedRatio = { "RotationSpeedRatio", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OffsetRootBone, RotationSpeedRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationSpeedRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationSpeedRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationDelta_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "// Delta applied to the translation offset this frame. \n// For procedural values, consider adjusting the input by delta time.\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OffsetRootBone.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Delta applied to the translation offset this frame.\nFor procedural values, consider adjusting the input by delta time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationDelta = { "TranslationDelta", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OffsetRootBone, TranslationDelta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationDelta_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "// Delta applied to the rotation offset this frame. \n// For procedural values, consider adjusting the input by delta time.\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_OffsetRootBone.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Delta applied to the rotation offset this frame.\nFor procedural values, consider adjusting the input by delta time." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationDelta = { "RotationDelta", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_OffsetRootBone, RotationDelta), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationDelta_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_EvaluationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_EvaluationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationHalflife,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationHalfLife,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_MaxTranslationError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_MaxRotationError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_bClampToTranslationVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_bClampToRotationVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationSpeedRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationSpeedRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_TranslationDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewProp_RotationDelta,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationWarpingRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_OffsetRootBone",
		sizeof(FAnimNode_OffsetRootBone),
		alignof(FAnimNode_OffsetRootBone),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_OffsetRootBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_OffsetRootBone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_OffsetRootBone.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OffsetRootBone_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OffsetRootBone_h_Statics::EnumInfo[] = {
		{ EOffsetRootBoneMode_StaticEnum, TEXT("EOffsetRootBoneMode"), &Z_Registration_Info_UEnum_EOffsetRootBoneMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 528239077U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OffsetRootBone_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_OffsetRootBone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_OffsetRootBone_Statics::NewStructOps, TEXT("AnimNode_OffsetRootBone"), &Z_Registration_Info_UScriptStruct_AnimNode_OffsetRootBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_OffsetRootBone), 1323643189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OffsetRootBone_h_953073904(TEXT("/Script/AnimationWarpingRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OffsetRootBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OffsetRootBone_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OffsetRootBone_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationWarping_Source_Runtime_Public_BoneControllers_AnimNode_OffsetRootBone_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
