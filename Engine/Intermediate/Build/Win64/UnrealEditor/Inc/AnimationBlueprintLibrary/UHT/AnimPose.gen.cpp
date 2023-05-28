// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimPose.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimPose() {}
// Cross Module References
	ANIMATIONBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UAnimPoseExtensions();
	ANIMATIONBLUEPRINTLIBRARY_API UClass* Z_Construct_UClass_UAnimPoseExtensions_NoRegister();
	ANIMATIONBLUEPRINTLIBRARY_API UEnum* Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimDataEvalType();
	ANIMATIONBLUEPRINTLIBRARY_API UEnum* Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces();
	ANIMATIONBLUEPRINTLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPose();
	ANIMATIONBLUEPRINTLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimationBlueprintLibrary();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimPoseSpaces;
	static UEnum* EAnimPoseSpaces_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimPoseSpaces.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimPoseSpaces.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces, (UObject*)Z_Construct_UPackage__Script_AnimationBlueprintLibrary(), TEXT("EAnimPoseSpaces"));
		}
		return Z_Registration_Info_UEnum_EAnimPoseSpaces.OuterSingleton;
	}
	template<> ANIMATIONBLUEPRINTLIBRARY_API UEnum* StaticEnum<EAnimPoseSpaces>()
	{
		return EAnimPoseSpaces_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces_Statics::Enumerators[] = {
		{ "EAnimPoseSpaces::Local", (int64)EAnimPoseSpaces::Local },
		{ "EAnimPoseSpaces::World", (int64)EAnimPoseSpaces::World },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Local.Comment", "// Local (bone) space \n" },
		{ "Local.Name", "EAnimPoseSpaces::Local" },
		{ "Local.ToolTip", "Local (bone) space" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "World.Comment", "// World (component) space\n" },
		{ "World.Name", "EAnimPoseSpaces::World" },
		{ "World.ToolTip", "World (component) space" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimationBlueprintLibrary,
		nullptr,
		"EAnimPoseSpaces",
		"EAnimPoseSpaces",
		Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces()
	{
		if (!Z_Registration_Info_UEnum_EAnimPoseSpaces.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimPoseSpaces.InnerSingleton, Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimPoseSpaces.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimDataEvalType;
	static UEnum* EAnimDataEvalType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimDataEvalType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimDataEvalType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimDataEvalType, (UObject*)Z_Construct_UPackage__Script_AnimationBlueprintLibrary(), TEXT("EAnimDataEvalType"));
		}
		return Z_Registration_Info_UEnum_EAnimDataEvalType.OuterSingleton;
	}
	template<> ANIMATIONBLUEPRINTLIBRARY_API UEnum* StaticEnum<EAnimDataEvalType>()
	{
		return EAnimDataEvalType_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimDataEvalType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimDataEvalType_Statics::Enumerators[] = {
		{ "EAnimDataEvalType::Source", (int64)EAnimDataEvalType::Source },
		{ "EAnimDataEvalType::Raw", (int64)EAnimDataEvalType::Raw },
		{ "EAnimDataEvalType::Compressed", (int64)EAnimDataEvalType::Compressed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimDataEvalType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Compressed.Comment", "// Evaluates the compressed Animation data - matching runtime (cooked)\n" },
		{ "Compressed.Name", "EAnimDataEvalType::Compressed" },
		{ "Compressed.ToolTip", "Evaluates the compressed Animation data - matching runtime (cooked)" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "Raw.Comment", "// Evaluates the original Animation Source data with additive animation layers\n" },
		{ "Raw.Name", "EAnimDataEvalType::Raw" },
		{ "Raw.ToolTip", "Evaluates the original Animation Source data with additive animation layers" },
		{ "Source.Comment", "// Evaluates the original Animation Source data \n" },
		{ "Source.Name", "EAnimDataEvalType::Source" },
		{ "Source.ToolTip", "Evaluates the original Animation Source data" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimDataEvalType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimationBlueprintLibrary,
		nullptr,
		"EAnimDataEvalType",
		"EAnimDataEvalType",
		Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimDataEvalType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimDataEvalType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimDataEvalType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimDataEvalType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimDataEvalType()
	{
		if (!Z_Registration_Info_UEnum_EAnimDataEvalType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimDataEvalType.InnerSingleton, Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimDataEvalType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimDataEvalType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimPoseEvaluationOptions;
class UScriptStruct* FAnimPoseEvaluationOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPoseEvaluationOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimPoseEvaluationOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions, (UObject*)Z_Construct_UPackage__Script_AnimationBlueprintLibrary(), TEXT("AnimPoseEvaluationOptions"));
	}
	return Z_Registration_Info_UScriptStruct_AnimPoseEvaluationOptions.OuterSingleton;
}
template<> ANIMATIONBLUEPRINTLIBRARY_API UScriptStruct* StaticStruct<FAnimPoseEvaluationOptions>()
{
	return FAnimPoseEvaluationOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_EvaluationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EvaluationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EvaluationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldRetarget_MetaData[];
#endif
		static void NewProp_bShouldRetarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldRetarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExtractRootMotion_MetaData[];
#endif
		static void NewProp_bExtractRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtractRootMotion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OptionalSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRetrieveAdditiveAsFullPose_MetaData[];
#endif
		static void NewProp_bRetrieveAdditiveAsFullPose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetrieveAdditiveAsFullPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateCurves_MetaData[];
#endif
		static void NewProp_bEvaluateCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateCurves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimPoseEvaluationOptions>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_EvaluationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_EvaluationType_MetaData[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "// Type of evaluation which should be used\n" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ToolTip", "Type of evaluation which should be used" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_EvaluationType = { "EvaluationType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPoseEvaluationOptions, EvaluationType), Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimDataEvalType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_EvaluationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_EvaluationType_MetaData)) }; // 2914800918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bShouldRetarget_MetaData[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "// Whether or not to retarget animation during evaluation\n" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ToolTip", "Whether or not to retarget animation during evaluation" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bShouldRetarget_SetBit(void* Obj)
	{
		((FAnimPoseEvaluationOptions*)Obj)->bShouldRetarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bShouldRetarget = { "bShouldRetarget", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimPoseEvaluationOptions), &Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bShouldRetarget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bShouldRetarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bShouldRetarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bExtractRootMotion_MetaData[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "// Whether or not to extract root motion values\n" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ToolTip", "Whether or not to extract root motion values" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bExtractRootMotion_SetBit(void* Obj)
	{
		((FAnimPoseEvaluationOptions*)Obj)->bExtractRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bExtractRootMotion = { "bExtractRootMotion", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimPoseEvaluationOptions), &Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bExtractRootMotion_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bExtractRootMotion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bExtractRootMotion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_OptionalSkeletalMesh_MetaData[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "// Optional skeletal mesh with proportions to use when evaluating a pose\n" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ToolTip", "Optional skeletal mesh with proportions to use when evaluating a pose" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_OptionalSkeletalMesh = { "OptionalSkeletalMesh", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPoseEvaluationOptions, OptionalSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_OptionalSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_OptionalSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bRetrieveAdditiveAsFullPose_MetaData[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "// Whether or additive animations should be applied to their base-pose \n" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ToolTip", "Whether or additive animations should be applied to their base-pose" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bRetrieveAdditiveAsFullPose_SetBit(void* Obj)
	{
		((FAnimPoseEvaluationOptions*)Obj)->bRetrieveAdditiveAsFullPose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bRetrieveAdditiveAsFullPose = { "bRetrieveAdditiveAsFullPose", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimPoseEvaluationOptions), &Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bRetrieveAdditiveAsFullPose_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bRetrieveAdditiveAsFullPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bRetrieveAdditiveAsFullPose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bEvaluateCurves_MetaData[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "// Whether or not to evaluate Animation Curves\n" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ToolTip", "Whether or not to evaluate Animation Curves" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bEvaluateCurves_SetBit(void* Obj)
	{
		((FAnimPoseEvaluationOptions*)Obj)->bEvaluateCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bEvaluateCurves = { "bEvaluateCurves", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimPoseEvaluationOptions), &Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bEvaluateCurves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bEvaluateCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bEvaluateCurves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_EvaluationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_EvaluationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bShouldRetarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bExtractRootMotion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_OptionalSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bRetrieveAdditiveAsFullPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewProp_bEvaluateCurves,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationBlueprintLibrary,
		nullptr,
		&NewStructOps,
		"AnimPoseEvaluationOptions",
		sizeof(FAnimPoseEvaluationOptions),
		alignof(FAnimPoseEvaluationOptions),
		Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimPoseEvaluationOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimPoseEvaluationOptions.InnerSingleton, Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimPoseEvaluationOptions.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimPose;
class UScriptStruct* FAnimPose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimPose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimPose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimPose, (UObject*)Z_Construct_UPackage__Script_AnimationBlueprintLibrary(), TEXT("AnimPose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimPose.OuterSingleton;
}
template<> ANIMATIONBLUEPRINTLIBRARY_API UScriptStruct* StaticStruct<FAnimPose>()
{
	return FAnimPose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimPose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneIndices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ParentBoneIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentBoneIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentBoneIndices;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocalSpacePoses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalSpacePoses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalSpacePoses;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpacePoses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldSpacePoses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldSpacePoses;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RefLocalSpacePoses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefLocalSpacePoses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RefLocalSpacePoses;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RefWorldSpacePoses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefWorldSpacePoses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RefWorldSpacePoses;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveNames;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Script friendly representation of an evaluated animation bone pose */" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ToolTip", "Script friendly representation of an evaluated animation bone pose" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimPose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimPose>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_BoneNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimPose.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPose, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_BoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_BoneNames_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_BoneIndices_Inner = { "BoneIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_BoneIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimPose.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_BoneIndices = { "BoneIndices", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPose, BoneIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_BoneIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_BoneIndices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_ParentBoneIndices_Inner = { "ParentBoneIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_ParentBoneIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimPose.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_ParentBoneIndices = { "ParentBoneIndices", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPose, ParentBoneIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_ParentBoneIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_ParentBoneIndices_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_LocalSpacePoses_Inner = { "LocalSpacePoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_LocalSpacePoses_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimPose.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_LocalSpacePoses = { "LocalSpacePoses", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPose, LocalSpacePoses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_LocalSpacePoses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_LocalSpacePoses_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_WorldSpacePoses_Inner = { "WorldSpacePoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_WorldSpacePoses_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimPose.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_WorldSpacePoses = { "WorldSpacePoses", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPose, WorldSpacePoses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_WorldSpacePoses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_WorldSpacePoses_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_RefLocalSpacePoses_Inner = { "RefLocalSpacePoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_RefLocalSpacePoses_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimPose.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_RefLocalSpacePoses = { "RefLocalSpacePoses", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPose, RefLocalSpacePoses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_RefLocalSpacePoses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_RefLocalSpacePoses_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_RefWorldSpacePoses_Inner = { "RefWorldSpacePoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_RefWorldSpacePoses_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimPose.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_RefWorldSpacePoses = { "RefWorldSpacePoses", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPose, RefWorldSpacePoses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_RefWorldSpacePoses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_RefWorldSpacePoses_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_CurveNames_Inner = { "CurveNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_CurveNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimPose.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_CurveNames = { "CurveNames", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPose, CurveNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_CurveNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_CurveNames_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_CurveValues_Inner = { "CurveValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_CurveValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimPose.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_CurveValues = { "CurveValues", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimPose, CurveValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_CurveValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_CurveValues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_BoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_BoneIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_BoneIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_ParentBoneIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_ParentBoneIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_LocalSpacePoses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_LocalSpacePoses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_WorldSpacePoses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_WorldSpacePoses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_RefLocalSpacePoses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_RefLocalSpacePoses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_RefWorldSpacePoses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_RefWorldSpacePoses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_CurveNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_CurveNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_CurveValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimPose_Statics::NewProp_CurveValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimPose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationBlueprintLibrary,
		nullptr,
		&NewStructOps,
		"AnimPose",
		sizeof(FAnimPose),
		alignof(FAnimPose),
		Z_Construct_UScriptStruct_FAnimPose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimPose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimPose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimPose()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimPose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimPose.InnerSingleton, Z_Construct_UScriptStruct_FAnimPose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimPose.InnerSingleton;
	}
	DEFINE_FUNCTION(UAnimPoseExtensions::execGetCurveWeight)
	{
		P_GET_STRUCT_REF(FAnimPose,Z_Param_Out_Pose);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_CurveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAnimPoseExtensions::GetCurveWeight(Z_Param_Out_Pose,Z_Param_Out_CurveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimPoseExtensions::execGetCurveNames)
	{
		P_GET_STRUCT_REF(FAnimPose,Z_Param_Out_Pose);
		P_GET_TARRAY_REF(FName,Z_Param_Out_Curves);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimPoseExtensions::GetCurveNames(Z_Param_Out_Pose,Z_Param_Out_Curves);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimPoseExtensions::execGetReferencePose)
	{
		P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
		P_GET_STRUCT_REF(FAnimPose,Z_Param_Out_OutPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimPoseExtensions::GetReferencePose(Z_Param_Skeleton,Z_Param_Out_OutPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimPoseExtensions::execEvaluateAnimationBlueprintWithInputPose)
	{
		P_GET_STRUCT_REF(FAnimPose,Z_Param_Out_InputPose);
		P_GET_OBJECT(USkeletalMesh,Z_Param_TargetSkeletalMesh);
		P_GET_OBJECT(UAnimBlueprint,Z_Param_AnimationBlueprint);
		P_GET_STRUCT_REF(FAnimPose,Z_Param_Out_OutPose);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimPoseExtensions::EvaluateAnimationBlueprintWithInputPose(Z_Param_Out_InputPose,Z_Param_TargetSkeletalMesh,Z_Param_AnimationBlueprint,Z_Param_Out_OutPose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimPoseExtensions::execGetAnimPoseAtFrame)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FIntProperty,Z_Param_FrameIndex);
		P_GET_STRUCT(FAnimPoseEvaluationOptions,Z_Param_EvaluationOptions);
		P_GET_STRUCT_REF(FAnimPose,Z_Param_Out_Pose);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimPoseExtensions::GetAnimPoseAtFrame(Z_Param_AnimationSequenceBase,Z_Param_FrameIndex,Z_Param_EvaluationOptions,Z_Param_Out_Pose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimPoseExtensions::execGetAnimPoseAtTime)
	{
		P_GET_OBJECT(UAnimSequenceBase,Z_Param_AnimationSequenceBase);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_Time);
		P_GET_STRUCT(FAnimPoseEvaluationOptions,Z_Param_EvaluationOptions);
		P_GET_STRUCT_REF(FAnimPose,Z_Param_Out_Pose);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimPoseExtensions::GetAnimPoseAtTime(Z_Param_AnimationSequenceBase,Z_Param_Time,Z_Param_EvaluationOptions,Z_Param_Out_Pose);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimPoseExtensions::execGetRefPoseRelativeTransform)
	{
		P_GET_STRUCT_REF(FAnimPose,Z_Param_Out_Pose);
		P_GET_PROPERTY(FNameProperty,Z_Param_FromBoneName);
		P_GET_PROPERTY(FNameProperty,Z_Param_ToBoneName);
		P_GET_ENUM(EAnimPoseSpaces,Z_Param_Space);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UAnimPoseExtensions::GetRefPoseRelativeTransform(Z_Param_Out_Pose,Z_Param_FromBoneName,Z_Param_ToBoneName,EAnimPoseSpaces(Z_Param_Space));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimPoseExtensions::execGetRelativeToRefPoseTransform)
	{
		P_GET_STRUCT_REF(FAnimPose,Z_Param_Out_Pose);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_ENUM(EAnimPoseSpaces,Z_Param_Space);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UAnimPoseExtensions::GetRelativeToRefPoseTransform(Z_Param_Out_Pose,Z_Param_BoneName,EAnimPoseSpaces(Z_Param_Space));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimPoseExtensions::execGetRelativeTransform)
	{
		P_GET_STRUCT_REF(FAnimPose,Z_Param_Out_Pose);
		P_GET_PROPERTY(FNameProperty,Z_Param_FromBoneName);
		P_GET_PROPERTY(FNameProperty,Z_Param_ToBoneName);
		P_GET_ENUM(EAnimPoseSpaces,Z_Param_Space);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UAnimPoseExtensions::GetRelativeTransform(Z_Param_Out_Pose,Z_Param_FromBoneName,Z_Param_ToBoneName,EAnimPoseSpaces(Z_Param_Space));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimPoseExtensions::execGetRefBonePose)
	{
		P_GET_STRUCT_REF(FAnimPose,Z_Param_Out_Pose);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_ENUM(EAnimPoseSpaces,Z_Param_Space);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UAnimPoseExtensions::GetRefBonePose(Z_Param_Out_Pose,Z_Param_BoneName,EAnimPoseSpaces(Z_Param_Space));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimPoseExtensions::execSetBonePose)
	{
		P_GET_STRUCT_REF(FAnimPose,Z_Param_Out_Pose);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_ENUM(EAnimPoseSpaces,Z_Param_Space);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimPoseExtensions::SetBonePose(Z_Param_Out_Pose,Z_Param_Transform,Z_Param_BoneName,EAnimPoseSpaces(Z_Param_Space));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimPoseExtensions::execGetBonePose)
	{
		P_GET_STRUCT_REF(FAnimPose,Z_Param_Out_Pose);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_ENUM(EAnimPoseSpaces,Z_Param_Space);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UAnimPoseExtensions::GetBonePose(Z_Param_Out_Pose,Z_Param_BoneName,EAnimPoseSpaces(Z_Param_Space));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimPoseExtensions::execGetBoneNames)
	{
		P_GET_STRUCT_REF(FAnimPose,Z_Param_Out_Pose);
		P_GET_TARRAY_REF(FName,Z_Param_Out_Bones);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimPoseExtensions::GetBoneNames(Z_Param_Out_Pose,Z_Param_Out_Bones);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimPoseExtensions::execIsValid)
	{
		P_GET_STRUCT_REF(FAnimPose,Z_Param_Out_Pose);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimPoseExtensions::IsValid(Z_Param_Out_Pose);
		P_NATIVE_END;
	}
	void UAnimPoseExtensions::StaticRegisterNativesUAnimPoseExtensions()
	{
		UClass* Class = UAnimPoseExtensions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EvaluateAnimationBlueprintWithInputPose", &UAnimPoseExtensions::execEvaluateAnimationBlueprintWithInputPose },
			{ "GetAnimPoseAtFrame", &UAnimPoseExtensions::execGetAnimPoseAtFrame },
			{ "GetAnimPoseAtTime", &UAnimPoseExtensions::execGetAnimPoseAtTime },
			{ "GetBoneNames", &UAnimPoseExtensions::execGetBoneNames },
			{ "GetBonePose", &UAnimPoseExtensions::execGetBonePose },
			{ "GetCurveNames", &UAnimPoseExtensions::execGetCurveNames },
			{ "GetCurveWeight", &UAnimPoseExtensions::execGetCurveWeight },
			{ "GetRefBonePose", &UAnimPoseExtensions::execGetRefBonePose },
			{ "GetReferencePose", &UAnimPoseExtensions::execGetReferencePose },
			{ "GetRefPoseRelativeTransform", &UAnimPoseExtensions::execGetRefPoseRelativeTransform },
			{ "GetRelativeToRefPoseTransform", &UAnimPoseExtensions::execGetRelativeToRefPoseTransform },
			{ "GetRelativeTransform", &UAnimPoseExtensions::execGetRelativeTransform },
			{ "IsValid", &UAnimPoseExtensions::execIsValid },
			{ "SetBonePose", &UAnimPoseExtensions::execSetBonePose },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics
	{
		struct AnimPoseExtensions_eventEvaluateAnimationBlueprintWithInputPose_Parms
		{
			FAnimPose InputPose;
			USkeletalMesh* TargetSkeletalMesh;
			UAnimBlueprint* AnimationBlueprint;
			FAnimPose OutPose;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPose;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSkeletalMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationBlueprint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::NewProp_InputPose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::NewProp_InputPose = { "InputPose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventEvaluateAnimationBlueprintWithInputPose_Parms, InputPose), Z_Construct_UScriptStruct_FAnimPose, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::NewProp_InputPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::NewProp_InputPose_MetaData)) }; // 3410866398
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::NewProp_TargetSkeletalMesh = { "TargetSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventEvaluateAnimationBlueprintWithInputPose_Parms, TargetSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::NewProp_AnimationBlueprint = { "AnimationBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventEvaluateAnimationBlueprintWithInputPose_Parms, AnimationBlueprint), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::NewProp_OutPose = { "OutPose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventEvaluateAnimationBlueprintWithInputPose_Parms, OutPose), Z_Construct_UScriptStruct_FAnimPose, METADATA_PARAMS(nullptr, 0) }; // 3410866398
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::NewProp_InputPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::NewProp_TargetSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::NewProp_AnimationBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::NewProp_OutPose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "/**\n\x09* Evaluates an Animation Blueprint instance, using the provided Anim Pose and its Input Pose value, generating a valid Anim Pose using the result. Warning this function may cause performance issues.\n\x09*\n\x09* @param\x09InputPose\x09\x09\x09\x09""Anim Pose used to populate the input pose node value inside of the Animation Blueprint\n\x09* @param\x09TargetSkeletalMesh\x09\x09USkeletalMesh object used as the target skeletal mesh, should have same USkeleton as InputPose and Animation Blueprint\n\x09* @param\x09""AnimationBlueprint\x09\x09""Animation Blueprint to generate an AnimInstance with, used to evaluate the output Anim Pose\n\x09* @param\x09OutPose\x09\x09\x09\x09\x09""Anim pose to hold the data from evaluating the Animation Blueprint instance\x09\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Evaluates an Animation Blueprint instance, using the provided Anim Pose and its Input Pose value, generating a valid Anim Pose using the result. Warning this function may cause performance issues.\n\n@param        InputPose                               Anim Pose used to populate the input pose node value inside of the Animation Blueprint\n@param        TargetSkeletalMesh              USkeletalMesh object used as the target skeletal mesh, should have same USkeleton as InputPose and Animation Blueprint\n@param        AnimationBlueprint              Animation Blueprint to generate an AnimInstance with, used to evaluate the output Anim Pose\n@param        OutPose                                 Anim pose to hold the data from evaluating the Animation Blueprint instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimPoseExtensions, nullptr, "EvaluateAnimationBlueprintWithInputPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::AnimPoseExtensions_eventEvaluateAnimationBlueprintWithInputPose_Parms), Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics
	{
		struct AnimPoseExtensions_eventGetAnimPoseAtFrame_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			int32 FrameIndex;
			FAnimPoseEvaluationOptions EvaluationOptions;
			FAnimPose Pose;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FIntPropertyParams NewProp_FrameIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EvaluationOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetAnimPoseAtFrame_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::NewProp_AnimationSequenceBase_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetAnimPoseAtFrame_Parms, FrameIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::NewProp_EvaluationOptions = { "EvaluationOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetAnimPoseAtFrame_Parms, EvaluationOptions), Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions, METADATA_PARAMS(nullptr, 0) }; // 3519416352
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetAnimPoseAtFrame_Parms, Pose), Z_Construct_UScriptStruct_FAnimPose, METADATA_PARAMS(nullptr, 0) }; // 3410866398
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::NewProp_FrameIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::NewProp_EvaluationOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::NewProp_Pose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "/**\n\x09* Evaluates an Animation Sequence Base to generate a valid Anim Pose instance\n\x09*\n\x09* @param\x09""AnimationSequenceBase\x09""Animation sequence base to evaluate the pose from\n\x09* @param\x09""FrameIndex\x09\x09\x09\x09""Exact frame at which the pose should be evaluated\n\x09* @param\x09""EvaluationOptions\x09\x09Options determining the way the pose should be evaluated\n\x09* @param\x09Pose\x09\x09\x09\x09\x09""Anim Pose to hold the evaluated data\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Evaluates an Animation Sequence Base to generate a valid Anim Pose instance\n\n@param        AnimationSequenceBase   Animation sequence base to evaluate the pose from\n@param        FrameIndex                              Exact frame at which the pose should be evaluated\n@param        EvaluationOptions               Options determining the way the pose should be evaluated\n@param        Pose                                    Anim Pose to hold the evaluated data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimPoseExtensions, nullptr, "GetAnimPoseAtFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::AnimPoseExtensions_eventGetAnimPoseAtFrame_Parms), Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics
	{
		struct AnimPoseExtensions_eventGetAnimPoseAtTime_Parms
		{
			const UAnimSequenceBase* AnimationSequenceBase;
			double Time;
			FAnimPoseEvaluationOptions EvaluationOptions;
			FAnimPose Pose;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationSequenceBase_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationSequenceBase;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_Time;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EvaluationOptions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::NewProp_AnimationSequenceBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::NewProp_AnimationSequenceBase = { "AnimationSequenceBase", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetAnimPoseAtTime_Parms, AnimationSequenceBase), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::NewProp_AnimationSequenceBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::NewProp_AnimationSequenceBase_MetaData)) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetAnimPoseAtTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::NewProp_EvaluationOptions = { "EvaluationOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetAnimPoseAtTime_Parms, EvaluationOptions), Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions, METADATA_PARAMS(nullptr, 0) }; // 3519416352
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetAnimPoseAtTime_Parms, Pose), Z_Construct_UScriptStruct_FAnimPose, METADATA_PARAMS(nullptr, 0) }; // 3410866398
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::NewProp_AnimationSequenceBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::NewProp_EvaluationOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::NewProp_Pose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "/**\n\x09* Evaluates an Animation Sequence Base to generate a valid Anim Pose instance\n\x09*\n\x09* @param\x09""AnimationSequenceBase\x09""Animation sequence base to evaluate the pose from\n\x09* @param\x09Time\x09\x09\x09\x09\x09Time at which the pose should be evaluated\n\x09* @param\x09""EvaluationOptions\x09\x09Options determining the way the pose should be evaluated\n\x09* @param\x09Pose\x09\x09\x09\x09\x09""Anim Pose to hold the evaluated data\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Evaluates an Animation Sequence Base to generate a valid Anim Pose instance\n\n@param        AnimationSequenceBase   Animation sequence base to evaluate the pose from\n@param        Time                                    Time at which the pose should be evaluated\n@param        EvaluationOptions               Options determining the way the pose should be evaluated\n@param        Pose                                    Anim Pose to hold the evaluated data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimPoseExtensions, nullptr, "GetAnimPoseAtTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::AnimPoseExtensions_eventGetAnimPoseAtTime_Parms), Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames_Statics
	{
		struct AnimPoseExtensions_eventGetBoneNames_Parms
		{
			FAnimPose Pose;
			TArray<FName> Bones;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Bones_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bones;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames_Statics::NewProp_Pose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetBoneNames_Parms, Pose), Z_Construct_UScriptStruct_FAnimPose, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames_Statics::NewProp_Pose_MetaData)) }; // 3410866398
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames_Statics::NewProp_Bones_Inner = { "Bones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames_Statics::NewProp_Bones = { "Bones", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetBoneNames_Parms, Bones), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames_Statics::NewProp_Bones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames_Statics::NewProp_Bones,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "/**\n\x09* Returns an array of bone names contained by the pose\n\x09*\n\x09* @param\x09Pose\x09""Anim Pose to retrieve the names from\n\x09* @param\x09""Bones\x09""Array to be populated with the bone names\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns an array of bone names contained by the pose\n\n@param        Pose    Anim Pose to retrieve the names from\n@param        Bones   Array to be populated with the bone names" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimPoseExtensions, nullptr, "GetBoneNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames_Statics::AnimPoseExtensions_eventGetBoneNames_Parms), Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics
	{
		struct AnimPoseExtensions_eventGetBonePose_Parms
		{
			FAnimPose Pose;
			FName BoneName;
			EAnimPoseSpaces Space;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::NewProp_Pose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetBonePose_Parms, Pose), Z_Construct_UScriptStruct_FAnimPose, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::NewProp_Pose_MetaData)) }; // 3410866398
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetBonePose_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetBonePose_Parms, Space), Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces, METADATA_PARAMS(nullptr, 0) }; // 3063113257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetBonePose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "/**\n\x09* Retrieves the transform for the provided bone name from a pose\n\x09*\n\x09* @param\x09Pose\x09\x09""Anim Pose to retrieve the transform from\n\x09* @param\x09""BoneName\x09Name of the bone to retrieve\n\x09* @param\x09Space\x09\x09Space in which the transform should be retrieved\n\x09*\n\x09* @return\x09Transform in requested space for bone if found, otherwise return identity transform\n\x09*/" },
		{ "CPP_Default_Space", "Local" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Retrieves the transform for the provided bone name from a pose\n\n@param        Pose            Anim Pose to retrieve the transform from\n@param        BoneName        Name of the bone to retrieve\n@param        Space           Space in which the transform should be retrieved\n\n@return       Transform in requested space for bone if found, otherwise return identity transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimPoseExtensions, nullptr, "GetBonePose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::AnimPoseExtensions_eventGetBonePose_Parms), Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames_Statics
	{
		struct AnimPoseExtensions_eventGetCurveNames_Parms
		{
			FAnimPose Pose;
			TArray<FName> Curves;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Curves_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Curves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames_Statics::NewProp_Pose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetCurveNames_Parms, Pose), Z_Construct_UScriptStruct_FAnimPose, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames_Statics::NewProp_Pose_MetaData)) }; // 3410866398
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames_Statics::NewProp_Curves_Inner = { "Curves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetCurveNames_Parms, Curves), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames_Statics::NewProp_Curves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames_Statics::NewProp_Curves,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "/**\n\x09* Returns an array of curve names contained by the pose\n\x09*\n\x09* @param\x09Pose\x09""Anim Pose to retrieve the names from\n\x09* @param\x09""Curves\x09""Array to be populated with the curve names\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns an array of curve names contained by the pose\n\n@param        Pose    Anim Pose to retrieve the names from\n@param        Curves  Array to be populated with the curve names" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimPoseExtensions, nullptr, "GetCurveNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames_Statics::AnimPoseExtensions_eventGetCurveNames_Parms), Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics
	{
		struct AnimPoseExtensions_eventGetCurveWeight_Parms
		{
			FAnimPose Pose;
			FName CurveName;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::NewProp_Pose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetCurveWeight_Parms, Pose), Z_Construct_UScriptStruct_FAnimPose, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::NewProp_Pose_MetaData)) }; // 3410866398
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::NewProp_CurveName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetCurveWeight_Parms, CurveName), METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::NewProp_CurveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::NewProp_CurveName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetCurveWeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::NewProp_CurveName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "/**\n    * Returns the weight of an evaluated curve - if found\n    *\n    * @param\x09Pose\x09\x09""Anim Pose to retrieve the value from\n    * @param\x09""CurveName\x09""Curve to retrieve the weight value for\n    * \n    * @return\x09""Curve weight value, if found - 0.f otherwise\n    */" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns the weight of an evaluated curve - if found\n\n@param   Pose            Anim Pose to retrieve the value from\n@param   CurveName       Curve to retrieve the weight value for\n\n@return  Curve weight value, if found - 0.f otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimPoseExtensions, nullptr, "GetCurveWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::AnimPoseExtensions_eventGetCurveWeight_Parms), Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics
	{
		struct AnimPoseExtensions_eventGetRefBonePose_Parms
		{
			FAnimPose Pose;
			FName BoneName;
			EAnimPoseSpaces Space;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::NewProp_Pose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetRefBonePose_Parms, Pose), Z_Construct_UScriptStruct_FAnimPose, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::NewProp_Pose_MetaData)) }; // 3410866398
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetRefBonePose_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetRefBonePose_Parms, Space), Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces, METADATA_PARAMS(nullptr, 0) }; // 3063113257
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetRefBonePose_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "/**\n\x09* Retrieves the reference pose transform for the provided bone name\n\x09*\n\x09* @param\x09Pose\x09\x09""Anim Pose to retrieve the transform from\n\x09* @param\x09""BoneName\x09Name of the bone to retrieve\n\x09* @param\x09Space\x09\x09Space in which the transform should be retrieved\n\x09*\n\x09* @return\x09Transform in requested space for bone if found, otherwise return identity transform\n\x09*/" },
		{ "CPP_Default_Space", "Local" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Retrieves the reference pose transform for the provided bone name\n\n@param        Pose            Anim Pose to retrieve the transform from\n@param        BoneName        Name of the bone to retrieve\n@param        Space           Space in which the transform should be retrieved\n\n@return       Transform in requested space for bone if found, otherwise return identity transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimPoseExtensions, nullptr, "GetRefBonePose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::AnimPoseExtensions_eventGetRefBonePose_Parms), Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimPoseExtensions_GetReferencePose_Statics
	{
		struct AnimPoseExtensions_eventGetReferencePose_Parms
		{
			USkeleton* Skeleton;
			FAnimPose OutPose;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetReferencePose_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetReferencePose_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetReferencePose_Statics::NewProp_OutPose = { "OutPose", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetReferencePose_Parms, OutPose), Z_Construct_UScriptStruct_FAnimPose, METADATA_PARAMS(nullptr, 0) }; // 3410866398
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimPoseExtensions_GetReferencePose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetReferencePose_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetReferencePose_Statics::NewProp_OutPose,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetReferencePose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "/**\n\x09* Populates an Anim Pose with the reference poses stored for the provided USkeleton\n\x09*\n\x09* @param\x09Skeleton\x09\x09\x09\x09USkeleton object to retrieve the reference pose from\n\x09* @param\x09OutPose\x09\x09\x09\x09\x09""Anim pose to hold the reference pose\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Populates an Anim Pose with the reference poses stored for the provided USkeleton\n\n@param        Skeleton                                USkeleton object to retrieve the reference pose from\n@param        OutPose                                 Anim pose to hold the reference pose" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimPoseExtensions_GetReferencePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimPoseExtensions, nullptr, "GetReferencePose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimPoseExtensions_GetReferencePose_Statics::AnimPoseExtensions_eventGetReferencePose_Parms), Z_Construct_UFunction_UAnimPoseExtensions_GetReferencePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetReferencePose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetReferencePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetReferencePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimPoseExtensions_GetReferencePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimPoseExtensions_GetReferencePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics
	{
		struct AnimPoseExtensions_eventGetRefPoseRelativeTransform_Parms
		{
			FAnimPose Pose;
			FName FromBoneName;
			FName ToBoneName;
			EAnimPoseSpaces Space;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FromBoneName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ToBoneName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::NewProp_Pose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetRefPoseRelativeTransform_Parms, Pose), Z_Construct_UScriptStruct_FAnimPose, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::NewProp_Pose_MetaData)) }; // 3410866398
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::NewProp_FromBoneName = { "FromBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetRefPoseRelativeTransform_Parms, FromBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::NewProp_ToBoneName = { "ToBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetRefPoseRelativeTransform_Parms, ToBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetRefPoseRelativeTransform_Parms, Space), Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces, METADATA_PARAMS(nullptr, 0) }; // 3063113257
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetRefPoseRelativeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::NewProp_FromBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::NewProp_ToBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "/**\n\x09* Retrieves the relative transform for the reference pose between the two provided bone names \n\x09*\n\x09* @param\x09Pose\x09\x09\x09""Anim Pose to retrieve the transform from\n\x09* @param\x09""FromBoneName\x09Name of the bone to retrieve the transform relative from\n\x09* @param\x09ToBoneName\x09\x09Name of the bone to retrieve the transform relative to\n\x09* @param\x09Space\x09\x09\x09Space in which the transform should be retrieved\n\x09*\n\x09* @return\x09Relative transform in requested space for bone if found, otherwise return identity transform\n\x09*/" },
		{ "CPP_Default_Space", "Local" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Retrieves the relative transform for the reference pose between the two provided bone names\n\n@param        Pose                    Anim Pose to retrieve the transform from\n@param        FromBoneName    Name of the bone to retrieve the transform relative from\n@param        ToBoneName              Name of the bone to retrieve the transform relative to\n@param        Space                   Space in which the transform should be retrieved\n\n@return       Relative transform in requested space for bone if found, otherwise return identity transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimPoseExtensions, nullptr, "GetRefPoseRelativeTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::AnimPoseExtensions_eventGetRefPoseRelativeTransform_Parms), Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics
	{
		struct AnimPoseExtensions_eventGetRelativeToRefPoseTransform_Parms
		{
			FAnimPose Pose;
			FName BoneName;
			EAnimPoseSpaces Space;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::NewProp_Pose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetRelativeToRefPoseTransform_Parms, Pose), Z_Construct_UScriptStruct_FAnimPose, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::NewProp_Pose_MetaData)) }; // 3410866398
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetRelativeToRefPoseTransform_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetRelativeToRefPoseTransform_Parms, Space), Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces, METADATA_PARAMS(nullptr, 0) }; // 3063113257
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetRelativeToRefPoseTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "/**\n\x09* Retrieves the relative transform between reference and animated bone transform\n\x09*\n\x09* @param\x09Pose\x09\x09\x09""Anim Pose to retrieve the transform from\n\x09* @param\x09""BoneName\x09\x09Name of the bone to retrieve the relative transform for\n\x09* @param\x09Space\x09\x09\x09Space in which the transform should be retrieved\n\x09*\n\x09* @return\x09Relative transform in requested space for bone if found, otherwise return identity transform\n\x09*/" },
		{ "CPP_Default_Space", "Local" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Retrieves the relative transform between reference and animated bone transform\n\n@param        Pose                    Anim Pose to retrieve the transform from\n@param        BoneName                Name of the bone to retrieve the relative transform for\n@param        Space                   Space in which the transform should be retrieved\n\n@return       Relative transform in requested space for bone if found, otherwise return identity transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimPoseExtensions, nullptr, "GetRelativeToRefPoseTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::AnimPoseExtensions_eventGetRelativeToRefPoseTransform_Parms), Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics
	{
		struct AnimPoseExtensions_eventGetRelativeTransform_Parms
		{
			FAnimPose Pose;
			FName FromBoneName;
			FName ToBoneName;
			EAnimPoseSpaces Space;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FromBoneName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ToBoneName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::NewProp_Pose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetRelativeTransform_Parms, Pose), Z_Construct_UScriptStruct_FAnimPose, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::NewProp_Pose_MetaData)) }; // 3410866398
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::NewProp_FromBoneName = { "FromBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetRelativeTransform_Parms, FromBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::NewProp_ToBoneName = { "ToBoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetRelativeTransform_Parms, ToBoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetRelativeTransform_Parms, Space), Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces, METADATA_PARAMS(nullptr, 0) }; // 3063113257
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventGetRelativeTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::NewProp_FromBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::NewProp_ToBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "/**\n\x09* Retrieves the relative transform between the two provided bone names\n\x09*\n\x09* @param\x09Pose\x09\x09\x09""Anim Pose to retrieve the transform from\n\x09* @param\x09""FromBoneName\x09Name of the bone to retrieve the transform relative from\n\x09* @param\x09ToBoneName\x09\x09Name of the bone to retrieve the transform relative to\n\x09* @param\x09Space\x09\x09\x09Space in which the transform should be retrieved\n\x09*\n\x09* @return\x09Relative transform in requested space for bone if found, otherwise return identity transform\n\x09*/" },
		{ "CPP_Default_Space", "Local" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Retrieves the relative transform between the two provided bone names\n\n@param        Pose                    Anim Pose to retrieve the transform from\n@param        FromBoneName    Name of the bone to retrieve the transform relative from\n@param        ToBoneName              Name of the bone to retrieve the transform relative to\n@param        Space                   Space in which the transform should be retrieved\n\n@return       Relative transform in requested space for bone if found, otherwise return identity transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimPoseExtensions, nullptr, "GetRelativeTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::AnimPoseExtensions_eventGetRelativeTransform_Parms), Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimPoseExtensions_IsValid_Statics
	{
		struct AnimPoseExtensions_eventIsValid_Parms
		{
			FAnimPose Pose;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_IsValid_Statics::NewProp_Pose_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_IsValid_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventIsValid_Parms, Pose), Z_Construct_UScriptStruct_FAnimPose, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_IsValid_Statics::NewProp_Pose_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_IsValid_Statics::NewProp_Pose_MetaData)) }; // 3410866398
	void Z_Construct_UFunction_UAnimPoseExtensions_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimPoseExtensions_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimPoseExtensions_eventIsValid_Parms), &Z_Construct_UFunction_UAnimPoseExtensions_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimPoseExtensions_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_IsValid_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "/**\n\x09*  Returns whether the Anim Pose contains valid data\n\x09*\n\x09* @param\x09Pose\x09""Anim Pose to validate\n\x09*\n\x09* @return\x09Result of the validation\n\x09*/" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns whether the Anim Pose contains valid data\n\n@param        Pose    Anim Pose to validate\n\n@return       Result of the validation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimPoseExtensions_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimPoseExtensions, nullptr, "IsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimPoseExtensions_IsValid_Statics::AnimPoseExtensions_eventIsValid_Parms), Z_Construct_UFunction_UAnimPoseExtensions_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimPoseExtensions_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimPoseExtensions_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics
	{
		struct AnimPoseExtensions_eventSetBonePose_Parms
		{
			FAnimPose Pose;
			FTransform Transform;
			FName BoneName;
			EAnimPoseSpaces Space;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pose;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics::NewProp_Pose = { "Pose", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventSetBonePose_Parms, Pose), Z_Construct_UScriptStruct_FAnimPose, METADATA_PARAMS(nullptr, 0) }; // 3410866398
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventSetBonePose_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventSetBonePose_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimPoseExtensions_eventSetBonePose_Parms, Space), Z_Construct_UEnum_AnimationBlueprintLibrary_EAnimPoseSpaces, METADATA_PARAMS(nullptr, 0) }; // 3063113257
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics::NewProp_Pose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics::NewProp_Space,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation|Pose" },
		{ "Comment", "/**\n\x09* Sets the transform for the provided bone name for a pose\n\x09*\n\x09* @param\x09Pose\x09\x09""Anim Pose to set transform in\n\x09* @param\x09Transform\x09Transform to set the bone to\n\x09* @param\x09""BoneName\x09Name of the bone to set\n\x09* @param\x09Space\x09\x09Space in which the transform should be set\n\x09*/" },
		{ "CPP_Default_Space", "Local" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Sets the transform for the provided bone name for a pose\n\n@param        Pose            Anim Pose to set transform in\n@param        Transform       Transform to set the bone to\n@param        BoneName        Name of the bone to set\n@param        Space           Space in which the transform should be set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimPoseExtensions, nullptr, "SetBonePose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics::AnimPoseExtensions_eventSetBonePose_Parms), Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimPoseExtensions);
	UClass* Z_Construct_UClass_UAnimPoseExtensions_NoRegister()
	{
		return UAnimPoseExtensions::StaticClass();
	}
	struct Z_Construct_UClass_UAnimPoseExtensions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimPoseExtensions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationBlueprintLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimPoseExtensions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimPoseExtensions_EvaluateAnimationBlueprintWithInputPose, "EvaluateAnimationBlueprintWithInputPose" }, // 2568542474
		{ &Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtFrame, "GetAnimPoseAtFrame" }, // 1749312739
		{ &Z_Construct_UFunction_UAnimPoseExtensions_GetAnimPoseAtTime, "GetAnimPoseAtTime" }, // 1518539107
		{ &Z_Construct_UFunction_UAnimPoseExtensions_GetBoneNames, "GetBoneNames" }, // 275643480
		{ &Z_Construct_UFunction_UAnimPoseExtensions_GetBonePose, "GetBonePose" }, // 1056977332
		{ &Z_Construct_UFunction_UAnimPoseExtensions_GetCurveNames, "GetCurveNames" }, // 1110657218
		{ &Z_Construct_UFunction_UAnimPoseExtensions_GetCurveWeight, "GetCurveWeight" }, // 461150808
		{ &Z_Construct_UFunction_UAnimPoseExtensions_GetRefBonePose, "GetRefBonePose" }, // 3073496995
		{ &Z_Construct_UFunction_UAnimPoseExtensions_GetReferencePose, "GetReferencePose" }, // 3477578390
		{ &Z_Construct_UFunction_UAnimPoseExtensions_GetRefPoseRelativeTransform, "GetRefPoseRelativeTransform" }, // 2038228718
		{ &Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeToRefPoseTransform, "GetRelativeToRefPoseTransform" }, // 4141379616
		{ &Z_Construct_UFunction_UAnimPoseExtensions_GetRelativeTransform, "GetRelativeTransform" }, // 2976968197
		{ &Z_Construct_UFunction_UAnimPoseExtensions_IsValid, "IsValid" }, // 3251982891
		{ &Z_Construct_UFunction_UAnimPoseExtensions_SetBonePose, "SetBonePose" }, // 1126710907
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimPoseExtensions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Script exposed functionality for populating, retrieving data from and setting data on FAnimPose */" },
		{ "IncludePath", "AnimPose.h" },
		{ "ModuleRelativePath", "Public/AnimPose.h" },
		{ "ToolTip", "Script exposed functionality for populating, retrieving data from and setting data on FAnimPose" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimPoseExtensions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimPoseExtensions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimPoseExtensions_Statics::ClassParams = {
		&UAnimPoseExtensions::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAnimPoseExtensions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimPoseExtensions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimPoseExtensions()
	{
		if (!Z_Registration_Info_UClass_UAnimPoseExtensions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimPoseExtensions.OuterSingleton, Z_Construct_UClass_UAnimPoseExtensions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimPoseExtensions.OuterSingleton;
	}
	template<> ANIMATIONBLUEPRINTLIBRARY_API UClass* StaticClass<UAnimPoseExtensions>()
	{
		return UAnimPoseExtensions::StaticClass();
	}
	UAnimPoseExtensions::UAnimPoseExtensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimPoseExtensions);
	UAnimPoseExtensions::~UAnimPoseExtensions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_Statics::EnumInfo[] = {
		{ EAnimPoseSpaces_StaticEnum, TEXT("EAnimPoseSpaces"), &Z_Registration_Info_UEnum_EAnimPoseSpaces, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3063113257U) },
		{ EAnimDataEvalType_StaticEnum, TEXT("EAnimDataEvalType"), &Z_Registration_Info_UEnum_EAnimDataEvalType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2914800918U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_Statics::ScriptStructInfo[] = {
		{ FAnimPoseEvaluationOptions::StaticStruct, Z_Construct_UScriptStruct_FAnimPoseEvaluationOptions_Statics::NewStructOps, TEXT("AnimPoseEvaluationOptions"), &Z_Registration_Info_UScriptStruct_AnimPoseEvaluationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimPoseEvaluationOptions), 3519416352U) },
		{ FAnimPose::StaticStruct, Z_Construct_UScriptStruct_FAnimPose_Statics::NewStructOps, TEXT("AnimPose"), &Z_Registration_Info_UScriptStruct_AnimPose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimPose), 3410866398U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimPoseExtensions, UAnimPoseExtensions::StaticClass, TEXT("UAnimPoseExtensions"), &Z_Registration_Info_UClass_UAnimPoseExtensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimPoseExtensions), 2382583314U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_2796532863(TEXT("/Script/AnimationBlueprintLibrary"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationBlueprintLibrary_Public_AnimPose_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
