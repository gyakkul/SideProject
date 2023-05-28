// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/EnumColumn.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnumColumn() {}
// Cross Module References
	CHOOSER_API UClass* Z_Construct_UClass_UChooserColumn_NoRegister();
	CHOOSER_API UClass* Z_Construct_UClass_UChooserParameterEnum_NoRegister();
	CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum();
	CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_NoRegister();
	CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty();
	CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_NoRegister();
	CHOOSER_API UEnum* Z_Construct_UEnum_Chooser_EChooserEnumComparison();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserColumnBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserEnumRowData();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterEnumBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FEnumColumn();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FEnumContextProperty();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References

static_assert(std::is_polymorphic<FEnumContextProperty>() == std::is_polymorphic<FChooserParameterEnumBase>(), "USTRUCT FEnumContextProperty cannot be polymorphic unless super FChooserParameterEnumBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnumContextProperty;
class UScriptStruct* FEnumContextProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnumContextProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnumContextProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnumContextProperty, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("EnumContextProperty"));
	}
	return Z_Registration_Info_UScriptStruct_EnumContextProperty.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FEnumContextProperty>()
{
	return FEnumContextProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnumContextProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyBindingChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBindingChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyBindingChain;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Enum;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumContextProperty_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Enum Property Binding" },
		{ "ModuleRelativePath", "Internal/EnumColumn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnumContextProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnumContextProperty>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FEnumContextProperty_Statics::NewProp_PropertyBindingChain_Inner = { "PropertyBindingChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumContextProperty_Statics::NewProp_PropertyBindingChain_MetaData[] = {
		{ "ModuleRelativePath", "Internal/EnumColumn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEnumContextProperty_Statics::NewProp_PropertyBindingChain = { "PropertyBindingChain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumContextProperty, PropertyBindingChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumContextProperty_Statics::NewProp_PropertyBindingChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumContextProperty_Statics::NewProp_PropertyBindingChain_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumContextProperty_Statics::NewProp_Enum_MetaData[] = {
		{ "ModuleRelativePath", "Internal/EnumColumn.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FEnumContextProperty_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumContextProperty, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumContextProperty_Statics::NewProp_Enum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumContextProperty_Statics::NewProp_Enum_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnumContextProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumContextProperty_Statics::NewProp_PropertyBindingChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumContextProperty_Statics::NewProp_PropertyBindingChain,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumContextProperty_Statics::NewProp_Enum,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnumContextProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserParameterEnumBase,
		&NewStructOps,
		"EnumContextProperty",
		sizeof(FEnumContextProperty),
		alignof(FEnumContextProperty),
		Z_Construct_UScriptStruct_FEnumContextProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumContextProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumContextProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumContextProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnumContextProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_EnumContextProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnumContextProperty.InnerSingleton, Z_Construct_UScriptStruct_FEnumContextProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnumContextProperty.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChooserEnumComparison;
	static UEnum* EChooserEnumComparison_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChooserEnumComparison.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChooserEnumComparison.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chooser_EChooserEnumComparison, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("EChooserEnumComparison"));
		}
		return Z_Registration_Info_UEnum_EChooserEnumComparison.OuterSingleton;
	}
	template<> CHOOSER_API UEnum* StaticEnum<EChooserEnumComparison>()
	{
		return EChooserEnumComparison_StaticEnum();
	}
	struct Z_Construct_UEnum_Chooser_EChooserEnumComparison_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chooser_EChooserEnumComparison_Statics::Enumerators[] = {
		{ "EChooserEnumComparison::Equal", (int64)EChooserEnumComparison::Equal },
		{ "EChooserEnumComparison::NotEqual", (int64)EChooserEnumComparison::NotEqual },
		{ "EChooserEnumComparison::GreaterThan", (int64)EChooserEnumComparison::GreaterThan },
		{ "EChooserEnumComparison::GreaterThanEqual", (int64)EChooserEnumComparison::GreaterThanEqual },
		{ "EChooserEnumComparison::LessThan", (int64)EChooserEnumComparison::LessThan },
		{ "EChooserEnumComparison::LessThanEqual", (int64)EChooserEnumComparison::LessThanEqual },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chooser_EChooserEnumComparison_Statics::Enum_MetaDataParams[] = {
		{ "Equal.DisplayName", "Value ==" },
		{ "Equal.Name", "EChooserEnumComparison::Equal" },
		{ "GreaterThan.DisplayName", "Value >" },
		{ "GreaterThan.Name", "EChooserEnumComparison::GreaterThan" },
		{ "GreaterThanEqual.DisplayName", "Value >=" },
		{ "GreaterThanEqual.Name", "EChooserEnumComparison::GreaterThanEqual" },
		{ "LessThan.DisplayName", "Value <" },
		{ "LessThan.Name", "EChooserEnumComparison::LessThan" },
		{ "LessThanEqual.DisplayName", "Value <=" },
		{ "LessThanEqual.Name", "EChooserEnumComparison::LessThanEqual" },
		{ "ModuleRelativePath", "Internal/EnumColumn.h" },
		{ "NotEqual.DisplayName", "Value !=" },
		{ "NotEqual.Name", "EChooserEnumComparison::NotEqual" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chooser_EChooserEnumComparison_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chooser,
		nullptr,
		"EChooserEnumComparison",
		"EChooserEnumComparison",
		Z_Construct_UEnum_Chooser_EChooserEnumComparison_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chooser_EChooserEnumComparison_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Chooser_EChooserEnumComparison_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chooser_EChooserEnumComparison_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chooser_EChooserEnumComparison()
	{
		if (!Z_Registration_Info_UEnum_EChooserEnumComparison.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChooserEnumComparison.InnerSingleton, Z_Construct_UEnum_Chooser_EChooserEnumComparison_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChooserEnumComparison.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserEnumRowData;
class UScriptStruct* FChooserEnumRowData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserEnumRowData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserEnumRowData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserEnumRowData, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserEnumRowData"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserEnumRowData.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserEnumRowData>()
{
	return FChooserEnumRowData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserEnumRowData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Comparison_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Comparison_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Comparison;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/EnumColumn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserEnumRowData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::NewProp_Comparison_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::NewProp_Comparison_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Internal/EnumColumn.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::NewProp_Comparison = { "Comparison", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChooserEnumRowData, Comparison), Z_Construct_UEnum_Chooser_EChooserEnumComparison, METADATA_PARAMS(Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::NewProp_Comparison_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::NewProp_Comparison_MetaData)) }; // 261388209
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Internal/EnumColumn.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChooserEnumRowData, Value), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::NewProp_Comparison_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::NewProp_Comparison,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		nullptr,
		&NewStructOps,
		"ChooserEnumRowData",
		sizeof(FChooserEnumRowData),
		alignof(FChooserEnumRowData),
		Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChooserEnumRowData()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserEnumRowData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserEnumRowData.InnerSingleton, Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserEnumRowData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FEnumColumn>() == std::is_polymorphic<FChooserColumnBase>(), "USTRUCT FEnumColumn cannot be polymorphic unless super FChooserColumnBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EnumColumn;
class UScriptStruct* FEnumColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EnumColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EnumColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnumColumn, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("EnumColumn"));
	}
	return Z_Registration_Info_UScriptStruct_EnumColumn.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FEnumColumn>()
{
	return FEnumColumn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEnumColumn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RowValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RowValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumColumn_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/EnumColumn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnumColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnumColumn>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumColumn_Statics::NewProp_InputValue_MetaData[] = {
		{ "BaseStruct", "/Script/Chooser.ChooserParameterEnumBase" },
		{ "Category", "Hidden" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Internal/EnumColumn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnumColumn_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumColumn, InputValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumColumn_Statics::NewProp_InputValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumColumn_Statics::NewProp_InputValue_MetaData)) }; // 3026308664
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnumColumn_Statics::NewProp_RowValues_Inner = { "RowValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChooserEnumRowData, METADATA_PARAMS(nullptr, 0) }; // 3516351167
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnumColumn_Statics::NewProp_RowValues_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "// array of results (cells for this column for each row in the table)\n// should match the length of the Results array\n" },
		{ "ModuleRelativePath", "Internal/EnumColumn.h" },
		{ "ToolTip", "array of results (cells for this column for each row in the table)\nshould match the length of the Results array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEnumColumn_Statics::NewProp_RowValues = { "RowValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEnumColumn, RowValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumColumn_Statics::NewProp_RowValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumColumn_Statics::NewProp_RowValues_MetaData)) }; // 3516351167
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnumColumn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumColumn_Statics::NewProp_InputValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumColumn_Statics::NewProp_RowValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnumColumn_Statics::NewProp_RowValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnumColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserColumnBase,
		&NewStructOps,
		"EnumColumn",
		sizeof(FEnumColumn),
		alignof(FEnumColumn),
		Z_Construct_UScriptStruct_FEnumColumn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumColumn_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnumColumn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnumColumn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnumColumn()
	{
		if (!Z_Registration_Info_UScriptStruct_EnumColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EnumColumn.InnerSingleton, Z_Construct_UScriptStruct_FEnumColumn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EnumColumn.InnerSingleton;
	}
	void UDEPRECATED_ChooserParameterEnum_ContextProperty::StaticRegisterNativesUDEPRECATED_ChooserParameterEnum_ContextProperty()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_ChooserParameterEnum_ContextProperty);
	UClass* Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_NoRegister()
	{
		return UDEPRECATED_ChooserParameterEnum_ContextProperty::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyBindingChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBindingChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyBindingChain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "LiveLink" },
		{ "Comment", "// deprecated class version for converting old data\n" },
		{ "IncludePath", "EnumColumn.h" },
		{ "ModuleRelativePath", "Internal/EnumColumn.h" },
		{ "ToolTip", "deprecated class version for converting old data" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_Statics::NewProp_PropertyBindingChain_Inner = { "PropertyBindingChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_Statics::NewProp_PropertyBindingChain_MetaData[] = {
		{ "ModuleRelativePath", "Internal/EnumColumn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_Statics::NewProp_PropertyBindingChain = { "PropertyBindingChain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_ChooserParameterEnum_ContextProperty, PropertyBindingChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_Statics::NewProp_PropertyBindingChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_Statics::NewProp_PropertyBindingChain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_Statics::NewProp_PropertyBindingChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_Statics::NewProp_PropertyBindingChain,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UChooserParameterEnum_NoRegister, (int32)VTABLE_OFFSET(UDEPRECATED_ChooserParameterEnum_ContextProperty, IChooserParameterEnum), false },  // 2916428660
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_ChooserParameterEnum_ContextProperty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_Statics::ClassParams = {
		&UDEPRECATED_ChooserParameterEnum_ContextProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty.OuterSingleton, Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UDEPRECATED_ChooserParameterEnum_ContextProperty>()
	{
		return UDEPRECATED_ChooserParameterEnum_ContextProperty::StaticClass();
	}
	UDEPRECATED_ChooserParameterEnum_ContextProperty::UDEPRECATED_ChooserParameterEnum_ContextProperty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_ChooserParameterEnum_ContextProperty);
	UDEPRECATED_ChooserParameterEnum_ContextProperty::~UDEPRECATED_ChooserParameterEnum_ContextProperty() {}
	void UDEPRECATED_ChooserColumnEnum::StaticRegisterNativesUDEPRECATED_ChooserColumnEnum()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_ChooserColumnEnum);
	UClass* Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_NoRegister()
	{
		return UDEPRECATED_ChooserColumnEnum::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputValue_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InputValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RowValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RowValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "LiveLink" },
		{ "IncludePath", "EnumColumn.h" },
		{ "ModuleRelativePath", "Internal/EnumColumn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::NewProp_InputValue_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Internal/EnumColumn.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_ChooserColumnEnum, InputValue), Z_Construct_UClass_UChooserParameterEnum_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::NewProp_InputValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::NewProp_InputValue_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::NewProp_RowValues_Inner = { "RowValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChooserEnumRowData, METADATA_PARAMS(nullptr, 0) }; // 3516351167
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::NewProp_RowValues_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Internal/EnumColumn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::NewProp_RowValues = { "RowValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_ChooserColumnEnum, RowValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::NewProp_RowValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::NewProp_RowValues_MetaData)) }; // 3516351167
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::NewProp_InputValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::NewProp_RowValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::NewProp_RowValues,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UChooserColumn_NoRegister, (int32)VTABLE_OFFSET(UDEPRECATED_ChooserColumnEnum, IChooserColumn), false },  // 3629163162
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_ChooserColumnEnum>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::ClassParams = {
		&UDEPRECATED_ChooserColumnEnum::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnEnum.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnEnum.OuterSingleton, Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnEnum.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UDEPRECATED_ChooserColumnEnum>()
	{
		return UDEPRECATED_ChooserColumnEnum::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_ChooserColumnEnum);
	UDEPRECATED_ChooserColumnEnum::~UDEPRECATED_ChooserColumnEnum() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_EnumColumn_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_EnumColumn_h_Statics::EnumInfo[] = {
		{ EChooserEnumComparison_StaticEnum, TEXT("EChooserEnumComparison"), &Z_Registration_Info_UEnum_EChooserEnumComparison, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 261388209U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_EnumColumn_h_Statics::ScriptStructInfo[] = {
		{ FEnumContextProperty::StaticStruct, Z_Construct_UScriptStruct_FEnumContextProperty_Statics::NewStructOps, TEXT("EnumContextProperty"), &Z_Registration_Info_UScriptStruct_EnumContextProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnumContextProperty), 4213190676U) },
		{ FChooserEnumRowData::StaticStruct, Z_Construct_UScriptStruct_FChooserEnumRowData_Statics::NewStructOps, TEXT("ChooserEnumRowData"), &Z_Registration_Info_UScriptStruct_ChooserEnumRowData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserEnumRowData), 3516351167U) },
		{ FEnumColumn::StaticStruct, Z_Construct_UScriptStruct_FEnumColumn_Statics::NewStructOps, TEXT("EnumColumn"), &Z_Registration_Info_UScriptStruct_EnumColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEnumColumn), 569308067U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_EnumColumn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty, UDEPRECATED_ChooserParameterEnum_ContextProperty::StaticClass, TEXT("UDEPRECATED_ChooserParameterEnum_ContextProperty"), &Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterEnum_ContextProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_ChooserParameterEnum_ContextProperty), 2550995015U) },
		{ Z_Construct_UClass_UDEPRECATED_ChooserColumnEnum, UDEPRECATED_ChooserColumnEnum::StaticClass, TEXT("UDEPRECATED_ChooserColumnEnum"), &Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnEnum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_ChooserColumnEnum), 2765511276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_EnumColumn_h_476096004(TEXT("/Script/Chooser"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_EnumColumn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_EnumColumn_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_EnumColumn_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_EnumColumn_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_EnumColumn_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_EnumColumn_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
