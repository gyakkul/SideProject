// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/AsyncActionHandleSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncActionHandleSaveGame() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionHandleSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionHandleSaveGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnAsyncHandleSaveGame_Parms
		{
			USaveGame* SaveGame;
			bool bSuccess;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventOnAsyncHandleSaveGame_Parms, SaveGame), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_Engine_eventOnAsyncHandleSaveGame_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_Engine_eventOnAsyncHandleSaveGame_Parms), &Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::NewProp_SaveGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/AsyncActionHandleSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAsyncHandleSaveGame__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::_Script_Engine_eventOnAsyncHandleSaveGame_Parms), Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAsyncHandleSaveGame_DelegateWrapper(const FMulticastScriptDelegate& OnAsyncHandleSaveGame, USaveGame* SaveGame, bool bSuccess)
{
	struct _Script_Engine_eventOnAsyncHandleSaveGame_Parms
	{
		USaveGame* SaveGame;
		bool bSuccess;
	};
	_Script_Engine_eventOnAsyncHandleSaveGame_Parms Parms;
	Parms.SaveGame=SaveGame;
	Parms.bSuccess=bSuccess ? true : false;
	OnAsyncHandleSaveGame.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAsyncActionHandleSaveGame::execAsyncLoadGameFromSlot)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncActionHandleSaveGame**)Z_Param__Result=UAsyncActionHandleSaveGame::AsyncLoadGameFromSlot(Z_Param_WorldContextObject,Z_Param_SlotName,Z_Param_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncActionHandleSaveGame::execAsyncSaveGameToSlot)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncActionHandleSaveGame**)Z_Param__Result=UAsyncActionHandleSaveGame::AsyncSaveGameToSlot(Z_Param_WorldContextObject,Z_Param_SaveGameObject,Z_Param_SlotName,Z_Param_UserIndex);
		P_NATIVE_END;
	}
	void UAsyncActionHandleSaveGame::StaticRegisterNativesUAsyncActionHandleSaveGame()
	{
		UClass* Class = UAsyncActionHandleSaveGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLoadGameFromSlot", &UAsyncActionHandleSaveGame::execAsyncLoadGameFromSlot },
			{ "AsyncSaveGameToSlot", &UAsyncActionHandleSaveGame::execAsyncSaveGameToSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics
	{
		struct AsyncActionHandleSaveGame_eventAsyncLoadGameFromSlot_Parms
		{
			UObject* WorldContextObject;
			FString SlotName;
			int32 UserIndex;
			UAsyncActionHandleSaveGame* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncLoadGameFromSlot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncLoadGameFromSlot_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncLoadGameFromSlot_Parms, UserIndex), METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_UserIndex_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncLoadGameFromSlot_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionHandleSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SaveGame" },
		{ "Comment", "/**\n\x09 * Schedule an async load of a specific slot. UGameplayStatics::AsyncLoadGameFromSlot is the native version of this.\n\x09 * When the load has succeeded or failed, the completed pin is activated with success/failure and the newly loaded save game object if valid.\n\x09 * Keep in mind that some platforms may not support trying to load and save at the same time.\n\x09 *\n\x09 * @param SlotName\x09\x09\x09Name of the save game slot to load from.\n\x09 * @param UserIndex\x09\x09\x09The platform user index that identifies the user doing the saving, ignored on some platforms.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/AsyncActionHandleSaveGame.h" },
		{ "ToolTip", "Schedule an async load of a specific slot. UGameplayStatics::AsyncLoadGameFromSlot is the native version of this.\nWhen the load has succeeded or failed, the completed pin is activated with success/failure and the newly loaded save game object if valid.\nKeep in mind that some platforms may not support trying to load and save at the same time.\n\n@param SlotName                      Name of the save game slot to load from.\n@param UserIndex                     The platform user index that identifies the user doing the saving, ignored on some platforms." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionHandleSaveGame, nullptr, "AsyncLoadGameFromSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::AsyncActionHandleSaveGame_eventAsyncLoadGameFromSlot_Parms), Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics
	{
		struct AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms
		{
			UObject* WorldContextObject;
			USaveGame* SaveGameObject;
			FString SlotName;
			int32 UserIndex;
			UAsyncActionHandleSaveGame* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_SaveGameObject = { "SaveGameObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms, SaveGameObject), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms, UserIndex), METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_UserIndex_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionHandleSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_SaveGameObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SaveGame" },
		{ "Comment", "/**\n\x09 * Schedule an async save to a specific slot. UGameplayStatics::AsyncSaveGameToSlot is the native version of this.\n\x09 * When the save has succeeded or failed, the completed pin is activated with success/failure and the save game object.\n\x09 * Keep in mind that some platforms may not support trying to load and save at the same time.\n\x09 *\n\x09 * @param SaveGameObject\x09Object that contains data about the save game that we want to write out.\n\x09 * @param SlotName\x09\x09\x09Name of the save game slot to load from.\n\x09 * @param UserIndex\x09\x09\x09The platform user index that identifies the user doing the saving, ignored on some platforms.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/AsyncActionHandleSaveGame.h" },
		{ "ToolTip", "Schedule an async save to a specific slot. UGameplayStatics::AsyncSaveGameToSlot is the native version of this.\nWhen the save has succeeded or failed, the completed pin is activated with success/failure and the save game object.\nKeep in mind that some platforms may not support trying to load and save at the same time.\n\n@param SaveGameObject        Object that contains data about the save game that we want to write out.\n@param SlotName                      Name of the save game slot to load from.\n@param UserIndex                     The platform user index that identifies the user doing the saving, ignored on some platforms." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionHandleSaveGame, nullptr, "AsyncSaveGameToSlot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms), Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncActionHandleSaveGame);
	UClass* Z_Construct_UClass_UAsyncActionHandleSaveGame_NoRegister()
	{
		return UAsyncActionHandleSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SaveGameObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot, "AsyncLoadGameFromSlot" }, // 1306795865
		{ &Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot, "AsyncSaveGameToSlot" }, // 943171819
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Async action to handle async load/save of a USaveGame. This can be subclassed by a specific game */" },
		{ "IncludePath", "GameFramework/AsyncActionHandleSaveGame.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/AsyncActionHandleSaveGame.h" },
		{ "ToolTip", "Async action to handle async load/save of a USaveGame. This can be subclassed by a specific game" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_Completed_MetaData[] = {
		{ "Comment", "/** Delegate called when the save/load completes */" },
		{ "ModuleRelativePath", "Classes/GameFramework/AsyncActionHandleSaveGame.h" },
		{ "ToolTip", "Delegate called when the save/load completes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncActionHandleSaveGame, Completed), Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_Completed_MetaData)) }; // 4101873653
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_SaveGameObject_MetaData[] = {
		{ "Comment", "/** The object that was either saved or loaded */" },
		{ "ModuleRelativePath", "Classes/GameFramework/AsyncActionHandleSaveGame.h" },
		{ "ToolTip", "The object that was either saved or loaded" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_SaveGameObject = { "SaveGameObject", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncActionHandleSaveGame, SaveGameObject), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_SaveGameObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_SaveGameObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_Completed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_SaveGameObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncActionHandleSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::ClassParams = {
		&UAsyncActionHandleSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncActionHandleSaveGame()
	{
		if (!Z_Registration_Info_UClass_UAsyncActionHandleSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncActionHandleSaveGame.OuterSingleton, Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncActionHandleSaveGame.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAsyncActionHandleSaveGame>()
	{
		return UAsyncActionHandleSaveGame::StaticClass();
	}
	UAsyncActionHandleSaveGame::UAsyncActionHandleSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionHandleSaveGame);
	UAsyncActionHandleSaveGame::~UAsyncActionHandleSaveGame() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_AsyncActionHandleSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_AsyncActionHandleSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncActionHandleSaveGame, UAsyncActionHandleSaveGame::StaticClass, TEXT("UAsyncActionHandleSaveGame"), &Z_Registration_Info_UClass_UAsyncActionHandleSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncActionHandleSaveGame), 518351325U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_AsyncActionHandleSaveGame_h_4071007428(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_AsyncActionHandleSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_AsyncActionHandleSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
