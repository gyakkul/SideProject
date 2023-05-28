// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tasks/GameplayTask_SpawnActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTask_SpawnActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_SpawnActor();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_SpawnActor_NoRegister();
	GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GameplayTasks();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature_Statics
	{
		struct _Script_GameplayTasks_eventGameplayTaskSpawnActorDelegate_Parms
		{
			AActor* SpawnedActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GameplayTasks_eventGameplayTaskSpawnActorDelegate_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature_Statics::NewProp_SpawnedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_SpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayTasks, nullptr, "GameplayTaskSpawnActorDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature_Statics::_Script_GameplayTasks_eventGameplayTaskSpawnActorDelegate_Parms), Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FGameplayTaskSpawnActorDelegate_DelegateWrapper(const FMulticastScriptDelegate& GameplayTaskSpawnActorDelegate, AActor* SpawnedActor)
{
	struct _Script_GameplayTasks_eventGameplayTaskSpawnActorDelegate_Parms
	{
		AActor* SpawnedActor;
	};
	_Script_GameplayTasks_eventGameplayTaskSpawnActorDelegate_Parms Parms;
	Parms.SpawnedActor=SpawnedActor;
	GameplayTaskSpawnActorDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UGameplayTask_SpawnActor::execFinishSpawningActor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(AActor,Z_Param_SpawnedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishSpawningActor(Z_Param_WorldContextObject,Z_Param_SpawnedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayTask_SpawnActor::execBeginSpawningActor)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT_REF(AActor,Z_Param_Out_SpawnedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BeginSpawningActor(Z_Param_WorldContextObject,Z_Param_Out_SpawnedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayTask_SpawnActor::execSpawnActor)
	{
		P_GET_TINTERFACE(IGameplayTaskOwnerInterface,Z_Param_TaskOwner);
		P_GET_STRUCT(FVector,Z_Param_SpawnLocation);
		P_GET_STRUCT(FRotator,Z_Param_SpawnRotation);
		P_GET_OBJECT(UClass,Z_Param_Class);
		P_GET_UBOOL(Z_Param_bSpawnOnlyOnAuthority);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameplayTask_SpawnActor**)Z_Param__Result=UGameplayTask_SpawnActor::SpawnActor(Z_Param_TaskOwner,Z_Param_SpawnLocation,Z_Param_SpawnRotation,Z_Param_Class,Z_Param_bSpawnOnlyOnAuthority);
		P_NATIVE_END;
	}
	void UGameplayTask_SpawnActor::StaticRegisterNativesUGameplayTask_SpawnActor()
	{
		UClass* Class = UGameplayTask_SpawnActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginSpawningActor", &UGameplayTask_SpawnActor::execBeginSpawningActor },
			{ "FinishSpawningActor", &UGameplayTask_SpawnActor::execFinishSpawningActor },
			{ "SpawnActor", &UGameplayTask_SpawnActor::execSpawnActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics
	{
		struct GameplayTask_SpawnActor_eventBeginSpawningActor_Parms
		{
			UObject* WorldContextObject;
			AActor* SpawnedActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_SpawnActor_eventBeginSpawningActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_SpawnActor_eventBeginSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayTask_SpawnActor_eventBeginSpawningActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayTask_SpawnActor_eventBeginSpawningActor_Parms), &Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics::NewProp_SpawnedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GameplayTasks" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_SpawnActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_SpawnActor, nullptr, "BeginSpawningActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics::GameplayTask_SpawnActor_eventBeginSpawningActor_Parms), Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor_Statics
	{
		struct GameplayTask_SpawnActor_eventFinishSpawningActor_Parms
		{
			UObject* WorldContextObject;
			AActor* SpawnedActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_SpawnActor_eventFinishSpawningActor_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor_Statics::NewProp_SpawnedActor = { "SpawnedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_SpawnActor_eventFinishSpawningActor_Parms, SpawnedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor_Statics::NewProp_SpawnedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "GameplayTasks" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_SpawnActor.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_SpawnActor, nullptr, "FinishSpawningActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor_Statics::GameplayTask_SpawnActor_eventFinishSpawningActor_Parms), Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics
	{
		struct GameplayTask_SpawnActor_eventSpawnActor_Parms
		{
			TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;
			FVector SpawnLocation;
			FRotator SpawnRotation;
			TSubclassOf<AActor>  Class;
			bool bSpawnOnlyOnAuthority;
			UGameplayTask_SpawnActor* ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_TaskOwner;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static void NewProp_bSpawnOnlyOnAuthority_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnOnlyOnAuthority;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::NewProp_TaskOwner = { "TaskOwner", nullptr, (EPropertyFlags)0x0014040000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_SpawnActor_eventSpawnActor_Parms, TaskOwner), Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_SpawnActor_eventSpawnActor_Parms, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_SpawnActor_eventSpawnActor_Parms, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_SpawnActor_eventSpawnActor_Parms, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::NewProp_bSpawnOnlyOnAuthority_SetBit(void* Obj)
	{
		((GameplayTask_SpawnActor_eventSpawnActor_Parms*)Obj)->bSpawnOnlyOnAuthority = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::NewProp_bSpawnOnlyOnAuthority = { "bSpawnOnlyOnAuthority", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameplayTask_SpawnActor_eventSpawnActor_Parms), &Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::NewProp_bSpawnOnlyOnAuthority_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameplayTask_SpawnActor_eventSpawnActor_Parms, ReturnValue), Z_Construct_UClass_UGameplayTask_SpawnActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::NewProp_TaskOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::NewProp_SpawnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::NewProp_SpawnRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::NewProp_Class,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::NewProp_bSpawnOnlyOnAuthority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TaskOwner, bSpawnOnlyOnAuthority" },
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "GameplayTasks" },
		{ "Comment", "/** Spawn new Actor on the network authority (server) */" },
		{ "CPP_Default_bSpawnOnlyOnAuthority", "false" },
		{ "DefaultToSelf", "TaskOwner" },
		{ "DisplayName", "Spawn Actor for Gameplay Task" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_SpawnActor.h" },
		{ "ToolTip", "Spawn new Actor on the network authority (server)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_SpawnActor, nullptr, "SpawnActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::GameplayTask_SpawnActor_eventSpawnActor_Parms), Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTask_SpawnActor);
	UClass* Z_Construct_UClass_UGameplayTask_SpawnActor_NoRegister()
	{
		return UGameplayTask_SpawnActor::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayTask_SpawnActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DidNotSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DidNotSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassToSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayTask,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayTask_SpawnActor_BeginSpawningActor, "BeginSpawningActor" }, // 2576795884
		{ &Z_Construct_UFunction_UGameplayTask_SpawnActor_FinishSpawningActor, "FinishSpawningActor" }, // 2361640504
		{ &Z_Construct_UFunction_UGameplayTask_SpawnActor_SpawnActor, "SpawnActor" }, // 3642330193
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Convenience task for spawning actors (optionally limiting the spawning to the network authority). If not the net authority, we will not spawn \n *\x09""and Success will not be called. The nice thing this adds is the ability to modify expose on spawn properties while also implicitly checking \n *\x09network role before spawning.\n *\n *\x09Though this task doesn't do much - games can implement similar tasks that carry out game specific rules. For example a 'SpawnProjectile'\n *\x09task that limits the available classes to the games projectile class, and that does game specific stuff on spawn (for example, determining\n *\x09""firing position from a weapon attachment).\n *\x09\n *\x09Long term we can also use this task as a sync point. If the executing client could wait execution until the server creates and replicates the \n *\x09""actor down to it. We could potentially also use this to do predictive actor spawning / reconciliation.\n */" },
		{ "IncludePath", "Tasks/GameplayTask_SpawnActor.h" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_SpawnActor.h" },
		{ "ToolTip", "Convenience task for spawning actors (optionally limiting the spawning to the network authority). If not the net authority, we will not spawn\nand Success will not be called. The nice thing this adds is the ability to modify expose on spawn properties while also implicitly checking\nnetwork role before spawning.\n\nThough this task doesn't do much - games can implement similar tasks that carry out game specific rules. For example a 'SpawnProjectile'\ntask that limits the available classes to the games projectile class, and that does game specific stuff on spawn (for example, determining\nfiring position from a weapon attachment).\n\nLong term we can also use this task as a sync point. If the executing client could wait execution until the server creates and replicates the\nactor down to it. We could potentially also use this to do predictive actor spawning / reconciliation." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_SpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_SpawnActor, Success), Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::NewProp_Success_MetaData)) }; // 2683504602
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::NewProp_DidNotSpawn_MetaData[] = {
		{ "Comment", "/** Called when we can't spawn: on clients or potentially on server if they fail to spawn (rare) */" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_SpawnActor.h" },
		{ "ToolTip", "Called when we can't spawn: on clients or potentially on server if they fail to spawn (rare)" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::NewProp_DidNotSpawn = { "DidNotSpawn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_SpawnActor, DidNotSpawn), Z_Construct_UDelegateFunction_GameplayTasks_GameplayTaskSpawnActorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::NewProp_DidNotSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::NewProp_DidNotSpawn_MetaData)) }; // 2683504602
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::NewProp_ClassToSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_SpawnActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::NewProp_ClassToSpawn = { "ClassToSpawn", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayTask_SpawnActor, ClassToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::NewProp_ClassToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::NewProp_ClassToSpawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::NewProp_DidNotSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::NewProp_ClassToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTask_SpawnActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::ClassParams = {
		&UGameplayTask_SpawnActor::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayTask_SpawnActor()
	{
		if (!Z_Registration_Info_UClass_UGameplayTask_SpawnActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTask_SpawnActor.OuterSingleton, Z_Construct_UClass_UGameplayTask_SpawnActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayTask_SpawnActor.OuterSingleton;
	}
	template<> GAMEPLAYTASKS_API UClass* StaticClass<UGameplayTask_SpawnActor>()
	{
		return UGameplayTask_SpawnActor::StaticClass();
	}
	UGameplayTask_SpawnActor::UGameplayTask_SpawnActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTask_SpawnActor);
	UGameplayTask_SpawnActor::~UGameplayTask_SpawnActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTask_SpawnActor, UGameplayTask_SpawnActor::StaticClass, TEXT("UGameplayTask_SpawnActor"), &Z_Registration_Info_UClass_UGameplayTask_SpawnActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTask_SpawnActor), 151762249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_1480801447(TEXT("/Script/GameplayTasks"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_SpawnActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
