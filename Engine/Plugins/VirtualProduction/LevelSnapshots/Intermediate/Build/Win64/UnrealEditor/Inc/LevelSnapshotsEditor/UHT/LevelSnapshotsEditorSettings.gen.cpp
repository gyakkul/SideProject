// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/LevelSnapshotsEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSnapshotsEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_ULevelSnapshotsEditorSettings();
	LEVELSNAPSHOTSEDITOR_API UClass* Z_Construct_UClass_ULevelSnapshotsEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshotsEditor();
// End Cross Module References
	DEFINE_FUNCTION(ULevelSnapshotsEditorSettings::execParseLevelSnapshotsTokensInText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InTextToParse);
		P_GET_PROPERTY(FStrProperty,Z_Param_InWorldName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=ULevelSnapshotsEditorSettings::ParseLevelSnapshotsTokensInText(Z_Param_Out_InTextToParse,Z_Param_InWorldName);
		P_NATIVE_END;
	}
	void ULevelSnapshotsEditorSettings::StaticRegisterNativesULevelSnapshotsEditorSettings()
	{
		UClass* Class = ULevelSnapshotsEditorSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ParseLevelSnapshotsTokensInText", &ULevelSnapshotsEditorSettings::execParseLevelSnapshotsTokensInText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics
	{
		struct LevelSnapshotsEditorSettings_eventParseLevelSnapshotsTokensInText_Parms
		{
			FText InTextToParse;
			FString InWorldName;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTextToParse_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InTextToParse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InWorldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InWorldName;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::NewProp_InTextToParse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::NewProp_InTextToParse = { "InTextToParse", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotsEditorSettings_eventParseLevelSnapshotsTokensInText_Parms, InTextToParse), METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::NewProp_InTextToParse_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::NewProp_InTextToParse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::NewProp_InWorldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::NewProp_InWorldName = { "InWorldName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotsEditorSettings_eventParseLevelSnapshotsTokensInText_Parms, InWorldName), METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::NewProp_InWorldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::NewProp_InWorldName_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSnapshotsEditorSettings_eventParseLevelSnapshotsTokensInText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::NewProp_InTextToParse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::NewProp_InWorldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Level Snapshots" },
		{ "ModuleRelativePath", "Private/LevelSnapshotsEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSnapshotsEditorSettings, nullptr, "ParseLevelSnapshotsTokensInText", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::LevelSnapshotsEditorSettings_eventParseLevelSnapshotsTokensInText_Parms), Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSnapshotsEditorSettings);
	UClass* Z_Construct_UClass_ULevelSnapshotsEditorSettings_NoRegister()
	{
		return ULevelSnapshotsEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootLevelSnapshotSaveDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootLevelSnapshotSaveDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSnapshotSaveDir_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelSnapshotSaveDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLevelSnapshotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultLevelSnapshotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLevelSnapshotsToolbarButton_MetaData[];
#endif
		static void NewProp_bEnableLevelSnapshotsToolbarButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLevelSnapshotsToolbarButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCreationForm_MetaData[];
#endif
		static void NewProp_bUseCreationForm_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCreationForm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClickActorGroupToSelectActorInScene_MetaData[];
#endif
		static void NewProp_bClickActorGroupToSelectActorInScene_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClickActorGroupToSelectActorInScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreferredCreationFormWindowWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreferredCreationFormWindowWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreferredCreationFormWindowHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreferredCreationFormWindowHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshotsEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSnapshotsEditorSettings_ParseLevelSnapshotsTokensInText, "ParseLevelSnapshotsTokensInText" }, // 487823758
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelSnapshotsEditorSettings.h" },
		{ "ModuleRelativePath", "Private/LevelSnapshotsEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_RootLevelSnapshotSaveDir_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "/** The base directory in which all snapshots will be saved. LevelSnapshotSaveDir specifies in which subdirectory snapshots are saved. */" },
		{ "ContentDir", "" },
		{ "ModuleRelativePath", "Private/LevelSnapshotsEditorSettings.h" },
		{ "ToolTip", "The base directory in which all snapshots will be saved. LevelSnapshotSaveDir specifies in which subdirectory snapshots are saved." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_RootLevelSnapshotSaveDir = { "RootLevelSnapshotSaveDir", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshotsEditorSettings, RootLevelSnapshotSaveDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_RootLevelSnapshotSaveDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_RootLevelSnapshotSaveDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_LevelSnapshotSaveDir_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "/** The format to use for the resulting filename. Extension will be added automatically. Any tokens of the form {token} will be replaced with the corresponding value:\n\x09 * {map}\x09\x09- The name of the captured map or level\n\x09 * {user}\x09\x09- The current OS user account name\n\x09 * {year}       - The current year\n\x09 * {month}      - The current month\n\x09 * {day}        - The current day\n\x09 * {date}       - The current date from the local computer in the format of {year}-{month}-{day}\n\x09 * {time}       - The current time from the local computer in the format of hours-minutes-seconds\n\x09 */" },
		{ "ModuleRelativePath", "Private/LevelSnapshotsEditorSettings.h" },
		{ "ToolTip", "The format to use for the resulting filename. Extension will be added automatically. Any tokens of the form {token} will be replaced with the corresponding value:\n{map}                - The name of the captured map or level\n{user}               - The current OS user account name\n{year}       - The current year\n{month}      - The current month\n{day}        - The current day\n{date}       - The current date from the local computer in the format of {year}-{month}-{day}\n{time}       - The current time from the local computer in the format of hours-minutes-seconds" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_LevelSnapshotSaveDir = { "LevelSnapshotSaveDir", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshotsEditorSettings, LevelSnapshotSaveDir), METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_LevelSnapshotSaveDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_LevelSnapshotSaveDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_DefaultLevelSnapshotName_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "/** The format to use for the resulting filename. Extension will be added automatically. Any tokens of the form {token} will be replaced with the corresponding value:\n\x09 * {map}\x09\x09- The name of the captured map or level\n\x09 * {user}\x09\x09- The current OS user account name\n\x09 * {year}       - The current year\n\x09 * {month}      - The current month\n\x09 * {day}        - The current day\n\x09 * {date}       - The current date from the local computer in the format of {year}-{month}-{day}\n\x09 * {time}       - The current time from the local computer in the format of hours-minutes-seconds\n\x09 */" },
		{ "ModuleRelativePath", "Private/LevelSnapshotsEditorSettings.h" },
		{ "ToolTip", "The format to use for the resulting filename. Extension will be added automatically. Any tokens of the form {token} will be replaced with the corresponding value:\n{map}                - The name of the captured map or level\n{user}               - The current OS user account name\n{year}       - The current year\n{month}      - The current month\n{day}        - The current day\n{date}       - The current date from the local computer in the format of {year}-{month}-{day}\n{time}       - The current time from the local computer in the format of hours-minutes-seconds" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_DefaultLevelSnapshotName = { "DefaultLevelSnapshotName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshotsEditorSettings, DefaultLevelSnapshotName), METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_DefaultLevelSnapshotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_DefaultLevelSnapshotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bEnableLevelSnapshotsToolbarButton_MetaData[] = {
		{ "Category", "Editor" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/LevelSnapshotsEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bEnableLevelSnapshotsToolbarButton_SetBit(void* Obj)
	{
		((ULevelSnapshotsEditorSettings*)Obj)->bEnableLevelSnapshotsToolbarButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bEnableLevelSnapshotsToolbarButton = { "bEnableLevelSnapshotsToolbarButton", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelSnapshotsEditorSettings), &Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bEnableLevelSnapshotsToolbarButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bEnableLevelSnapshotsToolbarButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bEnableLevelSnapshotsToolbarButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bUseCreationForm_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Private/LevelSnapshotsEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bUseCreationForm_SetBit(void* Obj)
	{
		((ULevelSnapshotsEditorSettings*)Obj)->bUseCreationForm = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bUseCreationForm = { "bUseCreationForm", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelSnapshotsEditorSettings), &Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bUseCreationForm_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bUseCreationForm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bUseCreationForm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bClickActorGroupToSelectActorInScene_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/* If true, clicking on an actor group under 'Modified Actors' will select the actor in the scene. The previous selection will be deselected. */" },
		{ "ModuleRelativePath", "Private/LevelSnapshotsEditorSettings.h" },
		{ "ToolTip", "If true, clicking on an actor group under 'Modified Actors' will select the actor in the scene. The previous selection will be deselected." },
	};
#endif
	void Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bClickActorGroupToSelectActorInScene_SetBit(void* Obj)
	{
		((ULevelSnapshotsEditorSettings*)Obj)->bClickActorGroupToSelectActorInScene = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bClickActorGroupToSelectActorInScene = { "bClickActorGroupToSelectActorInScene", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULevelSnapshotsEditorSettings), &Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bClickActorGroupToSelectActorInScene_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bClickActorGroupToSelectActorInScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bClickActorGroupToSelectActorInScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_PreferredCreationFormWindowWidth_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Private/LevelSnapshotsEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_PreferredCreationFormWindowWidth = { "PreferredCreationFormWindowWidth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshotsEditorSettings, PreferredCreationFormWindowWidth), METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_PreferredCreationFormWindowWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_PreferredCreationFormWindowWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_PreferredCreationFormWindowHeight_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Private/LevelSnapshotsEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_PreferredCreationFormWindowHeight = { "PreferredCreationFormWindowHeight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSnapshotsEditorSettings, PreferredCreationFormWindowHeight), METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_PreferredCreationFormWindowHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_PreferredCreationFormWindowHeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_RootLevelSnapshotSaveDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_LevelSnapshotSaveDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_DefaultLevelSnapshotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bEnableLevelSnapshotsToolbarButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bUseCreationForm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_bClickActorGroupToSelectActorInScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_PreferredCreationFormWindowWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::NewProp_PreferredCreationFormWindowHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSnapshotsEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::ClassParams = {
		&ULevelSnapshotsEditorSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSnapshotsEditorSettings()
	{
		if (!Z_Registration_Info_UClass_ULevelSnapshotsEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSnapshotsEditorSettings.OuterSingleton, Z_Construct_UClass_ULevelSnapshotsEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSnapshotsEditorSettings.OuterSingleton;
	}
	template<> LEVELSNAPSHOTSEDITOR_API UClass* StaticClass<ULevelSnapshotsEditorSettings>()
	{
		return ULevelSnapshotsEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSnapshotsEditorSettings);
	ULevelSnapshotsEditorSettings::~ULevelSnapshotsEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_LevelSnapshotsEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_LevelSnapshotsEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSnapshotsEditorSettings, ULevelSnapshotsEditorSettings::StaticClass, TEXT("ULevelSnapshotsEditorSettings"), &Z_Registration_Info_UClass_ULevelSnapshotsEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSnapshotsEditorSettings), 3641910152U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_LevelSnapshotsEditorSettings_h_3349721998(TEXT("/Script/LevelSnapshotsEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_LevelSnapshotsEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshotsEditor_Private_LevelSnapshotsEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
