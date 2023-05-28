// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MockCharacterAbilitySimulation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMockCharacterAbilitySimulation() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UCharacterMotionComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockCharacterAbilityComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockCharacterAbilityComponent_NoRegister();
	NETWORKPREDICTIONEXTRAS_API UFunction* Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature();
	NETWORKPREDICTIONEXTRAS_API UFunction* Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueRollback__DelegateSignature();
	NETWORKPREDICTIONEXTRAS_API UFunction* Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NetworkPredictionExtras();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature_Statics
	{
		struct MockCharacterAbilityComponent_eventMockCharacterAbilityNotifyStateChange_Parms
		{
			bool bNewStateValue;
		};
		static void NewProp_bNewStateValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewStateValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature_Statics::NewProp_bNewStateValue_SetBit(void* Obj)
	{
		((MockCharacterAbilityComponent_eventMockCharacterAbilityNotifyStateChange_Parms*)Obj)->bNewStateValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature_Statics::NewProp_bNewStateValue = { "bNewStateValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MockCharacterAbilityComponent_eventMockCharacterAbilityNotifyStateChange_Parms), &Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature_Statics::NewProp_bNewStateValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature_Statics::NewProp_bNewStateValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09// NetSimCues\n\x09void HandleCue(const FMockCharacterAbilityBlinkActivateCue& BlinkCue, const FNetSimCueSystemParamemters& SystemParameters);\n\x09void HandleCue(const FMockCharacterAbilityBlinkCue& BlinkCue, const FNetSimCueSystemParamemters& SystemParameters);\n\x09void HandleCue(const FMockCharacterAbilityPhysicsGunFireCue& FireCue, const FNetSimCueSystemParamemters& SystemParameters);\n\x09*/// -------------------------------------------------------------------------------------\n//\x09""Ability State and Notifications\n//\x09\x09-This allows user code/blueprints to respond to state changes.\n//\x09\x09-These values always reflect the latest simulation state\n//\x09\x09-StateChange events are just that: when the state changes. They are not emitted from the sim themselves.\n//\x09\x09\x09-This means they \"work\" for interpolated simulations and are resilient to packet loss and crazy network conditions\n//\x09\x09\x09-That said, its \"latest\" only. There is NO guarantee that you will receive every state transition\n//\n// -------------------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/MockCharacterAbilitySimulation.h" },
		{ "ToolTip", "// NetSimCues\nvoid HandleCue(const FMockCharacterAbilityBlinkActivateCue& BlinkCue, const FNetSimCueSystemParamemters& SystemParameters);\nvoid HandleCue(const FMockCharacterAbilityBlinkCue& BlinkCue, const FNetSimCueSystemParamemters& SystemParameters);\nvoid HandleCue(const FMockCharacterAbilityPhysicsGunFireCue& FireCue, const FNetSimCueSystemParamemters& SystemParameters);\n// -------------------------------------------------------------------------------------\n//     Ability State and Notifications\n//             -This allows user code/blueprints to respond to state changes.\n//             -These values always reflect the latest simulation state\n//             -StateChange events are just that: when the state changes. They are not emitted from the sim themselves.\n//                     -This means they \"work\" for interpolated simulations and are resilient to packet loss and crazy network conditions\n//                     -That said, its \"latest\" only. There is NO guarantee that you will receive every state transition\n//\n// -------------------------------------------------------------------------------------" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockCharacterAbilityComponent, nullptr, "MockCharacterAbilityNotifyStateChange__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature_Statics::MockCharacterAbilityComponent_eventMockCharacterAbilityNotifyStateChange_Parms), Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMockCharacterAbilityComponent::FMockCharacterAbilityNotifyStateChange_DelegateWrapper(const FMulticastScriptDelegate& MockCharacterAbilityNotifyStateChange, bool bNewStateValue)
{
	struct MockCharacterAbilityComponent_eventMockCharacterAbilityNotifyStateChange_Parms
	{
		bool bNewStateValue;
	};
	MockCharacterAbilityComponent_eventMockCharacterAbilityNotifyStateChange_Parms Parms;
	Parms.bNewStateValue=bNewStateValue ? true : false;
	MockCharacterAbilityNotifyStateChange.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature_Statics
	{
		struct MockCharacterAbilityComponent_eventMockCharacterAbilityBlinkCueEvent_Parms
		{
			FVector DestinationLocation;
			int32 RandomValue;
			float ElapsedTimeSeconds;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationLocation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RandomValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTimeSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature_Statics::NewProp_DestinationLocation = { "DestinationLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockCharacterAbilityComponent_eventMockCharacterAbilityBlinkCueEvent_Parms, DestinationLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature_Statics::NewProp_RandomValue = { "RandomValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockCharacterAbilityComponent_eventMockCharacterAbilityBlinkCueEvent_Parms, RandomValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature_Statics::NewProp_ElapsedTimeSeconds = { "ElapsedTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockCharacterAbilityComponent_eventMockCharacterAbilityBlinkCueEvent_Parms, ElapsedTimeSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature_Statics::NewProp_DestinationLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature_Statics::NewProp_RandomValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature_Statics::NewProp_ElapsedTimeSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Blueprint assignable events for blinking. This allows the user/blueprint to implement rollback-able events\n" },
		{ "ModuleRelativePath", "Public/MockCharacterAbilitySimulation.h" },
		{ "ToolTip", "Blueprint assignable events for blinking. This allows the user/blueprint to implement rollback-able events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockCharacterAbilityComponent, nullptr, "MockCharacterAbilityBlinkCueEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature_Statics::MockCharacterAbilityComponent_eventMockCharacterAbilityBlinkCueEvent_Parms), Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00930000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMockCharacterAbilityComponent::FMockCharacterAbilityBlinkCueEvent_DelegateWrapper(const FMulticastScriptDelegate& MockCharacterAbilityBlinkCueEvent, FVector DestinationLocation, int32 RandomValue, float ElapsedTimeSeconds)
{
	struct MockCharacterAbilityComponent_eventMockCharacterAbilityBlinkCueEvent_Parms
	{
		FVector DestinationLocation;
		int32 RandomValue;
		float ElapsedTimeSeconds;
	};
	MockCharacterAbilityComponent_eventMockCharacterAbilityBlinkCueEvent_Parms Parms;
	Parms.DestinationLocation=DestinationLocation;
	Parms.RandomValue=RandomValue;
	Parms.ElapsedTimeSeconds=ElapsedTimeSeconds;
	MockCharacterAbilityBlinkCueEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueRollback__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueRollback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MockCharacterAbilitySimulation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueRollback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockCharacterAbilityComponent, nullptr, "MockCharacterAbilityBlinkCueRollback__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueRollback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueRollback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueRollback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueRollback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMockCharacterAbilityComponent::FMockCharacterAbilityBlinkCueRollback_DelegateWrapper(const FMulticastScriptDelegate& MockCharacterAbilityBlinkCueRollback)
{
	MockCharacterAbilityBlinkCueRollback.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UMockCharacterAbilityComponent::execGetMaxStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMockCharacterAbilityComponent::execGetStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMockCharacterAbilityComponent::execGetBlinkWarmupTimeSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBlinkWarmupTimeSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMockCharacterAbilityComponent::execIsJumping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsJumping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMockCharacterAbilityComponent::execIsBlinking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBlinking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMockCharacterAbilityComponent::execIsDashing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDashing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMockCharacterAbilityComponent::execIsSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSprinting();
		P_NATIVE_END;
	}
	void UMockCharacterAbilityComponent::StaticRegisterNativesUMockCharacterAbilityComponent()
	{
		UClass* Class = UMockCharacterAbilityComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBlinkWarmupTimeSeconds", &UMockCharacterAbilityComponent::execGetBlinkWarmupTimeSeconds },
			{ "GetMaxStamina", &UMockCharacterAbilityComponent::execGetMaxStamina },
			{ "GetStamina", &UMockCharacterAbilityComponent::execGetStamina },
			{ "IsBlinking", &UMockCharacterAbilityComponent::execIsBlinking },
			{ "IsDashing", &UMockCharacterAbilityComponent::execIsDashing },
			{ "IsJumping", &UMockCharacterAbilityComponent::execIsJumping },
			{ "IsSprinting", &UMockCharacterAbilityComponent::execIsSprinting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMockCharacterAbilityComponent_GetBlinkWarmupTimeSeconds_Statics
	{
		struct MockCharacterAbilityComponent_eventGetBlinkWarmupTimeSeconds_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMockCharacterAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockCharacterAbilityComponent_eventGetBlinkWarmupTimeSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockCharacterAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockCharacterAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockCharacterAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "ModuleRelativePath", "Public/MockCharacterAbilitySimulation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockCharacterAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockCharacterAbilityComponent, nullptr, "GetBlinkWarmupTimeSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockCharacterAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::MockCharacterAbilityComponent_eventGetBlinkWarmupTimeSeconds_Parms), Z_Construct_UFunction_UMockCharacterAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockCharacterAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockCharacterAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockCharacterAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockCharacterAbilityComponent_GetBlinkWarmupTimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockCharacterAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMockCharacterAbilityComponent_GetMaxStamina_Statics
	{
		struct MockCharacterAbilityComponent_eventGetMaxStamina_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMockCharacterAbilityComponent_GetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockCharacterAbilityComponent_eventGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockCharacterAbilityComponent_GetMaxStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockCharacterAbilityComponent_GetMaxStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockCharacterAbilityComponent_GetMaxStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mock Ability" },
		{ "ModuleRelativePath", "Public/MockCharacterAbilitySimulation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockCharacterAbilityComponent_GetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockCharacterAbilityComponent, nullptr, "GetMaxStamina", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockCharacterAbilityComponent_GetMaxStamina_Statics::MockCharacterAbilityComponent_eventGetMaxStamina_Parms), Z_Construct_UFunction_UMockCharacterAbilityComponent_GetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockCharacterAbilityComponent_GetMaxStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockCharacterAbilityComponent_GetMaxStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockCharacterAbilityComponent_GetMaxStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockCharacterAbilityComponent_GetMaxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockCharacterAbilityComponent_GetMaxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMockCharacterAbilityComponent_GetStamina_Statics
	{
		struct MockCharacterAbilityComponent_eventGetStamina_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMockCharacterAbilityComponent_GetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockCharacterAbilityComponent_eventGetStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockCharacterAbilityComponent_GetStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockCharacterAbilityComponent_GetStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockCharacterAbilityComponent_GetStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mock Ability" },
		{ "ModuleRelativePath", "Public/MockCharacterAbilitySimulation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockCharacterAbilityComponent_GetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockCharacterAbilityComponent, nullptr, "GetStamina", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockCharacterAbilityComponent_GetStamina_Statics::MockCharacterAbilityComponent_eventGetStamina_Parms), Z_Construct_UFunction_UMockCharacterAbilityComponent_GetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockCharacterAbilityComponent_GetStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockCharacterAbilityComponent_GetStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockCharacterAbilityComponent_GetStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockCharacterAbilityComponent_GetStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockCharacterAbilityComponent_GetStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMockCharacterAbilityComponent_IsBlinking_Statics
	{
		struct MockCharacterAbilityComponent_eventIsBlinking_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMockCharacterAbilityComponent_IsBlinking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MockCharacterAbilityComponent_eventIsBlinking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMockCharacterAbilityComponent_IsBlinking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MockCharacterAbilityComponent_eventIsBlinking_Parms), &Z_Construct_UFunction_UMockCharacterAbilityComponent_IsBlinking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockCharacterAbilityComponent_IsBlinking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockCharacterAbilityComponent_IsBlinking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockCharacterAbilityComponent_IsBlinking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "Comment", "// Are we currently in the blinking (startup) state\n" },
		{ "ModuleRelativePath", "Public/MockCharacterAbilitySimulation.h" },
		{ "ToolTip", "Are we currently in the blinking (startup) state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockCharacterAbilityComponent_IsBlinking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockCharacterAbilityComponent, nullptr, "IsBlinking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockCharacterAbilityComponent_IsBlinking_Statics::MockCharacterAbilityComponent_eventIsBlinking_Parms), Z_Construct_UFunction_UMockCharacterAbilityComponent_IsBlinking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockCharacterAbilityComponent_IsBlinking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockCharacterAbilityComponent_IsBlinking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockCharacterAbilityComponent_IsBlinking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockCharacterAbilityComponent_IsBlinking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockCharacterAbilityComponent_IsBlinking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMockCharacterAbilityComponent_IsDashing_Statics
	{
		struct MockCharacterAbilityComponent_eventIsDashing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMockCharacterAbilityComponent_IsDashing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MockCharacterAbilityComponent_eventIsDashing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMockCharacterAbilityComponent_IsDashing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MockCharacterAbilityComponent_eventIsDashing_Parms), &Z_Construct_UFunction_UMockCharacterAbilityComponent_IsDashing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockCharacterAbilityComponent_IsDashing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockCharacterAbilityComponent_IsDashing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockCharacterAbilityComponent_IsDashing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "Comment", "// Are we currently in the dashing state\n" },
		{ "ModuleRelativePath", "Public/MockCharacterAbilitySimulation.h" },
		{ "ToolTip", "Are we currently in the dashing state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockCharacterAbilityComponent_IsDashing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockCharacterAbilityComponent, nullptr, "IsDashing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockCharacterAbilityComponent_IsDashing_Statics::MockCharacterAbilityComponent_eventIsDashing_Parms), Z_Construct_UFunction_UMockCharacterAbilityComponent_IsDashing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockCharacterAbilityComponent_IsDashing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockCharacterAbilityComponent_IsDashing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockCharacterAbilityComponent_IsDashing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockCharacterAbilityComponent_IsDashing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockCharacterAbilityComponent_IsDashing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMockCharacterAbilityComponent_IsJumping_Statics
	{
		struct MockCharacterAbilityComponent_eventIsJumping_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMockCharacterAbilityComponent_IsJumping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MockCharacterAbilityComponent_eventIsJumping_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMockCharacterAbilityComponent_IsJumping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MockCharacterAbilityComponent_eventIsJumping_Parms), &Z_Construct_UFunction_UMockCharacterAbilityComponent_IsJumping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockCharacterAbilityComponent_IsJumping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockCharacterAbilityComponent_IsJumping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockCharacterAbilityComponent_IsJumping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "Comment", "// Are we currently in the jumping state\n" },
		{ "ModuleRelativePath", "Public/MockCharacterAbilitySimulation.h" },
		{ "ToolTip", "Are we currently in the jumping state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockCharacterAbilityComponent_IsJumping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockCharacterAbilityComponent, nullptr, "IsJumping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockCharacterAbilityComponent_IsJumping_Statics::MockCharacterAbilityComponent_eventIsJumping_Parms), Z_Construct_UFunction_UMockCharacterAbilityComponent_IsJumping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockCharacterAbilityComponent_IsJumping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockCharacterAbilityComponent_IsJumping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockCharacterAbilityComponent_IsJumping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockCharacterAbilityComponent_IsJumping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockCharacterAbilityComponent_IsJumping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMockCharacterAbilityComponent_IsSprinting_Statics
	{
		struct MockCharacterAbilityComponent_eventIsSprinting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMockCharacterAbilityComponent_IsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MockCharacterAbilityComponent_eventIsSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMockCharacterAbilityComponent_IsSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MockCharacterAbilityComponent_eventIsSprinting_Parms), &Z_Construct_UFunction_UMockCharacterAbilityComponent_IsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockCharacterAbilityComponent_IsSprinting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockCharacterAbilityComponent_IsSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockCharacterAbilityComponent_IsSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "Comment", "// Are we currently in the sprinting state\n" },
		{ "ModuleRelativePath", "Public/MockCharacterAbilitySimulation.h" },
		{ "ToolTip", "Are we currently in the sprinting state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockCharacterAbilityComponent_IsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockCharacterAbilityComponent, nullptr, "IsSprinting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockCharacterAbilityComponent_IsSprinting_Statics::MockCharacterAbilityComponent_eventIsSprinting_Parms), Z_Construct_UFunction_UMockCharacterAbilityComponent_IsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockCharacterAbilityComponent_IsSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockCharacterAbilityComponent_IsSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockCharacterAbilityComponent_IsSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockCharacterAbilityComponent_IsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockCharacterAbilityComponent_IsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockCharacterAbilityComponent);
	UClass* Z_Construct_UClass_UMockCharacterAbilityComponent_NoRegister()
	{
		return UMockCharacterAbilityComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMockCharacterAbilityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSprintStateChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSprintStateChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDashStateChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDashStateChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBlinkStateChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlinkStateChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnJumpStateChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJumpStateChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBlinkActivateEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlinkActivateEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBlinkActivateEventRollback_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlinkActivateEventRollback;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMotionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMockCharacterAbilityComponent_GetBlinkWarmupTimeSeconds, "GetBlinkWarmupTimeSeconds" }, // 3564474170
		{ &Z_Construct_UFunction_UMockCharacterAbilityComponent_GetMaxStamina, "GetMaxStamina" }, // 3552439053
		{ &Z_Construct_UFunction_UMockCharacterAbilityComponent_GetStamina, "GetStamina" }, // 1135722910
		{ &Z_Construct_UFunction_UMockCharacterAbilityComponent_IsBlinking, "IsBlinking" }, // 2635061372
		{ &Z_Construct_UFunction_UMockCharacterAbilityComponent_IsDashing, "IsDashing" }, // 994585138
		{ &Z_Construct_UFunction_UMockCharacterAbilityComponent_IsJumping, "IsJumping" }, // 3150522174
		{ &Z_Construct_UFunction_UMockCharacterAbilityComponent_IsSprinting, "IsSprinting" }, // 1678560739
		{ &Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature, "MockCharacterAbilityBlinkCueEvent__DelegateSignature" }, // 195580223
		{ &Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueRollback__DelegateSignature, "MockCharacterAbilityBlinkCueRollback__DelegateSignature" }, // 3155257412
		{ &Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature, "MockCharacterAbilityNotifyStateChange__DelegateSignature" }, // 375954618
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "// -------------------------------------------------------------------------------------------------------------------------------\n// ActorComponent for running Mock Ability Simulation for CharacterMotion example\n// -------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "MockCharacterAbilitySimulation.h" },
		{ "ModuleRelativePath", "Public/MockCharacterAbilitySimulation.h" },
		{ "ToolTip", "ActorComponent for running Mock Ability Simulation for CharacterMotion example" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnSprintStateChange_MetaData[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "Comment", "// Notifies when Sprint state changes\n" },
		{ "ModuleRelativePath", "Public/MockCharacterAbilitySimulation.h" },
		{ "ToolTip", "Notifies when Sprint state changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnSprintStateChange = { "OnSprintStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockCharacterAbilityComponent, OnSprintStateChange), Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnSprintStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnSprintStateChange_MetaData)) }; // 375954618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnDashStateChange_MetaData[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "Comment", "// Notifies when Dash state changes\n" },
		{ "ModuleRelativePath", "Public/MockCharacterAbilitySimulation.h" },
		{ "ToolTip", "Notifies when Dash state changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnDashStateChange = { "OnDashStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockCharacterAbilityComponent, OnDashStateChange), Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnDashStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnDashStateChange_MetaData)) }; // 375954618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnBlinkStateChange_MetaData[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "Comment", "// Notifies when Blink Changes\n" },
		{ "ModuleRelativePath", "Public/MockCharacterAbilitySimulation.h" },
		{ "ToolTip", "Notifies when Blink Changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnBlinkStateChange = { "OnBlinkStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockCharacterAbilityComponent, OnBlinkStateChange), Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnBlinkStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnBlinkStateChange_MetaData)) }; // 375954618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnJumpStateChange_MetaData[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "Comment", "// Notifies when Jump Changes\n" },
		{ "ModuleRelativePath", "Public/MockCharacterAbilitySimulation.h" },
		{ "ToolTip", "Notifies when Jump Changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnJumpStateChange = { "OnJumpStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockCharacterAbilityComponent, OnJumpStateChange), Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityNotifyStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnJumpStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnJumpStateChange_MetaData)) }; // 375954618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnBlinkActivateEvent_MetaData[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "ModuleRelativePath", "Public/MockCharacterAbilitySimulation.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnBlinkActivateEvent = { "OnBlinkActivateEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockCharacterAbilityComponent, OnBlinkActivateEvent), Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnBlinkActivateEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnBlinkActivateEvent_MetaData)) }; // 195580223
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnBlinkActivateEventRollback_MetaData[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "ModuleRelativePath", "Public/MockCharacterAbilitySimulation.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnBlinkActivateEventRollback = { "OnBlinkActivateEventRollback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockCharacterAbilityComponent, OnBlinkActivateEventRollback), Z_Construct_UDelegateFunction_UMockCharacterAbilityComponent_MockCharacterAbilityBlinkCueRollback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnBlinkActivateEventRollback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnBlinkActivateEventRollback_MetaData)) }; // 3155257412
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnSprintStateChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnDashStateChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnBlinkStateChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnJumpStateChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnBlinkActivateEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::NewProp_OnBlinkActivateEventRollback,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockCharacterAbilityComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::ClassParams = {
		&UMockCharacterAbilityComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMockCharacterAbilityComponent()
	{
		if (!Z_Registration_Info_UClass_UMockCharacterAbilityComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockCharacterAbilityComponent.OuterSingleton, Z_Construct_UClass_UMockCharacterAbilityComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMockCharacterAbilityComponent.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<UMockCharacterAbilityComponent>()
	{
		return UMockCharacterAbilityComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockCharacterAbilityComponent);
	UMockCharacterAbilityComponent::~UMockCharacterAbilityComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMockCharacterAbilityComponent, UMockCharacterAbilityComponent::StaticClass, TEXT("UMockCharacterAbilityComponent"), &Z_Registration_Info_UClass_UMockCharacterAbilityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockCharacterAbilityComponent), 4135274818U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_193842908(TEXT("/Script/NetworkPredictionExtras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockCharacterAbilitySimulation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
