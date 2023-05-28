// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/EditorLevelUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorLevelUtils() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorLevelUtils();
	UNREALED_API UClass* Z_Construct_UClass_UEditorLevelUtils_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELevelVisibilityDirtyMode;
	static UEnum* ELevelVisibilityDirtyMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELevelVisibilityDirtyMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELevelVisibilityDirtyMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ELevelVisibilityDirtyMode"));
		}
		return Z_Registration_Info_UEnum_ELevelVisibilityDirtyMode.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ELevelVisibilityDirtyMode>()
	{
		return ELevelVisibilityDirtyMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode_Statics::Enumerators[] = {
		{ "ELevelVisibilityDirtyMode::ModifyOnChange", (int64)ELevelVisibilityDirtyMode::ModifyOnChange },
		{ "ELevelVisibilityDirtyMode::DontModify", (int64)ELevelVisibilityDirtyMode::DontModify },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontModify.Comment", "// Use when code is causing the visibility change.\n" },
		{ "DontModify.Name", "ELevelVisibilityDirtyMode::DontModify" },
		{ "DontModify.ToolTip", "Use when code is causing the visibility change." },
		{ "ModifyOnChange.Comment", "// Use when the user is causing the visibility change.  Will update transaction state and mark the package dirty.\n" },
		{ "ModifyOnChange.Name", "ELevelVisibilityDirtyMode::ModifyOnChange" },
		{ "ModifyOnChange.ToolTip", "Use when the user is causing the visibility change.  Will update transaction state and mark the package dirty." },
		{ "ModuleRelativePath", "Public/EditorLevelUtils.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"ELevelVisibilityDirtyMode",
		"ELevelVisibilityDirtyMode",
		Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode()
	{
		if (!Z_Registration_Info_UEnum_ELevelVisibilityDirtyMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELevelVisibilityDirtyMode.InnerSingleton, Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELevelVisibilityDirtyMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UEditorLevelUtils::execGetLevels)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ULevel*>*)Z_Param__Result=UEditorLevelUtils::GetLevels(Z_Param_World);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelUtils::execSetLevelsVisibility)
	{
		P_GET_TARRAY_REF(ULevel*,Z_Param_Out_Levels);
		P_GET_TARRAY_REF(bool,Z_Param_Out_bShouldBeVisible);
		P_GET_UBOOL(Z_Param_bForceLayersVisible);
		P_GET_ENUM(ELevelVisibilityDirtyMode,Z_Param_ModifyMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLevelUtils::SetLevelsVisibility(Z_Param_Out_Levels,Z_Param_Out_bShouldBeVisible,Z_Param_bForceLayersVisible,ELevelVisibilityDirtyMode(Z_Param_ModifyMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelUtils::execSetLevelVisibility)
	{
		P_GET_OBJECT(ULevel,Z_Param_Level);
		P_GET_UBOOL(Z_Param_bShouldBeVisible);
		P_GET_UBOOL(Z_Param_bForceLayersVisible);
		P_GET_ENUM(ELevelVisibilityDirtyMode,Z_Param_ModifyMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLevelUtils::SetLevelVisibility(Z_Param_Level,Z_Param_bShouldBeVisible,Z_Param_bForceLayersVisible,ELevelVisibilityDirtyMode(Z_Param_ModifyMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelUtils::execK2_AddLevelToWorldWithTransform)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_PROPERTY(FStrProperty,Z_Param_LevelPackageName);
		P_GET_OBJECT(UClass,Z_Param_LevelStreamingClass);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_LevelTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelStreaming**)Z_Param__Result=UEditorLevelUtils::K2_AddLevelToWorldWithTransform(Z_Param_World,Z_Param_LevelPackageName,Z_Param_LevelStreamingClass,Z_Param_Out_LevelTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelUtils::execK2_AddLevelToWorld)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_PROPERTY(FStrProperty,Z_Param_LevelPackageName);
		P_GET_OBJECT(UClass,Z_Param_LevelStreamingClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelStreaming**)Z_Param__Result=UEditorLevelUtils::K2_AddLevelToWorld(Z_Param_World,Z_Param_LevelPackageName,Z_Param_LevelStreamingClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelUtils::execMoveSelectedActorsToLevel)
	{
		P_GET_OBJECT(ULevelStreaming,Z_Param_DestLevel);
		P_GET_UBOOL(Z_Param_bWarnAboutReferences);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UEditorLevelUtils::MoveSelectedActorsToLevel(Z_Param_DestLevel,Z_Param_bWarnAboutReferences);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelUtils::execMoveActorsToLevel)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToMove);
		P_GET_OBJECT(ULevelStreaming,Z_Param_DestStreamingLevel);
		P_GET_UBOOL(Z_Param_bWarnAboutReferences);
		P_GET_UBOOL(Z_Param_bWarnAboutRenaming);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UEditorLevelUtils::MoveActorsToLevel(Z_Param_Out_ActorsToMove,Z_Param_DestStreamingLevel,Z_Param_bWarnAboutReferences,Z_Param_bWarnAboutRenaming);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelUtils::execMakeLevelCurrent)
	{
		P_GET_OBJECT(ULevelStreaming,Z_Param_InStreamingLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorLevelUtils::MakeLevelCurrent(Z_Param_InStreamingLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorLevelUtils::execCreateNewStreamingLevel)
	{
		P_GET_OBJECT(UClass,Z_Param_LevelStreamingClass);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewLevelPath);
		P_GET_UBOOL(Z_Param_bMoveSelectedActorsIntoNewLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelStreaming**)Z_Param__Result=UEditorLevelUtils::CreateNewStreamingLevel(Z_Param_LevelStreamingClass,Z_Param_NewLevelPath,Z_Param_bMoveSelectedActorsIntoNewLevel);
		P_NATIVE_END;
	}
	void UEditorLevelUtils::StaticRegisterNativesUEditorLevelUtils()
	{
		UClass* Class = UEditorLevelUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateNewStreamingLevel", &UEditorLevelUtils::execCreateNewStreamingLevel },
			{ "GetLevels", &UEditorLevelUtils::execGetLevels },
			{ "K2_AddLevelToWorld", &UEditorLevelUtils::execK2_AddLevelToWorld },
			{ "K2_AddLevelToWorldWithTransform", &UEditorLevelUtils::execK2_AddLevelToWorldWithTransform },
			{ "MakeLevelCurrent", &UEditorLevelUtils::execMakeLevelCurrent },
			{ "MoveActorsToLevel", &UEditorLevelUtils::execMoveActorsToLevel },
			{ "MoveSelectedActorsToLevel", &UEditorLevelUtils::execMoveSelectedActorsToLevel },
			{ "SetLevelsVisibility", &UEditorLevelUtils::execSetLevelsVisibility },
			{ "SetLevelVisibility", &UEditorLevelUtils::execSetLevelVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics
	{
		struct EditorLevelUtils_eventCreateNewStreamingLevel_Parms
		{
			TSubclassOf<ULevelStreaming>  LevelStreamingClass;
			FString NewLevelPath;
			bool bMoveSelectedActorsIntoNewLevel;
			ULevelStreaming* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_LevelStreamingClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewLevelPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewLevelPath;
		static void NewProp_bMoveSelectedActorsIntoNewLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoveSelectedActorsIntoNewLevel;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_LevelStreamingClass = { "LevelStreamingClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventCreateNewStreamingLevel_Parms, LevelStreamingClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_NewLevelPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_NewLevelPath = { "NewLevelPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventCreateNewStreamingLevel_Parms, NewLevelPath), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_NewLevelPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_NewLevelPath_MetaData)) };
	void Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_bMoveSelectedActorsIntoNewLevel_SetBit(void* Obj)
	{
		((EditorLevelUtils_eventCreateNewStreamingLevel_Parms*)Obj)->bMoveSelectedActorsIntoNewLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_bMoveSelectedActorsIntoNewLevel = { "bMoveSelectedActorsIntoNewLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelUtils_eventCreateNewStreamingLevel_Parms), &Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_bMoveSelectedActorsIntoNewLevel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventCreateNewStreamingLevel_Parms, ReturnValue), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_LevelStreamingClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_NewLevelPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_bMoveSelectedActorsIntoNewLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Creation" },
		{ "Comment", "/**\n\x09 * Creates a new streaming level in the current world\n\x09 *\n\x09 * @param\x09LevelStreamingClass\x09\x09\x09\x09\x09The streaming class type instead to use for the level.\n\x09 * @param\x09NewLevelPath\x09\x09\x09\x09\x09\x09Optional path to the level package path format (\"e.g /Game/MyLevel\").  If empty, the user will be prompted during the save process.\n\x09 * @param\x09""bMoveSelectedActorsIntoNewLevel\x09\x09If true, move any selected actors into the new level.\n\x09 *\n\x09 * @return\x09Returns the newly created level, or NULL on failure\n\x09 */" },
		{ "CPP_Default_bMoveSelectedActorsIntoNewLevel", "false" },
		{ "CPP_Default_NewLevelPath", "" },
		{ "ModuleRelativePath", "Public/EditorLevelUtils.h" },
		{ "ToolTip", "Creates a new streaming level in the current world\n\n@param       LevelStreamingClass                                     The streaming class type instead to use for the level.\n@param       NewLevelPath                                            Optional path to the level package path format (\"e.g /Game/MyLevel\").  If empty, the user will be prompted during the save process.\n@param       bMoveSelectedActorsIntoNewLevel         If true, move any selected actors into the new level.\n\n@return      Returns the newly created level, or NULL on failure" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelUtils, nullptr, "CreateNewStreamingLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::EditorLevelUtils_eventCreateNewStreamingLevel_Parms), Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelUtils_GetLevels_Statics
	{
		struct EditorLevelUtils_eventGetLevels_Parms
		{
			UWorld* World;
			TArray<ULevel*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelUtils_GetLevels_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventGetLevels_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelUtils_GetLevels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_GetLevels_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelUtils_GetLevels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventGetLevels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_GetLevels_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_GetLevels_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelUtils_GetLevels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_GetLevels_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_GetLevels_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_GetLevels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_GetLevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "Comment", "/**\n\x09 * Returns all levels for a world.\n\x09 *\n\x09 * @param\x09World\x09\x09\x09\x09World containing levels\n\x09 * @return\x09\x09\x09\x09\x09\x09Set of all levels\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorLevelUtils.h" },
		{ "ToolTip", "Returns all levels for a world.\n\n@param       World                           World containing levels\n@return                                              Set of all levels" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelUtils_GetLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelUtils, nullptr, "GetLevels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelUtils_GetLevels_Statics::EditorLevelUtils_eventGetLevels_Parms), Z_Construct_UFunction_UEditorLevelUtils_GetLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_GetLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_GetLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_GetLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelUtils_GetLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelUtils_GetLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics
	{
		struct EditorLevelUtils_eventK2_AddLevelToWorld_Parms
		{
			UWorld* World;
			FString LevelPackageName;
			TSubclassOf<ULevelStreaming>  LevelStreamingClass;
			ULevelStreaming* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelPackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelPackageName;
		static const UECodeGen_Private::FClassPropertyParams NewProp_LevelStreamingClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventK2_AddLevelToWorld_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::NewProp_LevelPackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::NewProp_LevelPackageName = { "LevelPackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventK2_AddLevelToWorld_Parms, LevelPackageName), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::NewProp_LevelPackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::NewProp_LevelPackageName_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::NewProp_LevelStreamingClass = { "LevelStreamingClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventK2_AddLevelToWorld_Parms, LevelStreamingClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventK2_AddLevelToWorld_Parms, ReturnValue), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::NewProp_LevelPackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::NewProp_LevelStreamingClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Creation" },
		{ "Comment", "/**\n\x09 * Adds the named level package to the world.  Does nothing if the level already exists in the world.\n\x09 *\n\x09 * @param\x09InWorld\x09\x09\x09\x09World in which to add the level.\n\x09 * @param\x09LevelPackageName\x09The package name (\"e.g /Game/MyLevel\") of the level package to add.\n\x09 * @param\x09LevelStreamingClass\x09The streaming class type to use for the level.\n\x09 *\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09\x09The new level, or NULL if the level couldn't added.\n\x09 */" },
		{ "DisplayName", "Add Level to World" },
		{ "ModuleRelativePath", "Public/EditorLevelUtils.h" },
		{ "ScriptName", "AddLevelToWorld" },
		{ "ToolTip", "Adds the named level package to the world.  Does nothing if the level already exists in the world.\n\n@param       InWorld                         World in which to add the level.\n@param       LevelPackageName        The package name (\"e.g /Game/MyLevel\") of the level package to add.\n@param       LevelStreamingClass     The streaming class type to use for the level.\n\n@return                                                              The new level, or NULL if the level couldn't added." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelUtils, nullptr, "K2_AddLevelToWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::EditorLevelUtils_eventK2_AddLevelToWorld_Parms), Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics
	{
		struct EditorLevelUtils_eventK2_AddLevelToWorldWithTransform_Parms
		{
			UWorld* World;
			FString LevelPackageName;
			TSubclassOf<ULevelStreaming>  LevelStreamingClass;
			FTransform LevelTransform;
			ULevelStreaming* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelPackageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelPackageName;
		static const UECodeGen_Private::FClassPropertyParams NewProp_LevelStreamingClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelTransform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventK2_AddLevelToWorldWithTransform_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::NewProp_LevelPackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::NewProp_LevelPackageName = { "LevelPackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventK2_AddLevelToWorldWithTransform_Parms, LevelPackageName), METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::NewProp_LevelPackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::NewProp_LevelPackageName_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::NewProp_LevelStreamingClass = { "LevelStreamingClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventK2_AddLevelToWorldWithTransform_Parms, LevelStreamingClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::NewProp_LevelTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::NewProp_LevelTransform = { "LevelTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventK2_AddLevelToWorldWithTransform_Parms, LevelTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::NewProp_LevelTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::NewProp_LevelTransform_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventK2_AddLevelToWorldWithTransform_Parms, ReturnValue), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::NewProp_LevelPackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::NewProp_LevelStreamingClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::NewProp_LevelTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Creation" },
		{ "Comment", "/**\n\x09 * Adds the named level package to the world at the given position.  Does nothing if the level already exists in the world.\n\x09 *\n\x09 * @param\x09InWorld\x09\x09\x09\x09World in which to add the level.\n\x09 * @param\x09LevelPackageName\x09The package name (\"e.g /Game/MyLevel\") of the level package to add.\n\x09 * @param\x09LevelStreamingClass\x09The streaming class type to use for the level.\n\x09 * @param\x09LevelTransform\x09\x09The origin of the new level in the world.\n\x09 *\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09\x09The new level, or NULL if the level couldn't added.\n\x09 */" },
		{ "DisplayName", "Add Level to World with Transform" },
		{ "ModuleRelativePath", "Public/EditorLevelUtils.h" },
		{ "ScriptName", "AddLevelToWorldWithTransform" },
		{ "ToolTip", "Adds the named level package to the world at the given position.  Does nothing if the level already exists in the world.\n\n@param       InWorld                         World in which to add the level.\n@param       LevelPackageName        The package name (\"e.g /Game/MyLevel\") of the level package to add.\n@param       LevelStreamingClass     The streaming class type to use for the level.\n@param       LevelTransform          The origin of the new level in the world.\n\n@return                                                              The new level, or NULL if the level couldn't added." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelUtils, nullptr, "K2_AddLevelToWorldWithTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::EditorLevelUtils_eventK2_AddLevelToWorldWithTransform_Parms), Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics
	{
		struct EditorLevelUtils_eventMakeLevelCurrent_Parms
		{
			ULevelStreaming* InStreamingLevel;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InStreamingLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::NewProp_InStreamingLevel = { "InStreamingLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventMakeLevelCurrent_Parms, InStreamingLevel), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::NewProp_InStreamingLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Creation" },
		{ "Comment", "/**\n\x09 * Makes the specified streaming level the current level for editing.\n\x09 * The current level is where actors are spawned to when calling SpawnActor\n\x09 *\n\x09 * @return\x09true\x09If a level was removed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorLevelUtils.h" },
		{ "ToolTip", "Makes the specified streaming level the current level for editing.\nThe current level is where actors are spawned to when calling SpawnActor\n\n@return      true    If a level was removed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelUtils, nullptr, "MakeLevelCurrent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::EditorLevelUtils_eventMakeLevelCurrent_Parms), Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics
	{
		struct EditorLevelUtils_eventMoveActorsToLevel_Parms
		{
			TArray<AActor*> ActorsToMove;
			ULevelStreaming* DestStreamingLevel;
			bool bWarnAboutReferences;
			bool bWarnAboutRenaming;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToMove_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToMove_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToMove;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestStreamingLevel;
		static void NewProp_bWarnAboutReferences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarnAboutReferences;
		static void NewProp_bWarnAboutRenaming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarnAboutRenaming;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_ActorsToMove_Inner = { "ActorsToMove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_ActorsToMove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_ActorsToMove = { "ActorsToMove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventMoveActorsToLevel_Parms, ActorsToMove), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_ActorsToMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_ActorsToMove_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_DestStreamingLevel = { "DestStreamingLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventMoveActorsToLevel_Parms, DestStreamingLevel), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_bWarnAboutReferences_SetBit(void* Obj)
	{
		((EditorLevelUtils_eventMoveActorsToLevel_Parms*)Obj)->bWarnAboutReferences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_bWarnAboutReferences = { "bWarnAboutReferences", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelUtils_eventMoveActorsToLevel_Parms), &Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_bWarnAboutReferences_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_bWarnAboutRenaming_SetBit(void* Obj)
	{
		((EditorLevelUtils_eventMoveActorsToLevel_Parms*)Obj)->bWarnAboutRenaming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_bWarnAboutRenaming = { "bWarnAboutRenaming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelUtils_eventMoveActorsToLevel_Parms), &Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_bWarnAboutRenaming_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventMoveActorsToLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_ActorsToMove_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_ActorsToMove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_DestStreamingLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_bWarnAboutReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_bWarnAboutRenaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Creation" },
		{ "Comment", "/**\n\x09 * Moves the specified list of actors to the specified streaming level. The new actors will be selected\n\x09 *\n\x09 * @param\x09""ActorsToMove\x09\x09\x09List of actors to move\n\x09 * @param\x09""DestStreamingLevel\x09\x09The destination streaming level of the current world to move the actors to\n\x09 * @param\x09""bWarnAboutReferences\x09Whether or not to show a modal warning about referenced actors that may no longer function after being moved\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09The number of actors that were successfully moved to the new level\n\x09 */" },
		{ "CPP_Default_bWarnAboutReferences", "true" },
		{ "CPP_Default_bWarnAboutRenaming", "true" },
		{ "ModuleRelativePath", "Public/EditorLevelUtils.h" },
		{ "ToolTip", "Moves the specified list of actors to the specified streaming level. The new actors will be selected\n\n@param       ActorsToMove                    List of actors to move\n@param       DestStreamingLevel              The destination streaming level of the current world to move the actors to\n@param       bWarnAboutReferences    Whether or not to show a modal warning about referenced actors that may no longer function after being moved\n@return                                                      The number of actors that were successfully moved to the new level" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelUtils, nullptr, "MoveActorsToLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::EditorLevelUtils_eventMoveActorsToLevel_Parms), Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics
	{
		struct EditorLevelUtils_eventMoveSelectedActorsToLevel_Parms
		{
			ULevelStreaming* DestLevel;
			bool bWarnAboutReferences;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DestLevel;
		static void NewProp_bWarnAboutReferences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarnAboutReferences;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::NewProp_DestLevel = { "DestLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventMoveSelectedActorsToLevel_Parms, DestLevel), Z_Construct_UClass_ULevelStreaming_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::NewProp_bWarnAboutReferences_SetBit(void* Obj)
	{
		((EditorLevelUtils_eventMoveSelectedActorsToLevel_Parms*)Obj)->bWarnAboutReferences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::NewProp_bWarnAboutReferences = { "bWarnAboutReferences", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelUtils_eventMoveSelectedActorsToLevel_Parms), &Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::NewProp_bWarnAboutReferences_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventMoveSelectedActorsToLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::NewProp_DestLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::NewProp_bWarnAboutReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Creation" },
		{ "Comment", "/**\n\x09 * Moves the currently selected actors to the specified streaming level. The new actors will be selected\n\x09 *\n\x09 * @param\x09""DestStreamingLevel\x09\x09The destination streaming level of the current world to move the actors to\n\x09 * @param\x09""bWarnAboutReferences\x09Whether or not to show a modal warning about referenced actors that may no longer function after being moved\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09The number of actors that were successfully moved to the new level\n\x09 */" },
		{ "CPP_Default_bWarnAboutReferences", "true" },
		{ "ModuleRelativePath", "Public/EditorLevelUtils.h" },
		{ "ToolTip", "Moves the currently selected actors to the specified streaming level. The new actors will be selected\n\n@param       DestStreamingLevel              The destination streaming level of the current world to move the actors to\n@param       bWarnAboutReferences    Whether or not to show a modal warning about referenced actors that may no longer function after being moved\n@return                                                      The number of actors that were successfully moved to the new level" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelUtils, nullptr, "MoveSelectedActorsToLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::EditorLevelUtils_eventMoveSelectedActorsToLevel_Parms), Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics
	{
		struct EditorLevelUtils_eventSetLevelsVisibility_Parms
		{
			TArray<ULevel*> Levels;
			TArray<bool> bShouldBeVisible;
			bool bForceLayersVisible;
			ELevelVisibilityDirtyMode ModifyMode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Levels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Levels;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisible_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeVisible_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bShouldBeVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceLayersVisible_MetaData[];
#endif
		static void NewProp_bForceLayersVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceLayersVisible;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModifyMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifyMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ModifyMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_Levels_Inner = { "Levels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_Levels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_Levels = { "Levels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventSetLevelsVisibility_Parms, Levels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_Levels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_Levels_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_bShouldBeVisible_Inner = { "bShouldBeVisible", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_bShouldBeVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_bShouldBeVisible = { "bShouldBeVisible", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventSetLevelsVisibility_Parms, bShouldBeVisible), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_bShouldBeVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_bShouldBeVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_bForceLayersVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_bForceLayersVisible_SetBit(void* Obj)
	{
		((EditorLevelUtils_eventSetLevelsVisibility_Parms*)Obj)->bForceLayersVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_bForceLayersVisible = { "bForceLayersVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelUtils_eventSetLevelsVisibility_Parms), &Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_bForceLayersVisible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_bForceLayersVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_bForceLayersVisible_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_ModifyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_ModifyMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_ModifyMode = { "ModifyMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventSetLevelsVisibility_Parms, ModifyMode), Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_ModifyMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_ModifyMode_MetaData)) }; // 4122338248
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_Levels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_Levels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_bShouldBeVisible_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_bShouldBeVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_bForceLayersVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_ModifyMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::NewProp_ModifyMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "Comment", "/**\n\x09 * Sets a level's visibility in the editor. More efficient than SetLevelsVisibility when changing the visibility of multiple levels simultaneously.\n\x09 *\n\x09 * @param\x09Levels\x09\x09\x09\x09\x09The levels to modify.\n\x09 * @param\x09""bShouldBeVisible\x09\x09The level's new visibility state for each level.\n\x09 * @param\x09""bForceLayersVisible\x09\x09If true and the level is visible, force the level's layers to be visible.\n\x09 * @param\x09ModifyMode\x09\x09\x09\x09""ELevelVisibilityDirtyMode mode value.\n\x09 */" },
		{ "CPP_Default_ModifyMode", "ModifyOnChange" },
		{ "ModuleRelativePath", "Public/EditorLevelUtils.h" },
		{ "ToolTip", "Sets a level's visibility in the editor. More efficient than SetLevelsVisibility when changing the visibility of multiple levels simultaneously.\n\n@param       Levels                                  The levels to modify.\n@param       bShouldBeVisible                The level's new visibility state for each level.\n@param       bForceLayersVisible             If true and the level is visible, force the level's layers to be visible.\n@param       ModifyMode                              ELevelVisibilityDirtyMode mode value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelUtils, nullptr, "SetLevelsVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::EditorLevelUtils_eventSetLevelsVisibility_Parms), Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics
	{
		struct EditorLevelUtils_eventSetLevelVisibility_Parms
		{
			ULevel* Level;
			bool bShouldBeVisible;
			bool bForceLayersVisible;
			ELevelVisibilityDirtyMode ModifyMode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldBeVisible_MetaData[];
#endif
		static void NewProp_bShouldBeVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceLayersVisible_MetaData[];
#endif
		static void NewProp_bForceLayersVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceLayersVisible;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModifyMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifyMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ModifyMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventSetLevelVisibility_Parms, Level), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bShouldBeVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bShouldBeVisible_SetBit(void* Obj)
	{
		((EditorLevelUtils_eventSetLevelVisibility_Parms*)Obj)->bShouldBeVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bShouldBeVisible = { "bShouldBeVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelUtils_eventSetLevelVisibility_Parms), &Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bShouldBeVisible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bShouldBeVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bShouldBeVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bForceLayersVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bForceLayersVisible_SetBit(void* Obj)
	{
		((EditorLevelUtils_eventSetLevelVisibility_Parms*)Obj)->bForceLayersVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bForceLayersVisible = { "bForceLayersVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorLevelUtils_eventSetLevelVisibility_Parms), &Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bForceLayersVisible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bForceLayersVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bForceLayersVisible_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_ModifyMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_ModifyMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_ModifyMode = { "ModifyMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorLevelUtils_eventSetLevelVisibility_Parms, ModifyMode), Z_Construct_UEnum_UnrealEd_ELevelVisibilityDirtyMode, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_ModifyMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_ModifyMode_MetaData)) }; // 4122338248
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bShouldBeVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_bForceLayersVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_ModifyMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::NewProp_ModifyMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "Comment", "/**\n\x09 * Sets a level's visibility in the editor. Less efficient than SetLevelsVisibility when changing the visibility of multiple levels simultaneously.\n\x09 *\n\x09 * @param\x09Level\x09\x09\x09\x09\x09The level to modify.\n\x09 * @param\x09""bShouldBeVisible\x09\x09The level's new visibility state.\n\x09 * @param\x09""bForceLayersVisible\x09\x09If true and the level is visible, force the level's layers to be visible.\n\x09 * @param\x09ModifyMode\x09\x09\x09\x09""ELevelVisibilityDirtyMode mode value.\n\x09 */" },
		{ "CPP_Default_ModifyMode", "ModifyOnChange" },
		{ "ModuleRelativePath", "Public/EditorLevelUtils.h" },
		{ "ToolTip", "Sets a level's visibility in the editor. Less efficient than SetLevelsVisibility when changing the visibility of multiple levels simultaneously.\n\n@param       Level                                   The level to modify.\n@param       bShouldBeVisible                The level's new visibility state.\n@param       bForceLayersVisible             If true and the level is visible, force the level's layers to be visible.\n@param       ModifyMode                              ELevelVisibilityDirtyMode mode value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorLevelUtils, nullptr, "SetLevelVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::EditorLevelUtils_eventSetLevelVisibility_Parms), Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorLevelUtils);
	UClass* Z_Construct_UClass_UEditorLevelUtils_NoRegister()
	{
		return UEditorLevelUtils::StaticClass();
	}
	struct Z_Construct_UClass_UEditorLevelUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorLevelUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorLevelUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorLevelUtils_CreateNewStreamingLevel, "CreateNewStreamingLevel" }, // 800723452
		{ &Z_Construct_UFunction_UEditorLevelUtils_GetLevels, "GetLevels" }, // 3540772440
		{ &Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorld, "K2_AddLevelToWorld" }, // 2464547476
		{ &Z_Construct_UFunction_UEditorLevelUtils_K2_AddLevelToWorldWithTransform, "K2_AddLevelToWorldWithTransform" }, // 4113845323
		{ &Z_Construct_UFunction_UEditorLevelUtils_MakeLevelCurrent, "MakeLevelCurrent" }, // 15242781
		{ &Z_Construct_UFunction_UEditorLevelUtils_MoveActorsToLevel, "MoveActorsToLevel" }, // 2857471540
		{ &Z_Construct_UFunction_UEditorLevelUtils_MoveSelectedActorsToLevel, "MoveSelectedActorsToLevel" }, // 2212741965
		{ &Z_Construct_UFunction_UEditorLevelUtils_SetLevelsVisibility, "SetLevelsVisibility" }, // 3110140314
		{ &Z_Construct_UFunction_UEditorLevelUtils_SetLevelVisibility, "SetLevelVisibility" }, // 4005996704
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorLevelUtils_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorLevelUtils.h" },
		{ "ModuleRelativePath", "Public/EditorLevelUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorLevelUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorLevelUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorLevelUtils_Statics::ClassParams = {
		&UEditorLevelUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorLevelUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorLevelUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorLevelUtils()
	{
		if (!Z_Registration_Info_UClass_UEditorLevelUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorLevelUtils.OuterSingleton, Z_Construct_UClass_UEditorLevelUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorLevelUtils.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorLevelUtils>()
	{
		return UEditorLevelUtils::StaticClass();
	}
	UEditorLevelUtils::UEditorLevelUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorLevelUtils);
	UEditorLevelUtils::~UEditorLevelUtils() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_Statics::EnumInfo[] = {
		{ ELevelVisibilityDirtyMode_StaticEnum, TEXT("ELevelVisibilityDirtyMode"), &Z_Registration_Info_UEnum_ELevelVisibilityDirtyMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4122338248U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorLevelUtils, UEditorLevelUtils::StaticClass, TEXT("UEditorLevelUtils"), &Z_Registration_Info_UClass_UEditorLevelUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorLevelUtils), 1453528012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_133256619(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_EditorLevelUtils_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
