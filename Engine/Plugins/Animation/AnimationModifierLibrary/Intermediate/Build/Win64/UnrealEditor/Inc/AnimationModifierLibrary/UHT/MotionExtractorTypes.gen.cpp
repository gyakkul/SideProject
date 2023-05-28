// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MotionExtractorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMotionExtractorTypes() {}
// Cross Module References
	ANIMATIONMODIFIERLIBRARY_API UEnum* Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_Axis();
	ANIMATIONMODIFIERLIBRARY_API UEnum* Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MathOperation();
	ANIMATIONMODIFIERLIBRARY_API UEnum* Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MotionType();
	UPackage* Z_Construct_UPackage__Script_AnimationModifierLibrary();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMotionExtractor_MotionType;
	static UEnum* EMotionExtractor_MotionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMotionExtractor_MotionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMotionExtractor_MotionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MotionType, (UObject*)Z_Construct_UPackage__Script_AnimationModifierLibrary(), TEXT("EMotionExtractor_MotionType"));
		}
		return Z_Registration_Info_UEnum_EMotionExtractor_MotionType.OuterSingleton;
	}
	template<> ANIMATIONMODIFIERLIBRARY_API UEnum* StaticEnum<EMotionExtractor_MotionType>()
	{
		return EMotionExtractor_MotionType_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MotionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MotionType_Statics::Enumerators[] = {
		{ "EMotionExtractor_MotionType::Translation", (int64)EMotionExtractor_MotionType::Translation },
		{ "EMotionExtractor_MotionType::Rotation", (int64)EMotionExtractor_MotionType::Rotation },
		{ "EMotionExtractor_MotionType::Scale", (int64)EMotionExtractor_MotionType::Scale },
		{ "EMotionExtractor_MotionType::TranslationSpeed", (int64)EMotionExtractor_MotionType::TranslationSpeed },
		{ "EMotionExtractor_MotionType::RotationSpeed", (int64)EMotionExtractor_MotionType::RotationSpeed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MotionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Type of motion to extract */" },
		{ "ModuleRelativePath", "Public/MotionExtractorTypes.h" },
		{ "Rotation.Name", "EMotionExtractor_MotionType::Rotation" },
		{ "RotationSpeed.Name", "EMotionExtractor_MotionType::RotationSpeed" },
		{ "Scale.Name", "EMotionExtractor_MotionType::Scale" },
		{ "ToolTip", "Type of motion to extract" },
		{ "Translation.Name", "EMotionExtractor_MotionType::Translation" },
		{ "TranslationSpeed.Name", "EMotionExtractor_MotionType::TranslationSpeed" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MotionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimationModifierLibrary,
		nullptr,
		"EMotionExtractor_MotionType",
		"EMotionExtractor_MotionType",
		Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MotionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MotionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MotionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MotionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MotionType()
	{
		if (!Z_Registration_Info_UEnum_EMotionExtractor_MotionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMotionExtractor_MotionType.InnerSingleton, Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MotionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMotionExtractor_MotionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMotionExtractor_Axis;
	static UEnum* EMotionExtractor_Axis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMotionExtractor_Axis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMotionExtractor_Axis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_Axis, (UObject*)Z_Construct_UPackage__Script_AnimationModifierLibrary(), TEXT("EMotionExtractor_Axis"));
		}
		return Z_Registration_Info_UEnum_EMotionExtractor_Axis.OuterSingleton;
	}
	template<> ANIMATIONMODIFIERLIBRARY_API UEnum* StaticEnum<EMotionExtractor_Axis>()
	{
		return EMotionExtractor_Axis_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_Axis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_Axis_Statics::Enumerators[] = {
		{ "EMotionExtractor_Axis::X", (int64)EMotionExtractor_Axis::X },
		{ "EMotionExtractor_Axis::Y", (int64)EMotionExtractor_Axis::Y },
		{ "EMotionExtractor_Axis::Z", (int64)EMotionExtractor_Axis::Z },
		{ "EMotionExtractor_Axis::XY", (int64)EMotionExtractor_Axis::XY },
		{ "EMotionExtractor_Axis::XZ", (int64)EMotionExtractor_Axis::XZ },
		{ "EMotionExtractor_Axis::YZ", (int64)EMotionExtractor_Axis::YZ },
		{ "EMotionExtractor_Axis::XYZ", (int64)EMotionExtractor_Axis::XYZ },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_Axis_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Axis to get the final value from */" },
		{ "ModuleRelativePath", "Public/MotionExtractorTypes.h" },
		{ "ToolTip", "Axis to get the final value from" },
		{ "X.Name", "EMotionExtractor_Axis::X" },
		{ "XY.Name", "EMotionExtractor_Axis::XY" },
		{ "XYZ.Name", "EMotionExtractor_Axis::XYZ" },
		{ "XZ.Name", "EMotionExtractor_Axis::XZ" },
		{ "Y.Name", "EMotionExtractor_Axis::Y" },
		{ "YZ.Name", "EMotionExtractor_Axis::YZ" },
		{ "Z.Name", "EMotionExtractor_Axis::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_Axis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimationModifierLibrary,
		nullptr,
		"EMotionExtractor_Axis",
		"EMotionExtractor_Axis",
		Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_Axis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_Axis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_Axis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_Axis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_Axis()
	{
		if (!Z_Registration_Info_UEnum_EMotionExtractor_Axis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMotionExtractor_Axis.InnerSingleton, Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_Axis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMotionExtractor_Axis.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMotionExtractor_MathOperation;
	static UEnum* EMotionExtractor_MathOperation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMotionExtractor_MathOperation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMotionExtractor_MathOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MathOperation, (UObject*)Z_Construct_UPackage__Script_AnimationModifierLibrary(), TEXT("EMotionExtractor_MathOperation"));
		}
		return Z_Registration_Info_UEnum_EMotionExtractor_MathOperation.OuterSingleton;
	}
	template<> ANIMATIONMODIFIERLIBRARY_API UEnum* StaticEnum<EMotionExtractor_MathOperation>()
	{
		return EMotionExtractor_MathOperation_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MathOperation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MathOperation_Statics::Enumerators[] = {
		{ "EMotionExtractor_MathOperation::None", (int64)EMotionExtractor_MathOperation::None },
		{ "EMotionExtractor_MathOperation::Addition", (int64)EMotionExtractor_MathOperation::Addition },
		{ "EMotionExtractor_MathOperation::Subtraction", (int64)EMotionExtractor_MathOperation::Subtraction },
		{ "EMotionExtractor_MathOperation::Division", (int64)EMotionExtractor_MathOperation::Division },
		{ "EMotionExtractor_MathOperation::Multiplication", (int64)EMotionExtractor_MathOperation::Multiplication },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MathOperation_Statics::Enum_MetaDataParams[] = {
		{ "Addition.Name", "EMotionExtractor_MathOperation::Addition" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Math operations that can be applied to the extracted value before add it to the curve */" },
		{ "Division.Name", "EMotionExtractor_MathOperation::Division" },
		{ "ModuleRelativePath", "Public/MotionExtractorTypes.h" },
		{ "Multiplication.Name", "EMotionExtractor_MathOperation::Multiplication" },
		{ "None.Name", "EMotionExtractor_MathOperation::None" },
		{ "Subtraction.Name", "EMotionExtractor_MathOperation::Subtraction" },
		{ "ToolTip", "Math operations that can be applied to the extracted value before add it to the curve" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MathOperation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimationModifierLibrary,
		nullptr,
		"EMotionExtractor_MathOperation",
		"EMotionExtractor_MathOperation",
		Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MathOperation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MathOperation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MathOperation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MathOperation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MathOperation()
	{
		if (!Z_Registration_Info_UEnum_EMotionExtractor_MathOperation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMotionExtractor_MathOperation.InnerSingleton, Z_Construct_UEnum_AnimationModifierLibrary_EMotionExtractor_MathOperation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMotionExtractor_MathOperation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorTypes_h_Statics::EnumInfo[] = {
		{ EMotionExtractor_MotionType_StaticEnum, TEXT("EMotionExtractor_MotionType"), &Z_Registration_Info_UEnum_EMotionExtractor_MotionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1315421341U) },
		{ EMotionExtractor_Axis_StaticEnum, TEXT("EMotionExtractor_Axis"), &Z_Registration_Info_UEnum_EMotionExtractor_Axis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1450347950U) },
		{ EMotionExtractor_MathOperation_StaticEnum, TEXT("EMotionExtractor_MathOperation"), &Z_Registration_Info_UEnum_EMotionExtractor_MathOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2333572841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorTypes_h_1567994031(TEXT("/Script/AnimationModifierLibrary"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationModifierLibrary_Source_AnimationModifierLibrary_Public_MotionExtractorTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
