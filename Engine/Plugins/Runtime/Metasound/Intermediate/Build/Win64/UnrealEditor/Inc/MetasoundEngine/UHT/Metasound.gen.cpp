// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Metasound.h"
#include "MetasoundFrontendDocument.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasound() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
	METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundEditorGraphBase();
	METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundEditorGraphBase_NoRegister();
	METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundPatch();
	METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundPatch_NoRegister();
	METASOUNDFRONTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMetasoundFrontendDocument();
	UPackage* Z_Construct_UPackage__Script_MetasoundEngine();
// End Cross Module References
	void UMetasoundEditorGraphBase::StaticRegisterNativesUMetasoundEditorGraphBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundEditorGraphBase);
	UClass* Z_Construct_UClass_UMetasoundEditorGraphBase_NoRegister()
	{
		return UMetasoundEditorGraphBase::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundEditorGraphBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundEditorGraphBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraph,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundEditorGraphBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Metasound.h" },
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundEditorGraphBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundEditorGraphBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundEditorGraphBase_Statics::ClassParams = {
		&UMetasoundEditorGraphBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundEditorGraphBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundEditorGraphBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundEditorGraphBase()
	{
		if (!Z_Registration_Info_UClass_UMetasoundEditorGraphBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundEditorGraphBase.OuterSingleton, Z_Construct_UClass_UMetasoundEditorGraphBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundEditorGraphBase.OuterSingleton;
	}
	template<> METASOUNDENGINE_API UClass* StaticClass<UMetasoundEditorGraphBase>()
	{
		return UMetasoundEditorGraphBase::StaticClass();
	}
	UMetasoundEditorGraphBase::UMetasoundEditorGraphBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundEditorGraphBase);
	UMetasoundEditorGraphBase::~UMetasoundEditorGraphBase() {}
	void UMetaSoundPatch::StaticRegisterNativesUMetaSoundPatch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundPatch);
	UClass* Z_Construct_UClass_UMetaSoundPatch_NoRegister()
	{
		return UMetaSoundPatch::StaticClass();
	}
	struct Z_Construct_UClass_UMetaSoundPatch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootMetaSoundDocument_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootMetaSoundDocument;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReferencedAssetClassKeys_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedAssetClassKeys_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReferencedAssetClassKeys;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferencedAssetClassObjects_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedAssetClassObjects_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReferencedAssetClassObjects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferenceAssetClassCache_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceAssetClassCache_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReferenceAssetClassCache;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Graph;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetClassID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetClassID;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegistryInputTypes_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RegistryInputTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegistryOutputTypes_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RegistryOutputTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegistryVersionMajor_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegistryVersionMajor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegistryVersionMinor_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RegistryVersionMinor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPreset_MetaData[];
#endif
		static void NewProp_bIsPreset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPreset;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetaSoundPatch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundPatch_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This asset type is used for Metasound assets that can only be used as nodes in other Metasound graphs.\n * Because of this, they contain no required inputs or outputs.\n */" },
		{ "HideCategories", "object" },
		{ "IncludePath", "Metasound.h" },
		{ "ModuleRelativePath", "Public/Metasound.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This asset type is used for Metasound assets that can only be used as nodes in other Metasound graphs.\nBecause of this, they contain no required inputs or outputs." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RootMetaSoundDocument_MetaData[] = {
		{ "Category", "CustomView" },
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RootMetaSoundDocument = { "RootMetaSoundDocument", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaSoundPatch, RootMetaSoundDocument), Z_Construct_UScriptStruct_FMetasoundFrontendDocument, METADATA_PARAMS(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RootMetaSoundDocument_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RootMetaSoundDocument_MetaData)) }; // 2970419005
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassKeys_ElementProp = { "ReferencedAssetClassKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassKeys = { "ReferencedAssetClassKeys", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaSoundPatch, ReferencedAssetClassKeys), METADATA_PARAMS(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassKeys_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassObjects_ElementProp = { "ReferencedAssetClassObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassObjects = { "ReferencedAssetClassObjects", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaSoundPatch, ReferencedAssetClassObjects), METADATA_PARAMS(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassObjects_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferenceAssetClassCache_ElementProp = { "ReferenceAssetClassCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferenceAssetClassCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
#endif
	static_assert(TModels<CGetTypeHashable, FSoftObjectPath>::Value, "The structure 'FSoftObjectPath' is used in a TSet but does not have a GetValueTypeHash defined");
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferenceAssetClassCache = { "ReferenceAssetClassCache", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaSoundPatch, ReferenceAssetClassCache), METADATA_PARAMS(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferenceAssetClassCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferenceAssetClassCache_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_Graph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaSoundPatch, Graph), Z_Construct_UClass_UMetasoundEditorGraphBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_Graph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_Graph_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_AssetClassID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_AssetClassID = { "AssetClassID", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaSoundPatch, AssetClassID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_AssetClassID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_AssetClassID_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryInputTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryInputTypes = { "RegistryInputTypes", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaSoundPatch, RegistryInputTypes), METADATA_PARAMS(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryInputTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryInputTypes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryOutputTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryOutputTypes = { "RegistryOutputTypes", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaSoundPatch, RegistryOutputTypes), METADATA_PARAMS(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryOutputTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryOutputTypes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryVersionMajor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryVersionMajor = { "RegistryVersionMajor", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaSoundPatch, RegistryVersionMajor), METADATA_PARAMS(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryVersionMajor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryVersionMajor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryVersionMinor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryVersionMinor = { "RegistryVersionMinor", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaSoundPatch, RegistryVersionMinor), METADATA_PARAMS(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryVersionMinor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryVersionMinor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_bIsPreset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Metasound.h" },
	};
#endif
	void Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_bIsPreset_SetBit(void* Obj)
	{
		((UMetaSoundPatch*)Obj)->bIsPreset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_bIsPreset = { "bIsPreset", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMetaSoundPatch), &Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_bIsPreset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_bIsPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_bIsPreset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaSoundPatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RootMetaSoundDocument,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassKeys_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassObjects_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferencedAssetClassObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferenceAssetClassCache_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_ReferenceAssetClassCache,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_Graph,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_AssetClassID,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryInputTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryOutputTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryVersionMajor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_RegistryVersionMinor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundPatch_Statics::NewProp_bIsPreset,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetaSoundPatch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundPatch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundPatch_Statics::ClassParams = {
		&UMetaSoundPatch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetaSoundPatch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatch_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetaSoundPatch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundPatch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetaSoundPatch()
	{
		if (!Z_Registration_Info_UClass_UMetaSoundPatch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundPatch.OuterSingleton, Z_Construct_UClass_UMetaSoundPatch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetaSoundPatch.OuterSingleton;
	}
	template<> METASOUNDENGINE_API UClass* StaticClass<UMetaSoundPatch>()
	{
		return UMetaSoundPatch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundPatch);
	UMetaSoundPatch::~UMetaSoundPatch() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMetaSoundPatch)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMetasoundEditorGraphBase, UMetasoundEditorGraphBase::StaticClass, TEXT("UMetasoundEditorGraphBase"), &Z_Registration_Info_UClass_UMetasoundEditorGraphBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundEditorGraphBase), 769854980U) },
		{ Z_Construct_UClass_UMetaSoundPatch, UMetaSoundPatch::StaticClass, TEXT("UMetaSoundPatch"), &Z_Registration_Info_UClass_UMetaSoundPatch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundPatch), 1885264971U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_2789935045(TEXT("/Script/MetasoundEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_Metasound_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
