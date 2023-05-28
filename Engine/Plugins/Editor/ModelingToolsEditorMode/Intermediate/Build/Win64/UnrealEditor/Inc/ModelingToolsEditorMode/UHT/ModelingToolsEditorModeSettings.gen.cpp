// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingToolsEditorModeSettings.h"
#include "../../Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelingToolsEditorModeSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollectionReference();
	MODELINGTOOLSEDITORMODE_API UClass* Z_Construct_UClass_UModelingToolsEditorModeSettings();
	MODELINGTOOLSEDITORMODE_API UClass* Z_Construct_UClass_UModelingToolsEditorModeSettings_NoRegister();
	MODELINGTOOLSEDITORMODE_API UClass* Z_Construct_UClass_UModelingToolsModeCustomizationSettings();
	MODELINGTOOLSEDITORMODE_API UClass* Z_Construct_UClass_UModelingToolsModeCustomizationSettings_NoRegister();
	MODELINGTOOLSEDITORMODE_API UEnum* Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationBehavior();
	MODELINGTOOLSEDITORMODE_API UEnum* Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationLocation();
	MODELINGTOOLSEDITORMODE_API UEnum* Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeDefaultMeshObjectType();
	MODELINGTOOLSEDITORMODE_API UScriptStruct* Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet();
	MODELINGTOOLSEDITORMODE_API UScriptStruct* Z_Construct_UScriptStruct_FModelingModeCustomSectionColor();
	MODELINGTOOLSEDITORMODE_API UScriptStruct* Z_Construct_UScriptStruct_FModelingModeCustomToolColor();
	UPackage* Z_Construct_UPackage__Script_ModelingToolsEditorMode();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModelingModeDefaultMeshObjectType;
	static UEnum* EModelingModeDefaultMeshObjectType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EModelingModeDefaultMeshObjectType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EModelingModeDefaultMeshObjectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeDefaultMeshObjectType, (UObject*)Z_Construct_UPackage__Script_ModelingToolsEditorMode(), TEXT("EModelingModeDefaultMeshObjectType"));
		}
		return Z_Registration_Info_UEnum_EModelingModeDefaultMeshObjectType.OuterSingleton;
	}
	template<> MODELINGTOOLSEDITORMODE_API UEnum* StaticEnum<EModelingModeDefaultMeshObjectType>()
	{
		return EModelingModeDefaultMeshObjectType_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeDefaultMeshObjectType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeDefaultMeshObjectType_Statics::Enumerators[] = {
		{ "EModelingModeDefaultMeshObjectType::StaticMeshAsset", (int64)EModelingModeDefaultMeshObjectType::StaticMeshAsset },
		{ "EModelingModeDefaultMeshObjectType::VolumeActor", (int64)EModelingModeDefaultMeshObjectType::VolumeActor },
		{ "EModelingModeDefaultMeshObjectType::DynamicMeshActor", (int64)EModelingModeDefaultMeshObjectType::DynamicMeshActor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeDefaultMeshObjectType_Statics::Enum_MetaDataParams[] = {
		{ "DynamicMeshActor.Comment", "/** Generate a new ADynamicMeshActor (stored locally in the Level) */" },
		{ "DynamicMeshActor.Name", "EModelingModeDefaultMeshObjectType::DynamicMeshActor" },
		{ "DynamicMeshActor.ToolTip", "Generate a new ADynamicMeshActor (stored locally in the Level)" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "StaticMeshAsset.Comment", "/** Generate a new Static Mesh Asset (using Generated Asset settings below) and AStaticMeshActor */" },
		{ "StaticMeshAsset.Name", "EModelingModeDefaultMeshObjectType::StaticMeshAsset" },
		{ "StaticMeshAsset.ToolTip", "Generate a new Static Mesh Asset (using Generated Asset settings below) and AStaticMeshActor" },
		{ "VolumeActor.Comment", "/** Generate a new AVolume Actor */" },
		{ "VolumeActor.Name", "EModelingModeDefaultMeshObjectType::VolumeActor" },
		{ "VolumeActor.ToolTip", "Generate a new AVolume Actor" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeDefaultMeshObjectType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingToolsEditorMode,
		nullptr,
		"EModelingModeDefaultMeshObjectType",
		"EModelingModeDefaultMeshObjectType",
		Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeDefaultMeshObjectType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeDefaultMeshObjectType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeDefaultMeshObjectType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeDefaultMeshObjectType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeDefaultMeshObjectType()
	{
		if (!Z_Registration_Info_UEnum_EModelingModeDefaultMeshObjectType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModelingModeDefaultMeshObjectType.InnerSingleton, Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeDefaultMeshObjectType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EModelingModeDefaultMeshObjectType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModelingModeAssetGenerationBehavior;
	static UEnum* EModelingModeAssetGenerationBehavior_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EModelingModeAssetGenerationBehavior.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EModelingModeAssetGenerationBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationBehavior, (UObject*)Z_Construct_UPackage__Script_ModelingToolsEditorMode(), TEXT("EModelingModeAssetGenerationBehavior"));
		}
		return Z_Registration_Info_UEnum_EModelingModeAssetGenerationBehavior.OuterSingleton;
	}
	template<> MODELINGTOOLSEDITORMODE_API UEnum* StaticEnum<EModelingModeAssetGenerationBehavior>()
	{
		return EModelingModeAssetGenerationBehavior_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationBehavior_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationBehavior_Statics::Enumerators[] = {
		{ "EModelingModeAssetGenerationBehavior::AutoGenerateAndAutosave", (int64)EModelingModeAssetGenerationBehavior::AutoGenerateAndAutosave },
		{ "EModelingModeAssetGenerationBehavior::AutoGenerateButDoNotAutosave", (int64)EModelingModeAssetGenerationBehavior::AutoGenerateButDoNotAutosave },
		{ "EModelingModeAssetGenerationBehavior::InteractivePromptToSave", (int64)EModelingModeAssetGenerationBehavior::InteractivePromptToSave },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationBehavior_Statics::Enum_MetaDataParams[] = {
		{ "AutoGenerateAndAutosave.Comment", "/** Generate and automatically Save new Assets on creation */" },
		{ "AutoGenerateAndAutosave.Name", "EModelingModeAssetGenerationBehavior::AutoGenerateAndAutosave" },
		{ "AutoGenerateAndAutosave.ToolTip", "Generate and automatically Save new Assets on creation" },
		{ "AutoGenerateButDoNotAutosave.Comment", "/** Generate new Assets and mark as Modified but do not automatically Save */" },
		{ "AutoGenerateButDoNotAutosave.Name", "EModelingModeAssetGenerationBehavior::AutoGenerateButDoNotAutosave" },
		{ "AutoGenerateButDoNotAutosave.ToolTip", "Generate new Assets and mark as Modified but do not automatically Save" },
		{ "InteractivePromptToSave.Comment", "/** Prompt to Save each new Asset upon Creation */" },
		{ "InteractivePromptToSave.Name", "EModelingModeAssetGenerationBehavior::InteractivePromptToSave" },
		{ "InteractivePromptToSave.ToolTip", "Prompt to Save each new Asset upon Creation" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationBehavior_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingToolsEditorMode,
		nullptr,
		"EModelingModeAssetGenerationBehavior",
		"EModelingModeAssetGenerationBehavior",
		Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationBehavior_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationBehavior_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationBehavior_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationBehavior_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationBehavior()
	{
		if (!Z_Registration_Info_UEnum_EModelingModeAssetGenerationBehavior.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModelingModeAssetGenerationBehavior.InnerSingleton, Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationBehavior_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EModelingModeAssetGenerationBehavior.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EModelingModeAssetGenerationLocation;
	static UEnum* EModelingModeAssetGenerationLocation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EModelingModeAssetGenerationLocation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EModelingModeAssetGenerationLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationLocation, (UObject*)Z_Construct_UPackage__Script_ModelingToolsEditorMode(), TEXT("EModelingModeAssetGenerationLocation"));
		}
		return Z_Registration_Info_UEnum_EModelingModeAssetGenerationLocation.OuterSingleton;
	}
	template<> MODELINGTOOLSEDITORMODE_API UEnum* StaticEnum<EModelingModeAssetGenerationLocation>()
	{
		return EModelingModeAssetGenerationLocation_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationLocation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationLocation_Statics::Enumerators[] = {
		{ "EModelingModeAssetGenerationLocation::AutoGeneratedWorldRelativeAssetPath", (int64)EModelingModeAssetGenerationLocation::AutoGeneratedWorldRelativeAssetPath },
		{ "EModelingModeAssetGenerationLocation::AutoGeneratedGlobalAssetPath", (int64)EModelingModeAssetGenerationLocation::AutoGeneratedGlobalAssetPath },
		{ "EModelingModeAssetGenerationLocation::CurrentAssetBrowserPathIfAvailable", (int64)EModelingModeAssetGenerationLocation::CurrentAssetBrowserPathIfAvailable },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationLocation_Statics::Enum_MetaDataParams[] = {
		{ "AutoGeneratedGlobalAssetPath.Comment", "/** All generated assets will be stored in a root-level AutoGenerated folder */" },
		{ "AutoGeneratedGlobalAssetPath.Name", "EModelingModeAssetGenerationLocation::AutoGeneratedGlobalAssetPath" },
		{ "AutoGeneratedGlobalAssetPath.ToolTip", "All generated assets will be stored in a root-level AutoGenerated folder" },
		{ "AutoGeneratedWorldRelativeAssetPath.Comment", "/** All generated assets will be stored in an AutoGenerated folder that is located relative to the World they are being saved in */" },
		{ "AutoGeneratedWorldRelativeAssetPath.Name", "EModelingModeAssetGenerationLocation::AutoGeneratedWorldRelativeAssetPath" },
		{ "AutoGeneratedWorldRelativeAssetPath.ToolTip", "All generated assets will be stored in an AutoGenerated folder that is located relative to the World they are being saved in" },
		{ "CurrentAssetBrowserPathIfAvailable.Comment", "/** Generated assets will be stored in the currently-visible Asset Browser folder if available, otherwise at the Auto Generated Asset Path */" },
		{ "CurrentAssetBrowserPathIfAvailable.Name", "EModelingModeAssetGenerationLocation::CurrentAssetBrowserPathIfAvailable" },
		{ "CurrentAssetBrowserPathIfAvailable.ToolTip", "Generated assets will be stored in the currently-visible Asset Browser folder if available, otherwise at the Auto Generated Asset Path" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationLocation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelingToolsEditorMode,
		nullptr,
		"EModelingModeAssetGenerationLocation",
		"EModelingModeAssetGenerationLocation",
		Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationLocation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationLocation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationLocation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationLocation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationLocation()
	{
		if (!Z_Registration_Info_UEnum_EModelingModeAssetGenerationLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EModelingModeAssetGenerationLocation.InnerSingleton, Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationLocation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EModelingModeAssetGenerationLocation.InnerSingleton;
	}
	void UModelingToolsEditorModeSettings::StaticRegisterNativesUModelingToolsEditorModeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModelingToolsEditorModeSettings);
	UClass* Z_Construct_UClass_UModelingToolsEditorModeSettings_NoRegister()
	{
		return UModelingToolsEditorModeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDynamicMeshActors_MetaData[];
#endif
		static void NewProp_bEnableDynamicMeshActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDynamicMeshActors;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AssetGenerationLocation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetGenerationLocation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetGenerationLocation;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_AssetGenerationMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetGenerationMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AssetGenerationMode;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DefaultMeshObjectType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMeshObjectType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultMeshObjectType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoGeneratedAssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AutoGeneratedAssetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStoreUnsavedLevelAssetsInTopLevelGameFolder_MetaData[];
#endif
		static void NewProp_bStoreUnsavedLevelAssetsInTopLevelGameFolder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStoreUnsavedLevelAssetsInTopLevelGameFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePerUserAutogenSubfolder_MetaData[];
#endif
		static void NewProp_bUsePerUserAutogenSubfolder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePerUserAutogenSubfolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutogenSubfolderUserNameOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AutogenSubfolderUserNameOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAppendRandomStringToName_MetaData[];
#endif
		static void NewProp_bAppendRandomStringToName_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAppendRandomStringToName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRespectLevelEditorGizmoMode_MetaData[];
#endif
		static void NewProp_bRespectLevelEditorGizmoMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespectLevelEditorGizmoMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePersistentSelections_MetaData[];
#endif
		static void NewProp_bEnablePersistentSelections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePersistentSelections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMeshSelections_MetaData[];
#endif
		static void NewProp_bEnableMeshSelections_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMeshSelections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestrictiveModeAutoGeneratedAssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RestrictiveModeAutoGeneratedAssetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAbsoluteWorldSnapping_MetaData[];
#endif
		static void NewProp_bEnableAbsoluteWorldSnapping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAbsoluteWorldSnapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingToolsEditorMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the Modeling Tools Editor Mode plug-in.\n */" },
		{ "IncludePath", "ModelingToolsEditorModeSettings.h" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "Settings for the Modeling Tools Editor Mode plug-in." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableDynamicMeshActors_MetaData[] = {
		{ "Comment", "/** Enable/Disable the options to emit Dynamic Mesh Actors in Modeling Mode Tools */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "Enable/Disable the options to emit Dynamic Mesh Actors in Modeling Mode Tools" },
	};
#endif
	void Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableDynamicMeshActors_SetBit(void* Obj)
	{
		((UModelingToolsEditorModeSettings*)Obj)->bEnableDynamicMeshActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableDynamicMeshActors = { "bEnableDynamicMeshActors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UModelingToolsEditorModeSettings), &Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableDynamicMeshActors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableDynamicMeshActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableDynamicMeshActors_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AssetGenerationLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AssetGenerationLocation_MetaData[] = {
		{ "Category", "Modeling Mode|Generated Assets" },
		{ "Comment", "/** Where should Assets auto-generated by Modeling Tools be stored by default */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "Where should Assets auto-generated by Modeling Tools be stored by default" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AssetGenerationLocation = { "AssetGenerationLocation", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingToolsEditorModeSettings, AssetGenerationLocation), Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationLocation, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AssetGenerationLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AssetGenerationLocation_MetaData)) }; // 278624813
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AssetGenerationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AssetGenerationMode_MetaData[] = {
		{ "Category", "Modeling Mode|Generated Assets" },
		{ "Comment", "/** How should Assets auto-generated by Modeling Tools be handled in terms of saving, naming, etc */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "How should Assets auto-generated by Modeling Tools be handled in terms of saving, naming, etc" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AssetGenerationMode = { "AssetGenerationMode", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingToolsEditorModeSettings, AssetGenerationMode), Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeAssetGenerationBehavior, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AssetGenerationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AssetGenerationMode_MetaData)) }; // 1561733721
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_DefaultMeshObjectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_DefaultMeshObjectType_MetaData[] = {
		{ "Category", "Modeling Mode" },
		{ "Comment", "/** What type of Mesh Object should Output Type Setting default to in Modeling Mode Tools (takes effect after Editor restart) */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "What type of Mesh Object should Output Type Setting default to in Modeling Mode Tools (takes effect after Editor restart)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_DefaultMeshObjectType = { "DefaultMeshObjectType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingToolsEditorModeSettings, DefaultMeshObjectType), Z_Construct_UEnum_ModelingToolsEditorMode_EModelingModeDefaultMeshObjectType, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_DefaultMeshObjectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_DefaultMeshObjectType_MetaData)) }; // 3263509441
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AutoGeneratedAssetPath_MetaData[] = {
		{ "Category", "Modeling Mode|Generated Assets" },
		{ "Comment", "/** Assets auto-generated by Modeling Tools are stored at this path, relative to the parent path defined by the Location. Set to an empty string to disable. */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "Assets auto-generated by Modeling Tools are stored at this path, relative to the parent path defined by the Location. Set to an empty string to disable." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AutoGeneratedAssetPath = { "AutoGeneratedAssetPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingToolsEditorModeSettings, AutoGeneratedAssetPath), METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AutoGeneratedAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AutoGeneratedAssetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bStoreUnsavedLevelAssetsInTopLevelGameFolder_MetaData[] = {
		{ "Category", "Modeling Mode|Generated Assets" },
		{ "Comment", "/** If true, Auto-Generated Assets created in an unsaved Level will be stored relative to top-level folder, otherwise they will be stored in /Temp and cannot be saved until they are explicitly moved to a permanent location */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "If true, Auto-Generated Assets created in an unsaved Level will be stored relative to top-level folder, otherwise they will be stored in /Temp and cannot be saved until they are explicitly moved to a permanent location" },
	};
#endif
	void Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bStoreUnsavedLevelAssetsInTopLevelGameFolder_SetBit(void* Obj)
	{
		((UModelingToolsEditorModeSettings*)Obj)->bStoreUnsavedLevelAssetsInTopLevelGameFolder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bStoreUnsavedLevelAssetsInTopLevelGameFolder = { "bStoreUnsavedLevelAssetsInTopLevelGameFolder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UModelingToolsEditorModeSettings), &Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bStoreUnsavedLevelAssetsInTopLevelGameFolder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bStoreUnsavedLevelAssetsInTopLevelGameFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bStoreUnsavedLevelAssetsInTopLevelGameFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bUsePerUserAutogenSubfolder_MetaData[] = {
		{ "Category", "Modeling Mode|Generated Assets" },
		{ "Comment", "/** If true, Autogenerated Assets are stored in per-user folders below the Autogen path */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "If true, Autogenerated Assets are stored in per-user folders below the Autogen path" },
	};
#endif
	void Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bUsePerUserAutogenSubfolder_SetBit(void* Obj)
	{
		((UModelingToolsEditorModeSettings*)Obj)->bUsePerUserAutogenSubfolder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bUsePerUserAutogenSubfolder = { "bUsePerUserAutogenSubfolder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UModelingToolsEditorModeSettings), &Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bUsePerUserAutogenSubfolder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bUsePerUserAutogenSubfolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bUsePerUserAutogenSubfolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AutogenSubfolderUserNameOverride_MetaData[] = {
		{ "Category", "Modeling Mode|Generated Assets" },
		{ "Comment", "/** Overrides the user name used for per-user folders below the Autogen path. This might be necessary to resolve issues with source control, for example. Note that the per-user folder name might not contain the name exactly as provided. */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "Overrides the user name used for per-user folders below the Autogen path. This might be necessary to resolve issues with source control, for example. Note that the per-user folder name might not contain the name exactly as provided." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AutogenSubfolderUserNameOverride = { "AutogenSubfolderUserNameOverride", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingToolsEditorModeSettings, AutogenSubfolderUserNameOverride), METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AutogenSubfolderUserNameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AutogenSubfolderUserNameOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bAppendRandomStringToName_MetaData[] = {
		{ "Category", "Modeling Mode|Generated Assets" },
		{ "Comment", "/** If true, Autogenerated Assets have a short random string generated and appended to their name */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "If true, Autogenerated Assets have a short random string generated and appended to their name" },
	};
#endif
	void Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bAppendRandomStringToName_SetBit(void* Obj)
	{
		((UModelingToolsEditorModeSettings*)Obj)->bAppendRandomStringToName = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bAppendRandomStringToName = { "bAppendRandomStringToName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UModelingToolsEditorModeSettings), &Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bAppendRandomStringToName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bAppendRandomStringToName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bAppendRandomStringToName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bRespectLevelEditorGizmoMode_MetaData[] = {
		{ "Category", "Modeling Mode|User Interface" },
		{ "Comment", "/** If true, the standard UE Editor Gizmo Mode (ie selected via the Level Editor Viewport toggle) will be used to configure the Modeling Gizmo, otherwise a Combined Gizmo will always be used. It may be necessary to exit and re-enter Modeling Mode after changing this setting. */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "If true, the standard UE Editor Gizmo Mode (ie selected via the Level Editor Viewport toggle) will be used to configure the Modeling Gizmo, otherwise a Combined Gizmo will always be used. It may be necessary to exit and re-enter Modeling Mode after changing this setting." },
	};
#endif
	void Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bRespectLevelEditorGizmoMode_SetBit(void* Obj)
	{
		((UModelingToolsEditorModeSettings*)Obj)->bRespectLevelEditorGizmoMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bRespectLevelEditorGizmoMode = { "bRespectLevelEditorGizmoMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UModelingToolsEditorModeSettings), &Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bRespectLevelEditorGizmoMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bRespectLevelEditorGizmoMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bRespectLevelEditorGizmoMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnablePersistentSelections_MetaData[] = {
		{ "Category", "Modeling Mode|Selection" },
		{ "Comment", "// old preference for mesh selection system that will be disabled in 5.3\n" },
		{ "DisplayName", "Enable Mesh Selection UI" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "old preference for mesh selection system that will be disabled in 5.3" },
	};
#endif
	void Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnablePersistentSelections_SetBit(void* Obj)
	{
		((UModelingToolsEditorModeSettings*)Obj)->bEnablePersistentSelections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnablePersistentSelections = { "bEnablePersistentSelections", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UModelingToolsEditorModeSettings), &Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnablePersistentSelections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnablePersistentSelections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnablePersistentSelections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableMeshSelections_MetaData[] = {
		{ "Comment", "//UPROPERTY(config, EditAnywhere, Category = \"Modeling Mode|Selection\", meta = (DisplayName=\"Enable Mesh Selection UI\"))\n" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "UPROPERTY(config, EditAnywhere, Category = \"Modeling Mode|Selection\", meta = (DisplayName=\"Enable Mesh Selection UI\"))" },
	};
#endif
	void Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableMeshSelections_SetBit(void* Obj)
	{
		((UModelingToolsEditorModeSettings*)Obj)->bEnableMeshSelections = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableMeshSelections = { "bEnableMeshSelections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UModelingToolsEditorModeSettings), &Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableMeshSelections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableMeshSelections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableMeshSelections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_RestrictiveModeAutoGeneratedAssetPath_MetaData[] = {
		{ "Comment", "/** Assets auto-generated by Modeling Tools are stored at this path when in restrictive mode, relative to the package folder path. */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "Assets auto-generated by Modeling Tools are stored at this path when in restrictive mode, relative to the package folder path." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_RestrictiveModeAutoGeneratedAssetPath = { "RestrictiveModeAutoGeneratedAssetPath", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingToolsEditorModeSettings, RestrictiveModeAutoGeneratedAssetPath), METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_RestrictiveModeAutoGeneratedAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_RestrictiveModeAutoGeneratedAssetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableAbsoluteWorldSnapping_MetaData[] = {
		{ "Comment", "/** Toggle Absolute World Grid Position snapping */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "Toggle Absolute World Grid Position snapping" },
	};
#endif
	void Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableAbsoluteWorldSnapping_SetBit(void* Obj)
	{
		((UModelingToolsEditorModeSettings*)Obj)->bEnableAbsoluteWorldSnapping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableAbsoluteWorldSnapping = { "bEnableAbsoluteWorldSnapping", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UModelingToolsEditorModeSettings), &Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableAbsoluteWorldSnapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableAbsoluteWorldSnapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableAbsoluteWorldSnapping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableDynamicMeshActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AssetGenerationLocation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AssetGenerationLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AssetGenerationMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AssetGenerationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_DefaultMeshObjectType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_DefaultMeshObjectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AutoGeneratedAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bStoreUnsavedLevelAssetsInTopLevelGameFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bUsePerUserAutogenSubfolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_AutogenSubfolderUserNameOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bAppendRandomStringToName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bRespectLevelEditorGizmoMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnablePersistentSelections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableMeshSelections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_RestrictiveModeAutoGeneratedAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::NewProp_bEnableAbsoluteWorldSnapping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModelingToolsEditorModeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::ClassParams = {
		&UModelingToolsEditorModeSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModelingToolsEditorModeSettings()
	{
		if (!Z_Registration_Info_UClass_UModelingToolsEditorModeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModelingToolsEditorModeSettings.OuterSingleton, Z_Construct_UClass_UModelingToolsEditorModeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModelingToolsEditorModeSettings.OuterSingleton;
	}
	template<> MODELINGTOOLSEDITORMODE_API UClass* StaticClass<UModelingToolsEditorModeSettings>()
	{
		return UModelingToolsEditorModeSettings::StaticClass();
	}
	UModelingToolsEditorModeSettings::UModelingToolsEditorModeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModelingToolsEditorModeSettings);
	UModelingToolsEditorModeSettings::~UModelingToolsEditorModeSettings() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModelingModeCustomSectionColor;
class UScriptStruct* FModelingModeCustomSectionColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModelingModeCustomSectionColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModelingModeCustomSectionColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModelingModeCustomSectionColor, (UObject*)Z_Construct_UPackage__Script_ModelingToolsEditorMode(), TEXT("ModelingModeCustomSectionColor"));
	}
	return Z_Registration_Info_UScriptStruct_ModelingModeCustomSectionColor.OuterSingleton;
}
template<> MODELINGTOOLSEDITORMODE_API UScriptStruct* StaticStruct<FModelingModeCustomSectionColor>()
{
	return FModelingModeCustomSectionColor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines a color to be used for a particular Tool Palette Section\n */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "Defines a color to be used for a particular Tool Palette Section" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModelingModeCustomSectionColor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "SectionColor" },
		{ "Comment", "/** Name of Section in Modeling Mode Tool Palette */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "Name of Section in Modeling Mode Tool Palette" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModelingModeCustomSectionColor, SectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::NewProp_SectionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "SectionColor" },
		{ "Comment", "/** Custom Header Color */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "Custom Header Color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModelingModeCustomSectionColor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingToolsEditorMode,
		nullptr,
		&NewStructOps,
		"ModelingModeCustomSectionColor",
		sizeof(FModelingModeCustomSectionColor),
		alignof(FModelingModeCustomSectionColor),
		Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModelingModeCustomSectionColor()
	{
		if (!Z_Registration_Info_UScriptStruct_ModelingModeCustomSectionColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModelingModeCustomSectionColor.InnerSingleton, Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ModelingModeCustomSectionColor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModelingModeCustomToolColor;
class UScriptStruct* FModelingModeCustomToolColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModelingModeCustomToolColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModelingModeCustomToolColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModelingModeCustomToolColor, (UObject*)Z_Construct_UPackage__Script_ModelingToolsEditorMode(), TEXT("ModelingModeCustomToolColor"));
	}
	return Z_Registration_Info_UScriptStruct_ModelingModeCustomToolColor.OuterSingleton;
}
template<> MODELINGTOOLSEDITORMODE_API UScriptStruct* StaticStruct<FModelingModeCustomToolColor>()
{
	return FModelingModeCustomToolColor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToolName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines a color to be used for a particular Tool Palette Tool\n */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "Defines a color to be used for a particular Tool Palette Tool" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModelingModeCustomToolColor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::NewProp_ToolName_MetaData[] = {
		{ "Category", "ToolColor" },
		{ "Comment", "/**\n\x09 * Name of Section or Tool in Modeling Mode Tool Palette\n\x09 *\n\x09 * Format:\n\x09 * SectionName        (Specifies a default color for all tools in the section.)\n\x09 * SectionName.ToolName        (Specifies an override color for a specific tool in the given section.)\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "Name of Section or Tool in Modeling Mode Tool Palette\n\nFormat:\nSectionName        (Specifies a default color for all tools in the section.)\nSectionName.ToolName        (Specifies an override color for a specific tool in the given section.)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::NewProp_ToolName = { "ToolName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModelingModeCustomToolColor, ToolName), METADATA_PARAMS(Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::NewProp_ToolName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::NewProp_ToolName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "ToolColor" },
		{ "Comment", "/** Custom Tool Color */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "Custom Tool Color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModelingModeCustomToolColor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::NewProp_ToolName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingToolsEditorMode,
		nullptr,
		&NewStructOps,
		"ModelingModeCustomToolColor",
		sizeof(FModelingModeCustomToolColor),
		alignof(FModelingModeCustomToolColor),
		Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModelingModeCustomToolColor()
	{
		if (!Z_Registration_Info_UScriptStruct_ModelingModeCustomToolColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModelingModeCustomToolColor.InnerSingleton, Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ModelingModeCustomToolColor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModelingModeAssetCollectionSet;
class UScriptStruct* FModelingModeAssetCollectionSet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModelingModeAssetCollectionSet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModelingModeAssetCollectionSet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet, (UObject*)Z_Construct_UPackage__Script_ModelingToolsEditorMode(), TEXT("ModelingModeAssetCollectionSet"));
	}
	return Z_Registration_Info_UScriptStruct_ModelingModeAssetCollectionSet.OuterSingleton;
}
template<> MODELINGTOOLSEDITORMODE_API UScriptStruct* StaticStruct<FModelingModeAssetCollectionSet>()
{
	return FModelingModeAssetCollectionSet::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Collections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Collections;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines a Named list/set of content-browser Collection names\n */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "Defines a Named list/set of content-browser Collection names" },
	};
#endif
	void* Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModelingModeAssetCollectionSet>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CollectionSet" },
		{ "Comment", "/** Name of the set of collections */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "Name of the set of collections" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModelingModeAssetCollectionSet, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::NewProp_Collections_Inner = { "Collections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCollectionReference, METADATA_PARAMS(nullptr, 0) }; // 92904918
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::NewProp_Collections_MetaData[] = {
		{ "Category", "CollectionSet" },
		{ "Comment", "/** List of Collection names */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "List of Collection names" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::NewProp_Collections = { "Collections", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FModelingModeAssetCollectionSet, Collections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::NewProp_Collections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::NewProp_Collections_MetaData)) }; // 92904918
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::NewProp_Collections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::NewProp_Collections,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingToolsEditorMode,
		nullptr,
		&NewStructOps,
		"ModelingModeAssetCollectionSet",
		sizeof(FModelingModeAssetCollectionSet),
		alignof(FModelingModeAssetCollectionSet),
		Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet()
	{
		if (!Z_Registration_Info_UScriptStruct_ModelingModeAssetCollectionSet.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModelingModeAssetCollectionSet.InnerSingleton, Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ModelingModeAssetCollectionSet.InnerSingleton;
	}
	void UModelingToolsModeCustomizationSettings::StaticRegisterNativesUModelingToolsModeCustomizationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModelingToolsModeCustomizationSettings);
	UClass* Z_Construct_UClass_UModelingToolsModeCustomizationSettings_NoRegister()
	{
		return UModelingToolsModeCustomizationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToolSectionOrder_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolSectionOrder_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToolSectionOrder;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToolFavorites_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolFavorites_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToolFavorites;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToolColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToolColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BrushAlphaSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BrushAlphaSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BrushAlphaSets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastMeshSelectionDragMode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastMeshSelectionDragMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastMeshSelectionElementType_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastMeshSelectionElementType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastMeshSelectionTopologyMode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LastMeshSelectionTopologyMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLastMeshSelectionVolumeToggle_MetaData[];
#endif
		static void NewProp_bLastMeshSelectionVolumeToggle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastMeshSelectionVolumeToggle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLastMeshSelectionStaticMeshToggle_MetaData[];
#endif
		static void NewProp_bLastMeshSelectionStaticMeshToggle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastMeshSelectionStaticMeshToggle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingToolsEditorMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ModelingToolsEditorModeSettings.h" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolSectionOrder_Inner = { "ToolSectionOrder", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolSectionOrder_MetaData[] = {
		{ "Category", "Modeling Mode|UI Customization" },
		{ "Comment", "/** Add the names of Modeling Mode Tool Palette Sections to have them appear at the top of the Tool Palette, in the order listed below. */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "Add the names of Modeling Mode Tool Palette Sections to have them appear at the top of the Tool Palette, in the order listed below." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolSectionOrder = { "ToolSectionOrder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingToolsModeCustomizationSettings, ToolSectionOrder), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolSectionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolSectionOrder_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolFavorites_Inner = { "ToolFavorites", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolFavorites_MetaData[] = {
		{ "Category", "Modeling Mode|UI Customization" },
		{ "Comment", "/** Tool Names listed in the array below will appear in a Favorites section at the top of the Modeling Mode Tool Palette */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "Tool Names listed in the array below will appear in a Favorites section at the top of the Modeling Mode Tool Palette" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolFavorites = { "ToolFavorites", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingToolsModeCustomizationSettings, ToolFavorites), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolFavorites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolFavorites_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_SectionColors_Inner = { "SectionColors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FModelingModeCustomSectionColor, METADATA_PARAMS(nullptr, 0) }; // 1784543500
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_SectionColors_MetaData[] = {
		{ "Category", "Modeling Mode|UI Customization" },
		{ "Comment", "/** Custom Section Header Colors for listed Sections in the Modeling Mode Tool Palette */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "Custom Section Header Colors for listed Sections in the Modeling Mode Tool Palette" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_SectionColors = { "SectionColors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingToolsModeCustomizationSettings, SectionColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_SectionColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_SectionColors_MetaData)) }; // 1784543500
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolColors_Inner = { "ToolColors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FModelingModeCustomToolColor, METADATA_PARAMS(nullptr, 0) }; // 787960733
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolColors_MetaData[] = {
		{ "Category", "Modeling Mode|UI Customization" },
		{ "Comment", "/**\n\x09 * Custom Tool Colors for listed Tools in the Modeling Mode Tool Palette.\n\x09 * \n\x09 * Format:\n\x09 * SectionName        (Specifies a default color for all tools in the section.)\n\x09 * SectionName.ToolName        (Specifies an override color for a specific tool in the given section.)\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "Custom Tool Colors for listed Tools in the Modeling Mode Tool Palette.\n\nFormat:\nSectionName        (Specifies a default color for all tools in the section.)\nSectionName.ToolName        (Specifies an override color for a specific tool in the given section.)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolColors = { "ToolColors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingToolsModeCustomizationSettings, ToolColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolColors_MetaData)) }; // 787960733
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_BrushAlphaSets_Inner = { "BrushAlphaSets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet, METADATA_PARAMS(nullptr, 0) }; // 2876785494
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_BrushAlphaSets_MetaData[] = {
		{ "Category", "Modeling Mode|Tool Assets" },
		{ "Comment", "/**\n\x09 * A Brush Alpha Set is a named list of Content Browser Collections, which will be shown as a separate tab in \n\x09 * the Texture Asset Picker used in various Modeling Mode Tools when selecting a Brush Alpha (eg in Sculpting)\n\x09 */" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "A Brush Alpha Set is a named list of Content Browser Collections, which will be shown as a separate tab in\nthe Texture Asset Picker used in various Modeling Mode Tools when selecting a Brush Alpha (eg in Sculpting)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_BrushAlphaSets = { "BrushAlphaSets", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingToolsModeCustomizationSettings, BrushAlphaSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_BrushAlphaSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_BrushAlphaSets_MetaData)) }; // 2876785494
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionDragMode_MetaData[] = {
		{ "Comment", "// saved-state for various mode settings that are configured via UI toggles/etc, and not exposed in settings dialog\n" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "saved-state for various mode settings that are configured via UI toggles/etc, and not exposed in settings dialog" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionDragMode = { "LastMeshSelectionDragMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingToolsModeCustomizationSettings, LastMeshSelectionDragMode), METADATA_PARAMS(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionDragMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionDragMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionElementType_MetaData[] = {
		{ "Comment", "// saved-state for various mode settings that does not persist between editor runs\n" },
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
		{ "ToolTip", "saved-state for various mode settings that does not persist between editor runs" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionElementType = { "LastMeshSelectionElementType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingToolsModeCustomizationSettings, LastMeshSelectionElementType), METADATA_PARAMS(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionElementType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionElementType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionTopologyMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionTopologyMode = { "LastMeshSelectionTopologyMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UModelingToolsModeCustomizationSettings, LastMeshSelectionTopologyMode), METADATA_PARAMS(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionTopologyMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionTopologyMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionVolumeToggle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionVolumeToggle_SetBit(void* Obj)
	{
		((UModelingToolsModeCustomizationSettings*)Obj)->bLastMeshSelectionVolumeToggle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionVolumeToggle = { "bLastMeshSelectionVolumeToggle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UModelingToolsModeCustomizationSettings), &Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionVolumeToggle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionVolumeToggle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionVolumeToggle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionStaticMeshToggle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ModelingToolsEditorModeSettings.h" },
	};
#endif
	void Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionStaticMeshToggle_SetBit(void* Obj)
	{
		((UModelingToolsModeCustomizationSettings*)Obj)->bLastMeshSelectionStaticMeshToggle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionStaticMeshToggle = { "bLastMeshSelectionStaticMeshToggle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UModelingToolsModeCustomizationSettings), &Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionStaticMeshToggle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionStaticMeshToggle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionStaticMeshToggle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolSectionOrder_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolSectionOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolFavorites_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolFavorites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_SectionColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_SectionColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_ToolColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_BrushAlphaSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_BrushAlphaSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionDragMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionElementType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionTopologyMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionVolumeToggle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionStaticMeshToggle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModelingToolsModeCustomizationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::ClassParams = {
		&UModelingToolsModeCustomizationSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UModelingToolsModeCustomizationSettings()
	{
		if (!Z_Registration_Info_UClass_UModelingToolsModeCustomizationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModelingToolsModeCustomizationSettings.OuterSingleton, Z_Construct_UClass_UModelingToolsModeCustomizationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UModelingToolsModeCustomizationSettings.OuterSingleton;
	}
	template<> MODELINGTOOLSEDITORMODE_API UClass* StaticClass<UModelingToolsModeCustomizationSettings>()
	{
		return UModelingToolsModeCustomizationSettings::StaticClass();
	}
	UModelingToolsModeCustomizationSettings::UModelingToolsModeCustomizationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UModelingToolsModeCustomizationSettings);
	UModelingToolsModeCustomizationSettings::~UModelingToolsModeCustomizationSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsEditorModeSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsEditorModeSettings_h_Statics::EnumInfo[] = {
		{ EModelingModeDefaultMeshObjectType_StaticEnum, TEXT("EModelingModeDefaultMeshObjectType"), &Z_Registration_Info_UEnum_EModelingModeDefaultMeshObjectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3263509441U) },
		{ EModelingModeAssetGenerationBehavior_StaticEnum, TEXT("EModelingModeAssetGenerationBehavior"), &Z_Registration_Info_UEnum_EModelingModeAssetGenerationBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1561733721U) },
		{ EModelingModeAssetGenerationLocation_StaticEnum, TEXT("EModelingModeAssetGenerationLocation"), &Z_Registration_Info_UEnum_EModelingModeAssetGenerationLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 278624813U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsEditorModeSettings_h_Statics::ScriptStructInfo[] = {
		{ FModelingModeCustomSectionColor::StaticStruct, Z_Construct_UScriptStruct_FModelingModeCustomSectionColor_Statics::NewStructOps, TEXT("ModelingModeCustomSectionColor"), &Z_Registration_Info_UScriptStruct_ModelingModeCustomSectionColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModelingModeCustomSectionColor), 1784543500U) },
		{ FModelingModeCustomToolColor::StaticStruct, Z_Construct_UScriptStruct_FModelingModeCustomToolColor_Statics::NewStructOps, TEXT("ModelingModeCustomToolColor"), &Z_Registration_Info_UScriptStruct_ModelingModeCustomToolColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModelingModeCustomToolColor), 787960733U) },
		{ FModelingModeAssetCollectionSet::StaticStruct, Z_Construct_UScriptStruct_FModelingModeAssetCollectionSet_Statics::NewStructOps, TEXT("ModelingModeAssetCollectionSet"), &Z_Registration_Info_UScriptStruct_ModelingModeAssetCollectionSet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModelingModeAssetCollectionSet), 2876785494U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsEditorModeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UModelingToolsEditorModeSettings, UModelingToolsEditorModeSettings::StaticClass, TEXT("UModelingToolsEditorModeSettings"), &Z_Registration_Info_UClass_UModelingToolsEditorModeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModelingToolsEditorModeSettings), 1719821738U) },
		{ Z_Construct_UClass_UModelingToolsModeCustomizationSettings, UModelingToolsModeCustomizationSettings::StaticClass, TEXT("UModelingToolsModeCustomizationSettings"), &Z_Registration_Info_UClass_UModelingToolsModeCustomizationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModelingToolsModeCustomizationSettings), 1209223174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsEditorModeSettings_h_2862789429(TEXT("/Script/ModelingToolsEditorMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsEditorModeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsEditorModeSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsEditorModeSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsEditorModeSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsEditorModeSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ModelingToolsEditorMode_Source_ModelingToolsEditorMode_Public_ModelingToolsEditorModeSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
