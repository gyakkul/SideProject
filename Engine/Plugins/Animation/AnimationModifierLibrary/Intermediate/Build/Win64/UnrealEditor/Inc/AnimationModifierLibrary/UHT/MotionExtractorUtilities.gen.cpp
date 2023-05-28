// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionExtractorUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionExtractorUtilities() {}
// Cross Module References
	ANIMATIONMODIFIERLIBRARY_API UClass* Z_Construct_UClass_UMotionExtractorUtilityLibrary();
	ANIMATIONMODIFIERLIBRARY_API UClass* Z_Construct_UClass_UMotionExtractorUtilityLibrary_NoRegister();
	ANIMATIONMODIFIERLIBRARY_API UEnum* Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_Axis();
	ANIMATIONMODIFIERLIBRARY_API UEnum* Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MotionType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AnimationModifierLibrary();
// End Cross Module References
	DEFINE_FUNCTION(UMotionExtractorUtilityLibrary::execGetMovingRangesFromRootMotion)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StopSpeedThreshold);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SampleRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector2D>*)Z_Param__Result=UMotionExtractorUtilityLibrary::GetMovingRangesFromRootMotion(Z_Param_AnimSequence,Z_Param_StopSpeedThreshold,Z_Param_SampleRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionExtractorUtilityLibrary::execGetStoppedRangesFromRootMotion)
	{
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSequence);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StopSpeedThreshold);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SampleRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector2D>*)Z_Param__Result=UMotionExtractorUtilityLibrary::GetStoppedRangesFromRootMotion(Z_Param_AnimSequence,Z_Param_StopSpeedThreshold,Z_Param_SampleRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionExtractorUtilityLibrary::execGetDesiredValue)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_BoneTransform);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_LastBoneTransform);
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_ENUM(EMotionExtractor_MotionType,Z_Param_MotionType);
		P_GET_ENUM(EMotionExtractor_Axis,Z_Param_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMotionExtractorUtilityLibrary::GetDesiredValue(Z_Param_Out_BoneTransform,Z_Param_Out_LastBoneTransform,Z_Param_DeltaTime,EMotionExtractor_MotionType(Z_Param_MotionType),EMotionExtractor_Axis(Z_Param_Axis));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMotionExtractorUtilityLibrary::execGenerateCurveName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_ENUM(EMotionExtractor_MotionType,Z_Param_MotionType);
		P_GET_ENUM(EMotionExtractor_Axis,Z_Param_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UMotionExtractorUtilityLibrary::GenerateCurveName(Z_Param_BoneName,EMotionExtractor_MotionType(Z_Param_MotionType),EMotionExtractor_Axis(Z_Param_Axis));
		P_NATIVE_END;
	}
	void UMotionExtractorUtilityLibrary::StaticRegisterNativesUMotionExtractorUtilityLibrary()
	{
		UClass* Class = UMotionExtractorUtilityLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateCurveName", &UMotionExtractorUtilityLibrary::execGenerateCurveName },
			{ "GetDesiredValue", &UMotionExtractorUtilityLibrary::execGetDesiredValue },
			{ "GetMovingRangesFromRootMotion", &UMotionExtractorUtilityLibrary::execGetMovingRangesFromRootMotion },
			{ "GetStoppedRangesFromRootMotion", &UMotionExtractorUtilityLibrary::execGetStoppedRangesFromRootMotion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics
	{
		struct MotionExtractorUtilityLibrary_eventGenerateCurveName_Parms
		{
			FName BoneName;
			EMotionExtractor_MotionType MotionType;
			EMotionExtractor_Axis Axis;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MotionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MotionType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionExtractorUtilityLibrary_eventGenerateCurveName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::NewProp_MotionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::NewProp_MotionType = { "MotionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionExtractorUtilityLibrary_eventGenerateCurveName_Parms, MotionType), Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MotionType, METADATA_PARAMS(nullptr, 0) }; // 1315421341
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionExtractorUtilityLibrary_eventGenerateCurveName_Parms, Axis), Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_Axis, METADATA_PARAMS(nullptr, 0) }; // 1450347950
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionExtractorUtilityLibrary_eventGenerateCurveName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::NewProp_MotionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::NewProp_MotionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Extractor Utility" },
		{ "Comment", "/**\n\x09* Generates a curve name based on input settings.\n\x09*\n\x09* @param BoneName\x09\x09\x09   The name of the bone\n\x09* @param MotionType            What type of motion this curve represents (translation, rotation, speed, etc.)\n\x09* @param Axis\x09\x09\x09\x09   Which axis/axes the motion for this curve was extracted from\n\x09*/" },
		{ "ModuleRelativePath", "Public/MotionExtractorUtilities.h" },
		{ "ToolTip", "Generates a curve name based on input settings.\n\n@param BoneName                          The name of the bone\n@param MotionType            What type of motion this curve represents (translation, rotation, speed, etc.)\n@param Axis                              Which axis/axes the motion for this curve was extracted from" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionExtractorUtilityLibrary, nullptr, "GenerateCurveName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::MotionExtractorUtilityLibrary_eventGenerateCurveName_Parms), Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics
	{
		struct MotionExtractorUtilityLibrary_eventGetDesiredValue_Parms
		{
			FTransform BoneTransform;
			FTransform LastBoneTransform;
			float DeltaTime;
			EMotionExtractor_MotionType MotionType;
			EMotionExtractor_Axis Axis;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastBoneTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastBoneTransform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MotionType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MotionType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_BoneTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_BoneTransform = { "BoneTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionExtractorUtilityLibrary_eventGetDesiredValue_Parms, BoneTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_BoneTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_BoneTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_LastBoneTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_LastBoneTransform = { "LastBoneTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionExtractorUtilityLibrary_eventGetDesiredValue_Parms, LastBoneTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_LastBoneTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_LastBoneTransform_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionExtractorUtilityLibrary_eventGetDesiredValue_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_MotionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_MotionType = { "MotionType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionExtractorUtilityLibrary_eventGetDesiredValue_Parms, MotionType), Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MotionType, METADATA_PARAMS(nullptr, 0) }; // 1315421341
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionExtractorUtilityLibrary_eventGetDesiredValue_Parms, Axis), Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_Axis, METADATA_PARAMS(nullptr, 0) }; // 1450347950
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionExtractorUtilityLibrary_eventGetDesiredValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_BoneTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_LastBoneTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_MotionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_MotionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Extractor Utility" },
		{ "Comment", "/**\n\x09* Returns the desired value from the extracted poses based on input settings.\n\x09*\n\x09* @param BoneTransform         Current frame's bone transform\n\x09* @param LastBoneTransform     Last frame's bone transform. Unused when not calculating speeds.\n\x09* @param DeltaTime\x09\x09\x09   Time step used between current and last bone transforms. Unused when not calculating speeds.\n\x09* @param MotionType            What type of motion to extract (translation, rotation, speed, etc.)\n\x09* @param Axis\x09\x09\x09\x09   Which axis/axes to extract motion from\n\x09*/" },
		{ "ModuleRelativePath", "Public/MotionExtractorUtilities.h" },
		{ "ToolTip", "Returns the desired value from the extracted poses based on input settings.\n\n@param BoneTransform         Current frame's bone transform\n@param LastBoneTransform     Last frame's bone transform. Unused when not calculating speeds.\n@param DeltaTime                         Time step used between current and last bone transforms. Unused when not calculating speeds.\n@param MotionType            What type of motion to extract (translation, rotation, speed, etc.)\n@param Axis                              Which axis/axes to extract motion from" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionExtractorUtilityLibrary, nullptr, "GetDesiredValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::MotionExtractorUtilityLibrary_eventGetDesiredValue_Parms), Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics
	{
		struct MotionExtractorUtilityLibrary_eventGetMovingRangesFromRootMotion_Parms
		{
			const UAnimSequence* AnimSequence;
			float StopSpeedThreshold;
			float SampleRate;
			TArray<FVector2D> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StopSpeedThreshold;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleRate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionExtractorUtilityLibrary_eventGetMovingRangesFromRootMotion_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::NewProp_AnimSequence_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::NewProp_StopSpeedThreshold = { "StopSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionExtractorUtilityLibrary_eventGetMovingRangesFromRootMotion_Parms, StopSpeedThreshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionExtractorUtilityLibrary_eventGetMovingRangesFromRootMotion_Parms, SampleRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionExtractorUtilityLibrary_eventGetMovingRangesFromRootMotion_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::NewProp_StopSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::NewProp_SampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Extractor Utility" },
		{ "Comment", "/**\n\x09* Returns the ranges (X/Start to Y/End) in the specified animation sequence where the animation is considered moving.\n\x09*\n\x09* @param AnimSequence\x09\x09\x09""Anim sequence to check\n\x09* @param StopSpeedThreshold\x09\x09Root motion speed over which the animation is considered moving.\n\x09* @param SampleRate\x09\x09\x09\x09Sample rate of the animation. It's recommended to use high values if the animation has very sudden direction changes.\n\x09*/" },
		{ "CPP_Default_SampleRate", "120.000000" },
		{ "CPP_Default_StopSpeedThreshold", "10.000000" },
		{ "ModuleRelativePath", "Public/MotionExtractorUtilities.h" },
		{ "ToolTip", "Returns the ranges (X/Start to Y/End) in the specified animation sequence where the animation is considered moving.\n\n@param AnimSequence                   Anim sequence to check\n@param StopSpeedThreshold             Root motion speed over which the animation is considered moving.\n@param SampleRate                             Sample rate of the animation. It's recommended to use high values if the animation has very sudden direction changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionExtractorUtilityLibrary, nullptr, "GetMovingRangesFromRootMotion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::MotionExtractorUtilityLibrary_eventGetMovingRangesFromRootMotion_Parms), Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics
	{
		struct MotionExtractorUtilityLibrary_eventGetStoppedRangesFromRootMotion_Parms
		{
			const UAnimSequence* AnimSequence;
			float StopSpeedThreshold;
			float SampleRate;
			TArray<FVector2D> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StopSpeedThreshold;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleRate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionExtractorUtilityLibrary_eventGetStoppedRangesFromRootMotion_Parms, AnimSequence), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::NewProp_AnimSequence_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::NewProp_StopSpeedThreshold = { "StopSpeedThreshold", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionExtractorUtilityLibrary_eventGetStoppedRangesFromRootMotion_Parms, StopSpeedThreshold), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::NewProp_SampleRate = { "SampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionExtractorUtilityLibrary_eventGetStoppedRangesFromRootMotion_Parms, SampleRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MotionExtractorUtilityLibrary_eventGetStoppedRangesFromRootMotion_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::NewProp_StopSpeedThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::NewProp_SampleRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Motion Extractor Utility" },
		{ "Comment", "/**\n\x09* Returns the ranges (X/Start to Y/End) in the specified animation sequence where the animation is considered stopped.\n\x09*\n\x09* @param AnimSequence\x09\x09\x09""Anim sequence to check\n\x09* @param StopSpeedThreshold\x09\x09Root motion speed under which the animation is considered stopped.\n\x09* @param SampleRate\x09\x09\x09\x09Sample rate of the animation. It's recommended to use high values if the animation has very sudden direction changes.\n\x09*/" },
		{ "CPP_Default_SampleRate", "120.000000" },
		{ "CPP_Default_StopSpeedThreshold", "10.000000" },
		{ "ModuleRelativePath", "Public/MotionExtractorUtilities.h" },
		{ "ToolTip", "Returns the ranges (X/Start to Y/End) in the specified animation sequence where the animation is considered stopped.\n\n@param AnimSequence                   Anim sequence to check\n@param StopSpeedThreshold             Root motion speed under which the animation is considered stopped.\n@param SampleRate                             Sample rate of the animation. It's recommended to use high values if the animation has very sudden direction changes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMotionExtractorUtilityLibrary, nullptr, "GetStoppedRangesFromRootMotion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::MotionExtractorUtilityLibrary_eventGetStoppedRangesFromRootMotion_Parms), Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMotionExtractorUtilityLibrary);
	UClass* Z_Construct_UClass_UMotionExtractorUtilityLibrary_NoRegister()
	{
		return UMotionExtractorUtilityLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMotionExtractorUtilityLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMotionExtractorUtilityLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationModifierLibrary,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMotionExtractorUtilityLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GenerateCurveName, "GenerateCurveName" }, // 18920872
		{ &Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetDesiredValue, "GetDesiredValue" }, // 3068720663
		{ &Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetMovingRangesFromRootMotion, "GetMovingRangesFromRootMotion" }, // 1091133746
		{ &Z_Construct_UFunction_UMotionExtractorUtilityLibrary_GetStoppedRangesFromRootMotion, "GetStoppedRangesFromRootMotion" }, // 1988287997
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMotionExtractorUtilityLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MotionExtractorUtilities.h" },
		{ "ModuleRelativePath", "Public/MotionExtractorUtilities.h" },
		{ "ScriptName", "MotionExtractorUtilityLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMotionExtractorUtilityLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMotionExtractorUtilityLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMotionExtractorUtilityLibrary_Statics::ClassParams = {
		&UMotionExtractorUtilityLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMotionExtractorUtilityLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMotionExtractorUtilityLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMotionExtractorUtilityLibrary()
	{
		if (!Z_Registration_Info_UClass_UMotionExtractorUtilityLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMotionExtractorUtilityLibrary.OuterSingleton, Z_Construct_UClass_UMotionExtractorUtilityLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMotionExtractorUtilityLibrary.OuterSingleton;
	}
	template<> ANIMATIONMODIFIERLIBRARY_API UClass* StaticClass<UMotionExtractorUtilityLibrary>()
	{
		return UMotionExtractorUtilityLibrary::StaticClass();
	}
	UMotionExtractorUtilityLibrary::UMotionExtractorUtilityLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMotionExtractorUtilityLibrary);
	UMotionExtractorUtilityLibrary::~UMotionExtractorUtilityLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMotionExtractorUtilityLibrary, UMotionExtractorUtilityLibrary::StaticClass, TEXT("UMotionExtractorUtilityLibrary"), &Z_Registration_Info_UClass_UMotionExtractorUtilityLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMotionExtractorUtilityLibrary), 368945710U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_1567204051(TEXT("/Script/AnimationModifierLibrary"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorUtilities_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
