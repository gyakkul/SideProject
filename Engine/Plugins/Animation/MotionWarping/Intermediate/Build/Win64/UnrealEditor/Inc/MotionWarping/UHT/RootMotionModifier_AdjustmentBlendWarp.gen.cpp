// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RootMotionModifier_AdjustmentBlendWarp.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimSequence.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRootMotionModifier_AdjustmentBlendWarp() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceTrackContainer();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_NoRegister();
	MOTIONWARPING_API UClass* Z_Construct_UClass_URootMotionModifier_Warp();
	MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionDeltaTrack();
	MOTIONWARPING_API UScriptStruct* Z_Construct_UScriptStruct_FMotionDeltaTrackContainer();
	UPackage* Z_Construct_UPackage__Script_MotionWarping();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotionDeltaTrack;
class UScriptStruct* FMotionDeltaTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotionDeltaTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotionDeltaTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionDeltaTrack, (UObject*)Z_Construct_UPackage__Script_MotionWarping(), TEXT("MotionDeltaTrack"));
	}
	return Z_Registration_Info_UScriptStruct_MotionDeltaTrack.OuterSingleton;
}
template<> MOTIONWARPING_API UScriptStruct* StaticStruct<FMotionDeltaTrack>()
{
	return FMotionDeltaTrack::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneTransformTrack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneTransformTrack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneTransformTrack;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaTranslationTrack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTranslationTrack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeltaTranslationTrack;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRotationTrack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaRotationTrack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DeltaRotationTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TotalTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TotalRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionDeltaTrack>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_BoneTransformTrack_Inner = { "BoneTransformTrack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_BoneTransformTrack_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_BoneTransformTrack = { "BoneTransformTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionDeltaTrack, BoneTransformTrack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_BoneTransformTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_BoneTransformTrack_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaTranslationTrack_Inner = { "DeltaTranslationTrack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaTranslationTrack_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaTranslationTrack = { "DeltaTranslationTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionDeltaTrack, DeltaTranslationTrack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaTranslationTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaTranslationTrack_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaRotationTrack_Inner = { "DeltaRotationTrack", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaRotationTrack_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaRotationTrack = { "DeltaRotationTrack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionDeltaTrack, DeltaRotationTrack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaRotationTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaRotationTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalTranslation_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalTranslation = { "TotalTranslation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionDeltaTrack, TotalTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalRotation = { "TotalRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionDeltaTrack, TotalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_BoneTransformTrack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_BoneTransformTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaTranslationTrack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaTranslationTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaRotationTrack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_DeltaRotationTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewProp_TotalRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionWarping,
		nullptr,
		&NewStructOps,
		"MotionDeltaTrack",
		sizeof(FMotionDeltaTrack),
		alignof(FMotionDeltaTrack),
		Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMotionDeltaTrack()
	{
		if (!Z_Registration_Info_UScriptStruct_MotionDeltaTrack.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionDeltaTrack.InnerSingleton, Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotionDeltaTrack.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MotionDeltaTrackContainer;
class UScriptStruct* FMotionDeltaTrackContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MotionDeltaTrackContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MotionDeltaTrackContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMotionDeltaTrackContainer, (UObject*)Z_Construct_UPackage__Script_MotionWarping(), TEXT("MotionDeltaTrackContainer"));
	}
	return Z_Registration_Info_UScriptStruct_MotionDeltaTrackContainer.OuterSingleton;
}
template<> MOTIONWARPING_API UScriptStruct* StaticStruct<FMotionDeltaTrackContainer>()
{
	return FMotionDeltaTrackContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tracks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMotionDeltaTrackContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::NewProp_Tracks_Inner = { "Tracks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMotionDeltaTrack, METADATA_PARAMS(nullptr, 0) }; // 405847166
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::NewProp_Tracks_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::NewProp_Tracks = { "Tracks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMotionDeltaTrackContainer, Tracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::NewProp_Tracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::NewProp_Tracks_MetaData)) }; // 405847166
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::NewProp_Tracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::NewProp_Tracks,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MotionWarping,
		nullptr,
		&NewStructOps,
		"MotionDeltaTrackContainer",
		sizeof(FMotionDeltaTrackContainer),
		alignof(FMotionDeltaTrackContainer),
		Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMotionDeltaTrackContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_MotionDeltaTrackContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MotionDeltaTrackContainer.InnerSingleton, Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MotionDeltaTrackContainer.InnerSingleton;
	}
	void URootMotionModifier_AdjustmentBlendWarp::StaticRegisterNativesURootMotionModifier_AdjustmentBlendWarp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URootMotionModifier_AdjustmentBlendWarp);
	UClass* Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_NoRegister()
	{
		return URootMotionModifier_AdjustmentBlendWarp::StaticClass();
	}
	struct Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWarpIKBones_MetaData[];
#endif
		static void NewProp_bWarpIKBones_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarpIKBones;
		static const UECodeGen_Private::FNamePropertyParams NewProp_IKBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IKBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IKBones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedMeshTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedMeshTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedMeshRelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedMeshRelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedRootMotion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedRootMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URootMotionModifier_Warp,
		(UObject* (*)())Z_Construct_UPackage__Script_MotionWarping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// EXPERIMENTAL: Marked with 'hidedropdown' to prevent it from showing up in the UI since it is not ready for production.\n" },
		{ "DisplayName", "Adjustment Blend Warp" },
		{ "IncludePath", "RootMotionModifier_AdjustmentBlendWarp.h" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "EXPERIMENTAL: Marked with 'hidedropdown' to prevent it from showing up in the UI since it is not ready for production." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_bWarpIKBones_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	void Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_bWarpIKBones_SetBit(void* Obj)
	{
		((URootMotionModifier_AdjustmentBlendWarp*)Obj)->bWarpIKBones = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_bWarpIKBones = { "bWarpIKBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URootMotionModifier_AdjustmentBlendWarp), &Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_bWarpIKBones_SetBit, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_bWarpIKBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_bWarpIKBones_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_IKBones_Inner = { "IKBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_IKBones_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_IKBones = { "IKBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier_AdjustmentBlendWarp, IKBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_IKBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_IKBones_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshTransform = { "CachedMeshTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier_AdjustmentBlendWarp, CachedMeshTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshRelativeTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshRelativeTransform = { "CachedMeshRelativeTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier_AdjustmentBlendWarp, CachedMeshRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedRootMotion_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedRootMotion = { "CachedRootMotion", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier_AdjustmentBlendWarp, CachedRootMotion), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedRootMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Public/RootMotionModifier_AdjustmentBlendWarp.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URootMotionModifier_AdjustmentBlendWarp, Result), Z_Construct_UScriptStruct_FAnimSequenceTrackContainer, METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_Result_MetaData)) }; // 325444248
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_bWarpIKBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_IKBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_IKBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedMeshRelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_CachedRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::NewProp_Result,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URootMotionModifier_AdjustmentBlendWarp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::ClassParams = {
		&URootMotionModifier_AdjustmentBlendWarp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::PropPointers),
		0,
		0x049010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp()
	{
		if (!Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.OuterSingleton, Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp.OuterSingleton;
	}
	template<> MOTIONWARPING_API UClass* StaticClass<URootMotionModifier_AdjustmentBlendWarp>()
	{
		return URootMotionModifier_AdjustmentBlendWarp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URootMotionModifier_AdjustmentBlendWarp);
	URootMotionModifier_AdjustmentBlendWarp::~URootMotionModifier_AdjustmentBlendWarp() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_AdjustmentBlendWarp_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_AdjustmentBlendWarp_h_Statics::ScriptStructInfo[] = {
		{ FMotionDeltaTrack::StaticStruct, Z_Construct_UScriptStruct_FMotionDeltaTrack_Statics::NewStructOps, TEXT("MotionDeltaTrack"), &Z_Registration_Info_UScriptStruct_MotionDeltaTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionDeltaTrack), 405847166U) },
		{ FMotionDeltaTrackContainer::StaticStruct, Z_Construct_UScriptStruct_FMotionDeltaTrackContainer_Statics::NewStructOps, TEXT("MotionDeltaTrackContainer"), &Z_Registration_Info_UScriptStruct_MotionDeltaTrackContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMotionDeltaTrackContainer), 1381073276U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_AdjustmentBlendWarp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URootMotionModifier_AdjustmentBlendWarp, URootMotionModifier_AdjustmentBlendWarp::StaticClass, TEXT("URootMotionModifier_AdjustmentBlendWarp"), &Z_Registration_Info_UClass_URootMotionModifier_AdjustmentBlendWarp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URootMotionModifier_AdjustmentBlendWarp), 1338419876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_AdjustmentBlendWarp_h_3335557050(TEXT("/Script/MotionWarping"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_AdjustmentBlendWarp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_AdjustmentBlendWarp_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_AdjustmentBlendWarp_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_MotionWarping_Source_MotionWarping_Public_RootMotionModifier_AdjustmentBlendWarp_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
