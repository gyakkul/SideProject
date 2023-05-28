// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Tasks/AITask_MoveTo.h"
#include "../../AIModule/Classes/AITypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAITask_MoveTo() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask_MoveTo();
	AIMODULE_API UClass* Z_Construct_UClass_UAITask_MoveTo_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAIOptionFlag();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIMoveRequest();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics
	{
		struct _Script_AIModule_eventMoveTaskCompletedSignature_Parms
		{
			TEnumAsByte<EPathFollowingResult::Type> Result;
			AAIController* AIController;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AIController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AIModule_eventMoveTaskCompletedSignature_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(nullptr, 0) }; // 1916887335
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_AIModule_eventMoveTaskCompletedSignature_Parms, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::NewProp_AIController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tasks/AITask_MoveTo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, nullptr, "MoveTaskCompletedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::_Script_AIModule_eventMoveTaskCompletedSignature_Parms), Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FMoveTaskCompletedSignature_DelegateWrapper(const FMulticastScriptDelegate& MoveTaskCompletedSignature, EPathFollowingResult::Type Result, AAIController* AIController)
{
	struct _Script_AIModule_eventMoveTaskCompletedSignature_Parms
	{
		TEnumAsByte<EPathFollowingResult::Type> Result;
		AAIController* AIController;
	};
	_Script_AIModule_eventMoveTaskCompletedSignature_Parms Parms;
	Parms.Result=Result;
	Parms.AIController=AIController;
	MoveTaskCompletedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAITask_MoveTo::execAIMoveTo)
	{
		P_GET_OBJECT(AAIController,Z_Param_Controller);
		P_GET_STRUCT(FVector,Z_Param_GoalLocation);
		P_GET_OBJECT(AActor,Z_Param_GoalActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AcceptanceRadius);
		P_GET_PROPERTY(FByteProperty,Z_Param_StopOnOverlap);
		P_GET_PROPERTY(FByteProperty,Z_Param_AcceptPartialPath);
		P_GET_UBOOL(Z_Param_bUsePathfinding);
		P_GET_UBOOL(Z_Param_bLockAILogic);
		P_GET_UBOOL(Z_Param_bUseContinuousGoalTracking);
		P_GET_PROPERTY(FByteProperty,Z_Param_ProjectGoalOnNavigation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAITask_MoveTo**)Z_Param__Result=UAITask_MoveTo::AIMoveTo(Z_Param_Controller,Z_Param_GoalLocation,Z_Param_GoalActor,Z_Param_AcceptanceRadius,EAIOptionFlag::Type(Z_Param_StopOnOverlap),EAIOptionFlag::Type(Z_Param_AcceptPartialPath),Z_Param_bUsePathfinding,Z_Param_bLockAILogic,Z_Param_bUseContinuousGoalTracking,EAIOptionFlag::Type(Z_Param_ProjectGoalOnNavigation));
		P_NATIVE_END;
	}
	void UAITask_MoveTo::StaticRegisterNativesUAITask_MoveTo()
	{
		UClass* Class = UAITask_MoveTo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AIMoveTo", &UAITask_MoveTo::execAIMoveTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics
	{
		struct AITask_MoveTo_eventAIMoveTo_Parms
		{
			AAIController* Controller;
			FVector GoalLocation;
			AActor* GoalActor;
			float AcceptanceRadius;
			TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap;
			TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath;
			bool bUsePathfinding;
			bool bLockAILogic;
			bool bUseContinuousGoalTracking;
			TEnumAsByte<EAIOptionFlag::Type> ProjectGoalOnNavigation;
			UAITask_MoveTo* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GoalLocation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GoalActor;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StopOnOverlap;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AcceptPartialPath;
		static void NewProp_bUsePathfinding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding;
		static void NewProp_bLockAILogic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockAILogic;
		static void NewProp_bUseContinuousGoalTracking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseContinuousGoalTracking;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectGoalOnNavigation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_GoalLocation = { "GoalLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, GoalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_GoalActor = { "GoalActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, GoalActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, AcceptanceRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_StopOnOverlap = { "StopOnOverlap", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, StopOnOverlap), Z_Construct_UEnum_AIModule_EAIOptionFlag, METADATA_PARAMS(nullptr, 0) }; // 1032567087
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_AcceptPartialPath = { "AcceptPartialPath", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, AcceptPartialPath), Z_Construct_UEnum_AIModule_EAIOptionFlag, METADATA_PARAMS(nullptr, 0) }; // 1032567087
	void Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bUsePathfinding_SetBit(void* Obj)
	{
		((AITask_MoveTo_eventAIMoveTo_Parms*)Obj)->bUsePathfinding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bUsePathfinding = { "bUsePathfinding", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AITask_MoveTo_eventAIMoveTo_Parms), &Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bUsePathfinding_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bLockAILogic_SetBit(void* Obj)
	{
		((AITask_MoveTo_eventAIMoveTo_Parms*)Obj)->bLockAILogic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bLockAILogic = { "bLockAILogic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AITask_MoveTo_eventAIMoveTo_Parms), &Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bLockAILogic_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bUseContinuousGoalTracking_SetBit(void* Obj)
	{
		((AITask_MoveTo_eventAIMoveTo_Parms*)Obj)->bUseContinuousGoalTracking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bUseContinuousGoalTracking = { "bUseContinuousGoalTracking", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AITask_MoveTo_eventAIMoveTo_Parms), &Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bUseContinuousGoalTracking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_ProjectGoalOnNavigation = { "ProjectGoalOnNavigation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, ProjectGoalOnNavigation), Z_Construct_UEnum_AIModule_EAIOptionFlag, METADATA_PARAMS(nullptr, 0) }; // 1032567087
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AITask_MoveTo_eventAIMoveTo_Parms, ReturnValue), Z_Construct_UClass_UAITask_MoveTo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_GoalLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_GoalActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_AcceptanceRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_StopOnOverlap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_AcceptPartialPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bUsePathfinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bLockAILogic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_bUseContinuousGoalTracking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_ProjectGoalOnNavigation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "AcceptanceRadius,StopOnOverlap,AcceptPartialPath,bUsePathfinding,bUseContinuousGoalTracking,ProjectGoalOnNavigation" },
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "AI|Tasks" },
		{ "CPP_Default_AcceptanceRadius", "-1.000000" },
		{ "CPP_Default_AcceptPartialPath", "Default" },
		{ "CPP_Default_bLockAILogic", "true" },
		{ "CPP_Default_bUseContinuousGoalTracking", "false" },
		{ "CPP_Default_bUsePathfinding", "true" },
		{ "CPP_Default_GoalActor", "None" },
		{ "CPP_Default_ProjectGoalOnNavigation", "Default" },
		{ "CPP_Default_StopOnOverlap", "Default" },
		{ "DefaultToSelf", "Controller" },
		{ "DisplayName", "Move To Location or Actor" },
		{ "ModuleRelativePath", "Classes/Tasks/AITask_MoveTo.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAITask_MoveTo, nullptr, "AIMoveTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::AITask_MoveTo_eventAIMoveTo_Parms), Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAITask_MoveTo);
	UClass* Z_Construct_UClass_UAITask_MoveTo_NoRegister()
	{
		return UAITask_MoveTo::StaticClass();
	}
	struct Z_Construct_UClass_UAITask_MoveTo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRequestFailed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMoveFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMoveFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveRequest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAITask_MoveTo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAITask,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAITask_MoveTo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAITask_MoveTo_AIMoveTo, "AIMoveTo" }, // 1775381172
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_MoveTo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/AITask_MoveTo.h" },
		{ "ModuleRelativePath", "Classes/Tasks/AITask_MoveTo.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnRequestFailed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tasks/AITask_MoveTo.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnRequestFailed = { "OnRequestFailed", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAITask_MoveTo, OnRequestFailed), Z_Construct_UDelegateFunction_UGameplayTask_GenericGameplayTaskDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnRequestFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnRequestFailed_MetaData)) }; // 2832075636
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnMoveFinished_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tasks/AITask_MoveTo.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnMoveFinished = { "OnMoveFinished", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAITask_MoveTo, OnMoveFinished), Z_Construct_UDelegateFunction_AIModule_MoveTaskCompletedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnMoveFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnMoveFinished_MetaData)) }; // 1082483305
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_MoveRequest_MetaData[] = {
		{ "Comment", "/** parameters of move request */" },
		{ "ModuleRelativePath", "Classes/Tasks/AITask_MoveTo.h" },
		{ "ToolTip", "parameters of move request" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_MoveRequest = { "MoveRequest", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAITask_MoveTo, MoveRequest), Z_Construct_UScriptStruct_FAIMoveRequest, METADATA_PARAMS(Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_MoveRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_MoveRequest_MetaData)) }; // 1768533556
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAITask_MoveTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnRequestFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_OnMoveFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAITask_MoveTo_Statics::NewProp_MoveRequest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAITask_MoveTo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAITask_MoveTo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAITask_MoveTo_Statics::ClassParams = {
		&UAITask_MoveTo::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAITask_MoveTo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_MoveTo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAITask_MoveTo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAITask_MoveTo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAITask_MoveTo()
	{
		if (!Z_Registration_Info_UClass_UAITask_MoveTo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAITask_MoveTo.OuterSingleton, Z_Construct_UClass_UAITask_MoveTo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAITask_MoveTo.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UAITask_MoveTo>()
	{
		return UAITask_MoveTo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAITask_MoveTo);
	UAITask_MoveTo::~UAITask_MoveTo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAITask_MoveTo, UAITask_MoveTo::StaticClass, TEXT("UAITask_MoveTo"), &Z_Registration_Info_UClass_UAITask_MoveTo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAITask_MoveTo), 214323413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_815080758(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Tasks_AITask_MoveTo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
