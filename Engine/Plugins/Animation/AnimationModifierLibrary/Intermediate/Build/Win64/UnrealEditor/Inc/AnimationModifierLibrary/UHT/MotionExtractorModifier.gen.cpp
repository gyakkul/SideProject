// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionExtractorModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionExtractorModifier() {}
// Cross Module References
	ANIMATIONMODIFIERLIBRARY_API UClass* Z_Construct_UClass_UMotionExtractorModifier();
	ANIMATIONMODIFIERLIBRARY_API UClass* Z_Construct_UClass_UMotionExtractorModifier_NoRegister();
	ANIMATIONMODIFIERLIBRARY_API UEnum* Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_Axis();
	ANIMATIONMODIFIERLIBRARY_API UEnum* Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MathOperation();
	ANIMATIONMODIFIERLIBRARY_API UEnum* Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MotionType();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier();
	UPackage* Z_Construct_UPackage__Script_AnimationModifierLibrary();
// End Cross Module References
	void UMotionExtractorModifier::StaticRegisterNativesUMotionExtractorModifier()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotionExtractorModifier);
	UClass* Z_Construct_UClass_UMotionExtractorModifier_NoRegister()
	{
		return UMotionExtractorModifier::StaticClass();
	}
	struct Z_Construct_UClass_UMotionExtractorModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MotionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MotionType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveCurveOnRevert_MetaData[];
#endif
		static void NewProp_bRemoveCurveOnRevert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveCurveOnRevert;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRelativeToFirstFrame_MetaData[];
#endif
		static void NewProp_bRelativeToFirstFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRelativeToFirstFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComponentSpace_MetaData[];
#endif
		static void NewProp_bComponentSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComponentSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteValue_MetaData[];
#endif
		static void NewProp_bAbsoluteValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MathOperation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MathOperation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MathOperation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Modifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNormalize_MetaData[];
#endif
		static void NewProp_bNormalize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleRate_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SampleRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomCurveName_MetaData[];
#endif
		static void NewProp_bUseCustomCurveName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomCurveName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomCurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CustomCurveName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionExtractorModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimationModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationModifierLibrary,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionExtractorModifier_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Extracts motion from a bone in the animation and bakes it into a curve */" },
		{ "IncludePath", "MotionExtractorModifier.h" },
		{ "ModuleRelativePath", "Public/MotionExtractorModifier.h" },
		{ "ToolTip", "Extracts motion from a bone in the animation and bakes it into a curve" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Bone we are going to generate the curve from */" },
		{ "ModuleRelativePath", "Public/MotionExtractorModifier.h" },
		{ "ToolTip", "Bone we are going to generate the curve from" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionExtractorModifier, BoneName), METADATA_PARAMS(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_MotionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_MotionType_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Type of motion to extract */" },
		{ "ModuleRelativePath", "Public/MotionExtractorModifier.h" },
		{ "ToolTip", "Type of motion to extract" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_MotionType = { "MotionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionExtractorModifier, MotionType), Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MotionType, METADATA_PARAMS(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_MotionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_MotionType_MetaData)) }; // 1315421341
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Axis to get the value from */" },
		{ "ModuleRelativePath", "Public/MotionExtractorModifier.h" },
		{ "ToolTip", "Axis to get the value from" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionExtractorModifier, Axis), Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_Axis, METADATA_PARAMS(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_Axis_MetaData)) }; // 1450347950
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bRemoveCurveOnRevert_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether we want to remove the curve when we revert or re-apply modifier \n\x09\x09""Disabling this allows you to modify settings and create a new curve each time you re-apply the modifier\n\x09\x09""Enabling this is the preferred setting when using a modifier that's applied in bulk and you may want to remove/rename curves */" },
		{ "ModuleRelativePath", "Public/MotionExtractorModifier.h" },
		{ "ToolTip", "Whether we want to remove the curve when we revert or re-apply modifier\n              Disabling this allows you to modify settings and create a new curve each time you re-apply the modifier\n              Enabling this is the preferred setting when using a modifier that's applied in bulk and you may want to remove/rename curves" },
	};
#endif
	void Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bRemoveCurveOnRevert_SetBit(void* Obj)
	{
		((UMotionExtractorModifier*)Obj)->bRemoveCurveOnRevert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bRemoveCurveOnRevert = { "bRemoveCurveOnRevert", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotionExtractorModifier), &Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bRemoveCurveOnRevert_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bRemoveCurveOnRevert_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bRemoveCurveOnRevert_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bRelativeToFirstFrame_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to extract the bone transforms relative to the first frame in the animation */" },
		{ "ModuleRelativePath", "Public/MotionExtractorModifier.h" },
		{ "ToolTip", "Whether to extract the bone transforms relative to the first frame in the animation" },
	};
#endif
	void Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bRelativeToFirstFrame_SetBit(void* Obj)
	{
		((UMotionExtractorModifier*)Obj)->bRelativeToFirstFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bRelativeToFirstFrame = { "bRelativeToFirstFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotionExtractorModifier), &Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bRelativeToFirstFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bRelativeToFirstFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bRelativeToFirstFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bComponentSpace_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to extract the bone pose in component space or local space */" },
		{ "ModuleRelativePath", "Public/MotionExtractorModifier.h" },
		{ "ToolTip", "Whether to extract the bone pose in component space or local space" },
	};
#endif
	void Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bComponentSpace_SetBit(void* Obj)
	{
		((UMotionExtractorModifier*)Obj)->bComponentSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bComponentSpace = { "bComponentSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotionExtractorModifier), &Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bComponentSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bComponentSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bComponentSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bAbsoluteValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether to convert the final value to absolute (positive) */" },
		{ "ModuleRelativePath", "Public/MotionExtractorModifier.h" },
		{ "ToolTip", "Whether to convert the final value to absolute (positive)" },
	};
#endif
	void Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bAbsoluteValue_SetBit(void* Obj)
	{
		((UMotionExtractorModifier*)Obj)->bAbsoluteValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bAbsoluteValue = { "bAbsoluteValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotionExtractorModifier), &Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bAbsoluteValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bAbsoluteValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bAbsoluteValue_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_MathOperation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_MathOperation_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Optional math operation to apply on the extracted value before add it to the generated curve */" },
		{ "ModuleRelativePath", "Public/MotionExtractorModifier.h" },
		{ "ToolTip", "Optional math operation to apply on the extracted value before add it to the generated curve" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_MathOperation = { "MathOperation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionExtractorModifier, MathOperation), Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MathOperation, METADATA_PARAMS(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_MathOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_MathOperation_MetaData)) }; // 2333572841
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_Modifier_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Right operand for the math operation selected */" },
		{ "EditCondition", "MathOperation != EMotionExtractor_MathOperation::None" },
		{ "ModuleRelativePath", "Public/MotionExtractorModifier.h" },
		{ "ToolTip", "Right operand for the math operation selected" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_Modifier = { "Modifier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionExtractorModifier, Modifier), METADATA_PARAMS(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_Modifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_Modifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bNormalize_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether we want a normalized value (0 - 1) */" },
		{ "ModuleRelativePath", "Public/MotionExtractorModifier.h" },
		{ "ToolTip", "Whether we want a normalized value (0 - 1)" },
	};
#endif
	void Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bNormalize_SetBit(void* Obj)
	{
		((UMotionExtractorModifier*)Obj)->bNormalize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bNormalize = { "bNormalize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotionExtractorModifier), &Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bNormalize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bNormalize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bNormalize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_SampleRate_MetaData[] = {
		{ "Category", "Settings" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Rate used to sample the animation */" },
		{ "ModuleRelativePath", "Public/MotionExtractorModifier.h" },
		{ "ToolTip", "Rate used to sample the animation" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionExtractorModifier, SampleRate), METADATA_PARAMS(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_SampleRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_SampleRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bUseCustomCurveName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Whether we want to specify a custom name for the curve. If false, the name of the curve will be auto generated based on the data we are going to extract */" },
		{ "ModuleRelativePath", "Public/MotionExtractorModifier.h" },
		{ "ToolTip", "Whether we want to specify a custom name for the curve. If false, the name of the curve will be auto generated based on the data we are going to extract" },
	};
#endif
	void Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bUseCustomCurveName_SetBit(void* Obj)
	{
		((UMotionExtractorModifier*)Obj)->bUseCustomCurveName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bUseCustomCurveName = { "bUseCustomCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMotionExtractorModifier), &Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bUseCustomCurveName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bUseCustomCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bUseCustomCurveName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_CustomCurveName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Custom name for the curve we are going to generate. */" },
		{ "EditCondition", "bUseCustomCurveName" },
		{ "ModuleRelativePath", "Public/MotionExtractorModifier.h" },
		{ "ToolTip", "Custom name for the curve we are going to generate." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_CustomCurveName = { "CustomCurveName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMotionExtractorModifier, CustomCurveName), METADATA_PARAMS(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_CustomCurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_CustomCurveName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMotionExtractorModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_MotionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_MotionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bRemoveCurveOnRevert,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bRelativeToFirstFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bComponentSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bAbsoluteValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_MathOperation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_MathOperation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_Modifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bNormalize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_SampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_bUseCustomCurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMotionExtractorModifier_Statics::NewProp_CustomCurveName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionExtractorModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionExtractorModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotionExtractorModifier_Statics::ClassParams = {
		&UMotionExtractorModifier::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMotionExtractorModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMotionExtractorModifier_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMotionExtractorModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionExtractorModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotionExtractorModifier()
	{
		if (!Z_Registration_Info_UClass_UMotionExtractorModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionExtractorModifier.OuterSingleton, Z_Construct_UClass_UMotionExtractorModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMotionExtractorModifier.OuterSingleton;
	}
	template<> ANIMATIONMODIFIERLIBRARY_API UClass* StaticClass<UMotionExtractorModifier>()
	{
		return UMotionExtractorModifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionExtractorModifier);
	UMotionExtractorModifier::~UMotionExtractorModifier() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorModifier_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMotionExtractorModifier, UMotionExtractorModifier::StaticClass, TEXT("UMotionExtractorModifier"), &Z_Registration_Info_UClass_UMotionExtractorModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionExtractorModifier), 4125948560U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorModifier_h_1832227744(TEXT("/Script/AnimationModifierLibrary"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorModifier_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
