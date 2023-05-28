// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PropertyBag.h"
#include "InstancedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyBag() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	STRUCTUTILS_API UClass* Z_Construct_UClass_UPropertyBag();
	STRUCTUTILS_API UClass* Z_Construct_UClass_UPropertyBag_NoRegister();
	STRUCTUTILS_API UClass* Z_Construct_UClass_UPropertyBagMissingObject();
	STRUCTUTILS_API UClass* Z_Construct_UClass_UPropertyBagMissingObject_NoRegister();
	STRUCTUTILS_API UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagContainerType();
	STRUCTUTILS_API UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum();
	STRUCTUTILS_API UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType();
	STRUCTUTILS_API UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagResult();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStruct();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyBagMissingStruct();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyBagPropertyDesc();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData();
	UPackage* Z_Construct_UPackage__Script_StructUtils();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyBagPropertyType;
	static UEnum* EPropertyBagPropertyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPropertyBagPropertyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPropertyBagPropertyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("EPropertyBagPropertyType"));
		}
		return Z_Registration_Info_UEnum_EPropertyBagPropertyType.OuterSingleton;
	}
	template<> STRUCTUTILS_API UEnum* StaticEnum<EPropertyBagPropertyType>()
	{
		return EPropertyBagPropertyType_StaticEnum();
	}
	struct Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType_Statics::Enumerators[] = {
		{ "EPropertyBagPropertyType::None", (int64)EPropertyBagPropertyType::None },
		{ "EPropertyBagPropertyType::Bool", (int64)EPropertyBagPropertyType::Bool },
		{ "EPropertyBagPropertyType::Byte", (int64)EPropertyBagPropertyType::Byte },
		{ "EPropertyBagPropertyType::Int32", (int64)EPropertyBagPropertyType::Int32 },
		{ "EPropertyBagPropertyType::Int64", (int64)EPropertyBagPropertyType::Int64 },
		{ "EPropertyBagPropertyType::Float", (int64)EPropertyBagPropertyType::Float },
		{ "EPropertyBagPropertyType::Double", (int64)EPropertyBagPropertyType::Double },
		{ "EPropertyBagPropertyType::Name", (int64)EPropertyBagPropertyType::Name },
		{ "EPropertyBagPropertyType::String", (int64)EPropertyBagPropertyType::String },
		{ "EPropertyBagPropertyType::Text", (int64)EPropertyBagPropertyType::Text },
		{ "EPropertyBagPropertyType::Enum", (int64)EPropertyBagPropertyType::Enum },
		{ "EPropertyBagPropertyType::Struct", (int64)EPropertyBagPropertyType::Struct },
		{ "EPropertyBagPropertyType::Object", (int64)EPropertyBagPropertyType::Object },
		{ "EPropertyBagPropertyType::SoftObject", (int64)EPropertyBagPropertyType::SoftObject },
		{ "EPropertyBagPropertyType::Class", (int64)EPropertyBagPropertyType::Class },
		{ "EPropertyBagPropertyType::SoftClass", (int64)EPropertyBagPropertyType::SoftClass },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType_Statics::Enum_MetaDataParams[] = {
		{ "Bool.Name", "EPropertyBagPropertyType::Bool" },
		{ "Byte.Name", "EPropertyBagPropertyType::Byte" },
		{ "Class.Hidden", "" },
		{ "Class.Name", "EPropertyBagPropertyType::Class" },
		{ "Comment", "/** Property bag property type, loosely based on BluePrint pin types. */" },
		{ "Double.Name", "EPropertyBagPropertyType::Double" },
		{ "Enum.Hidden", "" },
		{ "Enum.Name", "EPropertyBagPropertyType::Enum" },
		{ "Float.Name", "EPropertyBagPropertyType::Float" },
		{ "Int32.Name", "EPropertyBagPropertyType::Int32" },
		{ "Int64.Name", "EPropertyBagPropertyType::Int64" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "Name.Name", "EPropertyBagPropertyType::Name" },
		{ "None.Hidden", "" },
		{ "None.Name", "EPropertyBagPropertyType::None" },
		{ "Object.Hidden", "" },
		{ "Object.Name", "EPropertyBagPropertyType::Object" },
		{ "SoftClass.Hidden", "" },
		{ "SoftClass.Name", "EPropertyBagPropertyType::SoftClass" },
		{ "SoftObject.Hidden", "" },
		{ "SoftObject.Name", "EPropertyBagPropertyType::SoftObject" },
		{ "String.Name", "EPropertyBagPropertyType::String" },
		{ "Struct.Hidden", "" },
		{ "Struct.Name", "EPropertyBagPropertyType::Struct" },
		{ "Text.Name", "EPropertyBagPropertyType::Text" },
		{ "ToolTip", "Property bag property type, loosely based on BluePrint pin types." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StructUtils,
		nullptr,
		"EPropertyBagPropertyType",
		"EPropertyBagPropertyType",
		Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType()
	{
		if (!Z_Registration_Info_UEnum_EPropertyBagPropertyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyBagPropertyType.InnerSingleton, Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPropertyBagPropertyType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyBagContainerType;
	static UEnum* EPropertyBagContainerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPropertyBagContainerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPropertyBagContainerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StructUtils_EPropertyBagContainerType, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("EPropertyBagContainerType"));
		}
		return Z_Registration_Info_UEnum_EPropertyBagContainerType.OuterSingleton;
	}
	template<> STRUCTUTILS_API UEnum* StaticEnum<EPropertyBagContainerType>()
	{
		return EPropertyBagContainerType_StaticEnum();
	}
	struct Z_Construct_UEnum_StructUtils_EPropertyBagContainerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StructUtils_EPropertyBagContainerType_Statics::Enumerators[] = {
		{ "EPropertyBagContainerType::None", (int64)EPropertyBagContainerType::None },
		{ "EPropertyBagContainerType::Array", (int64)EPropertyBagContainerType::Array },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StructUtils_EPropertyBagContainerType_Statics::Enum_MetaDataParams[] = {
		{ "Array.Name", "EPropertyBagContainerType::Array" },
		{ "Comment", "/** Property bag property container type. */" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EPropertyBagContainerType::None" },
		{ "ToolTip", "Property bag property container type." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StructUtils_EPropertyBagContainerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StructUtils,
		nullptr,
		"EPropertyBagContainerType",
		"EPropertyBagContainerType",
		Z_Construct_UEnum_StructUtils_EPropertyBagContainerType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtils_EPropertyBagContainerType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StructUtils_EPropertyBagContainerType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtils_EPropertyBagContainerType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagContainerType()
	{
		if (!Z_Registration_Info_UEnum_EPropertyBagContainerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyBagContainerType.InnerSingleton, Z_Construct_UEnum_StructUtils_EPropertyBagContainerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPropertyBagContainerType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyBagResult;
	static UEnum* EPropertyBagResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPropertyBagResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPropertyBagResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StructUtils_EPropertyBagResult, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("EPropertyBagResult"));
		}
		return Z_Registration_Info_UEnum_EPropertyBagResult.OuterSingleton;
	}
	template<> STRUCTUTILS_API UEnum* StaticEnum<EPropertyBagResult>()
	{
		return EPropertyBagResult_StaticEnum();
	}
	struct Z_Construct_UEnum_StructUtils_EPropertyBagResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StructUtils_EPropertyBagResult_Statics::Enumerators[] = {
		{ "EPropertyBagResult::Success", (int64)EPropertyBagResult::Success },
		{ "EPropertyBagResult::TypeMismatch", (int64)EPropertyBagResult::TypeMismatch },
		{ "EPropertyBagResult::OutOfBounds", (int64)EPropertyBagResult::OutOfBounds },
		{ "EPropertyBagResult::PropertyNotFound", (int64)EPropertyBagResult::PropertyNotFound },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StructUtils_EPropertyBagResult_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Getter and setter result code. */" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "OutOfBounds.Comment", "// Tried to access mismatching type (e.g. setting a struct to bool)\n" },
		{ "OutOfBounds.Name", "EPropertyBagResult::OutOfBounds" },
		{ "OutOfBounds.ToolTip", "Tried to access mismatching type (e.g. setting a struct to bool)" },
		{ "PropertyNotFound.Comment", "// Tried to access an array property out of bounds.\n" },
		{ "PropertyNotFound.Name", "EPropertyBagResult::PropertyNotFound" },
		{ "PropertyNotFound.ToolTip", "Tried to access an array property out of bounds." },
		{ "Success.Name", "EPropertyBagResult::Success" },
		{ "ToolTip", "Getter and setter result code." },
		{ "TypeMismatch.Comment", "// Operation succeeded.\n" },
		{ "TypeMismatch.Name", "EPropertyBagResult::TypeMismatch" },
		{ "TypeMismatch.ToolTip", "Operation succeeded." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StructUtils_EPropertyBagResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StructUtils,
		nullptr,
		"EPropertyBagResult",
		"EPropertyBagResult",
		Z_Construct_UEnum_StructUtils_EPropertyBagResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtils_EPropertyBagResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StructUtils_EPropertyBagResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtils_EPropertyBagResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagResult()
	{
		if (!Z_Registration_Info_UEnum_EPropertyBagResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyBagResult.InnerSingleton, Z_Construct_UEnum_StructUtils_EPropertyBagResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPropertyBagResult.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyBagPropertyDescMetaData;
class UScriptStruct* FPropertyBagPropertyDescMetaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyBagPropertyDescMetaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyBagPropertyDescMetaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("PropertyBagPropertyDescMetaData"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyBagPropertyDescMetaData.OuterSingleton;
}
template<> STRUCTUTILS_API UScriptStruct* StaticStruct<FPropertyBagPropertyDescMetaData>()
{
	return FPropertyBagPropertyDescMetaData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyBagPropertyDescMetaData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyBagPropertyDescMetaData, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::NewProp_Value_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyBagPropertyDescMetaData, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtils,
		nullptr,
		&NewStructOps,
		"PropertyBagPropertyDescMetaData",
		sizeof(FPropertyBagPropertyDescMetaData),
		alignof(FPropertyBagPropertyDescMetaData),
		Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyBagPropertyDescMetaData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyBagPropertyDescMetaData.InnerSingleton, Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyBagPropertyDescMetaData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyBagPropertyDesc;
class UScriptStruct* FPropertyBagPropertyDesc::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyBagPropertyDesc.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyBagPropertyDesc.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("PropertyBagPropertyDesc"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyBagPropertyDesc.OuterSingleton;
}
template<> STRUCTUTILS_API UScriptStruct* StaticStruct<FPropertyBagPropertyDesc>()
{
	return FPropertyBagPropertyDesc::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueTypeObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ValueTypeObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ValueType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValueType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ValueType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContainerType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContainerType;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetaData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MetaData;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Describes a property in the property bag. */" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "ToolTip", "Describes a property in the property bag." },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyBagPropertyDesc>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ValueTypeObject_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Pointer to object that defines the Enum, Struct, or Class. */" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Pointer to object that defines the Enum, Struct, or Class." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ValueTypeObject = { "ValueTypeObject", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyBagPropertyDesc, ValueTypeObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ValueTypeObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ValueTypeObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Unique ID for this property. Used as main identifier when copying values over. */" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "ToolTip", "Unique ID for this property. Used as main identifier when copying values over." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyBagPropertyDesc, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Name for the property. */" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "ToolTip", "Name for the property." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyBagPropertyDesc, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ValueType_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Type of the value described by this property. */" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "ToolTip", "Type of the value described by this property." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ValueType = { "ValueType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyBagPropertyDesc, ValueType), Z_Construct_UEnum_StructUtils_EPropertyBagPropertyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ValueType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ValueType_MetaData)) }; // 1540223021
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ContainerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ContainerType_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Type of the container described by this property. */" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "ToolTip", "Type of the container described by this property." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ContainerType = { "ContainerType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyBagPropertyDesc, ContainerType), Z_Construct_UEnum_StructUtils_EPropertyBagContainerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ContainerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ContainerType_MetaData)) }; // 138748572
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_MetaData_Inner = { "MetaData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData, METADATA_PARAMS(nullptr, 0) }; // 196359933
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_MetaData_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Editor-only meta data for CachedProperty */" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "ToolTip", "Editor-only meta data for CachedProperty" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPropertyBagPropertyDesc, MetaData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_MetaData_MetaData)) }; // 196359933
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ValueTypeObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ValueType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ValueType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ContainerType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_ContainerType,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_MetaData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewProp_MetaData,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtils,
		nullptr,
		&NewStructOps,
		"PropertyBagPropertyDesc",
		sizeof(FPropertyBagPropertyDesc),
		alignof(FPropertyBagPropertyDesc),
		Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyBagPropertyDesc()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyBagPropertyDesc.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyBagPropertyDesc.InnerSingleton, Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyBagPropertyDesc.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedPropertyBag;
class UScriptStruct* FInstancedPropertyBag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedPropertyBag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedPropertyBag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedPropertyBag, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("InstancedPropertyBag"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedPropertyBag.OuterSingleton;
}
template<> STRUCTUTILS_API UScriptStruct* StaticStruct<FInstancedPropertyBag>()
{
	return FInstancedPropertyBag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedPropertyBag>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInstancedPropertyBag, Value), Z_Construct_UScriptStruct_FInstancedStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::NewProp_Value_MetaData)) }; // 3026308664
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtils,
		nullptr,
		&NewStructOps,
		"InstancedPropertyBag",
		sizeof(FInstancedPropertyBag),
		alignof(FInstancedPropertyBag),
		Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstancedPropertyBag()
	{
		if (!Z_Registration_Info_UScriptStruct_InstancedPropertyBag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedPropertyBag.InnerSingleton, Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InstancedPropertyBag.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyBagMissingEnum;
	static UEnum* EPropertyBagMissingEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPropertyBagMissingEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPropertyBagMissingEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("EPropertyBagMissingEnum"));
		}
		return Z_Registration_Info_UEnum_EPropertyBagMissingEnum.OuterSingleton;
	}
	template<> STRUCTUTILS_API UEnum* StaticEnum<EPropertyBagMissingEnum>()
	{
		return EPropertyBagMissingEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum_Statics::Enumerators[] = {
		{ "EPropertyBagMissingEnum::Missing", (int64)EPropertyBagMissingEnum::Missing },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Dummy types used to mark up missing types when creating property bags. These are used in the UI to display error message.\n */" },
		{ "Missing.Name", "EPropertyBagMissingEnum::Missing" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "ToolTip", "Dummy types used to mark up missing types when creating property bags. These are used in the UI to display error message." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_StructUtils,
		nullptr,
		"EPropertyBagMissingEnum",
		"EPropertyBagMissingEnum",
		Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum()
	{
		if (!Z_Registration_Info_UEnum_EPropertyBagMissingEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyBagMissingEnum.InnerSingleton, Z_Construct_UEnum_StructUtils_EPropertyBagMissingEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPropertyBagMissingEnum.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropertyBagMissingStruct;
class UScriptStruct* FPropertyBagMissingStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropertyBagMissingStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropertyBagMissingStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropertyBagMissingStruct, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("PropertyBagMissingStruct"));
	}
	return Z_Registration_Info_UScriptStruct_PropertyBagMissingStruct.OuterSingleton;
}
template<> STRUCTUTILS_API UScriptStruct* StaticStruct<FPropertyBagMissingStruct>()
{
	return FPropertyBagMissingStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPropertyBagMissingStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPropertyBagMissingStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPropertyBagMissingStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropertyBagMissingStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropertyBagMissingStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtils,
		nullptr,
		&NewStructOps,
		"PropertyBagMissingStruct",
		sizeof(FPropertyBagMissingStruct),
		alignof(FPropertyBagMissingStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPropertyBagMissingStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropertyBagMissingStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPropertyBagMissingStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_PropertyBagMissingStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropertyBagMissingStruct.InnerSingleton, Z_Construct_UScriptStruct_FPropertyBagMissingStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PropertyBagMissingStruct.InnerSingleton;
	}
	void UPropertyBagMissingObject::StaticRegisterNativesUPropertyBagMissingObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyBagMissingObject);
	UClass* Z_Construct_UClass_UPropertyBagMissingObject_NoRegister()
	{
		return UPropertyBagMissingObject::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyBagMissingObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyBagMissingObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtils,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyBagMissingObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PropertyBag.h" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyBagMissingObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyBagMissingObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyBagMissingObject_Statics::ClassParams = {
		&UPropertyBagMissingObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyBagMissingObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBagMissingObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyBagMissingObject()
	{
		if (!Z_Registration_Info_UClass_UPropertyBagMissingObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyBagMissingObject.OuterSingleton, Z_Construct_UClass_UPropertyBagMissingObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertyBagMissingObject.OuterSingleton;
	}
	template<> STRUCTUTILS_API UClass* StaticClass<UPropertyBagMissingObject>()
	{
		return UPropertyBagMissingObject::StaticClass();
	}
	UPropertyBagMissingObject::UPropertyBagMissingObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyBagMissingObject);
	UPropertyBagMissingObject::~UPropertyBagMissingObject() {}
	void UPropertyBag::StaticRegisterNativesUPropertyBag()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyBag);
	UClass* Z_Construct_UClass_UPropertyBag_NoRegister()
	{
		return UPropertyBag::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyBag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyDescs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyDescs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyDescs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyBag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScriptStruct,
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtils,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyBag_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A script struct that is used to store the value of the property bag instance.\n * References to UPropertyBag cannot be serialized, instead the array of the properties\n * is serialized and new class is create on load based on the composition of the properties.\n *\n * Note: Should not be used directly.\n */" },
		{ "IncludePath", "PropertyBag.h" },
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
		{ "ToolTip", "A script struct that is used to store the value of the property bag instance.\nReferences to UPropertyBag cannot be serialized, instead the array of the properties\nis serialized and new class is create on load based on the composition of the properties.\n\nNote: Should not be used directly." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyBag_Statics::NewProp_PropertyDescs_Inner = { "PropertyDescs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPropertyBagPropertyDesc, METADATA_PARAMS(nullptr, 0) }; // 2772284791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyBag_Statics::NewProp_PropertyDescs_MetaData[] = {
		{ "ModuleRelativePath", "Public/PropertyBag.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPropertyBag_Statics::NewProp_PropertyDescs = { "PropertyDescs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyBag, PropertyDescs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPropertyBag_Statics::NewProp_PropertyDescs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBag_Statics::NewProp_PropertyDescs_MetaData)) }; // 2772284791
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertyBag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyBag_Statics::NewProp_PropertyDescs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyBag_Statics::NewProp_PropertyDescs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyBag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyBag>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyBag_Statics::ClassParams = {
		&UPropertyBag::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPropertyBag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBag_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyBag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyBag()
	{
		if (!Z_Registration_Info_UClass_UPropertyBag.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyBag.OuterSingleton, Z_Construct_UClass_UPropertyBag_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertyBag.OuterSingleton;
	}
	template<> STRUCTUTILS_API UClass* StaticClass<UPropertyBag>()
	{
		return UPropertyBag::StaticClass();
	}
	UPropertyBag::UPropertyBag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyBag);
	UPropertyBag::~UPropertyBag() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_PropertyBag_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_PropertyBag_h_Statics::EnumInfo[] = {
		{ EPropertyBagPropertyType_StaticEnum, TEXT("EPropertyBagPropertyType"), &Z_Registration_Info_UEnum_EPropertyBagPropertyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1540223021U) },
		{ EPropertyBagContainerType_StaticEnum, TEXT("EPropertyBagContainerType"), &Z_Registration_Info_UEnum_EPropertyBagContainerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 138748572U) },
		{ EPropertyBagResult_StaticEnum, TEXT("EPropertyBagResult"), &Z_Registration_Info_UEnum_EPropertyBagResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 829027967U) },
		{ EPropertyBagMissingEnum_StaticEnum, TEXT("EPropertyBagMissingEnum"), &Z_Registration_Info_UEnum_EPropertyBagMissingEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1457328431U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_PropertyBag_h_Statics::ScriptStructInfo[] = {
		{ FPropertyBagPropertyDescMetaData::StaticStruct, Z_Construct_UScriptStruct_FPropertyBagPropertyDescMetaData_Statics::NewStructOps, TEXT("PropertyBagPropertyDescMetaData"), &Z_Registration_Info_UScriptStruct_PropertyBagPropertyDescMetaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyBagPropertyDescMetaData), 196359933U) },
		{ FPropertyBagPropertyDesc::StaticStruct, Z_Construct_UScriptStruct_FPropertyBagPropertyDesc_Statics::NewStructOps, TEXT("PropertyBagPropertyDesc"), &Z_Registration_Info_UScriptStruct_PropertyBagPropertyDesc, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyBagPropertyDesc), 2772284791U) },
		{ FInstancedPropertyBag::StaticStruct, Z_Construct_UScriptStruct_FInstancedPropertyBag_Statics::NewStructOps, TEXT("InstancedPropertyBag"), &Z_Registration_Info_UScriptStruct_InstancedPropertyBag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedPropertyBag), 3551882691U) },
		{ FPropertyBagMissingStruct::StaticStruct, Z_Construct_UScriptStruct_FPropertyBagMissingStruct_Statics::NewStructOps, TEXT("PropertyBagMissingStruct"), &Z_Registration_Info_UScriptStruct_PropertyBagMissingStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropertyBagMissingStruct), 3815227086U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_PropertyBag_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPropertyBagMissingObject, UPropertyBagMissingObject::StaticClass, TEXT("UPropertyBagMissingObject"), &Z_Registration_Info_UClass_UPropertyBagMissingObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyBagMissingObject), 3517982673U) },
		{ Z_Construct_UClass_UPropertyBag, UPropertyBag::StaticClass, TEXT("UPropertyBag"), &Z_Registration_Info_UClass_UPropertyBag, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyBag), 2738331564U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_PropertyBag_h_649445337(TEXT("/Script/StructUtils"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_PropertyBag_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_PropertyBag_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_PropertyBag_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_PropertyBag_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_PropertyBag_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_PropertyBag_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
