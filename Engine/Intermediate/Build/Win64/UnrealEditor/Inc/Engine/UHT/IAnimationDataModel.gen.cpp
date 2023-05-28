// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimData/IAnimationDataModel.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimData/AttributeIdentifier.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AttributeCurve.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAnimationDataModel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationDataModel();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationDataModel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimatedBoneAttribute();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationAttributeIdentifier();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationCurveData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAttributeCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneAnimationTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFloatCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawAnimSequenceTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTransformCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneAnimationTrack;
class UScriptStruct* FBoneAnimationTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneAnimationTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneAnimationTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneAnimationTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BoneAnimationTrack"));
	}
	return Z_Registration_Info_UScriptStruct_BoneAnimationTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoneAnimationTrack>()
{
	return FBoneAnimationTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalTrackData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InternalTrackData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneTreeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneTreeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Structure encapsulating a single bone animation track.\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
		{ "ToolTip", "Structure encapsulating a single bone animation track." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneAnimationTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_InternalTrackData_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Internally stored data representing the animation bone data */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
		{ "ToolTip", "Internally stored data representing the animation bone data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_InternalTrackData = { "InternalTrackData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneAnimationTrack, InternalTrackData), Z_Construct_UScriptStruct_FRawAnimSequenceTrack, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_InternalTrackData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_InternalTrackData_MetaData)) }; // 3121965685
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_BoneTreeIndex_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Index corresponding to the bone this track corresponds to within the target USkeleton */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
		{ "ToolTip", "Index corresponding to the bone this track corresponds to within the target USkeleton" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_BoneTreeIndex = { "BoneTreeIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneAnimationTrack, BoneTreeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_BoneTreeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_BoneTreeIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Name of the bone this track corresponds to */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
		{ "ToolTip", "Name of the bone this track corresponds to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneAnimationTrack, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_InternalTrackData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_BoneTreeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BoneAnimationTrack",
		sizeof(FBoneAnimationTrack),
		alignof(FBoneAnimationTrack),
		Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneAnimationTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_BoneAnimationTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneAnimationTrack.InnerSingleton, Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoneAnimationTrack.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimationCurveData;
class UScriptStruct* FAnimationCurveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimationCurveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimationCurveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationCurveData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationCurveData"));
	}
	return Z_Registration_Info_UScriptStruct_AnimationCurveData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimationCurveData>()
{
	return FAnimationCurveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimationCurveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatCurves;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformCurves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformCurves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformCurves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationCurveData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Structure encapsulating animated curve data. Currently only contains Float and Transform curves.\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
		{ "ToolTip", "Structure encapsulating animated curve data. Currently only contains Float and Transform curves." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationCurveData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_FloatCurves_Inner = { "FloatCurves", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFloatCurve, METADATA_PARAMS(nullptr, 0) }; // 936738579
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_FloatCurves_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Float-based animation curves */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
		{ "ToolTip", "Float-based animation curves" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_FloatCurves = { "FloatCurves", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationCurveData, FloatCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_FloatCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_FloatCurves_MetaData)) }; // 936738579
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_TransformCurves_Inner = { "TransformCurves", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransformCurve, METADATA_PARAMS(nullptr, 0) }; // 2461261714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_TransformCurves_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** FTransform-based animation curves, used for animation layer editing */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
		{ "ToolTip", "FTransform-based animation curves, used for animation layer editing" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_TransformCurves = { "TransformCurves", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimationCurveData, TransformCurves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_TransformCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_TransformCurves_MetaData)) }; // 2461261714
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationCurveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_FloatCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_FloatCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_TransformCurves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewProp_TransformCurves,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationCurveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimationCurveData",
		sizeof(FAnimationCurveData),
		alignof(FAnimationCurveData),
		Z_Construct_UScriptStruct_FAnimationCurveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationCurveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationCurveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationCurveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationCurveData()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimationCurveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimationCurveData.InnerSingleton, Z_Construct_UScriptStruct_FAnimationCurveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimationCurveData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimatedBoneAttribute;
class UScriptStruct* FAnimatedBoneAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimatedBoneAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimatedBoneAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimatedBoneAttribute, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimatedBoneAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_AnimatedBoneAttribute.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimatedBoneAttribute>()
{
	return FAnimatedBoneAttribute::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Structure encapsulating animated (bone) attribute data.\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
		{ "ToolTip", "Structure encapsulating animated (bone) attribute data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimatedBoneAttribute>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Identifier to reference this attribute by */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
		{ "ToolTip", "Identifier to reference this attribute by" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimatedBoneAttribute, Identifier), Z_Construct_UScriptStruct_FAnimationAttributeIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Identifier_MetaData)) }; // 197982779
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Curve containing the (animated) attribute data */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
		{ "ToolTip", "Curve containing the (animated) attribute data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimatedBoneAttribute, Curve), Z_Construct_UScriptStruct_FAttributeCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Curve_MetaData)) }; // 1610398993
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewProp_Curve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimatedBoneAttribute",
		sizeof(FAnimatedBoneAttribute),
		alignof(FAnimatedBoneAttribute),
		Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimatedBoneAttribute()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimatedBoneAttribute.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimatedBoneAttribute.InnerSingleton, Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimatedBoneAttribute.InnerSingleton;
	}
	DEFINE_FUNCTION(IAnimationDataModel::execGetAnimationSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=P_THIS->GetAnimationSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnimationDataModel::execGetNumberOfFloatCurves)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfFloatCurves();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnimationDataModel::execGetNumberOfTransformCurves)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfTransformCurves();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnimationDataModel::execGetBoneTrackNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBoneTrackNames(Z_Param_Out_OutNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnimationDataModel::execGetNumBoneTracks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumBoneTracks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnimationDataModel::execIsValidBoneTrackName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_TrackName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidBoneTrackName(Z_Param_Out_TrackName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnimationDataModel::execIsValidBoneTrackIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidBoneTrackIndex(Z_Param_TrackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnimationDataModel::execGetBoneTrackIndexByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TrackName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBoneTrackIndexByName(Z_Param_TrackName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnimationDataModel::execGetBoneTrackIndex)
	{
		P_GET_STRUCT_REF(FBoneAnimationTrack,Z_Param_Out_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetBoneTrackIndex(Z_Param_Out_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnimationDataModel::execGetBoneTrackByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TrackName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBoneAnimationTrack*)Z_Param__Result=P_THIS->GetBoneTrackByName(Z_Param_TrackName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnimationDataModel::execGetBoneTrackByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TrackIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBoneAnimationTrack*)Z_Param__Result=P_THIS->GetBoneTrackByIndex(Z_Param_TrackIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnimationDataModel::execGetBoneAnimationTracks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FBoneAnimationTrack>*)Z_Param__Result=P_THIS->GetBoneAnimationTracks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnimationDataModel::execGetFrameRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFrameRate*)Z_Param__Result=P_THIS->GetFrameRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnimationDataModel::execGetNumberOfKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnimationDataModel::execGetNumberOfFrames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfFrames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IAnimationDataModel::execGetPlayLength)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetPlayLength();
		P_NATIVE_END;
	}
	void UAnimationDataModel::StaticRegisterNativesUAnimationDataModel()
	{
		UClass* Class = UAnimationDataModel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAnimationSequence", &IAnimationDataModel::execGetAnimationSequence },
			{ "GetBoneAnimationTracks", &IAnimationDataModel::execGetBoneAnimationTracks },
			{ "GetBoneTrackByIndex", &IAnimationDataModel::execGetBoneTrackByIndex },
			{ "GetBoneTrackByName", &IAnimationDataModel::execGetBoneTrackByName },
			{ "GetBoneTrackIndex", &IAnimationDataModel::execGetBoneTrackIndex },
			{ "GetBoneTrackIndexByName", &IAnimationDataModel::execGetBoneTrackIndexByName },
			{ "GetBoneTrackNames", &IAnimationDataModel::execGetBoneTrackNames },
			{ "GetFrameRate", &IAnimationDataModel::execGetFrameRate },
			{ "GetNumberOfFloatCurves", &IAnimationDataModel::execGetNumberOfFloatCurves },
			{ "GetNumberOfFrames", &IAnimationDataModel::execGetNumberOfFrames },
			{ "GetNumberOfKeys", &IAnimationDataModel::execGetNumberOfKeys },
			{ "GetNumberOfTransformCurves", &IAnimationDataModel::execGetNumberOfTransformCurves },
			{ "GetNumBoneTracks", &IAnimationDataModel::execGetNumBoneTracks },
			{ "GetPlayLength", &IAnimationDataModel::execGetPlayLength },
			{ "IsValidBoneTrackIndex", &IAnimationDataModel::execIsValidBoneTrackIndex },
			{ "IsValidBoneTrackName", &IAnimationDataModel::execIsValidBoneTrackName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationDataModel_GetAnimationSequence_Statics
	{
		struct AnimationDataModel_eventGetAnimationSequence_Parms
		{
			UAnimSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationDataModel_GetAnimationSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventGetAnimationSequence_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataModel_GetAnimationSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetAnimationSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_GetAnimationSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09The outer UAnimSequence object if found, otherwise returns a nullptr \n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
		{ "ToolTip", "@return       The outer UAnimSequence object if found, otherwise returns a nullptr" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataModel_GetAnimationSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataModel, nullptr, "GetAnimationSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationDataModel_GetAnimationSequence_Statics::AnimationDataModel_eventGetAnimationSequence_Parms), Z_Construct_UFunction_UAnimationDataModel_GetAnimationSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetAnimationSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_GetAnimationSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetAnimationSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationDataModel_GetAnimationSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataModel_GetAnimationSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks_Statics
	{
		struct AnimationDataModel_eventGetBoneAnimationTracks_Parms
		{
			TArray<FBoneAnimationTrack> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneAnimationTrack, METADATA_PARAMS(nullptr, 0) }; // 3584978593
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventGetBoneAnimationTracks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks_Statics::NewProp_ReturnValue_MetaData)) }; // 3584978593
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataModel, nullptr, "GetBoneAnimationTracks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks_Statics::AnimationDataModel_eventGetBoneAnimationTracks_Parms), Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex_Statics
	{
		struct AnimationDataModel_eventGetBoneTrackByIndex_Parms
		{
			int32 TrackIndex;
			FBoneAnimationTrack ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventGetBoneTrackByIndex_Parms, TrackIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventGetBoneTrackByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoneAnimationTrack, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex_Statics::NewProp_ReturnValue_MetaData)) }; // 3584978593
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex_Statics::NewProp_TrackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataModel, nullptr, "GetBoneTrackByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex_Statics::AnimationDataModel_eventGetBoneTrackByIndex_Parms), Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName_Statics
	{
		struct AnimationDataModel_eventGetBoneTrackByName_Parms
		{
			FName TrackName;
			FBoneAnimationTrack ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventGetBoneTrackByName_Parms, TrackName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventGetBoneTrackByName_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoneAnimationTrack, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName_Statics::NewProp_ReturnValue_MetaData)) }; // 3584978593
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataModel, nullptr, "GetBoneTrackByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName_Statics::AnimationDataModel_eventGetBoneTrackByName_Parms), Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex_Statics
	{
		struct AnimationDataModel_eventGetBoneTrackIndex_Parms
		{
			FBoneAnimationTrack Track;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Track;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex_Statics::NewProp_Track_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventGetBoneTrackIndex_Parms, Track), Z_Construct_UScriptStruct_FBoneAnimationTrack, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex_Statics::NewProp_Track_MetaData)) }; // 3584978593
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventGetBoneTrackIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataModel, nullptr, "GetBoneTrackIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex_Statics::AnimationDataModel_eventGetBoneTrackIndex_Parms), Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndexByName_Statics
	{
		struct AnimationDataModel_eventGetBoneTrackIndexByName_Parms
		{
			FName TrackName;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndexByName_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventGetBoneTrackIndexByName_Parms, TrackName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndexByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventGetBoneTrackIndexByName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndexByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndexByName_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndexByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndexByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndexByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataModel, nullptr, "GetBoneTrackIndexByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndexByName_Statics::AnimationDataModel_eventGetBoneTrackIndexByName_Parms), Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndexByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndexByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndexByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndexByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndexByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndexByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackNames_Statics
	{
		struct AnimationDataModel_eventGetBoneTrackNames_Parms
		{
			TArray<FName> OutNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackNames_Statics::NewProp_OutNames_Inner = { "OutNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackNames_Statics::NewProp_OutNames = { "OutNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventGetBoneTrackNames_Parms, OutNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackNames_Statics::NewProp_OutNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackNames_Statics::NewProp_OutNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* Populates the provided array with all contained (bone) track names\n\x09*\n\x09* @param\x09OutNames\x09[out] Array containing all bone track names\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
		{ "ToolTip", "Populates the provided array with all contained (bone) track names\n\n@param        OutNames        [out] Array containing all bone track names" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataModel, nullptr, "GetBoneTrackNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackNames_Statics::AnimationDataModel_eventGetBoneTrackNames_Parms), Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationDataModel_GetFrameRate_Statics
	{
		struct FFrameRate
		{
			int32 Numerator;
			int32 Denominator;
		};

		struct AnimationDataModel_eventGetFrameRate_Parms
		{
			FFrameRate ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataModel_GetFrameRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventGetFrameRate_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataModel_GetFrameRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetFrameRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_GetFrameRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09""Frame rate at which the animation data is key-ed \n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
		{ "ToolTip", "@return       Frame rate at which the animation data is key-ed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataModel_GetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataModel, nullptr, "GetFrameRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationDataModel_GetFrameRate_Statics::AnimationDataModel_eventGetFrameRate_Parms), Z_Construct_UFunction_UAnimationDataModel_GetFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetFrameRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_GetFrameRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetFrameRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationDataModel_GetFrameRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataModel_GetFrameRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFloatCurves_Statics
	{
		struct AnimationDataModel_eventGetNumberOfFloatCurves_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFloatCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventGetNumberOfFloatCurves_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFloatCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFloatCurves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFloatCurves_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09Total number of stored float curves\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
		{ "ToolTip", "@return       Total number of stored float curves" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFloatCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataModel, nullptr, "GetNumberOfFloatCurves", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFloatCurves_Statics::AnimationDataModel_eventGetNumberOfFloatCurves_Parms), Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFloatCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFloatCurves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFloatCurves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFloatCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFloatCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFloatCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFrames_Statics
	{
		struct AnimationDataModel_eventGetNumberOfFrames_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventGetNumberOfFrames_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFrames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFrames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFrames_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09Total number of frames of animation data stored \n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
		{ "ToolTip", "@return       Total number of frames of animation data stored" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataModel, nullptr, "GetNumberOfFrames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFrames_Statics::AnimationDataModel_eventGetNumberOfFrames_Parms), Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFrames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFrames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFrames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFrames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFrames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationDataModel_GetNumberOfKeys_Statics
	{
		struct AnimationDataModel_eventGetNumberOfKeys_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationDataModel_GetNumberOfKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventGetNumberOfKeys_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataModel_GetNumberOfKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetNumberOfKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_GetNumberOfKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09Total number of animation data keys stored \n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
		{ "ToolTip", "@return       Total number of animation data keys stored" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataModel_GetNumberOfKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataModel, nullptr, "GetNumberOfKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationDataModel_GetNumberOfKeys_Statics::AnimationDataModel_eventGetNumberOfKeys_Parms), Z_Construct_UFunction_UAnimationDataModel_GetNumberOfKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetNumberOfKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_GetNumberOfKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetNumberOfKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationDataModel_GetNumberOfKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataModel_GetNumberOfKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationDataModel_GetNumberOfTransformCurves_Statics
	{
		struct AnimationDataModel_eventGetNumberOfTransformCurves_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationDataModel_GetNumberOfTransformCurves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventGetNumberOfTransformCurves_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataModel_GetNumberOfTransformCurves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetNumberOfTransformCurves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_GetNumberOfTransformCurves_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09Total number of stored FTransform curves\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
		{ "ToolTip", "@return       Total number of stored FTransform curves" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataModel_GetNumberOfTransformCurves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataModel, nullptr, "GetNumberOfTransformCurves", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationDataModel_GetNumberOfTransformCurves_Statics::AnimationDataModel_eventGetNumberOfTransformCurves_Parms), Z_Construct_UFunction_UAnimationDataModel_GetNumberOfTransformCurves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetNumberOfTransformCurves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_GetNumberOfTransformCurves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetNumberOfTransformCurves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationDataModel_GetNumberOfTransformCurves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataModel_GetNumberOfTransformCurves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationDataModel_GetNumBoneTracks_Statics
	{
		struct AnimationDataModel_eventGetNumBoneTracks_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationDataModel_GetNumBoneTracks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventGetNumBoneTracks_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataModel_GetNumBoneTracks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetNumBoneTracks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_GetNumBoneTracks_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09Total number of bone animation tracks\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
		{ "ToolTip", "@return       Total number of bone animation tracks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataModel_GetNumBoneTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataModel, nullptr, "GetNumBoneTracks", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationDataModel_GetNumBoneTracks_Statics::AnimationDataModel_eventGetNumBoneTracks_Parms), Z_Construct_UFunction_UAnimationDataModel_GetNumBoneTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetNumBoneTracks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_GetNumBoneTracks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetNumBoneTracks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationDataModel_GetNumBoneTracks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataModel_GetNumBoneTracks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationDataModel_GetPlayLength_Statics
	{
		struct AnimationDataModel_eventGetPlayLength_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UAnimationDataModel_GetPlayLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventGetPlayLength_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataModel_GetPlayLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_GetPlayLength_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_GetPlayLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "Comment", "/**\n\x09* @return\x09Total length of play-able animation data \n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
		{ "ToolTip", "@return       Total length of play-able animation data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataModel_GetPlayLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataModel, nullptr, "GetPlayLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationDataModel_GetPlayLength_Statics::AnimationDataModel_eventGetPlayLength_Parms), Z_Construct_UFunction_UAnimationDataModel_GetPlayLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetPlayLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_GetPlayLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_GetPlayLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationDataModel_GetPlayLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataModel_GetPlayLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex_Statics
	{
		struct AnimationDataModel_eventIsValidBoneTrackIndex_Parms
		{
			int32 TrackIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventIsValidBoneTrackIndex_Parms, TrackIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationDataModel_eventIsValidBoneTrackIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationDataModel_eventIsValidBoneTrackIndex_Parms), &Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex_Statics::NewProp_TrackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataModel, nullptr, "IsValidBoneTrackIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex_Statics::AnimationDataModel_eventIsValidBoneTrackIndex_Parms), Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics
	{
		struct AnimationDataModel_eventIsValidBoneTrackName_Parms
		{
			FName TrackName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::NewProp_TrackName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationDataModel_eventIsValidBoneTrackName_Parms, TrackName), METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::NewProp_TrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::NewProp_TrackName_MetaData)) };
	void Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationDataModel_eventIsValidBoneTrackName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationDataModel_eventIsValidBoneTrackName_Parms), &Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationDataModel" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataModel, nullptr, "IsValidBoneTrackName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::AnimationDataModel_eventIsValidBoneTrackName_Parms), Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationDataModel);
	UClass* Z_Construct_UClass_UAnimationDataModel_NoRegister()
	{
		return UAnimationDataModel::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationDataModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationDataModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationDataModel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationDataModel_GetAnimationSequence, "GetAnimationSequence" }, // 559079212
		{ &Z_Construct_UFunction_UAnimationDataModel_GetBoneAnimationTracks, "GetBoneAnimationTracks" }, // 2352737877
		{ &Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByIndex, "GetBoneTrackByIndex" }, // 3987483389
		{ &Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackByName, "GetBoneTrackByName" }, // 1755590948
		{ &Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndex, "GetBoneTrackIndex" }, // 855259692
		{ &Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackIndexByName, "GetBoneTrackIndexByName" }, // 2072757291
		{ &Z_Construct_UFunction_UAnimationDataModel_GetBoneTrackNames, "GetBoneTrackNames" }, // 2593044888
		{ &Z_Construct_UFunction_UAnimationDataModel_GetFrameRate, "GetFrameRate" }, // 1837533469
		{ &Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFloatCurves, "GetNumberOfFloatCurves" }, // 723301686
		{ &Z_Construct_UFunction_UAnimationDataModel_GetNumberOfFrames, "GetNumberOfFrames" }, // 1107388858
		{ &Z_Construct_UFunction_UAnimationDataModel_GetNumberOfKeys, "GetNumberOfKeys" }, // 1294103460
		{ &Z_Construct_UFunction_UAnimationDataModel_GetNumberOfTransformCurves, "GetNumberOfTransformCurves" }, // 3734419327
		{ &Z_Construct_UFunction_UAnimationDataModel_GetNumBoneTracks, "GetNumBoneTracks" }, // 2197603087
		{ &Z_Construct_UFunction_UAnimationDataModel_GetPlayLength, "GetPlayLength" }, // 2949582834
		{ &Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackIndex, "IsValidBoneTrackIndex" }, // 3672457409
		{ &Z_Construct_UFunction_UAnimationDataModel_IsValidBoneTrackName, "IsValidBoneTrackName" }, // 201192559
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationDataModel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataModel.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationDataModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAnimationDataModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationDataModel_Statics::ClassParams = {
		&UAnimationDataModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationDataModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationDataModel()
	{
		if (!Z_Registration_Info_UClass_UAnimationDataModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationDataModel.OuterSingleton, Z_Construct_UClass_UAnimationDataModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationDataModel.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimationDataModel>()
	{
		return UAnimationDataModel::StaticClass();
	}
	UAnimationDataModel::UAnimationDataModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationDataModel);
	UAnimationDataModel::~UAnimationDataModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_Statics::ScriptStructInfo[] = {
		{ FBoneAnimationTrack::StaticStruct, Z_Construct_UScriptStruct_FBoneAnimationTrack_Statics::NewStructOps, TEXT("BoneAnimationTrack"), &Z_Registration_Info_UScriptStruct_BoneAnimationTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneAnimationTrack), 3584978593U) },
		{ FAnimationCurveData::StaticStruct, Z_Construct_UScriptStruct_FAnimationCurveData_Statics::NewStructOps, TEXT("AnimationCurveData"), &Z_Registration_Info_UScriptStruct_AnimationCurveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimationCurveData), 381043962U) },
		{ FAnimatedBoneAttribute::StaticStruct, Z_Construct_UScriptStruct_FAnimatedBoneAttribute_Statics::NewStructOps, TEXT("AnimatedBoneAttribute"), &Z_Registration_Info_UScriptStruct_AnimatedBoneAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimatedBoneAttribute), 3618278899U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationDataModel, UAnimationDataModel::StaticClass, TEXT("UAnimationDataModel"), &Z_Registration_Info_UClass_UAnimationDataModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationDataModel), 870876912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_3254324259(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataModel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
