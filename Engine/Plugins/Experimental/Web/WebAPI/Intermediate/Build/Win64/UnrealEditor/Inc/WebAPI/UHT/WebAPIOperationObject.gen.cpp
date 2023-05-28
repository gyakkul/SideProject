// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebAPIOperationObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIOperationObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WebAPI();
	WEBAPI_API UClass* Z_Construct_UClass_UWebAPIOperationObject();
	WEBAPI_API UClass* Z_Construct_UClass_UWebAPIOperationObject_NoRegister();
// End Cross Module References
	void UWebAPIOperationObject::StaticRegisterNativesUWebAPIOperationObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIOperationObject);
	UClass* Z_Construct_UClass_UWebAPIOperationObject_NoRegister()
	{
		return UWebAPIOperationObject::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIOperationObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIOperationObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperationObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Baseclass for an asynchronous Http request/response operation. */" },
		{ "IncludePath", "WebAPIOperationObject.h" },
		{ "ModuleRelativePath", "Public/WebAPIOperationObject.h" },
		{ "ToolTip", "Baseclass for an asynchronous Http request/response operation." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIOperationObject_Statics::NewProp_Message_MetaData[] = {
		{ "Category", "Response" },
		{ "Comment", "/** Can contain a response or status message. */" },
		{ "ModuleRelativePath", "Public/WebAPIOperationObject.h" },
		{ "ToolTip", "Can contain a response or status message." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UWebAPIOperationObject_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIOperationObject, Message), METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperationObject_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationObject_Statics::NewProp_Message_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIOperationObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIOperationObject_Statics::NewProp_Message,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIOperationObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIOperationObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIOperationObject_Statics::ClassParams = {
		&UWebAPIOperationObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIOperationObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationObject_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIOperationObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIOperationObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIOperationObject()
	{
		if (!Z_Registration_Info_UClass_UWebAPIOperationObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIOperationObject.OuterSingleton, Z_Construct_UClass_UWebAPIOperationObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIOperationObject.OuterSingleton;
	}
	template<> WEBAPI_API UClass* StaticClass<UWebAPIOperationObject>()
	{
		return UWebAPIOperationObject::StaticClass();
	}
	UWebAPIOperationObject::UWebAPIOperationObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIOperationObject);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIOperationObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIOperationObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPIOperationObject, UWebAPIOperationObject::StaticClass, TEXT("UWebAPIOperationObject"), &Z_Registration_Info_UClass_UWebAPIOperationObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIOperationObject), 2323481823U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIOperationObject_h_44087321(TEXT("/Script/WebAPI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIOperationObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPI_Public_WebAPIOperationObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
