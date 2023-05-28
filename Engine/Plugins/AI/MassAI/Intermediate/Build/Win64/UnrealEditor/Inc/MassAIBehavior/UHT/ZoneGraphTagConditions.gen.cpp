// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Conditions/ZoneGraphTagConditions.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneGraphTagConditions() {}
// Cross Module References
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagCondition();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilterConditionInstanceData();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition();
	MASSAIBEHAVIOR_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData();
	STATETREEMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FStateTreeConditionBase();
	UPackage* Z_Construct_UPackage__Script_MassAIBehavior();
	ZONEGRAPH_API UEnum* Z_Construct_UEnum_ZoneGraph_EZoneLaneTagMaskComparison();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTag();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilter();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagMask();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphTagFilterConditionInstanceData;
class UScriptStruct* FZoneGraphTagFilterConditionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphTagFilterConditionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphTagFilterConditionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphTagFilterConditionInstanceData, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("ZoneGraphTagFilterConditionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphTagFilterConditionInstanceData.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FZoneGraphTagFilterConditionInstanceData>()
{
	return FZoneGraphTagFilterConditionInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphTagFilterConditionInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagFilterConditionInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* ZoneGraph Tag condition.\n*/" },
		{ "ModuleRelativePath", "Public/Conditions/ZoneGraphTagConditions.h" },
		{ "ToolTip", "ZoneGraph Tag condition." },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphTagFilterConditionInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphTagFilterConditionInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagFilterConditionInstanceData_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Conditions/ZoneGraphTagConditions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphTagFilterConditionInstanceData_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphTagFilterConditionInstanceData, Tags), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagFilterConditionInstanceData_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagFilterConditionInstanceData_Statics::NewProp_Tags_MetaData)) }; // 1781901322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphTagFilterConditionInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTagFilterConditionInstanceData_Statics::NewProp_Tags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphTagFilterConditionInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		nullptr,
		&NewStructOps,
		"ZoneGraphTagFilterConditionInstanceData",
		sizeof(FZoneGraphTagFilterConditionInstanceData),
		alignof(FZoneGraphTagFilterConditionInstanceData),
		Z_Construct_UScriptStruct_FZoneGraphTagFilterConditionInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagFilterConditionInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagFilterConditionInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagFilterConditionInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilterConditionInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphTagFilterConditionInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphTagFilterConditionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphTagFilterConditionInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphTagFilterConditionInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FZoneGraphTagFilterCondition>() == std::is_polymorphic<FStateTreeConditionBase>(), "USTRUCT FZoneGraphTagFilterCondition cannot be polymorphic unless super FStateTreeConditionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphTagFilterCondition;
class UScriptStruct* FZoneGraphTagFilterCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphTagFilterCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphTagFilterCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("ZoneGraphTagFilterCondition"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphTagFilterCondition.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FZoneGraphTagFilterCondition>()
{
	return FZoneGraphTagFilterCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Filter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "ZoneGraphTagFilter Compare" },
		{ "ModuleRelativePath", "Public/Conditions/ZoneGraphTagConditions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphTagFilterCondition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Public/Conditions/ZoneGraphTagConditions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphTagFilterCondition, Filter), Z_Construct_UScriptStruct_FZoneGraphTagFilter, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::NewProp_Filter_MetaData)) }; // 58618928
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::NewProp_bInvert_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Public/Conditions/ZoneGraphTagConditions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((FZoneGraphTagFilterCondition*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FZoneGraphTagFilterCondition), &Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::NewProp_bInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::NewProp_bInvert_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::NewProp_Filter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::NewProp_bInvert,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FStateTreeConditionBase,
		&NewStructOps,
		"ZoneGraphTagFilterCondition",
		sizeof(FZoneGraphTagFilterCondition),
		alignof(FZoneGraphTagFilterCondition),
		Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphTagFilterCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphTagFilterCondition.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphTagFilterCondition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphTagMaskConditionInstanceData;
class UScriptStruct* FZoneGraphTagMaskConditionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphTagMaskConditionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphTagMaskConditionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("ZoneGraphTagMaskConditionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphTagMaskConditionInstanceData.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FZoneGraphTagMaskConditionInstanceData>()
{
	return FZoneGraphTagMaskConditionInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* ZoneGraph Tag condition.\n*/" },
		{ "ModuleRelativePath", "Public/Conditions/ZoneGraphTagConditions.h" },
		{ "ToolTip", "ZoneGraph Tag condition." },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphTagMaskConditionInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Conditions/ZoneGraphTagConditions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphTagMaskConditionInstanceData, Left), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::NewProp_Left_MetaData)) }; // 1781901322
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Conditions/ZoneGraphTagConditions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphTagMaskConditionInstanceData, Right), Z_Construct_UScriptStruct_FZoneGraphTagMask, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::NewProp_Right_MetaData)) }; // 1781901322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::NewProp_Right,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		nullptr,
		&NewStructOps,
		"ZoneGraphTagMaskConditionInstanceData",
		sizeof(FZoneGraphTagMaskConditionInstanceData),
		alignof(FZoneGraphTagMaskConditionInstanceData),
		Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphTagMaskConditionInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphTagMaskConditionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphTagMaskConditionInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FZoneGraphTagMaskCondition>() == std::is_polymorphic<FStateTreeConditionBase>(), "USTRUCT FZoneGraphTagMaskCondition cannot be polymorphic unless super FStateTreeConditionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphTagMaskCondition;
class UScriptStruct* FZoneGraphTagMaskCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphTagMaskCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphTagMaskCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("ZoneGraphTagMaskCondition"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphTagMaskCondition.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FZoneGraphTagMaskCondition>()
{
	return FZoneGraphTagMaskCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Operator_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Operator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "ZoneGraphTagMask Compare" },
		{ "ModuleRelativePath", "Public/Conditions/ZoneGraphTagConditions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphTagMaskCondition>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::NewProp_Operator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::NewProp_Operator_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Public/Conditions/ZoneGraphTagConditions.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphTagMaskCondition, Operator), Z_Construct_UEnum_ZoneGraph_EZoneLaneTagMaskComparison, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::NewProp_Operator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::NewProp_Operator_MetaData)) }; // 2959696361
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::NewProp_bInvert_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Public/Conditions/ZoneGraphTagConditions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((FZoneGraphTagMaskCondition*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FZoneGraphTagMaskCondition), &Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::NewProp_bInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::NewProp_bInvert_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::NewProp_Operator_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::NewProp_Operator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::NewProp_bInvert,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FStateTreeConditionBase,
		&NewStructOps,
		"ZoneGraphTagMaskCondition",
		sizeof(FZoneGraphTagMaskCondition),
		alignof(FZoneGraphTagMaskCondition),
		Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphTagMaskCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphTagMaskCondition.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphTagMaskCondition.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphTagConditionInstanceData;
class UScriptStruct* FZoneGraphTagConditionInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphTagConditionInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphTagConditionInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("ZoneGraphTagConditionInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphTagConditionInstanceData.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FZoneGraphTagConditionInstanceData>()
{
	return FZoneGraphTagConditionInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* ZoneGraph Tag condition.\n*/" },
		{ "ModuleRelativePath", "Public/Conditions/ZoneGraphTagConditions.h" },
		{ "ToolTip", "ZoneGraph Tag condition." },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphTagConditionInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::NewProp_Left_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Conditions/ZoneGraphTagConditions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphTagConditionInstanceData, Left), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::NewProp_Left_MetaData)) }; // 1504622355
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::NewProp_Right_MetaData[] = {
		{ "Category", "Parameter" },
		{ "ModuleRelativePath", "Public/Conditions/ZoneGraphTagConditions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FZoneGraphTagConditionInstanceData, Right), Z_Construct_UScriptStruct_FZoneGraphTag, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::NewProp_Right_MetaData)) }; // 1504622355
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::NewProp_Right,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		nullptr,
		&NewStructOps,
		"ZoneGraphTagConditionInstanceData",
		sizeof(FZoneGraphTagConditionInstanceData),
		alignof(FZoneGraphTagConditionInstanceData),
		Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphTagConditionInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphTagConditionInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphTagConditionInstanceData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FZoneGraphTagCondition>() == std::is_polymorphic<FStateTreeConditionBase>(), "USTRUCT FZoneGraphTagCondition cannot be polymorphic unless super FStateTreeConditionBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphTagCondition;
class UScriptStruct* FZoneGraphTagCondition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphTagCondition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphTagCondition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphTagCondition, (UObject*)Z_Construct_UPackage__Script_MassAIBehavior(), TEXT("ZoneGraphTagCondition"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphTagCondition.OuterSingleton;
}
template<> MASSAIBEHAVIOR_API UScriptStruct* StaticStruct<FZoneGraphTagCondition>()
{
	return FZoneGraphTagCondition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphTagCondition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvert_MetaData[];
#endif
		static void NewProp_bInvert_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvert;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagCondition_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "ZoneGraphTag Compare" },
		{ "ModuleRelativePath", "Public/Conditions/ZoneGraphTagConditions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphTagCondition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphTagCondition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphTagCondition_Statics::NewProp_bInvert_MetaData[] = {
		{ "Category", "Condition" },
		{ "ModuleRelativePath", "Public/Conditions/ZoneGraphTagConditions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FZoneGraphTagCondition_Statics::NewProp_bInvert_SetBit(void* Obj)
	{
		((FZoneGraphTagCondition*)Obj)->bInvert = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FZoneGraphTagCondition_Statics::NewProp_bInvert = { "bInvert", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FZoneGraphTagCondition), &Z_Construct_UScriptStruct_FZoneGraphTagCondition_Statics::NewProp_bInvert_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagCondition_Statics::NewProp_bInvert_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagCondition_Statics::NewProp_bInvert_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FZoneGraphTagCondition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FZoneGraphTagCondition_Statics::NewProp_bInvert,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphTagCondition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassAIBehavior,
		Z_Construct_UScriptStruct_FStateTreeConditionBase,
		&NewStructOps,
		"ZoneGraphTagCondition",
		sizeof(FZoneGraphTagCondition),
		alignof(FZoneGraphTagCondition),
		Z_Construct_UScriptStruct_FZoneGraphTagCondition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagCondition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphTagCondition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphTagCondition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphTagCondition()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphTagCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphTagCondition.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphTagCondition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphTagCondition.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Conditions_ZoneGraphTagConditions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Conditions_ZoneGraphTagConditions_h_Statics::ScriptStructInfo[] = {
		{ FZoneGraphTagFilterConditionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphTagFilterConditionInstanceData_Statics::NewStructOps, TEXT("ZoneGraphTagFilterConditionInstanceData"), &Z_Registration_Info_UScriptStruct_ZoneGraphTagFilterConditionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphTagFilterConditionInstanceData), 3189128940U) },
		{ FZoneGraphTagFilterCondition::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphTagFilterCondition_Statics::NewStructOps, TEXT("ZoneGraphTagFilterCondition"), &Z_Registration_Info_UScriptStruct_ZoneGraphTagFilterCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphTagFilterCondition), 2982410054U) },
		{ FZoneGraphTagMaskConditionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphTagMaskConditionInstanceData_Statics::NewStructOps, TEXT("ZoneGraphTagMaskConditionInstanceData"), &Z_Registration_Info_UScriptStruct_ZoneGraphTagMaskConditionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphTagMaskConditionInstanceData), 2296396745U) },
		{ FZoneGraphTagMaskCondition::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphTagMaskCondition_Statics::NewStructOps, TEXT("ZoneGraphTagMaskCondition"), &Z_Registration_Info_UScriptStruct_ZoneGraphTagMaskCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphTagMaskCondition), 3025909767U) },
		{ FZoneGraphTagConditionInstanceData::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphTagConditionInstanceData_Statics::NewStructOps, TEXT("ZoneGraphTagConditionInstanceData"), &Z_Registration_Info_UScriptStruct_ZoneGraphTagConditionInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphTagConditionInstanceData), 3529837211U) },
		{ FZoneGraphTagCondition::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphTagCondition_Statics::NewStructOps, TEXT("ZoneGraphTagCondition"), &Z_Registration_Info_UScriptStruct_ZoneGraphTagCondition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphTagCondition), 2563991327U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Conditions_ZoneGraphTagConditions_h_1435318460(TEXT("/Script/MassAIBehavior"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Conditions_ZoneGraphTagConditions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassAI_Source_MassAIBehavior_Public_Conditions_ZoneGraphTagConditions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
