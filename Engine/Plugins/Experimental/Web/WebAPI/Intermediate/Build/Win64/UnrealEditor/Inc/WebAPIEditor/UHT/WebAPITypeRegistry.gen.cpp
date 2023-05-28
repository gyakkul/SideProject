// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dom/WebAPITypeRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPITypeRegistry() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_WebAPIEditor();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIStaticTypeRegistry();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPIStaticTypeRegistry_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPITypeInfo_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPITypeRegistry();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPITypeRegistry_NoRegister();
// End Cross Module References
	void UWebAPIStaticTypeRegistry::StaticRegisterNativesUWebAPIStaticTypeRegistry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPIStaticTypeRegistry);
	UClass* Z_Construct_UClass_UWebAPIStaticTypeRegistry_NoRegister()
	{
		return UWebAPIStaticTypeRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPIStaticTypeRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BuiltinTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuiltinTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BuiltinTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPIStaticTypeRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIStaticTypeRegistry_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Holds Type information for built-in types. */" },
		{ "IncludePath", "Dom/WebAPITypeRegistry.h" },
		{ "ModuleRelativePath", "Public/Dom/WebAPITypeRegistry.h" },
		{ "ToolTip", "Holds Type information for built-in types." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPIStaticTypeRegistry_Statics::NewProp_BuiltinTypes_Inner = { "BuiltinTypes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWebAPITypeInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPIStaticTypeRegistry_Statics::NewProp_BuiltinTypes_MetaData[] = {
		{ "Comment", "/** Array of common built-in types. */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPITypeRegistry.h" },
		{ "ToolTip", "Array of common built-in types." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWebAPIStaticTypeRegistry_Statics::NewProp_BuiltinTypes = { "BuiltinTypes", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPIStaticTypeRegistry, BuiltinTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPIStaticTypeRegistry_Statics::NewProp_BuiltinTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIStaticTypeRegistry_Statics::NewProp_BuiltinTypes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPIStaticTypeRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIStaticTypeRegistry_Statics::NewProp_BuiltinTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPIStaticTypeRegistry_Statics::NewProp_BuiltinTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPIStaticTypeRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPIStaticTypeRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPIStaticTypeRegistry_Statics::ClassParams = {
		&UWebAPIStaticTypeRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPIStaticTypeRegistry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIStaticTypeRegistry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPIStaticTypeRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPIStaticTypeRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPIStaticTypeRegistry()
	{
		if (!Z_Registration_Info_UClass_UWebAPIStaticTypeRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPIStaticTypeRegistry.OuterSingleton, Z_Construct_UClass_UWebAPIStaticTypeRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPIStaticTypeRegistry.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPIStaticTypeRegistry>()
	{
		return UWebAPIStaticTypeRegistry::StaticClass();
	}
	UWebAPIStaticTypeRegistry::UWebAPIStaticTypeRegistry() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPIStaticTypeRegistry);
	UWebAPIStaticTypeRegistry::~UWebAPIStaticTypeRegistry() {}
	void UWebAPITypeRegistry::StaticRegisterNativesUWebAPITypeRegistry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPITypeRegistry);
	UClass* Z_Construct_UClass_UWebAPITypeRegistry_NoRegister()
	{
		return UWebAPITypeRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPITypeRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeneratedTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratedTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GeneratedTypes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPITypeRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeRegistry_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Holds Type information for a given Schema. */" },
		{ "IncludePath", "Dom/WebAPITypeRegistry.h" },
		{ "ModuleRelativePath", "Public/Dom/WebAPITypeRegistry.h" },
		{ "ToolTip", "Holds Type information for a given Schema." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWebAPITypeRegistry_Statics::NewProp_GeneratedTypes_Inner = { "GeneratedTypes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWebAPITypeInfo_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPITypeRegistry_Statics::NewProp_GeneratedTypes_MetaData[] = {
		{ "Comment", "/** Array of TypeInfo objects to generate (no built-in types). */" },
		{ "ModuleRelativePath", "Public/Dom/WebAPITypeRegistry.h" },
		{ "ToolTip", "Array of TypeInfo objects to generate (no built-in types)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWebAPITypeRegistry_Statics::NewProp_GeneratedTypes = { "GeneratedTypes", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWebAPITypeRegistry, GeneratedTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeRegistry_Statics::NewProp_GeneratedTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeRegistry_Statics::NewProp_GeneratedTypes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWebAPITypeRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeRegistry_Statics::NewProp_GeneratedTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWebAPITypeRegistry_Statics::NewProp_GeneratedTypes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPITypeRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPITypeRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPITypeRegistry_Statics::ClassParams = {
		&UWebAPITypeRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWebAPITypeRegistry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeRegistry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPITypeRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPITypeRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPITypeRegistry()
	{
		if (!Z_Registration_Info_UClass_UWebAPITypeRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPITypeRegistry.OuterSingleton, Z_Construct_UClass_UWebAPITypeRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPITypeRegistry.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPITypeRegistry>()
	{
		return UWebAPITypeRegistry::StaticClass();
	}
	UWebAPITypeRegistry::UWebAPITypeRegistry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPITypeRegistry);
	UWebAPITypeRegistry::~UWebAPITypeRegistry() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPITypeRegistry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPITypeRegistry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPIStaticTypeRegistry, UWebAPIStaticTypeRegistry::StaticClass, TEXT("UWebAPIStaticTypeRegistry"), &Z_Registration_Info_UClass_UWebAPIStaticTypeRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPIStaticTypeRegistry), 4193398625U) },
		{ Z_Construct_UClass_UWebAPITypeRegistry, UWebAPITypeRegistry::StaticClass, TEXT("UWebAPITypeRegistry"), &Z_Registration_Info_UClass_UWebAPITypeRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPITypeRegistry), 1116444852U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPITypeRegistry_h_3001783327(TEXT("/Script/WebAPIEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPITypeRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_Dom_WebAPITypeRegistry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
