// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Data/FilterLoader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFilterLoader() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_UFilterLoader();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_UFilterLoader_NoRegister();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_ULevelSnapshotsFilterPreset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotsEditor();
// End Cross Module References
	void UFilterLoader::StaticRegisterNativesUFilterLoader()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFilterLoader);
	UClass* Z_Construct_UClass_UFilterLoader_NoRegister()
	{
		return UFilterLoader::StaticClass();
	}
	struct Z_Construct_UClass_UFilterLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetLastSavedOrLoaded_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetLastSavedOrLoaded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetBeingEdited_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetBeingEdited;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFilterLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFilterLoader_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* Handles saving and loading of UDisjunctiveNormalFormFilter. */" },
		{ "IncludePath", "Data/FilterLoader.h" },
		{ "ModuleRelativePath", "Private/Data/FilterLoader.h" },
		{ "ToolTip", "Handles saving and loading of UDisjunctiveNormalFormFilter." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFilterLoader_Statics::NewProp_AssetLastSavedOrLoaded_MetaData[] = {
		{ "Comment", "/* Set once user either has used RequestSaveAs or SetPickedAsset. */" },
		{ "ModuleRelativePath", "Private/Data/FilterLoader.h" },
		{ "ToolTip", "Set once user either has used RequestSaveAs or SetPickedAsset." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFilterLoader_Statics::NewProp_AssetLastSavedOrLoaded = { "AssetLastSavedOrLoaded", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFilterLoader, AssetLastSavedOrLoaded), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UFilterLoader_Statics::NewProp_AssetLastSavedOrLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFilterLoader_Statics::NewProp_AssetLastSavedOrLoaded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFilterLoader_Statics::NewProp_AssetBeingEdited_MetaData[] = {
		{ "ModuleRelativePath", "Private/Data/FilterLoader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFilterLoader_Statics::NewProp_AssetBeingEdited = { "AssetBeingEdited", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFilterLoader, AssetBeingEdited), Z_Construct_UClass_ULevelSnapshotsFilterPreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFilterLoader_Statics::NewProp_AssetBeingEdited_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFilterLoader_Statics::NewProp_AssetBeingEdited_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFilterLoader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilterLoader_Statics::NewProp_AssetLastSavedOrLoaded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFilterLoader_Statics::NewProp_AssetBeingEdited,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFilterLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFilterLoader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFilterLoader_Statics::ClassParams = {
		&UFilterLoader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFilterLoader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFilterLoader_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFilterLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFilterLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFilterLoader()
	{
		if (!Z_Registration_Info_UClass_UFilterLoader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFilterLoader.OuterSingleton, Z_Construct_UClass_UFilterLoader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFilterLoader.OuterSingleton;
	}
	template<> LEVELSNAPSHOTSEDITOR_API UClass* StaticClass<UFilterLoader>()
	{
		return UFilterLoader::StaticClass();
	}
	UFilterLoader::UFilterLoader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFilterLoader);
	UFilterLoader::~UFilterLoader() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FilterLoader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FilterLoader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFilterLoader, UFilterLoader::StaticClass, TEXT("UFilterLoader"), &Z_Registration_Info_UClass_UFilterLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFilterLoader), 4101532022U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FilterLoader_h_2173681842(TEXT("/Script/LevelSnapshotsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FilterLoader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_Data_FilterLoader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
