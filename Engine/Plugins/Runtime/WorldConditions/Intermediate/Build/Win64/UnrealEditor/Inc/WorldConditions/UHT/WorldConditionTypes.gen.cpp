// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldConditionTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldConditionTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UStruct();
	UPackage* Z_Construct_UPackage__Script_WorldConditions();
	WORLDCONDITIONS_API UEnum* Z_Construct_UEnum_WorldConditions_EWorldConditionContextDataType();
	WORLDCONDITIONS_API UEnum* Z_Construct_UEnum_WorldConditions_EWorldConditionOperator();
	WORLDCONDITIONS_API UEnum* Z_Construct_UEnum_WorldConditions_EWorldConditionResultValue();
	WORLDCONDITIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionContextDataDesc();
	WORLDCONDITIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionContextDataRef();
	WORLDCONDITIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionResult();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldConditionResultValue;
	static UEnum* EWorldConditionResultValue_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWorldConditionResultValue.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWorldConditionResultValue.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WorldConditions_EWorldConditionResultValue, (UObject*)Z_Construct_UPackage__Script_WorldConditions(), TEXT("EWorldConditionResultValue"));
		}
		return Z_Registration_Info_UEnum_EWorldConditionResultValue.OuterSingleton;
	}
	template<> WORLDCONDITIONS_API UEnum* StaticEnum<EWorldConditionResultValue>()
	{
		return EWorldConditionResultValue_StaticEnum();
	}
	struct Z_Construct_UEnum_WorldConditions_EWorldConditionResultValue_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WorldConditions_EWorldConditionResultValue_Statics::Enumerators[] = {
		{ "EWorldConditionResultValue::IsFalse", (int64)EWorldConditionResultValue::IsFalse },
		{ "EWorldConditionResultValue::IsTrue", (int64)EWorldConditionResultValue::IsTrue },
		{ "EWorldConditionResultValue::Invalid", (int64)EWorldConditionResultValue::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WorldConditions_EWorldConditionResultValue_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Result of a world condition */" },
		{ "Invalid.Comment", "/** The result needs to be recalculated. */" },
		{ "Invalid.Name", "EWorldConditionResultValue::Invalid" },
		{ "Invalid.ToolTip", "The result needs to be recalculated." },
		{ "IsFalse.Comment", "/** The result is false. */" },
		{ "IsFalse.Name", "EWorldConditionResultValue::IsFalse" },
		{ "IsFalse.ToolTip", "The result is false." },
		{ "IsTrue.Comment", "/** The result is true. */" },
		{ "IsTrue.Name", "EWorldConditionResultValue::IsTrue" },
		{ "IsTrue.ToolTip", "The result is true." },
		{ "ModuleRelativePath", "Public/WorldConditionTypes.h" },
		{ "ToolTip", "Result of a world condition" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WorldConditions_EWorldConditionResultValue_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WorldConditions,
		nullptr,
		"EWorldConditionResultValue",
		"EWorldConditionResultValue",
		Z_Construct_UEnum_WorldConditions_EWorldConditionResultValue_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WorldConditions_EWorldConditionResultValue_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WorldConditions_EWorldConditionResultValue_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WorldConditions_EWorldConditionResultValue_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WorldConditions_EWorldConditionResultValue()
	{
		if (!Z_Registration_Info_UEnum_EWorldConditionResultValue.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldConditionResultValue.InnerSingleton, Z_Construct_UEnum_WorldConditions_EWorldConditionResultValue_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWorldConditionResultValue.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldConditionResult;
class UScriptStruct* FWorldConditionResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldConditionResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldConditionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldConditionResult, (UObject*)Z_Construct_UPackage__Script_WorldConditions(), TEXT("WorldConditionResult"));
	}
	return Z_Registration_Info_UScriptStruct_WorldConditionResult.OuterSingleton;
}
template<> WORLDCONDITIONS_API UScriptStruct* StaticStruct<FWorldConditionResult>()
{
	return FWorldConditionResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldConditionResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeCached_MetaData[];
#endif
		static void NewProp_bCanBeCached_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeCached;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionResult_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Result of a world condition evaluation.\n * Also contains additional information related to that result (e.g. if the result can be cached or not)\n */" },
		{ "ModuleRelativePath", "Public/WorldConditionTypes.h" },
		{ "ToolTip", "Result of a world condition evaluation.\nAlso contains additional information related to that result (e.g. if the result can be cached or not)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldConditionResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldConditionResult>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWorldConditionResult_Statics::NewProp_Value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionResult_Statics::NewProp_Value_MetaData[] = {
		{ "Comment", "/** Indicates the result of a condition evaluated for a given context. */" },
		{ "ModuleRelativePath", "Public/WorldConditionTypes.h" },
		{ "ToolTip", "Indicates the result of a condition evaluated for a given context." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWorldConditionResult_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldConditionResult, Value), Z_Construct_UEnum_WorldConditions_EWorldConditionResultValue, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionResult_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionResult_Statics::NewProp_Value_MetaData)) }; // 3028121018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionResult_Statics::NewProp_bCanBeCached_MetaData[] = {
		{ "Comment", "/** Indicates that a given result can be cached or not. */" },
		{ "ModuleRelativePath", "Public/WorldConditionTypes.h" },
		{ "ToolTip", "Indicates that a given result can be cached or not." },
	};
#endif
	void Z_Construct_UScriptStruct_FWorldConditionResult_Statics::NewProp_bCanBeCached_SetBit(void* Obj)
	{
		((FWorldConditionResult*)Obj)->bCanBeCached = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWorldConditionResult_Statics::NewProp_bCanBeCached = { "bCanBeCached", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWorldConditionResult), &Z_Construct_UScriptStruct_FWorldConditionResult_Statics::NewProp_bCanBeCached_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionResult_Statics::NewProp_bCanBeCached_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionResult_Statics::NewProp_bCanBeCached_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldConditionResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionResult_Statics::NewProp_Value_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionResult_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionResult_Statics::NewProp_bCanBeCached,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldConditionResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditions,
		nullptr,
		&NewStructOps,
		"WorldConditionResult",
		sizeof(FWorldConditionResult),
		alignof(FWorldConditionResult),
		Z_Construct_UScriptStruct_FWorldConditionResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionResult()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldConditionResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldConditionResult.InnerSingleton, Z_Construct_UScriptStruct_FWorldConditionResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldConditionResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldConditionOperator;
	static UEnum* EWorldConditionOperator_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWorldConditionOperator.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWorldConditionOperator.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WorldConditions_EWorldConditionOperator, (UObject*)Z_Construct_UPackage__Script_WorldConditions(), TEXT("EWorldConditionOperator"));
		}
		return Z_Registration_Info_UEnum_EWorldConditionOperator.OuterSingleton;
	}
	template<> WORLDCONDITIONS_API UEnum* StaticEnum<EWorldConditionOperator>()
	{
		return EWorldConditionOperator_StaticEnum();
	}
	struct Z_Construct_UEnum_WorldConditions_EWorldConditionOperator_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WorldConditions_EWorldConditionOperator_Statics::Enumerators[] = {
		{ "EWorldConditionOperator::And", (int64)EWorldConditionOperator::And },
		{ "EWorldConditionOperator::Or", (int64)EWorldConditionOperator::Or },
		{ "EWorldConditionOperator::Copy", (int64)EWorldConditionOperator::Copy },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WorldConditions_EWorldConditionOperator_Statics::Enum_MetaDataParams[] = {
		{ "And.Comment", "/** Boolean And */" },
		{ "And.Name", "EWorldConditionOperator::And" },
		{ "And.ToolTip", "Boolean And" },
		{ "Comment", "/** Boolean operator between conditions in a expression. */" },
		{ "Copy.Comment", "/** Used internally, signifies that a right value is copied over left value. */" },
		{ "Copy.Hidden", "" },
		{ "Copy.Name", "EWorldConditionOperator::Copy" },
		{ "Copy.ToolTip", "Used internally, signifies that a right value is copied over left value." },
		{ "ModuleRelativePath", "Public/WorldConditionTypes.h" },
		{ "Or.Comment", "/** Boolean Or */" },
		{ "Or.Name", "EWorldConditionOperator::Or" },
		{ "Or.ToolTip", "Boolean Or" },
		{ "ToolTip", "Boolean operator between conditions in a expression." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WorldConditions_EWorldConditionOperator_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WorldConditions,
		nullptr,
		"EWorldConditionOperator",
		"EWorldConditionOperator",
		Z_Construct_UEnum_WorldConditions_EWorldConditionOperator_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WorldConditions_EWorldConditionOperator_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WorldConditions_EWorldConditionOperator_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WorldConditions_EWorldConditionOperator_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WorldConditions_EWorldConditionOperator()
	{
		if (!Z_Registration_Info_UEnum_EWorldConditionOperator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldConditionOperator.InnerSingleton, Z_Construct_UEnum_WorldConditions_EWorldConditionOperator_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWorldConditionOperator.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldConditionContextDataType;
	static UEnum* EWorldConditionContextDataType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWorldConditionContextDataType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWorldConditionContextDataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WorldConditions_EWorldConditionContextDataType, (UObject*)Z_Construct_UPackage__Script_WorldConditions(), TEXT("EWorldConditionContextDataType"));
		}
		return Z_Registration_Info_UEnum_EWorldConditionContextDataType.OuterSingleton;
	}
	template<> WORLDCONDITIONS_API UEnum* StaticEnum<EWorldConditionContextDataType>()
	{
		return EWorldConditionContextDataType_StaticEnum();
	}
	struct Z_Construct_UEnum_WorldConditions_EWorldConditionContextDataType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WorldConditions_EWorldConditionContextDataType_Statics::Enumerators[] = {
		{ "EWorldConditionContextDataType::Dynamic", (int64)EWorldConditionContextDataType::Dynamic },
		{ "EWorldConditionContextDataType::Persistent", (int64)EWorldConditionContextDataType::Persistent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WorldConditions_EWorldConditionContextDataType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n  * Describes the availability of a context data.\n */" },
		{ "Dynamic.Comment", "/** The context data might change on each call, must check for validity, and is only available on IsTrue(). */" },
		{ "Dynamic.Name", "EWorldConditionContextDataType::Dynamic" },
		{ "Dynamic.ToolTip", "The context data might change on each call, must check for validity, and is only available on IsTrue()." },
		{ "ModuleRelativePath", "Public/WorldConditionTypes.h" },
		{ "Persistent.Comment", "/** The context data is the same during the lifetime of the condition, must check for validity on Activate()/IsTrue(), might not be available on Deactivate(). */" },
		{ "Persistent.Name", "EWorldConditionContextDataType::Persistent" },
		{ "Persistent.ToolTip", "The context data is the same during the lifetime of the condition, must check for validity on Activate()/IsTrue(), might not be available on Deactivate()." },
		{ "ToolTip", "Describes the availability of a context data." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WorldConditions_EWorldConditionContextDataType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WorldConditions,
		nullptr,
		"EWorldConditionContextDataType",
		"EWorldConditionContextDataType",
		Z_Construct_UEnum_WorldConditions_EWorldConditionContextDataType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WorldConditions_EWorldConditionContextDataType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WorldConditions_EWorldConditionContextDataType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WorldConditions_EWorldConditionContextDataType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WorldConditions_EWorldConditionContextDataType()
	{
		if (!Z_Registration_Info_UEnum_EWorldConditionContextDataType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldConditionContextDataType.InnerSingleton, Z_Construct_UEnum_WorldConditions_EWorldConditionContextDataType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWorldConditionContextDataType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldConditionContextDataDesc;
class UScriptStruct* FWorldConditionContextDataDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldConditionContextDataDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldConditionContextDataDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldConditionContextDataDesc, (UObject*)Z_Construct_UPackage__Script_WorldConditions(), TEXT("WorldConditionContextDataDesc"));
	}
	return Z_Registration_Info_UScriptStruct_WorldConditionContextDataDesc.OuterSingleton;
}
template<> WORLDCONDITIONS_API UScriptStruct* StaticStruct<FWorldConditionContextDataDesc>()
{
	return FWorldConditionContextDataDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Struct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes context data available for a world conditions.\n * The descriptors are defined in UWorldConditionSchema, and context data is referred using FWorldConditionContextDataRef.\n */" },
		{ "ModuleRelativePath", "Public/WorldConditionTypes.h" },
		{ "ToolTip", "Describes context data available for a world conditions.\nThe descriptors are defined in UWorldConditionSchema, and context data is referred using FWorldConditionContextDataRef." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldConditionContextDataDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::NewProp_Struct_MetaData[] = {
		{ "Comment", "/** Type of the context data, can be a struct or object. */" },
		{ "ModuleRelativePath", "Public/WorldConditionTypes.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Type of the context data, can be a struct or object." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldConditionContextDataDesc, Struct), Z_Construct_UClass_UStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::NewProp_Struct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the context data, which is used together with the type struct to find specific data to use. */" },
		{ "ModuleRelativePath", "Public/WorldConditionTypes.h" },
		{ "ToolTip", "Name of the context data, which is used together with the type struct to find specific data to use." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldConditionContextDataDesc, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "/** Type of the context data, See EWorldConditionContextDataType. */" },
		{ "ModuleRelativePath", "Public/WorldConditionTypes.h" },
		{ "ToolTip", "Type of the context data, See EWorldConditionContextDataType." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldConditionContextDataDesc, Type), Z_Construct_UEnum_WorldConditions_EWorldConditionContextDataType, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::NewProp_Type_MetaData)) }; // 2837078544
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditions,
		nullptr,
		&NewStructOps,
		"WorldConditionContextDataDesc",
		sizeof(FWorldConditionContextDataDesc),
		alignof(FWorldConditionContextDataDesc),
		Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionContextDataDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldConditionContextDataDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldConditionContextDataDesc.InnerSingleton, Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldConditionContextDataDesc.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldConditionContextDataRef;
class UScriptStruct* FWorldConditionContextDataRef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldConditionContextDataRef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldConditionContextDataRef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldConditionContextDataRef, (UObject*)Z_Construct_UPackage__Script_WorldConditions(), TEXT("WorldConditionContextDataRef"));
	}
	return Z_Registration_Info_UScriptStruct_WorldConditionContextDataRef.OuterSingleton;
}
template<> WORLDCONDITIONS_API UScriptStruct* StaticStruct<FWorldConditionContextDataRef>()
{
	return FWorldConditionContextDataRef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Describes a reference to context data defined in UWorldConditionSchema.\n * When placed as editable property on a World Condition, allows the user to define which context data to use,\n * and allows quick access of that data via FWorldConditionContext.\n */" },
		{ "ModuleRelativePath", "Public/WorldConditionTypes.h" },
		{ "ToolTip", "Describes a reference to context data defined in UWorldConditionSchema.\nWhen placed as editable property on a World Condition, allows the user to define which context data to use,\nand allows quick access of that data via FWorldConditionContext." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldConditionContextDataRef>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldConditionTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldConditionContextDataRef, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldConditionTypes.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldConditionContextDataRef, Index), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::NewProp_Index_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::NewProp_Index,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WorldConditions,
		nullptr,
		&NewStructOps,
		"WorldConditionContextDataRef",
		sizeof(FWorldConditionContextDataRef),
		alignof(FWorldConditionContextDataRef),
		Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldConditionContextDataRef()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldConditionContextDataRef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldConditionContextDataRef.InnerSingleton, Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldConditionContextDataRef.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionTypes_h_Statics::EnumInfo[] = {
		{ EWorldConditionResultValue_StaticEnum, TEXT("EWorldConditionResultValue"), &Z_Registration_Info_UEnum_EWorldConditionResultValue, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3028121018U) },
		{ EWorldConditionOperator_StaticEnum, TEXT("EWorldConditionOperator"), &Z_Registration_Info_UEnum_EWorldConditionOperator, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2659154772U) },
		{ EWorldConditionContextDataType_StaticEnum, TEXT("EWorldConditionContextDataType"), &Z_Registration_Info_UEnum_EWorldConditionContextDataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2837078544U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionTypes_h_Statics::ScriptStructInfo[] = {
		{ FWorldConditionResult::StaticStruct, Z_Construct_UScriptStruct_FWorldConditionResult_Statics::NewStructOps, TEXT("WorldConditionResult"), &Z_Registration_Info_UScriptStruct_WorldConditionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldConditionResult), 1851083753U) },
		{ FWorldConditionContextDataDesc::StaticStruct, Z_Construct_UScriptStruct_FWorldConditionContextDataDesc_Statics::NewStructOps, TEXT("WorldConditionContextDataDesc"), &Z_Registration_Info_UScriptStruct_WorldConditionContextDataDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldConditionContextDataDesc), 2790061242U) },
		{ FWorldConditionContextDataRef::StaticStruct, Z_Construct_UScriptStruct_FWorldConditionContextDataRef_Statics::NewStructOps, TEXT("WorldConditionContextDataRef"), &Z_Registration_Info_UScriptStruct_WorldConditionContextDataRef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldConditionContextDataRef), 1655083340U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionTypes_h_2497216471(TEXT("/Script/WorldConditions"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_WorldConditions_Source_WorldConditions_Public_WorldConditionTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
