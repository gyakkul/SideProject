// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MockAbilitySimulation.h"
#include "../../Source/Runtime/Engine/Classes/Engine/NetSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMockAbilitySimulation() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize100();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UFlyingMovementComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockFlyingAbilityComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockFlyingAbilityComponent_NoRegister();
	NETWORKPREDICTIONEXTRAS_API UFunction* Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature();
	NETWORKPREDICTIONEXTRAS_API UFunction* Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueRollback__DelegateSignature();
	NETWORKPREDICTIONEXTRAS_API UFunction* Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature();
	NETWORKPREDICTIONEXTRAS_API UFunction* Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_NetworkPredictionExtras();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature_Statics
	{
		struct MockFlyingAbilityComponent_eventMockAbilityNotifyStateChange_Parms
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
	void Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature_Statics::NewProp_bNewStateValue_SetBit(void* Obj)
	{
		((MockFlyingAbilityComponent_eventMockAbilityNotifyStateChange_Parms*)Obj)->bNewStateValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature_Statics::NewProp_bNewStateValue = { "bNewStateValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MockFlyingAbilityComponent_eventMockAbilityNotifyStateChange_Parms), &Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature_Statics::NewProp_bNewStateValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature_Statics::NewProp_bNewStateValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// -------------------------------------------------------------------------------------\n//\x09""Ability State and Notifications\n//\x09\x09-This allows user code/blueprints to respond to state changes.\n//\x09\x09-These values always reflect the latest simulation state\n//\x09\x09-StateChange events are just that: when the state changes. They are not emitted from the sim themselves.\n//\x09\x09\x09-This means they \"work\" for interpolated simulations and are resilient to packet loss and crazy network conditions\n//\x09\x09\x09-That said, its \"latest\" only. There is NO guarantee that you will receive every state transition\n//\n// -------------------------------------------------------------------------------------\n" },
		{ "ModuleRelativePath", "Public/MockAbilitySimulation.h" },
		{ "ToolTip", "Ability State and Notifications\n        -This allows user code/blueprints to respond to state changes.\n        -These values always reflect the latest simulation state\n        -StateChange events are just that: when the state changes. They are not emitted from the sim themselves.\n                -This means they \"work\" for interpolated simulations and are resilient to packet loss and crazy network conditions\n                -That said, its \"latest\" only. There is NO guarantee that you will receive every state transition" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockFlyingAbilityComponent, nullptr, "MockAbilityNotifyStateChange__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature_Statics::MockFlyingAbilityComponent_eventMockAbilityNotifyStateChange_Parms), Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMockFlyingAbilityComponent::FMockAbilityNotifyStateChange_DelegateWrapper(const FMulticastScriptDelegate& MockAbilityNotifyStateChange, bool bNewStateValue)
{
	struct MockFlyingAbilityComponent_eventMockAbilityNotifyStateChange_Parms
	{
		bool bNewStateValue;
	};
	MockFlyingAbilityComponent_eventMockAbilityNotifyStateChange_Parms Parms;
	Parms.bNewStateValue=bNewStateValue ? true : false;
	MockAbilityNotifyStateChange.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature_Statics
	{
		struct MockFlyingAbilityComponent_eventMockAbilityBlinkCueEvent_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature_Statics::NewProp_DestinationLocation = { "DestinationLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockFlyingAbilityComponent_eventMockAbilityBlinkCueEvent_Parms, DestinationLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature_Statics::NewProp_RandomValue = { "RandomValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockFlyingAbilityComponent_eventMockAbilityBlinkCueEvent_Parms, RandomValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature_Statics::NewProp_ElapsedTimeSeconds = { "ElapsedTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockFlyingAbilityComponent_eventMockAbilityBlinkCueEvent_Parms, ElapsedTimeSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature_Statics::NewProp_DestinationLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature_Statics::NewProp_RandomValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature_Statics::NewProp_ElapsedTimeSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Blueprint assignable events for blinking. THis allows the user/blueprint to implement rollback-able events\n" },
		{ "ModuleRelativePath", "Public/MockAbilitySimulation.h" },
		{ "ToolTip", "Blueprint assignable events for blinking. THis allows the user/blueprint to implement rollback-able events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockFlyingAbilityComponent, nullptr, "MockAbilityBlinkCueEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature_Statics::MockFlyingAbilityComponent_eventMockAbilityBlinkCueEvent_Parms), Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00930000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMockFlyingAbilityComponent::FMockAbilityBlinkCueEvent_DelegateWrapper(const FMulticastScriptDelegate& MockAbilityBlinkCueEvent, FVector DestinationLocation, int32 RandomValue, float ElapsedTimeSeconds)
{
	struct MockFlyingAbilityComponent_eventMockAbilityBlinkCueEvent_Parms
	{
		FVector DestinationLocation;
		int32 RandomValue;
		float ElapsedTimeSeconds;
	};
	MockFlyingAbilityComponent_eventMockAbilityBlinkCueEvent_Parms Parms;
	Parms.DestinationLocation=DestinationLocation;
	Parms.RandomValue=RandomValue;
	Parms.ElapsedTimeSeconds=ElapsedTimeSeconds;
	MockAbilityBlinkCueEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueRollback__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueRollback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MockAbilitySimulation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueRollback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockFlyingAbilityComponent, nullptr, "MockAbilityBlinkCueRollback__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueRollback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueRollback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueRollback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueRollback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMockFlyingAbilityComponent::FMockAbilityBlinkCueRollback_DelegateWrapper(const FMulticastScriptDelegate& MockAbilityBlinkCueRollback)
{
	MockAbilityBlinkCueRollback.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics
	{
		struct MockFlyingAbilityComponent_eventMockAbilityPhysicsGunFireEvent_Parms
		{
			FVector Start;
			FVector End;
			bool bHasCooldown;
			TArray<FVector_NetQuantize100> HitLocations;
			float ElapsedTimeSeconds;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
		static const UECodeGen_Private::FStructPropertyParams NewProp_End;
		static void NewProp_bHasCooldown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCooldown;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitLocations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HitLocations;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTimeSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockFlyingAbilityComponent_eventMockAbilityPhysicsGunFireEvent_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockFlyingAbilityComponent_eventMockAbilityPhysicsGunFireEvent_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::NewProp_bHasCooldown_SetBit(void* Obj)
	{
		((MockFlyingAbilityComponent_eventMockAbilityPhysicsGunFireEvent_Parms*)Obj)->bHasCooldown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::NewProp_bHasCooldown = { "bHasCooldown", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MockFlyingAbilityComponent_eventMockAbilityPhysicsGunFireEvent_Parms), &Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::NewProp_bHasCooldown_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::NewProp_HitLocations_Inner = { "HitLocations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector_NetQuantize100, METADATA_PARAMS(nullptr, 0) }; // 255231453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::NewProp_HitLocations_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::NewProp_HitLocations = { "HitLocations", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockFlyingAbilityComponent_eventMockAbilityPhysicsGunFireEvent_Parms, HitLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::NewProp_HitLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::NewProp_HitLocations_MetaData)) }; // 255231453
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::NewProp_ElapsedTimeSeconds = { "ElapsedTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockFlyingAbilityComponent_eventMockAbilityPhysicsGunFireEvent_Parms, ElapsedTimeSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::NewProp_Start,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::NewProp_End,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::NewProp_bHasCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::NewProp_HitLocations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::NewProp_HitLocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::NewProp_ElapsedTimeSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MockAbilitySimulation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockFlyingAbilityComponent, nullptr, "MockAbilityPhysicsGunFireEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::MockFlyingAbilityComponent_eventMockAbilityPhysicsGunFireEvent_Parms), Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00D30000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMockFlyingAbilityComponent::FMockAbilityPhysicsGunFireEvent_DelegateWrapper(const FMulticastScriptDelegate& MockAbilityPhysicsGunFireEvent, FVector Start, FVector End, bool bHasCooldown, TArray<FVector_NetQuantize100> const& HitLocations, float ElapsedTimeSeconds)
{
	struct MockFlyingAbilityComponent_eventMockAbilityPhysicsGunFireEvent_Parms
	{
		FVector Start;
		FVector End;
		bool bHasCooldown;
		TArray<FVector_NetQuantize100> HitLocations;
		float ElapsedTimeSeconds;
	};
	MockFlyingAbilityComponent_eventMockAbilityPhysicsGunFireEvent_Parms Parms;
	Parms.Start=Start;
	Parms.End=End;
	Parms.bHasCooldown=bHasCooldown ? true : false;
	Parms.HitLocations=HitLocations;
	Parms.ElapsedTimeSeconds=ElapsedTimeSeconds;
	MockAbilityPhysicsGunFireEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UMockFlyingAbilityComponent::execGetMaxStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMaxStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMockFlyingAbilityComponent::execGetStamina)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStamina();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMockFlyingAbilityComponent::execGetBlinkWarmupTimeSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetBlinkWarmupTimeSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMockFlyingAbilityComponent::execIsBlinking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBlinking();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMockFlyingAbilityComponent::execIsDashing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDashing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMockFlyingAbilityComponent::execIsSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSprinting();
		P_NATIVE_END;
	}
	void UMockFlyingAbilityComponent::StaticRegisterNativesUMockFlyingAbilityComponent()
	{
		UClass* Class = UMockFlyingAbilityComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBlinkWarmupTimeSeconds", &UMockFlyingAbilityComponent::execGetBlinkWarmupTimeSeconds },
			{ "GetMaxStamina", &UMockFlyingAbilityComponent::execGetMaxStamina },
			{ "GetStamina", &UMockFlyingAbilityComponent::execGetStamina },
			{ "IsBlinking", &UMockFlyingAbilityComponent::execIsBlinking },
			{ "IsDashing", &UMockFlyingAbilityComponent::execIsDashing },
			{ "IsSprinting", &UMockFlyingAbilityComponent::execIsSprinting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMockFlyingAbilityComponent_GetBlinkWarmupTimeSeconds_Statics
	{
		struct MockFlyingAbilityComponent_eventGetBlinkWarmupTimeSeconds_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMockFlyingAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockFlyingAbilityComponent_eventGetBlinkWarmupTimeSeconds_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockFlyingAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockFlyingAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockFlyingAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "ModuleRelativePath", "Public/MockAbilitySimulation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockFlyingAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockFlyingAbilityComponent, nullptr, "GetBlinkWarmupTimeSeconds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockFlyingAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::MockFlyingAbilityComponent_eventGetBlinkWarmupTimeSeconds_Parms), Z_Construct_UFunction_UMockFlyingAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockFlyingAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockFlyingAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockFlyingAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockFlyingAbilityComponent_GetBlinkWarmupTimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockFlyingAbilityComponent_GetBlinkWarmupTimeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMockFlyingAbilityComponent_GetMaxStamina_Statics
	{
		struct MockFlyingAbilityComponent_eventGetMaxStamina_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMockFlyingAbilityComponent_GetMaxStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockFlyingAbilityComponent_eventGetMaxStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockFlyingAbilityComponent_GetMaxStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockFlyingAbilityComponent_GetMaxStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockFlyingAbilityComponent_GetMaxStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mock Ability" },
		{ "ModuleRelativePath", "Public/MockAbilitySimulation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockFlyingAbilityComponent_GetMaxStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockFlyingAbilityComponent, nullptr, "GetMaxStamina", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockFlyingAbilityComponent_GetMaxStamina_Statics::MockFlyingAbilityComponent_eventGetMaxStamina_Parms), Z_Construct_UFunction_UMockFlyingAbilityComponent_GetMaxStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockFlyingAbilityComponent_GetMaxStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockFlyingAbilityComponent_GetMaxStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockFlyingAbilityComponent_GetMaxStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockFlyingAbilityComponent_GetMaxStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockFlyingAbilityComponent_GetMaxStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMockFlyingAbilityComponent_GetStamina_Statics
	{
		struct MockFlyingAbilityComponent_eventGetStamina_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMockFlyingAbilityComponent_GetStamina_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockFlyingAbilityComponent_eventGetStamina_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockFlyingAbilityComponent_GetStamina_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockFlyingAbilityComponent_GetStamina_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockFlyingAbilityComponent_GetStamina_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mock Ability" },
		{ "ModuleRelativePath", "Public/MockAbilitySimulation.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockFlyingAbilityComponent_GetStamina_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockFlyingAbilityComponent, nullptr, "GetStamina", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockFlyingAbilityComponent_GetStamina_Statics::MockFlyingAbilityComponent_eventGetStamina_Parms), Z_Construct_UFunction_UMockFlyingAbilityComponent_GetStamina_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockFlyingAbilityComponent_GetStamina_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockFlyingAbilityComponent_GetStamina_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockFlyingAbilityComponent_GetStamina_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockFlyingAbilityComponent_GetStamina()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockFlyingAbilityComponent_GetStamina_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMockFlyingAbilityComponent_IsBlinking_Statics
	{
		struct MockFlyingAbilityComponent_eventIsBlinking_Parms
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
	void Z_Construct_UFunction_UMockFlyingAbilityComponent_IsBlinking_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MockFlyingAbilityComponent_eventIsBlinking_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMockFlyingAbilityComponent_IsBlinking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MockFlyingAbilityComponent_eventIsBlinking_Parms), &Z_Construct_UFunction_UMockFlyingAbilityComponent_IsBlinking_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockFlyingAbilityComponent_IsBlinking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockFlyingAbilityComponent_IsBlinking_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockFlyingAbilityComponent_IsBlinking_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "Comment", "// Are we currently in the blinking (startup) state\n" },
		{ "ModuleRelativePath", "Public/MockAbilitySimulation.h" },
		{ "ToolTip", "Are we currently in the blinking (startup) state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockFlyingAbilityComponent_IsBlinking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockFlyingAbilityComponent, nullptr, "IsBlinking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockFlyingAbilityComponent_IsBlinking_Statics::MockFlyingAbilityComponent_eventIsBlinking_Parms), Z_Construct_UFunction_UMockFlyingAbilityComponent_IsBlinking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockFlyingAbilityComponent_IsBlinking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockFlyingAbilityComponent_IsBlinking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockFlyingAbilityComponent_IsBlinking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockFlyingAbilityComponent_IsBlinking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockFlyingAbilityComponent_IsBlinking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMockFlyingAbilityComponent_IsDashing_Statics
	{
		struct MockFlyingAbilityComponent_eventIsDashing_Parms
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
	void Z_Construct_UFunction_UMockFlyingAbilityComponent_IsDashing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MockFlyingAbilityComponent_eventIsDashing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMockFlyingAbilityComponent_IsDashing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MockFlyingAbilityComponent_eventIsDashing_Parms), &Z_Construct_UFunction_UMockFlyingAbilityComponent_IsDashing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockFlyingAbilityComponent_IsDashing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockFlyingAbilityComponent_IsDashing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockFlyingAbilityComponent_IsDashing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "Comment", "// Are we currently in the dashing state\n" },
		{ "ModuleRelativePath", "Public/MockAbilitySimulation.h" },
		{ "ToolTip", "Are we currently in the dashing state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockFlyingAbilityComponent_IsDashing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockFlyingAbilityComponent, nullptr, "IsDashing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockFlyingAbilityComponent_IsDashing_Statics::MockFlyingAbilityComponent_eventIsDashing_Parms), Z_Construct_UFunction_UMockFlyingAbilityComponent_IsDashing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockFlyingAbilityComponent_IsDashing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockFlyingAbilityComponent_IsDashing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockFlyingAbilityComponent_IsDashing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockFlyingAbilityComponent_IsDashing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockFlyingAbilityComponent_IsDashing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMockFlyingAbilityComponent_IsSprinting_Statics
	{
		struct MockFlyingAbilityComponent_eventIsSprinting_Parms
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
	void Z_Construct_UFunction_UMockFlyingAbilityComponent_IsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MockFlyingAbilityComponent_eventIsSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMockFlyingAbilityComponent_IsSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MockFlyingAbilityComponent_eventIsSprinting_Parms), &Z_Construct_UFunction_UMockFlyingAbilityComponent_IsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMockFlyingAbilityComponent_IsSprinting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMockFlyingAbilityComponent_IsSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMockFlyingAbilityComponent_IsSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "Comment", "// Are we currently in the sprinting state\n" },
		{ "ModuleRelativePath", "Public/MockAbilitySimulation.h" },
		{ "ToolTip", "Are we currently in the sprinting state" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMockFlyingAbilityComponent_IsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockFlyingAbilityComponent, nullptr, "IsSprinting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMockFlyingAbilityComponent_IsSprinting_Statics::MockFlyingAbilityComponent_eventIsSprinting_Parms), Z_Construct_UFunction_UMockFlyingAbilityComponent_IsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockFlyingAbilityComponent_IsSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMockFlyingAbilityComponent_IsSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMockFlyingAbilityComponent_IsSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMockFlyingAbilityComponent_IsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMockFlyingAbilityComponent_IsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockFlyingAbilityComponent);
	UClass* Z_Construct_UClass_UMockFlyingAbilityComponent_NoRegister()
	{
		return UMockFlyingAbilityComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMockFlyingAbilityComponent_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBlinkActivateEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlinkActivateEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBlinkActivateEventRollback_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBlinkActivateEventRollback;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPhysicsGunFirEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPhysicsGunFirEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFlyingMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMockFlyingAbilityComponent_GetBlinkWarmupTimeSeconds, "GetBlinkWarmupTimeSeconds" }, // 3549667792
		{ &Z_Construct_UFunction_UMockFlyingAbilityComponent_GetMaxStamina, "GetMaxStamina" }, // 1313459658
		{ &Z_Construct_UFunction_UMockFlyingAbilityComponent_GetStamina, "GetStamina" }, // 1625777511
		{ &Z_Construct_UFunction_UMockFlyingAbilityComponent_IsBlinking, "IsBlinking" }, // 810563389
		{ &Z_Construct_UFunction_UMockFlyingAbilityComponent_IsDashing, "IsDashing" }, // 3437553067
		{ &Z_Construct_UFunction_UMockFlyingAbilityComponent_IsSprinting, "IsSprinting" }, // 603702279
		{ &Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature, "MockAbilityBlinkCueEvent__DelegateSignature" }, // 4244573530
		{ &Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueRollback__DelegateSignature, "MockAbilityBlinkCueRollback__DelegateSignature" }, // 459575564
		{ &Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature, "MockAbilityNotifyStateChange__DelegateSignature" }, // 1917555235
		{ &Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature, "MockAbilityPhysicsGunFireEvent__DelegateSignature" }, // 1319030966
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "// -------------------------------------------------------------------------------------------------------------------------------\n// ActorComponent for running Mock Ability Simulation \n// -------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "MockAbilitySimulation.h" },
		{ "ModuleRelativePath", "Public/MockAbilitySimulation.h" },
		{ "ToolTip", "ActorComponent for running Mock Ability Simulation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnSprintStateChange_MetaData[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "Comment", "// Notifies when Sprint state changes\n" },
		{ "ModuleRelativePath", "Public/MockAbilitySimulation.h" },
		{ "ToolTip", "Notifies when Sprint state changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnSprintStateChange = { "OnSprintStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockFlyingAbilityComponent, OnSprintStateChange), Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnSprintStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnSprintStateChange_MetaData)) }; // 1917555235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnDashStateChange_MetaData[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "Comment", "// Notifies when Dash state changes\n" },
		{ "ModuleRelativePath", "Public/MockAbilitySimulation.h" },
		{ "ToolTip", "Notifies when Dash state changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnDashStateChange = { "OnDashStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockFlyingAbilityComponent, OnDashStateChange), Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnDashStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnDashStateChange_MetaData)) }; // 1917555235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnBlinkStateChange_MetaData[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "Comment", "// Notifies when Blink Changes\n" },
		{ "ModuleRelativePath", "Public/MockAbilitySimulation.h" },
		{ "ToolTip", "Notifies when Blink Changes" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnBlinkStateChange = { "OnBlinkStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockFlyingAbilityComponent, OnBlinkStateChange), Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityNotifyStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnBlinkStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnBlinkStateChange_MetaData)) }; // 1917555235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnBlinkActivateEvent_MetaData[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "ModuleRelativePath", "Public/MockAbilitySimulation.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnBlinkActivateEvent = { "OnBlinkActivateEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockFlyingAbilityComponent, OnBlinkActivateEvent), Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnBlinkActivateEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnBlinkActivateEvent_MetaData)) }; // 4244573530
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnBlinkActivateEventRollback_MetaData[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "ModuleRelativePath", "Public/MockAbilitySimulation.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnBlinkActivateEventRollback = { "OnBlinkActivateEventRollback", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockFlyingAbilityComponent, OnBlinkActivateEventRollback), Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityBlinkCueRollback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnBlinkActivateEventRollback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnBlinkActivateEventRollback_MetaData)) }; // 459575564
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnPhysicsGunFirEvent_MetaData[] = {
		{ "Category", "Mock AbilitySystem" },
		{ "ModuleRelativePath", "Public/MockAbilitySimulation.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnPhysicsGunFirEvent = { "OnPhysicsGunFirEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockFlyingAbilityComponent, OnPhysicsGunFirEvent), Z_Construct_UDelegateFunction_UMockFlyingAbilityComponent_MockAbilityPhysicsGunFireEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnPhysicsGunFirEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnPhysicsGunFirEvent_MetaData)) }; // 1319030966
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnSprintStateChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnDashStateChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnBlinkStateChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnBlinkActivateEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnBlinkActivateEventRollback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::NewProp_OnPhysicsGunFirEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockFlyingAbilityComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::ClassParams = {
		&UMockFlyingAbilityComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMockFlyingAbilityComponent()
	{
		if (!Z_Registration_Info_UClass_UMockFlyingAbilityComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockFlyingAbilityComponent.OuterSingleton, Z_Construct_UClass_UMockFlyingAbilityComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMockFlyingAbilityComponent.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<UMockFlyingAbilityComponent>()
	{
		return UMockFlyingAbilityComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockFlyingAbilityComponent);
	UMockFlyingAbilityComponent::~UMockFlyingAbilityComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMockFlyingAbilityComponent, UMockFlyingAbilityComponent::StaticClass, TEXT("UMockFlyingAbilityComponent"), &Z_Registration_Info_UClass_UMockFlyingAbilityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockFlyingAbilityComponent), 895350699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_257047588(TEXT("/Script/NetworkPredictionExtras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockAbilitySimulation_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
