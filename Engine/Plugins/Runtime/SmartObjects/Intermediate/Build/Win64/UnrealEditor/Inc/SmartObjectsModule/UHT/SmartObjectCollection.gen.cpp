// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartObjectCollection.h"
#include "SmartObjectPersistentCollection.h"
#include "SmartObjectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectCollection() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_ADEPRECATED_SmartObjectCollection();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_NoRegister();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectDefinition_NoRegister();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectCollectionEntry();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectHandle();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	void ADEPRECATED_SmartObjectCollection::StaticRegisterNativesADEPRECATED_SmartObjectCollection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADEPRECATED_SmartObjectCollection);
	UClass* Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_NoRegister()
	{
		return ADEPRECATED_SmartObjectCollection::StaticClass();
	}
	struct Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bounds;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollectionEntries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollectionEntries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollectionEntries;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredIdToObjectMap_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredIdToObjectMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredIdToObjectMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RegisteredIdToObjectMap;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Definitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Definitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Definitions;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildOnDemand_MetaData[];
#endif
		static void NewProp_bBuildOnDemand_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildOnDemand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildCollectionAutomatically_MetaData[];
#endif
		static void NewProp_bBuildCollectionAutomatically_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildCollectionAutomatically;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Actor holding smart object persistent data */" },
		{ "DeprecationMessage", "SmartObjectCollection class is deprecated. Please use SmartObjectPersistentCollection instead." },
		{ "HideCategories", "Rendering Replication Collision Input HLOD Actor LOD Cooking WorldPartition" },
		{ "IncludePath", "SmartObjectCollection.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/SmartObjectCollection.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Actor holding smart object persistent data" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_Bounds_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectCollection.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADEPRECATED_SmartObjectCollection, Bounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_Bounds_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_CollectionEntries_Inner = { "CollectionEntries", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSmartObjectCollectionEntry, METADATA_PARAMS(nullptr, 0) }; // 886027086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_CollectionEntries_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectCollection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_CollectionEntries = { "CollectionEntries", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADEPRECATED_SmartObjectCollection, CollectionEntries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_CollectionEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_CollectionEntries_MetaData)) }; // 886027086
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_RegisteredIdToObjectMap_ValueProp = { "RegisteredIdToObjectMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_RegisteredIdToObjectMap_Key_KeyProp = { "RegisteredIdToObjectMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSmartObjectHandle, METADATA_PARAMS(nullptr, 0) }; // 3072114966
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_RegisteredIdToObjectMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartObjectCollection.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_RegisteredIdToObjectMap = { "RegisteredIdToObjectMap", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADEPRECATED_SmartObjectCollection, RegisteredIdToObjectMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_RegisteredIdToObjectMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_RegisteredIdToObjectMap_MetaData)) }; // 3072114966
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_Definitions_Inner = { "Definitions", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USmartObjectDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_Definitions_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectCollection.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_Definitions = { "Definitions", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADEPRECATED_SmartObjectCollection, Definitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_Definitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_Definitions_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_bBuildOnDemand_MetaData[] = {
		{ "Comment", "/** This property used to be exposed to the UI editor. It was replaced with bBuildCollectionAutomatically for greater readability. */" },
		{ "ModuleRelativePath", "Public/SmartObjectCollection.h" },
		{ "ToolTip", "This property used to be exposed to the UI editor. It was replaced with bBuildCollectionAutomatically for greater readability." },
	};
#endif
	void Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_bBuildOnDemand_SetBit(void* Obj)
	{
		((ADEPRECATED_SmartObjectCollection*)Obj)->bBuildOnDemand_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_bBuildOnDemand = { "bBuildOnDemand", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADEPRECATED_SmartObjectCollection), &Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_bBuildOnDemand_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_bBuildOnDemand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_bBuildOnDemand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_bBuildCollectionAutomatically_MetaData[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectCollection.h" },
	};
#endif
	void Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_bBuildCollectionAutomatically_SetBit(void* Obj)
	{
		((ADEPRECATED_SmartObjectCollection*)Obj)->bBuildCollectionAutomatically = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_bBuildCollectionAutomatically = { "bBuildCollectionAutomatically", nullptr, (EPropertyFlags)0x00200c0800020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADEPRECATED_SmartObjectCollection), &Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_bBuildCollectionAutomatically_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_bBuildCollectionAutomatically_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_bBuildCollectionAutomatically_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_Bounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_CollectionEntries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_CollectionEntries,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_RegisteredIdToObjectMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_RegisteredIdToObjectMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_RegisteredIdToObjectMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_Definitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_Definitions,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_bBuildOnDemand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::NewProp_bBuildCollectionAutomatically,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADEPRECATED_SmartObjectCollection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::ClassParams = {
		&ADEPRECATED_SmartObjectCollection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::PropPointers),
		0,
		0x029002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADEPRECATED_SmartObjectCollection()
	{
		if (!Z_Registration_Info_UClass_ADEPRECATED_SmartObjectCollection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADEPRECATED_SmartObjectCollection.OuterSingleton, Z_Construct_UClass_ADEPRECATED_SmartObjectCollection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADEPRECATED_SmartObjectCollection.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<ADEPRECATED_SmartObjectCollection>()
	{
		return ADEPRECATED_SmartObjectCollection::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADEPRECATED_SmartObjectCollection);
	ADEPRECATED_SmartObjectCollection::~ADEPRECATED_SmartObjectCollection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectCollection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectCollection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADEPRECATED_SmartObjectCollection, ADEPRECATED_SmartObjectCollection::StaticClass, TEXT("ADEPRECATED_SmartObjectCollection"), &Z_Registration_Info_UClass_ADEPRECATED_SmartObjectCollection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADEPRECATED_SmartObjectCollection), 478846839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectCollection_h_1789055399(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectCollection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectCollection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
