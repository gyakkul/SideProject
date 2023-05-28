// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dom/WebAPIParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIParameter() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WebAPIEditor();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIModel();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIModel_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIParameter();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIParameter_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIProperty_NoRegister();
	WEBAPIEDITOR_API UEnum* Z_Construct_UEnum_WebAPIEditor_EWebAPIParameterStorage();
// End Cross Module References
	void UWebAPIParameter::StaticRegisterNativesUWebAPIParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIParameter);
	UClass* Z_Construct_UClass_UWebAPIParameter_NoRegister()
	{
		return UWebAPIParameter::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIParameter_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsArray_MetaData[];
#endif
		static void NewProp_bIsArray_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Property;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWebAPIModel,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIParameter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A re-usable Parameter. */" },
		{ "IncludePath", "Dom/WebAPIParameter.h" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIParameter.h" },
		{ "ToolTip", "A re-usable Parameter." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_Storage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_Storage_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Where this parameter is stored/encoded in the request. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIParameter.h" },
		{ "ToolTip", "Where this parameter is stored/encoded in the request." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_Storage = { "Storage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIParameter, Storage), Z_Construct_UEnum_WebAPIEditor_EWebAPIParameterStorage, METADATA_PARAMS(Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_Storage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_Storage_MetaData)) }; // 825800536
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_MediaType_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** The optional media-type, ie. \"application/json\". */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIParameter.h" },
		{ "ToolTip", "The optional media-type, ie. \"application/json\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_MediaType = { "MediaType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIParameter, MediaType), METADATA_PARAMS(Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_MediaType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_MediaType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_Model_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Optional model definition. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIParameter.h" },
		{ "ToolTip", "Optional model definition." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIParameter, Model), Z_Construct_UClass_UWebAPIModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_Model_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_bIsArray_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** If the property is an array of Type. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIParameter.h" },
		{ "ToolTip", "If the property is an array of Type." },
	};
#endif
	void Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_bIsArray_SetBit(void* Obj)
	{
		((UWebAPIParameter*)Obj)->bIsArray = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_bIsArray = { "bIsArray", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWebAPIParameter), &Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_bIsArray_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_bIsArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_bIsArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_Property_MetaData[] = {
		{ "Category", "Type" },
		{ "Comment", "/** Single value property that this Parameter wraps. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPIParameter.h" },
		{ "ToolTip", "Single value property that this Parameter wraps." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIParameter, Property), Z_Construct_UClass_UWebAPIProperty_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_Property_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_Storage_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_Storage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_MediaType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_bIsArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIParameter_Statics::NewProp_Property,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIParameter_Statics::ClassParams = {
		&UWebAPIParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIParameter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIParameter()
	{
		if (!Z_Registration_Info_UClass_UWebAPIParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIParameter.OuterSingleton, Z_Construct_UClass_UWebAPIParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIParameter.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPIParameter>()
	{
		return UWebAPIParameter::StaticClass();
	}
	UWebAPIParameter::UWebAPIParameter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIParameter);
	UWebAPIParameter::~UWebAPIParameter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIParameter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIParameter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPIParameter, UWebAPIParameter::StaticClass, TEXT("UWebAPIParameter"), &Z_Registration_Info_UClass_UWebAPIParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIParameter), 4092650471U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIParameter_h_1011029551(TEXT("/Script/WebAPIEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPIParameter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
