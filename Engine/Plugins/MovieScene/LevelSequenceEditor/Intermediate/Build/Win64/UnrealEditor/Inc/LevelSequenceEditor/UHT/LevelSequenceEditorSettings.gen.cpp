// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Misc/LevelSequenceEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_ULevelSequenceEditorSettings();
	LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_ULevelSequenceEditorSettings_NoRegister();
	LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_ULevelSequenceWithShotsSettings();
	LEVELSEQUENCEEDITOR_API UClass* Z_Construct_UClass_ULevelSequenceWithShotsSettings_NoRegister();
	LEVELSEQUENCEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings();
	LEVELSEQUENCEEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceTrackSettings();
	UPackage* Z_Construct_UPackage__Script_LevelSequenceEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequencePropertyTrackSettings;
class UScriptStruct* FLevelSequencePropertyTrackSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequencePropertyTrackSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequencePropertyTrackSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings, (UObject*)Z_Construct_UPackage__Script_LevelSequenceEditor(), TEXT("LevelSequencePropertyTrackSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequencePropertyTrackSettings.OuterSingleton;
}
template<> LEVELSEQUENCEEDITOR_API UScriptStruct* StaticStruct<FLevelSequencePropertyTrackSettings>()
{
	return FLevelSequencePropertyTrackSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ComponentPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequencePropertyTrackSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::NewProp_ComponentPath_MetaData[] = {
		{ "Category", "PropertyTrack" },
		{ "Comment", "/** Optional ActorComponent tag (when keying a component property). */" },
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
		{ "ToolTip", "Optional ActorComponent tag (when keying a component property)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::NewProp_ComponentPath = { "ComponentPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequencePropertyTrackSettings, ComponentPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::NewProp_ComponentPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::NewProp_ComponentPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::NewProp_PropertyPath_MetaData[] = {
		{ "Category", "PropertyTrack" },
		{ "Comment", "/** Path to the keyed property within the Actor or ActorComponent. */" },
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
		{ "ToolTip", "Path to the keyed property within the Actor or ActorComponent." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequencePropertyTrackSettings, PropertyPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::NewProp_PropertyPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::NewProp_PropertyPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::NewProp_ComponentPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::NewProp_PropertyPath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequenceEditor,
		nullptr,
		&NewStructOps,
		"LevelSequencePropertyTrackSettings",
		sizeof(FLevelSequencePropertyTrackSettings),
		alignof(FLevelSequencePropertyTrackSettings),
		Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelSequencePropertyTrackSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequencePropertyTrackSettings.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelSequencePropertyTrackSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelSequenceTrackSettings;
class UScriptStruct* FLevelSequenceTrackSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelSequenceTrackSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelSequenceTrackSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceTrackSettings, (UObject*)Z_Construct_UPackage__Script_LevelSequenceEditor(), TEXT("LevelSequenceTrackSettings"));
	}
	return Z_Registration_Info_UScriptStruct_LevelSequenceTrackSettings.OuterSingleton;
}
template<> LEVELSEQUENCEEDITOR_API UScriptStruct* StaticStruct<FLevelSequenceTrackSettings>()
{
	return FLevelSequenceTrackSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchingActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MatchingActorClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultTracks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludeDefaultTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeDefaultTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeDefaultTracks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPropertyTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPropertyTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultPropertyTracks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludeDefaultPropertyTracks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeDefaultPropertyTracks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeDefaultPropertyTracks;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelSequenceTrackSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_MatchingActorClass_MetaData[] = {
		{ "Category", "TrackSettings" },
		{ "Comment", "/** The Actor class to create movie scene tracks for. */" },
		{ "MetaClass", "/Script/Engine.Actor" },
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
		{ "ToolTip", "The Actor class to create movie scene tracks for." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_MatchingActorClass = { "MatchingActorClass", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequenceTrackSettings, MatchingActorClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_MatchingActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_MatchingActorClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_DefaultTracks_Inner = { "DefaultTracks", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_DefaultTracks_MetaData[] = {
		{ "Category", "TrackSettings" },
		{ "Comment", "/** List of movie scene track classes to be added automatically. */" },
		{ "MetaClass", "/Script/MovieScene.MovieSceneTrack" },
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
		{ "ToolTip", "List of movie scene track classes to be added automatically." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_DefaultTracks = { "DefaultTracks", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequenceTrackSettings, DefaultTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_DefaultTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_DefaultTracks_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_ExcludeDefaultTracks_Inner = { "ExcludeDefaultTracks", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_ExcludeDefaultTracks_MetaData[] = {
		{ "Category", "TrackSettings" },
		{ "Comment", "/** List of movie scene track classes not to be added automatically. */" },
		{ "MetaClass", "/Script/MovieScene.MovieSceneTrack" },
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
		{ "ToolTip", "List of movie scene track classes not to be added automatically." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_ExcludeDefaultTracks = { "ExcludeDefaultTracks", nullptr, (EPropertyFlags)0x0010000002004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequenceTrackSettings, ExcludeDefaultTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_ExcludeDefaultTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_ExcludeDefaultTracks_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_DefaultPropertyTracks_Inner = { "DefaultPropertyTracks", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings, METADATA_PARAMS(nullptr, 0) }; // 43058983
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_DefaultPropertyTracks_MetaData[] = {
		{ "Category", "TrackSettings" },
		{ "Comment", "/** List of property names for which movie scene tracks will be created automatically. */" },
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
		{ "ToolTip", "List of property names for which movie scene tracks will be created automatically." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_DefaultPropertyTracks = { "DefaultPropertyTracks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequenceTrackSettings, DefaultPropertyTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_DefaultPropertyTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_DefaultPropertyTracks_MetaData)) }; // 43058983
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_ExcludeDefaultPropertyTracks_Inner = { "ExcludeDefaultPropertyTracks", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings, METADATA_PARAMS(nullptr, 0) }; // 43058983
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_ExcludeDefaultPropertyTracks_MetaData[] = {
		{ "Category", "TrackSettings" },
		{ "Comment", "/** List of property names for which movie scene tracks will not be created automatically. */" },
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
		{ "ToolTip", "List of property names for which movie scene tracks will not be created automatically." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_ExcludeDefaultPropertyTracks = { "ExcludeDefaultPropertyTracks", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelSequenceTrackSettings, ExcludeDefaultPropertyTracks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_ExcludeDefaultPropertyTracks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_ExcludeDefaultPropertyTracks_MetaData)) }; // 43058983
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_MatchingActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_DefaultTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_DefaultTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_ExcludeDefaultTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_ExcludeDefaultTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_DefaultPropertyTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_DefaultPropertyTracks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_ExcludeDefaultPropertyTracks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewProp_ExcludeDefaultPropertyTracks,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequenceEditor,
		nullptr,
		&NewStructOps,
		"LevelSequenceTrackSettings",
		sizeof(FLevelSequenceTrackSettings),
		alignof(FLevelSequenceTrackSettings),
		Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceTrackSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelSequenceTrackSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelSequenceTrackSettings.InnerSingleton, Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelSequenceTrackSettings.InnerSingleton;
	}
	void ULevelSequenceEditorSettings::StaticRegisterNativesULevelSequenceEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceEditorSettings);
	UClass* Z_Construct_UClass_ULevelSequenceEditorSettings_NoRegister()
	{
		return ULevelSequenceEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TrackSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TrackSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBindToPIE_MetaData[];
#endif
		static void NewProp_bAutoBindToPIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBindToPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBindToSimulate_MetaData[];
#endif
		static void NewProp_bAutoBindToSimulate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBindToSimulate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequenceEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Level Sequence Editor settings.\n */" },
		{ "IncludePath", "Misc/LevelSequenceEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Level Sequence Editor settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_TrackSettings_Inner = { "TrackSettings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLevelSequenceTrackSettings, METADATA_PARAMS(nullptr, 0) }; // 531163653
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_TrackSettings_MetaData[] = {
		{ "Category", "Tracks" },
		{ "Comment", "/** Specifies class properties for which movie scene tracks will be created automatically. */" },
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
		{ "ToolTip", "Specifies class properties for which movie scene tracks will be created automatically." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_TrackSettings = { "TrackSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceEditorSettings, TrackSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_TrackSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_TrackSettings_MetaData)) }; // 531163653
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_bAutoBindToPIE_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Specifies whether to automatically bind an active sequencer UI to PIE worlds. */" },
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
		{ "ToolTip", "Specifies whether to automatically bind an active sequencer UI to PIE worlds." },
	};
#endif
	void Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_bAutoBindToPIE_SetBit(void* Obj)
	{
		((ULevelSequenceEditorSettings*)Obj)->bAutoBindToPIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_bAutoBindToPIE = { "bAutoBindToPIE", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelSequenceEditorSettings), &Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_bAutoBindToPIE_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_bAutoBindToPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_bAutoBindToPIE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_bAutoBindToSimulate_MetaData[] = {
		{ "Category", "Playback" },
		{ "Comment", "/** Specifies whether to automatically bind an active sequencer UI to simulate worlds. */" },
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
		{ "ToolTip", "Specifies whether to automatically bind an active sequencer UI to simulate worlds." },
	};
#endif
	void Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_bAutoBindToSimulate_SetBit(void* Obj)
	{
		((ULevelSequenceEditorSettings*)Obj)->bAutoBindToSimulate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_bAutoBindToSimulate = { "bAutoBindToSimulate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelSequenceEditorSettings), &Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_bAutoBindToSimulate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_bAutoBindToSimulate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_bAutoBindToSimulate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_TrackSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_TrackSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_bAutoBindToPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::NewProp_bAutoBindToSimulate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::ClassParams = {
		&ULevelSequenceEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceEditorSettings()
	{
		if (!Z_Registration_Info_UClass_ULevelSequenceEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceEditorSettings.OuterSingleton, Z_Construct_UClass_ULevelSequenceEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSequenceEditorSettings.OuterSingleton;
	}
	template<> LEVELSEQUENCEEDITOR_API UClass* StaticClass<ULevelSequenceEditorSettings>()
	{
		return ULevelSequenceEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceEditorSettings);
	ULevelSequenceEditorSettings::~ULevelSequenceEditorSettings() {}
	void ULevelSequenceWithShotsSettings::StaticRegisterNativesULevelSequenceWithShotsSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceWithShotsSettings);
	UClass* Z_Construct_UClass_ULevelSequenceWithShotsSettings_NoRegister()
	{
		return ULevelSequenceWithShotsSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Suffix_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Suffix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BasePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumShots_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_NumShots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceToDuplicate_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_SequenceToDuplicate;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubSequenceNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubSequenceNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SubSequenceNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInstanceSubSequences_MetaData[];
#endif
		static void NewProp_bInstanceSubSequences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstanceSubSequences;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequenceEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Level Sequence With Shots Settings.\n */" },
		{ "IncludePath", "Misc/LevelSequenceEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
		{ "ToolTip", "Level Sequence With Shots Settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "SequenceWithShots" },
		{ "Comment", "/** Sequence With Shots name. */" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
		{ "ToolTip", "Sequence With Shots name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceWithShotsSettings, Name), METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_Suffix_MetaData[] = {
		{ "Category", "SequenceWithShots" },
		{ "Comment", "/** Sequence With Shots suffix. */" },
		{ "DisplayName", "Suffix" },
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
		{ "ToolTip", "Sequence With Shots suffix." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_Suffix = { "Suffix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceWithShotsSettings, Suffix), METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_Suffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_Suffix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_BasePath_MetaData[] = {
		{ "Category", "SequenceWithShots" },
		{ "Comment", "/** Sequence With Shots path. */" },
		{ "ContentDir", "" },
		{ "DisplayName", "Base Path" },
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
		{ "ToolTip", "Sequence With Shots path." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_BasePath = { "BasePath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceWithShotsSettings, BasePath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_BasePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_BasePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_NumShots_MetaData[] = {
		{ "Category", "SequenceWithShots" },
		{ "Comment", "/** Sequence With Shots number of shots. */" },
		{ "DisplayName", "Number of Shots" },
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
		{ "ToolTip", "Sequence With Shots number of shots." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_NumShots = { "NumShots", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceWithShotsSettings, NumShots), METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_NumShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_NumShots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_SequenceToDuplicate_MetaData[] = {
		{ "Category", "SequenceWithShots" },
		{ "Comment", "/** Sequence With Shots level sequence to duplicate when creating shots. */" },
		{ "DisplayName", "Sequence to Duplicate" },
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
		{ "ToolTip", "Sequence With Shots level sequence to duplicate when creating shots." },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_SequenceToDuplicate = { "SequenceToDuplicate", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceWithShotsSettings, SequenceToDuplicate), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_SequenceToDuplicate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_SequenceToDuplicate_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_SubSequenceNames_Inner = { "SubSequenceNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_SubSequenceNames_MetaData[] = {
		{ "Category", "SequenceWithShots" },
		{ "Comment", "/** Array of sub sequence names, each will result in a level sequence asset in the shot. */" },
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
		{ "ToolTip", "Array of sub sequence names, each will result in a level sequence asset in the shot." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_SubSequenceNames = { "SubSequenceNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceWithShotsSettings, SubSequenceNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_SubSequenceNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_SubSequenceNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_bInstanceSubSequences_MetaData[] = {
		{ "Category", "SequenceWithShots" },
		{ "Comment", "/** Whether to instance sub sequences based on the first created sub sequences. */" },
		{ "DisplayName", "Instance Sub Sequences" },
		{ "ModuleRelativePath", "Private/Misc/LevelSequenceEditorSettings.h" },
		{ "ToolTip", "Whether to instance sub sequences based on the first created sub sequences." },
	};
#endif
	void Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_bInstanceSubSequences_SetBit(void* Obj)
	{
		((ULevelSequenceWithShotsSettings*)Obj)->bInstanceSubSequences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_bInstanceSubSequences = { "bInstanceSubSequences", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelSequenceWithShotsSettings), &Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_bInstanceSubSequences_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_bInstanceSubSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_bInstanceSubSequences_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_Suffix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_BasePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_NumShots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_SequenceToDuplicate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_SubSequenceNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_SubSequenceNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::NewProp_bInstanceSubSequences,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceWithShotsSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::ClassParams = {
		&ULevelSequenceWithShotsSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceWithShotsSettings()
	{
		if (!Z_Registration_Info_UClass_ULevelSequenceWithShotsSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceWithShotsSettings.OuterSingleton, Z_Construct_UClass_ULevelSequenceWithShotsSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSequenceWithShotsSettings.OuterSingleton;
	}
	template<> LEVELSEQUENCEEDITOR_API UClass* StaticClass<ULevelSequenceWithShotsSettings>()
	{
		return ULevelSequenceWithShotsSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceWithShotsSettings);
	ULevelSequenceWithShotsSettings::~ULevelSequenceWithShotsSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Misc_LevelSequenceEditorSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Misc_LevelSequenceEditorSettings_h_Statics::ScriptStructInfo[] = {
		{ FLevelSequencePropertyTrackSettings::StaticStruct, Z_Construct_UScriptStruct_FLevelSequencePropertyTrackSettings_Statics::NewStructOps, TEXT("LevelSequencePropertyTrackSettings"), &Z_Registration_Info_UScriptStruct_LevelSequencePropertyTrackSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequencePropertyTrackSettings), 43058983U) },
		{ FLevelSequenceTrackSettings::StaticStruct, Z_Construct_UScriptStruct_FLevelSequenceTrackSettings_Statics::NewStructOps, TEXT("LevelSequenceTrackSettings"), &Z_Registration_Info_UScriptStruct_LevelSequenceTrackSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelSequenceTrackSettings), 531163653U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Misc_LevelSequenceEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceEditorSettings, ULevelSequenceEditorSettings::StaticClass, TEXT("ULevelSequenceEditorSettings"), &Z_Registration_Info_UClass_ULevelSequenceEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceEditorSettings), 3478762899U) },
		{ Z_Construct_UClass_ULevelSequenceWithShotsSettings, ULevelSequenceWithShotsSettings::StaticClass, TEXT("ULevelSequenceWithShotsSettings"), &Z_Registration_Info_UClass_ULevelSequenceWithShotsSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceWithShotsSettings), 3486262508U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Misc_LevelSequenceEditorSettings_h_783459623(TEXT("/Script/LevelSequenceEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Misc_LevelSequenceEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Misc_LevelSequenceEditorSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Misc_LevelSequenceEditorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_LevelSequenceEditor_Source_LevelSequenceEditor_Private_Misc_LevelSequenceEditorSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
