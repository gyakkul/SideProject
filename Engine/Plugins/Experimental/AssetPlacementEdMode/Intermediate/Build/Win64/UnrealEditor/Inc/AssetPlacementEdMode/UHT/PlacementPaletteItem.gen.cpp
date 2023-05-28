// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PlacementPaletteItem.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlacementPaletteItem() {}
// Cross Module References
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementPaletteClient();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementPaletteClient_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UAssetFactoryInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedPlacemenClientSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AssetPlacementEdMode();
// End Cross Module References
	void UPlacementPaletteClient::StaticRegisterNativesUPlacementPaletteClient()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementPaletteClient);
	UClass* Z_Construct_UClass_UPlacementPaletteClient_NoRegister()
	{
		return UPlacementPaletteClient::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementPaletteClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClientGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClientGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SettingsObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FactoryInterface_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_FactoryInterface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementPaletteClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementPaletteClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlacementPaletteItem.h" },
		{ "ModuleRelativePath", "Private/PlacementPaletteItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_AssetPath_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PlacementPaletteItem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlacementPaletteClient, AssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_AssetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_ClientGuid_MetaData[] = {
		{ "ModuleRelativePath", "Private/PlacementPaletteItem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_ClientGuid = { "ClientGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlacementPaletteClient, ClientGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_ClientGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_ClientGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_SettingsObject_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/PlacementPaletteItem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_SettingsObject = { "SettingsObject", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlacementPaletteClient, SettingsObject), Z_Construct_UClass_UInstancedPlacemenClientSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_SettingsObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_SettingsObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_FactoryInterface_MetaData[] = {
		{ "ModuleRelativePath", "Private/PlacementPaletteItem.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_FactoryInterface = { "FactoryInterface", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlacementPaletteClient, FactoryInterface), Z_Construct_UClass_UAssetFactoryInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_FactoryInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_FactoryInterface_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlacementPaletteClient_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_ClientGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_SettingsObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlacementPaletteClient_Statics::NewProp_FactoryInterface,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementPaletteClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementPaletteClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementPaletteClient_Statics::ClassParams = {
		&UPlacementPaletteClient::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlacementPaletteClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementPaletteClient_Statics::PropPointers),
		0,
		0x000002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlacementPaletteClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementPaletteClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementPaletteClient()
	{
		if (!Z_Registration_Info_UClass_UPlacementPaletteClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementPaletteClient.OuterSingleton, Z_Construct_UClass_UPlacementPaletteClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementPaletteClient.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementPaletteClient>()
	{
		return UPlacementPaletteClient::StaticClass();
	}
	UPlacementPaletteClient::UPlacementPaletteClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementPaletteClient);
	UPlacementPaletteClient::~UPlacementPaletteClient() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPlacementPaletteClient)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_PlacementPaletteItem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_PlacementPaletteItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlacementPaletteClient, UPlacementPaletteClient::StaticClass, TEXT("UPlacementPaletteClient"), &Z_Registration_Info_UClass_UPlacementPaletteClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementPaletteClient), 2490762993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_PlacementPaletteItem_h_3049688208(TEXT("/Script/AssetPlacementEdMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_PlacementPaletteItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_PlacementPaletteItem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
