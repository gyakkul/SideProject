// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GroomCacheData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGroomCacheData() {}
// Cross Module References
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomBasisType();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomCacheType();
	HAIRSTRANDSCORE_API UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomCurveType();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGroomAnimationInfo();
	HAIRSTRANDSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGroomCacheInfo();
	UPackage* Z_Construct_UPackage__Script_HairStrandsCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomCacheAttributes;
	static UEnum* EGroomCacheAttributes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroomCacheAttributes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroomCacheAttributes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomCacheAttributes"));
		}
		return Z_Registration_Info_UEnum_EGroomCacheAttributes.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomCacheAttributes>()
	{
		return EGroomCacheAttributes_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes_Statics::Enumerators[] = {
		{ "EGroomCacheAttributes::None", (int64)EGroomCacheAttributes::None },
		{ "EGroomCacheAttributes::Position", (int64)EGroomCacheAttributes::Position },
		{ "EGroomCacheAttributes::Width", (int64)EGroomCacheAttributes::Width },
		{ "EGroomCacheAttributes::Color", (int64)EGroomCacheAttributes::Color },
		{ "EGroomCacheAttributes::PositionWidth", (int64)EGroomCacheAttributes::PositionWidth },
		{ "EGroomCacheAttributes::PositionColor", (int64)EGroomCacheAttributes::PositionColor },
		{ "EGroomCacheAttributes::WidthColor", (int64)EGroomCacheAttributes::WidthColor },
		{ "EGroomCacheAttributes::PositionWidthColor", (int64)EGroomCacheAttributes::PositionWidthColor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes_Statics::Enum_MetaDataParams[] = {
		{ "Color.Name", "EGroomCacheAttributes::Color" },
		{ "Comment", "/** Attributes in groom that can be animated */" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
		{ "None.Name", "EGroomCacheAttributes::None" },
		{ "Position.Name", "EGroomCacheAttributes::Position" },
		{ "PositionColor.DisplayName", "Position & Color" },
		{ "PositionColor.Name", "EGroomCacheAttributes::PositionColor" },
		{ "PositionWidth.Comment", "// For display names\n" },
		{ "PositionWidth.DisplayName", "Position & Width" },
		{ "PositionWidth.Name", "EGroomCacheAttributes::PositionWidth" },
		{ "PositionWidth.ToolTip", "For display names" },
		{ "PositionWidthColor.DisplayName", "Position, Width, Color" },
		{ "PositionWidthColor.Name", "EGroomCacheAttributes::PositionWidthColor" },
		{ "ToolTip", "Attributes in groom that can be animated" },
		{ "Width.Name", "EGroomCacheAttributes::Width" },
		{ "WidthColor.DisplayName", "Width & Color" },
		{ "WidthColor.Name", "EGroomCacheAttributes::WidthColor" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EGroomCacheAttributes",
		"EGroomCacheAttributes",
		Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes()
	{
		if (!Z_Registration_Info_UEnum_EGroomCacheAttributes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomCacheAttributes.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroomCacheAttributes.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroomAnimationInfo;
class UScriptStruct* FGroomAnimationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroomAnimationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroomAnimationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroomAnimationInfo, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("GroomAnimationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GroomAnimationInfo.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FGroomAnimationInfo>()
{
	return FGroomAnimationInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumFrames_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumFrames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondsPerFrame_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SecondsPerFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EndFrame;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Attributes_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Attributes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Relevant information about a groom animation */" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
		{ "ToolTip", "Relevant information about a groom animation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroomAnimationInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_NumFrames_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_NumFrames = { "NumFrames", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomAnimationInfo, NumFrames), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_NumFrames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_NumFrames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_SecondsPerFrame_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_SecondsPerFrame = { "SecondsPerFrame", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomAnimationInfo, SecondsPerFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_SecondsPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_SecondsPerFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_Duration_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomAnimationInfo, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomAnimationInfo, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_EndTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomAnimationInfo, EndTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_EndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_EndTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_StartFrame_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomAnimationInfo, StartFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_StartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_StartFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_EndFrame_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_EndFrame = { "EndFrame", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomAnimationInfo, EndFrame), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_EndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_EndFrame_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_Attributes_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_Attributes_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomAnimationInfo, Attributes), Z_Construct_UEnum_HairStrandsCore_EGroomCacheAttributes, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_Attributes_MetaData)) }; // 3541327366
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_NumFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_SecondsPerFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_EndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_StartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_EndFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_Attributes_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewProp_Attributes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"GroomAnimationInfo",
		sizeof(FGroomAnimationInfo),
		alignof(FGroomAnimationInfo),
		Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroomAnimationInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GroomAnimationInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroomAnimationInfo.InnerSingleton, Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroomAnimationInfo.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomCacheType;
	static UEnum* EGroomCacheType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroomCacheType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroomCacheType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomCacheType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomCacheType"));
		}
		return Z_Registration_Info_UEnum_EGroomCacheType.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomCacheType>()
	{
		return EGroomCacheType_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EGroomCacheType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EGroomCacheType_Statics::Enumerators[] = {
		{ "EGroomCacheType::None", (int64)EGroomCacheType::None },
		{ "EGroomCacheType::Strands", (int64)EGroomCacheType::Strands },
		{ "EGroomCacheType::Guides", (int64)EGroomCacheType::Guides },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EGroomCacheType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Types of GroomCache\n * Strands: animated render strands (including animatable hair attributes)\n * Guides: animated guides that require in-engine simulation (position only)\n */" },
		{ "Guides.Name", "EGroomCacheType::Guides" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
		{ "None.Name", "EGroomCacheType::None" },
		{ "Strands.Name", "EGroomCacheType::Strands" },
		{ "ToolTip", "Types of GroomCache\nStrands: animated render strands (including animatable hair attributes)\nGuides: animated guides that require in-engine simulation (position only)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomCacheType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EGroomCacheType",
		"EGroomCacheType",
		Z_Construct_UEnum_HairStrandsCore_EGroomCacheType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomCacheType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EGroomCacheType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomCacheType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomCacheType()
	{
		if (!Z_Registration_Info_UEnum_EGroomCacheType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomCacheType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomCacheType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroomCacheType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomBasisType;
	static UEnum* EGroomBasisType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroomBasisType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroomBasisType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomBasisType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomBasisType"));
		}
		return Z_Registration_Info_UEnum_EGroomBasisType.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomBasisType>()
	{
		return EGroomBasisType_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EGroomBasisType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EGroomBasisType_Statics::Enumerators[] = {
		{ "EGroomBasisType::NoBasis", (int64)EGroomBasisType::NoBasis },
		{ "EGroomBasisType::BezierBasis", (int64)EGroomBasisType::BezierBasis },
		{ "EGroomBasisType::BsplineBasis", (int64)EGroomBasisType::BsplineBasis },
		{ "EGroomBasisType::CatmullromBasis", (int64)EGroomBasisType::CatmullromBasis },
		{ "EGroomBasisType::HermiteBasis", (int64)EGroomBasisType::HermiteBasis },
		{ "EGroomBasisType::PowerBasis", (int64)EGroomBasisType::PowerBasis },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EGroomBasisType_Statics::Enum_MetaDataParams[] = {
		{ "BezierBasis.Name", "EGroomBasisType::BezierBasis" },
		{ "BlueprintType", "true" },
		{ "BsplineBasis.Name", "EGroomBasisType::BsplineBasis" },
		{ "CatmullromBasis.Name", "EGroomBasisType::CatmullromBasis" },
		{ "HermiteBasis.Name", "EGroomBasisType::HermiteBasis" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
		{ "NoBasis.Name", "EGroomBasisType::NoBasis" },
		{ "PowerBasis.Name", "EGroomBasisType::PowerBasis" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomBasisType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EGroomBasisType",
		"EGroomBasisType",
		Z_Construct_UEnum_HairStrandsCore_EGroomBasisType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomBasisType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EGroomBasisType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomBasisType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomBasisType()
	{
		if (!Z_Registration_Info_UEnum_EGroomBasisType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomBasisType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomBasisType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroomBasisType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroomCurveType;
	static UEnum* EGroomCurveType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGroomCurveType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGroomCurveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HairStrandsCore_EGroomCurveType, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("EGroomCurveType"));
		}
		return Z_Registration_Info_UEnum_EGroomCurveType.OuterSingleton;
	}
	template<> HAIRSTRANDSCORE_API UEnum* StaticEnum<EGroomCurveType>()
	{
		return EGroomCurveType_StaticEnum();
	}
	struct Z_Construct_UEnum_HairStrandsCore_EGroomCurveType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HairStrandsCore_EGroomCurveType_Statics::Enumerators[] = {
		{ "EGroomCurveType::Cubic", (int64)EGroomCurveType::Cubic },
		{ "EGroomCurveType::Linear", (int64)EGroomCurveType::Linear },
		{ "EGroomCurveType::VariableOrder", (int64)EGroomCurveType::VariableOrder },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HairStrandsCore_EGroomCurveType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cubic.Name", "EGroomCurveType::Cubic" },
		{ "Linear.Name", "EGroomCurveType::Linear" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
		{ "VariableOrder.Name", "EGroomCurveType::VariableOrder" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HairStrandsCore_EGroomCurveType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		"EGroomCurveType",
		"EGroomCurveType",
		Z_Construct_UEnum_HairStrandsCore_EGroomCurveType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomCurveType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HairStrandsCore_EGroomCurveType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HairStrandsCore_EGroomCurveType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HairStrandsCore_EGroomCurveType()
	{
		if (!Z_Registration_Info_UEnum_EGroomCurveType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroomCurveType.InnerSingleton, Z_Construct_UEnum_HairStrandsCore_EGroomCurveType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGroomCurveType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroomCacheInfo;
class UScriptStruct* FGroomCacheInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroomCacheInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroomCacheInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroomCacheInfo, (UObject*)Z_Construct_UPackage__Script_HairStrandsCore(), TEXT("GroomCacheInfo"));
	}
	return Z_Registration_Info_UScriptStruct_GroomCacheInfo.OuterSingleton;
}
template<> HAIRSTRANDSCORE_API UScriptStruct* StaticStruct<FGroomCacheInfo>()
{
	return FGroomCacheInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGroomCacheInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Information about the GroomCache itself */" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
		{ "ToolTip", "Information about the GroomCache itself" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroomCacheInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomCacheInfo, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_Version_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomCacheInfo, Type), Z_Construct_UEnum_HairStrandsCore_EGroomCacheType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_Type_MetaData)) }; // 3172709976
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_AnimationInfo_MetaData[] = {
		{ "Category", "GroomCache" },
		{ "ModuleRelativePath", "Public/GroomCacheData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_AnimationInfo = { "AnimationInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGroomCacheInfo, AnimationInfo), Z_Construct_UScriptStruct_FGroomAnimationInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_AnimationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_AnimationInfo_MetaData)) }; // 1822147092
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewProp_AnimationInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HairStrandsCore,
		nullptr,
		&NewStructOps,
		"GroomCacheInfo",
		sizeof(FGroomCacheInfo),
		alignof(FGroomCacheInfo),
		Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroomCacheInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_GroomCacheInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroomCacheInfo.InnerSingleton, Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GroomCacheInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h_Statics::EnumInfo[] = {
		{ EGroomCacheAttributes_StaticEnum, TEXT("EGroomCacheAttributes"), &Z_Registration_Info_UEnum_EGroomCacheAttributes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3541327366U) },
		{ EGroomCacheType_StaticEnum, TEXT("EGroomCacheType"), &Z_Registration_Info_UEnum_EGroomCacheType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3172709976U) },
		{ EGroomBasisType_StaticEnum, TEXT("EGroomBasisType"), &Z_Registration_Info_UEnum_EGroomBasisType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3189380669U) },
		{ EGroomCurveType_StaticEnum, TEXT("EGroomCurveType"), &Z_Registration_Info_UEnum_EGroomCurveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3574363758U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h_Statics::ScriptStructInfo[] = {
		{ FGroomAnimationInfo::StaticStruct, Z_Construct_UScriptStruct_FGroomAnimationInfo_Statics::NewStructOps, TEXT("GroomAnimationInfo"), &Z_Registration_Info_UScriptStruct_GroomAnimationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroomAnimationInfo), 1822147092U) },
		{ FGroomCacheInfo::StaticStruct, Z_Construct_UScriptStruct_FGroomCacheInfo_Statics::NewStructOps, TEXT("GroomCacheInfo"), &Z_Registration_Info_UScriptStruct_GroomCacheInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroomCacheInfo), 2725999052U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h_153683633(TEXT("/Script/HairStrandsCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_HairStrands_Source_HairStrandsCore_Public_GroomCacheData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
