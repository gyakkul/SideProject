// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNodes/AnimNode_PoseDriver.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
#include "RBF/RBFSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_PoseDriver() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod();
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseDriver();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseHandler();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPoseDriverTarget();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPoseDriverTransform();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRBFParams();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoseDriverType;
	static UEnum* EPoseDriverType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPoseDriverType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPoseDriverType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EPoseDriverType"));
		}
		return Z_Registration_Info_UEnum_EPoseDriverType.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EPoseDriverType>()
	{
		return EPoseDriverType_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType_Statics::Enumerators[] = {
		{ "EPoseDriverType::SwingAndTwist", (int64)EPoseDriverType::SwingAndTwist },
		{ "EPoseDriverType::SwingOnly", (int64)EPoseDriverType::SwingOnly },
		{ "EPoseDriverType::Translation", (int64)EPoseDriverType::Translation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// Deprecated\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "SwingAndTwist.Name", "EPoseDriverType::SwingAndTwist" },
		{ "SwingOnly.Name", "EPoseDriverType::SwingOnly" },
		{ "ToolTip", "Deprecated" },
		{ "Translation.Name", "EPoseDriverType::Translation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"EPoseDriverType",
		"EPoseDriverType",
		Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType()
	{
		if (!Z_Registration_Info_UEnum_EPoseDriverType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoseDriverType.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPoseDriverType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoseDriverSource;
	static UEnum* EPoseDriverSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPoseDriverSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPoseDriverSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EPoseDriverSource"));
		}
		return Z_Registration_Info_UEnum_EPoseDriverSource.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EPoseDriverSource>()
	{
		return EPoseDriverSource_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource_Statics::Enumerators[] = {
		{ "EPoseDriverSource::Rotation", (int64)EPoseDriverSource::Rotation },
		{ "EPoseDriverSource::Translation", (int64)EPoseDriverSource::Translation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Transform aspect used to drive interpolation */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "Rotation.Comment", "/** Drive using rotation */" },
		{ "Rotation.Name", "EPoseDriverSource::Rotation" },
		{ "Rotation.ToolTip", "Drive using rotation" },
		{ "ToolTip", "Transform aspect used to drive interpolation" },
		{ "Translation.Comment", "/** Driver using translation */" },
		{ "Translation.Name", "EPoseDriverSource::Translation" },
		{ "Translation.ToolTip", "Driver using translation" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"EPoseDriverSource",
		"EPoseDriverSource",
		Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource()
	{
		if (!Z_Registration_Info_UEnum_EPoseDriverSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoseDriverSource.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPoseDriverSource.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoseDriverOutput;
	static UEnum* EPoseDriverOutput_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPoseDriverOutput.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPoseDriverOutput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("EPoseDriverOutput"));
		}
		return Z_Registration_Info_UEnum_EPoseDriverOutput.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UEnum* StaticEnum<EPoseDriverOutput>()
	{
		return EPoseDriverOutput_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput_Statics::Enumerators[] = {
		{ "EPoseDriverOutput::DrivePoses", (int64)EPoseDriverOutput::DrivePoses },
		{ "EPoseDriverOutput::DriveCurves", (int64)EPoseDriverOutput::DriveCurves },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Options for what PoseDriver should be driving */" },
		{ "DriveCurves.Comment", "/** Use the target's DrivenName to drive curves */" },
		{ "DriveCurves.Name", "EPoseDriverOutput::DriveCurves" },
		{ "DriveCurves.ToolTip", "Use the target's DrivenName to drive curves" },
		{ "DrivePoses.Comment", "/** Use target's DrivenName to drive poses from the assigned PoseAsset */" },
		{ "DrivePoses.Name", "EPoseDriverOutput::DrivePoses" },
		{ "DrivePoses.ToolTip", "Use target's DrivenName to drive poses from the assigned PoseAsset" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Options for what PoseDriver should be driving" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		"EPoseDriverOutput",
		"EPoseDriverOutput",
		Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput()
	{
		if (!Z_Registration_Info_UEnum_EPoseDriverOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoseDriverOutput.InnerSingleton, Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPoseDriverOutput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseDriverTransform;
class UScriptStruct* FPoseDriverTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseDriverTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseDriverTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseDriverTransform, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("PoseDriverTransform"));
	}
	return Z_Registration_Info_UScriptStruct_PoseDriverTransform.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FPoseDriverTransform>()
{
	return FPoseDriverTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseDriverTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Translation and rotation for a particular bone at a particular target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Translation and rotation for a particular bone at a particular target" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseDriverTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetTranslation_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Translation of this target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Translation of this target" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetTranslation = { "TargetTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseDriverTransform, TargetTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetRotation_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Rotation of this target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Rotation of this target" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseDriverTransform, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewProp_TargetRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"PoseDriverTransform",
		sizeof(FPoseDriverTransform),
		alignof(FPoseDriverTransform),
		Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseDriverTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseDriverTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseDriverTransform.InnerSingleton, Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseDriverTransform.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseDriverTarget;
class UScriptStruct* FPoseDriverTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseDriverTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseDriverTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseDriverTarget, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("PoseDriverTarget"));
	}
	return Z_Registration_Info_UScriptStruct_PoseDriverTarget.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FPoseDriverTarget>()
{
	return FPoseDriverTarget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseDriverTarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneTransforms;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetScale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceMethod;
		static const UECodeGen_Private::FBytePropertyParams NewProp_FunctionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FunctionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyCustomCurve_MetaData[];
#endif
		static void NewProp_bApplyCustomCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyCustomCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrivenName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DrivenName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHidden_MetaData[];
#endif
		static void NewProp_bIsHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHidden;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Information about each target in the PoseDriver */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Information about each target in the PoseDriver" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseDriverTarget>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_BoneTransforms_Inner = { "BoneTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPoseDriverTransform, METADATA_PARAMS(nullptr, 0) }; // 3254880749
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_BoneTransforms_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Translation of this target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Translation of this target" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_BoneTransforms = { "BoneTransforms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseDriverTarget, BoneTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_BoneTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_BoneTransforms_MetaData)) }; // 3254880749
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetRotation_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Rotation of this target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Rotation of this target" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetRotation = { "TargetRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseDriverTarget, TargetRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetScale_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Scale applied to this target's function - a larger value will activate this target sooner */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Scale applied to this target's function - a larger value will activate this target sooner" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetScale = { "TargetScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseDriverTarget, TargetScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetScale_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DistanceMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DistanceMethod_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Override for the distance method to use for each target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Override for the distance method to use for each target" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DistanceMethod = { "DistanceMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseDriverTarget, DistanceMethod), Z_Construct_UEnum_AnimGraphRuntime_ERBFDistanceMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DistanceMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DistanceMethod_MetaData)) }; // 67002488
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_FunctionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_FunctionType_MetaData[] = {
		{ "Category", "RBFData" },
		{ "Comment", "/** Override for the function method to use for each target */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Override for the function method to use for each target" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_FunctionType = { "FunctionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseDriverTarget, FunctionType), Z_Construct_UEnum_AnimGraphRuntime_ERBFFunctionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_FunctionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_FunctionType_MetaData)) }; // 4048311969
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bApplyCustomCurve_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** If we should apply a custom curve mapping to how this target activates */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "If we should apply a custom curve mapping to how this target activates" },
	};
#endif
	void Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bApplyCustomCurve_SetBit(void* Obj)
	{
		((FPoseDriverTarget*)Obj)->bApplyCustomCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bApplyCustomCurve = { "bApplyCustomCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPoseDriverTarget), &Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bApplyCustomCurve_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bApplyCustomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bApplyCustomCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_CustomCurve_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Custom curve mapping to apply if bApplyCustomCurve is true */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Custom curve mapping to apply if bApplyCustomCurve is true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_CustomCurve = { "CustomCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseDriverTarget, CustomCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_CustomCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_CustomCurve_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DrivenName_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** \n\x09 *\x09Name of item to drive - depends on DriveOutput setting.  \n\x09 *\x09If DriveOutput is DrivePoses, this should be the name of a pose in the assigned PoseAsset\n\x09 *\x09If DriveOutput is DriveCurves, this is the name of the curve (morph target, material param etc) to drive\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Name of item to drive - depends on DriveOutput setting.\nIf DriveOutput is DrivePoses, this should be the name of a pose in the assigned PoseAsset\nIf DriveOutput is DriveCurves, this is the name of the curve (morph target, material param etc) to drive" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DrivenName = { "DrivenName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseDriverTarget, DrivenName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DrivenName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DrivenName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bIsHidden_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** If we should hide this pose from the UI */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "If we should hide this pose from the UI" },
	};
#endif
	void Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bIsHidden_SetBit(void* Obj)
	{
		((FPoseDriverTarget*)Obj)->bIsHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bIsHidden = { "bIsHidden", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPoseDriverTarget), &Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bIsHidden_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bIsHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bIsHidden_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_BoneTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_BoneTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_TargetScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DistanceMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DistanceMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_FunctionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_FunctionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bApplyCustomCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_CustomCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_DrivenName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewProp_bIsHidden,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		nullptr,
		&NewStructOps,
		"PoseDriverTarget",
		sizeof(FPoseDriverTarget),
		alignof(FPoseDriverTarget),
		Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseDriverTarget()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseDriverTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseDriverTarget.InnerSingleton, Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseDriverTarget.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_PoseDriver>() == std::is_polymorphic<FAnimNode_PoseHandler>(), "USTRUCT FAnimNode_PoseDriver cannot be polymorphic unless super FAnimNode_PoseHandler is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_PoseDriver;
class UScriptStruct* FAnimNode_PoseDriver::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseDriver.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_PoseDriver.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseDriver, (UObject*)Z_Construct_UPackage__Script_AnimGraphRuntime(), TEXT("AnimNode_PoseDriver"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_PoseDriver.OuterSingleton;
}
template<> ANIMGRAPHRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_PoseDriver>()
{
	return FAnimNode_PoseDriver::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePose;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceBones;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OnlyDriveBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnlyDriveBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OnlyDriveBones;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoseTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoseTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PoseTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvalSpaceBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EvalSpaceBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvalFromRefPose_MetaData[];
#endif
		static void NewProp_bEvalFromRefPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvalFromRefPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RBFParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RBFParams;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwistAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TwistAxis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadialScaling_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadialScaling;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_DriveSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriveSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DriveSource;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DriveOutput_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DriveOutput_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DriveOutput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyDriveSelectedBones_MetaData[];
#endif
		static void NewProp_bOnlyDriveSelectedBones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyDriveSelectedBones;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSoloDrivenOnly_MetaData[];
#endif
		static void NewProp_bSoloDrivenOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSoloDrivenOnly;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** RBF based orientation driver */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "RBF based orientation driver" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PoseDriver>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourcePose_MetaData[] = {
		{ "Category", "Links" },
		{ "Comment", "/** Bones to use for driving parameters based on their transform */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Bones to use for driving parameters based on their transform" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourcePose = { "SourcePose", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, SourcePose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourcePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourcePose_MetaData)) }; // 2393943538
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBones_Inner = { "SourceBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBones_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Bone to use for driving parameters based on its orientation */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Bone to use for driving parameters based on its orientation" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBones = { "SourceBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, SourceBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBones_MetaData)) }; // 2906976723
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_OnlyDriveBones_Inner = { "OnlyDriveBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_OnlyDriveBones_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** If bFilterDrivenBones is specified, only these bones will be modified by this node */" },
		{ "EditCondition", "bOnlyDriveSelectedBones" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "If bFilterDrivenBones is specified, only these bones will be modified by this node" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_OnlyDriveBones = { "OnlyDriveBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, OnlyDriveBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_OnlyDriveBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_OnlyDriveBones_MetaData)) }; // 2906976723
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_PoseTargets_Inner = { "PoseTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPoseDriverTarget, METADATA_PARAMS(nullptr, 0) }; // 1406543900
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_PoseTargets_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Targets used to compare with current pose and drive morphs/poses */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Targets used to compare with current pose and drive morphs/poses" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_PoseTargets = { "PoseTargets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, PoseTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_PoseTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_PoseTargets_MetaData)) }; // 1406543900
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_EvalSpaceBone_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** \n\x09 *\x09Optional other bone space to use when reading SourceBone transform.\n\x09 *\x09If not specified, we just use local space of SourceBone (ie relative to parent bone) \n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Optional other bone space to use when reading SourceBone transform.\nIf not specified, we just use local space of SourceBone (ie relative to parent bone)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_EvalSpaceBone = { "EvalSpaceBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, EvalSpaceBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_EvalSpaceBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_EvalSpaceBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bEvalFromRefPose_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/**\n\x09 *\x09""Evaluate SourceBone transform relative from its Reference Pose.\n\x09 *  This is recommended when using Swing and Twist Angle as Distance Method, since the twist will be computed from RefPose.\n\x09 * \n\x09 *\x09If not specified, we just use local space of SourceBone (ie relative to parent bone)\n\x09 *  This mode won't work in conjunction with EvalSpaceBone;\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Evaluate SourceBone transform relative from its Reference Pose.\nThis is recommended when using Swing and Twist Angle as Distance Method, since the twist will be computed from RefPose.\n\nIf not specified, we just use local space of SourceBone (ie relative to parent bone)\nThis mode won't work in conjunction with EvalSpaceBone;" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bEvalFromRefPose_SetBit(void* Obj)
	{
		((FAnimNode_PoseDriver*)Obj)->bEvalFromRefPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bEvalFromRefPose = { "bEvalFromRefPose", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_PoseDriver), &Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bEvalFromRefPose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bEvalFromRefPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bEvalFromRefPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RBFParams_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Parameters used by RBF solver */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Parameters used by RBF solver" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RBFParams = { "RBFParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, RBFParams), Z_Construct_UScriptStruct_FRBFParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RBFParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RBFParams_MetaData)) }; // 637132977
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBone_MetaData[] = {
		{ "Comment", "// Deprecated\n" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBone = { "SourceBone", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, SourceBone_DEPRECATED), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_TwistAxis_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_TwistAxis = { "TwistAxis", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, TwistAxis_DEPRECATED), Z_Construct_UEnum_Engine_EBoneAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_TwistAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_TwistAxis_MetaData)) }; // 906799129
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, Type_DEPRECATED), Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_Type_MetaData)) }; // 274977172
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RadialScaling_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RadialScaling = { "RadialScaling", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, RadialScaling_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RadialScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RadialScaling_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveSource_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Which part of the transform is read */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Which part of the transform is read" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveSource = { "DriveSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, DriveSource), Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverSource, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveSource_MetaData)) }; // 1408224931
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveOutput_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveOutput_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** Whether we should drive poses or curves */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Whether we should drive poses or curves" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveOutput = { "DriveOutput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, DriveOutput), Z_Construct_UEnum_AnimGraphRuntime_EPoseDriverOutput, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveOutput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveOutput_MetaData)) }; // 1333837059
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bOnlyDriveSelectedBones_MetaData[] = {
		{ "Category", "PoseDriver" },
		{ "Comment", "/** If we should filter bones to be driven using the DrivenBonesFilter array */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "If we should filter bones to be driven using the DrivenBonesFilter array" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bOnlyDriveSelectedBones_SetBit(void* Obj)
	{
		((FAnimNode_PoseDriver*)Obj)->bOnlyDriveSelectedBones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bOnlyDriveSelectedBones = { "bOnlyDriveSelectedBones", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FAnimNode_PoseDriver), &Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bOnlyDriveSelectedBones_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bOnlyDriveSelectedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bOnlyDriveSelectedBones_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bSoloDrivenOnly_MetaData[] = {
		{ "Comment", "/** Only solo the driven poses, and don't move the source joint(s) to match */" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "Only solo the driven poses, and don't move the source joint(s) to match" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bSoloDrivenOnly_SetBit(void* Obj)
	{
		((FAnimNode_PoseDriver*)Obj)->bSoloDrivenOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bSoloDrivenOnly = { "bSoloDrivenOnly", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_PoseDriver), &Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bSoloDrivenOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bSoloDrivenOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bSoloDrivenOnly_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/*\n\x09 * Max LOD that this node is allowed to run\n\x09 * For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n\x09 * when the component LOD becomes 3, it will stop update/evaluate\n\x09 * currently transition would be issue and that has to be re-visited\n\x09 */" },
		{ "DisplayName", "LOD Threshold" },
		{ "ModuleRelativePath", "Public/AnimNodes/AnimNode_PoseDriver.h" },
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_PoseDriver, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_LODThreshold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourcePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_OnlyDriveBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_OnlyDriveBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_PoseTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_PoseTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_EvalSpaceBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bEvalFromRefPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RBFParams,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_SourceBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_TwistAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_RadialScaling,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveOutput_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_DriveOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bOnlyDriveSelectedBones,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_bSoloDrivenOnly,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewProp_LODThreshold,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
		Z_Construct_UScriptStruct_FAnimNode_PoseHandler,
		&NewStructOps,
		"AnimNode_PoseDriver",
		sizeof(FAnimNode_PoseDriver),
		alignof(FAnimNode_PoseDriver),
		Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PoseDriver()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_PoseDriver.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_PoseDriver.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_PoseDriver.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_Statics::EnumInfo[] = {
		{ EPoseDriverType_StaticEnum, TEXT("EPoseDriverType"), &Z_Registration_Info_UEnum_EPoseDriverType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 274977172U) },
		{ EPoseDriverSource_StaticEnum, TEXT("EPoseDriverSource"), &Z_Registration_Info_UEnum_EPoseDriverSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1408224931U) },
		{ EPoseDriverOutput_StaticEnum, TEXT("EPoseDriverOutput"), &Z_Registration_Info_UEnum_EPoseDriverOutput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1333837059U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_Statics::ScriptStructInfo[] = {
		{ FPoseDriverTransform::StaticStruct, Z_Construct_UScriptStruct_FPoseDriverTransform_Statics::NewStructOps, TEXT("PoseDriverTransform"), &Z_Registration_Info_UScriptStruct_PoseDriverTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseDriverTransform), 3254880749U) },
		{ FPoseDriverTarget::StaticStruct, Z_Construct_UScriptStruct_FPoseDriverTarget_Statics::NewStructOps, TEXT("PoseDriverTarget"), &Z_Registration_Info_UScriptStruct_PoseDriverTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseDriverTarget), 1406543900U) },
		{ FAnimNode_PoseDriver::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_PoseDriver_Statics::NewStructOps, TEXT("AnimNode_PoseDriver"), &Z_Registration_Info_UScriptStruct_AnimNode_PoseDriver, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_PoseDriver), 1501948622U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_3220265877(TEXT("/Script/AnimGraphRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNodes_AnimNode_PoseDriver_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
