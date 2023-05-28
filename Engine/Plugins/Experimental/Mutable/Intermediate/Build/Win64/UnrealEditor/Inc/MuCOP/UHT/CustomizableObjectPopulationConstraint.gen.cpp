// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/MuCOP/CustomizableObjectPopulationConstraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectPopulationConstraint() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	CUSTOMIZABLEOBJECTPOPULATION_API UEnum* Z_Construct_UEnum_CustomizableObjectPopulation_ECurveColor();
	CUSTOMIZABLEOBJECTPOPULATION_API UEnum* Z_Construct_UEnum_CustomizableObjectPopulation_EPopulationConstraintType();
	CUSTOMIZABLEOBJECTPOPULATION_API UScriptStruct* Z_Construct_UScriptStruct_FConstraintRanges();
	CUSTOMIZABLEOBJECTPOPULATION_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint();
	ENGINE_API UClass* Z_Construct_UClass_UCurveBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectPopulation();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPopulationConstraintType;
	static UEnum* EPopulationConstraintType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPopulationConstraintType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPopulationConstraintType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectPopulation_EPopulationConstraintType, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectPopulation(), TEXT("EPopulationConstraintType"));
		}
		return Z_Registration_Info_UEnum_EPopulationConstraintType.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTPOPULATION_API UEnum* StaticEnum<EPopulationConstraintType>()
	{
		return EPopulationConstraintType_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectPopulation_EPopulationConstraintType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectPopulation_EPopulationConstraintType_Statics::Enumerators[] = {
		{ "EPopulationConstraintType::NONE", (int64)EPopulationConstraintType::NONE },
		{ "EPopulationConstraintType::BOOL", (int64)EPopulationConstraintType::BOOL },
		{ "EPopulationConstraintType::DISCRETE", (int64)EPopulationConstraintType::DISCRETE },
		{ "EPopulationConstraintType::DISCRETE_FLOAT", (int64)EPopulationConstraintType::DISCRETE_FLOAT },
		{ "EPopulationConstraintType::DISCRETE_COLOR", (int64)EPopulationConstraintType::DISCRETE_COLOR },
		{ "EPopulationConstraintType::TAG", (int64)EPopulationConstraintType::TAG },
		{ "EPopulationConstraintType::RANGE", (int64)EPopulationConstraintType::RANGE },
		{ "EPopulationConstraintType::CURVE", (int64)EPopulationConstraintType::CURVE },
		{ "EPopulationConstraintType::CURVE_COLOR", (int64)EPopulationConstraintType::CURVE_COLOR },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectPopulation_EPopulationConstraintType_Statics::Enum_MetaDataParams[] = {
		{ "BOOL.Name", "EPopulationConstraintType::BOOL" },
		{ "CURVE.Name", "EPopulationConstraintType::CURVE" },
		{ "CURVE_COLOR.Name", "EPopulationConstraintType::CURVE_COLOR" },
		{ "DISCRETE.Name", "EPopulationConstraintType::DISCRETE" },
		{ "DISCRETE_COLOR.Name", "EPopulationConstraintType::DISCRETE_COLOR" },
		{ "DISCRETE_FLOAT.Name", "EPopulationConstraintType::DISCRETE_FLOAT" },
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationConstraint.h" },
		{ "NONE.Name", "EPopulationConstraintType::NONE" },
		{ "RANGE.Name", "EPopulationConstraintType::RANGE" },
		{ "TAG.Name", "EPopulationConstraintType::TAG" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectPopulation_EPopulationConstraintType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectPopulation,
		nullptr,
		"EPopulationConstraintType",
		"EPopulationConstraintType",
		Z_Construct_UEnum_CustomizableObjectPopulation_EPopulationConstraintType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectPopulation_EPopulationConstraintType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomizableObjectPopulation_EPopulationConstraintType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectPopulation_EPopulationConstraintType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectPopulation_EPopulationConstraintType()
	{
		if (!Z_Registration_Info_UEnum_EPopulationConstraintType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPopulationConstraintType.InnerSingleton, Z_Construct_UEnum_CustomizableObjectPopulation_EPopulationConstraintType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPopulationConstraintType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECurveColor;
	static UEnum* ECurveColor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECurveColor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECurveColor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectPopulation_ECurveColor, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectPopulation(), TEXT("ECurveColor"));
		}
		return Z_Registration_Info_UEnum_ECurveColor.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTPOPULATION_API UEnum* StaticEnum<ECurveColor>()
	{
		return ECurveColor_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectPopulation_ECurveColor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectPopulation_ECurveColor_Statics::Enumerators[] = {
		{ "ECurveColor::RED", (int64)ECurveColor::RED },
		{ "ECurveColor::GREEN", (int64)ECurveColor::GREEN },
		{ "ECurveColor::BLUE", (int64)ECurveColor::BLUE },
		{ "ECurveColor::ALPHA", (int64)ECurveColor::ALPHA },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectPopulation_ECurveColor_Statics::Enum_MetaDataParams[] = {
		{ "ALPHA.Name", "ECurveColor::ALPHA" },
		{ "BLUE.Name", "ECurveColor::BLUE" },
		{ "GREEN.Name", "ECurveColor::GREEN" },
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationConstraint.h" },
		{ "RED.Name", "ECurveColor::RED" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectPopulation_ECurveColor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectPopulation,
		nullptr,
		"ECurveColor",
		"ECurveColor",
		Z_Construct_UEnum_CustomizableObjectPopulation_ECurveColor_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectPopulation_ECurveColor_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomizableObjectPopulation_ECurveColor_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectPopulation_ECurveColor_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectPopulation_ECurveColor()
	{
		if (!Z_Registration_Info_UEnum_ECurveColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECurveColor.InnerSingleton, Z_Construct_UEnum_CustomizableObjectPopulation_ECurveColor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECurveColor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstraintRanges;
class UScriptStruct* FConstraintRanges::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstraintRanges.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstraintRanges.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstraintRanges, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectPopulation(), TEXT("ConstraintRanges"));
	}
	return Z_Registration_Info_UScriptStruct_ConstraintRanges.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTPOPULATION_API UScriptStruct* StaticStruct<FConstraintRanges>()
{
	return FConstraintRanges::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstraintRanges_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeWeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RangeWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintRanges_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationConstraint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstraintRanges_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstraintRanges>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintRanges_Statics::NewProp_MinimumValue_MetaData[] = {
		{ "Category", "RangeConstraint" },
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationConstraint.h" },
		{ "ToolTip", "Minimum value defining this range. Can't be higher than the maximum" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintRanges_Statics::NewProp_MinimumValue = { "MinimumValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintRanges, MinimumValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintRanges_Statics::NewProp_MinimumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintRanges_Statics::NewProp_MinimumValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintRanges_Statics::NewProp_MaximumValue_MetaData[] = {
		{ "Category", "RangeConstraint" },
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationConstraint.h" },
		{ "ToolTip", "Maximum value defining this range. Can't be lower than the minimum" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConstraintRanges_Statics::NewProp_MaximumValue = { "MaximumValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintRanges, MaximumValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintRanges_Statics::NewProp_MaximumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintRanges_Statics::NewProp_MaximumValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstraintRanges_Statics::NewProp_RangeWeight_MetaData[] = {
		{ "Category", "RangeConstraint" },
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationConstraint.h" },
		{ "ToolTip", "How often this range will be used among the ranges defined by this constraint" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConstraintRanges_Statics::NewProp_RangeWeight = { "RangeWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConstraintRanges, RangeWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintRanges_Statics::NewProp_RangeWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintRanges_Statics::NewProp_RangeWeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstraintRanges_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintRanges_Statics::NewProp_MinimumValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintRanges_Statics::NewProp_MaximumValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstraintRanges_Statics::NewProp_RangeWeight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstraintRanges_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectPopulation,
		nullptr,
		&NewStructOps,
		"ConstraintRanges",
		sizeof(FConstraintRanges),
		alignof(FConstraintRanges),
		Z_Construct_UScriptStruct_FConstraintRanges_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintRanges_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstraintRanges_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstraintRanges_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstraintRanges()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstraintRanges.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstraintRanges.InnerSingleton, Z_Construct_UScriptStruct_FConstraintRanges_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstraintRanges.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizableObjectPopulationConstraint;
class UScriptStruct* FCustomizableObjectPopulationConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizableObjectPopulationConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizableObjectPopulationConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectPopulation(), TEXT("CustomizableObjectPopulationConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizableObjectPopulationConstraint.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECTPOPULATION_API UScriptStruct* StaticStruct<FCustomizableObjectPopulationConstraint>()
{
	return FCustomizableObjectPopulationConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstraintWeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConstraintWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrueWeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TrueWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FalseWeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FalseWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscreteValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DiscreteValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DiscreteColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DiscreteColor;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Allowlist_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Allowlist_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Allowlist;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Blocklist_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blocklist_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Blocklist;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ranges_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ranges_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Ranges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveColor_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveColor_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationConstraint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizableObjectPopulationConstraint>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "CustomizablePopulationClass" },
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationConstraint.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectPopulationConstraint, Type), Z_Construct_UEnum_CustomizableObjectPopulation_EPopulationConstraintType, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Type_MetaData)) }; // 592744255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_ConstraintWeight_MetaData[] = {
		{ "Category", "CustomizablePopulationClass" },
		{ "Comment", "/** Integer used to decide which constraint to apply when multiple constraints are used for the same characteristic */" },
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationConstraint.h" },
		{ "ToolTip", "Integer used to decide which constraint to apply when multiple constraints are used for the same characteristic" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_ConstraintWeight = { "ConstraintWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectPopulationConstraint, ConstraintWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_ConstraintWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_ConstraintWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_TrueWeight_MetaData[] = {
		{ "Category", "BoolConstraint" },
		{ "Comment", "/** Bool Constraint (Zero to only one of them if we want to force one option.Can't contain two zeroes) */" },
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationConstraint.h" },
		{ "ToolTip", "Bool Constraint (Zero to only one of them if we want to force one option.Can't contain two zeroes)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_TrueWeight = { "TrueWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectPopulationConstraint, TrueWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_TrueWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_TrueWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_FalseWeight_MetaData[] = {
		{ "Category", "BoolConstraint" },
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationConstraint.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_FalseWeight = { "FalseWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectPopulationConstraint, FalseWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_FalseWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_FalseWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_DiscreteValue_MetaData[] = {
		{ "Category", "DiscreteConstraint" },
		{ "Comment", "/** Name of the int parameter option chosen */" },
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationConstraint.h" },
		{ "ToolTip", "Name of the int parameter option chosen" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_DiscreteValue = { "DiscreteValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectPopulationConstraint, DiscreteValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_DiscreteValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_DiscreteValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_DiscreteColor_MetaData[] = {
		{ "Category", "DiscreteConstraint" },
		{ "Comment", "/** Color chosen **/" },
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationConstraint.h" },
		{ "ToolTip", "Color chosen *" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_DiscreteColor = { "DiscreteColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectPopulationConstraint, DiscreteColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_DiscreteColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_DiscreteColor_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Allowlist_Inner = { "Allowlist", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Allowlist_MetaData[] = {
		{ "Category", "TagConstraint" },
		{ "Comment", "/** List of tags that force a parameter */" },
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationConstraint.h" },
		{ "ToolTip", "List of tags that force a parameter" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Allowlist = { "Allowlist", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectPopulationConstraint, Allowlist), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Allowlist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Allowlist_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Blocklist_Inner = { "Blocklist", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Blocklist_MetaData[] = {
		{ "Category", "TagConstraint" },
		{ "Comment", "/** List of tags that exclude a parameter */" },
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationConstraint.h" },
		{ "ToolTip", "List of tags that exclude a parameter" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Blocklist = { "Blocklist", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectPopulationConstraint, Blocklist), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Blocklist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Blocklist_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Ranges_Inner = { "Ranges", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConstraintRanges, METADATA_PARAMS(nullptr, 0) }; // 4030246591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Ranges_MetaData[] = {
		{ "Category", "RangeConstraint" },
		{ "Comment", "/** Ranges Constraint */" },
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationConstraint.h" },
		{ "ToolTip", "Ranges Constraint" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Ranges = { "Ranges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectPopulationConstraint, Ranges), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Ranges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Ranges_MetaData)) }; // 4030246591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "CurveConstraint" },
		{ "Comment", "/** Curve Constraint */" },
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationConstraint.h" },
		{ "ToolTip", "Curve Constraint" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectPopulationConstraint, Curve), Z_Construct_UClass_UCurveBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Curve_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_CurveColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_CurveColor_MetaData[] = {
		{ "Category", "CurveConstraint" },
		{ "ModuleRelativePath", "Private/MuCOP/CustomizableObjectPopulationConstraint.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_CurveColor = { "CurveColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizableObjectPopulationConstraint, CurveColor), Z_Construct_UEnum_CustomizableObjectPopulation_ECurveColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_CurveColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_CurveColor_MetaData)) }; // 2469853173
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_ConstraintWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_TrueWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_FalseWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_DiscreteValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_DiscreteColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Allowlist_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Allowlist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Blocklist_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Blocklist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Ranges_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Ranges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_CurveColor_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewProp_CurveColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectPopulation,
		nullptr,
		&NewStructOps,
		"CustomizableObjectPopulationConstraint",
		sizeof(FCustomizableObjectPopulationConstraint),
		alignof(FCustomizableObjectPopulationConstraint),
		Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizableObjectPopulationConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizableObjectPopulationConstraint.InnerSingleton, Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizableObjectPopulationConstraint.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Private_MuCOP_CustomizableObjectPopulationConstraint_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Private_MuCOP_CustomizableObjectPopulationConstraint_h_Statics::EnumInfo[] = {
		{ EPopulationConstraintType_StaticEnum, TEXT("EPopulationConstraintType"), &Z_Registration_Info_UEnum_EPopulationConstraintType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 592744255U) },
		{ ECurveColor_StaticEnum, TEXT("ECurveColor"), &Z_Registration_Info_UEnum_ECurveColor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2469853173U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Private_MuCOP_CustomizableObjectPopulationConstraint_h_Statics::ScriptStructInfo[] = {
		{ FConstraintRanges::StaticStruct, Z_Construct_UScriptStruct_FConstraintRanges_Statics::NewStructOps, TEXT("ConstraintRanges"), &Z_Registration_Info_UScriptStruct_ConstraintRanges, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstraintRanges), 4030246591U) },
		{ FCustomizableObjectPopulationConstraint::StaticStruct, Z_Construct_UScriptStruct_FCustomizableObjectPopulationConstraint_Statics::NewStructOps, TEXT("CustomizableObjectPopulationConstraint"), &Z_Registration_Info_UScriptStruct_CustomizableObjectPopulationConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizableObjectPopulationConstraint), 1971258261U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Private_MuCOP_CustomizableObjectPopulationConstraint_h_1835498807(TEXT("/Script/CustomizableObjectPopulation"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Private_MuCOP_CustomizableObjectPopulationConstraint_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Private_MuCOP_CustomizableObjectPopulationConstraint_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Private_MuCOP_CustomizableObjectPopulationConstraint_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectPopulation_Private_MuCOP_CustomizableObjectPopulationConstraint_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
