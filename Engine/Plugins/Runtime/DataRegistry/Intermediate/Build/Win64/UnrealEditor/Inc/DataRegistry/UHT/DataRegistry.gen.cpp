// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataRegistry.h"
#include "DataRegistryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataRegistry() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistry();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistry_NoRegister();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistrySource_NoRegister();
	DATAREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryCachePolicy();
	DATAREGISTRY_API UScriptStruct* Z_Construct_UScriptStruct_FDataRegistryIdFormat();
	UPackage* Z_Construct_UPackage__Script_DataRegistry();
// End Cross Module References
	void UDataRegistry::StaticRegisterNativesUDataRegistry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataRegistry);
	UClass* Z_Construct_UClass_UDataRegistry_NoRegister()
	{
		return UDataRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UDataRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegistryType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RegistryType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdFormat_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IdFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemStruct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ItemStruct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSources_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataSources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataSources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeSources_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RuntimeSources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeSources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeSources;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimerUpdateFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimerUpdateFrequency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCachePolicy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCachePolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataRegistry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistry_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Defines a place to efficiently store and retrieve structure data, can be used as a wrapper around Data/Curve Tables or extended with other sources\n */" },
		{ "IncludePath", "DataRegistry.h" },
		{ "ModuleRelativePath", "Public/DataRegistry.h" },
		{ "ToolTip", "Defines a place to efficiently store and retrieve structure data, can be used as a wrapper around Data/Curve Tables or extended with other sources" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistry_Statics::NewProp_RegistryType_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** Globally unique name used to identify this registry */" },
		{ "ModuleRelativePath", "Public/DataRegistry.h" },
		{ "ToolTip", "Globally unique name used to identify this registry" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDataRegistry_Statics::NewProp_RegistryType = { "RegistryType", nullptr, (EPropertyFlags)0x0020090000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataRegistry, RegistryType), METADATA_PARAMS(Z_Construct_UClass_UDataRegistry_Statics::NewProp_RegistryType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistry_Statics::NewProp_RegistryType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistry_Statics::NewProp_IdFormat_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** Rules for specifying valid item Ids, if default than any name can be used */" },
		{ "ModuleRelativePath", "Public/DataRegistry.h" },
		{ "ToolTip", "Rules for specifying valid item Ids, if default than any name can be used" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataRegistry_Statics::NewProp_IdFormat = { "IdFormat", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataRegistry, IdFormat), Z_Construct_UScriptStruct_FDataRegistryIdFormat, METADATA_PARAMS(Z_Construct_UClass_UDataRegistry_Statics::NewProp_IdFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistry_Statics::NewProp_IdFormat_MetaData)) }; // 2128307817
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistry_Statics::NewProp_ItemStruct_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** Structure type of all for items in this registry */" },
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Public/DataRegistry.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Structure type of all for items in this registry" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataRegistry_Statics::NewProp_ItemStruct = { "ItemStruct", nullptr, (EPropertyFlags)0x0024090000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataRegistry, ItemStruct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UClass_UDataRegistry_Statics::NewProp_ItemStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistry_Statics::NewProp_ItemStruct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistry_Statics::NewProp_DataSources_Inner_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** List of data sources to search for items */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataRegistry.h" },
		{ "ToolTip", "List of data sources to search for items" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataRegistry_Statics::NewProp_DataSources_Inner = { "DataSources", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataRegistrySource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataRegistry_Statics::NewProp_DataSources_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistry_Statics::NewProp_DataSources_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistry_Statics::NewProp_DataSources_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** List of data sources to search for items */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataRegistry.h" },
		{ "ToolTip", "List of data sources to search for items" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataRegistry_Statics::NewProp_DataSources = { "DataSources", nullptr, (EPropertyFlags)0x0024088000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataRegistry, DataSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataRegistry_Statics::NewProp_DataSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistry_Statics::NewProp_DataSources_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistry_Statics::NewProp_RuntimeSources_Inner_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** Runtime list of data sources, created from above list and includes sources added at runtime */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataRegistry.h" },
		{ "ToolTip", "Runtime list of data sources, created from above list and includes sources added at runtime" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataRegistry_Statics::NewProp_RuntimeSources_Inner = { "RuntimeSources", nullptr, (EPropertyFlags)0x00060000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataRegistrySource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataRegistry_Statics::NewProp_RuntimeSources_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistry_Statics::NewProp_RuntimeSources_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistry_Statics::NewProp_RuntimeSources_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** Runtime list of data sources, created from above list and includes sources added at runtime */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataRegistry.h" },
		{ "ToolTip", "Runtime list of data sources, created from above list and includes sources added at runtime" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataRegistry_Statics::NewProp_RuntimeSources = { "RuntimeSources", nullptr, (EPropertyFlags)0x0024088000032009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataRegistry, RuntimeSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataRegistry_Statics::NewProp_RuntimeSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistry_Statics::NewProp_RuntimeSources_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistry_Statics::NewProp_TimerUpdateFrequency_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/** How often to check for cache updates */" },
		{ "ModuleRelativePath", "Public/DataRegistry.h" },
		{ "ToolTip", "How often to check for cache updates" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDataRegistry_Statics::NewProp_TimerUpdateFrequency = { "TimerUpdateFrequency", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataRegistry, TimerUpdateFrequency), METADATA_PARAMS(Z_Construct_UClass_UDataRegistry_Statics::NewProp_TimerUpdateFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistry_Statics::NewProp_TimerUpdateFrequency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistry_Statics::NewProp_DefaultCachePolicy_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/** Editor-set cache policy */" },
		{ "ModuleRelativePath", "Public/DataRegistry.h" },
		{ "ToolTip", "Editor-set cache policy" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataRegistry_Statics::NewProp_DefaultCachePolicy = { "DefaultCachePolicy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataRegistry, DefaultCachePolicy), Z_Construct_UScriptStruct_FDataRegistryCachePolicy, METADATA_PARAMS(Z_Construct_UClass_UDataRegistry_Statics::NewProp_DefaultCachePolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistry_Statics::NewProp_DefaultCachePolicy_MetaData)) }; // 2234887824
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistry_Statics::NewProp_RegistryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistry_Statics::NewProp_IdFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistry_Statics::NewProp_ItemStruct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistry_Statics::NewProp_DataSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistry_Statics::NewProp_DataSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistry_Statics::NewProp_RuntimeSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistry_Statics::NewProp_RuntimeSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistry_Statics::NewProp_TimerUpdateFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistry_Statics::NewProp_DefaultCachePolicy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataRegistry_Statics::ClassParams = {
		&UDataRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataRegistry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistry_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataRegistry()
	{
		if (!Z_Registration_Info_UClass_UDataRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataRegistry.OuterSingleton, Z_Construct_UClass_UDataRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataRegistry.OuterSingleton;
	}
	template<> DATAREGISTRY_API UClass* StaticClass<UDataRegistry>()
	{
		return UDataRegistry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataRegistry);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistry_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataRegistry, UDataRegistry::StaticClass, TEXT("UDataRegistry"), &Z_Registration_Info_UClass_UDataRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataRegistry), 3987696879U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistry_h_230904745(TEXT("/Script/DataRegistry"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistry_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
