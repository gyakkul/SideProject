// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dom/WebAPIOperation.h"
#include "Dom/WebAPISchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIOperation() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WebAPIEditor();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIModel();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIModel_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIOperation();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIOperation_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIOperationError();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIOperationError_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIOperationParameter();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIOperationParameter_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIOperationRequest();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIOperationRequest_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIOperationResponse();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIOperationResponse_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIProperty();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPISchemaObjectInterface_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIService_NoRegister();
	WEBAPIEDITOR_API UEnum* Z_Construct_UEnum_WebAPIEditor_EWebAPIParameterStorage();
	WEBAPIEDITOR_API UEnum* Z_Construct_UEnum_WebAPIEditor_EWebAPIResponseStorage();
	WEBAPIEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FWebAPITypeNameVariant();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWebAPIParameterStorage;
	static UEnum* EWebAPIParameterStorage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWebAPIParameterStorage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWebAPIParameterStorage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WebAPIEditor_EWebAPIParameterStorage, (UObject*)Z_Construct_UPackage__Script_WebAPIEditor(), TEXT("EWebAPIParameterStorage"));
		}
		return Z_Registration_Info_UEnum_EWebAPIParameterStorage.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UEnum* StaticEnum<EWebAPIParameterStorage>()
	{
		return EWebAPIParameterStorage_StaticEnum();
	}
	struct Z_Construct_UEnum_WebAPIEditor_EWebAPIParameterStorage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WebAPIEditor_EWebAPIParameterStorage_Statics::Enumerators[] = {
		{ "EWebAPIParameterStorage::Path", (int64)EWebAPIParameterStorage::Path },
		{ "EWebAPIParameterStorage::Query", (int64)EWebAPIParameterStorage::Query },
		{ "EWebAPIParameterStorage::Header", (int64)EWebAPIParameterStorage::Header },
		{ "EWebAPIParameterStorage::Cookie", (int64)EWebAPIParameterStorage::Cookie },
		{ "EWebAPIParameterStorage::Body", (int64)EWebAPIParameterStorage::Body },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WebAPIEditor_EWebAPIParameterStorage_Statics::Enum_MetaDataParams[] = {
		{ "Body.Comment", "/** ie. json string */" },
		{ "Body.DisplayName", "Body" },
		{ "Body.Name", "EWebAPIParameterStorage::Body" },
		{ "Body.ToolTip", "ie. json string" },
		{ "Cookie.Comment", "/** {key}={value} */" },
		{ "Cookie.DisplayName", "Cookie" },
		{ "Cookie.Name", "EWebAPIParameterStorage::Cookie" },
		{ "Cookie.ToolTip", "{key}={value}" },
		{ "Header.Comment", "/** {key}: {value} */" },
		{ "Header.DisplayName", "Header" },
		{ "Header.Name", "EWebAPIParameterStorage::Header" },
		{ "Header.ToolTip", "{key}: {value}" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "Path.Comment", "/** /users/{value} */" },
		{ "Path.DisplayName", "Path" },
		{ "Path.Name", "EWebAPIParameterStorage::Path" },
		{ "Path.ToolTip", "/users/{value}" },
		{ "Query.Comment", "/** /users?{key}={value}} */" },
		{ "Query.DisplayName", "Query" },
		{ "Query.Name", "EWebAPIParameterStorage::Query" },
		{ "Query.ToolTip", "/users?{key}={value}}" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WebAPIEditor_EWebAPIParameterStorage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WebAPIEditor,
		nullptr,
		"EWebAPIParameterStorage",
		"EWebAPIParameterStorage",
		Z_Construct_UEnum_WebAPIEditor_EWebAPIParameterStorage_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WebAPIEditor_EWebAPIParameterStorage_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WebAPIEditor_EWebAPIParameterStorage_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WebAPIEditor_EWebAPIParameterStorage_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WebAPIEditor_EWebAPIParameterStorage()
	{
		if (!Z_Registration_Info_UEnum_EWebAPIParameterStorage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWebAPIParameterStorage.InnerSingleton, Z_Construct_UEnum_WebAPIEditor_EWebAPIParameterStorage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWebAPIParameterStorage.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWebAPIResponseStorage;
	static UEnum* EWebAPIResponseStorage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWebAPIResponseStorage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWebAPIResponseStorage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WebAPIEditor_EWebAPIResponseStorage, (UObject*)Z_Construct_UPackage__Script_WebAPIEditor(), TEXT("EWebAPIResponseStorage"));
		}
		return Z_Registration_Info_UEnum_EWebAPIResponseStorage.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UEnum* StaticEnum<EWebAPIResponseStorage>()
	{
		return EWebAPIResponseStorage_StaticEnum();
	}
	struct Z_Construct_UEnum_WebAPIEditor_EWebAPIResponseStorage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WebAPIEditor_EWebAPIResponseStorage_Statics::Enumerators[] = {
		{ "EWebAPIResponseStorage::Body", (int64)EWebAPIResponseStorage::Body },
		{ "EWebAPIResponseStorage::Header", (int64)EWebAPIResponseStorage::Header },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WebAPIEditor_EWebAPIResponseStorage_Statics::Enum_MetaDataParams[] = {
		{ "Body.Comment", "/** ie. json string */" },
		{ "Body.DisplayName", "Body" },
		{ "Body.Name", "EWebAPIResponseStorage::Body" },
		{ "Body.ToolTip", "ie. json string" },
		{ "Header.Comment", "/** {key}: {value} */" },
		{ "Header.DisplayName", "Header" },
		{ "Header.Name", "EWebAPIResponseStorage::Header" },
		{ "Header.ToolTip", "{key}: {value}" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WebAPIEditor_EWebAPIResponseStorage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WebAPIEditor,
		nullptr,
		"EWebAPIResponseStorage",
		"EWebAPIResponseStorage",
		Z_Construct_UEnum_WebAPIEditor_EWebAPIResponseStorage_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WebAPIEditor_EWebAPIResponseStorage_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WebAPIEditor_EWebAPIResponseStorage_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WebAPIEditor_EWebAPIResponseStorage_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WebAPIEditor_EWebAPIResponseStorage()
	{
		if (!Z_Registration_Info_UEnum_EWebAPIResponseStorage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWebAPIResponseStorage.InnerSingleton, Z_Construct_UEnum_WebAPIEditor_EWebAPIResponseStorage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWebAPIResponseStorage.InnerSingleton;
	}
	void UWebAPIOperationParameter::StaticRegisterNativesUWebAPIOperationParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIOperationParameter);
	UClass* Z_Construct_UClass_UWebAPIOperationParameter_NoRegister()
	{
		return UWebAPIOperationParameter::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIOperationParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Storage_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Storage_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Storage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaType_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MediaType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Model;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIOperationParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWebAPIProperty,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperationParameter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dom/WebAPIOperation.h" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWebAPIOperationParameter_Statics::NewProp_Storage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperationParameter_Statics::NewProp_Storage_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Where this parameter is stored/encoded in the request. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "Where this parameter is stored/encoded in the request." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWebAPIOperationParameter_Statics::NewProp_Storage = { "Storage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperationParameter, Storage), Z_Construct_UEnum_WebAPIEditor_EWebAPIParameterStorage, METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperationParameter_Statics::NewProp_Storage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationParameter_Statics::NewProp_Storage_MetaData)) }; // 825800536
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperationParameter_Statics::NewProp_MediaType_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** The optional media-type, ie. \"application/json\". */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "The optional media-type, ie. \"application/json\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIOperationParameter_Statics::NewProp_MediaType = { "MediaType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperationParameter, MediaType), METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperationParameter_Statics::NewProp_MediaType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationParameter_Statics::NewProp_MediaType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperationParameter_Statics::NewProp_Model_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Optional model definition. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "Optional model definition." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPIOperationParameter_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperationParameter, Model), Z_Construct_UClass_UWebAPIModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperationParameter_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationParameter_Statics::NewProp_Model_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIOperationParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperationParameter_Statics::NewProp_Storage_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperationParameter_Statics::NewProp_Storage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperationParameter_Statics::NewProp_MediaType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperationParameter_Statics::NewProp_Model,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIOperationParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIOperationParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIOperationParameter_Statics::ClassParams = {
		&UWebAPIOperationParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIOperationParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationParameter_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperationParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIOperationParameter()
	{
		if (!Z_Registration_Info_UClass_UWebAPIOperationParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIOperationParameter.OuterSingleton, Z_Construct_UClass_UWebAPIOperationParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIOperationParameter.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPIOperationParameter>()
	{
		return UWebAPIOperationParameter::StaticClass();
	}
	UWebAPIOperationParameter::UWebAPIOperationParameter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIOperationParameter);
	UWebAPIOperationParameter::~UWebAPIOperationParameter() {}
	void UWebAPIOperationRequest::StaticRegisterNativesUWebAPIOperationRequest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIOperationRequest);
	UClass* Z_Construct_UClass_UWebAPIOperationRequest_NoRegister()
	{
		return UWebAPIOperationRequest::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIOperationRequest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIOperationRequest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWebAPIModel,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperationRequest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dom/WebAPIOperation.h" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPIOperationRequest_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWebAPIOperationParameter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperationRequest_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Array of parameters contained in this request. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "Array of parameters contained in this request." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWebAPIOperationRequest_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperationRequest, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperationRequest_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationRequest_Statics::NewProp_Parameters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIOperationRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperationRequest_Statics::NewProp_Parameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperationRequest_Statics::NewProp_Parameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIOperationRequest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIOperationRequest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIOperationRequest_Statics::ClassParams = {
		&UWebAPIOperationRequest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIOperationRequest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationRequest_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperationRequest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationRequest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIOperationRequest()
	{
		if (!Z_Registration_Info_UClass_UWebAPIOperationRequest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIOperationRequest.OuterSingleton, Z_Construct_UClass_UWebAPIOperationRequest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIOperationRequest.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPIOperationRequest>()
	{
		return UWebAPIOperationRequest::StaticClass();
	}
	UWebAPIOperationRequest::UWebAPIOperationRequest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIOperationRequest);
	UWebAPIOperationRequest::~UWebAPIOperationRequest() {}
	void UWebAPIOperationResponse::StaticRegisterNativesUWebAPIOperationResponse()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIOperationResponse);
	UClass* Z_Construct_UClass_UWebAPIOperationResponse_NoRegister()
	{
		return UWebAPIOperationResponse::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIOperationResponse_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Storage_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Storage_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Storage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIOperationResponse_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWebAPIModel,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperationResponse_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dom/WebAPIOperation.h" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWebAPIOperationResponse_Statics::NewProp_Storage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperationResponse_Statics::NewProp_Storage_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Where this parameter is stored/encoded in the response. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "Where this parameter is stored/encoded in the response." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWebAPIOperationResponse_Statics::NewProp_Storage = { "Storage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperationResponse, Storage), Z_Construct_UEnum_WebAPIEditor_EWebAPIResponseStorage, METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperationResponse_Statics::NewProp_Storage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationResponse_Statics::NewProp_Storage_MetaData)) }; // 320072690
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperationResponse_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Http response code. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "Http response code." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UWebAPIOperationResponse_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperationResponse, Code), METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperationResponse_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationResponse_Statics::NewProp_Code_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperationResponse_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Optional message based on the response status or result. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "Optional message based on the response status or result." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIOperationResponse_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperationResponse, Message), METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperationResponse_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationResponse_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIOperationResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperationResponse_Statics::NewProp_Storage_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperationResponse_Statics::NewProp_Storage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperationResponse_Statics::NewProp_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperationResponse_Statics::NewProp_Message,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIOperationResponse_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIOperationResponse>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIOperationResponse_Statics::ClassParams = {
		&UWebAPIOperationResponse::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIOperationResponse_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationResponse_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperationResponse_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationResponse_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIOperationResponse()
	{
		if (!Z_Registration_Info_UClass_UWebAPIOperationResponse.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIOperationResponse.OuterSingleton, Z_Construct_UClass_UWebAPIOperationResponse_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIOperationResponse.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPIOperationResponse>()
	{
		return UWebAPIOperationResponse::StaticClass();
	}
	UWebAPIOperationResponse::UWebAPIOperationResponse(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIOperationResponse);
	UWebAPIOperationResponse::~UWebAPIOperationResponse() {}
	void UWebAPIOperationError::StaticRegisterNativesUWebAPIOperationError()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIOperationError);
	UClass* Z_Construct_UClass_UWebAPIOperationError_NoRegister()
	{
		return UWebAPIOperationError::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIOperationError_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIOperationError_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperationError_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dom/WebAPIOperation.h" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperationError_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Http response code. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "Http response code." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UWebAPIOperationError_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperationError, Code), METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperationError_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationError_Statics::NewProp_Code_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperationError_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Describes this error, usually the error message. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "Describes this error, usually the error message." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIOperationError_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperationError, Description), METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperationError_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationError_Statics::NewProp_Description_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIOperationError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperationError_Statics::NewProp_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperationError_Statics::NewProp_Description,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWebAPIOperationError_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWebAPISchemaObjectInterface_NoRegister, (int32)VTABLE_OFFSET(UWebAPIOperationError, IWebAPISchemaObjectInterface), false },  // 617414714
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIOperationError_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIOperationError>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIOperationError_Statics::ClassParams = {
		&UWebAPIOperationError::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIOperationError_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationError_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperationError_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationError_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIOperationError()
	{
		if (!Z_Registration_Info_UClass_UWebAPIOperationError.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIOperationError.OuterSingleton, Z_Construct_UClass_UWebAPIOperationError_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIOperationError.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPIOperationError>()
	{
		return UWebAPIOperationError::StaticClass();
	}
	UWebAPIOperationError::UWebAPIOperationError(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIOperationError);
	UWebAPIOperationError::~UWebAPIOperationError() {}
	void UWebAPIOperation::StaticRegisterNativesUWebAPIOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIOperation);
	UClass* Z_Construct_UClass_UWebAPIOperation_NoRegister()
	{
		return UWebAPIOperation::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIOperation_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Service_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Service;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDeprecated_MetaData[];
#endif
		static void NewProp_bIsDeprecated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDeprecated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Verb_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Verb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RequestContentTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequestContentTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RequestContentTypes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseContentTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseContentTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ResponseContentTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Request;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Responses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Responses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Responses;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Errors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Errors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Errors;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedCodeText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeneratedCodeText;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Dom/WebAPIOperation.h" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Name of the Operation. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "Name of the Operation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperation, Name), Z_Construct_UScriptStruct_FWebAPITypeNameVariant, METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Name_MetaData)) }; // 4040585277
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_bGenerate_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Can be disabled to skip generation of this Operation. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "Can be disabled to skip generation of this Operation." },
	};
#endif
	void Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_bGenerate_SetBit(void* Obj)
	{
		((UWebAPIOperation*)Obj)->bGenerate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_bGenerate = { "bGenerate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPIOperation), &Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_bGenerate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_bGenerate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_bGenerate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Service_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Parent service for this operation. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "Parent service for this operation." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Service = { "Service", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperation, Service), Z_Construct_UClass_UWebAPIService_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Service_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Service_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Describes this operation. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "Describes this operation." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperation, Description), METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_bIsDeprecated_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Flags an operation previously available as deprecated. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "Flags an operation previously available as deprecated." },
	};
#endif
	void Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_bIsDeprecated_SetBit(void* Obj)
	{
		((UWebAPIOperation*)Obj)->bIsDeprecated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_bIsDeprecated = { "bIsDeprecated", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPIOperation), &Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_bIsDeprecated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_bIsDeprecated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_bIsDeprecated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Verb_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** The Http verb, ie. Get, Post, etc. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "The Http verb, ie. Get, Post, etc." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperation, Verb), METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Verb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Verb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** The operation path, relative to the base url. This can contain named template args. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "The operation path, relative to the base url. This can contain named template args." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperation, Path), METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_RequestContentTypes_Inner = { "RequestContentTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_RequestContentTypes_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** List of possible content types for requests, ie. application/json */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "List of possible content types for requests, ie. application/json" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_RequestContentTypes = { "RequestContentTypes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperation, RequestContentTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_RequestContentTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_RequestContentTypes_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_ResponseContentTypes_Inner = { "ResponseContentTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_ResponseContentTypes_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** List of possible content types for responses, ie. application/json */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "List of possible content types for responses, ie. application/json" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_ResponseContentTypes = { "ResponseContentTypes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperation, ResponseContentTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_ResponseContentTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_ResponseContentTypes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Request_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Request model. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "Request model." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Request = { "Request", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperation, Request), Z_Construct_UClass_UWebAPIOperationRequest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Request_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Request_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Responses_Inner = { "Responses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWebAPIOperationResponse_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Responses_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Array of responses. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "Array of responses." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Responses = { "Responses", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperation, Responses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Responses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Responses_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Errors_Inner = { "Errors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWebAPIOperationError_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Errors_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Array of errors that can be returned. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "Array of errors that can be returned." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Errors = { "Errors", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperation, Errors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Errors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Errors_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_GeneratedCodeText_MetaData[] = {
		{ "Comment", "/** The last generated code as text for debugging. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIOperation.h" },
		{ "ToolTip", "The last generated code as text for debugging." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_GeneratedCodeText = { "GeneratedCodeText", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperation, GeneratedCodeText), METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_GeneratedCodeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_GeneratedCodeText_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_bGenerate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Service,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_bIsDeprecated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Verb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_RequestContentTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_RequestContentTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_ResponseContentTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_ResponseContentTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Request,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Responses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Responses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Errors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_Errors,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperation_Statics::NewProp_GeneratedCodeText,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWebAPIOperation_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWebAPISchemaObjectInterface_NoRegister, (int32)VTABLE_OFFSET(UWebAPIOperation, IWebAPISchemaObjectInterface), false },  // 617414714
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIOperation_Statics::ClassParams = {
		&UWebAPIOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIOperation_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperation_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIOperation()
	{
		if (!Z_Registration_Info_UClass_UWebAPIOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIOperation.OuterSingleton, Z_Construct_UClass_UWebAPIOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIOperation.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPIOperation>()
	{
		return UWebAPIOperation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIOperation);
	UWebAPIOperation::~UWebAPIOperation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIOperation_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIOperation_h_Statics::EnumInfo[] = {
		{ EWebAPIParameterStorage_StaticEnum, TEXT("EWebAPIParameterStorage"), &Z_Registration_Info_UEnum_EWebAPIParameterStorage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 825800536U) },
		{ EWebAPIResponseStorage_StaticEnum, TEXT("EWebAPIResponseStorage"), &Z_Registration_Info_UEnum_EWebAPIResponseStorage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 320072690U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIOperation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPIOperationParameter, UWebAPIOperationParameter::StaticClass, TEXT("UWebAPIOperationParameter"), &Z_Registration_Info_UClass_UWebAPIOperationParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIOperationParameter), 1942783352U) },
		{ Z_Construct_UClass_UWebAPIOperationRequest, UWebAPIOperationRequest::StaticClass, TEXT("UWebAPIOperationRequest"), &Z_Registration_Info_UClass_UWebAPIOperationRequest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIOperationRequest), 3714203135U) },
		{ Z_Construct_UClass_UWebAPIOperationResponse, UWebAPIOperationResponse::StaticClass, TEXT("UWebAPIOperationResponse"), &Z_Registration_Info_UClass_UWebAPIOperationResponse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIOperationResponse), 2780676759U) },
		{ Z_Construct_UClass_UWebAPIOperationError, UWebAPIOperationError::StaticClass, TEXT("UWebAPIOperationError"), &Z_Registration_Info_UClass_UWebAPIOperationError, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIOperationError), 2832677357U) },
		{ Z_Construct_UClass_UWebAPIOperation, UWebAPIOperation::StaticClass, TEXT("UWebAPIOperation"), &Z_Registration_Info_UClass_UWebAPIOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIOperation), 2648461869U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIOperation_h_924095972(TEXT("/Script/WebAPIEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIOperation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIOperation_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIOperation_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIOperation_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
