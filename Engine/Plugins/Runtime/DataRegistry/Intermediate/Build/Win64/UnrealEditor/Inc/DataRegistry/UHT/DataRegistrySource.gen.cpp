// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataRegistrySource.h"
#include "../../Source/Runtime/Engine/Classes/Engine/AssetManagerTypes.h"
#include "DataRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataRegistrySource() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistrySource();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UDataRegistrySource_NoRegister();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UMetaDataRegistrySource();
	DATAREGISTRY_API UClass* Z_Construct_UClass_UMetaDataRegistrySource_NoRegister();
	DATAREGISTRY_API UEnum* Z_Construct_UEnum_DataRegistry_EMetaDataRegistrySourceAssetUsage();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAssetManagerSearchRules();
	UPackage* Z_Construct_UPackage__Script_DataRegistry();
// End Cross Module References
	void UDataRegistrySource::StaticRegisterNativesUDataRegistrySource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataRegistrySource);
	UClass* Z_Construct_UClass_UDataRegistrySource_NoRegister()
	{
		return UDataRegistrySource::StaticClass();
	}
	struct Z_Construct_UClass_UDataRegistrySource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataRegistrySource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DataRegistry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistrySource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Specifies a source for DataRegistry items, which is an interface that provides asynchronous access to individual structs */" },
		{ "IncludePath", "DataRegistrySource.h" },
		{ "ModuleRelativePath", "Public/DataRegistrySource.h" },
		{ "ToolTip", "Specifies a source for DataRegistry items, which is an interface that provides asynchronous access to individual structs" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataRegistrySource_Statics::NewProp_ParentSource_MetaData[] = {
		{ "Comment", "/** What data source we were created from, if this is a transient source */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataRegistrySource.h" },
		{ "ToolTip", "What data source we were created from, if this is a transient source" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataRegistrySource_Statics::NewProp_ParentSource = { "ParentSource", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataRegistrySource, ParentSource), Z_Construct_UClass_UDataRegistrySource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataRegistrySource_Statics::NewProp_ParentSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySource_Statics::NewProp_ParentSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataRegistrySource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataRegistrySource_Statics::NewProp_ParentSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataRegistrySource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataRegistrySource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataRegistrySource_Statics::ClassParams = {
		&UDataRegistrySource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataRegistrySource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySource_Statics::PropPointers),
		0,
		0x00B030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDataRegistrySource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataRegistrySource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataRegistrySource()
	{
		if (!Z_Registration_Info_UClass_UDataRegistrySource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataRegistrySource.OuterSingleton, Z_Construct_UClass_UDataRegistrySource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataRegistrySource.OuterSingleton;
	}
	template<> DATAREGISTRY_API UClass* StaticClass<UDataRegistrySource>()
	{
		return UDataRegistrySource::StaticClass();
	}
	UDataRegistrySource::UDataRegistrySource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataRegistrySource);
	UDataRegistrySource::~UDataRegistrySource() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMetaDataRegistrySourceAssetUsage;
	static UEnum* EMetaDataRegistrySourceAssetUsage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMetaDataRegistrySourceAssetUsage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMetaDataRegistrySourceAssetUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DataRegistry_EMetaDataRegistrySourceAssetUsage, (UObject*)Z_Construct_UPackage__Script_DataRegistry(), TEXT("EMetaDataRegistrySourceAssetUsage"));
		}
		return Z_Registration_Info_UEnum_EMetaDataRegistrySourceAssetUsage.OuterSingleton;
	}
	template<> DATAREGISTRY_API UEnum* StaticEnum<EMetaDataRegistrySourceAssetUsage>()
	{
		return EMetaDataRegistrySourceAssetUsage_StaticEnum();
	}
	struct Z_Construct_UEnum_DataRegistry_EMetaDataRegistrySourceAssetUsage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DataRegistry_EMetaDataRegistrySourceAssetUsage_Statics::Enumerators[] = {
		{ "EMetaDataRegistrySourceAssetUsage::NoAssets", (int64)EMetaDataRegistrySourceAssetUsage::NoAssets },
		{ "EMetaDataRegistrySourceAssetUsage::SearchAssets", (int64)EMetaDataRegistrySourceAssetUsage::SearchAssets },
		{ "EMetaDataRegistrySourceAssetUsage::RegisterAssets", (int64)EMetaDataRegistrySourceAssetUsage::RegisterAssets },
		{ "EMetaDataRegistrySourceAssetUsage::SearchAndRegisterAssets", (int64)EMetaDataRegistrySourceAssetUsage::SearchAndRegisterAssets },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DataRegistry_EMetaDataRegistrySourceAssetUsage_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Rules specifying how a meta source will deal with assets, arranged as a semi-bitfield */" },
		{ "ModuleRelativePath", "Public/DataRegistrySource.h" },
		{ "NoAssets.Comment", "/** Does not use assets, gets sources from somewhere else like a web database */" },
		{ "NoAssets.Name", "EMetaDataRegistrySourceAssetUsage::NoAssets" },
		{ "NoAssets.ToolTip", "Does not use assets, gets sources from somewhere else like a web database" },
		{ "RegisterAssets.Comment", "/** Only accepts registered assets, does not do any scanning */" },
		{ "RegisterAssets.Name", "EMetaDataRegistrySourceAssetUsage::RegisterAssets" },
		{ "RegisterAssets.ToolTip", "Only accepts registered assets, does not do any scanning" },
		{ "SearchAndRegisterAssets.Comment", "/** Both does search and will accept registered assets, using search rules as filter */" },
		{ "SearchAndRegisterAssets.Name", "EMetaDataRegistrySourceAssetUsage::SearchAndRegisterAssets" },
		{ "SearchAndRegisterAssets.ToolTip", "Both does search and will accept registered assets, using search rules as filter" },
		{ "SearchAssets.Comment", "/** Only loads assets off disk, does not accept registered assets */" },
		{ "SearchAssets.Name", "EMetaDataRegistrySourceAssetUsage::SearchAssets" },
		{ "SearchAssets.ToolTip", "Only loads assets off disk, does not accept registered assets" },
		{ "ToolTip", "Rules specifying how a meta source will deal with assets, arranged as a semi-bitfield" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DataRegistry_EMetaDataRegistrySourceAssetUsage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DataRegistry,
		nullptr,
		"EMetaDataRegistrySourceAssetUsage",
		"EMetaDataRegistrySourceAssetUsage",
		Z_Construct_UEnum_DataRegistry_EMetaDataRegistrySourceAssetUsage_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DataRegistry_EMetaDataRegistrySourceAssetUsage_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DataRegistry_EMetaDataRegistrySourceAssetUsage_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DataRegistry_EMetaDataRegistrySourceAssetUsage_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DataRegistry_EMetaDataRegistrySourceAssetUsage()
	{
		if (!Z_Registration_Info_UEnum_EMetaDataRegistrySourceAssetUsage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMetaDataRegistrySourceAssetUsage.InnerSingleton, Z_Construct_UEnum_DataRegistry_EMetaDataRegistrySourceAssetUsage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMetaDataRegistrySourceAssetUsage.InnerSingleton;
	}
	void UMetaDataRegistrySource::StaticRegisterNativesUMetaDataRegistrySource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaDataRegistrySource);
	UClass* Z_Construct_UClass_UMetaDataRegistrySource_NoRegister()
	{
		return UMetaDataRegistrySource::StaticClass();
	}
	struct Z_Construct_UClass_UMetaDataRegistrySource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AssetUsage_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetUsage_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchRules_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SearchRules;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RuntimeChildren_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RuntimeChildren_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeChildren_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RuntimeChildren;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetaDataRegistrySource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataRegistrySource,
		(UObject* (*)())Z_Construct_UPackage__Script_DataRegistry,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaDataRegistrySource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for a data source that generates additional data sources at runtime */" },
		{ "IncludePath", "DataRegistrySource.h" },
		{ "ModuleRelativePath", "Public/DataRegistrySource.h" },
		{ "ToolTip", "Base class for a data source that generates additional data sources at runtime" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_AssetUsage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_AssetUsage_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** Asset usage */" },
		{ "ModuleRelativePath", "Public/DataRegistrySource.h" },
		{ "ToolTip", "Asset usage" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_AssetUsage = { "AssetUsage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaDataRegistrySource, AssetUsage), Z_Construct_UEnum_DataRegistry_EMetaDataRegistrySourceAssetUsage, METADATA_PARAMS(Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_AssetUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_AssetUsage_MetaData)) }; // 922312925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_SearchRules_MetaData[] = {
		{ "Category", "DataRegistry" },
		{ "Comment", "/** Asset registry scan rules */" },
		{ "EditCondition", "AssetUsage != EMetaDataRegistrySourceAssetUsage::NoAssets" },
		{ "ModuleRelativePath", "Public/DataRegistrySource.h" },
		{ "ToolTip", "Asset registry scan rules" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_SearchRules = { "SearchRules", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaDataRegistrySource, SearchRules), Z_Construct_UScriptStruct_FAssetManagerSearchRules, METADATA_PARAMS(Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_SearchRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_SearchRules_MetaData)) }; // 2704440946
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_RuntimeChildren_ValueProp = { "RuntimeChildren", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UDataRegistrySource_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_RuntimeChildren_Key_KeyProp = { "RuntimeChildren_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_RuntimeChildren_MetaData[] = {
		{ "Comment", "/** Map from source identifier such as package name to registered child */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DataRegistrySource.h" },
		{ "ToolTip", "Map from source identifier such as package name to registered child" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_RuntimeChildren = { "RuntimeChildren", nullptr, (EPropertyFlags)0x0024088000002008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaDataRegistrySource, RuntimeChildren), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_RuntimeChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_RuntimeChildren_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaDataRegistrySource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_AssetUsage_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_AssetUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_SearchRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_RuntimeChildren_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_RuntimeChildren_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaDataRegistrySource_Statics::NewProp_RuntimeChildren,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetaDataRegistrySource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaDataRegistrySource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaDataRegistrySource_Statics::ClassParams = {
		&UMetaDataRegistrySource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetaDataRegistrySource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetaDataRegistrySource_Statics::PropPointers),
		0,
		0x00B030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMetaDataRegistrySource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaDataRegistrySource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetaDataRegistrySource()
	{
		if (!Z_Registration_Info_UClass_UMetaDataRegistrySource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaDataRegistrySource.OuterSingleton, Z_Construct_UClass_UMetaDataRegistrySource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetaDataRegistrySource.OuterSingleton;
	}
	template<> DATAREGISTRY_API UClass* StaticClass<UMetaDataRegistrySource>()
	{
		return UMetaDataRegistrySource::StaticClass();
	}
	UMetaDataRegistrySource::UMetaDataRegistrySource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaDataRegistrySource);
	UMetaDataRegistrySource::~UMetaDataRegistrySource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_Statics::EnumInfo[] = {
		{ EMetaDataRegistrySourceAssetUsage_StaticEnum, TEXT("EMetaDataRegistrySourceAssetUsage"), &Z_Registration_Info_UEnum_EMetaDataRegistrySourceAssetUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 922312925U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataRegistrySource, UDataRegistrySource::StaticClass, TEXT("UDataRegistrySource"), &Z_Registration_Info_UClass_UDataRegistrySource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataRegistrySource), 1784867426U) },
		{ Z_Construct_UClass_UMetaDataRegistrySource, UMetaDataRegistrySource::StaticClass, TEXT("UMetaDataRegistrySource"), &Z_Registration_Info_UClass_UMetaDataRegistrySource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaDataRegistrySource), 968020768U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_2645379347(TEXT("/Script/DataRegistry"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_DataRegistry_Source_DataRegistry_Public_DataRegistrySource_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
