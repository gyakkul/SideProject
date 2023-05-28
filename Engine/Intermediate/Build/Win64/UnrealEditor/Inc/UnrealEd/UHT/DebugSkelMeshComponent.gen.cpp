// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Animation/DebugSkelMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugSkelMeshComponent() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimPreviewInstance_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMorphTarget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	UNREALED_API UClass* Z_Construct_UClass_UDebugSkelMeshComponent();
	UNREALED_API UClass* Z_Construct_UClass_UDebugSkelMeshComponent_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EProcessRootMotionMode();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ESkeletonDrawMode();
	UNREALED_API UScriptStruct* Z_Construct_UScriptStruct_FSelectedSocketInfo();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SelectedSocketInfo;
class UScriptStruct* FSelectedSocketInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SelectedSocketInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SelectedSocketInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSelectedSocketInfo, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("SelectedSocketInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SelectedSocketInfo.OuterSingleton;
}
template<> UNREALED_API UScriptStruct* StaticStruct<FSelectedSocketInfo>()
{
	return FSelectedSocketInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSelectedSocketInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectedSocketInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSelectedSocketInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSelectedSocketInfo>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSelectedSocketInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		&NewStructOps,
		"SelectedSocketInfo",
		sizeof(FSelectedSocketInfo),
		alignof(FSelectedSocketInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectedSocketInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectedSocketInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSelectedSocketInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SelectedSocketInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SelectedSocketInfo.InnerSingleton, Z_Construct_UScriptStruct_FSelectedSocketInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SelectedSocketInfo.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProcessRootMotionMode;
	static UEnum* EProcessRootMotionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EProcessRootMotionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EProcessRootMotionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EProcessRootMotionMode, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EProcessRootMotionMode"));
		}
		return Z_Registration_Info_UEnum_EProcessRootMotionMode.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EProcessRootMotionMode>()
	{
		return EProcessRootMotionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EProcessRootMotionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EProcessRootMotionMode_Statics::Enumerators[] = {
		{ "EProcessRootMotionMode::Ignore", (int64)EProcessRootMotionMode::Ignore },
		{ "EProcessRootMotionMode::Loop", (int64)EProcessRootMotionMode::Loop },
		{ "EProcessRootMotionMode::LoopAndReset", (int64)EProcessRootMotionMode::LoopAndReset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EProcessRootMotionMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Different modes for when processing root motion */" },
		{ "Ignore.Comment", "/** Preview mesh will not consume root motion */" },
		{ "Ignore.Name", "EProcessRootMotionMode::Ignore" },
		{ "Ignore.ToolTip", "Preview mesh will not consume root motion" },
		{ "Loop.Comment", "/** Preview mesh will consume root motion continually */" },
		{ "Loop.Name", "EProcessRootMotionMode::Loop" },
		{ "Loop.ToolTip", "Preview mesh will consume root motion continually" },
		{ "LoopAndReset.Comment", "/** Preview mesh will consume root motion resetting the position back to the origin every time the animation loops */" },
		{ "LoopAndReset.Name", "EProcessRootMotionMode::LoopAndReset" },
		{ "LoopAndReset.ToolTip", "Preview mesh will consume root motion resetting the position back to the origin every time the animation loops" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Different modes for when processing root motion" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EProcessRootMotionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EProcessRootMotionMode",
		"EProcessRootMotionMode",
		Z_Construct_UEnum_UnrealEd_EProcessRootMotionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EProcessRootMotionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EProcessRootMotionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EProcessRootMotionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EProcessRootMotionMode()
	{
		if (!Z_Registration_Info_UEnum_EProcessRootMotionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProcessRootMotionMode.InnerSingleton, Z_Construct_UEnum_UnrealEd_EProcessRootMotionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EProcessRootMotionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESkeletonDrawMode;
	static UEnum* ESkeletonDrawMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESkeletonDrawMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESkeletonDrawMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ESkeletonDrawMode, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ESkeletonDrawMode"));
		}
		return Z_Registration_Info_UEnum_ESkeletonDrawMode.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ESkeletonDrawMode>()
	{
		return ESkeletonDrawMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_ESkeletonDrawMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_ESkeletonDrawMode_Statics::Enumerators[] = {
		{ "ESkeletonDrawMode::Default", (int64)ESkeletonDrawMode::Default },
		{ "ESkeletonDrawMode::Hidden", (int64)ESkeletonDrawMode::Hidden },
		{ "ESkeletonDrawMode::GreyedOut", (int64)ESkeletonDrawMode::GreyedOut },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_ESkeletonDrawMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Generic modes used to render debug skeletons depending on editor-specific context */" },
		{ "Default.Comment", "/** Bones are visible and selectable */" },
		{ "Default.Name", "ESkeletonDrawMode::Default" },
		{ "Default.ToolTip", "Bones are visible and selectable" },
		{ "GreyedOut.Comment", "/** Bones are visible but non-selectable */" },
		{ "GreyedOut.Name", "ESkeletonDrawMode::GreyedOut" },
		{ "GreyedOut.ToolTip", "Bones are visible but non-selectable" },
		{ "Hidden.Comment", "/** Bones are completely hidden */" },
		{ "Hidden.Name", "ESkeletonDrawMode::Hidden" },
		{ "Hidden.ToolTip", "Bones are completely hidden" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Generic modes used to render debug skeletons depending on editor-specific context" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_ESkeletonDrawMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"ESkeletonDrawMode",
		"ESkeletonDrawMode",
		Z_Construct_UEnum_UnrealEd_ESkeletonDrawMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ESkeletonDrawMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_ESkeletonDrawMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ESkeletonDrawMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_ESkeletonDrawMode()
	{
		if (!Z_Registration_Info_UEnum_ESkeletonDrawMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESkeletonDrawMode.InnerSingleton, Z_Construct_UEnum_UnrealEd_ESkeletonDrawMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESkeletonDrawMode.InnerSingleton;
	}
	void UDebugSkelMeshComponent::StaticRegisterNativesUDebugSkelMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDebugSkelMeshComponent);
	UClass* Z_Construct_UClass_UDebugSkelMeshComponent_NoRegister()
	{
		return UDebugSkelMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDebugSkelMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletonDrawMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonDrawMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletonDrawMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawMesh_MetaData[];
#endif
		static void NewProp_bDrawMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowBoneNames_MetaData[];
#endif
		static void NewProp_bShowBoneNames_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBoneNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawBoneInfluences_MetaData[];
#endif
		static void NewProp_bDrawBoneInfluences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawBoneInfluences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawMorphTargetVerts_MetaData[];
#endif
		static void NewProp_bDrawMorphTargetVerts_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawMorphTargetVerts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawNormals_MetaData[];
#endif
		static void NewProp_bDrawNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawTangents_MetaData[];
#endif
		static void NewProp_bDrawTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawTangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawBinormals_MetaData[];
#endif
		static void NewProp_bDrawBinormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawBinormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawSockets_MetaData[];
#endif
		static void NewProp_bDrawSockets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawSockets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawAttributes_MetaData[];
#endif
		static void NewProp_bDrawAttributes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawAttributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkeletonSocketsVisible_MetaData[];
#endif
		static void NewProp_bSkeletonSocketsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkeletonSocketsVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMeshSocketsVisible_MetaData[];
#endif
		static void NewProp_bMeshSocketsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshSocketsVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayRawAnimation_MetaData[];
#endif
		static void NewProp_bDisplayRawAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayRawAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayNonRetargetedPose_MetaData[];
#endif
		static void NewProp_bDisplayNonRetargetedPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayNonRetargetedPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayAdditiveBasePose_MetaData[];
#endif
		static void NewProp_bDisplayAdditiveBasePose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayAdditiveBasePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayBakedAnimation_MetaData[];
#endif
		static void NewProp_bDisplayBakedAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayBakedAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplaySourceAnimation_MetaData[];
#endif
		static void NewProp_bDisplaySourceAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplaySourceAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayBound_MetaData[];
#endif
		static void NewProp_bDisplayBound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayBound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayVertexColors_MetaData[];
#endif
		static void NewProp_bDisplayVertexColors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayVertexColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WireframeMeshOverlayColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WireframeMeshOverlayColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewRootMotion_MetaData[];
#endif
		static void NewProp_bPreviewRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewRootMotion;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProcessRootMotionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessRootMotionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ProcessRootMotionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConsumeRootMotionPreviousPlaybackTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConsumeRootMotionPreviousPlaybackTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowClothData_MetaData[];
#endif
		static void NewProp_bShowClothData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowClothData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinClothPropertyView_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinClothPropertyView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxClothPropertyView_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxClothPropertyView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClothMeshOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClothMeshOpacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClothFlipNormal_MetaData[];
#endif
		static void NewProp_bClothFlipNormal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClothFlipNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClothCullBackface_MetaData[];
#endif
		static void NewProp_bClothCullBackface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClothCullBackface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiredBonesUpToDateDuringTick_MetaData[];
#endif
		static void NewProp_bRequiredBonesUpToDateDuringTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiredBonesUpToDateDuringTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneRadiusMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BoneRadiusMultiplier;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BonesOfInterest_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonesOfInterest_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BonesOfInterest;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MorphTargetOfInterests_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetOfInterests_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MorphTargetOfInterests;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkelMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkelMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkelMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedAnimScriptInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SavedAnimScriptInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUsingInGameBounds_MetaData[];
#endif
		static void NewProp_bIsUsingInGameBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUsingInGameBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUsingPreSkinnedBounds_MetaData[];
#endif
		static void NewProp_bIsUsingPreSkinnedBounds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUsingPreSkinnedBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPerformSingleClothingTick_MetaData[];
#endif
		static void NewProp_bPerformSingleClothingTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerformSingleClothingTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPauseClothingSimulationWithAnim_MetaData[];
#endif
		static void NewProp_bPauseClothingSimulationWithAnim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseClothingSimulationWithAnim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTrackAttachedInstanceLOD_MetaData[];
#endif
		static void NewProp_bTrackAttachedInstanceLOD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrackAttachedInstanceLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDebugSkelMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "Animation/DebugSkelMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkeletonDrawMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkeletonDrawMode_MetaData[] = {
		{ "Comment", "/** Global drawing mode for this skeleton. Depends on context of specific editor using the component. */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Global drawing mode for this skeleton. Depends on context of specific editor using the component." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkeletonDrawMode = { "SkeletonDrawMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDebugSkelMeshComponent, SkeletonDrawMode), Z_Construct_UEnum_UnrealEd_ESkeletonDrawMode, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkeletonDrawMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkeletonDrawMode_MetaData)) }; // 765925256
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMesh_MetaData[] = {
		{ "Comment", "/** If true then the skeletal mesh associated with the component is drawn. */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "If true then the skeletal mesh associated with the component is drawn." },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMesh_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDrawMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMesh = { "bDrawMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowBoneNames_MetaData[] = {
		{ "Comment", "/** If true then the bone names associated with the skeletal mesh are displayed */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "If true then the bone names associated with the skeletal mesh are displayed" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowBoneNames_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bShowBoneNames = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowBoneNames = { "bShowBoneNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowBoneNames_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowBoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowBoneNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBoneInfluences_MetaData[] = {
		{ "Comment", "/** Bone influences viewing */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Bone influences viewing" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBoneInfluences_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDrawBoneInfluences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBoneInfluences = { "bDrawBoneInfluences", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBoneInfluences_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBoneInfluences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBoneInfluences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMorphTargetVerts_MetaData[] = {
		{ "Comment", "/** Morphtarget viewing */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Morphtarget viewing" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMorphTargetVerts_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDrawMorphTargetVerts = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMorphTargetVerts = { "bDrawMorphTargetVerts", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMorphTargetVerts_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMorphTargetVerts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMorphTargetVerts_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawNormals_MetaData[] = {
		{ "Comment", "/** Vertex normal viewing */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Vertex normal viewing" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawNormals_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDrawNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawNormals = { "bDrawNormals", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawTangents_MetaData[] = {
		{ "Comment", "/** Vertex tangent viewing */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Vertex tangent viewing" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawTangents_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDrawTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawTangents = { "bDrawTangents", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawTangents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawTangents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBinormals_MetaData[] = {
		{ "Comment", "/** Vertex binormal viewing */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Vertex binormal viewing" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBinormals_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDrawBinormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBinormals = { "bDrawBinormals", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBinormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBinormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBinormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawSockets_MetaData[] = {
		{ "Comment", "/** Socket hit points viewing */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Socket hit points viewing" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawSockets_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDrawSockets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawSockets = { "bDrawSockets", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawSockets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawSockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawSockets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawAttributes_MetaData[] = {
		{ "Comment", "/** Attribute visualization */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Attribute visualization" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawAttributes_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDrawAttributes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawAttributes = { "bDrawAttributes", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawAttributes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawAttributes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bSkeletonSocketsVisible_MetaData[] = {
		{ "Comment", "/** Skeleton sockets visible? */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Skeleton sockets visible?" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bSkeletonSocketsVisible_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bSkeletonSocketsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bSkeletonSocketsVisible = { "bSkeletonSocketsVisible", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bSkeletonSocketsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bSkeletonSocketsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bSkeletonSocketsVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bMeshSocketsVisible_MetaData[] = {
		{ "Comment", "/** Mesh sockets visible? */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Mesh sockets visible?" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bMeshSocketsVisible_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bMeshSocketsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bMeshSocketsVisible = { "bMeshSocketsVisible", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bMeshSocketsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bMeshSocketsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bMeshSocketsVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayRawAnimation_MetaData[] = {
		{ "Comment", "/** Display raw animation bone transform */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Display raw animation bone transform" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayRawAnimation_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDisplayRawAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayRawAnimation = { "bDisplayRawAnimation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayRawAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayRawAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayRawAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayNonRetargetedPose_MetaData[] = {
		{ "Comment", "/** Display non retargeted animation pose */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Display non retargeted animation pose" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayNonRetargetedPose_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDisplayNonRetargetedPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayNonRetargetedPose = { "bDisplayNonRetargetedPose", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayNonRetargetedPose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayNonRetargetedPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayNonRetargetedPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayAdditiveBasePose_MetaData[] = {
		{ "Comment", "/** Display additive base bone transform */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Display additive base bone transform" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayAdditiveBasePose_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDisplayAdditiveBasePose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayAdditiveBasePose = { "bDisplayAdditiveBasePose", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayAdditiveBasePose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayAdditiveBasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayAdditiveBasePose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBakedAnimation_MetaData[] = {
		{ "Comment", "/** Display baked animation pose */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Display baked animation pose" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBakedAnimation_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDisplayBakedAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBakedAnimation = { "bDisplayBakedAnimation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBakedAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBakedAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBakedAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplaySourceAnimation_MetaData[] = {
		{ "Comment", "/** Display source animation pose */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Display source animation pose" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplaySourceAnimation_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDisplaySourceAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplaySourceAnimation = { "bDisplaySourceAnimation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplaySourceAnimation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplaySourceAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplaySourceAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBound_MetaData[] = {
		{ "Comment", "/** Display Bound **/" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Display Bound *" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBound_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDisplayBound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBound = { "bDisplayBound", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayVertexColors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayVertexColors_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bDisplayVertexColors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayVertexColors = { "bDisplayVertexColors", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayVertexColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayVertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayVertexColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_WireframeMeshOverlayColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_WireframeMeshOverlayColor = { "WireframeMeshOverlayColor", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDebugSkelMeshComponent, WireframeMeshOverlayColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_WireframeMeshOverlayColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_WireframeMeshOverlayColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPreviewRootMotion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPreviewRootMotion_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bPreviewRootMotion_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPreviewRootMotion = { "bPreviewRootMotion", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPreviewRootMotion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPreviewRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPreviewRootMotion_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ProcessRootMotionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ProcessRootMotionMode_MetaData[] = {
		{ "Comment", "/** Process root motion mode */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Process root motion mode" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ProcessRootMotionMode = { "ProcessRootMotionMode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDebugSkelMeshComponent, ProcessRootMotionMode), Z_Construct_UEnum_UnrealEd_EProcessRootMotionMode, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ProcessRootMotionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ProcessRootMotionMode_MetaData)) }; // 380683376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ConsumeRootMotionPreviousPlaybackTime_MetaData[] = {
		{ "Comment", "/** Playback time last time ConsumeRootmotion was called */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Playback time last time ConsumeRootmotion was called" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ConsumeRootMotionPreviousPlaybackTime = { "ConsumeRootMotionPreviousPlaybackTime", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDebugSkelMeshComponent, ConsumeRootMotionPreviousPlaybackTime), METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ConsumeRootMotionPreviousPlaybackTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ConsumeRootMotionPreviousPlaybackTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowClothData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowClothData_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bShowClothData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowClothData = { "bShowClothData", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowClothData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowClothData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowClothData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MinClothPropertyView_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MinClothPropertyView = { "MinClothPropertyView", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDebugSkelMeshComponent, MinClothPropertyView), METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MinClothPropertyView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MinClothPropertyView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MaxClothPropertyView_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MaxClothPropertyView = { "MaxClothPropertyView", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDebugSkelMeshComponent, MaxClothPropertyView), METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MaxClothPropertyView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MaxClothPropertyView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ClothMeshOpacity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ClothMeshOpacity = { "ClothMeshOpacity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDebugSkelMeshComponent, ClothMeshOpacity), METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ClothMeshOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ClothMeshOpacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothFlipNormal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothFlipNormal_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bClothFlipNormal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothFlipNormal = { "bClothFlipNormal", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothFlipNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothFlipNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothFlipNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothCullBackface_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothCullBackface_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bClothCullBackface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothCullBackface = { "bClothCullBackface", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothCullBackface_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothCullBackface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothCullBackface_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bRequiredBonesUpToDateDuringTick_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bRequiredBonesUpToDateDuringTick_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bRequiredBonesUpToDateDuringTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bRequiredBonesUpToDateDuringTick = { "bRequiredBonesUpToDateDuringTick", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bRequiredBonesUpToDateDuringTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bRequiredBonesUpToDateDuringTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bRequiredBonesUpToDateDuringTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_BoneRadiusMultiplier_MetaData[] = {
		{ "Comment", "/** Multiplier for the bone radius rendering */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Multiplier for the bone radius rendering" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_BoneRadiusMultiplier = { "BoneRadiusMultiplier", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDebugSkelMeshComponent, BoneRadiusMultiplier), METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_BoneRadiusMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_BoneRadiusMultiplier_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_BonesOfInterest_Inner = { "BonesOfInterest", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_BonesOfInterest_MetaData[] = {
		{ "Comment", "/** Array of bones to render bone weights for */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Array of bones to render bone weights for" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_BonesOfInterest = { "BonesOfInterest", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDebugSkelMeshComponent, BonesOfInterest), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_BonesOfInterest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_BonesOfInterest_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MorphTargetOfInterests_Inner = { "MorphTargetOfInterests", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMorphTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MorphTargetOfInterests_MetaData[] = {
		{ "Comment", "/** Array of morphtargets to render verts for */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Array of morphtargets to render verts for" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MorphTargetOfInterests = { "MorphTargetOfInterests", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDebugSkelMeshComponent, MorphTargetOfInterests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MorphTargetOfInterests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MorphTargetOfInterests_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkelMaterials_Inner = { "SkelMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkelMaterials_MetaData[] = {
		{ "Comment", "/** Array of materials to restore when not rendering blend weights */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Array of materials to restore when not rendering blend weights" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkelMaterials = { "SkelMaterials", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDebugSkelMeshComponent, SkelMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkelMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkelMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_PreviewInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_PreviewInstance = { "PreviewInstance", nullptr, (EPropertyFlags)0x0014000400002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDebugSkelMeshComponent, PreviewInstance), Z_Construct_UClass_UAnimPreviewInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_PreviewInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_PreviewInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SavedAnimScriptInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SavedAnimScriptInstance = { "SavedAnimScriptInstance", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDebugSkelMeshComponent, SavedAnimScriptInstance), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SavedAnimScriptInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SavedAnimScriptInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingInGameBounds_MetaData[] = {
		{ "Comment", "/** Does this component use in game bounds or does it use bounds calculated from bones */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Does this component use in game bounds or does it use bounds calculated from bones" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingInGameBounds_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bIsUsingInGameBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingInGameBounds = { "bIsUsingInGameBounds", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingInGameBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingInGameBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingInGameBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingPreSkinnedBounds_MetaData[] = {
		{ "Comment", "/** Does this component use pre-skinned bounds? This overrides other bounds settings */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Does this component use pre-skinned bounds? This overrides other bounds settings" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingPreSkinnedBounds_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bIsUsingPreSkinnedBounds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingPreSkinnedBounds = { "bIsUsingPreSkinnedBounds", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingPreSkinnedBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingPreSkinnedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingPreSkinnedBounds_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPerformSingleClothingTick_MetaData[] = {
		{ "Comment", "/** Base skel mesh has support for suspending clothing, but single ticks are more of a debug feature when stepping through an animation\n\x09 *  So we control that using this flag\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Base skel mesh has support for suspending clothing, but single ticks are more of a debug feature when stepping through an animation\nSo we control that using this flag" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPerformSingleClothingTick_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bPerformSingleClothingTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPerformSingleClothingTick = { "bPerformSingleClothingTick", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPerformSingleClothingTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPerformSingleClothingTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPerformSingleClothingTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPauseClothingSimulationWithAnim_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPauseClothingSimulationWithAnim_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bPauseClothingSimulationWithAnim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPauseClothingSimulationWithAnim = { "bPauseClothingSimulationWithAnim", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPauseClothingSimulationWithAnim_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPauseClothingSimulationWithAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPauseClothingSimulationWithAnim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bTrackAttachedInstanceLOD_MetaData[] = {
		{ "Comment", "/** Should the LOD of the debug mesh component track the LOD of the instance being debugged */" },
		{ "ModuleRelativePath", "Classes/Animation/DebugSkelMeshComponent.h" },
		{ "ToolTip", "Should the LOD of the debug mesh component track the LOD of the instance being debugged" },
	};
#endif
	void Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bTrackAttachedInstanceLOD_SetBit(void* Obj)
	{
		((UDebugSkelMeshComponent*)Obj)->bTrackAttachedInstanceLOD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bTrackAttachedInstanceLOD = { "bTrackAttachedInstanceLOD", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDebugSkelMeshComponent), &Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bTrackAttachedInstanceLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bTrackAttachedInstanceLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bTrackAttachedInstanceLOD_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDebugSkelMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkeletonDrawMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkeletonDrawMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowBoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBoneInfluences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawMorphTargetVerts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawBinormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawSockets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDrawAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bSkeletonSocketsVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bMeshSocketsVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayRawAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayNonRetargetedPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayAdditiveBasePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBakedAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplaySourceAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayBound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bDisplayVertexColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_WireframeMeshOverlayColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPreviewRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ProcessRootMotionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ProcessRootMotionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ConsumeRootMotionPreviousPlaybackTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bShowClothData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MinClothPropertyView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MaxClothPropertyView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_ClothMeshOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothFlipNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bClothCullBackface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bRequiredBonesUpToDateDuringTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_BoneRadiusMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_BonesOfInterest_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_BonesOfInterest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MorphTargetOfInterests_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_MorphTargetOfInterests,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkelMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SkelMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_PreviewInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_SavedAnimScriptInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingInGameBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bIsUsingPreSkinnedBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPerformSingleClothingTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bPauseClothingSimulationWithAnim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDebugSkelMeshComponent_Statics::NewProp_bTrackAttachedInstanceLOD,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDebugSkelMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDebugSkelMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDebugSkelMeshComponent_Statics::ClassParams = {
		&UDebugSkelMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDebugSkelMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::PropPointers),
		0,
		0x00B010ACu,
		METADATA_PARAMS(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDebugSkelMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDebugSkelMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UDebugSkelMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDebugSkelMeshComponent.OuterSingleton, Z_Construct_UClass_UDebugSkelMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDebugSkelMeshComponent.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDebugSkelMeshComponent>()
	{
		return UDebugSkelMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDebugSkelMeshComponent);
	UDebugSkelMeshComponent::~UDebugSkelMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_Statics::EnumInfo[] = {
		{ EProcessRootMotionMode_StaticEnum, TEXT("EProcessRootMotionMode"), &Z_Registration_Info_UEnum_EProcessRootMotionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 380683376U) },
		{ ESkeletonDrawMode_StaticEnum, TEXT("ESkeletonDrawMode"), &Z_Registration_Info_UEnum_ESkeletonDrawMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 765925256U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_Statics::ScriptStructInfo[] = {
		{ FSelectedSocketInfo::StaticStruct, Z_Construct_UScriptStruct_FSelectedSocketInfo_Statics::NewStructOps, TEXT("SelectedSocketInfo"), &Z_Registration_Info_UScriptStruct_SelectedSocketInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSelectedSocketInfo), 235939161U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDebugSkelMeshComponent, UDebugSkelMeshComponent::StaticClass, TEXT("UDebugSkelMeshComponent"), &Z_Registration_Info_UClass_UDebugSkelMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDebugSkelMeshComponent), 1947075569U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_3407292715(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Animation_DebugSkelMeshComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
