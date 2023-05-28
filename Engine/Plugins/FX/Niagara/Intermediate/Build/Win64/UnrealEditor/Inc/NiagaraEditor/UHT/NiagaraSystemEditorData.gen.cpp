// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraSystemEditorData.h"
#include "../Public/NiagaraEditorDataBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSystemEditorData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorDataBase();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraGraphViewSettings();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraHierarchyRoot_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraScriptVariable_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraStackEditorData_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSystemEditorData();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSystemEditorData_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSystemEditorFolder();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraSystemEditorFolder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraSystemEditorFolder::StaticRegisterNativesUNiagaraSystemEditorFolder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSystemEditorFolder);
	UClass* Z_Construct_UClass_UNiagaraSystemEditorFolder_NoRegister()
	{
		return UNiagaraSystemEditorFolder::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FolderName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FolderName;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildFolders_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildFolders_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildFolders;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildEmitterHandleIds_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildEmitterHandleIds_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildEmitterHandleIds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Editor only folder data for emitters in a system. */" },
		{ "IncludePath", "NiagaraSystemEditorData.h" },
		{ "ModuleRelativePath", "Public/NiagaraSystemEditorData.h" },
		{ "ToolTip", "Editor only folder data for emitters in a system." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::NewProp_FolderName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSystemEditorData.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::NewProp_FolderName = { "FolderName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemEditorFolder, FolderName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::NewProp_FolderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::NewProp_FolderName_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::NewProp_ChildFolders_Inner = { "ChildFolders", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraSystemEditorFolder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::NewProp_ChildFolders_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSystemEditorData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::NewProp_ChildFolders = { "ChildFolders", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemEditorFolder, ChildFolders), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::NewProp_ChildFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::NewProp_ChildFolders_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::NewProp_ChildEmitterHandleIds_Inner = { "ChildEmitterHandleIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::NewProp_ChildEmitterHandleIds_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSystemEditorData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::NewProp_ChildEmitterHandleIds = { "ChildEmitterHandleIds", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemEditorFolder, ChildEmitterHandleIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::NewProp_ChildEmitterHandleIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::NewProp_ChildEmitterHandleIds_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::NewProp_FolderName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::NewProp_ChildFolders_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::NewProp_ChildFolders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::NewProp_ChildEmitterHandleIds_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::NewProp_ChildEmitterHandleIds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSystemEditorFolder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::ClassParams = {
		&UNiagaraSystemEditorFolder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSystemEditorFolder()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSystemEditorFolder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSystemEditorFolder.OuterSingleton, Z_Construct_UClass_UNiagaraSystemEditorFolder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSystemEditorFolder.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraSystemEditorFolder>()
	{
		return UNiagaraSystemEditorFolder::StaticClass();
	}
	UNiagaraSystemEditorFolder::UNiagaraSystemEditorFolder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSystemEditorFolder);
	UNiagaraSystemEditorFolder::~UNiagaraSystemEditorFolder() {}
	void UNiagaraSystemEditorData::StaticRegisterNativesUNiagaraSystemEditorData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraSystemEditorData);
	UClass* Z_Construct_UClass_UNiagaraSystemEditorData_NoRegister()
	{
		return UNiagaraSystemEditorData::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSystemEditorData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSetOrbitModeByAsset_MetaData[];
#endif
		static void NewProp_bSetOrbitModeByAsset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetOrbitModeByAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSystemViewportInOrbitMode_MetaData[];
#endif
		static void NewProp_bSystemViewportInOrbitMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSystemViewportInOrbitMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserParameterHierarchy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UserParameterHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootFolder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StackEditorData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StackEditorData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackRangeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackRangeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackRangeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlaybackRangeMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SystemOverviewGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SystemOverviewGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverviewGraphViewSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverviewGraphViewSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSystemIsPlaceholder_MetaData[];
#endif
		static void NewProp_bSystemIsPlaceholder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSystemIsPlaceholder;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UserParameterMetaData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserParameterMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UserParameterMetaData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSystemEditorData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraEditorDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemEditorData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Editor only data for systems. */" },
		{ "IncludePath", "NiagaraSystemEditorData.h" },
		{ "ModuleRelativePath", "Public/NiagaraSystemEditorData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Editor only data for systems." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSetOrbitModeByAsset_MetaData[] = {
		{ "Comment", "// If true then the preview viewport's orbit setting is saved in the asset data\n" },
		{ "ModuleRelativePath", "Public/NiagaraSystemEditorData.h" },
		{ "ToolTip", "If true then the preview viewport's orbit setting is saved in the asset data" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSetOrbitModeByAsset_SetBit(void* Obj)
	{
		((UNiagaraSystemEditorData*)Obj)->bSetOrbitModeByAsset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSetOrbitModeByAsset = { "bSetOrbitModeByAsset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSystemEditorData), &Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSetOrbitModeByAsset_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSetOrbitModeByAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSetOrbitModeByAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSystemViewportInOrbitMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSystemEditorData.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSystemViewportInOrbitMode_SetBit(void* Obj)
	{
		((UNiagaraSystemEditorData*)Obj)->bSystemViewportInOrbitMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSystemViewportInOrbitMode = { "bSystemViewportInOrbitMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSystemEditorData), &Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSystemViewportInOrbitMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSystemViewportInOrbitMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSystemViewportInOrbitMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_UserParameterHierarchy_MetaData[] = {
		{ "Comment", "/** Contains the root ids for organizing user parameters. */" },
		{ "ModuleRelativePath", "Public/NiagaraSystemEditorData.h" },
		{ "ToolTip", "Contains the root ids for organizing user parameters." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_UserParameterHierarchy = { "UserParameterHierarchy", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemEditorData, UserParameterHierarchy), Z_Construct_UClass_UNiagaraHierarchyRoot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_UserParameterHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_UserParameterHierarchy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_RootFolder_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraSystemEditorData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_RootFolder = { "RootFolder", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemEditorData, RootFolder), Z_Construct_UClass_UNiagaraSystemEditorFolder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_RootFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_RootFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_StackEditorData_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraSystemEditorData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_StackEditorData = { "StackEditorData", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemEditorData, StackEditorData), Z_Construct_UClass_UNiagaraStackEditorData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_StackEditorData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_StackEditorData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_OwnerTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSystemEditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_OwnerTransform = { "OwnerTransform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemEditorData, OwnerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_OwnerTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_OwnerTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_PlaybackRangeMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSystemEditorData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_PlaybackRangeMin = { "PlaybackRangeMin", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemEditorData, PlaybackRangeMin), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_PlaybackRangeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_PlaybackRangeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_PlaybackRangeMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSystemEditorData.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_PlaybackRangeMax = { "PlaybackRangeMax", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemEditorData, PlaybackRangeMax), METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_PlaybackRangeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_PlaybackRangeMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_SystemOverviewGraph_MetaData[] = {
		{ "Comment", "/** Graph presenting overview of the current system and its emitters. */" },
		{ "ModuleRelativePath", "Public/NiagaraSystemEditorData.h" },
		{ "ToolTip", "Graph presenting overview of the current system and its emitters." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_SystemOverviewGraph = { "SystemOverviewGraph", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemEditorData, SystemOverviewGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_SystemOverviewGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_SystemOverviewGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_OverviewGraphViewSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSystemEditorData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_OverviewGraphViewSettings = { "OverviewGraphViewSettings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemEditorData, OverviewGraphViewSettings), Z_Construct_UScriptStruct_FNiagaraGraphViewSettings, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_OverviewGraphViewSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_OverviewGraphViewSettings_MetaData)) }; // 2452467117
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSystemIsPlaceholder_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSystemEditorData.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSystemIsPlaceholder_SetBit(void* Obj)
	{
		((UNiagaraSystemEditorData*)Obj)->bSystemIsPlaceholder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSystemIsPlaceholder = { "bSystemIsPlaceholder", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraSystemEditorData), &Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSystemIsPlaceholder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSystemIsPlaceholder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSystemIsPlaceholder_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_UserParameterMetaData_Inner = { "UserParameterMetaData", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraScriptVariable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_UserParameterMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSystemEditorData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_UserParameterMetaData = { "UserParameterMetaData", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraSystemEditorData, UserParameterMetaData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_UserParameterMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_UserParameterMetaData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSystemEditorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSetOrbitModeByAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSystemViewportInOrbitMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_UserParameterHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_RootFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_StackEditorData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_OwnerTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_PlaybackRangeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_PlaybackRangeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_SystemOverviewGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_OverviewGraphViewSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_bSystemIsPlaceholder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_UserParameterMetaData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSystemEditorData_Statics::NewProp_UserParameterMetaData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSystemEditorData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSystemEditorData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSystemEditorData_Statics::ClassParams = {
		&UNiagaraSystemEditorData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraSystemEditorData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSystemEditorData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSystemEditorData()
	{
		if (!Z_Registration_Info_UClass_UNiagaraSystemEditorData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraSystemEditorData.OuterSingleton, Z_Construct_UClass_UNiagaraSystemEditorData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraSystemEditorData.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraSystemEditorData>()
	{
		return UNiagaraSystemEditorData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSystemEditorData);
	UNiagaraSystemEditorData::~UNiagaraSystemEditorData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSystemEditorData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSystemEditorData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraSystemEditorFolder, UNiagaraSystemEditorFolder::StaticClass, TEXT("UNiagaraSystemEditorFolder"), &Z_Registration_Info_UClass_UNiagaraSystemEditorFolder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSystemEditorFolder), 3511642750U) },
		{ Z_Construct_UClass_UNiagaraSystemEditorData, UNiagaraSystemEditorData::StaticClass, TEXT("UNiagaraSystemEditorData"), &Z_Registration_Info_UClass_UNiagaraSystemEditorData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraSystemEditorData), 1526701253U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSystemEditorData_h_1586411265(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSystemEditorData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraSystemEditorData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
