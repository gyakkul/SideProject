// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PresetAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePresetAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PRESETASSET_API UClass* Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset();
	PRESETASSET_API UClass* Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_NoRegister();
	PRESETASSET_API UClass* Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory();
	PRESETASSET_API UClass* Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_NoRegister();
	PRESETASSET_API UScriptStruct* Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion();
	PRESETASSET_API UScriptStruct* Z_Construct_UScriptStruct_FInteractiveToolPresetStore();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_PresetAsset();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractiveToolPresetDefintion;
class UScriptStruct* FInteractiveToolPresetDefintion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractiveToolPresetDefintion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractiveToolPresetDefintion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion, (UObject*)Z_Construct_UPackage__Script_PresetAsset(), TEXT("InteractiveToolPresetDefintion"));
	}
	return Z_Registration_Info_UScriptStruct_InteractiveToolPresetDefintion.OuterSingleton;
}
template<> PRESETASSET_API UScriptStruct* StaticStruct<FInteractiveToolPresetDefintion>()
{
	return FInteractiveToolPresetDefintion::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tooltip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PresetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractiveToolPresetDefintion>();
	}
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "PresetAsset" },
		{ "ModuleRelativePath", "Public/PresetAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractiveToolPresetDefintion, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::NewProp_Properties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::NewProp_Label_MetaData[] = {
		{ "Category", "PresetAsset" },
		{ "ModuleRelativePath", "Public/PresetAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractiveToolPresetDefintion, Label), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::NewProp_Tooltip_MetaData[] = {
		{ "Category", "PresetAsset" },
		{ "ModuleRelativePath", "Public/PresetAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractiveToolPresetDefintion, Tooltip), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::NewProp_Tooltip_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::NewProp_Tooltip,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PresetAsset,
		nullptr,
		&NewStructOps,
		"InteractiveToolPresetDefintion",
		sizeof(FInteractiveToolPresetDefintion),
		alignof(FInteractiveToolPresetDefintion),
		Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion()
	{
		if (!Z_Registration_Info_UScriptStruct_InteractiveToolPresetDefintion.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractiveToolPresetDefintion.InnerSingleton, Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InteractiveToolPresetDefintion.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InteractiveToolPresetStore;
class UScriptStruct* FInteractiveToolPresetStore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InteractiveToolPresetStore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InteractiveToolPresetStore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractiveToolPresetStore, (UObject*)Z_Construct_UPackage__Script_PresetAsset(), TEXT("InteractiveToolPresetStore"));
	}
	return Z_Registration_Info_UScriptStruct_InteractiveToolPresetStore.OuterSingleton;
}
template<> PRESETASSET_API UScriptStruct* StaticStruct<FInteractiveToolPresetStore>()
{
	return FInteractiveToolPresetStore::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_NamedPresets_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_NamedPresets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamedPresets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NamedPresets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PresetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractiveToolPresetStore>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_NamedPresets_ValueProp = { "NamedPresets", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion, METADATA_PARAMS(nullptr, 0) }; // 2485299382
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_NamedPresets_Key_KeyProp = { "NamedPresets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_NamedPresets_MetaData[] = {
		{ "Category", "PresetAsset" },
		{ "ModuleRelativePath", "Public/PresetAsset.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_NamedPresets = { "NamedPresets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInteractiveToolPresetStore, NamedPresets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_NamedPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_NamedPresets_MetaData)) }; // 2485299382
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_NamedPresets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_NamedPresets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewProp_NamedPresets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PresetAsset,
		nullptr,
		&NewStructOps,
		"InteractiveToolPresetStore",
		sizeof(FInteractiveToolPresetStore),
		alignof(FInteractiveToolPresetStore),
		Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractiveToolPresetStore()
	{
		if (!Z_Registration_Info_UScriptStruct_InteractiveToolPresetStore.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InteractiveToolPresetStore.InnerSingleton, Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InteractiveToolPresetStore.InnerSingleton;
	}
	void UInteractiveToolsPresetCollectionAsset::StaticRegisterNativesUInteractiveToolsPresetCollectionAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolsPresetCollectionAsset);
	UClass* Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_NoRegister()
	{
		return UInteractiveToolsPresetCollectionAsset::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerToolPresets_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PerToolPresets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerToolPresets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PerToolPresets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PresetAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implements an asset that can be used to store tool settings as a named preset\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "PresetAsset.h" },
		{ "ModuleRelativePath", "Public/PresetAsset.h" },
		{ "ToolTip", "Implements an asset that can be used to store tool settings as a named preset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_PerToolPresets_ValueProp = { "PerToolPresets", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FInteractiveToolPresetStore, METADATA_PARAMS(nullptr, 0) }; // 616891549
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_PerToolPresets_Key_KeyProp = { "PerToolPresets_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_PerToolPresets_MetaData[] = {
		{ "Category", "PresetAsset" },
		{ "Comment", "// TODO: Currently there are no helper methods within this class, simply providing\n// raw access to the underlying arrays and maps. This is intentional.\n// Until the design of the preset concept is more firmly decided, it seems like a waste to\n// implement a bunch of methods that we don't know if we actually want/need at the end.\n// Once we are satisifed with the data structure, planned accessors and mutators will include\n// support for adding, removing, renaming, saving and retrieving presets.\n" },
		{ "ModuleRelativePath", "Public/PresetAsset.h" },
		{ "ToolTip", "TODO: Currently there are no helper methods within this class, simply providing\nraw access to the underlying arrays and maps. This is intentional.\nUntil the design of the preset concept is more firmly decided, it seems like a waste to\nimplement a bunch of methods that we don't know if we actually want/need at the end.\nOnce we are satisifed with the data structure, planned accessors and mutators will include\nsupport for adding, removing, renaming, saving and retrieving presets." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_PerToolPresets = { "PerToolPresets", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractiveToolsPresetCollectionAsset, PerToolPresets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_PerToolPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_PerToolPresets_MetaData)) }; // 616891549
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_PerToolPresets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_PerToolPresets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::NewProp_PerToolPresets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveToolsPresetCollectionAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::ClassParams = {
		&UInteractiveToolsPresetCollectionAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset()
	{
		if (!Z_Registration_Info_UClass_UInteractiveToolsPresetCollectionAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolsPresetCollectionAsset.OuterSingleton, Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveToolsPresetCollectionAsset.OuterSingleton;
	}
	template<> PRESETASSET_API UClass* StaticClass<UInteractiveToolsPresetCollectionAsset>()
	{
		return UInteractiveToolsPresetCollectionAsset::StaticClass();
	}
	UInteractiveToolsPresetCollectionAsset::UInteractiveToolsPresetCollectionAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolsPresetCollectionAsset);
	UInteractiveToolsPresetCollectionAsset::~UInteractiveToolsPresetCollectionAsset() {}
	void UInteractiveToolsPresetCollectionAssetFactory::StaticRegisterNativesUInteractiveToolsPresetCollectionAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolsPresetCollectionAssetFactory);
	UClass* Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_NoRegister()
	{
		return UInteractiveToolsPresetCollectionAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_PresetAsset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "PresetAsset.h" },
		{ "ModuleRelativePath", "Public/PresetAsset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveToolsPresetCollectionAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_Statics::ClassParams = {
		&UInteractiveToolsPresetCollectionAssetFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UInteractiveToolsPresetCollectionAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolsPresetCollectionAssetFactory.OuterSingleton, Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveToolsPresetCollectionAssetFactory.OuterSingleton;
	}
	template<> PRESETASSET_API UClass* StaticClass<UInteractiveToolsPresetCollectionAssetFactory>()
	{
		return UInteractiveToolsPresetCollectionAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolsPresetCollectionAssetFactory);
	UInteractiveToolsPresetCollectionAssetFactory::~UInteractiveToolsPresetCollectionAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_PresetAsset_Public_PresetAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_PresetAsset_Public_PresetAsset_h_Statics::ScriptStructInfo[] = {
		{ FInteractiveToolPresetDefintion::StaticStruct, Z_Construct_UScriptStruct_FInteractiveToolPresetDefintion_Statics::NewStructOps, TEXT("InteractiveToolPresetDefintion"), &Z_Registration_Info_UScriptStruct_InteractiveToolPresetDefintion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractiveToolPresetDefintion), 2485299382U) },
		{ FInteractiveToolPresetStore::StaticStruct, Z_Construct_UScriptStruct_FInteractiveToolPresetStore_Statics::NewStructOps, TEXT("InteractiveToolPresetStore"), &Z_Registration_Info_UScriptStruct_InteractiveToolPresetStore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInteractiveToolPresetStore), 616891549U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_PresetAsset_Public_PresetAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveToolsPresetCollectionAsset, UInteractiveToolsPresetCollectionAsset::StaticClass, TEXT("UInteractiveToolsPresetCollectionAsset"), &Z_Registration_Info_UClass_UInteractiveToolsPresetCollectionAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolsPresetCollectionAsset), 4042048555U) },
		{ Z_Construct_UClass_UInteractiveToolsPresetCollectionAssetFactory, UInteractiveToolsPresetCollectionAssetFactory::StaticClass, TEXT("UInteractiveToolsPresetCollectionAssetFactory"), &Z_Registration_Info_UClass_UInteractiveToolsPresetCollectionAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolsPresetCollectionAssetFactory), 824719290U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_PresetAsset_Public_PresetAsset_h_2329384362(TEXT("/Script/PresetAsset"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_PresetAsset_Public_PresetAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_PresetAsset_Public_PresetAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_PresetAsset_Public_PresetAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ToolPresets_Source_PresetAsset_Public_PresetAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
