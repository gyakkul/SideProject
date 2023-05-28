// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimTypes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimTypes() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat4f();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_URawAnimSequenceTrackExtensions();
	ENGINE_API UClass* Z_Construct_UClass_URawAnimSequenceTrackExtensions_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdditiveAnimationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimInterpolationType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAxisOption();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneAxis();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneRotationSource();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECurveBlendOption();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMontageNotifyTickType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENotifyFilterType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimLinkableElement();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSyncMarker();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMarkerSyncData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerBoneBlendWeight();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerBoneBlendWeights();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawAnimSequenceTrack();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTrackToSkeletonMap();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoneAxis;
	static UEnum* EBoneAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBoneAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBoneAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneAxis, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBoneAxis"));
		}
		return Z_Registration_Info_UEnum_EBoneAxis.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBoneAxis>()
	{
		return EBoneAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EBoneAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EBoneAxis_Statics::Enumerators[] = {
		{ "BA_X", (int64)BA_X },
		{ "BA_Y", (int64)BA_Y },
		{ "BA_Z", (int64)BA_Z },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EBoneAxis_Statics::Enum_MetaDataParams[] = {
		{ "BA_X.DisplayName", "X Axis" },
		{ "BA_X.Name", "BA_X" },
		{ "BA_Y.DisplayName", "Y Axis" },
		{ "BA_Y.Name", "BA_Y" },
		{ "BA_Z.DisplayName", "Z Axis" },
		{ "BA_Z.Name", "BA_Z" },
		{ "Comment", "/** Enum for specifying a specific axis of a bone */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Enum for specifying a specific axis of a bone" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBoneAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EBoneAxis",
		"EBoneAxis",
		Z_Construct_UEnum_Engine_EBoneAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EBoneAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EBoneAxis()
	{
		if (!Z_Registration_Info_UEnum_EBoneAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoneAxis.InnerSingleton, Z_Construct_UEnum_Engine_EBoneAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBoneAxis.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoneControlSpace;
	static UEnum* EBoneControlSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBoneControlSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBoneControlSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneControlSpace, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBoneControlSpace"));
		}
		return Z_Registration_Info_UEnum_EBoneControlSpace.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBoneControlSpace>()
	{
		return EBoneControlSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EBoneControlSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EBoneControlSpace_Statics::Enumerators[] = {
		{ "BCS_WorldSpace", (int64)BCS_WorldSpace },
		{ "BCS_ComponentSpace", (int64)BCS_ComponentSpace },
		{ "BCS_ParentBoneSpace", (int64)BCS_ParentBoneSpace },
		{ "BCS_BoneSpace", (int64)BCS_BoneSpace },
		{ "BCS_MAX", (int64)BCS_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EBoneControlSpace_Statics::Enum_MetaDataParams[] = {
		{ "BCS_BoneSpace.Comment", "/** Set position of bone in its own reference frame. */" },
		{ "BCS_BoneSpace.DisplayName", "Bone Space" },
		{ "BCS_BoneSpace.Name", "BCS_BoneSpace" },
		{ "BCS_BoneSpace.ToolTip", "Set position of bone in its own reference frame." },
		{ "BCS_ComponentSpace.Comment", "/** Set position of bone in SkeletalMeshComponent's reference frame. */" },
		{ "BCS_ComponentSpace.DisplayName", "Component Space" },
		{ "BCS_ComponentSpace.Name", "BCS_ComponentSpace" },
		{ "BCS_ComponentSpace.ToolTip", "Set position of bone in SkeletalMeshComponent's reference frame." },
		{ "BCS_MAX.Name", "BCS_MAX" },
		{ "BCS_ParentBoneSpace.Comment", "/** Set position of bone relative to parent bone. */" },
		{ "BCS_ParentBoneSpace.DisplayName", "Parent Bone Space" },
		{ "BCS_ParentBoneSpace.Name", "BCS_ParentBoneSpace" },
		{ "BCS_ParentBoneSpace.ToolTip", "Set position of bone relative to parent bone." },
		{ "BCS_WorldSpace.Comment", "/** Set absolute position of bone in world space. */" },
		{ "BCS_WorldSpace.DisplayName", "World Space" },
		{ "BCS_WorldSpace.Name", "BCS_WorldSpace" },
		{ "BCS_WorldSpace.ToolTip", "Set absolute position of bone in world space." },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Enum for controlling which reference frame a controller is applied in. */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Enum for controlling which reference frame a controller is applied in." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBoneControlSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EBoneControlSpace",
		"EBoneControlSpace",
		Z_Construct_UEnum_Engine_EBoneControlSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneControlSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EBoneControlSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneControlSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace()
	{
		if (!Z_Registration_Info_UEnum_EBoneControlSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoneControlSpace.InnerSingleton, Z_Construct_UEnum_Engine_EBoneControlSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBoneControlSpace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoneRotationSource;
	static UEnum* EBoneRotationSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBoneRotationSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBoneRotationSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneRotationSource, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBoneRotationSource"));
		}
		return Z_Registration_Info_UEnum_EBoneRotationSource.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBoneRotationSource>()
	{
		return EBoneRotationSource_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EBoneRotationSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EBoneRotationSource_Statics::Enumerators[] = {
		{ "BRS_KeepComponentSpaceRotation", (int64)BRS_KeepComponentSpaceRotation },
		{ "BRS_KeepLocalSpaceRotation", (int64)BRS_KeepLocalSpaceRotation },
		{ "BRS_CopyFromTarget", (int64)BRS_CopyFromTarget },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EBoneRotationSource_Statics::Enum_MetaDataParams[] = {
		{ "BRS_CopyFromTarget.Comment", "/** Copy rotation of target to bone. */" },
		{ "BRS_CopyFromTarget.DisplayName", "Copy Target Rotation" },
		{ "BRS_CopyFromTarget.Name", "BRS_CopyFromTarget" },
		{ "BRS_CopyFromTarget.ToolTip", "Copy rotation of target to bone." },
		{ "BRS_KeepComponentSpaceRotation.Comment", "/** Don't change rotation at all. */" },
		{ "BRS_KeepComponentSpaceRotation.DisplayName", "No Change (Preserve Existing Component Space Rotation)" },
		{ "BRS_KeepComponentSpaceRotation.Name", "BRS_KeepComponentSpaceRotation" },
		{ "BRS_KeepComponentSpaceRotation.ToolTip", "Don't change rotation at all." },
		{ "BRS_KeepLocalSpaceRotation.Comment", "/** Keep forward direction vector relative to the parent bone. */" },
		{ "BRS_KeepLocalSpaceRotation.DisplayName", "Maintain Local Rotation Relative to Parent" },
		{ "BRS_KeepLocalSpaceRotation.Name", "BRS_KeepLocalSpaceRotation" },
		{ "BRS_KeepLocalSpaceRotation.ToolTip", "Keep forward direction vector relative to the parent bone." },
		{ "Comment", "/** Enum for specifying the source of a bone's rotation. */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Enum for specifying the source of a bone's rotation." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBoneRotationSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EBoneRotationSource",
		"EBoneRotationSource",
		Z_Construct_UEnum_Engine_EBoneRotationSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneRotationSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EBoneRotationSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneRotationSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EBoneRotationSource()
	{
		if (!Z_Registration_Info_UEnum_EBoneRotationSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoneRotationSource.InnerSingleton, Z_Construct_UEnum_Engine_EBoneRotationSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBoneRotationSource.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMontageNotifyTickType;
	static UEnum* EMontageNotifyTickType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMontageNotifyTickType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMontageNotifyTickType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMontageNotifyTickType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMontageNotifyTickType"));
		}
		return Z_Registration_Info_UEnum_EMontageNotifyTickType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMontageNotifyTickType::Type>()
	{
		return EMontageNotifyTickType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMontageNotifyTickType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMontageNotifyTickType_Statics::Enumerators[] = {
		{ "EMontageNotifyTickType::Queued", (int64)EMontageNotifyTickType::Queued },
		{ "EMontageNotifyTickType::BranchingPoint", (int64)EMontageNotifyTickType::BranchingPoint },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMontageNotifyTickType_Statics::Enum_MetaDataParams[] = {
		{ "BranchingPoint.Comment", "/** Trigger notifies as they are encountered (Slower). Suitable for changing sections or montage position. */" },
		{ "BranchingPoint.Name", "EMontageNotifyTickType::BranchingPoint" },
		{ "BranchingPoint.ToolTip", "Trigger notifies as they are encountered (Slower). Suitable for changing sections or montage position." },
		{ "Comment", "/** Ticking method for AnimNotifies in AnimMontages. */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "Queued.Comment", "/** Queue notifies, and trigger them at the end of the evaluation phase (faster). Not suitable for changing sections or montage position. */" },
		{ "Queued.Name", "EMontageNotifyTickType::Queued" },
		{ "Queued.ToolTip", "Queue notifies, and trigger them at the end of the evaluation phase (faster). Not suitable for changing sections or montage position." },
		{ "ToolTip", "Ticking method for AnimNotifies in AnimMontages." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMontageNotifyTickType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMontageNotifyTickType",
		"EMontageNotifyTickType::Type",
		Z_Construct_UEnum_Engine_EMontageNotifyTickType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMontageNotifyTickType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMontageNotifyTickType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMontageNotifyTickType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMontageNotifyTickType()
	{
		if (!Z_Registration_Info_UEnum_EMontageNotifyTickType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMontageNotifyTickType.InnerSingleton, Z_Construct_UEnum_Engine_EMontageNotifyTickType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMontageNotifyTickType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENotifyFilterType;
	static UEnum* ENotifyFilterType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENotifyFilterType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENotifyFilterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENotifyFilterType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENotifyFilterType"));
		}
		return Z_Registration_Info_UEnum_ENotifyFilterType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENotifyFilterType::Type>()
	{
		return ENotifyFilterType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ENotifyFilterType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ENotifyFilterType_Statics::Enumerators[] = {
		{ "ENotifyFilterType::NoFiltering", (int64)ENotifyFilterType::NoFiltering },
		{ "ENotifyFilterType::LOD", (int64)ENotifyFilterType::LOD },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ENotifyFilterType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Filtering method for deciding whether to trigger a notify. */" },
		{ "LOD.Comment", "/** Filter By Skeletal Mesh LOD. */" },
		{ "LOD.Name", "ENotifyFilterType::LOD" },
		{ "LOD.ToolTip", "Filter By Skeletal Mesh LOD." },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "NoFiltering.Comment", "/** No filtering. */" },
		{ "NoFiltering.Name", "ENotifyFilterType::NoFiltering" },
		{ "NoFiltering.ToolTip", "No filtering." },
		{ "ToolTip", "Filtering method for deciding whether to trigger a notify." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENotifyFilterType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ENotifyFilterType",
		"ENotifyFilterType::Type",
		Z_Construct_UEnum_Engine_ENotifyFilterType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENotifyFilterType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ENotifyFilterType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENotifyFilterType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ENotifyFilterType()
	{
		if (!Z_Registration_Info_UEnum_ENotifyFilterType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENotifyFilterType.InnerSingleton, Z_Construct_UEnum_Engine_ENotifyFilterType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENotifyFilterType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerBoneBlendWeight;
class UScriptStruct* FPerBoneBlendWeight::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerBoneBlendWeight.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerBoneBlendWeight.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerBoneBlendWeight, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PerBoneBlendWeight"));
	}
	return Z_Registration_Info_UScriptStruct_PerBoneBlendWeight.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerBoneBlendWeight>()
{
	return FPerBoneBlendWeight::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerBoneBlendWeight>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_SourceIndex_MetaData[] = {
		{ "Comment", "/** Source index of the buffer. */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Source index of the buffer." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerBoneBlendWeight, SourceIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_SourceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_SourceIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_BlendWeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_BlendWeight = { "BlendWeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerBoneBlendWeight, BlendWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_BlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_BlendWeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_SourceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewProp_BlendWeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PerBoneBlendWeight",
		sizeof(FPerBoneBlendWeight),
		alignof(FPerBoneBlendWeight),
		Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerBoneBlendWeight()
	{
		if (!Z_Registration_Info_UScriptStruct_PerBoneBlendWeight.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerBoneBlendWeight.InnerSingleton, Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PerBoneBlendWeight.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerBoneBlendWeights;
class UScriptStruct* FPerBoneBlendWeights::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerBoneBlendWeights.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerBoneBlendWeights.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerBoneBlendWeights, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PerBoneBlendWeights"));
	}
	return Z_Registration_Info_UScriptStruct_PerBoneBlendWeights.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPerBoneBlendWeights>()
{
	return FPerBoneBlendWeights::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneBlendWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneBlendWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneBlendWeights;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerBoneBlendWeights>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::NewProp_BoneBlendWeights_Inner = { "BoneBlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPerBoneBlendWeight, METADATA_PARAMS(nullptr, 0) }; // 1941150986
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::NewProp_BoneBlendWeights_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::NewProp_BoneBlendWeights = { "BoneBlendWeights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerBoneBlendWeights, BoneBlendWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::NewProp_BoneBlendWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::NewProp_BoneBlendWeights_MetaData)) }; // 1941150986
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::NewProp_BoneBlendWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::NewProp_BoneBlendWeights,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PerBoneBlendWeights",
		sizeof(FPerBoneBlendWeights),
		alignof(FPerBoneBlendWeights),
		Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerBoneBlendWeights()
	{
		if (!Z_Registration_Info_UScriptStruct_PerBoneBlendWeights.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerBoneBlendWeights.InnerSingleton, Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PerBoneBlendWeights.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNotifyEvent>() == std::is_polymorphic<FAnimLinkableElement>(), "USTRUCT FAnimNotifyEvent cannot be polymorphic unless super FAnimLinkableElement is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNotifyEvent;
class UScriptStruct* FAnimNotifyEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNotifyEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNotifyEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyEvent, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNotifyEvent"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNotifyEvent.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNotifyEvent>()
{
	return FAnimNotifyEvent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayTime;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerTimeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerTimeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTriggerTimeOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTriggerTimeOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerWeightThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TriggerWeightThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Notify_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Notify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyStateClass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NotifyStateClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndLink_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndLink;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConvertedFromBranchingPoint_MetaData[];
#endif
		static void NewProp_bConvertedFromBranchingPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConvertedFromBranchingPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MontageTickType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MontageTickType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyTriggerChance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NotifyTriggerChance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyFilterType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_NotifyFilterType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyFilterLOD_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NotifyFilterLOD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerOnDedicatedServer_MetaData[];
#endif
		static void NewProp_bTriggerOnDedicatedServer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerOnDedicatedServer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTriggerOnFollower_MetaData[];
#endif
		static void NewProp_bTriggerOnFollower_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggerOnFollower;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NotifyColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Triggers an animation notify.  Each AnimNotifyEvent contains an AnimNotify object\n * which has its Notify method called and passed to the animation.\n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Triggers an animation notify.  Each AnimNotifyEvent contains an AnimNotify object\nwhich has its Notify method called and passed to the animation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNotifyEvent>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_DisplayTime_MetaData[] = {
		{ "Comment", "/** The user requested time for this notify */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "The user requested time for this notify" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_DisplayTime = { "DisplayTime", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, DisplayTime_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_DisplayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_DisplayTime_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerTimeOffset_MetaData[] = {
		{ "Comment", "/** An offset from the DisplayTime to the actual time we will trigger the notify, as we cannot always trigger it exactly at the time the user wants */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "An offset from the DisplayTime to the actual time we will trigger the notify, as we cannot always trigger it exactly at the time the user wants" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerTimeOffset = { "TriggerTimeOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, TriggerTimeOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerTimeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerTimeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndTriggerTimeOffset_MetaData[] = {
		{ "Comment", "/** An offset similar to TriggerTimeOffset but used for the end scrub handle of a notify state's duration */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "An offset similar to TriggerTimeOffset but used for the end scrub handle of a notify state's duration" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndTriggerTimeOffset = { "EndTriggerTimeOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, EndTriggerTimeOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndTriggerTimeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndTriggerTimeOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerWeightThreshold_MetaData[] = {
		{ "Category", "AnimNotifyEvent" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerWeightThreshold = { "TriggerWeightThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, TriggerWeightThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerWeightThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerWeightThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyName_MetaData[] = {
		{ "Category", "AnimNotifyEvent" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, NotifyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Notify_MetaData[] = {
		{ "Category", "AnimNotifyEvent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Notify = { "Notify", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, Notify), Z_Construct_UClass_UAnimNotify_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Notify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Notify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyStateClass_MetaData[] = {
		{ "Category", "AnimNotifyEvent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyStateClass = { "NotifyStateClass", nullptr, (EPropertyFlags)0x001600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, NotifyStateClass), Z_Construct_UClass_UAnimNotifyState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyStateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyStateClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndLink_MetaData[] = {
		{ "Comment", "/** Linkable element to use for the end handle representing a notify state duration */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Linkable element to use for the end handle representing a notify state duration" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndLink = { "EndLink", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, EndLink), Z_Construct_UScriptStruct_FAnimLinkableElement, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndLink_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndLink_MetaData)) }; // 293831235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bConvertedFromBranchingPoint_MetaData[] = {
		{ "Comment", "/** If TRUE, this notify has been converted from an old BranchingPoint. */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "If TRUE, this notify has been converted from an old BranchingPoint." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bConvertedFromBranchingPoint_SetBit(void* Obj)
	{
		((FAnimNotifyEvent*)Obj)->bConvertedFromBranchingPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bConvertedFromBranchingPoint = { "bConvertedFromBranchingPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNotifyEvent), &Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bConvertedFromBranchingPoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bConvertedFromBranchingPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bConvertedFromBranchingPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_MontageTickType_MetaData[] = {
		{ "Category", "AnimNotifyEvent" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_MontageTickType = { "MontageTickType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, MontageTickType), Z_Construct_UEnum_Engine_EMontageNotifyTickType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_MontageTickType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_MontageTickType_MetaData)) }; // 1915572903
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyTriggerChance_MetaData[] = {
		{ "Category", "AnimNotifyTriggerSettings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Defines the chance of of this notify triggering, 0 = No Chance, 1 = Always triggers */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Defines the chance of of this notify triggering, 0 = No Chance, 1 = Always triggers" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyTriggerChance = { "NotifyTriggerChance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, NotifyTriggerChance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyTriggerChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyTriggerChance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterType_MetaData[] = {
		{ "Category", "AnimNotifyTriggerSettings" },
		{ "Comment", "/** Defines a method for filtering notifies (stopping them triggering) e.g. by looking at the meshes current LOD */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Defines a method for filtering notifies (stopping them triggering) e.g. by looking at the meshes current LOD" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterType = { "NotifyFilterType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, NotifyFilterType), Z_Construct_UEnum_Engine_ENotifyFilterType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterType_MetaData)) }; // 2995808221
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterLOD_MetaData[] = {
		{ "Category", "AnimNotifyTriggerSettings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** LOD to start filtering this notify from.*/" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "LOD to start filtering this notify from." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterLOD = { "NotifyFilterLOD", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, NotifyFilterLOD), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterLOD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnDedicatedServer_MetaData[] = {
		{ "Category", "AnimNotifyTriggerSettings" },
		{ "Comment", "/** If disabled this notify will be skipped on dedicated servers */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "If disabled this notify will be skipped on dedicated servers" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnDedicatedServer_SetBit(void* Obj)
	{
		((FAnimNotifyEvent*)Obj)->bTriggerOnDedicatedServer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnDedicatedServer = { "bTriggerOnDedicatedServer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNotifyEvent), &Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnDedicatedServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnFollower_MetaData[] = {
		{ "Category", "AnimNotifyTriggerSettings" },
		{ "Comment", "/** If enabled this notify will trigger when the animation is a follower in a sync group (by default only the sync group leaders notifies trigger */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "If enabled this notify will trigger when the animation is a follower in a sync group (by default only the sync group leaders notifies trigger" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnFollower_SetBit(void* Obj)
	{
		((FAnimNotifyEvent*)Obj)->bTriggerOnFollower = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnFollower = { "bTriggerOnFollower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNotifyEvent), &Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnFollower_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnFollower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnFollower_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyColor_MetaData[] = {
		{ "Comment", "/** Color of Notify in editor */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Color of Notify in editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyColor = { "NotifyColor", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, NotifyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Guid_MetaData[] = {
		{ "Comment", "/** Guid for tracking notifies in editor */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Guid for tracking notifies in editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Guid_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TrackIndex_MetaData[] = {
		{ "Comment", "/** 'Track' that the notify exists on, used for visual placement in editor and sorting priority in runtime */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "'Track' that the notify exists on, used for visual placement in editor and sorting priority in runtime" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyEvent, TrackIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TrackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TrackIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_DisplayTime,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerTimeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndTriggerTimeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TriggerWeightThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Notify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyStateClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_EndLink,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bConvertedFromBranchingPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_MontageTickType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyTriggerChance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyFilterLOD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnDedicatedServer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_bTriggerOnFollower,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_NotifyColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_Guid,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewProp_TrackIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FAnimLinkableElement,
		&NewStructOps,
		"AnimNotifyEvent",
		sizeof(FAnimNotifyEvent),
		alignof(FAnimNotifyEvent),
		Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNotifyEvent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNotifyEvent.InnerSingleton, Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNotifyEvent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSyncMarker;
class UScriptStruct* FAnimSyncMarker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSyncMarker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSyncMarker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSyncMarker, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimSyncMarker"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSyncMarker.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimSyncMarker>()
{
	return FAnimSyncMarker::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimSyncMarker_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MarkerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrackIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSyncMarker>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_MarkerName_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "// The name of this marker\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "The name of this marker" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSyncMarker, MarkerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_MarkerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_MarkerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "// Time in seconds of this marker\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Time in seconds of this marker" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSyncMarker, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_Time_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_TrackIndex_MetaData[] = {
		{ "Comment", "// The editor track this marker sits on\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "The editor track this marker sits on" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_TrackIndex = { "TrackIndex", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSyncMarker, TrackIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_TrackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_TrackIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSyncMarker, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_Guid_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_MarkerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_Time,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_TrackIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewProp_Guid,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimSyncMarker",
		sizeof(FAnimSyncMarker),
		alignof(FAnimSyncMarker),
		Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSyncMarker()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimSyncMarker.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSyncMarker.InnerSingleton, Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimSyncMarker.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNotifyTrack;
class UScriptStruct* FAnimNotifyTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNotifyTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNotifyTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNotifyTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNotifyTrack"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNotifyTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNotifyTrack>()
{
	return FAnimNotifyTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Keyframe position data for one track.  Pos(i) occurs at Time(i).  Pos.Num() always equals Time.Num().\n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Keyframe position data for one track.  Pos(i) occurs at Time(i).  Pos.Num() always equals Time.Num()." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNotifyTrack>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyTrack, TrackName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackColor = { "TrackColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNotifyTrack, TrackColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewProp_TrackColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimNotifyTrack",
		sizeof(FAnimNotifyTrack),
		alignof(FAnimNotifyTrack),
		Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNotifyTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNotifyTrack.InnerSingleton, Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNotifyTrack.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAdditiveAnimationType;
	static UEnum* EAdditiveAnimationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAdditiveAnimationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAdditiveAnimationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAdditiveAnimationType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAdditiveAnimationType"));
		}
		return Z_Registration_Info_UEnum_EAdditiveAnimationType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAdditiveAnimationType>()
	{
		return EAdditiveAnimationType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAdditiveAnimationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAdditiveAnimationType_Statics::Enumerators[] = {
		{ "AAT_None", (int64)AAT_None },
		{ "AAT_LocalSpaceBase", (int64)AAT_LocalSpaceBase },
		{ "AAT_RotationOffsetMeshSpace", (int64)AAT_RotationOffsetMeshSpace },
		{ "AAT_MAX", (int64)AAT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAdditiveAnimationType_Statics::Enum_MetaDataParams[] = {
		{ "AAT_LocalSpaceBase.Comment", "/* Create Additive from LocalSpace Base. */" },
		{ "AAT_LocalSpaceBase.DisplayName", "Local Space" },
		{ "AAT_LocalSpaceBase.Name", "AAT_LocalSpaceBase" },
		{ "AAT_LocalSpaceBase.ToolTip", "Create Additive from LocalSpace Base." },
		{ "AAT_MAX.Name", "AAT_MAX" },
		{ "AAT_None.Comment", "/** No additive. */" },
		{ "AAT_None.DisplayName", "No additive" },
		{ "AAT_None.Name", "AAT_None" },
		{ "AAT_None.ToolTip", "No additive." },
		{ "AAT_RotationOffsetMeshSpace.Comment", "/* Create Additive from MeshSpace Rotation Only, Translation still will be LocalSpace. */" },
		{ "AAT_RotationOffsetMeshSpace.DisplayName", "Mesh Space" },
		{ "AAT_RotationOffsetMeshSpace.Name", "AAT_RotationOffsetMeshSpace" },
		{ "AAT_RotationOffsetMeshSpace.ToolTip", "Create Additive from MeshSpace Rotation Only, Translation still will be LocalSpace." },
		{ "Comment", "/** \n * Indicates whether an animation is additive, and what kind.\n */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Indicates whether an animation is additive, and what kind." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAdditiveAnimationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAdditiveAnimationType",
		"EAdditiveAnimationType",
		Z_Construct_UEnum_Engine_EAdditiveAnimationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAdditiveAnimationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAdditiveAnimationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAdditiveAnimationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAdditiveAnimationType()
	{
		if (!Z_Registration_Info_UEnum_EAdditiveAnimationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAdditiveAnimationType.InnerSingleton, Z_Construct_UEnum_Engine_EAdditiveAnimationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAdditiveAnimationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECurveBlendOption;
	static UEnum* ECurveBlendOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECurveBlendOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECurveBlendOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECurveBlendOption, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECurveBlendOption"));
		}
		return Z_Registration_Info_UEnum_ECurveBlendOption.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECurveBlendOption::Type>()
	{
		return ECurveBlendOption_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ECurveBlendOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ECurveBlendOption_Statics::Enumerators[] = {
		{ "ECurveBlendOption::Override", (int64)ECurveBlendOption::Override },
		{ "ECurveBlendOption::DoNotOverride", (int64)ECurveBlendOption::DoNotOverride },
		{ "ECurveBlendOption::NormalizeByWeight", (int64)ECurveBlendOption::NormalizeByWeight },
		{ "ECurveBlendOption::BlendByWeight", (int64)ECurveBlendOption::BlendByWeight },
		{ "ECurveBlendOption::UseBasePose", (int64)ECurveBlendOption::UseBasePose },
		{ "ECurveBlendOption::UseMaxValue", (int64)ECurveBlendOption::UseMaxValue },
		{ "ECurveBlendOption::UseMinValue", (int64)ECurveBlendOption::UseMinValue },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ECurveBlendOption_Statics::Enum_MetaDataParams[] = {
		{ "BlendByWeight.Comment", "/** Blend By Weight without normalizing*/" },
		{ "BlendByWeight.Name", "ECurveBlendOption::BlendByWeight" },
		{ "BlendByWeight.ToolTip", "Blend By Weight without normalizing" },
		{ "DoNotOverride.Comment", "/** Only set the value if the previous pose doesn't have the curve value. */" },
		{ "DoNotOverride.Name", "ECurveBlendOption::DoNotOverride" },
		{ "DoNotOverride.ToolTip", "Only set the value if the previous pose doesn't have the curve value." },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "NormalizeByWeight.Comment", "/** Normalize By Sum of Weight and use it to blend. */" },
		{ "NormalizeByWeight.Name", "ECurveBlendOption::NormalizeByWeight" },
		{ "NormalizeByWeight.ToolTip", "Normalize By Sum of Weight and use it to blend." },
		{ "Override.Comment", "/* Last pose that contains valid curve value override it. */" },
		{ "Override.Name", "ECurveBlendOption::Override" },
		{ "Override.ToolTip", "Last pose that contains valid curve value override it." },
		{ "UseBasePose.Comment", "/** Use Base Pose for all curve values. Do not blend */" },
		{ "UseBasePose.Name", "ECurveBlendOption::UseBasePose" },
		{ "UseBasePose.ToolTip", "Use Base Pose for all curve values. Do not blend" },
		{ "UseMaxValue.Comment", "/** Find the highest curve value from multiple poses and use that. */" },
		{ "UseMaxValue.Name", "ECurveBlendOption::UseMaxValue" },
		{ "UseMaxValue.ToolTip", "Find the highest curve value from multiple poses and use that." },
		{ "UseMinValue.Comment", "/** Find the lowest curve value from multiple poses and use that. */" },
		{ "UseMinValue.Name", "ECurveBlendOption::UseMinValue" },
		{ "UseMinValue.ToolTip", "Find the lowest curve value from multiple poses and use that." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECurveBlendOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ECurveBlendOption",
		"ECurveBlendOption::Type",
		Z_Construct_UEnum_Engine_ECurveBlendOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECurveBlendOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ECurveBlendOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECurveBlendOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ECurveBlendOption()
	{
		if (!Z_Registration_Info_UEnum_ECurveBlendOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECurveBlendOption.InnerSingleton, Z_Construct_UEnum_Engine_ECurveBlendOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECurveBlendOption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MarkerSyncData;
class UScriptStruct* FMarkerSyncData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MarkerSyncData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MarkerSyncData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMarkerSyncData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MarkerSyncData"));
	}
	return Z_Registration_Info_UScriptStruct_MarkerSyncData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMarkerSyncData>()
{
	return FMarkerSyncData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMarkerSyncData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_AuthoredSyncMarkers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AuthoredSyncMarkers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AuthoredSyncMarkers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarkerSyncData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMarkerSyncData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMarkerSyncData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMarkerSyncData_Statics::NewProp_AuthoredSyncMarkers_Inner = { "AuthoredSyncMarkers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimSyncMarker, METADATA_PARAMS(nullptr, 0) }; // 4278593792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMarkerSyncData_Statics::NewProp_AuthoredSyncMarkers_MetaData[] = {
		{ "Comment", "/** Authored Sync markers */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Authored Sync markers" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMarkerSyncData_Statics::NewProp_AuthoredSyncMarkers = { "AuthoredSyncMarkers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMarkerSyncData, AuthoredSyncMarkers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMarkerSyncData_Statics::NewProp_AuthoredSyncMarkers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerSyncData_Statics::NewProp_AuthoredSyncMarkers_MetaData)) }; // 4278593792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMarkerSyncData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarkerSyncData_Statics::NewProp_AuthoredSyncMarkers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMarkerSyncData_Statics::NewProp_AuthoredSyncMarkers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMarkerSyncData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MarkerSyncData",
		sizeof(FMarkerSyncData),
		alignof(FMarkerSyncData),
		Z_Construct_UScriptStruct_FMarkerSyncData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerSyncData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMarkerSyncData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMarkerSyncData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMarkerSyncData()
	{
		if (!Z_Registration_Info_UScriptStruct_MarkerSyncData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MarkerSyncData.InnerSingleton, Z_Construct_UScriptStruct_FMarkerSyncData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MarkerSyncData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimInterpolationType;
	static UEnum* EAnimInterpolationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimInterpolationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimInterpolationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAnimInterpolationType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAnimInterpolationType"));
		}
		return Z_Registration_Info_UEnum_EAnimInterpolationType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAnimInterpolationType>()
	{
		return EAnimInterpolationType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAnimInterpolationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAnimInterpolationType_Statics::Enumerators[] = {
		{ "EAnimInterpolationType::Linear", (int64)EAnimInterpolationType::Linear },
		{ "EAnimInterpolationType::Step", (int64)EAnimInterpolationType::Step },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAnimInterpolationType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Indicates how animation should be evaluated between keys.\n */" },
		{ "Linear.Comment", "/** Linear interpolation when looking up values between keys. */" },
		{ "Linear.DisplayName", "Linear" },
		{ "Linear.Name", "EAnimInterpolationType::Linear" },
		{ "Linear.ToolTip", "Linear interpolation when looking up values between keys." },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "Step.Comment", "/** Step interpolation when looking up values between keys. */" },
		{ "Step.DisplayName", "Step" },
		{ "Step.Name", "EAnimInterpolationType::Step" },
		{ "Step.ToolTip", "Step interpolation when looking up values between keys." },
		{ "ToolTip", "Indicates how animation should be evaluated between keys." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAnimInterpolationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAnimInterpolationType",
		"EAnimInterpolationType",
		Z_Construct_UEnum_Engine_EAnimInterpolationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimInterpolationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAnimInterpolationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAnimInterpolationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAnimInterpolationType()
	{
		if (!Z_Registration_Info_UEnum_EAnimInterpolationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimInterpolationType.InnerSingleton, Z_Construct_UEnum_Engine_EAnimInterpolationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimInterpolationType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAxisOption;
	static UEnum* EAxisOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAxisOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAxisOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAxisOption, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAxisOption"));
		}
		return Z_Registration_Info_UEnum_EAxisOption.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAxisOption::Type>()
	{
		return EAxisOption_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAxisOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAxisOption_Statics::Enumerators[] = {
		{ "EAxisOption::X", (int64)EAxisOption::X },
		{ "EAxisOption::Y", (int64)EAxisOption::Y },
		{ "EAxisOption::Z", (int64)EAxisOption::Z },
		{ "EAxisOption::X_Neg", (int64)EAxisOption::X_Neg },
		{ "EAxisOption::Y_Neg", (int64)EAxisOption::Y_Neg },
		{ "EAxisOption::Z_Neg", (int64)EAxisOption::Z_Neg },
		{ "EAxisOption::Custom", (int64)EAxisOption::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAxisOption_Statics::Enum_MetaDataParams[] = {
		{ "Custom.Name", "EAxisOption::Custom" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "X.Name", "EAxisOption::X" },
		{ "X_Neg.Name", "EAxisOption::X_Neg" },
		{ "Y.Name", "EAxisOption::Y" },
		{ "Y_Neg.Name", "EAxisOption::Y_Neg" },
		{ "Z.Name", "EAxisOption::Z" },
		{ "Z_Neg.Name", "EAxisOption::Z_Neg" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAxisOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAxisOption",
		"EAxisOption::Type",
		Z_Construct_UEnum_Engine_EAxisOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAxisOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAxisOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAxisOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAxisOption()
	{
		if (!Z_Registration_Info_UEnum_EAxisOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAxisOption.InnerSingleton, Z_Construct_UEnum_Engine_EAxisOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAxisOption.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComponentType;
	static UEnum* EComponentType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComponentType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComponentType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EComponentType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EComponentType"));
		}
		return Z_Registration_Info_UEnum_EComponentType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EComponentType::Type>()
	{
		return EComponentType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EComponentType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EComponentType_Statics::Enumerators[] = {
		{ "EComponentType::None", (int64)EComponentType::None },
		{ "EComponentType::TranslationX", (int64)EComponentType::TranslationX },
		{ "EComponentType::TranslationY", (int64)EComponentType::TranslationY },
		{ "EComponentType::TranslationZ", (int64)EComponentType::TranslationZ },
		{ "EComponentType::RotationX", (int64)EComponentType::RotationX },
		{ "EComponentType::RotationY", (int64)EComponentType::RotationY },
		{ "EComponentType::RotationZ", (int64)EComponentType::RotationZ },
		{ "EComponentType::Scale", (int64)EComponentType::Scale },
		{ "EComponentType::ScaleX", (int64)EComponentType::ScaleX },
		{ "EComponentType::ScaleY", (int64)EComponentType::ScaleY },
		{ "EComponentType::ScaleZ", (int64)EComponentType::ScaleZ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EComponentType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// The transform component (attribute) to read from\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "None.Name", "EComponentType::None" },
		{ "RotationX.Name", "EComponentType::RotationX" },
		{ "RotationY.Name", "EComponentType::RotationY" },
		{ "RotationZ.Name", "EComponentType::RotationZ" },
		{ "Scale.DisplayName", "Scale (largest component)" },
		{ "Scale.Name", "EComponentType::Scale" },
		{ "ScaleX.Name", "EComponentType::ScaleX" },
		{ "ScaleY.Name", "EComponentType::ScaleY" },
		{ "ScaleZ.Name", "EComponentType::ScaleZ" },
		{ "ToolTip", "The transform component (attribute) to read from" },
		{ "TranslationX.Name", "EComponentType::TranslationX" },
		{ "TranslationY.Name", "EComponentType::TranslationY" },
		{ "TranslationZ.Name", "EComponentType::TranslationZ" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EComponentType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EComponentType",
		"EComponentType::Type",
		Z_Construct_UEnum_Engine_EComponentType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EComponentType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EComponentType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EComponentType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EComponentType()
	{
		if (!Z_Registration_Info_UEnum_EComponentType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComponentType.InnerSingleton, Z_Construct_UEnum_Engine_EComponentType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComponentType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TrackToSkeletonMap;
class UScriptStruct* FTrackToSkeletonMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TrackToSkeletonMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TrackToSkeletonMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTrackToSkeletonMap, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TrackToSkeletonMap"));
	}
	return Z_Registration_Info_UScriptStruct_TrackToSkeletonMap.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTrackToSkeletonMap>()
{
	return FTrackToSkeletonMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneTreeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneTreeIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// @note We have a plan to support skeletal hierarchy. When that happens, we'd like to keep skeleton indexing.\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "@note We have a plan to support skeletal hierarchy. When that happens, we'd like to keep skeleton indexing." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTrackToSkeletonMap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics::NewProp_BoneTreeIndex_MetaData[] = {
		{ "Comment", "// Index of Skeleton.BoneTree this Track belongs to.\n" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Index of Skeleton.BoneTree this Track belongs to." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics::NewProp_BoneTreeIndex = { "BoneTreeIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTrackToSkeletonMap, BoneTreeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics::NewProp_BoneTreeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics::NewProp_BoneTreeIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics::NewProp_BoneTreeIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TrackToSkeletonMap",
		sizeof(FTrackToSkeletonMap),
		alignof(FTrackToSkeletonMap),
		Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTrackToSkeletonMap()
	{
		if (!Z_Registration_Info_UScriptStruct_TrackToSkeletonMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TrackToSkeletonMap.InnerSingleton, Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TrackToSkeletonMap.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RawAnimSequenceTrack;
class UScriptStruct* FRawAnimSequenceTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RawAnimSequenceTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RawAnimSequenceTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRawAnimSequenceTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RawAnimSequenceTrack"));
	}
	return Z_Registration_Info_UScriptStruct_RawAnimSequenceTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRawAnimSequenceTrack>()
{
	return FRawAnimSequenceTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_PosKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PosKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PosKeys;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RotKeys;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScaleKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Raw keyframe data for one track.Each array will contain either NumFrames elements or 1 element.\n* One element is used as a simple compression scheme where if all keys are the same, they'll be\n* reduced to 1 key that is constant over the entire sequence.\n*/" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Raw keyframe data for one track.Each array will contain either NumFrames elements or 1 element.\nOne element is used as a simple compression scheme where if all keys are the same, they'll be\nreduced to 1 key that is constant over the entire sequence." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRawAnimSequenceTrack>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_PosKeys_Inner = { "PosKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_PosKeys_MetaData[] = {
		{ "Comment", "/** Position keys. */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Position keys." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_PosKeys = { "PosKeys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawAnimSequenceTrack, PosKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_PosKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_PosKeys_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_RotKeys_Inner = { "RotKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuat4f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_RotKeys_MetaData[] = {
		{ "Comment", "/** Rotation keys. */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Rotation keys." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_RotKeys = { "RotKeys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawAnimSequenceTrack, RotKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_RotKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_RotKeys_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_ScaleKeys_Inner = { "ScaleKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_ScaleKeys_MetaData[] = {
		{ "Comment", "/** Scale keys. */" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ToolTip", "Scale keys." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_ScaleKeys = { "ScaleKeys", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRawAnimSequenceTrack, ScaleKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_ScaleKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_ScaleKeys_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_PosKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_PosKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_RotKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_RotKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_ScaleKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewProp_ScaleKeys,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RawAnimSequenceTrack",
		sizeof(FRawAnimSequenceTrack),
		alignof(FRawAnimSequenceTrack),
		Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRawAnimSequenceTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_RawAnimSequenceTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RawAnimSequenceTrack.InnerSingleton, Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RawAnimSequenceTrack.InnerSingleton;
	}
	DEFINE_FUNCTION(URawAnimSequenceTrackExtensions::execGetScaleKeys)
	{
		P_GET_STRUCT_REF(FRawAnimSequenceTrack,Z_Param_Out_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=URawAnimSequenceTrackExtensions::GetScaleKeys(Z_Param_Out_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URawAnimSequenceTrackExtensions::execGetRotationalKeys)
	{
		P_GET_STRUCT_REF(FRawAnimSequenceTrack,Z_Param_Out_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuat>*)Z_Param__Result=URawAnimSequenceTrackExtensions::GetRotationalKeys(Z_Param_Out_Track);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URawAnimSequenceTrackExtensions::execGetPositionalKeys)
	{
		P_GET_STRUCT_REF(FRawAnimSequenceTrack,Z_Param_Out_Track);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=URawAnimSequenceTrackExtensions::GetPositionalKeys(Z_Param_Out_Track);
		P_NATIVE_END;
	}
	void URawAnimSequenceTrackExtensions::StaticRegisterNativesURawAnimSequenceTrackExtensions()
	{
		UClass* Class = URawAnimSequenceTrackExtensions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPositionalKeys", &URawAnimSequenceTrackExtensions::execGetPositionalKeys },
			{ "GetRotationalKeys", &URawAnimSequenceTrackExtensions::execGetRotationalKeys },
			{ "GetScaleKeys", &URawAnimSequenceTrackExtensions::execGetScaleKeys },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics
	{
		struct RawAnimSequenceTrackExtensions_eventGetPositionalKeys_Parms
		{
			FRawAnimSequenceTrack Track;
			TArray<FVector> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Track;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics::NewProp_Track_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RawAnimSequenceTrackExtensions_eventGetPositionalKeys_Parms, Track), Z_Construct_UScriptStruct_FRawAnimSequenceTrack, METADATA_PARAMS(Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics::NewProp_Track_MetaData)) }; // 3121965685
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RawAnimSequenceTrackExtensions_eventGetPositionalKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09* Returns the positional keys contained by the FRawAnimSequenceTrack\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the positional keys contained by the FRawAnimSequenceTrack" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URawAnimSequenceTrackExtensions, nullptr, "GetPositionalKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics::RawAnimSequenceTrackExtensions_eventGetPositionalKeys_Parms), Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics
	{
		struct RawAnimSequenceTrackExtensions_eventGetRotationalKeys_Parms
		{
			FRawAnimSequenceTrack Track;
			TArray<FQuat> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Track;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics::NewProp_Track_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RawAnimSequenceTrackExtensions_eventGetRotationalKeys_Parms, Track), Z_Construct_UScriptStruct_FRawAnimSequenceTrack, METADATA_PARAMS(Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics::NewProp_Track_MetaData)) }; // 3121965685
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RawAnimSequenceTrackExtensions_eventGetRotationalKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09* Returns the rotational keys contained by the FRawAnimSequenceTrack\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the rotational keys contained by the FRawAnimSequenceTrack" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URawAnimSequenceTrackExtensions, nullptr, "GetRotationalKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics::RawAnimSequenceTrackExtensions_eventGetRotationalKeys_Parms), Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics
	{
		struct RawAnimSequenceTrackExtensions_eventGetScaleKeys_Parms
		{
			FRawAnimSequenceTrack Track;
			TArray<FVector> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Track_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Track;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics::NewProp_Track_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics::NewProp_Track = { "Track", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RawAnimSequenceTrackExtensions_eventGetScaleKeys_Parms, Track), Z_Construct_UScriptStruct_FRawAnimSequenceTrack, METADATA_PARAMS(Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics::NewProp_Track_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics::NewProp_Track_MetaData)) }; // 3121965685
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RawAnimSequenceTrackExtensions_eventGetScaleKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics::NewProp_Track,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09* Returns the scale keys contained by the FRawAnimSequenceTrack\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the scale keys contained by the FRawAnimSequenceTrack" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URawAnimSequenceTrackExtensions, nullptr, "GetScaleKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics::RawAnimSequenceTrackExtensions_eventGetScaleKeys_Parms), Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URawAnimSequenceTrackExtensions);
	UClass* Z_Construct_UClass_URawAnimSequenceTrackExtensions_NoRegister()
	{
		return URawAnimSequenceTrackExtensions::StaticClass();
	}
	struct Z_Construct_UClass_URawAnimSequenceTrackExtensions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URawAnimSequenceTrackExtensions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URawAnimSequenceTrackExtensions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetPositionalKeys, "GetPositionalKeys" }, // 322962830
		{ &Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetRotationalKeys, "GetRotationalKeys" }, // 575497474
		{ &Z_Construct_UFunction_URawAnimSequenceTrackExtensions_GetScaleKeys, "GetScaleKeys" }, // 1286016515
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URawAnimSequenceTrackExtensions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/AnimTypes.h" },
		{ "ModuleRelativePath", "Public/Animation/AnimTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URawAnimSequenceTrackExtensions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URawAnimSequenceTrackExtensions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URawAnimSequenceTrackExtensions_Statics::ClassParams = {
		&URawAnimSequenceTrackExtensions::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URawAnimSequenceTrackExtensions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URawAnimSequenceTrackExtensions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URawAnimSequenceTrackExtensions()
	{
		if (!Z_Registration_Info_UClass_URawAnimSequenceTrackExtensions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URawAnimSequenceTrackExtensions.OuterSingleton, Z_Construct_UClass_URawAnimSequenceTrackExtensions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URawAnimSequenceTrackExtensions.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<URawAnimSequenceTrackExtensions>()
	{
		return URawAnimSequenceTrackExtensions::StaticClass();
	}
	URawAnimSequenceTrackExtensions::URawAnimSequenceTrackExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URawAnimSequenceTrackExtensions);
	URawAnimSequenceTrackExtensions::~URawAnimSequenceTrackExtensions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_Statics::EnumInfo[] = {
		{ EBoneAxis_StaticEnum, TEXT("EBoneAxis"), &Z_Registration_Info_UEnum_EBoneAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 906799129U) },
		{ EBoneControlSpace_StaticEnum, TEXT("EBoneControlSpace"), &Z_Registration_Info_UEnum_EBoneControlSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 793580878U) },
		{ EBoneRotationSource_StaticEnum, TEXT("EBoneRotationSource"), &Z_Registration_Info_UEnum_EBoneRotationSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1958954556U) },
		{ EMontageNotifyTickType_StaticEnum, TEXT("EMontageNotifyTickType"), &Z_Registration_Info_UEnum_EMontageNotifyTickType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1915572903U) },
		{ ENotifyFilterType_StaticEnum, TEXT("ENotifyFilterType"), &Z_Registration_Info_UEnum_ENotifyFilterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2995808221U) },
		{ EAdditiveAnimationType_StaticEnum, TEXT("EAdditiveAnimationType"), &Z_Registration_Info_UEnum_EAdditiveAnimationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4258827446U) },
		{ ECurveBlendOption_StaticEnum, TEXT("ECurveBlendOption"), &Z_Registration_Info_UEnum_ECurveBlendOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 138824138U) },
		{ EAnimInterpolationType_StaticEnum, TEXT("EAnimInterpolationType"), &Z_Registration_Info_UEnum_EAnimInterpolationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3232896418U) },
		{ EAxisOption_StaticEnum, TEXT("EAxisOption"), &Z_Registration_Info_UEnum_EAxisOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2249644565U) },
		{ EComponentType_StaticEnum, TEXT("EComponentType"), &Z_Registration_Info_UEnum_EComponentType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2228860366U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_Statics::ScriptStructInfo[] = {
		{ FPerBoneBlendWeight::StaticStruct, Z_Construct_UScriptStruct_FPerBoneBlendWeight_Statics::NewStructOps, TEXT("PerBoneBlendWeight"), &Z_Registration_Info_UScriptStruct_PerBoneBlendWeight, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerBoneBlendWeight), 1941150986U) },
		{ FPerBoneBlendWeights::StaticStruct, Z_Construct_UScriptStruct_FPerBoneBlendWeights_Statics::NewStructOps, TEXT("PerBoneBlendWeights"), &Z_Registration_Info_UScriptStruct_PerBoneBlendWeights, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerBoneBlendWeights), 769061522U) },
		{ FAnimNotifyEvent::StaticStruct, Z_Construct_UScriptStruct_FAnimNotifyEvent_Statics::NewStructOps, TEXT("AnimNotifyEvent"), &Z_Registration_Info_UScriptStruct_AnimNotifyEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNotifyEvent), 3418516681U) },
		{ FAnimSyncMarker::StaticStruct, Z_Construct_UScriptStruct_FAnimSyncMarker_Statics::NewStructOps, TEXT("AnimSyncMarker"), &Z_Registration_Info_UScriptStruct_AnimSyncMarker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSyncMarker), 4278593792U) },
		{ FAnimNotifyTrack::StaticStruct, Z_Construct_UScriptStruct_FAnimNotifyTrack_Statics::NewStructOps, TEXT("AnimNotifyTrack"), &Z_Registration_Info_UScriptStruct_AnimNotifyTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNotifyTrack), 2379014921U) },
		{ FMarkerSyncData::StaticStruct, Z_Construct_UScriptStruct_FMarkerSyncData_Statics::NewStructOps, TEXT("MarkerSyncData"), &Z_Registration_Info_UScriptStruct_MarkerSyncData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMarkerSyncData), 3354664481U) },
		{ FTrackToSkeletonMap::StaticStruct, Z_Construct_UScriptStruct_FTrackToSkeletonMap_Statics::NewStructOps, TEXT("TrackToSkeletonMap"), &Z_Registration_Info_UScriptStruct_TrackToSkeletonMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTrackToSkeletonMap), 117233569U) },
		{ FRawAnimSequenceTrack::StaticStruct, Z_Construct_UScriptStruct_FRawAnimSequenceTrack_Statics::NewStructOps, TEXT("RawAnimSequenceTrack"), &Z_Registration_Info_UScriptStruct_RawAnimSequenceTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRawAnimSequenceTrack), 3121965685U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URawAnimSequenceTrackExtensions, URawAnimSequenceTrackExtensions::StaticClass, TEXT("URawAnimSequenceTrackExtensions"), &Z_Registration_Info_UClass_URawAnimSequenceTrackExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URawAnimSequenceTrackExtensions), 1755435843U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_1457942824(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Animation_AnimTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
