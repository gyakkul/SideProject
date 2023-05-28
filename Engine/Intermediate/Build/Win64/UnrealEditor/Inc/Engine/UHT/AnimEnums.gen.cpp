// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimEnums() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_AnimationCompressionFormat();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAdditiveBasePoseType();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERootMotionRootLock();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERootMotionRootLock;
	static UEnum* ERootMotionRootLock_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERootMotionRootLock.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERootMotionRootLock.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERootMotionRootLock, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERootMotionRootLock"));
		}
		return Z_Registration_Info_UEnum_ERootMotionRootLock.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERootMotionRootLock::Type>()
	{
		return ERootMotionRootLock_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ERootMotionRootLock_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ERootMotionRootLock_Statics::Enumerators[] = {
		{ "ERootMotionRootLock::RefPose", (int64)ERootMotionRootLock::RefPose },
		{ "ERootMotionRootLock::AnimFirstFrame", (int64)ERootMotionRootLock::AnimFirstFrame },
		{ "ERootMotionRootLock::Zero", (int64)ERootMotionRootLock::Zero },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ERootMotionRootLock_Statics::Enum_MetaDataParams[] = {
		{ "AnimFirstFrame.Comment", "/** Use root bone position on first frame of animation. */" },
		{ "AnimFirstFrame.Name", "ERootMotionRootLock::AnimFirstFrame" },
		{ "AnimFirstFrame.ToolTip", "Use root bone position on first frame of animation." },
		{ "Comment", "/** Root Bone Lock options when extracting Root Motion. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimEnums.h" },
		{ "RefPose.Comment", "/** Use reference pose root bone position. */" },
		{ "RefPose.Name", "ERootMotionRootLock::RefPose" },
		{ "RefPose.ToolTip", "Use reference pose root bone position." },
		{ "ToolTip", "Root Bone Lock options when extracting Root Motion." },
		{ "Zero.Comment", "/** FTransform::Identity. */" },
		{ "Zero.Name", "ERootMotionRootLock::Zero" },
		{ "Zero.ToolTip", "FTransform::Identity." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERootMotionRootLock_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ERootMotionRootLock",
		"ERootMotionRootLock::Type",
		Z_Construct_UEnum_Engine_ERootMotionRootLock_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERootMotionRootLock_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ERootMotionRootLock_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERootMotionRootLock_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ERootMotionRootLock()
	{
		if (!Z_Registration_Info_UEnum_ERootMotionRootLock.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERootMotionRootLock.InnerSingleton, Z_Construct_UEnum_Engine_ERootMotionRootLock_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERootMotionRootLock.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERootMotionMode;
	static UEnum* ERootMotionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERootMotionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERootMotionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ERootMotionMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ERootMotionMode"));
		}
		return Z_Registration_Info_UEnum_ERootMotionMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ERootMotionMode::Type>()
	{
		return ERootMotionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ERootMotionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ERootMotionMode_Statics::Enumerators[] = {
		{ "ERootMotionMode::NoRootMotionExtraction", (int64)ERootMotionMode::NoRootMotionExtraction },
		{ "ERootMotionMode::IgnoreRootMotion", (int64)ERootMotionMode::IgnoreRootMotion },
		{ "ERootMotionMode::RootMotionFromEverything", (int64)ERootMotionMode::RootMotionFromEverything },
		{ "ERootMotionMode::RootMotionFromMontagesOnly", (int64)ERootMotionMode::RootMotionFromMontagesOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ERootMotionMode_Statics::Enum_MetaDataParams[] = {
		{ "IgnoreRootMotion.Comment", "/** Extract root motion but do not apply it. */" },
		{ "IgnoreRootMotion.Name", "ERootMotionMode::IgnoreRootMotion" },
		{ "IgnoreRootMotion.ToolTip", "Extract root motion but do not apply it." },
		{ "ModuleRelativePath", "Classes/Animation/AnimEnums.h" },
		{ "NoRootMotionExtraction.Comment", "/** Leave root motion in animation. */" },
		{ "NoRootMotionExtraction.Name", "ERootMotionMode::NoRootMotionExtraction" },
		{ "NoRootMotionExtraction.ToolTip", "Leave root motion in animation." },
		{ "RootMotionFromEverything.Comment", "/** Root motion is taken from all animations contributing to the final pose, not suitable for network multiplayer setups. */" },
		{ "RootMotionFromEverything.Name", "ERootMotionMode::RootMotionFromEverything" },
		{ "RootMotionFromEverything.ToolTip", "Root motion is taken from all animations contributing to the final pose, not suitable for network multiplayer setups." },
		{ "RootMotionFromMontagesOnly.Comment", "/** Root motion is only taken from montages, suitable for network multiplayer setups. */" },
		{ "RootMotionFromMontagesOnly.Name", "ERootMotionMode::RootMotionFromMontagesOnly" },
		{ "RootMotionFromMontagesOnly.ToolTip", "Root motion is only taken from montages, suitable for network multiplayer setups." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ERootMotionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ERootMotionMode",
		"ERootMotionMode::Type",
		Z_Construct_UEnum_Engine_ERootMotionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERootMotionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ERootMotionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ERootMotionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ERootMotionMode()
	{
		if (!Z_Registration_Info_UEnum_ERootMotionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERootMotionMode.InnerSingleton, Z_Construct_UEnum_Engine_ERootMotionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERootMotionMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAdditiveBasePoseType;
	static UEnum* EAdditiveBasePoseType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAdditiveBasePoseType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAdditiveBasePoseType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAdditiveBasePoseType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAdditiveBasePoseType"));
		}
		return Z_Registration_Info_UEnum_EAdditiveBasePoseType.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EAdditiveBasePoseType>()
	{
		return EAdditiveBasePoseType_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EAdditiveBasePoseType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EAdditiveBasePoseType_Statics::Enumerators[] = {
		{ "ABPT_None", (int64)ABPT_None },
		{ "ABPT_RefPose", (int64)ABPT_RefPose },
		{ "ABPT_AnimScaled", (int64)ABPT_AnimScaled },
		{ "ABPT_AnimFrame", (int64)ABPT_AnimFrame },
		{ "ABPT_LocalAnimFrame", (int64)ABPT_LocalAnimFrame },
		{ "ABPT_MAX", (int64)ABPT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EAdditiveBasePoseType_Statics::Enum_MetaDataParams[] = {
		{ "ABPT_AnimFrame.Comment", "/** Use one frame of an animation as a base pose. BasePoseSeq and RefFrameIndex must be set (RefFrameIndex will be clamped). */" },
		{ "ABPT_AnimFrame.DisplayName", "Selected animation frame" },
		{ "ABPT_AnimFrame.Name", "ABPT_AnimFrame" },
		{ "ABPT_AnimFrame.ToolTip", "Use one frame of an animation as a base pose. BasePoseSeq and RefFrameIndex must be set (RefFrameIndex will be clamped)." },
		{ "ABPT_AnimScaled.Comment", "/** Use a whole animation as a base pose. BasePoseSeq must be set. */" },
		{ "ABPT_AnimScaled.DisplayName", "Selected animation scaled" },
		{ "ABPT_AnimScaled.Name", "ABPT_AnimScaled" },
		{ "ABPT_AnimScaled.ToolTip", "Use a whole animation as a base pose. BasePoseSeq must be set." },
		{ "ABPT_LocalAnimFrame.Comment", "/** Use one frame of this animation. RefFrameIndex must be set (RefFrameIndex will be clamped). */" },
		{ "ABPT_LocalAnimFrame.DisplayName", "Frame from this animation" },
		{ "ABPT_LocalAnimFrame.Name", "ABPT_LocalAnimFrame" },
		{ "ABPT_LocalAnimFrame.ToolTip", "Use one frame of this animation. RefFrameIndex must be set (RefFrameIndex will be clamped)." },
		{ "ABPT_MAX.Name", "ABPT_MAX" },
		{ "ABPT_None.Comment", "/** Will be deprecated. */" },
		{ "ABPT_None.DisplayName", "None" },
		{ "ABPT_None.Name", "ABPT_None" },
		{ "ABPT_None.ToolTip", "Will be deprecated." },
		{ "ABPT_RefPose.Comment", "/** Use the Skeleton's ref pose as base. */" },
		{ "ABPT_RefPose.DisplayName", "Skeleton Reference Pose" },
		{ "ABPT_RefPose.Name", "ABPT_RefPose" },
		{ "ABPT_RefPose.ToolTip", "Use the Skeleton's ref pose as base." },
		{ "Comment", "/**\n* For an additive animation, indicates what the animation is relative to.\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimEnums.h" },
		{ "ToolTip", "For an additive animation, indicates what the animation is relative to." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAdditiveBasePoseType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EAdditiveBasePoseType",
		"EAdditiveBasePoseType",
		Z_Construct_UEnum_Engine_EAdditiveBasePoseType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAdditiveBasePoseType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EAdditiveBasePoseType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAdditiveBasePoseType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EAdditiveBasePoseType()
	{
		if (!Z_Registration_Info_UEnum_EAdditiveBasePoseType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAdditiveBasePoseType.InnerSingleton, Z_Construct_UEnum_Engine_EAdditiveBasePoseType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAdditiveBasePoseType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AnimationCompressionFormat;
	static UEnum* AnimationCompressionFormat_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AnimationCompressionFormat.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AnimationCompressionFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_AnimationCompressionFormat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimationCompressionFormat"));
		}
		return Z_Registration_Info_UEnum_AnimationCompressionFormat.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<AnimationCompressionFormat>()
	{
		return AnimationCompressionFormat_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_AnimationCompressionFormat_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_AnimationCompressionFormat_Statics::Enumerators[] = {
		{ "ACF_None", (int64)ACF_None },
		{ "ACF_Float96NoW", (int64)ACF_Float96NoW },
		{ "ACF_Fixed48NoW", (int64)ACF_Fixed48NoW },
		{ "ACF_IntervalFixed32NoW", (int64)ACF_IntervalFixed32NoW },
		{ "ACF_Fixed32NoW", (int64)ACF_Fixed32NoW },
		{ "ACF_Float32NoW", (int64)ACF_Float32NoW },
		{ "ACF_Identity", (int64)ACF_Identity },
		{ "ACF_MAX", (int64)ACF_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_AnimationCompressionFormat_Statics::Enum_MetaDataParams[] = {
		{ "ACF_Fixed32NoW.Name", "ACF_Fixed32NoW" },
		{ "ACF_Fixed48NoW.Name", "ACF_Fixed48NoW" },
		{ "ACF_Float32NoW.Name", "ACF_Float32NoW" },
		{ "ACF_Float96NoW.Name", "ACF_Float96NoW" },
		{ "ACF_Identity.Name", "ACF_Identity" },
		{ "ACF_IntervalFixed32NoW.Name", "ACF_IntervalFixed32NoW" },
		{ "ACF_MAX.Hidden", "" },
		{ "ACF_MAX.Name", "ACF_MAX" },
		{ "ACF_None.Name", "ACF_None" },
		{ "Comment", "/**\n* Indicates animation data compression format.\n*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimEnums.h" },
		{ "ToolTip", "Indicates animation data compression format." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_AnimationCompressionFormat_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"AnimationCompressionFormat",
		"AnimationCompressionFormat",
		Z_Construct_UEnum_Engine_AnimationCompressionFormat_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_AnimationCompressionFormat_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_AnimationCompressionFormat_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_AnimationCompressionFormat_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_AnimationCompressionFormat()
	{
		if (!Z_Registration_Info_UEnum_AnimationCompressionFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AnimationCompressionFormat.InnerSingleton, Z_Construct_UEnum_Engine_AnimationCompressionFormat_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AnimationCompressionFormat.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimEnums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimEnums_h_Statics::EnumInfo[] = {
		{ ERootMotionRootLock_StaticEnum, TEXT("ERootMotionRootLock"), &Z_Registration_Info_UEnum_ERootMotionRootLock, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2118872410U) },
		{ ERootMotionMode_StaticEnum, TEXT("ERootMotionMode"), &Z_Registration_Info_UEnum_ERootMotionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 359971998U) },
		{ EAdditiveBasePoseType_StaticEnum, TEXT("EAdditiveBasePoseType"), &Z_Registration_Info_UEnum_EAdditiveBasePoseType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3632598934U) },
		{ AnimationCompressionFormat_StaticEnum, TEXT("AnimationCompressionFormat"), &Z_Registration_Info_UEnum_AnimationCompressionFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2787951824U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimEnums_h_384479264(TEXT("/Script/Engine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimEnums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
