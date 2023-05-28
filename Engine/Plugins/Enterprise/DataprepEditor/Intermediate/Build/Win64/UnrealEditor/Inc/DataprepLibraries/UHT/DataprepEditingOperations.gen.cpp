// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataprepEditingOperations.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MeshMerging.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepEditingOperations() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepEditingOperation();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepCompactSceneGraphOperation();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepCompactSceneGraphOperation_NoRegister();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepCreateProxyMeshOperation();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepCreateProxyMeshOperation_NoRegister();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepDeleteObjectsOperation();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepDeleteObjectsOperation_NoRegister();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepDeleteUnusedAssetsOperation();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepDeleteUnusedAssetsOperation_NoRegister();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepMergeActorsOperation();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepMergeActorsOperation_NoRegister();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepSpawnActorsAtLocation();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepSpawnActorsAtLocation_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings();
	UPackage* Z_Construct_UPackage__Script_DataprepLibraries();
// End Cross Module References
	void UDataprepDeleteObjectsOperation::StaticRegisterNativesUDataprepDeleteObjectsOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepDeleteObjectsOperation);
	UClass* Z_Construct_UClass_UDataprepDeleteObjectsOperation_NoRegister()
	{
		return UDataprepDeleteObjectsOperation::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepDeleteObjectsOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepDeleteObjectsOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepEditingOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepDeleteObjectsOperation_Statics::Class_MetaDataParams[] = {
		{ "Category", "ObjectOperation" },
		{ "DisplayName", "Delete Objects" },
		{ "IncludePath", "DataprepEditingOperations.h" },
		{ "ModuleRelativePath", "Private/DataprepEditingOperations.h" },
		{ "ToolTip", "Delete any asset or actor to process" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepDeleteObjectsOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepDeleteObjectsOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepDeleteObjectsOperation_Statics::ClassParams = {
		&UDataprepDeleteObjectsOperation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDataprepDeleteObjectsOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepDeleteObjectsOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepDeleteObjectsOperation()
	{
		if (!Z_Registration_Info_UClass_UDataprepDeleteObjectsOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepDeleteObjectsOperation.OuterSingleton, Z_Construct_UClass_UDataprepDeleteObjectsOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepDeleteObjectsOperation.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UClass* StaticClass<UDataprepDeleteObjectsOperation>()
	{
		return UDataprepDeleteObjectsOperation::StaticClass();
	}
	UDataprepDeleteObjectsOperation::UDataprepDeleteObjectsOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepDeleteObjectsOperation);
	UDataprepDeleteObjectsOperation::~UDataprepDeleteObjectsOperation() {}
	void UDataprepMergeActorsOperation::StaticRegisterNativesUDataprepMergeActorsOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepMergeActorsOperation);
	UClass* Z_Construct_UClass_UDataprepMergeActorsOperation_NoRegister()
	{
		return UDataprepMergeActorsOperation::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepMergeActorsOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewActorLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewActorLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteMergedActors_MetaData[];
#endif
		static void NewProp_bDeleteMergedActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteMergedActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeleteMergedMeshes_MetaData[];
#endif
		static void NewProp_bDeleteMergedMeshes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeleteMergedMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MergeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MergeSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPivotPointAtZero_MetaData[];
#endif
		static void NewProp_bPivotPointAtZero_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPivotPointAtZero;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepEditingOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::Class_MetaDataParams[] = {
		{ "Category", "ObjectOperation" },
		{ "DisplayName", "Merge" },
		{ "IncludePath", "DataprepEditingOperations.h" },
		{ "ModuleRelativePath", "Private/DataprepEditingOperations.h" },
		{ "ToolTip", "Collect geometry from selected actors and merge them into single mesh." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_NewActorLabel_MetaData[] = {
		{ "Category", "MergeSettings" },
		{ "Comment", "/** Settings to use for the merge operation */" },
		{ "ModuleRelativePath", "Private/DataprepEditingOperations.h" },
		{ "ToolTip", "Settings to use for the merge operation" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_NewActorLabel = { "NewActorLabel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepMergeActorsOperation, NewActorLabel), METADATA_PARAMS(Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_NewActorLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_NewActorLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bDeleteMergedActors_MetaData[] = {
		{ "Comment", "/** Settings to use for the merge operation */" },
		{ "ModuleRelativePath", "Private/DataprepEditingOperations.h" },
		{ "ToolTip", "Settings to use for the merge operation" },
	};
#endif
	void Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bDeleteMergedActors_SetBit(void* Obj)
	{
		((UDataprepMergeActorsOperation*)Obj)->bDeleteMergedActors_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bDeleteMergedActors = { "bDeleteMergedActors", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepMergeActorsOperation), &Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bDeleteMergedActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bDeleteMergedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bDeleteMergedActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bDeleteMergedMeshes_MetaData[] = {
		{ "Comment", "/** Settings to use for the merge operation */" },
		{ "ModuleRelativePath", "Private/DataprepEditingOperations.h" },
		{ "ToolTip", "Settings to use for the merge operation" },
	};
#endif
	void Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bDeleteMergedMeshes_SetBit(void* Obj)
	{
		((UDataprepMergeActorsOperation*)Obj)->bDeleteMergedMeshes_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bDeleteMergedMeshes = { "bDeleteMergedMeshes", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepMergeActorsOperation), &Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bDeleteMergedMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bDeleteMergedMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bDeleteMergedMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_MergeSettings_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataprepEditingOperations.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_MergeSettings = { "MergeSettings", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepMergeActorsOperation, MergeSettings_DEPRECATED), Z_Construct_UScriptStruct_FMeshMergingSettings, METADATA_PARAMS(Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_MergeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_MergeSettings_MetaData)) }; // 1528135240
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bPivotPointAtZero_MetaData[] = {
		{ "Category", "MeshSettings" },
		{ "Comment", "/** Whether merged mesh should have pivot at world origin, or at first merged component otherwise */" },
		{ "ModuleRelativePath", "Private/DataprepEditingOperations.h" },
		{ "ToolTip", "Whether merged mesh should have pivot at world origin, or at first merged component otherwise" },
	};
#endif
	void Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bPivotPointAtZero_SetBit(void* Obj)
	{
		((UDataprepMergeActorsOperation*)Obj)->bPivotPointAtZero = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bPivotPointAtZero = { "bPivotPointAtZero", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepMergeActorsOperation), &Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bPivotPointAtZero_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bPivotPointAtZero_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bPivotPointAtZero_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_NewActorLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bDeleteMergedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bDeleteMergedMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_MergeSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::NewProp_bPivotPointAtZero,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepMergeActorsOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::ClassParams = {
		&UDataprepMergeActorsOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepMergeActorsOperation()
	{
		if (!Z_Registration_Info_UClass_UDataprepMergeActorsOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepMergeActorsOperation.OuterSingleton, Z_Construct_UClass_UDataprepMergeActorsOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepMergeActorsOperation.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UClass* StaticClass<UDataprepMergeActorsOperation>()
	{
		return UDataprepMergeActorsOperation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepMergeActorsOperation);
	UDataprepMergeActorsOperation::~UDataprepMergeActorsOperation() {}
	void UDataprepCreateProxyMeshOperation::StaticRegisterNativesUDataprepCreateProxyMeshOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepCreateProxyMeshOperation);
	UClass* Z_Construct_UClass_UDataprepCreateProxyMeshOperation_NoRegister()
	{
		return UDataprepCreateProxyMeshOperation::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewActorLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewActorLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Quality;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepEditingOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::Class_MetaDataParams[] = {
		{ "Category", "ObjectOperation" },
		{ "DisplayName", "Create Proxy Mesh" },
		{ "IncludePath", "DataprepEditingOperations.h" },
		{ "ModuleRelativePath", "Private/DataprepEditingOperations.h" },
		{ "ToolTip", "Collect geometry from selected actors and merge them into single mesh with reduction." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::NewProp_NewActorLabel_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "Comment", "/** Settings to use for the create proxy operation */" },
		{ "ModuleRelativePath", "Private/DataprepEditingOperations.h" },
		{ "ToolTip", "Settings to use for the create proxy operation" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::NewProp_NewActorLabel = { "NewActorLabel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepCreateProxyMeshOperation, NewActorLabel), METADATA_PARAMS(Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::NewProp_NewActorLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::NewProp_NewActorLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::NewProp_Quality_MetaData[] = {
		{ "Category", "ProxySettings" },
		{ "ModuleRelativePath", "Private/DataprepEditingOperations.h" },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepCreateProxyMeshOperation, Quality), METADATA_PARAMS(Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::NewProp_Quality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::NewProp_Quality_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::NewProp_NewActorLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::NewProp_Quality,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepCreateProxyMeshOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::ClassParams = {
		&UDataprepCreateProxyMeshOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepCreateProxyMeshOperation()
	{
		if (!Z_Registration_Info_UClass_UDataprepCreateProxyMeshOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepCreateProxyMeshOperation.OuterSingleton, Z_Construct_UClass_UDataprepCreateProxyMeshOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepCreateProxyMeshOperation.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UClass* StaticClass<UDataprepCreateProxyMeshOperation>()
	{
		return UDataprepCreateProxyMeshOperation::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepCreateProxyMeshOperation);
	UDataprepCreateProxyMeshOperation::~UDataprepCreateProxyMeshOperation() {}
	void UDataprepDeleteUnusedAssetsOperation::StaticRegisterNativesUDataprepDeleteUnusedAssetsOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepDeleteUnusedAssetsOperation);
	UClass* Z_Construct_UClass_UDataprepDeleteUnusedAssetsOperation_NoRegister()
	{
		return UDataprepDeleteUnusedAssetsOperation::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepDeleteUnusedAssetsOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepDeleteUnusedAssetsOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepEditingOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepDeleteUnusedAssetsOperation_Statics::Class_MetaDataParams[] = {
		{ "Category", "ObjectOperation" },
		{ "DisplayName", "Delete Unused Assets" },
		{ "IncludePath", "DataprepEditingOperations.h" },
		{ "ModuleRelativePath", "Private/DataprepEditingOperations.h" },
		{ "ToolTip", "Delete assets that are not referenced by any objects" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepDeleteUnusedAssetsOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepDeleteUnusedAssetsOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepDeleteUnusedAssetsOperation_Statics::ClassParams = {
		&UDataprepDeleteUnusedAssetsOperation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDataprepDeleteUnusedAssetsOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepDeleteUnusedAssetsOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepDeleteUnusedAssetsOperation()
	{
		if (!Z_Registration_Info_UClass_UDataprepDeleteUnusedAssetsOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepDeleteUnusedAssetsOperation.OuterSingleton, Z_Construct_UClass_UDataprepDeleteUnusedAssetsOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepDeleteUnusedAssetsOperation.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UClass* StaticClass<UDataprepDeleteUnusedAssetsOperation>()
	{
		return UDataprepDeleteUnusedAssetsOperation::StaticClass();
	}
	UDataprepDeleteUnusedAssetsOperation::UDataprepDeleteUnusedAssetsOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepDeleteUnusedAssetsOperation);
	UDataprepDeleteUnusedAssetsOperation::~UDataprepDeleteUnusedAssetsOperation() {}
	void UDataprepCompactSceneGraphOperation::StaticRegisterNativesUDataprepCompactSceneGraphOperation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepCompactSceneGraphOperation);
	UClass* Z_Construct_UClass_UDataprepCompactSceneGraphOperation_NoRegister()
	{
		return UDataprepCompactSceneGraphOperation::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepCompactSceneGraphOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepCompactSceneGraphOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepEditingOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepCompactSceneGraphOperation_Statics::Class_MetaDataParams[] = {
		{ "Category", "ActorOperation" },
		{ "DisplayName", "Compact Scene Graph" },
		{ "IncludePath", "DataprepEditingOperations.h" },
		{ "ModuleRelativePath", "Private/DataprepEditingOperations.h" },
		{ "ToolTip", "Delete actors that do not have visuals, but keep those needed to preserve hierarchy" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepCompactSceneGraphOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepCompactSceneGraphOperation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepCompactSceneGraphOperation_Statics::ClassParams = {
		&UDataprepCompactSceneGraphOperation::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDataprepCompactSceneGraphOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepCompactSceneGraphOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepCompactSceneGraphOperation()
	{
		if (!Z_Registration_Info_UClass_UDataprepCompactSceneGraphOperation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepCompactSceneGraphOperation.OuterSingleton, Z_Construct_UClass_UDataprepCompactSceneGraphOperation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepCompactSceneGraphOperation.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UClass* StaticClass<UDataprepCompactSceneGraphOperation>()
	{
		return UDataprepCompactSceneGraphOperation::StaticClass();
	}
	UDataprepCompactSceneGraphOperation::UDataprepCompactSceneGraphOperation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepCompactSceneGraphOperation);
	UDataprepCompactSceneGraphOperation::~UDataprepCompactSceneGraphOperation() {}
	void UDataprepSpawnActorsAtLocation::StaticRegisterNativesUDataprepSpawnActorsAtLocation()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepSpawnActorsAtLocation);
	UClass* Z_Construct_UClass_UDataprepSpawnActorsAtLocation_NoRegister()
	{
		return UDataprepSpawnActorsAtLocation::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepSpawnActorsAtLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectedAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepSpawnActorsAtLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepEditingOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepSpawnActorsAtLocation_Statics::Class_MetaDataParams[] = {
		{ "Category", "ActorOperation" },
		{ "DisplayName", "Spawn Actors At Location" },
		{ "IncludePath", "DataprepEditingOperations.h" },
		{ "ModuleRelativePath", "Private/DataprepEditingOperations.h" },
		{ "ToolTip", "For each actor in the input set, spawn an actor from the specified Asset at the same position and orientation than the reference" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepSpawnActorsAtLocation_Statics::NewProp_SelectedAsset_MetaData[] = {
		{ "Category", "ActorOperation" },
		{ "ModuleRelativePath", "Private/DataprepEditingOperations.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDataprepSpawnActorsAtLocation_Statics::NewProp_SelectedAsset = { "SelectedAsset", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepSpawnActorsAtLocation, SelectedAsset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDataprepSpawnActorsAtLocation_Statics::NewProp_SelectedAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepSpawnActorsAtLocation_Statics::NewProp_SelectedAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepSpawnActorsAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepSpawnActorsAtLocation_Statics::NewProp_SelectedAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepSpawnActorsAtLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepSpawnActorsAtLocation>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepSpawnActorsAtLocation_Statics::ClassParams = {
		&UDataprepSpawnActorsAtLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepSpawnActorsAtLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepSpawnActorsAtLocation_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepSpawnActorsAtLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepSpawnActorsAtLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepSpawnActorsAtLocation()
	{
		if (!Z_Registration_Info_UClass_UDataprepSpawnActorsAtLocation.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepSpawnActorsAtLocation.OuterSingleton, Z_Construct_UClass_UDataprepSpawnActorsAtLocation_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepSpawnActorsAtLocation.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UClass* StaticClass<UDataprepSpawnActorsAtLocation>()
	{
		return UDataprepSpawnActorsAtLocation::StaticClass();
	}
	UDataprepSpawnActorsAtLocation::UDataprepSpawnActorsAtLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepSpawnActorsAtLocation);
	UDataprepSpawnActorsAtLocation::~UDataprepSpawnActorsAtLocation() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepEditingOperations_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepEditingOperations_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepDeleteObjectsOperation, UDataprepDeleteObjectsOperation::StaticClass, TEXT("UDataprepDeleteObjectsOperation"), &Z_Registration_Info_UClass_UDataprepDeleteObjectsOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepDeleteObjectsOperation), 3633743472U) },
		{ Z_Construct_UClass_UDataprepMergeActorsOperation, UDataprepMergeActorsOperation::StaticClass, TEXT("UDataprepMergeActorsOperation"), &Z_Registration_Info_UClass_UDataprepMergeActorsOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepMergeActorsOperation), 1785395573U) },
		{ Z_Construct_UClass_UDataprepCreateProxyMeshOperation, UDataprepCreateProxyMeshOperation::StaticClass, TEXT("UDataprepCreateProxyMeshOperation"), &Z_Registration_Info_UClass_UDataprepCreateProxyMeshOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepCreateProxyMeshOperation), 2894434187U) },
		{ Z_Construct_UClass_UDataprepDeleteUnusedAssetsOperation, UDataprepDeleteUnusedAssetsOperation::StaticClass, TEXT("UDataprepDeleteUnusedAssetsOperation"), &Z_Registration_Info_UClass_UDataprepDeleteUnusedAssetsOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepDeleteUnusedAssetsOperation), 487561399U) },
		{ Z_Construct_UClass_UDataprepCompactSceneGraphOperation, UDataprepCompactSceneGraphOperation::StaticClass, TEXT("UDataprepCompactSceneGraphOperation"), &Z_Registration_Info_UClass_UDataprepCompactSceneGraphOperation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepCompactSceneGraphOperation), 3859415978U) },
		{ Z_Construct_UClass_UDataprepSpawnActorsAtLocation, UDataprepSpawnActorsAtLocation::StaticClass, TEXT("UDataprepSpawnActorsAtLocation"), &Z_Registration_Info_UClass_UDataprepSpawnActorsAtLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepSpawnActorsAtLocation), 3866033615U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepEditingOperations_h_768841539(TEXT("/Script/DataprepLibraries"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepEditingOperations_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepEditingOperations_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
