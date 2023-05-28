// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JsonObjectWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonObjectWrapper() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	JSONUTILITIES_API UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject();
	JSONUTILITIES_API UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject_NoRegister();
	JSONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper();
	UPackage* Z_Construct_UPackage__Script_JsonUtilities();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_JsonObjectWrapper;
class UScriptStruct* FJsonObjectWrapper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_JsonObjectWrapper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_JsonObjectWrapper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FJsonObjectWrapper, (UObject*)Z_Construct_UPackage__Script_JsonUtilities(), TEXT("JsonObjectWrapper"));
	}
	return Z_Registration_Info_UScriptStruct_JsonObjectWrapper.OuterSingleton;
}
template<> JSONUTILITIES_API UScriptStruct* StaticStruct<FJsonObjectWrapper>()
{
	return FJsonObjectWrapper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JsonString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JsonString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** UStruct that holds a JsonObject, can be used by structs passed to JsonObjectConverter to pass through JsonObjects directly */" },
		{ "DisplayName", "JsonObject" },
		{ "ModuleRelativePath", "Public/JsonObjectWrapper.h" },
		{ "ToolTip", "UStruct that holds a JsonObject, can be used by structs passed to JsonObjectConverter to pass through JsonObjects directly" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJsonObjectWrapper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::NewProp_JsonString_MetaData[] = {
		{ "Category", "JSON" },
		{ "ModuleRelativePath", "Public/JsonObjectWrapper.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::NewProp_JsonString = { "JsonString", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FJsonObjectWrapper, JsonString), METADATA_PARAMS(Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::NewProp_JsonString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::NewProp_JsonString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::NewProp_JsonString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_JsonUtilities,
		nullptr,
		&NewStructOps,
		"JsonObjectWrapper",
		sizeof(FJsonObjectWrapper),
		alignof(FJsonObjectWrapper),
		Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectWrapper()
	{
		if (!Z_Registration_Info_UScriptStruct_JsonObjectWrapper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_JsonObjectWrapper.InnerSingleton, Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_JsonObjectWrapper.InnerSingleton;
	}
	void UJsonUtilitiesDummyObject::StaticRegisterNativesUJsonUtilitiesDummyObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJsonUtilitiesDummyObject);
	UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject_NoRegister()
	{
		return UJsonUtilitiesDummyObject::StaticClass();
	}
	struct Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_JsonUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "JsonObjectWrapper.h" },
		{ "ModuleRelativePath", "Public/JsonObjectWrapper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJsonUtilitiesDummyObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::ClassParams = {
		&UJsonUtilitiesDummyObject::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJsonUtilitiesDummyObject()
	{
		if (!Z_Registration_Info_UClass_UJsonUtilitiesDummyObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJsonUtilitiesDummyObject.OuterSingleton, Z_Construct_UClass_UJsonUtilitiesDummyObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJsonUtilitiesDummyObject.OuterSingleton;
	}
	template<> JSONUTILITIES_API UClass* StaticClass<UJsonUtilitiesDummyObject>()
	{
		return UJsonUtilitiesDummyObject::StaticClass();
	}
	UJsonUtilitiesDummyObject::UJsonUtilitiesDummyObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJsonUtilitiesDummyObject);
	UJsonUtilitiesDummyObject::~UJsonUtilitiesDummyObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_Statics::ScriptStructInfo[] = {
		{ FJsonObjectWrapper::StaticStruct, Z_Construct_UScriptStruct_FJsonObjectWrapper_Statics::NewStructOps, TEXT("JsonObjectWrapper"), &Z_Registration_Info_UScriptStruct_JsonObjectWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FJsonObjectWrapper), 1979233586U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJsonUtilitiesDummyObject, UJsonUtilitiesDummyObject::StaticClass, TEXT("UJsonUtilitiesDummyObject"), &Z_Registration_Info_UClass_UJsonUtilitiesDummyObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJsonUtilitiesDummyObject), 1271949892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_865066882(TEXT("/Script/JsonUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_JsonUtilities_Public_JsonObjectWrapper_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
