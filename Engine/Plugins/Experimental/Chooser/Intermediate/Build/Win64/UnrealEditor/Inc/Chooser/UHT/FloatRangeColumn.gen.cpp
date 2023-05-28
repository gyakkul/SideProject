// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/FloatRangeColumn.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatRangeColumn() {}
// Cross Module References
	CHOOSER_API UClass* Z_Construct_UClass_UChooserColumn_NoRegister();
	CHOOSER_API UClass* Z_Construct_UClass_UChooserParameterFloat_NoRegister();
	CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange();
	CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_NoRegister();
	CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty();
	CHOOSER_API UClass* Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_NoRegister();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserColumnBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserFloatRangeRowData();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FChooserParameterFloatBase();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FFloatContextProperty();
	CHOOSER_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRangeColumn();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	UPackage* Z_Construct_UPackage__Script_Chooser();
// End Cross Module References

static_assert(std::is_polymorphic<FFloatContextProperty>() == std::is_polymorphic<FChooserParameterFloatBase>(), "USTRUCT FFloatContextProperty cannot be polymorphic unless super FChooserParameterFloatBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatContextProperty;
class UScriptStruct* FFloatContextProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatContextProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatContextProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatContextProperty, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("FloatContextProperty"));
	}
	return Z_Registration_Info_UScriptStruct_FloatContextProperty.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FFloatContextProperty>()
{
	return FFloatContextProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFloatContextProperty_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatContextProperty_Statics::Struct_MetaDataParams[] = {
		{ "DisplayName", "Float Property Binding" },
		{ "ModuleRelativePath", "Internal/FloatRangeColumn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloatContextProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatContextProperty>();
	}
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFloatContextProperty_Statics::NewProp_PropertyBindingChain_Inner = { "PropertyBindingChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatContextProperty_Statics::NewProp_PropertyBindingChain_MetaData[] = {
		{ "ModuleRelativePath", "Internal/FloatRangeColumn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFloatContextProperty_Statics::NewProp_PropertyBindingChain = { "PropertyBindingChain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFloatContextProperty, PropertyBindingChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatContextProperty_Statics::NewProp_PropertyBindingChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatContextProperty_Statics::NewProp_PropertyBindingChain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatContextProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatContextProperty_Statics::NewProp_PropertyBindingChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatContextProperty_Statics::NewProp_PropertyBindingChain,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatContextProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserParameterFloatBase,
		&NewStructOps,
		"FloatContextProperty",
		sizeof(FFloatContextProperty),
		alignof(FFloatContextProperty),
		Z_Construct_UScriptStruct_FFloatContextProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatContextProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatContextProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatContextProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFloatContextProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_FloatContextProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatContextProperty.InnerSingleton, Z_Construct_UScriptStruct_FFloatContextProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FloatContextProperty.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChooserFloatRangeRowData;
class UScriptStruct* FChooserFloatRangeRowData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChooserFloatRangeRowData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChooserFloatRangeRowData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChooserFloatRangeRowData, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("ChooserFloatRangeRowData"));
	}
	return Z_Registration_Info_UScriptStruct_ChooserFloatRangeRowData.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FChooserFloatRangeRowData>()
{
	return FChooserFloatRangeRowData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/FloatRangeColumn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChooserFloatRangeRowData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Internal/FloatRangeColumn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChooserFloatRangeRowData, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "Runtime" },
		{ "ModuleRelativePath", "Internal/FloatRangeColumn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChooserFloatRangeRowData, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::NewProp_Max_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::NewProp_Max,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		nullptr,
		&NewStructOps,
		"ChooserFloatRangeRowData",
		sizeof(FChooserFloatRangeRowData),
		alignof(FChooserFloatRangeRowData),
		Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChooserFloatRangeRowData()
	{
		if (!Z_Registration_Info_UScriptStruct_ChooserFloatRangeRowData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChooserFloatRangeRowData.InnerSingleton, Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChooserFloatRangeRowData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FFloatRangeColumn>() == std::is_polymorphic<FChooserColumnBase>(), "USTRUCT FFloatRangeColumn cannot be polymorphic unless super FChooserColumnBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FloatRangeColumn;
class UScriptStruct* FFloatRangeColumn::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FloatRangeColumn.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FloatRangeColumn.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloatRangeColumn, (UObject*)Z_Construct_UPackage__Script_Chooser(), TEXT("FloatRangeColumn"));
	}
	return Z_Registration_Info_UScriptStruct_FloatRangeColumn.OuterSingleton;
}
template<> CHOOSER_API UScriptStruct* StaticStruct<FFloatRangeColumn>()
{
	return FFloatRangeColumn::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFloatRangeColumn_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Internal/FloatRangeColumn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloatRangeColumn>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::NewProp_InputValue_MetaData[] = {
		{ "BaseStruct", "/Script/Chooser.ChooserParameterFloatBase" },
		{ "Category", "Hidden" },
		{ "ExcludeBaseStruct", "" },
		{ "ModuleRelativePath", "Internal/FloatRangeColumn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFloatRangeColumn, InputValue), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::NewProp_InputValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::NewProp_InputValue_MetaData)) }; // 3026308664
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::NewProp_RowValues_Inner = { "RowValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChooserFloatRangeRowData, METADATA_PARAMS(nullptr, 0) }; // 1084596962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::NewProp_RowValues_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "// array of results (cells for this column for each row in the table)\n// should match the length of the Results array \n" },
		{ "ModuleRelativePath", "Internal/FloatRangeColumn.h" },
		{ "ToolTip", "array of results (cells for this column for each row in the table)\nshould match the length of the Results array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::NewProp_RowValues = { "RowValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFloatRangeColumn, RowValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::NewProp_RowValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::NewProp_RowValues_MetaData)) }; // 1084596962
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::NewProp_InputValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::NewProp_RowValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::NewProp_RowValues,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
		Z_Construct_UScriptStruct_FChooserColumnBase,
		&NewStructOps,
		"FloatRangeColumn",
		sizeof(FFloatRangeColumn),
		alignof(FFloatRangeColumn),
		Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFloatRangeColumn()
	{
		if (!Z_Registration_Info_UScriptStruct_FloatRangeColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FloatRangeColumn.InnerSingleton, Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FloatRangeColumn.InnerSingleton;
	}
	void UDEPRECATED_ChooserParameterFloat_ContextProperty::StaticRegisterNativesUDEPRECATED_ChooserParameterFloat_ContextProperty()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_ChooserParameterFloat_ContextProperty);
	UClass* Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_NoRegister()
	{
		return UDEPRECATED_ChooserParameterFloat_ContextProperty::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_Statics
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
	UObject* (*const Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "LiveLink" },
		{ "Comment", "// deprecated class version to support upgrading old data\n" },
		{ "IncludePath", "FloatRangeColumn.h" },
		{ "ModuleRelativePath", "Internal/FloatRangeColumn.h" },
		{ "ToolTip", "deprecated class version to support upgrading old data" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_Statics::NewProp_PropertyBindingChain_Inner = { "PropertyBindingChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_Statics::NewProp_PropertyBindingChain_MetaData[] = {
		{ "ModuleRelativePath", "Internal/FloatRangeColumn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_Statics::NewProp_PropertyBindingChain = { "PropertyBindingChain", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_ChooserParameterFloat_ContextProperty, PropertyBindingChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_Statics::NewProp_PropertyBindingChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_Statics::NewProp_PropertyBindingChain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_Statics::NewProp_PropertyBindingChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_Statics::NewProp_PropertyBindingChain,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UChooserParameterFloat_NoRegister, (int32)VTABLE_OFFSET(UDEPRECATED_ChooserParameterFloat_ContextProperty, IChooserParameterFloat), false },  // 2719545512
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_ChooserParameterFloat_ContextProperty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_Statics::ClassParams = {
		&UDEPRECATED_ChooserParameterFloat_ContextProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty.OuterSingleton, Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UDEPRECATED_ChooserParameterFloat_ContextProperty>()
	{
		return UDEPRECATED_ChooserParameterFloat_ContextProperty::StaticClass();
	}
	UDEPRECATED_ChooserParameterFloat_ContextProperty::UDEPRECATED_ChooserParameterFloat_ContextProperty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_ChooserParameterFloat_ContextProperty);
	UDEPRECATED_ChooserParameterFloat_ContextProperty::~UDEPRECATED_ChooserParameterFloat_ContextProperty() {}
	void UDEPRECATED_ChooserColumnFloatRange::StaticRegisterNativesUDEPRECATED_ChooserColumnFloatRange()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_ChooserColumnFloatRange);
	UClass* Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_NoRegister()
	{
		return UDEPRECATED_ChooserColumnFloatRange::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics
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
	UObject* (*const Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Chooser,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "LiveLink" },
		{ "IncludePath", "FloatRangeColumn.h" },
		{ "ModuleRelativePath", "Internal/FloatRangeColumn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::NewProp_InputValue_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Internal/FloatRangeColumn.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::NewProp_InputValue = { "InputValue", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_ChooserColumnFloatRange, InputValue), Z_Construct_UClass_UChooserParameterFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::NewProp_InputValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::NewProp_InputValue_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::NewProp_RowValues_Inner = { "RowValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FChooserFloatRangeRowData, METADATA_PARAMS(nullptr, 0) }; // 1084596962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::NewProp_RowValues_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "// array of results (cells for this column for each row in the table)\n// should match the length of the Results array \n" },
		{ "ModuleRelativePath", "Internal/FloatRangeColumn.h" },
		{ "ToolTip", "array of results (cells for this column for each row in the table)\nshould match the length of the Results array" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::NewProp_RowValues = { "RowValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_ChooserColumnFloatRange, RowValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::NewProp_RowValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::NewProp_RowValues_MetaData)) }; // 1084596962
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::NewProp_InputValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::NewProp_RowValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::NewProp_RowValues,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UChooserColumn_NoRegister, (int32)VTABLE_OFFSET(UDEPRECATED_ChooserColumnFloatRange, IChooserColumn), false },  // 3629163162
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_ChooserColumnFloatRange>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::ClassParams = {
		&UDEPRECATED_ChooserColumnFloatRange::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnFloatRange.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnFloatRange.OuterSingleton, Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnFloatRange.OuterSingleton;
	}
	template<> CHOOSER_API UClass* StaticClass<UDEPRECATED_ChooserColumnFloatRange>()
	{
		return UDEPRECATED_ChooserColumnFloatRange::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_ChooserColumnFloatRange);
	UDEPRECATED_ChooserColumnFloatRange::~UDEPRECATED_ChooserColumnFloatRange() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_FloatRangeColumn_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_FloatRangeColumn_h_Statics::ScriptStructInfo[] = {
		{ FFloatContextProperty::StaticStruct, Z_Construct_UScriptStruct_FFloatContextProperty_Statics::NewStructOps, TEXT("FloatContextProperty"), &Z_Registration_Info_UScriptStruct_FloatContextProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatContextProperty), 3118688628U) },
		{ FChooserFloatRangeRowData::StaticStruct, Z_Construct_UScriptStruct_FChooserFloatRangeRowData_Statics::NewStructOps, TEXT("ChooserFloatRangeRowData"), &Z_Registration_Info_UScriptStruct_ChooserFloatRangeRowData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChooserFloatRangeRowData), 1084596962U) },
		{ FFloatRangeColumn::StaticStruct, Z_Construct_UScriptStruct_FFloatRangeColumn_Statics::NewStructOps, TEXT("FloatRangeColumn"), &Z_Registration_Info_UScriptStruct_FloatRangeColumn, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFloatRangeColumn), 639210995U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_FloatRangeColumn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty, UDEPRECATED_ChooserParameterFloat_ContextProperty::StaticClass, TEXT("UDEPRECATED_ChooserParameterFloat_ContextProperty"), &Z_Registration_Info_UClass_UDEPRECATED_ChooserParameterFloat_ContextProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_ChooserParameterFloat_ContextProperty), 2094300296U) },
		{ Z_Construct_UClass_UDEPRECATED_ChooserColumnFloatRange, UDEPRECATED_ChooserColumnFloatRange::StaticClass, TEXT("UDEPRECATED_ChooserColumnFloatRange"), &Z_Registration_Info_UClass_UDEPRECATED_ChooserColumnFloatRange, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_ChooserColumnFloatRange), 2439129755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_FloatRangeColumn_h_1179159537(TEXT("/Script/Chooser"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_FloatRangeColumn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_FloatRangeColumn_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_FloatRangeColumn_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Chooser_Source_Chooser_Internal_FloatRangeColumn_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
