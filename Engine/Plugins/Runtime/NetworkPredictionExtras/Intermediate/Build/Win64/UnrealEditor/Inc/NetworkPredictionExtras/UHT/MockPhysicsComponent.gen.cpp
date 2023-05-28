// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MockPhysicsComponent.h"
#include "MockPhysicsSimulation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMockPhysicsComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UBaseMovementComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockPhysicsComponent();
	NETWORKPREDICTIONEXTRAS_API UClass* Z_Construct_UClass_UMockPhysicsComponent_NoRegister();
	NETWORKPREDICTIONEXTRAS_API UFunction* Z_Construct_UDelegateFunction_UMockPhysicsComponent_MockPhysicsNotifyStateChange__DelegateSignature();
	NETWORKPREDICTIONEXTRAS_API UFunction* Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsChargeCueEvent__DelegateSignature();
	NETWORKPREDICTIONEXTRAS_API UFunction* Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsJumpCueEvent__DelegateSignature();
	NETWORKPREDICTIONEXTRAS_API UScriptStruct* Z_Construct_UScriptStruct_FMockPhysicsInputCmd();
	UPackage* Z_Construct_UPackage__Script_NetworkPredictionExtras();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsJumpCueEvent__DelegateSignature_Statics
	{
		struct MockPhysicsComponent_eventPhysicsJumpCueEvent_Parms
		{
			FVector Location;
			float ElapsedTimeSeconds;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTimeSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsJumpCueEvent__DelegateSignature_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockPhysicsComponent_eventPhysicsJumpCueEvent_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsJumpCueEvent__DelegateSignature_Statics::NewProp_ElapsedTimeSeconds = { "ElapsedTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockPhysicsComponent_eventPhysicsJumpCueEvent_Parms, ElapsedTimeSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsJumpCueEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsJumpCueEvent__DelegateSignature_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsJumpCueEvent__DelegateSignature_Statics::NewProp_ElapsedTimeSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsJumpCueEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Assignable delegates chosen so that owning actor can implement in BPs. May not be the best choice for all cases.\n" },
		{ "ModuleRelativePath", "Public/MockPhysicsComponent.h" },
		{ "ToolTip", "Assignable delegates chosen so that owning actor can implement in BPs. May not be the best choice for all cases." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsJumpCueEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockPhysicsComponent, nullptr, "PhysicsJumpCueEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsJumpCueEvent__DelegateSignature_Statics::MockPhysicsComponent_eventPhysicsJumpCueEvent_Parms), Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsJumpCueEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsJumpCueEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00930000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsJumpCueEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsJumpCueEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsJumpCueEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsJumpCueEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMockPhysicsComponent::FPhysicsJumpCueEvent_DelegateWrapper(const FMulticastScriptDelegate& PhysicsJumpCueEvent, FVector Location, float ElapsedTimeSeconds)
{
	struct MockPhysicsComponent_eventPhysicsJumpCueEvent_Parms
	{
		FVector Location;
		float ElapsedTimeSeconds;
	};
	MockPhysicsComponent_eventPhysicsJumpCueEvent_Parms Parms;
	Parms.Location=Location;
	Parms.ElapsedTimeSeconds=ElapsedTimeSeconds;
	PhysicsJumpCueEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsChargeCueEvent__DelegateSignature_Statics
	{
		struct MockPhysicsComponent_eventPhysicsChargeCueEvent_Parms
		{
			FVector Location;
			float ElapsedTimeSeconds;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElapsedTimeSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsChargeCueEvent__DelegateSignature_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockPhysicsComponent_eventPhysicsChargeCueEvent_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsChargeCueEvent__DelegateSignature_Statics::NewProp_ElapsedTimeSeconds = { "ElapsedTimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MockPhysicsComponent_eventPhysicsChargeCueEvent_Parms, ElapsedTimeSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsChargeCueEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsChargeCueEvent__DelegateSignature_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsChargeCueEvent__DelegateSignature_Statics::NewProp_ElapsedTimeSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsChargeCueEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MockPhysicsComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsChargeCueEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockPhysicsComponent, nullptr, "PhysicsChargeCueEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsChargeCueEvent__DelegateSignature_Statics::MockPhysicsComponent_eventPhysicsChargeCueEvent_Parms), Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsChargeCueEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsChargeCueEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00930000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsChargeCueEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsChargeCueEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsChargeCueEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsChargeCueEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMockPhysicsComponent::FPhysicsChargeCueEvent_DelegateWrapper(const FMulticastScriptDelegate& PhysicsChargeCueEvent, FVector Location, float ElapsedTimeSeconds)
{
	struct MockPhysicsComponent_eventPhysicsChargeCueEvent_Parms
	{
		FVector Location;
		float ElapsedTimeSeconds;
	};
	MockPhysicsComponent_eventPhysicsChargeCueEvent_Parms Parms;
	Parms.Location=Location;
	Parms.ElapsedTimeSeconds=ElapsedTimeSeconds;
	PhysicsChargeCueEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UMockPhysicsComponent_MockPhysicsNotifyStateChange__DelegateSignature_Statics
	{
		struct MockPhysicsComponent_eventMockPhysicsNotifyStateChange_Parms
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
	void Z_Construct_UDelegateFunction_UMockPhysicsComponent_MockPhysicsNotifyStateChange__DelegateSignature_Statics::NewProp_bNewStateValue_SetBit(void* Obj)
	{
		((MockPhysicsComponent_eventMockPhysicsNotifyStateChange_Parms*)Obj)->bNewStateValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_UMockPhysicsComponent_MockPhysicsNotifyStateChange__DelegateSignature_Statics::NewProp_bNewStateValue = { "bNewStateValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MockPhysicsComponent_eventMockPhysicsNotifyStateChange_Parms), &Z_Construct_UDelegateFunction_UMockPhysicsComponent_MockPhysicsNotifyStateChange__DelegateSignature_Statics::NewProp_bNewStateValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UMockPhysicsComponent_MockPhysicsNotifyStateChange__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UMockPhysicsComponent_MockPhysicsNotifyStateChange__DelegateSignature_Statics::NewProp_bNewStateValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UMockPhysicsComponent_MockPhysicsNotifyStateChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Charge (not a Cue event, just state)\n" },
		{ "ModuleRelativePath", "Public/MockPhysicsComponent.h" },
		{ "ToolTip", "Charge (not a Cue event, just state)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UMockPhysicsComponent_MockPhysicsNotifyStateChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMockPhysicsComponent, nullptr, "MockPhysicsNotifyStateChange__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UMockPhysicsComponent_MockPhysicsNotifyStateChange__DelegateSignature_Statics::MockPhysicsComponent_eventMockPhysicsNotifyStateChange_Parms), Z_Construct_UDelegateFunction_UMockPhysicsComponent_MockPhysicsNotifyStateChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockPhysicsComponent_MockPhysicsNotifyStateChange__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UMockPhysicsComponent_MockPhysicsNotifyStateChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UMockPhysicsComponent_MockPhysicsNotifyStateChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UMockPhysicsComponent_MockPhysicsNotifyStateChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UMockPhysicsComponent_MockPhysicsNotifyStateChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void UMockPhysicsComponent::FMockPhysicsNotifyStateChange_DelegateWrapper(const FMulticastScriptDelegate& MockPhysicsNotifyStateChange, bool bNewStateValue)
{
	struct MockPhysicsComponent_eventMockPhysicsNotifyStateChange_Parms
	{
		bool bNewStateValue;
	};
	MockPhysicsComponent_eventMockPhysicsNotifyStateChange_Parms Parms;
	Parms.bNewStateValue=bNewStateValue ? true : false;
	MockPhysicsNotifyStateChange.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UMockPhysicsComponent::StaticRegisterNativesUMockPhysicsComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMockPhysicsComponent);
	UClass* Z_Construct_UClass_UMockPhysicsComponent_NoRegister()
	{
		return UMockPhysicsComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMockPhysicsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingInputCmd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PendingInputCmd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnJumpActivatedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnJumpActivatedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChargeActivatedEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChargeActivatedEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnChargeStateChange_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnChargeStateChange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsCharging_MetaData[];
#endif
		static void NewProp_bIsCharging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCharging;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMockPhysicsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkPredictionExtras,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UMockPhysicsComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UMockPhysicsComponent_MockPhysicsNotifyStateChange__DelegateSignature, "MockPhysicsNotifyStateChange__DelegateSignature" }, // 1839592301
		{ &Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsChargeCueEvent__DelegateSignature, "PhysicsChargeCueEvent__DelegateSignature" }, // 1024925980
		{ &Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsJumpCueEvent__DelegateSignature, "PhysicsJumpCueEvent__DelegateSignature" }, // 2292316845
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockPhysicsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "// -------------------------------------------------------------------------------------------------------------------------------\n// ActorComponent for running MockPhysicsSimulation\n// -------------------------------------------------------------------------------------------------------------------------------\n" },
		{ "IncludePath", "MockPhysicsComponent.h" },
		{ "ModuleRelativePath", "Public/MockPhysicsComponent.h" },
		{ "ToolTip", "ActorComponent for running MockPhysicsSimulation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_PendingInputCmd_MetaData[] = {
		{ "Category", "INPUT" },
		{ "Comment", "// Next local InputCmd that will be submitted. This is just one way to do it.\n" },
		{ "ModuleRelativePath", "Public/MockPhysicsComponent.h" },
		{ "ToolTip", "Next local InputCmd that will be submitted. This is just one way to do it." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_PendingInputCmd = { "PendingInputCmd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockPhysicsComponent, PendingInputCmd), Z_Construct_UScriptStruct_FMockPhysicsInputCmd, METADATA_PARAMS(Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_PendingInputCmd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_PendingInputCmd_MetaData)) }; // 2386299971
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_OnJumpActivatedEvent_MetaData[] = {
		{ "Category", "Mock Physics Cues" },
		{ "ModuleRelativePath", "Public/MockPhysicsComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_OnJumpActivatedEvent = { "OnJumpActivatedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockPhysicsComponent, OnJumpActivatedEvent), Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsJumpCueEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_OnJumpActivatedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_OnJumpActivatedEvent_MetaData)) }; // 2292316845
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_OnChargeActivatedEvent_MetaData[] = {
		{ "Category", "Mock Physics Cues" },
		{ "ModuleRelativePath", "Public/MockPhysicsComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_OnChargeActivatedEvent = { "OnChargeActivatedEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockPhysicsComponent, OnChargeActivatedEvent), Z_Construct_UDelegateFunction_UMockPhysicsComponent_PhysicsChargeCueEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_OnChargeActivatedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_OnChargeActivatedEvent_MetaData)) }; // 1024925980
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_OnChargeStateChange_MetaData[] = {
		{ "Category", "Mock Physics Cues" },
		{ "ModuleRelativePath", "Public/MockPhysicsComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_OnChargeStateChange = { "OnChargeStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMockPhysicsComponent, OnChargeStateChange), Z_Construct_UDelegateFunction_UMockPhysicsComponent_MockPhysicsNotifyStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_OnChargeStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_OnChargeStateChange_MetaData)) }; // 1839592301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_bIsCharging_MetaData[] = {
		{ "Category", "Mock Physics" },
		{ "Comment", "// Currently charging up charge attack\n" },
		{ "ModuleRelativePath", "Public/MockPhysicsComponent.h" },
		{ "ToolTip", "Currently charging up charge attack" },
	};
#endif
	void Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_bIsCharging_SetBit(void* Obj)
	{
		((UMockPhysicsComponent*)Obj)->bIsCharging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_bIsCharging = { "bIsCharging", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMockPhysicsComponent), &Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_bIsCharging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_bIsCharging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_bIsCharging_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMockPhysicsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_PendingInputCmd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_OnJumpActivatedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_OnChargeActivatedEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_OnChargeStateChange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMockPhysicsComponent_Statics::NewProp_bIsCharging,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMockPhysicsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMockPhysicsComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMockPhysicsComponent_Statics::ClassParams = {
		&UMockPhysicsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UMockPhysicsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMockPhysicsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMockPhysicsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMockPhysicsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMockPhysicsComponent()
	{
		if (!Z_Registration_Info_UClass_UMockPhysicsComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMockPhysicsComponent.OuterSingleton, Z_Construct_UClass_UMockPhysicsComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMockPhysicsComponent.OuterSingleton;
	}
	template<> NETWORKPREDICTIONEXTRAS_API UClass* StaticClass<UMockPhysicsComponent>()
	{
		return UMockPhysicsComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMockPhysicsComponent);
	UMockPhysicsComponent::~UMockPhysicsComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMockPhysicsComponent, UMockPhysicsComponent::StaticClass, TEXT("UMockPhysicsComponent"), &Z_Registration_Info_UClass_UMockPhysicsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMockPhysicsComponent), 4180464880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsComponent_h_3527661680(TEXT("/Script/NetworkPredictionExtras"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NetworkPredictionExtras_Source_NetworkPredictionExtras_Public_MockPhysicsComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
