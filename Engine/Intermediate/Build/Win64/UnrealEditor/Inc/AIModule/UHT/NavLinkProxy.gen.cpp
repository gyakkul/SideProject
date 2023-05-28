// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Navigation/NavLinkProxy.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavLinkDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkProxy() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_ANavLinkProxy();
	AIMODULE_API UClass* Z_Construct_UClass_ANavLinkProxy_NoRegister();
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationSegmentLink();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomComponent_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkHostInterface_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkRenderingComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics
	{
		struct _Script_AIModule_eventSmartLinkReachedSignature_Parms
		{
			AActor* MovingActor;
			FVector DestinationPoint;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MovingActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DestinationPoint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::NewProp_MovingActor = { "MovingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AIModule_eventSmartLinkReachedSignature_Parms, MovingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::NewProp_DestinationPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::NewProp_DestinationPoint = { "DestinationPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AIModule_eventSmartLinkReachedSignature_Parms, DestinationPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::NewProp_DestinationPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::NewProp_DestinationPoint_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::NewProp_MovingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::NewProp_DestinationPoint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, nullptr, "SmartLinkReachedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::_Script_AIModule_eventSmartLinkReachedSignature_Parms), Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSmartLinkReachedSignature_DelegateWrapper(const FMulticastScriptDelegate& SmartLinkReachedSignature, AActor* MovingActor, FVector const& DestinationPoint)
{
	struct _Script_AIModule_eventSmartLinkReachedSignature_Parms
	{
		AActor* MovingActor;
		FVector DestinationPoint;
	};
	_Script_AIModule_eventSmartLinkReachedSignature_Parms Parms;
	Parms.MovingActor=MovingActor;
	Parms.DestinationPoint=DestinationPoint;
	SmartLinkReachedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ANavLinkProxy::execHasMovingAgents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMovingAgents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANavLinkProxy::execSetSmartLinkEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSmartLinkEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANavLinkProxy::execIsSmartLinkEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSmartLinkEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANavLinkProxy::execResumePathFollowing)
	{
		P_GET_OBJECT(AActor,Z_Param_Agent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumePathFollowing(Z_Param_Agent);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(ANavLinkProxy::execCopyEndPointsFromSimpleLinkToSmartLink)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyEndPointsFromSimpleLinkToSmartLink();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	struct NavLinkProxy_eventReceiveSmartLinkReached_Parms
	{
		AActor* Agent;
		FVector Destination;
	};
	static FName NAME_ANavLinkProxy_ReceiveSmartLinkReached = FName(TEXT("ReceiveSmartLinkReached"));
	void ANavLinkProxy::ReceiveSmartLinkReached(AActor* Agent, FVector const& Destination)
	{
		NavLinkProxy_eventReceiveSmartLinkReached_Parms Parms;
		Parms.Agent=Agent;
		Parms.Destination=Destination;
		ProcessEvent(FindFunctionChecked(NAME_ANavLinkProxy_ReceiveSmartLinkReached),&Parms);
	}
	void ANavLinkProxy::StaticRegisterNativesANavLinkProxy()
	{
		UClass* Class = ANavLinkProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
			{ "CopyEndPointsFromSimpleLinkToSmartLink", &ANavLinkProxy::execCopyEndPointsFromSimpleLinkToSmartLink },
#endif // WITH_EDITOR
			{ "HasMovingAgents", &ANavLinkProxy::execHasMovingAgents },
			{ "IsSmartLinkEnabled", &ANavLinkProxy::execIsSmartLinkEnabled },
			{ "ResumePathFollowing", &ANavLinkProxy::execResumePathFollowing },
			{ "SetSmartLinkEnabled", &ANavLinkProxy::execSetSmartLinkEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_ANavLinkProxy_CopyEndPointsFromSimpleLinkToSmartLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavLinkProxy_CopyEndPointsFromSimpleLinkToSmartLink_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SmartLink" },
		{ "Comment", "/** Copies navlink end points from the first entry in PointLinks array. This \n\x09 *\x09""function is a helper function making up for smart links not drawing\n\x09 *\x09the FVector widgets in the editor. */" },
		{ "DisplayName", "CopyEndPointsFromSimpleLink" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "Copies navlink end points from the first entry in PointLinks array. This\n    function is a helper function making up for smart links not drawing\n    the FVector widgets in the editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_CopyEndPointsFromSimpleLinkToSmartLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, nullptr, "CopyEndPointsFromSimpleLinkToSmartLink", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavLinkProxy_CopyEndPointsFromSimpleLinkToSmartLink_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_CopyEndPointsFromSimpleLinkToSmartLink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavLinkProxy_CopyEndPointsFromSimpleLinkToSmartLink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_CopyEndPointsFromSimpleLinkToSmartLink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics
	{
		struct NavLinkProxy_eventHasMovingAgents_Parms
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
	void Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavLinkProxy_eventHasMovingAgents_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NavLinkProxy_eventHasMovingAgents_Parms), &Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** check if any agent is moving through smart link right now */" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "check if any agent is moving through smart link right now" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, nullptr, "HasMovingAgents", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::NavLinkProxy_eventHasMovingAgents_Parms), Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics
	{
		struct NavLinkProxy_eventIsSmartLinkEnabled_Parms
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
	void Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NavLinkProxy_eventIsSmartLinkEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NavLinkProxy_eventIsSmartLinkEnabled_Parms), &Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** check if smart link is enabled */" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "check if smart link is enabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, nullptr, "IsSmartLinkEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::NavLinkProxy_eventIsSmartLinkEnabled_Parms), Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Agent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavLinkProxy_eventReceiveSmartLinkReached_Parms, Agent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::NewProp_Destination_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavLinkProxy_eventReceiveSmartLinkReached_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::NewProp_Destination_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::NewProp_Destination_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::NewProp_Agent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::NewProp_Destination,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** called when agent reaches smart link during path following, use ResumePathFollowing() to give control back */" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "called when agent reaches smart link during path following, use ResumePathFollowing() to give control back" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, nullptr, "ReceiveSmartLinkReached", nullptr, nullptr, sizeof(NavLinkProxy_eventReceiveSmartLinkReached_Parms), Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics
	{
		struct NavLinkProxy_eventResumePathFollowing_Parms
		{
			AActor* Agent;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Agent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavLinkProxy_eventResumePathFollowing_Parms, Agent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::NewProp_Agent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** resume normal path following */" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "resume normal path following" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, nullptr, "ResumePathFollowing", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::NavLinkProxy_eventResumePathFollowing_Parms), Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics
	{
		struct NavLinkProxy_eventSetSmartLinkEnabled_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((NavLinkProxy_eventSetSmartLinkEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NavLinkProxy_eventSetSmartLinkEnabled_Parms), &Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** change state of smart link */" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "change state of smart link" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavLinkProxy, nullptr, "SetSmartLinkEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::NavLinkProxy_eventSetSmartLinkEnabled_Parms), Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavLinkProxy);
	UClass* Z_Construct_UClass_ANavLinkProxy_NoRegister()
	{
		return ANavLinkProxy::StaticClass();
	}
	struct Z_Construct_UClass_ANavLinkProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PointLinks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointLinks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PointLinks;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentLinks_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentLinks_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SegmentLinks;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartLinkComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SmartLinkComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSmartLinkIsRelevant_MetaData[];
#endif
		static void NewProp_bSmartLinkIsRelevant_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmartLinkIsRelevant;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdRenderComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EdRenderComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSmartLinkReached_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSmartLinkReached;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavLinkProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANavLinkProxy_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ANavLinkProxy_CopyEndPointsFromSimpleLinkToSmartLink, "CopyEndPointsFromSimpleLinkToSmartLink" }, // 1943530312
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_ANavLinkProxy_HasMovingAgents, "HasMovingAgents" }, // 809003358
		{ &Z_Construct_UFunction_ANavLinkProxy_IsSmartLinkEnabled, "IsSmartLinkEnabled" }, // 2509655799
		{ &Z_Construct_UFunction_ANavLinkProxy_ReceiveSmartLinkReached, "ReceiveSmartLinkReached" }, // 3979227508
		{ &Z_Construct_UFunction_ANavLinkProxy_ResumePathFollowing, "ResumePathFollowing" }, // 2564387196
		{ &Z_Construct_UFunction_ANavLinkProxy_SetSmartLinkEnabled, "SetSmartLinkEnabled" }, // 1248115138
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "SmartLink Actor" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n *  ANavLinkProxy connects areas of Navmesh that don't have a direct navigation path.\n *  It directly supports Simple Links (see PointLinks array). There can be multiple Simple links per ANavLinkProxy instance.\n *  Simple links are designed to statically link areas of Navmesh and are associated with a particular area class that the link provides.\n *  Smart Link functionality is provided via UNavLinkCustomComponent, see SmartLinkComp. They are designed to be able to be dynamically toggled\n *  between enabled and disabled and provide different area classes for both cases. The area classes can be dynamically modified \n *  without navmesh rebuilds.\n *  There can only be at most one smart link per ANavLinkProxy instance.\n *  Both simple and smart links on a single ANavLinkProxy instance, can be set / enabled at once, as well as either or neither of them.\n */" },
		{ "HideCategories", "Input" },
		{ "IncludePath", "Navigation/NavLinkProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "ANavLinkProxy connects areas of Navmesh that don't have a direct navigation path.\nIt directly supports Simple Links (see PointLinks array). There can be multiple Simple links per ANavLinkProxy instance.\nSimple links are designed to statically link areas of Navmesh and are associated with a particular area class that the link provides.\nSmart Link functionality is provided via UNavLinkCustomComponent, see SmartLinkComp. They are designed to be able to be dynamically toggled\nbetween enabled and disabled and provide different area classes for both cases. The area classes can be dynamically modified\nwithout navmesh rebuilds.\nThere can only be at most one smart link per ANavLinkProxy instance.\nBoth simple and smart links on a single ANavLinkProxy instance, can be set / enabled at once, as well as either or neither of them." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_PointLinks_Inner = { "PointLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNavigationLink, METADATA_PARAMS(nullptr, 0) }; // 437560671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_PointLinks_MetaData[] = {
		{ "Category", "SimpleLink" },
		{ "Comment", "/** Navigation links (point to point) added to navigation data */" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "Navigation links (point to point) added to navigation data" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_PointLinks = { "PointLinks", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavLinkProxy, PointLinks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_PointLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_PointLinks_MetaData)) }; // 437560671
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SegmentLinks_Inner = { "SegmentLinks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNavigationSegmentLink, METADATA_PARAMS(nullptr, 0) }; // 1039461076
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SegmentLinks_MetaData[] = {
		{ "Comment", "/** Navigation links (segment to segment) added to navigation data\n\x09*\x09@todo hidden from use until we fix segment links. Not really working now*/" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "Navigation links (segment to segment) added to navigation data\n     @todo hidden from use until we fix segment links. Not really working now" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SegmentLinks = { "SegmentLinks", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavLinkProxy, SegmentLinks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SegmentLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SegmentLinks_MetaData)) }; // 1039461076
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SmartLinkComp_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "Comment", "/** Smart link: can affect path following */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "Smart link: can affect path following" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SmartLinkComp = { "SmartLinkComp", nullptr, (EPropertyFlags)0x00440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavLinkProxy, SmartLinkComp), Z_Construct_UClass_UNavLinkCustomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SmartLinkComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SmartLinkComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_bSmartLinkIsRelevant_MetaData[] = {
		{ "Category", "SmartLink" },
		{ "Comment", "/** Smart link: toggle relevancy */" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "Smart link: toggle relevancy" },
	};
#endif
	void Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_bSmartLinkIsRelevant_SetBit(void* Obj)
	{
		((ANavLinkProxy*)Obj)->bSmartLinkIsRelevant = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_bSmartLinkIsRelevant = { "bSmartLinkIsRelevant", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ANavLinkProxy), &Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_bSmartLinkIsRelevant_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_bSmartLinkIsRelevant_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_bSmartLinkIsRelevant_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_EdRenderComp_MetaData[] = {
		{ "Comment", "/** Editor Preview */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
		{ "ToolTip", "Editor Preview" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_EdRenderComp = { "EdRenderComp", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavLinkProxy, EdRenderComp), Z_Construct_UClass_UNavLinkRenderingComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_EdRenderComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_EdRenderComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavLinkProxy, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_OnSmartLinkReached_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Navigation/NavLinkProxy.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_OnSmartLinkReached = { "OnSmartLinkReached", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavLinkProxy, OnSmartLinkReached), Z_Construct_UDelegateFunction_AIModule_SmartLinkReachedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_OnSmartLinkReached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_OnSmartLinkReached_MetaData)) }; // 3016292818
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavLinkProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_PointLinks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_PointLinks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SegmentLinks_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SegmentLinks,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SmartLinkComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_bSmartLinkIsRelevant,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_EdRenderComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavLinkProxy_Statics::NewProp_OnSmartLinkReached,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANavLinkProxy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavLinkHostInterface_NoRegister, (int32)VTABLE_OFFSET(ANavLinkProxy, INavLinkHostInterface), false },  // 873609221
			{ Z_Construct_UClass_UNavRelevantInterface_NoRegister, (int32)VTABLE_OFFSET(ANavLinkProxy, INavRelevantInterface), false },  // 4115074815
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavLinkProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavLinkProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavLinkProxy_Statics::ClassParams = {
		&ANavLinkProxy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANavLinkProxy_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANavLinkProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavLinkProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavLinkProxy()
	{
		if (!Z_Registration_Info_UClass_ANavLinkProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavLinkProxy.OuterSingleton, Z_Construct_UClass_ANavLinkProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANavLinkProxy.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<ANavLinkProxy>()
	{
		return ANavLinkProxy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavLinkProxy);
	ANavLinkProxy::~ANavLinkProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANavLinkProxy, ANavLinkProxy::StaticClass, TEXT("ANavLinkProxy"), &Z_Registration_Info_UClass_ANavLinkProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavLinkProxy), 534507833U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_3682289500(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_NavLinkProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
