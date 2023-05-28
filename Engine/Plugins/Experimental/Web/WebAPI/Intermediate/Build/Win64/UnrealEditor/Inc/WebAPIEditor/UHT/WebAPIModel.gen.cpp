// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dom/WebAPIModel.h"
#include "Dom/WebAPISchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIModel() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WebAPIEditor();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIModel();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIModel_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIModelBase();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIProperty();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIProperty_NoRegister();
	WEBAPIEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPINameVariant();
	WEBAPIEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPITypeNameVariant();
// End Cross Module References
	void UWebAPIProperty::StaticRegisterNativesUWebAPIProperty()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIProperty);
	UClass* Z_Construct_UClass_UWebAPIProperty_NoRegister()
	{
		return UWebAPIProperty::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIProperty_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsArray_MetaData[];
#endif
		static void NewProp_bIsArray_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsMixin_MetaData[];
#endif
		static void NewProp_bIsMixin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMixin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIProperty_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWebAPIModelBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIProperty_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Describes a single property within a model. */" },
		{ "IncludePath", "Dom/WebAPIModel.h" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIModel.h" },
		{ "ToolTip", "Describes a single property within a model." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Name of the Property. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIModel.h" },
		{ "ToolTip", "Name of the Property." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIProperty, Name), Z_Construct_UScriptStruct_FWebAPINameVariant, METADATA_PARAMS(Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_Name_MetaData)) }; // 61858727
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Type of the Property. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIModel.h" },
		{ "ToolTip", "Type of the Property." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIProperty, Type), Z_Construct_UScriptStruct_FWebAPITypeNameVariant, METADATA_PARAMS(Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_Type_MetaData)) }; // 4040585277
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_bIsArray_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** If the property is an array of Type. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIModel.h" },
		{ "ToolTip", "If the property is an array of Type." },
	};
#endif
	void Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_bIsArray_SetBit(void* Obj)
	{
		((UWebAPIProperty*)Obj)->bIsArray = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_bIsArray = { "bIsArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPIProperty), &Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_bIsArray_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_bIsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_bIsArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_bIsMixin_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** When the properties inside of this should be treated as though they're directly in the parent. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIModel.h" },
		{ "ToolTip", "When the properties inside of this should be treated as though they're directly in the parent." },
	};
#endif
	void Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_bIsMixin_SetBit(void* Obj)
	{
		((UWebAPIProperty*)Obj)->bIsMixin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_bIsMixin = { "bIsMixin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPIProperty), &Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_bIsMixin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_bIsMixin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_bIsMixin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Default value (optional) as a string. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIModel.h" },
		{ "ToolTip", "Default value (optional) as a string." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIProperty, DefaultValue), METADATA_PARAMS(Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_DefaultValues_Inner = { "DefaultValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_DefaultValues_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Array of values if needed, ie. enum */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIModel.h" },
		{ "ToolTip", "Array of values if needed, ie. enum" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_DefaultValues = { "DefaultValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIProperty, DefaultValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_DefaultValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_DefaultValues_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_bIsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_bIsMixin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_DefaultValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIProperty_Statics::NewProp_DefaultValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIProperty_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIProperty>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIProperty_Statics::ClassParams = {
		&UWebAPIProperty::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIProperty_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIProperty_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIProperty_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIProperty_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIProperty()
	{
		if (!Z_Registration_Info_UClass_UWebAPIProperty.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIProperty.OuterSingleton, Z_Construct_UClass_UWebAPIProperty_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIProperty.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPIProperty>()
	{
		return UWebAPIProperty::StaticClass();
	}
	UWebAPIProperty::UWebAPIProperty(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIProperty);
	UWebAPIProperty::~UWebAPIProperty() {}
	void UWebAPIModel::StaticRegisterNativesUWebAPIModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIModel);
	UClass* Z_Construct_UClass_UWebAPIModel_NoRegister()
	{
		return UWebAPIModel::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerate_MetaData[];
#endif
		static void NewProp_bGenerate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedCodeText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeneratedCodeText;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWebAPIModelBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIModel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Describes a (usually) API-specific struct or class representing a model. */" },
		{ "IncludePath", "Dom/WebAPIModel.h" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIModel.h" },
		{ "ToolTip", "Describes a (usually) API-specific struct or class representing a model." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIModel_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Name of the Model. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIModel.h" },
		{ "ToolTip", "Name of the Model." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebAPIModel_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIModel, Name), Z_Construct_UScriptStruct_FWebAPITypeNameVariant, METADATA_PARAMS(Z_Construct_UClass_UWebAPIModel_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIModel_Statics::NewProp_Name_MetaData)) }; // 4040585277
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIModel_Statics::NewProp_bGenerate_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Will be set based on dependent operations. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIModel.h" },
		{ "ToolTip", "Will be set based on dependent operations." },
	};
#endif
	void Z_Construct_UClass_UWebAPIModel_Statics::NewProp_bGenerate_SetBit(void* Obj)
	{
		((UWebAPIModel*)Obj)->bGenerate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPIModel_Statics::NewProp_bGenerate = { "bGenerate", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPIModel), &Z_Construct_UClass_UWebAPIModel_Statics::NewProp_bGenerate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPIModel_Statics::NewProp_bGenerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIModel_Statics::NewProp_bGenerate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIModel_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** The corresponding TypeInfo for this Model. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIModel.h" },
		{ "ToolTip", "The corresponding TypeInfo for this Model." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebAPIModel_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIModel, Type), Z_Construct_UScriptStruct_FWebAPITypeNameVariant, METADATA_PARAMS(Z_Construct_UClass_UWebAPIModel_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIModel_Statics::NewProp_Type_MetaData)) }; // 4040585277
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIModel_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Default value (optional) as a string. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIModel.h" },
		{ "ToolTip", "Default value (optional) as a string." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIModel_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIModel, DefaultValue), METADATA_PARAMS(Z_Construct_UClass_UWebAPIModel_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIModel_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPIModel_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWebAPIProperty_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIModel_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Array of properties contained in this model. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIModel.h" },
		{ "ToolTip", "Array of properties contained in this model." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWebAPIModel_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIModel, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPIModel_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIModel_Statics::NewProp_Properties_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIModel_Statics::NewProp_GeneratedCodeText_MetaData[] = {
		{ "Comment", "/** The last generated code as text for debugging. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIModel.h" },
		{ "ToolTip", "The last generated code as text for debugging." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIModel_Statics::NewProp_GeneratedCodeText = { "GeneratedCodeText", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIModel, GeneratedCodeText), METADATA_PARAMS(Z_Construct_UClass_UWebAPIModel_Statics::NewProp_GeneratedCodeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIModel_Statics::NewProp_GeneratedCodeText_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIModel_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIModel_Statics::NewProp_bGenerate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIModel_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIModel_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIModel_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIModel_Statics::NewProp_Properties,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIModel_Statics::NewProp_GeneratedCodeText,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIModel_Statics::ClassParams = {
		&UWebAPIModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIModel_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIModel()
	{
		if (!Z_Registration_Info_UClass_UWebAPIModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIModel.OuterSingleton, Z_Construct_UClass_UWebAPIModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIModel.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPIModel>()
	{
		return UWebAPIModel::StaticClass();
	}
	UWebAPIModel::UWebAPIModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIModel);
	UWebAPIModel::~UWebAPIModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPIProperty, UWebAPIProperty::StaticClass, TEXT("UWebAPIProperty"), &Z_Registration_Info_UClass_UWebAPIProperty, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIProperty), 2879533288U) },
		{ Z_Construct_UClass_UWebAPIModel, UWebAPIModel::StaticClass, TEXT("UWebAPIModel"), &Z_Registration_Info_UClass_UWebAPIModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIModel), 2698305118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIModel_h_2102380122(TEXT("/Script/WebAPIEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
