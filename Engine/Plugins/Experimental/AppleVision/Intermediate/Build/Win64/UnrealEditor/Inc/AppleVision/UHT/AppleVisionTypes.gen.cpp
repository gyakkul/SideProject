// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AppleVisionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleVisionTypes() {}
// Cross Module References
	APPLEVISION_API UEnum* Z_Construct_UEnum_AppleVision_EDetectedFaceFeatureType();
	APPLEVISION_API UScriptStruct* Z_Construct_UScriptStruct_FDetectedFace();
	APPLEVISION_API UScriptStruct* Z_Construct_UScriptStruct_FDetectedFaceFeature2D();
	APPLEVISION_API UScriptStruct* Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion();
	APPLEVISION_API UScriptStruct* Z_Construct_UScriptStruct_FDetectedFeature();
	APPLEVISION_API UScriptStruct* Z_Construct_UScriptStruct_FDetectedFeature2D();
	APPLEVISION_API UScriptStruct* Z_Construct_UScriptStruct_FDetectedFeatureRegion();
	APPLEVISION_API UScriptStruct* Z_Construct_UScriptStruct_FFaceDetectionResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_AppleVision();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DetectedFeature;
class UScriptStruct* FDetectedFeature::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DetectedFeature.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DetectedFeature.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDetectedFeature, (UObject*)Z_Construct_UPackage__Script_AppleVision(), TEXT("DetectedFeature"));
	}
	return Z_Registration_Info_UScriptStruct_DetectedFeature.OuterSingleton;
}
template<> APPLEVISION_API UScriptStruct* StaticStruct<FDetectedFeature>()
{
	return FDetectedFeature::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDetectedFeature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Confidence_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Confidence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetectedFeature_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Base type for a detected feature */" },
		{ "ModuleRelativePath", "Public/AppleVisionTypes.h" },
		{ "ToolTip", "Base type for a detected feature" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDetectedFeature_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDetectedFeature>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetectedFeature_Statics::NewProp_Confidence_MetaData[] = {
		{ "Category", "Apple Vision" },
		{ "Comment", "/** How confident the ML was in determining this feature and its type */" },
		{ "ModuleRelativePath", "Public/AppleVisionTypes.h" },
		{ "ToolTip", "How confident the ML was in determining this feature and its type" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetectedFeature_Statics::NewProp_Confidence = { "Confidence", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDetectedFeature, Confidence), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetectedFeature_Statics::NewProp_Confidence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFeature_Statics::NewProp_Confidence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDetectedFeature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectedFeature_Statics::NewProp_Confidence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDetectedFeature_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AppleVision,
		nullptr,
		&NewStructOps,
		"DetectedFeature",
		sizeof(FDetectedFeature),
		alignof(FDetectedFeature),
		Z_Construct_UScriptStruct_FDetectedFeature_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFeature_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDetectedFeature_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFeature_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDetectedFeature()
	{
		if (!Z_Registration_Info_UScriptStruct_DetectedFeature.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DetectedFeature.InnerSingleton, Z_Construct_UScriptStruct_FDetectedFeature_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DetectedFeature.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDetectedFeature2D>() == std::is_polymorphic<FDetectedFeature>(), "USTRUCT FDetectedFeature2D cannot be polymorphic unless super FDetectedFeature is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DetectedFeature2D;
class UScriptStruct* FDetectedFeature2D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DetectedFeature2D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DetectedFeature2D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDetectedFeature2D, (UObject*)Z_Construct_UPackage__Script_AppleVision(), TEXT("DetectedFeature2D"));
	}
	return Z_Registration_Info_UScriptStruct_DetectedFeature2D.OuterSingleton;
}
template<> APPLEVISION_API UScriptStruct* StaticStruct<FDetectedFeature2D>()
{
	return FDetectedFeature2D::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDetectedFeature2D_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetectedFeature2D_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Area of the image that the computer vision task detected as being of a particular type */" },
		{ "ModuleRelativePath", "Public/AppleVisionTypes.h" },
		{ "ToolTip", "Area of the image that the computer vision task detected as being of a particular type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDetectedFeature2D_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDetectedFeature2D>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetectedFeature2D_Statics::NewProp_BoundingBox_MetaData[] = {
		{ "Category", "Apple Vision" },
		{ "Comment", "/** The bounding box of the detected feature in the image */" },
		{ "ModuleRelativePath", "Public/AppleVisionTypes.h" },
		{ "ToolTip", "The bounding box of the detected feature in the image" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDetectedFeature2D_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDetectedFeature2D, BoundingBox), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetectedFeature2D_Statics::NewProp_BoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFeature2D_Statics::NewProp_BoundingBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDetectedFeature2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectedFeature2D_Statics::NewProp_BoundingBox,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDetectedFeature2D_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AppleVision,
		Z_Construct_UScriptStruct_FDetectedFeature,
		&NewStructOps,
		"DetectedFeature2D",
		sizeof(FDetectedFeature2D),
		alignof(FDetectedFeature2D),
		Z_Construct_UScriptStruct_FDetectedFeature2D_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFeature2D_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDetectedFeature2D_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFeature2D_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDetectedFeature2D()
	{
		if (!Z_Registration_Info_UScriptStruct_DetectedFeature2D.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DetectedFeature2D.InnerSingleton, Z_Construct_UScriptStruct_FDetectedFeature2D_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DetectedFeature2D.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDetectedFeatureRegion>() == std::is_polymorphic<FDetectedFeature>(), "USTRUCT FDetectedFeatureRegion cannot be polymorphic unless super FDetectedFeature is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DetectedFeatureRegion;
class UScriptStruct* FDetectedFeatureRegion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DetectedFeatureRegion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DetectedFeatureRegion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDetectedFeatureRegion, (UObject*)Z_Construct_UPackage__Script_AppleVision(), TEXT("DetectedFeatureRegion"));
	}
	return Z_Registration_Info_UScriptStruct_DetectedFeatureRegion.OuterSingleton;
}
template<> APPLEVISION_API UScriptStruct* StaticStruct<FDetectedFeatureRegion>()
{
	return FDetectedFeatureRegion::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDetectedFeatureRegion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetectedFeatureRegion_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Area of the image that the computer vision task detected as being of a particular type */" },
		{ "ModuleRelativePath", "Public/AppleVisionTypes.h" },
		{ "ToolTip", "Area of the image that the computer vision task detected as being of a particular type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDetectedFeatureRegion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDetectedFeatureRegion>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDetectedFeatureRegion_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetectedFeatureRegion_Statics::NewProp_Points_MetaData[] = {
		{ "Category", "Apple Vision" },
		{ "Comment", "/** The set of points that encompass the detected feature area */" },
		{ "ModuleRelativePath", "Public/AppleVisionTypes.h" },
		{ "ToolTip", "The set of points that encompass the detected feature area" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDetectedFeatureRegion_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDetectedFeatureRegion, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetectedFeatureRegion_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFeatureRegion_Statics::NewProp_Points_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDetectedFeatureRegion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectedFeatureRegion_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectedFeatureRegion_Statics::NewProp_Points,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDetectedFeatureRegion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AppleVision,
		Z_Construct_UScriptStruct_FDetectedFeature,
		&NewStructOps,
		"DetectedFeatureRegion",
		sizeof(FDetectedFeatureRegion),
		alignof(FDetectedFeatureRegion),
		Z_Construct_UScriptStruct_FDetectedFeatureRegion_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFeatureRegion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDetectedFeatureRegion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFeatureRegion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDetectedFeatureRegion()
	{
		if (!Z_Registration_Info_UScriptStruct_DetectedFeatureRegion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DetectedFeatureRegion.InnerSingleton, Z_Construct_UScriptStruct_FDetectedFeatureRegion_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DetectedFeatureRegion.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDetectedFaceFeatureType;
	static UEnum* EDetectedFaceFeatureType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDetectedFaceFeatureType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDetectedFaceFeatureType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AppleVision_EDetectedFaceFeatureType, (UObject*)Z_Construct_UPackage__Script_AppleVision(), TEXT("EDetectedFaceFeatureType"));
		}
		return Z_Registration_Info_UEnum_EDetectedFaceFeatureType.OuterSingleton;
	}
	template<> APPLEVISION_API UEnum* StaticEnum<EDetectedFaceFeatureType>()
	{
		return EDetectedFaceFeatureType_StaticEnum();
	}
	struct Z_Construct_UEnum_AppleVision_EDetectedFaceFeatureType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AppleVision_EDetectedFaceFeatureType_Statics::Enumerators[] = {
		{ "EDetectedFaceFeatureType::Unkown", (int64)EDetectedFaceFeatureType::Unkown },
		{ "EDetectedFaceFeatureType::FaceContour", (int64)EDetectedFaceFeatureType::FaceContour },
		{ "EDetectedFaceFeatureType::InnerLips", (int64)EDetectedFaceFeatureType::InnerLips },
		{ "EDetectedFaceFeatureType::LeftEye", (int64)EDetectedFaceFeatureType::LeftEye },
		{ "EDetectedFaceFeatureType::LeftEyebrow", (int64)EDetectedFaceFeatureType::LeftEyebrow },
		{ "EDetectedFaceFeatureType::LeftPupil", (int64)EDetectedFaceFeatureType::LeftPupil },
		{ "EDetectedFaceFeatureType::MedianLine", (int64)EDetectedFaceFeatureType::MedianLine },
		{ "EDetectedFaceFeatureType::Nose", (int64)EDetectedFaceFeatureType::Nose },
		{ "EDetectedFaceFeatureType::NoseCrest", (int64)EDetectedFaceFeatureType::NoseCrest },
		{ "EDetectedFaceFeatureType::OuterLips", (int64)EDetectedFaceFeatureType::OuterLips },
		{ "EDetectedFaceFeatureType::RightEye", (int64)EDetectedFaceFeatureType::RightEye },
		{ "EDetectedFaceFeatureType::RightEyebrow", (int64)EDetectedFaceFeatureType::RightEyebrow },
		{ "EDetectedFaceFeatureType::RightPupil", (int64)EDetectedFaceFeatureType::RightPupil },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AppleVision_EDetectedFaceFeatureType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Apple Vision" },
		{ "Comment", "/** Features of a face that can be detected */" },
		{ "Experimental", "" },
		{ "FaceContour.Name", "EDetectedFaceFeatureType::FaceContour" },
		{ "InnerLips.Name", "EDetectedFaceFeatureType::InnerLips" },
		{ "LeftEye.Name", "EDetectedFaceFeatureType::LeftEye" },
		{ "LeftEyebrow.Name", "EDetectedFaceFeatureType::LeftEyebrow" },
		{ "LeftPupil.Name", "EDetectedFaceFeatureType::LeftPupil" },
		{ "MedianLine.Name", "EDetectedFaceFeatureType::MedianLine" },
		{ "ModuleRelativePath", "Public/AppleVisionTypes.h" },
		{ "Nose.Name", "EDetectedFaceFeatureType::Nose" },
		{ "NoseCrest.Name", "EDetectedFaceFeatureType::NoseCrest" },
		{ "OuterLips.Name", "EDetectedFaceFeatureType::OuterLips" },
		{ "RightEye.Name", "EDetectedFaceFeatureType::RightEye" },
		{ "RightEyebrow.Name", "EDetectedFaceFeatureType::RightEyebrow" },
		{ "RightPupil.Name", "EDetectedFaceFeatureType::RightPupil" },
		{ "ToolTip", "Features of a face that can be detected" },
		{ "Unkown.Name", "EDetectedFaceFeatureType::Unkown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AppleVision_EDetectedFaceFeatureType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AppleVision,
		nullptr,
		"EDetectedFaceFeatureType",
		"EDetectedFaceFeatureType",
		Z_Construct_UEnum_AppleVision_EDetectedFaceFeatureType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AppleVision_EDetectedFaceFeatureType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AppleVision_EDetectedFaceFeatureType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AppleVision_EDetectedFaceFeatureType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AppleVision_EDetectedFaceFeatureType()
	{
		if (!Z_Registration_Info_UEnum_EDetectedFaceFeatureType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDetectedFaceFeatureType.InnerSingleton, Z_Construct_UEnum_AppleVision_EDetectedFaceFeatureType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDetectedFaceFeatureType.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDetectedFaceFeatureRegion>() == std::is_polymorphic<FDetectedFeatureRegion>(), "USTRUCT FDetectedFaceFeatureRegion cannot be polymorphic unless super FDetectedFeatureRegion is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DetectedFaceFeatureRegion;
class UScriptStruct* FDetectedFaceFeatureRegion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DetectedFaceFeatureRegion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DetectedFaceFeatureRegion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion, (UObject*)Z_Construct_UPackage__Script_AppleVision(), TEXT("DetectedFaceFeatureRegion"));
	}
	return Z_Registration_Info_UScriptStruct_DetectedFaceFeatureRegion.OuterSingleton;
}
template<> APPLEVISION_API UScriptStruct* StaticStruct<FDetectedFaceFeatureRegion>()
{
	return FDetectedFaceFeatureRegion::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_FeatureType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeatureType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FeatureType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Area of the image that the computer vision task detected as being part of a face */" },
		{ "ModuleRelativePath", "Public/AppleVisionTypes.h" },
		{ "ToolTip", "Area of the image that the computer vision task detected as being part of a face" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDetectedFaceFeatureRegion>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_Statics::NewProp_FeatureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_Statics::NewProp_FeatureType_MetaData[] = {
		{ "Category", "Apple Vision" },
		{ "Comment", "/** The type of region that was detected */" },
		{ "ModuleRelativePath", "Public/AppleVisionTypes.h" },
		{ "ToolTip", "The type of region that was detected" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_Statics::NewProp_FeatureType = { "FeatureType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDetectedFaceFeatureRegion, FeatureType), Z_Construct_UEnum_AppleVision_EDetectedFaceFeatureType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_Statics::NewProp_FeatureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_Statics::NewProp_FeatureType_MetaData)) }; // 1020273656
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_Statics::NewProp_FeatureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_Statics::NewProp_FeatureType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AppleVision,
		Z_Construct_UScriptStruct_FDetectedFeatureRegion,
		&NewStructOps,
		"DetectedFaceFeatureRegion",
		sizeof(FDetectedFaceFeatureRegion),
		alignof(FDetectedFaceFeatureRegion),
		Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion()
	{
		if (!Z_Registration_Info_UScriptStruct_DetectedFaceFeatureRegion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DetectedFaceFeatureRegion.InnerSingleton, Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DetectedFaceFeatureRegion.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDetectedFaceFeature2D>() == std::is_polymorphic<FDetectedFeature2D>(), "USTRUCT FDetectedFaceFeature2D cannot be polymorphic unless super FDetectedFeature2D is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DetectedFaceFeature2D;
class UScriptStruct* FDetectedFaceFeature2D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DetectedFaceFeature2D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DetectedFaceFeature2D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDetectedFaceFeature2D, (UObject*)Z_Construct_UPackage__Script_AppleVision(), TEXT("DetectedFaceFeature2D"));
	}
	return Z_Registration_Info_UScriptStruct_DetectedFaceFeature2D.OuterSingleton;
}
template<> APPLEVISION_API UScriptStruct* StaticStruct<FDetectedFaceFeature2D>()
{
	return FDetectedFaceFeature2D::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDetectedFaceFeature2D_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_FeatureType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeatureType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FeatureType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetectedFaceFeature2D_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Area of the image that the computer vision task detected as being part of a face */" },
		{ "ModuleRelativePath", "Public/AppleVisionTypes.h" },
		{ "ToolTip", "Area of the image that the computer vision task detected as being part of a face" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDetectedFaceFeature2D_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDetectedFaceFeature2D>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDetectedFaceFeature2D_Statics::NewProp_FeatureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetectedFaceFeature2D_Statics::NewProp_FeatureType_MetaData[] = {
		{ "Category", "Apple Vision" },
		{ "Comment", "/** The type of region that was detected */" },
		{ "ModuleRelativePath", "Public/AppleVisionTypes.h" },
		{ "ToolTip", "The type of region that was detected" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDetectedFaceFeature2D_Statics::NewProp_FeatureType = { "FeatureType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDetectedFaceFeature2D, FeatureType), Z_Construct_UEnum_AppleVision_EDetectedFaceFeatureType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetectedFaceFeature2D_Statics::NewProp_FeatureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFaceFeature2D_Statics::NewProp_FeatureType_MetaData)) }; // 1020273656
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDetectedFaceFeature2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectedFaceFeature2D_Statics::NewProp_FeatureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectedFaceFeature2D_Statics::NewProp_FeatureType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDetectedFaceFeature2D_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AppleVision,
		Z_Construct_UScriptStruct_FDetectedFeature2D,
		&NewStructOps,
		"DetectedFaceFeature2D",
		sizeof(FDetectedFaceFeature2D),
		alignof(FDetectedFaceFeature2D),
		Z_Construct_UScriptStruct_FDetectedFaceFeature2D_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFaceFeature2D_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDetectedFaceFeature2D_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFaceFeature2D_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDetectedFaceFeature2D()
	{
		if (!Z_Registration_Info_UScriptStruct_DetectedFaceFeature2D.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DetectedFaceFeature2D.InnerSingleton, Z_Construct_UScriptStruct_FDetectedFaceFeature2D_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DetectedFaceFeature2D.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDetectedFace>() == std::is_polymorphic<FDetectedFeatureRegion>(), "USTRUCT FDetectedFace cannot be polymorphic unless super FDetectedFeatureRegion is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DetectedFace;
class UScriptStruct* FDetectedFace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DetectedFace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DetectedFace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDetectedFace, (UObject*)Z_Construct_UPackage__Script_AppleVision(), TEXT("DetectedFace"));
	}
	return Z_Registration_Info_UScriptStruct_DetectedFace.OuterSingleton;
}
template<> APPLEVISION_API UScriptStruct* StaticStruct<FDetectedFace>()
{
	return FDetectedFace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDetectedFace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBox_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBox;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Features_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Features_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Features;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FeatureRegions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeatureRegions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FeatureRegions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetectedFace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Area of the image that the computer vision task detected as being a face */" },
		{ "ModuleRelativePath", "Public/AppleVisionTypes.h" },
		{ "ToolTip", "Area of the image that the computer vision task detected as being a face" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDetectedFace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDetectedFace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetectedFace_Statics::NewProp_BoundingBox_MetaData[] = {
		{ "Category", "Apple Vision" },
		{ "Comment", "/** The bounding box of the detected face */" },
		{ "ModuleRelativePath", "Public/AppleVisionTypes.h" },
		{ "ToolTip", "The bounding box of the detected face" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDetectedFace_Statics::NewProp_BoundingBox = { "BoundingBox", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDetectedFace, BoundingBox), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetectedFace_Statics::NewProp_BoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFace_Statics::NewProp_BoundingBox_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDetectedFace_Statics::NewProp_Features_Inner = { "Features", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDetectedFaceFeature2D, METADATA_PARAMS(nullptr, 0) }; // 2825849870
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetectedFace_Statics::NewProp_Features_MetaData[] = {
		{ "Category", "Apple Vision" },
		{ "Comment", "/** The set of 2D features that were detected */" },
		{ "ModuleRelativePath", "Public/AppleVisionTypes.h" },
		{ "ToolTip", "The set of 2D features that were detected" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDetectedFace_Statics::NewProp_Features = { "Features", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDetectedFace, Features), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetectedFace_Statics::NewProp_Features_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFace_Statics::NewProp_Features_MetaData)) }; // 2825849870
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDetectedFace_Statics::NewProp_FeatureRegions_Inner = { "FeatureRegions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion, METADATA_PARAMS(nullptr, 0) }; // 253553415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetectedFace_Statics::NewProp_FeatureRegions_MetaData[] = {
		{ "Category", "Apple Vision" },
		{ "Comment", "/** The set of region features that were detected */" },
		{ "ModuleRelativePath", "Public/AppleVisionTypes.h" },
		{ "ToolTip", "The set of region features that were detected" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDetectedFace_Statics::NewProp_FeatureRegions = { "FeatureRegions", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDetectedFace, FeatureRegions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetectedFace_Statics::NewProp_FeatureRegions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFace_Statics::NewProp_FeatureRegions_MetaData)) }; // 253553415
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDetectedFace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectedFace_Statics::NewProp_BoundingBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectedFace_Statics::NewProp_Features_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectedFace_Statics::NewProp_Features,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectedFace_Statics::NewProp_FeatureRegions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetectedFace_Statics::NewProp_FeatureRegions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDetectedFace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AppleVision,
		Z_Construct_UScriptStruct_FDetectedFeatureRegion,
		&NewStructOps,
		"DetectedFace",
		sizeof(FDetectedFace),
		alignof(FDetectedFace),
		Z_Construct_UScriptStruct_FDetectedFace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDetectedFace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetectedFace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDetectedFace()
	{
		if (!Z_Registration_Info_UScriptStruct_DetectedFace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DetectedFace.InnerSingleton, Z_Construct_UScriptStruct_FDetectedFace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DetectedFace.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FaceDetectionResult;
class UScriptStruct* FFaceDetectionResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FaceDetectionResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FaceDetectionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFaceDetectionResult, (UObject*)Z_Construct_UPackage__Script_AppleVision(), TEXT("FaceDetectionResult"));
	}
	return Z_Registration_Info_UScriptStruct_FaceDetectionResult.OuterSingleton;
}
template<> APPLEVISION_API UScriptStruct* StaticStruct<FFaceDetectionResult>()
{
	return FFaceDetectionResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFaceDetectionResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_DetectedFaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DetectedFaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DetectedFaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaceDetectionResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** The result of a face detection request with information about the detected faces */" },
		{ "ModuleRelativePath", "Public/AppleVisionTypes.h" },
		{ "ToolTip", "The result of a face detection request with information about the detected faces" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFaceDetectionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFaceDetectionResult>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFaceDetectionResult_Statics::NewProp_DetectedFaces_Inner = { "DetectedFaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDetectedFace, METADATA_PARAMS(nullptr, 0) }; // 1469028534
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaceDetectionResult_Statics::NewProp_DetectedFaces_MetaData[] = {
		{ "Category", "Apple Vision" },
		{ "Comment", "/** The set of faces that were detected */" },
		{ "ModuleRelativePath", "Public/AppleVisionTypes.h" },
		{ "ToolTip", "The set of faces that were detected" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFaceDetectionResult_Statics::NewProp_DetectedFaces = { "DetectedFaces", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFaceDetectionResult, DetectedFaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFaceDetectionResult_Statics::NewProp_DetectedFaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaceDetectionResult_Statics::NewProp_DetectedFaces_MetaData)) }; // 1469028534
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFaceDetectionResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaceDetectionResult_Statics::NewProp_DetectedFaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaceDetectionResult_Statics::NewProp_DetectedFaces,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFaceDetectionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AppleVision,
		nullptr,
		&NewStructOps,
		"FaceDetectionResult",
		sizeof(FFaceDetectionResult),
		alignof(FFaceDetectionResult),
		Z_Construct_UScriptStruct_FFaceDetectionResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaceDetectionResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFaceDetectionResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaceDetectionResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFaceDetectionResult()
	{
		if (!Z_Registration_Info_UScriptStruct_FaceDetectionResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FaceDetectionResult.InnerSingleton, Z_Construct_UScriptStruct_FFaceDetectionResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FaceDetectionResult.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionTypes_h_Statics::EnumInfo[] = {
		{ EDetectedFaceFeatureType_StaticEnum, TEXT("EDetectedFaceFeatureType"), &Z_Registration_Info_UEnum_EDetectedFaceFeatureType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1020273656U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionTypes_h_Statics::ScriptStructInfo[] = {
		{ FDetectedFeature::StaticStruct, Z_Construct_UScriptStruct_FDetectedFeature_Statics::NewStructOps, TEXT("DetectedFeature"), &Z_Registration_Info_UScriptStruct_DetectedFeature, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDetectedFeature), 640365414U) },
		{ FDetectedFeature2D::StaticStruct, Z_Construct_UScriptStruct_FDetectedFeature2D_Statics::NewStructOps, TEXT("DetectedFeature2D"), &Z_Registration_Info_UScriptStruct_DetectedFeature2D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDetectedFeature2D), 4268655301U) },
		{ FDetectedFeatureRegion::StaticStruct, Z_Construct_UScriptStruct_FDetectedFeatureRegion_Statics::NewStructOps, TEXT("DetectedFeatureRegion"), &Z_Registration_Info_UScriptStruct_DetectedFeatureRegion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDetectedFeatureRegion), 2088914929U) },
		{ FDetectedFaceFeatureRegion::StaticStruct, Z_Construct_UScriptStruct_FDetectedFaceFeatureRegion_Statics::NewStructOps, TEXT("DetectedFaceFeatureRegion"), &Z_Registration_Info_UScriptStruct_DetectedFaceFeatureRegion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDetectedFaceFeatureRegion), 253553415U) },
		{ FDetectedFaceFeature2D::StaticStruct, Z_Construct_UScriptStruct_FDetectedFaceFeature2D_Statics::NewStructOps, TEXT("DetectedFaceFeature2D"), &Z_Registration_Info_UScriptStruct_DetectedFaceFeature2D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDetectedFaceFeature2D), 2825849870U) },
		{ FDetectedFace::StaticStruct, Z_Construct_UScriptStruct_FDetectedFace_Statics::NewStructOps, TEXT("DetectedFace"), &Z_Registration_Info_UScriptStruct_DetectedFace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDetectedFace), 1469028534U) },
		{ FFaceDetectionResult::StaticStruct, Z_Construct_UScriptStruct_FFaceDetectionResult_Statics::NewStructOps, TEXT("FaceDetectionResult"), &Z_Registration_Info_UScriptStruct_FaceDetectionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFaceDetectionResult), 849567343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionTypes_h_416929157(TEXT("/Script/AppleVision"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AppleVision_Source_AppleVision_Public_AppleVisionTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
