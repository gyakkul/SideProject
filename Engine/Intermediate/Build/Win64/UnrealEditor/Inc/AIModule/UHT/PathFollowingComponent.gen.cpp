// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathFollowingComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIResourceInterface_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
	AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingAction();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingRequestResult();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingStatus();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPathFollowingAgentInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPathFollowingStatus;
	static UEnum* EPathFollowingStatus_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPathFollowingStatus.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPathFollowingStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingStatus, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EPathFollowingStatus"));
		}
		return Z_Registration_Info_UEnum_EPathFollowingStatus.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EPathFollowingStatus::Type>()
	{
		return EPathFollowingStatus_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EPathFollowingStatus_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EPathFollowingStatus_Statics::Enumerators[] = {
		{ "EPathFollowingStatus::Idle", (int64)EPathFollowingStatus::Idle },
		{ "EPathFollowingStatus::Waiting", (int64)EPathFollowingStatus::Waiting },
		{ "EPathFollowingStatus::Paused", (int64)EPathFollowingStatus::Paused },
		{ "EPathFollowingStatus::Moving", (int64)EPathFollowingStatus::Moving },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EPathFollowingStatus_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Idle.Comment", "/** No requests */" },
		{ "Idle.Name", "EPathFollowingStatus::Idle" },
		{ "Idle.ToolTip", "No requests" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "Moving.Comment", "/** Following path */" },
		{ "Moving.Name", "EPathFollowingStatus::Moving" },
		{ "Moving.ToolTip", "Following path" },
		{ "Paused.Comment", "/** Request paused, will continue after ResumeMove() */" },
		{ "Paused.Name", "EPathFollowingStatus::Paused" },
		{ "Paused.ToolTip", "Request paused, will continue after ResumeMove()" },
		{ "Waiting.Comment", "/** Request with incomplete path, will start after UpdateMove() */" },
		{ "Waiting.Name", "EPathFollowingStatus::Waiting" },
		{ "Waiting.ToolTip", "Request with incomplete path, will start after UpdateMove()" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EPathFollowingStatus_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EPathFollowingStatus",
		"EPathFollowingStatus::Type",
		Z_Construct_UEnum_AIModule_EPathFollowingStatus_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPathFollowingStatus_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EPathFollowingStatus_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPathFollowingStatus_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EPathFollowingStatus()
	{
		if (!Z_Registration_Info_UEnum_EPathFollowingStatus.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPathFollowingStatus.InnerSingleton, Z_Construct_UEnum_AIModule_EPathFollowingStatus_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPathFollowingStatus.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPathFollowingResult;
	static UEnum* EPathFollowingResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingResult, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EPathFollowingResult"));
		}
		return Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EPathFollowingResult::Type>()
	{
		return EPathFollowingResult_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EPathFollowingResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EPathFollowingResult_Statics::Enumerators[] = {
		{ "EPathFollowingResult::Success", (int64)EPathFollowingResult::Success },
		{ "EPathFollowingResult::Blocked", (int64)EPathFollowingResult::Blocked },
		{ "EPathFollowingResult::OffPath", (int64)EPathFollowingResult::OffPath },
		{ "EPathFollowingResult::Aborted", (int64)EPathFollowingResult::Aborted },
		{ "EPathFollowingResult::Skipped_DEPRECATED", (int64)EPathFollowingResult::Skipped_DEPRECATED },
		{ "EPathFollowingResult::Invalid", (int64)EPathFollowingResult::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EPathFollowingResult_Statics::Enum_MetaDataParams[] = {
		{ "Aborted.Comment", "/** Aborted and stopped (failure) */" },
		{ "Aborted.Name", "EPathFollowingResult::Aborted" },
		{ "Aborted.ToolTip", "Aborted and stopped (failure)" },
		{ "Blocked.Comment", "/** Movement was blocked */" },
		{ "Blocked.Name", "EPathFollowingResult::Blocked" },
		{ "Blocked.ToolTip", "Movement was blocked" },
		{ "BlueprintType", "true" },
		{ "Invalid.Comment", "/** Request was invalid */" },
		{ "Invalid.Name", "EPathFollowingResult::Invalid" },
		{ "Invalid.ToolTip", "Request was invalid" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "OffPath.Comment", "/** Agent is not on path */" },
		{ "OffPath.Name", "EPathFollowingResult::OffPath" },
		{ "OffPath.ToolTip", "Agent is not on path" },
		{ "Skipped_DEPRECATED.Comment", "/** DEPRECATED, use Aborted result instead */" },
		{ "Skipped_DEPRECATED.Hidden", "" },
		{ "Skipped_DEPRECATED.Name", "EPathFollowingResult::Skipped_DEPRECATED" },
		{ "Skipped_DEPRECATED.ToolTip", "DEPRECATED, use Aborted result instead" },
		{ "Success.Comment", "/** Reached destination */" },
		{ "Success.Name", "EPathFollowingResult::Success" },
		{ "Success.ToolTip", "Reached destination" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EPathFollowingResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EPathFollowingResult",
		"EPathFollowingResult::Type",
		Z_Construct_UEnum_AIModule_EPathFollowingResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPathFollowingResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EPathFollowingResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPathFollowingResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult()
	{
		if (!Z_Registration_Info_UEnum_EPathFollowingResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPathFollowingResult.InnerSingleton, Z_Construct_UEnum_AIModule_EPathFollowingResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPathFollowingResult.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPathFollowingAction;
	static UEnum* EPathFollowingAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPathFollowingAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPathFollowingAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingAction, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EPathFollowingAction"));
		}
		return Z_Registration_Info_UEnum_EPathFollowingAction.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EPathFollowingAction::Type>()
	{
		return EPathFollowingAction_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EPathFollowingAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EPathFollowingAction_Statics::Enumerators[] = {
		{ "EPathFollowingAction::Error", (int64)EPathFollowingAction::Error },
		{ "EPathFollowingAction::NoMove", (int64)EPathFollowingAction::NoMove },
		{ "EPathFollowingAction::DirectMove", (int64)EPathFollowingAction::DirectMove },
		{ "EPathFollowingAction::PartialPath", (int64)EPathFollowingAction::PartialPath },
		{ "EPathFollowingAction::PathToGoal", (int64)EPathFollowingAction::PathToGoal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EPathFollowingAction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// DEPRECATED, will be removed with GetPathActionType function\n" },
		{ "DirectMove.Name", "EPathFollowingAction::DirectMove" },
		{ "Error.Name", "EPathFollowingAction::Error" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "NoMove.Name", "EPathFollowingAction::NoMove" },
		{ "PartialPath.Name", "EPathFollowingAction::PartialPath" },
		{ "PathToGoal.Name", "EPathFollowingAction::PathToGoal" },
		{ "ToolTip", "DEPRECATED, will be removed with GetPathActionType function" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EPathFollowingAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EPathFollowingAction",
		"EPathFollowingAction::Type",
		Z_Construct_UEnum_AIModule_EPathFollowingAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPathFollowingAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EPathFollowingAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPathFollowingAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EPathFollowingAction()
	{
		if (!Z_Registration_Info_UEnum_EPathFollowingAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPathFollowingAction.InnerSingleton, Z_Construct_UEnum_AIModule_EPathFollowingAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPathFollowingAction.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPathFollowingRequestResult;
	static UEnum* EPathFollowingRequestResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPathFollowingRequestResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPathFollowingRequestResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingRequestResult, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EPathFollowingRequestResult"));
		}
		return Z_Registration_Info_UEnum_EPathFollowingRequestResult.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EPathFollowingRequestResult::Type>()
	{
		return EPathFollowingRequestResult_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EPathFollowingRequestResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EPathFollowingRequestResult_Statics::Enumerators[] = {
		{ "EPathFollowingRequestResult::Failed", (int64)EPathFollowingRequestResult::Failed },
		{ "EPathFollowingRequestResult::AlreadyAtGoal", (int64)EPathFollowingRequestResult::AlreadyAtGoal },
		{ "EPathFollowingRequestResult::RequestSuccessful", (int64)EPathFollowingRequestResult::RequestSuccessful },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EPathFollowingRequestResult_Statics::Enum_MetaDataParams[] = {
		{ "AlreadyAtGoal.Name", "EPathFollowingRequestResult::AlreadyAtGoal" },
		{ "BlueprintType", "true" },
		{ "Failed.Name", "EPathFollowingRequestResult::Failed" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "RequestSuccessful.Name", "EPathFollowingRequestResult::RequestSuccessful" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EPathFollowingRequestResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EPathFollowingRequestResult",
		"EPathFollowingRequestResult::Type",
		Z_Construct_UEnum_AIModule_EPathFollowingRequestResult_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPathFollowingRequestResult_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EPathFollowingRequestResult_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPathFollowingRequestResult_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EPathFollowingRequestResult()
	{
		if (!Z_Registration_Info_UEnum_EPathFollowingRequestResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPathFollowingRequestResult.InnerSingleton, Z_Construct_UEnum_AIModule_EPathFollowingRequestResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPathFollowingRequestResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UPathFollowingComponent::execOnNavDataRegistered)
	{
		P_GET_OBJECT(ANavigationData,Z_Param_NavData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNavDataRegistered(Z_Param_NavData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPathFollowingComponent::execGetPathDestination)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPathDestination();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPathFollowingComponent::execGetPathActionType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EPathFollowingAction::Type>*)Z_Param__Result=P_THIS->GetPathActionType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPathFollowingComponent::execOnActorBump)
	{
		P_GET_OBJECT(AActor,Z_Param_SelfActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorBump(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void UPathFollowingComponent::StaticRegisterNativesUPathFollowingComponent()
	{
		UClass* Class = UPathFollowingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPathActionType", &UPathFollowingComponent::execGetPathActionType },
			{ "GetPathDestination", &UPathFollowingComponent::execGetPathDestination },
			{ "OnActorBump", &UPathFollowingComponent::execOnActorBump },
			{ "OnNavDataRegistered", &UPathFollowingComponent::execOnNavDataRegistered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics
	{
		struct PathFollowingComponent_eventGetPathActionType_Parms
		{
			TEnumAsByte<EPathFollowingAction::Type> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PathFollowingComponent_eventGetPathActionType_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPathFollowingAction, METADATA_PARAMS(nullptr, 0) }; // 3686131585
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PathFollowing" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is now deprecated, please use AIController.GetMoveStatus instead" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPathFollowingComponent, nullptr, "GetPathActionType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::PathFollowingComponent_eventGetPathActionType_Parms), Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics
	{
		struct PathFollowingComponent_eventGetPathDestination_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PathFollowingComponent_eventGetPathDestination_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PathFollowing" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is now deprecated, please use AIController.GetImmediateMoveDestination instead" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPathFollowingComponent, nullptr, "GetPathDestination", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::PathFollowingComponent_eventGetPathDestination_Parms), Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics
	{
		struct PathFollowingComponent_eventOnActorBump_Parms
		{
			AActor* SelfActor;
			AActor* OtherActor;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PathFollowingComponent_eventOnActorBump_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PathFollowingComponent_eventOnActorBump_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PathFollowingComponent_eventOnActorBump_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PathFollowingComponent_eventOnActorBump_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_Hit_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_SelfActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** called when moving agent collides with another actor */" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "ToolTip", "called when moving agent collides with another actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPathFollowingComponent, nullptr, "OnActorBump", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::PathFollowingComponent_eventOnActorBump_Parms), Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPathFollowingComponent_OnActorBump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics
	{
		struct PathFollowingComponent_eventOnNavDataRegistered_Parms
		{
			ANavigationData* NavData;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NavData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::NewProp_NavData = { "NavData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PathFollowingComponent_eventOnNavDataRegistered_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::NewProp_NavData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** called when NavigationSystem registers new navigation data type while this component\n\x09 *\x09instance has empty MyNavData. This is usually the case for AI agents hand-placed\n\x09 *\x09on levels. */" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "ToolTip", "called when NavigationSystem registers new navigation data type while this component\n    instance has empty MyNavData. This is usually the case for AI agents hand-placed\n    on levels." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPathFollowingComponent, nullptr, "OnNavDataRegistered", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::PathFollowingComponent_eventOnNavDataRegistered_Parms), Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPathFollowingComponent);
	UClass* Z_Construct_UClass_UPathFollowingComponent_NoRegister()
	{
		return UPathFollowingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPathFollowingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovementComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyNavData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MyNavData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathFollowingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPathFollowingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType, "GetPathActionType" }, // 3035662417
		{ &Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination, "GetPathDestination" }, // 3954941392
		{ &Z_Construct_UFunction_UPathFollowingComponent_OnActorBump, "OnActorBump" }, // 1169948513
		{ &Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered, "OnNavDataRegistered" }, // 3537662800
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathFollowingComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Navigation/PathFollowingComponent.h" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MovementComp_MetaData[] = {
		{ "Comment", "/** associated movement component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "ToolTip", "associated movement component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x0024080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPathFollowingComponent, MovementComp), Z_Construct_UClass_UNavMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MovementComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MovementComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MyNavData_MetaData[] = {
		{ "Comment", "/** navigation data for agent described in movement component */" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "ToolTip", "navigation data for agent described in movement component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MyNavData = { "MyNavData", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPathFollowingComponent, MyNavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MyNavData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MyNavData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathFollowingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MovementComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MyNavData,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPathFollowingComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIResourceInterface_NoRegister, (int32)VTABLE_OFFSET(UPathFollowingComponent, IAIResourceInterface), false },  // 3634866635
			{ Z_Construct_UClass_UPathFollowingAgentInterface_NoRegister, (int32)VTABLE_OFFSET(UPathFollowingComponent, IPathFollowingAgentInterface), false },  // 1138532388
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathFollowingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathFollowingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPathFollowingComponent_Statics::ClassParams = {
		&UPathFollowingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPathFollowingComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPathFollowingComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPathFollowingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPathFollowingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPathFollowingComponent()
	{
		if (!Z_Registration_Info_UClass_UPathFollowingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPathFollowingComponent.OuterSingleton, Z_Construct_UClass_UPathFollowingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPathFollowingComponent.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UPathFollowingComponent>()
	{
		return UPathFollowingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathFollowingComponent);
	UPathFollowingComponent::~UPathFollowingComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_Statics::EnumInfo[] = {
		{ EPathFollowingStatus_StaticEnum, TEXT("EPathFollowingStatus"), &Z_Registration_Info_UEnum_EPathFollowingStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2432336402U) },
		{ EPathFollowingResult_StaticEnum, TEXT("EPathFollowingResult"), &Z_Registration_Info_UEnum_EPathFollowingResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1916887335U) },
		{ EPathFollowingAction_StaticEnum, TEXT("EPathFollowingAction"), &Z_Registration_Info_UEnum_EPathFollowingAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3686131585U) },
		{ EPathFollowingRequestResult_StaticEnum, TEXT("EPathFollowingRequestResult"), &Z_Registration_Info_UEnum_EPathFollowingRequestResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 777713229U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPathFollowingComponent, UPathFollowingComponent::StaticClass, TEXT("UPathFollowingComponent"), &Z_Registration_Info_UClass_UPathFollowingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPathFollowingComponent), 1972400971U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_1200591310(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
