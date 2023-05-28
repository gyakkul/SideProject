// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/GameFrameworkComponentManager.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFrameworkComponentManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkComponentManager();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkComponentManager_NoRegister();
	MODULARGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ModularGameplay();
// End Cross Module References
	DEFINE_FUNCTION(UGameFrameworkComponentManager::execUnregisterClassInitStateDelegate)
	{
		P_GET_SOFTCLASS(TSoftClassPtr<AActor> ,Z_Param_ActorClass);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_DelegateToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnregisterClassInitStateDelegate(Z_Param_ActorClass,FActorInitStateChangedBPDelegate(Z_Param_DelegateToRemove));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameFrameworkComponentManager::execRegisterAndCallForClassInitState)
	{
		P_GET_SOFTCLASS(TSoftClassPtr<AActor> ,Z_Param_ActorClass);
		P_GET_PROPERTY(FNameProperty,Z_Param_FeatureName);
		P_GET_STRUCT(FGameplayTag,Z_Param_RequiredState);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_GET_UBOOL(Z_Param_bCallImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegisterAndCallForClassInitState(Z_Param_ActorClass,Z_Param_FeatureName,Z_Param_RequiredState,FActorInitStateChangedBPDelegate(Z_Param_Delegate),Z_Param_bCallImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameFrameworkComponentManager::execUnregisterActorInitStateDelegate)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_DelegateToRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnregisterActorInitStateDelegate(Z_Param_Actor,FActorInitStateChangedBPDelegate(Z_Param_DelegateToRemove));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameFrameworkComponentManager::execRegisterAndCallForActorInitState)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_FeatureName);
		P_GET_STRUCT(FGameplayTag,Z_Param_RequiredState);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_GET_UBOOL(Z_Param_bCallImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegisterAndCallForActorInitState(Z_Param_Actor,Z_Param_FeatureName,Z_Param_RequiredState,FActorInitStateChangedBPDelegate(Z_Param_Delegate),Z_Param_bCallImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameFrameworkComponentManager::execSendExtensionEvent)
	{
		P_GET_OBJECT(AActor,Z_Param_Receiver);
		P_GET_PROPERTY(FNameProperty,Z_Param_EventName);
		P_GET_UBOOL(Z_Param_bOnlyInGameWorlds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendExtensionEvent(Z_Param_Receiver,Z_Param_EventName,Z_Param_bOnlyInGameWorlds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameFrameworkComponentManager::execRemoveReceiver)
	{
		P_GET_OBJECT(AActor,Z_Param_Receiver);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveReceiver(Z_Param_Receiver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameFrameworkComponentManager::execAddReceiver)
	{
		P_GET_OBJECT(AActor,Z_Param_Receiver);
		P_GET_UBOOL(Z_Param_bAddOnlyInGameWorlds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddReceiver(Z_Param_Receiver,Z_Param_bAddOnlyInGameWorlds);
		P_NATIVE_END;
	}
	void UGameFrameworkComponentManager::StaticRegisterNativesUGameFrameworkComponentManager()
	{
		UClass* Class = UGameFrameworkComponentManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddReceiver", &UGameFrameworkComponentManager::execAddReceiver },
			{ "RegisterAndCallForActorInitState", &UGameFrameworkComponentManager::execRegisterAndCallForActorInitState },
			{ "RegisterAndCallForClassInitState", &UGameFrameworkComponentManager::execRegisterAndCallForClassInitState },
			{ "RemoveReceiver", &UGameFrameworkComponentManager::execRemoveReceiver },
			{ "SendExtensionEvent", &UGameFrameworkComponentManager::execSendExtensionEvent },
			{ "UnregisterActorInitStateDelegate", &UGameFrameworkComponentManager::execUnregisterActorInitStateDelegate },
			{ "UnregisterClassInitStateDelegate", &UGameFrameworkComponentManager::execUnregisterClassInitStateDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameFrameworkComponentManager_AddReceiver_Statics
	{
		struct GameFrameworkComponentManager_eventAddReceiver_Parms
		{
			AActor* Receiver;
			bool bAddOnlyInGameWorlds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Receiver;
		static void NewProp_bAddOnlyInGameWorlds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddOnlyInGameWorlds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_AddReceiver_Statics::NewProp_Receiver = { "Receiver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkComponentManager_eventAddReceiver_Parms, Receiver), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameFrameworkComponentManager_AddReceiver_Statics::NewProp_bAddOnlyInGameWorlds_SetBit(void* Obj)
	{
		((GameFrameworkComponentManager_eventAddReceiver_Parms*)Obj)->bAddOnlyInGameWorlds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_AddReceiver_Statics::NewProp_bAddOnlyInGameWorlds = { "bAddOnlyInGameWorlds", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameFrameworkComponentManager_eventAddReceiver_Parms), &Z_Construct_UFunction_UGameFrameworkComponentManager_AddReceiver_Statics::NewProp_bAddOnlyInGameWorlds_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameFrameworkComponentManager_AddReceiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_AddReceiver_Statics::NewProp_Receiver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_AddReceiver_Statics::NewProp_bAddOnlyInGameWorlds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameFrameworkComponentManager_AddReceiver_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Gameplay" },
		{ "Comment", "/** Adds an actor as a receiver for components. If it passes the actorclass filter on requests it will get the components. */" },
		{ "CPP_Default_bAddOnlyInGameWorlds", "true" },
		{ "DefaultToSelf", "Receiver" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkComponentManager.h" },
		{ "ToolTip", "Adds an actor as a receiver for components. If it passes the actorclass filter on requests it will get the components." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameFrameworkComponentManager_AddReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameFrameworkComponentManager, nullptr, "AddReceiver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameFrameworkComponentManager_AddReceiver_Statics::GameFrameworkComponentManager_eventAddReceiver_Parms), Z_Construct_UFunction_UGameFrameworkComponentManager_AddReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkComponentManager_AddReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameFrameworkComponentManager_AddReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkComponentManager_AddReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameFrameworkComponentManager_AddReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameFrameworkComponentManager_AddReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics
	{
		struct GameFrameworkComponentManager_eventRegisterAndCallForActorInitState_Parms
		{
			AActor* Actor;
			FName FeatureName;
			FGameplayTag RequiredState;
			FScriptDelegate Delegate;
			bool bCallImmediately;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FeatureName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredState;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static void NewProp_bCallImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallImmediately;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkComponentManager_eventRegisterAndCallForActorInitState_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::NewProp_FeatureName = { "FeatureName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkComponentManager_eventRegisterAndCallForActorInitState_Parms, FeatureName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::NewProp_RequiredState = { "RequiredState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkComponentManager_eventRegisterAndCallForActorInitState_Parms, RequiredState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkComponentManager_eventRegisterAndCallForActorInitState_Parms, Delegate), Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3217276363
	void Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::NewProp_bCallImmediately_SetBit(void* Obj)
	{
		((GameFrameworkComponentManager_eventRegisterAndCallForActorInitState_Parms*)Obj)->bCallImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::NewProp_bCallImmediately = { "bCallImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameFrameworkComponentManager_eventRegisterAndCallForActorInitState_Parms), &Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::NewProp_bCallImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameFrameworkComponentManager_eventRegisterAndCallForActorInitState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameFrameworkComponentManager_eventRegisterAndCallForActorInitState_Parms), &Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::NewProp_FeatureName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::NewProp_RequiredState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::NewProp_Delegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::NewProp_bCallImmediately,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::Function_MetaDataParams[] = {
		{ "Category", "InitState" },
		{ "Comment", "/**\n\x09 * Registers blueprint delegate for feature state change notifications on a specific actor and may call it immediately\n\x09 *\n\x09 * @param Actor\x09\x09\x09\x09The actor to listen for state changes to, if you don't have a specific actor call the Class version instead\n\x09 * @param FeatureName\x09\x09If not empty, only listen to state changes for the specified feature\n\x09 * @param RequiredState\x09\x09If specified, only activate if the init state of the feature is equal to or later than this\n\x09 * @param Delegate\x09\x09\x09Native delegate to call\n\x09 * @param bCallImmediately\x09If true and the actor feature is already in the specified state, call delegate immediately after registering\n\x09 * @return true if delegate was registered\n\x09 */" },
		{ "CPP_Default_bCallImmediately", "true" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkComponentManager.h" },
		{ "ToolTip", "Registers blueprint delegate for feature state change notifications on a specific actor and may call it immediately\n\n@param Actor                         The actor to listen for state changes to, if you don't have a specific actor call the Class version instead\n@param FeatureName           If not empty, only listen to state changes for the specified feature\n@param RequiredState         If specified, only activate if the init state of the feature is equal to or later than this\n@param Delegate                      Native delegate to call\n@param bCallImmediately      If true and the actor feature is already in the specified state, call delegate immediately after registering\n@return true if delegate was registered" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameFrameworkComponentManager, nullptr, "RegisterAndCallForActorInitState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::GameFrameworkComponentManager_eventRegisterAndCallForActorInitState_Parms), Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics
	{
		struct GameFrameworkComponentManager_eventRegisterAndCallForClassInitState_Parms
		{
			TSoftClassPtr<AActor>  ActorClass;
			FName FeatureName;
			FGameplayTag RequiredState;
			FScriptDelegate Delegate;
			bool bCallImmediately;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FNamePropertyParams NewProp_FeatureName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredState;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static void NewProp_bCallImmediately_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCallImmediately;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkComponentManager_eventRegisterAndCallForClassInitState_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::NewProp_FeatureName = { "FeatureName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkComponentManager_eventRegisterAndCallForClassInitState_Parms, FeatureName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::NewProp_RequiredState = { "RequiredState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkComponentManager_eventRegisterAndCallForClassInitState_Parms, RequiredState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkComponentManager_eventRegisterAndCallForClassInitState_Parms, Delegate), Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3217276363
	void Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::NewProp_bCallImmediately_SetBit(void* Obj)
	{
		((GameFrameworkComponentManager_eventRegisterAndCallForClassInitState_Parms*)Obj)->bCallImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::NewProp_bCallImmediately = { "bCallImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameFrameworkComponentManager_eventRegisterAndCallForClassInitState_Parms), &Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::NewProp_bCallImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameFrameworkComponentManager_eventRegisterAndCallForClassInitState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameFrameworkComponentManager_eventRegisterAndCallForClassInitState_Parms), &Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::NewProp_FeatureName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::NewProp_RequiredState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::NewProp_Delegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::NewProp_bCallImmediately,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::Function_MetaDataParams[] = {
		{ "Category", "InitState" },
		{ "Comment", "/**\n\x09 * Registers blueprint delegate for feature state change notifications on a class of actors and may call it immediately\n\x09 *\n\x09 * @param ActorClass\x09\x09Name of an actor class to listen for changes to\n\x09 * @param FeatureName\x09\x09If not empty, only listen to state changes for the specified feature\n\x09 * @param RequiredState\x09\x09If specified, only activate if the init state of the feature is equal to or later than this\n\x09 * @param Delegate\x09\x09\x09Native delegate to call\n\x09 * @param bCallImmediately\x09If true and the actor feature is already in the specified state, call delegate immediately after registering\n\x09 * @return true if delegate was registered\n\x09 */" },
		{ "CPP_Default_bCallImmediately", "true" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkComponentManager.h" },
		{ "ToolTip", "Registers blueprint delegate for feature state change notifications on a class of actors and may call it immediately\n\n@param ActorClass            Name of an actor class to listen for changes to\n@param FeatureName           If not empty, only listen to state changes for the specified feature\n@param RequiredState         If specified, only activate if the init state of the feature is equal to or later than this\n@param Delegate                      Native delegate to call\n@param bCallImmediately      If true and the actor feature is already in the specified state, call delegate immediately after registering\n@return true if delegate was registered" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameFrameworkComponentManager, nullptr, "RegisterAndCallForClassInitState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::GameFrameworkComponentManager_eventRegisterAndCallForClassInitState_Parms), Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameFrameworkComponentManager_RemoveReceiver_Statics
	{
		struct GameFrameworkComponentManager_eventRemoveReceiver_Parms
		{
			AActor* Receiver;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Receiver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_RemoveReceiver_Statics::NewProp_Receiver = { "Receiver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkComponentManager_eventRemoveReceiver_Parms, Receiver), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameFrameworkComponentManager_RemoveReceiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_RemoveReceiver_Statics::NewProp_Receiver,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameFrameworkComponentManager_RemoveReceiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Removes an actor as a receiver for components. */" },
		{ "DefaultToSelf", "Receiver" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkComponentManager.h" },
		{ "ToolTip", "Removes an actor as a receiver for components." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameFrameworkComponentManager_RemoveReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameFrameworkComponentManager, nullptr, "RemoveReceiver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameFrameworkComponentManager_RemoveReceiver_Statics::GameFrameworkComponentManager_eventRemoveReceiver_Parms), Z_Construct_UFunction_UGameFrameworkComponentManager_RemoveReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkComponentManager_RemoveReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameFrameworkComponentManager_RemoveReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkComponentManager_RemoveReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameFrameworkComponentManager_RemoveReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameFrameworkComponentManager_RemoveReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent_Statics
	{
		struct GameFrameworkComponentManager_eventSendExtensionEvent_Parms
		{
			AActor* Receiver;
			FName EventName;
			bool bOnlyInGameWorlds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Receiver;
		static const UECodeGen_Private::FNamePropertyParams NewProp_EventName;
		static void NewProp_bOnlyInGameWorlds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyInGameWorlds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent_Statics::NewProp_Receiver = { "Receiver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkComponentManager_eventSendExtensionEvent_Parms, Receiver), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkComponentManager_eventSendExtensionEvent_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent_Statics::NewProp_bOnlyInGameWorlds_SetBit(void* Obj)
	{
		((GameFrameworkComponentManager_eventSendExtensionEvent_Parms*)Obj)->bOnlyInGameWorlds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent_Statics::NewProp_bOnlyInGameWorlds = { "bOnlyInGameWorlds", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameFrameworkComponentManager_eventSendExtensionEvent_Parms), &Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent_Statics::NewProp_bOnlyInGameWorlds_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent_Statics::NewProp_Receiver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent_Statics::NewProp_EventName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent_Statics::NewProp_bOnlyInGameWorlds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Gameplay" },
		{ "Comment", "/** Sends an arbitrary extension event that can be listened for by other systems */" },
		{ "CPP_Default_bOnlyInGameWorlds", "true" },
		{ "DefaultToSelf", "Receiver" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkComponentManager.h" },
		{ "ToolTip", "Sends an arbitrary extension event that can be listened for by other systems" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameFrameworkComponentManager, nullptr, "SendExtensionEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent_Statics::GameFrameworkComponentManager_eventSendExtensionEvent_Parms), Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Statics
	{
		struct GameFrameworkComponentManager_eventUnregisterActorInitStateDelegate_Parms
		{
			AActor* Actor;
			FScriptDelegate DelegateToRemove;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_DelegateToRemove;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkComponentManager_eventUnregisterActorInitStateDelegate_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Statics::NewProp_DelegateToRemove = { "DelegateToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkComponentManager_eventUnregisterActorInitStateDelegate_Parms, DelegateToRemove), Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3217276363
	void Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameFrameworkComponentManager_eventUnregisterActorInitStateDelegate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameFrameworkComponentManager_eventUnregisterActorInitStateDelegate_Parms), &Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Statics::NewProp_DelegateToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "InitState" },
		{ "Comment", "/** Removes a registered delegate bound to a specific actor */" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkComponentManager.h" },
		{ "ToolTip", "Removes a registered delegate bound to a specific actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameFrameworkComponentManager, nullptr, "UnregisterActorInitStateDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Statics::GameFrameworkComponentManager_eventUnregisterActorInitStateDelegate_Parms), Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Statics
	{
		struct GameFrameworkComponentManager_eventUnregisterClassInitStateDelegate_Parms
		{
			TSoftClassPtr<AActor>  ActorClass;
			FScriptDelegate DelegateToRemove;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_DelegateToRemove;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkComponentManager_eventUnregisterClassInitStateDelegate_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Statics::NewProp_DelegateToRemove = { "DelegateToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkComponentManager_eventUnregisterClassInitStateDelegate_Parms, DelegateToRemove), Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3217276363
	void Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameFrameworkComponentManager_eventUnregisterClassInitStateDelegate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameFrameworkComponentManager_eventUnregisterClassInitStateDelegate_Parms), &Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Statics::NewProp_DelegateToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "InitState" },
		{ "Comment", "/** Removes a registered delegate bound to a class */" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkComponentManager.h" },
		{ "ToolTip", "Removes a registered delegate bound to a class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameFrameworkComponentManager, nullptr, "UnregisterClassInitStateDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Statics::GameFrameworkComponentManager_eventUnregisterClassInitStateDelegate_Parms), Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFrameworkComponentManager);
	UClass* Z_Construct_UClass_UGameFrameworkComponentManager_NoRegister()
	{
		return UGameFrameworkComponentManager::StaticClass();
	}
	struct Z_Construct_UClass_UGameFrameworkComponentManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFrameworkComponentManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameFrameworkComponentManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameFrameworkComponentManager_AddReceiver, "AddReceiver" }, // 1258826096
		{ &Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForActorInitState, "RegisterAndCallForActorInitState" }, // 813544548
		{ &Z_Construct_UFunction_UGameFrameworkComponentManager_RegisterAndCallForClassInitState, "RegisterAndCallForClassInitState" }, // 1947482359
		{ &Z_Construct_UFunction_UGameFrameworkComponentManager_RemoveReceiver, "RemoveReceiver" }, // 1515211192
		{ &Z_Construct_UFunction_UGameFrameworkComponentManager_SendExtensionEvent, "SendExtensionEvent" }, // 2263855486
		{ &Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterActorInitStateDelegate, "UnregisterActorInitStateDelegate" }, // 2278009321
		{ &Z_Construct_UFunction_UGameFrameworkComponentManager_UnregisterClassInitStateDelegate, "UnregisterClassInitStateDelegate" }, // 1957957478
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFrameworkComponentManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * GameFrameworkComponentManager\n *\n * A manager to handle putting components on actors as they come and go.\n * Put in a request to instantiate components of a given class on actors of a given class and they will automatically be made for them as the actors are spawned.\n * Submit delegate handlers to listen for actors of a given class. Those handlers will automatically run when actors of a given class or registered as receivers or game events are sent.\n * Actors must opt-in to this behavior by calling AddReceiver/RemoveReceiver for themselves when they are ready to receive the components and when they want to remove them.\n * Any actors that are in memory when a request is made will automatically get the components, and any in memory when a request is removed will lose the components immediately.\n * Requests are reference counted, so if multiple requests are made for the same actor class and component class, only one component will be added and that component wont be removed until all requests are removed.\n */" },
		{ "IncludePath", "Components/GameFrameworkComponentManager.h" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkComponentManager.h" },
		{ "ToolTip", "GameFrameworkComponentManager\n\nA manager to handle putting components on actors as they come and go.\nPut in a request to instantiate components of a given class on actors of a given class and they will automatically be made for them as the actors are spawned.\nSubmit delegate handlers to listen for actors of a given class. Those handlers will automatically run when actors of a given class or registered as receivers or game events are sent.\nActors must opt-in to this behavior by calling AddReceiver/RemoveReceiver for themselves when they are ready to receive the components and when they want to remove them.\nAny actors that are in memory when a request is made will automatically get the components, and any in memory when a request is removed will lose the components immediately.\nRequests are reference counted, so if multiple requests are made for the same actor class and component class, only one component will be added and that component wont be removed until all requests are removed." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFrameworkComponentManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFrameworkComponentManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFrameworkComponentManager_Statics::ClassParams = {
		&UGameFrameworkComponentManager::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFrameworkComponentManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFrameworkComponentManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFrameworkComponentManager()
	{
		if (!Z_Registration_Info_UClass_UGameFrameworkComponentManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFrameworkComponentManager.OuterSingleton, Z_Construct_UClass_UGameFrameworkComponentManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFrameworkComponentManager.OuterSingleton;
	}
	template<> MODULARGAMEPLAY_API UClass* StaticClass<UGameFrameworkComponentManager>()
	{
		return UGameFrameworkComponentManager::StaticClass();
	}
	UGameFrameworkComponentManager::UGameFrameworkComponentManager() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFrameworkComponentManager);
	UGameFrameworkComponentManager::~UGameFrameworkComponentManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkComponentManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkComponentManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFrameworkComponentManager, UGameFrameworkComponentManager::StaticClass, TEXT("UGameFrameworkComponentManager"), &Z_Registration_Info_UClass_UGameFrameworkComponentManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFrameworkComponentManager), 316595662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkComponentManager_h_1642538579(TEXT("/Script/ModularGameplay"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkComponentManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkComponentManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
