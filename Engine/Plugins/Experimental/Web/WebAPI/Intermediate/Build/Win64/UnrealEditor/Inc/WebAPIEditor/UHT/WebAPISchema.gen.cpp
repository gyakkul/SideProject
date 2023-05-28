// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dom/WebAPISchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPISchema() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WebAPIEditor();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIModelBase();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIModelBase_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPISchema();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPISchema_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPISchemaObjectInterface();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPISchemaObjectInterface_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIService_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPITypeInfo_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPITypeRegistry_NoRegister();
	WEBAPIEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPINameInfo();
	WEBAPIEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPINameVariant();
	WEBAPIEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPITypeNameVariant();
// End Cross Module References
	void UWebAPISchemaObjectInterface::StaticRegisterNativesUWebAPISchemaObjectInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPISchemaObjectInterface);
	UClass* Z_Construct_UClass_UWebAPISchemaObjectInterface_NoRegister()
	{
		return UWebAPISchemaObjectInterface::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPISchemaObjectInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPISchemaObjectInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPISchemaObjectInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPISchemaObjectInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWebAPISchemaObjectInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPISchemaObjectInterface_Statics::ClassParams = {
		&UWebAPISchemaObjectInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPISchemaObjectInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISchemaObjectInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPISchemaObjectInterface()
	{
		if (!Z_Registration_Info_UClass_UWebAPISchemaObjectInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPISchemaObjectInterface.OuterSingleton, Z_Construct_UClass_UWebAPISchemaObjectInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPISchemaObjectInterface.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPISchemaObjectInterface>()
	{
		return UWebAPISchemaObjectInterface::StaticClass();
	}
	UWebAPISchemaObjectInterface::UWebAPISchemaObjectInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPISchemaObjectInterface);
	UWebAPISchemaObjectInterface::~UWebAPISchemaObjectInterface() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WebAPITypeNameVariant;
class UScriptStruct* FWebAPITypeNameVariant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WebAPITypeNameVariant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WebAPITypeNameVariant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebAPITypeNameVariant, (UObject*)Z_Construct_UPackage__Script_WebAPIEditor(), TEXT("WebAPITypeNameVariant"));
	}
	return Z_Registration_Info_UScriptStruct_WebAPITypeNameVariant.OuterSingleton;
}
template<> WEBAPIEDITOR_API UScriptStruct* StaticStruct<FWebAPITypeNameVariant>()
{
	return FWebAPITypeNameVariant::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeInfo_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TypeInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TypeString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Holds either UWebAPITypeInfo or FString. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Holds either UWebAPITypeInfo or FString." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebAPITypeNameVariant>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::NewProp_TypeInfo_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** TypeInfo. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "TypeInfo." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::NewProp_TypeInfo = { "TypeInfo", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPITypeNameVariant, TypeInfo), Z_Construct_UClass_UWebAPITypeInfo_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::NewProp_TypeInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::NewProp_TypeInfo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::NewProp_TypeString_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** String. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "String." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::NewProp_TypeString = { "TypeString", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPITypeNameVariant, TypeString), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::NewProp_TypeString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::NewProp_TypeString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::NewProp_JsonName_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Field name as sent to and received from the external API. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Field name as sent to and received from the external API." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::NewProp_JsonName = { "JsonName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPITypeNameVariant, JsonName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::NewProp_JsonName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::NewProp_JsonName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::NewProp_TypeInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::NewProp_TypeString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::NewProp_JsonName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
		nullptr,
		&NewStructOps,
		"WebAPITypeNameVariant",
		sizeof(FWebAPITypeNameVariant),
		alignof(FWebAPITypeNameVariant),
		Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWebAPITypeNameVariant()
	{
		if (!Z_Registration_Info_UScriptStruct_WebAPITypeNameVariant.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WebAPITypeNameVariant.InnerSingleton, Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WebAPITypeNameVariant.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WebAPINameInfo;
class UScriptStruct* FWebAPINameInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WebAPINameInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WebAPINameInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebAPINameInfo, (UObject*)Z_Construct_UPackage__Script_WebAPIEditor(), TEXT("WebAPINameInfo"));
	}
	return Z_Registration_Info_UScriptStruct_WebAPINameInfo.OuterSingleton;
}
template<> WEBAPIEDITOR_API UScriptStruct* StaticStruct<FWebAPINameInfo>()
{
	return FWebAPINameInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWebAPINameInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prefix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Prefix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Holds information for a name and it's alternatives. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Holds information for a name and it's alternatives." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebAPINameInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Name" },
		{ "Comment", "/** Name without prefix or namespace, ie. \"SomeParameter\", not \"InSomeParameter\". */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Name without prefix or namespace, ie. \"SomeParameter\", not \"InSomeParameter\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPINameInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::NewProp_JsonName_MetaData[] = {
		{ "Category", "Name" },
		{ "Comment", "/** Field name as sent to and received from the external API. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Field name as sent to and received from the external API." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::NewProp_JsonName = { "JsonName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPINameInfo, JsonName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::NewProp_JsonName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::NewProp_JsonName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::NewProp_Prefix_MetaData[] = {
		{ "Category", "Name" },
		{ "Comment", "/** Type Prefix, usually for parameters (\"In\"/\"Out\") or booleans \"b\". */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Type Prefix, usually for parameters (\"In\"/\"Out\") or booleans \"b\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::NewProp_Prefix = { "Prefix", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPINameInfo, Prefix), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::NewProp_Prefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::NewProp_Prefix_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::NewProp_JsonName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::NewProp_Prefix,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
		nullptr,
		&NewStructOps,
		"WebAPINameInfo",
		sizeof(FWebAPINameInfo),
		alignof(FWebAPINameInfo),
		Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWebAPINameInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_WebAPINameInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WebAPINameInfo.InnerSingleton, Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WebAPINameInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WebAPINameVariant;
class UScriptStruct* FWebAPINameVariant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WebAPINameVariant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WebAPINameVariant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebAPINameVariant, (UObject*)Z_Construct_UPackage__Script_WebAPIEditor(), TEXT("WebAPINameVariant"));
	}
	return Z_Registration_Info_UScriptStruct_WebAPINameVariant.OuterSingleton;
}
template<> WEBAPIEDITOR_API UScriptStruct* StaticStruct<FWebAPINameVariant>()
{
	return FWebAPINameVariant::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWebAPINameVariant_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NameInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NameString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Holds either FWebAPINameInfo or FString. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Holds either FWebAPINameInfo or FString." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebAPINameVariant>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::NewProp_NameInfo_MetaData[] = {
		{ "Category", "Name" },
		{ "Comment", "/** NameInfo. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "NameInfo." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::NewProp_NameInfo = { "NameInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPINameVariant, NameInfo), Z_Construct_UScriptStruct_FWebAPINameInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::NewProp_NameInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::NewProp_NameInfo_MetaData)) }; // 3263017490
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::NewProp_NameString_MetaData[] = {
		{ "Category", "Name" },
		{ "Comment", "/** String. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "String." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::NewProp_NameString = { "NameString", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWebAPINameVariant, NameString), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::NewProp_NameString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::NewProp_NameString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::NewProp_NameInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::NewProp_NameString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
		nullptr,
		&NewStructOps,
		"WebAPINameVariant",
		sizeof(FWebAPINameVariant),
		alignof(FWebAPINameVariant),
		Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWebAPINameVariant()
	{
		if (!Z_Registration_Info_UScriptStruct_WebAPINameVariant.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WebAPINameVariant.InnerSingleton, Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WebAPINameVariant.InnerSingleton;
	}
	void UWebAPIModelBase::StaticRegisterNativesUWebAPIModelBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIModelBase);
	UClass* Z_Construct_UClass_UWebAPIModelBase_NoRegister()
	{
		return UWebAPIModelBase::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIModelBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRequired_MetaData[];
#endif
		static void NewProp_bIsRequired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRequired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReadOnly_MetaData[];
#endif
		static void NewProp_bIsReadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReadOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMinimumValue_MetaData[];
#endif
		static void NewProp_bUseMinimumValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMinimumValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MinimumValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaximumValue_MetaData[];
#endif
		static void NewProp_bUseMaximumValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaximumValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumValue_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_MaximumValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePattern_MetaData[];
#endif
		static void NewProp_bUsePattern_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePattern;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pattern_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Pattern;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIModelBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIModelBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Baseclass with common properties for various Schema classes. */" },
		{ "IncludePath", "Dom/WebAPISchema.h" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Baseclass with common properties for various Schema classes." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Describes this model. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Describes this model." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIModelBase, Description), METADATA_PARAMS(Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bIsRequired_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** By default all properties are optional. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "By default all properties are optional." },
	};
#endif
	void Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bIsRequired_SetBit(void* Obj)
	{
		((UWebAPIModelBase*)Obj)->bIsRequired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bIsRequired = { "bIsRequired", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPIModelBase), &Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bIsRequired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bIsRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bIsRequired_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bIsReadOnly_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** By default all properties are read & write. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "By default all properties are read & write." },
	};
#endif
	void Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bIsReadOnly_SetBit(void* Obj)
	{
		((UWebAPIModelBase*)Obj)->bIsReadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bIsReadOnly = { "bIsReadOnly", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPIModelBase), &Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bIsReadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bIsReadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bIsReadOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUseMinimumValue_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Whether to use Minimum value. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Whether to use Minimum value." },
	};
#endif
	void Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUseMinimumValue_SetBit(void* Obj)
	{
		((UWebAPIModelBase*)Obj)->bUseMinimumValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUseMinimumValue = { "bUseMinimumValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPIModelBase), &Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUseMinimumValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUseMinimumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUseMinimumValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_MinimumValue_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Minimum value. Can also indicate minimum string length. */" },
		{ "EditCondition", "bUseMinimumValue" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Minimum value. Can also indicate minimum string length." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_MinimumValue = { "MinimumValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIModelBase, MinimumValue), METADATA_PARAMS(Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_MinimumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_MinimumValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUseMaximumValue_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Whether to use Maximum value. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Whether to use Maximum value." },
	};
#endif
	void Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUseMaximumValue_SetBit(void* Obj)
	{
		((UWebAPIModelBase*)Obj)->bUseMaximumValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUseMaximumValue = { "bUseMaximumValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPIModelBase), &Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUseMaximumValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUseMaximumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUseMaximumValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_MaximumValue_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Maximum value. Can also indicate maximum string length. */" },
		{ "EditCondition", "bUseMaximumValue" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Maximum value. Can also indicate maximum string length." },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_MaximumValue = { "MaximumValue", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIModelBase, MaximumValue), METADATA_PARAMS(Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_MaximumValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_MaximumValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUsePattern_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Whether to use a Regex Pattern for validation. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Whether to use a Regex Pattern for validation." },
	};
#endif
	void Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUsePattern_SetBit(void* Obj)
	{
		((UWebAPIModelBase*)Obj)->bUsePattern = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUsePattern = { "bUsePattern", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPIModelBase), &Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUsePattern_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUsePattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUsePattern_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_Pattern_MetaData[] = {
		{ "Category", "Model" },
		{ "Comment", "/** Regex Pattern to validate against. */" },
		{ "EditCondition", "bUsePattern" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Regex Pattern to validate against." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_Pattern = { "Pattern", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIModelBase, Pattern), METADATA_PARAMS(Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_Pattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_Pattern_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIModelBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bIsRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bIsReadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUseMinimumValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_MinimumValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUseMaximumValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_MaximumValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_bUsePattern,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIModelBase_Statics::NewProp_Pattern,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWebAPIModelBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWebAPISchemaObjectInterface_NoRegister, (int32)VTABLE_OFFSET(UWebAPIModelBase, IWebAPISchemaObjectInterface), false },  // 617414714
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIModelBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIModelBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIModelBase_Statics::ClassParams = {
		&UWebAPIModelBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIModelBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIModelBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIModelBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIModelBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIModelBase()
	{
		if (!Z_Registration_Info_UClass_UWebAPIModelBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIModelBase.OuterSingleton, Z_Construct_UClass_UWebAPIModelBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIModelBase.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPIModelBase>()
	{
		return UWebAPIModelBase::StaticClass();
	}
	UWebAPIModelBase::UWebAPIModelBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIModelBase);
	UWebAPIModelBase::~UWebAPIModelBase() {}
	void UWebAPISchema::StaticRegisterNativesUWebAPISchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPISchema);
	UClass* Z_Construct_UClass_UWebAPISchema_NoRegister()
	{
		return UWebAPISchema::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPISchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_APIName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_APIName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Host;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserAgent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UserAgent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DateTimeFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DateTimeFormat;
		static const UECodeGen_Private::FStrPropertyParams NewProp_URISchemes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_URISchemes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_URISchemes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TypeRegistry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TypeRegistry;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Models_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Models_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Models;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Services_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Services_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Services_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Services;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPISchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPISchema_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Describes the intermediate structure from which to generate code. */" },
		{ "IncludePath", "Dom/WebAPISchema.h" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Describes the intermediate structure from which to generate code." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPISchema_Statics::NewProp_APIName_MetaData[] = {
		{ "Category", "Schema" },
		{ "Comment", "/** Name of the API. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Name of the API." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPISchema_Statics::NewProp_APIName = { "APIName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPISchema, APIName), METADATA_PARAMS(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_APIName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_APIName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Version_MetaData[] = {
		{ "Category", "Schema" },
		{ "Comment", "/** The API version can be any arbitrary string that is useful if there are several versions. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "The API version can be any arbitrary string that is useful if there are several versions." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPISchema, Version), METADATA_PARAMS(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Host_MetaData[] = {
		{ "Category", "Schema" },
		{ "Comment", "/** The default host address to access this API. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "The default host address to access this API." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPISchema, Host), METADATA_PARAMS(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Host_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Host_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPISchema_Statics::NewProp_BaseUrl_MetaData[] = {
		{ "Category", "Schema" },
		{ "Comment", "/** The Url path relative to the host address, ie. \"/V1\". */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "The Url path relative to the host address, ie. \"/V1\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPISchema_Statics::NewProp_BaseUrl = { "BaseUrl", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPISchema, BaseUrl), METADATA_PARAMS(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_BaseUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_BaseUrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPISchema_Statics::NewProp_UserAgent_MetaData[] = {
		{ "Category", "Schema" },
		{ "Comment", "/** The UserAgent to encode in Http request headers. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "The UserAgent to encode in Http request headers." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPISchema_Statics::NewProp_UserAgent = { "UserAgent", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPISchema, UserAgent), METADATA_PARAMS(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_UserAgent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_UserAgent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPISchema_Statics::NewProp_DateTimeFormat_MetaData[] = {
		{ "Category", "Schema" },
		{ "Comment", "/** The date-time format this API uses to encode/decode from string. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "The date-time format this API uses to encode/decode from string." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPISchema_Statics::NewProp_DateTimeFormat = { "DateTimeFormat", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPISchema, DateTimeFormat), METADATA_PARAMS(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_DateTimeFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_DateTimeFormat_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPISchema_Statics::NewProp_URISchemes_Inner = { "URISchemes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPISchema_Statics::NewProp_URISchemes_MetaData[] = {
		{ "Category", "Schema" },
		{ "Comment", "/** Uniform Resource Identifier schemes (ie. https, http). */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Uniform Resource Identifier schemes (ie. https, http)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWebAPISchema_Statics::NewProp_URISchemes = { "URISchemes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPISchema, URISchemes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_URISchemes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_URISchemes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPISchema_Statics::NewProp_TypeRegistry_MetaData[] = {
		{ "Comment", "/** Contains all referenced types for this API. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Contains all referenced types for this API." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPISchema_Statics::NewProp_TypeRegistry = { "TypeRegistry", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPISchema, TypeRegistry), Z_Construct_UClass_UWebAPITypeRegistry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_TypeRegistry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_TypeRegistry_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Models_Inner = { "Models", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWebAPIModelBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Models_MetaData[] = {
		{ "Category", "Schema" },
		{ "Comment", "/** Models can be a combination of classes, structs and enums used by this API. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Models can be a combination of classes, structs and enums used by this API." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Models = { "Models", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPISchema, Models), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Models_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Models_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Services_ValueProp = { "Services", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UWebAPIService_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Services_Key_KeyProp = { "Services_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Services_MetaData[] = {
		{ "Category", "Schema" },
		{ "Comment", "/** Each service contains one or more operations. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPISchema.h" },
		{ "ToolTip", "Each service contains one or more operations." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Services = { "Services", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPISchema, Services), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Services_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Services_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPISchema_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPISchema_Statics::NewProp_APIName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Host,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPISchema_Statics::NewProp_BaseUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPISchema_Statics::NewProp_UserAgent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPISchema_Statics::NewProp_DateTimeFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPISchema_Statics::NewProp_URISchemes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPISchema_Statics::NewProp_URISchemes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPISchema_Statics::NewProp_TypeRegistry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Models_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Models,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Services_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Services_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPISchema_Statics::NewProp_Services,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWebAPISchema_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWebAPISchemaObjectInterface_NoRegister, (int32)VTABLE_OFFSET(UWebAPISchema, IWebAPISchemaObjectInterface), false },  // 617414714
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPISchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPISchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPISchema_Statics::ClassParams = {
		&UWebAPISchema::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPISchema_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISchema_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPISchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPISchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPISchema()
	{
		if (!Z_Registration_Info_UClass_UWebAPISchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPISchema.OuterSingleton, Z_Construct_UClass_UWebAPISchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPISchema.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPISchema>()
	{
		return UWebAPISchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPISchema);
	UWebAPISchema::~UWebAPISchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_Statics::ScriptStructInfo[] = {
		{ FWebAPITypeNameVariant::StaticStruct, Z_Construct_UScriptStruct_FWebAPITypeNameVariant_Statics::NewStructOps, TEXT("WebAPITypeNameVariant"), &Z_Registration_Info_UScriptStruct_WebAPITypeNameVariant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWebAPITypeNameVariant), 4040585277U) },
		{ FWebAPINameInfo::StaticStruct, Z_Construct_UScriptStruct_FWebAPINameInfo_Statics::NewStructOps, TEXT("WebAPINameInfo"), &Z_Registration_Info_UScriptStruct_WebAPINameInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWebAPINameInfo), 3263017490U) },
		{ FWebAPINameVariant::StaticStruct, Z_Construct_UScriptStruct_FWebAPINameVariant_Statics::NewStructOps, TEXT("WebAPINameVariant"), &Z_Registration_Info_UScriptStruct_WebAPINameVariant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWebAPINameVariant), 61858727U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPISchemaObjectInterface, UWebAPISchemaObjectInterface::StaticClass, TEXT("UWebAPISchemaObjectInterface"), &Z_Registration_Info_UClass_UWebAPISchemaObjectInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPISchemaObjectInterface), 617414714U) },
		{ Z_Construct_UClass_UWebAPIModelBase, UWebAPIModelBase::StaticClass, TEXT("UWebAPIModelBase"), &Z_Registration_Info_UClass_UWebAPIModelBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIModelBase), 3697865U) },
		{ Z_Construct_UClass_UWebAPISchema, UWebAPISchema::StaticClass, TEXT("UWebAPISchema"), &Z_Registration_Info_UClass_UWebAPISchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPISchema), 2049203335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_1186970676(TEXT("/Script/WebAPIEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPISchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
