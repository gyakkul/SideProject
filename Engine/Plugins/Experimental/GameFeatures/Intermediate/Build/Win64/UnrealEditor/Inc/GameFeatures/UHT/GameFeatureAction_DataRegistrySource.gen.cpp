// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatureAction_DataRegistrySource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_DataRegistrySource() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCurveTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_DataRegistrySource();
	GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_NoRegister();
	GAMEFEATURES_API UScriptStruct* Z_Construct_UScriptStruct_FDataRegistrySourceToAdd();
	UPackage* Z_Construct_UPackage__Script_GameFeatures();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataRegistrySourceToAdd;
class UScriptStruct* FDataRegistrySourceToAdd::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataRegistrySourceToAdd.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataRegistrySourceToAdd.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataRegistrySourceToAdd, (UObject*)Z_Construct_UPackage__Script_GameFeatures(), TEXT("DataRegistrySourceToAdd"));
	}
	return Z_Registration_Info_UScriptStruct_DataRegistrySourceToAdd.OuterSingleton;
}
template<> GAMEFEATURES_API UScriptStruct* StaticStruct<FDataRegistrySourceToAdd>()
{
	return FDataRegistrySourceToAdd::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegistryToAddTo_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RegistryToAddTo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AssetPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClientSource_MetaData[];
#endif
		static void NewProp_bClientSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bServerSource_MetaData[];
#endif
		static void NewProp_bServerSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bServerSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataTableToAdd_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DataTableToAdd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveTableToAdd_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CurveTableToAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Defines which source assets to add and conditions for adding */" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_DataRegistrySource.h" },
		{ "ToolTip", "Defines which source assets to add and conditions for adding" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataRegistrySourceToAdd>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_RegistryToAddTo_MetaData[] = {
		{ "Category", "Registry Data" },
		{ "Comment", "/** Name of the registry to add to */" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_DataRegistrySource.h" },
		{ "ToolTip", "Name of the registry to add to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_RegistryToAddTo = { "RegistryToAddTo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataRegistrySourceToAdd, RegistryToAddTo), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_RegistryToAddTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_RegistryToAddTo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_AssetPriority_MetaData[] = {
		{ "Category", "Registry Data" },
		{ "Comment", "/** Priority to use when adding to the registry.  Higher priorities are searched first */" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_DataRegistrySource.h" },
		{ "ToolTip", "Priority to use when adding to the registry.  Higher priorities are searched first" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_AssetPriority = { "AssetPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataRegistrySourceToAdd, AssetPriority), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_AssetPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_AssetPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_bClientSource_MetaData[] = {
		{ "Category", "Registry Data" },
		{ "Comment", "/** Should this component be added for clients */" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_DataRegistrySource.h" },
		{ "ToolTip", "Should this component be added for clients" },
	};
#endif
	void Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_bClientSource_SetBit(void* Obj)
	{
		((FDataRegistrySourceToAdd*)Obj)->bClientSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_bClientSource = { "bClientSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDataRegistrySourceToAdd), &Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_bClientSource_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_bClientSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_bClientSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_bServerSource_MetaData[] = {
		{ "Category", "Registry Data" },
		{ "Comment", "/** Should this component be added on servers */" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_DataRegistrySource.h" },
		{ "ToolTip", "Should this component be added on servers" },
	};
#endif
	void Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_bServerSource_SetBit(void* Obj)
	{
		((FDataRegistrySourceToAdd*)Obj)->bServerSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_bServerSource = { "bServerSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FDataRegistrySourceToAdd), &Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_bServerSource_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_bServerSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_bServerSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_DataTableToAdd_MetaData[] = {
		{ "Category", "Registry Data" },
		{ "Comment", "/** Link to the data table to add to the registry */" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_DataRegistrySource.h" },
		{ "ToolTip", "Link to the data table to add to the registry" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_DataTableToAdd = { "DataTableToAdd", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataRegistrySourceToAdd, DataTableToAdd), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_DataTableToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_DataTableToAdd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_CurveTableToAdd_MetaData[] = {
		{ "Category", "Registry Data" },
		{ "Comment", "/** Link to the curve table to add to the registry */" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_DataRegistrySource.h" },
		{ "ToolTip", "Link to the curve table to add to the registry" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_CurveTableToAdd = { "CurveTableToAdd", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataRegistrySourceToAdd, CurveTableToAdd), Z_Construct_UClass_UCurveTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_CurveTableToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_CurveTableToAdd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_RegistryToAddTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_AssetPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_bClientSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_bServerSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_DataTableToAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewProp_CurveTableToAdd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
		nullptr,
		&NewStructOps,
		"DataRegistrySourceToAdd",
		sizeof(FDataRegistrySourceToAdd),
		alignof(FDataRegistrySourceToAdd),
		Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataRegistrySourceToAdd()
	{
		if (!Z_Registration_Info_UScriptStruct_DataRegistrySourceToAdd.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataRegistrySourceToAdd.InnerSingleton, Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataRegistrySourceToAdd.InnerSingleton;
	}
	void UGameFeatureAction_DataRegistrySource::StaticRegisterNativesUGameFeatureAction_DataRegistrySource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_DataRegistrySource);
	UClass* Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_NoRegister()
	{
		return UGameFeatureAction_DataRegistrySource::StaticClass();
	}
	struct Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcesToAdd_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcesToAdd_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SourcesToAdd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreloadInEditor_MetaData[];
#endif
		static void NewProp_bPreloadInEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreloadInEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
		(UObject* (*)())Z_Construct_UPackage__Script_GameFeatures,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Specifies a list of source assets to add to Data Registries when this feature is activated */" },
		{ "DisplayName", "Add Data Registry Source" },
		{ "IncludePath", "GameFeatureAction_DataRegistrySource.h" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_DataRegistrySource.h" },
		{ "ToolTip", "Specifies a list of source assets to add to Data Registries when this feature is activated" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::NewProp_SourcesToAdd_Inner = { "SourcesToAdd", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDataRegistrySourceToAdd, METADATA_PARAMS(nullptr, 0) }; // 1897507007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::NewProp_SourcesToAdd_MetaData[] = {
		{ "Category", "Registry Data" },
		{ "Comment", "/** List of sources to add when this feature is activated */" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_DataRegistrySource.h" },
		{ "ToolTip", "List of sources to add when this feature is activated" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::NewProp_SourcesToAdd = { "SourcesToAdd", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameFeatureAction_DataRegistrySource, SourcesToAdd), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::NewProp_SourcesToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::NewProp_SourcesToAdd_MetaData)) }; // 1897507007
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::NewProp_bPreloadInEditor_MetaData[] = {
		{ "Category", "Registry Data" },
		{ "Comment", "/** If true, this will preload the sources when the feature is registered in the editor to support the editor pickers */" },
		{ "ModuleRelativePath", "Public/GameFeatureAction_DataRegistrySource.h" },
		{ "ToolTip", "If true, this will preload the sources when the feature is registered in the editor to support the editor pickers" },
	};
#endif
	void Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::NewProp_bPreloadInEditor_SetBit(void* Obj)
	{
		((UGameFeatureAction_DataRegistrySource*)Obj)->bPreloadInEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::NewProp_bPreloadInEditor = { "bPreloadInEditor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGameFeatureAction_DataRegistrySource), &Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::NewProp_bPreloadInEditor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::NewProp_bPreloadInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::NewProp_bPreloadInEditor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::NewProp_SourcesToAdd_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::NewProp_SourcesToAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::NewProp_bPreloadInEditor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_DataRegistrySource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::ClassParams = {
		&UGameFeatureAction_DataRegistrySource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::PropPointers),
		0,
		0x002810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFeatureAction_DataRegistrySource()
	{
		if (!Z_Registration_Info_UClass_UGameFeatureAction_DataRegistrySource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_DataRegistrySource.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_DataRegistrySource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFeatureAction_DataRegistrySource.OuterSingleton;
	}
	template<> GAMEFEATURES_API UClass* StaticClass<UGameFeatureAction_DataRegistrySource>()
	{
		return UGameFeatureAction_DataRegistrySource::StaticClass();
	}
	UGameFeatureAction_DataRegistrySource::UGameFeatureAction_DataRegistrySource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_DataRegistrySource);
	UGameFeatureAction_DataRegistrySource::~UGameFeatureAction_DataRegistrySource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistrySource_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistrySource_h_Statics::ScriptStructInfo[] = {
		{ FDataRegistrySourceToAdd::StaticStruct, Z_Construct_UScriptStruct_FDataRegistrySourceToAdd_Statics::NewStructOps, TEXT("DataRegistrySourceToAdd"), &Z_Registration_Info_UScriptStruct_DataRegistrySourceToAdd, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataRegistrySourceToAdd), 1897507007U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistrySource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_DataRegistrySource, UGameFeatureAction_DataRegistrySource::StaticClass, TEXT("UGameFeatureAction_DataRegistrySource"), &Z_Registration_Info_UClass_UGameFeatureAction_DataRegistrySource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_DataRegistrySource), 3623111604U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistrySource_h_2820933569(TEXT("/Script/GameFeatures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistrySource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistrySource_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistrySource_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameFeatures_Source_GameFeatures_Public_GameFeatureAction_DataRegistrySource_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
