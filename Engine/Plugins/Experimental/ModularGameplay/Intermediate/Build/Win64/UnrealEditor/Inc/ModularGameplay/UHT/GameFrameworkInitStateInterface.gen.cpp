// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/GameFrameworkInitStateInterface.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFrameworkInitStateInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface();
	MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
	MODULARGAMEPLAY_API UFunction* Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ModularGameplay();
// End Cross Module References
	DEFINE_FUNCTION(IGameFrameworkInitStateInterface::execUnregisterInitStateDelegate)
	{
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnregisterInitStateDelegate(FActorInitStateChangedBPDelegate(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameFrameworkInitStateInterface::execRegisterAndCallForInitStateChange)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_RequiredState);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_GET_UBOOL(Z_Param_bCallImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RegisterAndCallForInitStateChange(Z_Param_RequiredState,FActorInitStateChangedBPDelegate(Z_Param_Delegate),Z_Param_bCallImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameFrameworkInitStateInterface::execHasReachedInitState)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_DesiredState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasReachedInitState(Z_Param_DesiredState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameFrameworkInitStateInterface::execGetInitState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetInitState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGameFrameworkInitStateInterface::execGetFeatureName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetFeatureName();
		P_NATIVE_END;
	}
	void UGameFrameworkInitStateInterface::StaticRegisterNativesUGameFrameworkInitStateInterface()
	{
		UClass* Class = UGameFrameworkInitStateInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFeatureName", &IGameFrameworkInitStateInterface::execGetFeatureName },
			{ "GetInitState", &IGameFrameworkInitStateInterface::execGetInitState },
			{ "HasReachedInitState", &IGameFrameworkInitStateInterface::execHasReachedInitState },
			{ "RegisterAndCallForInitStateChange", &IGameFrameworkInitStateInterface::execRegisterAndCallForInitStateChange },
			{ "UnregisterInitStateDelegate", &IGameFrameworkInitStateInterface::execUnregisterInitStateDelegate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetFeatureName_Statics
	{
		struct GameFrameworkInitStateInterface_eventGetFeatureName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetFeatureName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkInitStateInterface_eventGetFeatureName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetFeatureName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetFeatureName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetFeatureName_Statics::Function_MetaDataParams[] = {
		{ "Category", "InitState" },
		{ "Comment", "/** Returns the feature this object implements, this interface is only meant for simple objects with a single feature like Actor */" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkInitStateInterface.h" },
		{ "ToolTip", "Returns the feature this object implements, this interface is only meant for simple objects with a single feature like Actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetFeatureName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameFrameworkInitStateInterface, nullptr, "GetFeatureName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetFeatureName_Statics::GameFrameworkInitStateInterface_eventGetFeatureName_Parms), Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetFeatureName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetFeatureName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetFeatureName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetFeatureName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetFeatureName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetFeatureName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetInitState_Statics
	{
		struct GameFrameworkInitStateInterface_eventGetInitState_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetInitState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkInitStateInterface_eventGetInitState_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetInitState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetInitState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetInitState_Statics::Function_MetaDataParams[] = {
		{ "Category", "InitState" },
		{ "Comment", "/** Returns the current feature state of this object, the default behavior is to query the manager */" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkInitStateInterface.h" },
		{ "ToolTip", "Returns the current feature state of this object, the default behavior is to query the manager" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetInitState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameFrameworkInitStateInterface, nullptr, "GetInitState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetInitState_Statics::GameFrameworkInitStateInterface_eventGetInitState_Parms), Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetInitState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetInitState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetInitState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetInitState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetInitState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetInitState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameFrameworkInitStateInterface_HasReachedInitState_Statics
	{
		struct GameFrameworkInitStateInterface_eventHasReachedInitState_Parms
		{
			FGameplayTag DesiredState;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameFrameworkInitStateInterface_HasReachedInitState_Statics::NewProp_DesiredState = { "DesiredState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkInitStateInterface_eventHasReachedInitState_Parms, DesiredState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	void Z_Construct_UFunction_UGameFrameworkInitStateInterface_HasReachedInitState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameFrameworkInitStateInterface_eventHasReachedInitState_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameFrameworkInitStateInterface_HasReachedInitState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameFrameworkInitStateInterface_eventHasReachedInitState_Parms), &Z_Construct_UFunction_UGameFrameworkInitStateInterface_HasReachedInitState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameFrameworkInitStateInterface_HasReachedInitState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkInitStateInterface_HasReachedInitState_Statics::NewProp_DesiredState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkInitStateInterface_HasReachedInitState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameFrameworkInitStateInterface_HasReachedInitState_Statics::Function_MetaDataParams[] = {
		{ "Category", "InitState" },
		{ "Comment", "/** Checks the component manager to see if we have already reached the desired state or a later one */" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkInitStateInterface.h" },
		{ "ToolTip", "Checks the component manager to see if we have already reached the desired state or a later one" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameFrameworkInitStateInterface_HasReachedInitState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameFrameworkInitStateInterface, nullptr, "HasReachedInitState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameFrameworkInitStateInterface_HasReachedInitState_Statics::GameFrameworkInitStateInterface_eventHasReachedInitState_Parms), Z_Construct_UFunction_UGameFrameworkInitStateInterface_HasReachedInitState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkInitStateInterface_HasReachedInitState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameFrameworkInitStateInterface_HasReachedInitState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkInitStateInterface_HasReachedInitState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameFrameworkInitStateInterface_HasReachedInitState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameFrameworkInitStateInterface_HasReachedInitState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics
	{
		struct GameFrameworkInitStateInterface_eventRegisterAndCallForInitStateChange_Parms
		{
			FGameplayTag RequiredState;
			FScriptDelegate Delegate;
			bool bCallImmediately;
			bool ReturnValue;
		};
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::NewProp_RequiredState = { "RequiredState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkInitStateInterface_eventRegisterAndCallForInitStateChange_Parms, RequiredState), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkInitStateInterface_eventRegisterAndCallForInitStateChange_Parms, Delegate), Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3217276363
	void Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::NewProp_bCallImmediately_SetBit(void* Obj)
	{
		((GameFrameworkInitStateInterface_eventRegisterAndCallForInitStateChange_Parms*)Obj)->bCallImmediately = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::NewProp_bCallImmediately = { "bCallImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameFrameworkInitStateInterface_eventRegisterAndCallForInitStateChange_Parms), &Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::NewProp_bCallImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameFrameworkInitStateInterface_eventRegisterAndCallForInitStateChange_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameFrameworkInitStateInterface_eventRegisterAndCallForInitStateChange_Parms), &Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::NewProp_RequiredState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::NewProp_Delegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::NewProp_bCallImmediately,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "InitState" },
		{ "Comment", "/** Binds a BP delegate to get called on a state change for this feature */" },
		{ "CPP_Default_bCallImmediately", "true" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkInitStateInterface.h" },
		{ "ToolTip", "Binds a BP delegate to get called on a state change for this feature" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameFrameworkInitStateInterface, nullptr, "RegisterAndCallForInitStateChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::GameFrameworkInitStateInterface_eventRegisterAndCallForInitStateChange_Parms), Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameFrameworkInitStateInterface_UnregisterInitStateDelegate_Statics
	{
		struct GameFrameworkInitStateInterface_eventUnregisterInitStateDelegate_Parms
		{
			FScriptDelegate Delegate;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UGameFrameworkInitStateInterface_UnregisterInitStateDelegate_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GameFrameworkInitStateInterface_eventUnregisterInitStateDelegate_Parms, Delegate), Z_Construct_UDelegateFunction_ModularGameplay_ActorInitStateChangedBPDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 3217276363
	void Z_Construct_UFunction_UGameFrameworkInitStateInterface_UnregisterInitStateDelegate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameFrameworkInitStateInterface_eventUnregisterInitStateDelegate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameFrameworkInitStateInterface_UnregisterInitStateDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GameFrameworkInitStateInterface_eventUnregisterInitStateDelegate_Parms), &Z_Construct_UFunction_UGameFrameworkInitStateInterface_UnregisterInitStateDelegate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameFrameworkInitStateInterface_UnregisterInitStateDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkInitStateInterface_UnregisterInitStateDelegate_Statics::NewProp_Delegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameFrameworkInitStateInterface_UnregisterInitStateDelegate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameFrameworkInitStateInterface_UnregisterInitStateDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "InitState" },
		{ "Comment", "/** Unbinds a BP delegate from changes to this feature */" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkInitStateInterface.h" },
		{ "ToolTip", "Unbinds a BP delegate from changes to this feature" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameFrameworkInitStateInterface_UnregisterInitStateDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameFrameworkInitStateInterface, nullptr, "UnregisterInitStateDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGameFrameworkInitStateInterface_UnregisterInitStateDelegate_Statics::GameFrameworkInitStateInterface_eventUnregisterInitStateDelegate_Parms), Z_Construct_UFunction_UGameFrameworkInitStateInterface_UnregisterInitStateDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkInitStateInterface_UnregisterInitStateDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameFrameworkInitStateInterface_UnregisterInitStateDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameFrameworkInitStateInterface_UnregisterInitStateDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameFrameworkInitStateInterface_UnregisterInitStateDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameFrameworkInitStateInterface_UnregisterInitStateDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFrameworkInitStateInterface);
	UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister()
	{
		return UGameFrameworkInitStateInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGameFrameworkInitStateInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameFrameworkInitStateInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplay,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameFrameworkInitStateInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetFeatureName, "GetFeatureName" }, // 883491479
		{ &Z_Construct_UFunction_UGameFrameworkInitStateInterface_GetInitState, "GetInitState" }, // 2238460447
		{ &Z_Construct_UFunction_UGameFrameworkInitStateInterface_HasReachedInitState, "HasReachedInitState" }, // 2833603799
		{ &Z_Construct_UFunction_UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange, "RegisterAndCallForInitStateChange" }, // 894567785
		{ &Z_Construct_UFunction_UGameFrameworkInitStateInterface_UnregisterInitStateDelegate, "UnregisterInitStateDelegate" }, // 3005346874
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameFrameworkInitStateInterface_Statics::Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Components/GameFrameworkInitStateInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameFrameworkInitStateInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameFrameworkInitStateInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFrameworkInitStateInterface_Statics::ClassParams = {
		&UGameFrameworkInitStateInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGameFrameworkInitStateInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameFrameworkInitStateInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface()
	{
		if (!Z_Registration_Info_UClass_UGameFrameworkInitStateInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFrameworkInitStateInterface.OuterSingleton, Z_Construct_UClass_UGameFrameworkInitStateInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameFrameworkInitStateInterface.OuterSingleton;
	}
	template<> MODULARGAMEPLAY_API UClass* StaticClass<UGameFrameworkInitStateInterface>()
	{
		return UGameFrameworkInitStateInterface::StaticClass();
	}
	UGameFrameworkInitStateInterface::UGameFrameworkInitStateInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFrameworkInitStateInterface);
	UGameFrameworkInitStateInterface::~UGameFrameworkInitStateInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameFrameworkInitStateInterface, UGameFrameworkInitStateInterface::StaticClass, TEXT("UGameFrameworkInitStateInterface"), &Z_Registration_Info_UClass_UGameFrameworkInitStateInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFrameworkInitStateInterface), 4121220673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_2431152820(TEXT("/Script/ModularGameplay"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ModularGameplay_Source_ModularGameplay_Public_Components_GameFrameworkInitStateInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
