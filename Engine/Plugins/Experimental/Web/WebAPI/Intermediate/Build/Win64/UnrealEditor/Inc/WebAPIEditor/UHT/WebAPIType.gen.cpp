// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dom/WebAPIType.h"
#include "Dom/WebAPISchema.h"
#include "Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIType() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	UPackage* Z_Construct_UPackage__Script_WebAPIEditor();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIModelBase_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPITypeInfo();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPITypeInfo_NoRegister();
	WEBAPIEDITOR_API UEnum* Z_Construct_UEnum_WebAPIEditor_EWebAPISchemaType();
	WEBAPIEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPITypeNameVariant();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWebAPISchemaType;
	static UEnum* EWebAPISchemaType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWebAPISchemaType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWebAPISchemaType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WebAPIEditor_EWebAPISchemaType, (UObject*)Z_Construct_UPackage__Script_WebAPIEditor(), TEXT("EWebAPISchemaType"));
		}
		return Z_Registration_Info_UEnum_EWebAPISchemaType.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UEnum* StaticEnum<EWebAPISchemaType>()
	{
		return EWebAPISchemaType_StaticEnum();
	}
	struct Z_Construct_UEnum_WebAPIEditor_EWebAPISchemaType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WebAPIEditor_EWebAPISchemaType_Statics::Enumerators[] = {
		{ "EWebAPISchemaType::Model", (int64)EWebAPISchemaType::Model },
		{ "EWebAPISchemaType::Service", (int64)EWebAPISchemaType::Service },
		{ "EWebAPISchemaType::Operation", (int64)EWebAPISchemaType::Operation },
		{ "EWebAPISchemaType::Property", (int64)EWebAPISchemaType::Property },
		{ "EWebAPISchemaType::Parameter", (int64)EWebAPISchemaType::Parameter },
		{ "EWebAPISchemaType::Unspecified", (int64)EWebAPISchemaType::Unspecified },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WebAPIEditor_EWebAPISchemaType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Schema type allows same name but different Schema types, ie. both a service and model with the name \"Pet\". */" },
		{ "Model.Name", "EWebAPISchemaType::Model" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "Operation.Name", "EWebAPISchemaType::Operation" },
		{ "Parameter.Name", "EWebAPISchemaType::Parameter" },
		{ "Property.Comment", "// All items before this are considered top-level, all below are sub-items\n" },
		{ "Property.Name", "EWebAPISchemaType::Property" },
		{ "Property.ToolTip", "All items before this are considered top-level, all below are sub-items" },
		{ "Service.Name", "EWebAPISchemaType::Service" },
		{ "ToolTip", "Schema type allows same name but different Schema types, ie. both a service and model with the name \"Pet\"." },
		{ "Unspecified.Name", "EWebAPISchemaType::Unspecified" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WebAPIEditor_EWebAPISchemaType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WebAPIEditor,
		nullptr,
		"EWebAPISchemaType",
		"EWebAPISchemaType",
		Z_Construct_UEnum_WebAPIEditor_EWebAPISchemaType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WebAPIEditor_EWebAPISchemaType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WebAPIEditor_EWebAPISchemaType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WebAPIEditor_EWebAPISchemaType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WebAPIEditor_EWebAPISchemaType()
	{
		if (!Z_Registration_Info_UEnum_EWebAPISchemaType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWebAPISchemaType.InnerSingleton, Z_Construct_UEnum_WebAPIEditor_EWebAPISchemaType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWebAPISchemaType.InnerSingleton;
	}
	void UWebAPITypeInfo::StaticRegisterNativesUWebAPITypeInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPITypeInfo);
	UClass* Z_Construct_UClass_UWebAPITypeInfo_NoRegister()
	{
		return UWebAPITypeInfo::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPITypeInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SchemaType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SchemaType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SchemaType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsNested_MetaData[];
#endif
		static void NewProp_bIsNested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsNested;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainingType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ContainingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_JsonType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonPropertyToSerialize_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonPropertyToSerialize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrintFormatSpecifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrintFormatSpecifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrintFormatExpression_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PrintFormatExpression;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Namespace_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Namespace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeclarationType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DeclarationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBuiltinType_MetaData[];
#endif
		static void NewProp_bIsBuiltinType_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBuiltinType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Model;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Modules_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modules_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Modules;
		static const UECodeGen_Private::FStrPropertyParams NewProp_IncludePaths_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludePaths_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_IncludePaths;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DebugString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPITypeInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Holds information for an existing or pending type. */" },
		{ "IncludePath", "Dom/WebAPIType.h" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "Holds information for an existing or pending type." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Type Name without prefix or namespace, ie. \"Vector\", not \"FVector\". */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "Type Name without prefix or namespace, ie. \"Vector\", not \"FVector\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeInfo, Name), METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Optional display name, different to the actual name, ie. \"JsonObject\" vs. \"JsonObjectWrapper\". */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "Optional display name, different to the actual name, ie. \"JsonObject\" vs. \"JsonObjectWrapper\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeInfo, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DisplayName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_SchemaType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_SchemaType_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** SchemaType to discern between ie. a Service and a Model with the same name. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "SchemaType to discern between ie. a Service and a Model with the same name." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_SchemaType = { "SchemaType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeInfo, SchemaType), Z_Construct_UEnum_WebAPIEditor_EWebAPISchemaType, METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_SchemaType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_SchemaType_MetaData)) }; // 1663964158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_bIsNested_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Flag specifying whether this type is used exclusively by a parent type (isn't shared). */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "Flag specifying whether this type is used exclusively by a parent type (isn't shared)." },
	};
#endif
	void Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_bIsNested_SetBit(void* Obj)
	{
		((UWebAPITypeInfo*)Obj)->bIsNested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_bIsNested = { "bIsNested", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPITypeInfo), &Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_bIsNested_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_bIsNested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_bIsNested_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_ContainingType_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** When the type is nested, this specifies who \"owns\" it. */" },
		{ "EditCondition", "bIsNested" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "When the type is nested, this specifies who \"owns\" it." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_ContainingType = { "ContainingType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeInfo, ContainingType), Z_Construct_UScriptStruct_FWebAPITypeNameVariant, METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_ContainingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_ContainingType_MetaData)) }; // 4040585277
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_JsonName_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Field name as sent to and received from the external API. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "Field name as sent to and received from the external API." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_JsonName = { "JsonName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeInfo, JsonName), METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_JsonName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_JsonName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_JsonType_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Json type. Should correspond with values in EJson. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "Json type. Should correspond with values in EJson." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_JsonType = { "JsonType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeInfo, JsonType), METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_JsonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_JsonType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_JsonPropertyToSerialize_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Optional sub-property to serialize, instead of the object itself. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "Optional sub-property to serialize, instead of the object itself." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_JsonPropertyToSerialize = { "JsonPropertyToSerialize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeInfo, JsonPropertyToSerialize), METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_JsonPropertyToSerialize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_JsonPropertyToSerialize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_PrintFormatSpecifier_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Optional specifier for printf, ie. \"s\", \"d\". */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "Optional specifier for printf, ie. \"s\", \"d\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_PrintFormatSpecifier = { "PrintFormatSpecifier", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeInfo, PrintFormatSpecifier), METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_PrintFormatSpecifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_PrintFormatSpecifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_PrintFormatExpression_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Optional tokenized string expression to get the value for printf, ie. ToString({Property}) */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "Optional tokenized string expression to get the value for printf, ie. ToString({Property})" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_PrintFormatExpression = { "PrintFormatExpression", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeInfo, PrintFormatExpression), METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_PrintFormatExpression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_PrintFormatExpression_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Namespace_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Type Namespace, can be empty for built-in types. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "Type Namespace, can be empty for built-in types." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Namespace = { "Namespace", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeInfo, Namespace), METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Namespace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Namespace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Prefix_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Type Prefix, usually \"F\", \"U\", \"A\", or \"E\". */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "Type Prefix, usually \"F\", \"U\", \"A\", or \"E\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeInfo, Prefix), METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Prefix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Suffix_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Optional suffix, ie. \"Parameter\", \"Item\", etc. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "Optional suffix, ie. \"Parameter\", \"Item\", etc." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeInfo, Suffix), METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DeclarationType_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Declaration type, ie. struct, enum. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "Declaration type, ie. struct, enum." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DeclarationType = { "DeclarationType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeInfo, DeclarationType), METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DeclarationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DeclarationType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_bIsBuiltinType_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** If this is false, the type is to be generated and should have a namespace. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "If this is false, the type is to be generated and should have a namespace." },
	};
#endif
	void Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_bIsBuiltinType_SetBit(void* Obj)
	{
		((UWebAPITypeInfo*)Obj)->bIsBuiltinType = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_bIsBuiltinType = { "bIsBuiltinType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPITypeInfo), &Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_bIsBuiltinType_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_bIsBuiltinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_bIsBuiltinType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Default value as a string, if applicable. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "Default value as a string, if applicable." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeInfo, DefaultValue), METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DefaultValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Model_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Associated model, if any. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "Associated model, if any." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeInfo, Model), Z_Construct_UClass_UWebAPIModelBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Model_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Modules_ElementProp = { "Modules", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Modules_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Module dependencies for this type. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "Module dependencies for this type." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Modules = { "Modules", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeInfo, Modules), METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Modules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Modules_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_IncludePaths_ElementProp = { "IncludePaths", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_IncludePaths_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Relative include paths required when referencing this type. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "Relative include paths required when referencing this type." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_IncludePaths = { "IncludePaths", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeInfo, IncludePaths), METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_IncludePaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_IncludePaths_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_PinColor_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Color for UI. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "Color for UI." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_PinColor = { "PinColor", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeInfo, PinColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_PinColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_PinColor_MetaData)) }; // 3007839000
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DebugString_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Misc info for debug. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIType.h" },
		{ "ToolTip", "Misc info for debug." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DebugString = { "DebugString", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeInfo, DebugString), METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DebugString_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DebugString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPITypeInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_SchemaType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_SchemaType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_bIsNested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_ContainingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_JsonName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_JsonType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_JsonPropertyToSerialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_PrintFormatSpecifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_PrintFormatExpression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Namespace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Prefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Suffix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DeclarationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_bIsBuiltinType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Modules_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_Modules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_IncludePaths_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_IncludePaths,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_PinColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeInfo_Statics::NewProp_DebugString,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPITypeInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPITypeInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPITypeInfo_Statics::ClassParams = {
		&UWebAPITypeInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPITypeInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPITypeInfo()
	{
		if (!Z_Registration_Info_UClass_UWebAPITypeInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPITypeInfo.OuterSingleton, Z_Construct_UClass_UWebAPITypeInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPITypeInfo.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPITypeInfo>()
	{
		return UWebAPITypeInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPITypeInfo);
	UWebAPITypeInfo::~UWebAPITypeInfo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_Statics::EnumInfo[] = {
		{ EWebAPISchemaType_StaticEnum, TEXT("EWebAPISchemaType"), &Z_Registration_Info_UEnum_EWebAPISchemaType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1663964158U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPITypeInfo, UWebAPITypeInfo::StaticClass, TEXT("UWebAPITypeInfo"), &Z_Registration_Info_UClass_UWebAPITypeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPITypeInfo), 941501395U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_2460830595(TEXT("/Script/WebAPIEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
