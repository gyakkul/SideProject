// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoneControllers/AnimNode_LookAt.h"
#include "../../Source/Runtime/Engine/Public/Animation/BoneSocketReference.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
#include "CommonAnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_LookAt() {}
// Cross Module References
	ANIMATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAxis();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LookAt();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAxisOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterpolationBlend;
	static UEnum* EInterpolationBlend_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterpolationBlend.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterpolationBlend.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EInterpolationBlend"));
		}
		return Z_Registration_Info_UEnum_EInterpolationBlend.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EInterpolationBlend::Type>()
	{
		return EInterpolationBlend_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_Statics::Enumerators[] = {
		{ "EInterpolationBlend::Linear", (int64)EInterpolationBlend::Linear },
		{ "EInterpolationBlend::Cubic", (int64)EInterpolationBlend::Cubic },
		{ "EInterpolationBlend::Sinusoidal", (int64)EInterpolationBlend::Sinusoidal },
		{ "EInterpolationBlend::EaseInOutExponent2", (int64)EInterpolationBlend::EaseInOutExponent2 },
		{ "EInterpolationBlend::EaseInOutExponent3", (int64)EInterpolationBlend::EaseInOutExponent3 },
		{ "EInterpolationBlend::EaseInOutExponent4", (int64)EInterpolationBlend::EaseInOutExponent4 },
		{ "EInterpolationBlend::EaseInOutExponent5", (int64)EInterpolationBlend::EaseInOutExponent5 },
		{ "EInterpolationBlend::MAX", (int64)EInterpolationBlend::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Various ways to interpolate TAlphaBlend. */" },
		{ "Cubic.Name", "EInterpolationBlend::Cubic" },
		{ "EaseInOutExponent2.Name", "EInterpolationBlend::EaseInOutExponent2" },
		{ "EaseInOutExponent3.Name", "EInterpolationBlend::EaseInOutExponent3" },
		{ "EaseInOutExponent4.Name", "EInterpolationBlend::EaseInOutExponent4" },
		{ "EaseInOutExponent5.Name", "EInterpolationBlend::EaseInOutExponent5" },
		{ "Linear.Name", "EInterpolationBlend::Linear" },
		{ "MAX.Name", "EInterpolationBlend::MAX" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "Sinusoidal.Name", "EInterpolationBlend::Sinusoidal" },
		{ "ToolTip", "Various ways to interpolate TAlphaBlend." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"EInterpolationBlend",
		"EInterpolationBlend::Type",
		Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend()
	{
		if (!Z_Registration_Info_UEnum_EInterpolationBlend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterpolationBlend.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterpolationBlend.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_LookAt>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_LookAt cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_LookAt;
class UScriptStruct* FAnimNode_LookAt::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_LookAt.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_LookAt.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_LookAt, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_LookAt"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_LookAt.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_LookAt>()
{
	return FAnimNode_LookAt::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneToModify_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneToModify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAt_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookAt_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLookUpAxis_MetaData[];
#endif
		static void NewProp_bUseLookUpAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLookUpAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InterpolationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookUp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookUp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtClamp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LookAtClamp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationTriggerThreashold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationTriggerThreashold;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LookAtBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtSocket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LookAtSocket;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAtAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LookAtAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomLookAtAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomLookAtAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookUpAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LookUpAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomLookUpAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomLookUpAxis;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Simple controller that make a bone to look at the point or another bone\n */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Simple controller that make a bone to look at the point or another bone" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_LookAt>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_BoneToModify_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_BoneToModify = { "BoneToModify", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, BoneToModify), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_BoneToModify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_BoneToModify_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtTarget_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/** Target socket to look at. Used if LookAtBone is empty. - You can use  LookAtLocation if you need offset from this point. That location will be used in their local space. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Target socket to look at. Used if LookAtBone is empty. - You can use  LookAtLocation if you need offset from this point. That location will be used in their local space. *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtTarget = { "LookAtTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, LookAtTarget), Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtTarget_MetaData)) }; // 2128614898
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtLocation_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "/** Target Offset. It's in world space if LookAtBone is empty or it is based on LookAtBone or LookAtSocket in their local space*/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Target Offset. It's in world space if LookAtBone is empty or it is based on LookAtBone or LookAtSocket in their local space" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtLocation = { "LookAtLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, LookAtLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAt_Axis_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAt_Axis = { "LookAt_Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, LookAt_Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAt_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAt_Axis_MetaData)) }; // 1038789888
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/** Whether or not to use Look up axis */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Whether or not to use Look up axis" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis_SetBit(void* Obj)
	{
		((FAnimNode_LookAt*)Obj)->bUseLookUpAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis = { "bUseLookUpAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_LookAt), &Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationType_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationType = { "InterpolationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, InterpolationType), Z_Construct_UEnum_AnimGraphRuntime_EInterpolationBlend, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationType_MetaData)) }; // 1319297195
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUp_Axis_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUp_Axis = { "LookUp_Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, LookUp_Axis), Z_Construct_UScriptStruct_FAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUp_Axis_MetaData)) }; // 1038789888
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtClamp_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/** Look at Clamp value in degrees - if your look at axis is Z, only X, Y degree of clamp will be used */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Look at Clamp value in degrees - if your look at axis is Z, only X, Y degree of clamp will be used" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtClamp = { "LookAtClamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, LookAtClamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtClamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtClamp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTime_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTime = { "InterpolationTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, InterpolationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTriggerThreashold_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTriggerThreashold = { "InterpolationTriggerThreashold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, InterpolationTriggerThreashold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTriggerThreashold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTriggerThreashold_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtBone_MetaData[] = {
		{ "Comment", "/** Target Bone to look at - You can use  LookAtLocation if you need offset from this point. That location will be used in their local space. **/" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Target Bone to look at - You can use  LookAtLocation if you need offset from this point. That location will be used in their local space. *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtBone = { "LookAtBone", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, LookAtBone_DEPRECATED), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtSocket_MetaData[] = {
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtSocket = { "LookAtSocket", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, LookAtSocket_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtSocket_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtAxis_MetaData[] = {
		{ "Comment", "/** Look at axis, which axis to align to look at point */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Look at axis, which axis to align to look at point" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtAxis = { "LookAtAxis", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, LookAtAxis_DEPRECATED), Z_Construct_UEnum_Engine_EAxisOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtAxis_MetaData)) }; // 2249644565
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookAtAxis_MetaData[] = {
		{ "Comment", "/** Custom look up axis in local space. Only used if LookAtAxis==EAxisOption::Custom */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Custom look up axis in local space. Only used if LookAtAxis==EAxisOption::Custom" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookAtAxis = { "CustomLookAtAxis", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, CustomLookAtAxis_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookAtAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookAtAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUpAxis_MetaData[] = {
		{ "Comment", "/** Look up axis in local space */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Look up axis in local space" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUpAxis = { "LookUpAxis", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, LookUpAxis_DEPRECATED), Z_Construct_UEnum_Engine_EAxisOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUpAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUpAxis_MetaData)) }; // 2249644565
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookUpAxis_MetaData[] = {
		{ "Comment", "/** Custom look up axis in local space. Only used if LookUpAxis==EAxisOption::Custom */" },
		{ "ModuleRelativePath", "Public/BoneControllers/AnimNode_LookAt.h" },
		{ "ToolTip", "Custom look up axis in local space. Only used if LookUpAxis==EAxisOption::Custom" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookUpAxis = { "CustomLookUpAxis", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_LookAt, CustomLookUpAxis_DEPRECATED), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookUpAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookUpAxis_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_BoneToModify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAt_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_bUseLookUpAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtClamp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_InterpolationTriggerThreashold,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtSocket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookAtAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookAtAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_LookUpAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewProp_CustomLookUpAxis,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_LookAt",
		sizeof(FAnimNode_LookAt),
		alignof(FAnimNode_LookAt),
		Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_LookAt()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_LookAt.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_LookAt.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_LookAt.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LookAt_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LookAt_h_Statics::EnumInfo[] = {
		{ EInterpolationBlend_StaticEnum, TEXT("EInterpolationBlend"), &Z_Registration_Info_UEnum_EInterpolationBlend, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1319297195U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LookAt_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_LookAt::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_LookAt_Statics::NewStructOps, TEXT("AnimNode_LookAt"), &Z_Registration_Info_UScriptStruct_AnimNode_LookAt, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_LookAt), 430743947U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LookAt_h_1281821554(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LookAt_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LookAt_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LookAt_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_BoneControllers_AnimNode_LookAt_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
