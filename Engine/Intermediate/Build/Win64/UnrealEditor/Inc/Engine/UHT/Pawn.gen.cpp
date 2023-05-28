// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/Pawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawn() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformUserId();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavAgentInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoPossessAI();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoReceiveInput();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature();
	ENGINE_API UFunction* Z_Construct_USparseDelegateFunction_Engine_PawnRestartedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct Z_Construct_USparseDelegateFunction_Engine_PawnRestartedSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventPawnRestartedSignature_Parms
		{
			APawn* Pawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_PawnRestartedSignature__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventPawnRestartedSignature_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_PawnRestartedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_PawnRestartedSignature__DelegateSignature_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_PawnRestartedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_PawnRestartedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "PawnRestartedSignature__DelegateSignature", "Pawn", "ReceiveRestartedDelegate", sizeof(Z_Construct_USparseDelegateFunction_Engine_PawnRestartedSignature__DelegateSignature_Statics::_Script_Engine_eventPawnRestartedSignature_Parms), Z_Construct_USparseDelegateFunction_Engine_PawnRestartedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_PawnRestartedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_PawnRestartedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_PawnRestartedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_PawnRestartedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_PawnRestartedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPawnRestartedSignature_DelegateWrapper(const FMulticastScriptDelegate& PawnRestartedSignature, APawn* Pawn)
{
	struct _Script_Engine_eventPawnRestartedSignature_Parms
	{
		APawn* Pawn;
	};
	_Script_Engine_eventPawnRestartedSignature_Parms Parms;
	Parms.Pawn=Pawn;
	PawnRestartedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature_Statics
	{
		struct _Script_Engine_eventPawnControllerChangedSignature_Parms
		{
			APawn* Pawn;
			AController* OldController;
			AController* NewController;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventPawnControllerChangedSignature_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature_Statics::NewProp_OldController = { "OldController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventPawnControllerChangedSignature_Parms, OldController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Engine_eventPawnControllerChangedSignature_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature_Statics::NewProp_OldController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature_Statics::NewProp_NewController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "PawnControllerChangedSignature__DelegateSignature", "Pawn", "ReceiveControllerChangedDelegate", sizeof(Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature_Statics::_Script_Engine_eventPawnControllerChangedSignature_Parms), Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPawnControllerChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& PawnControllerChangedSignature, APawn* Pawn, AController* OldController, AController* NewController)
{
	struct _Script_Engine_eventPawnControllerChangedSignature_Parms
	{
		APawn* Pawn;
		AController* OldController;
		AController* NewController;
	};
	_Script_Engine_eventPawnControllerChangedSignature_Parms Parms;
	Parms.Pawn=Pawn;
	Parms.OldController=OldController;
	Parms.NewController=NewController;
	PawnControllerChangedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(APawn::execGetOverrideInputComponentClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UInputComponent> *)Z_Param__Result=P_THIS->GetOverrideInputComponentClass();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execIsMoveInputIgnored)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMoveInputIgnored();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execAddControllerRollInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddControllerRollInput(Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execAddControllerYawInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddControllerYawInput(Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execAddControllerPitchInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddControllerPitchInput(Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execConsumeMovementInputVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ConsumeMovementInputVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execGetLastMovementInputVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLastMovementInputVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execGetPendingMovementInputVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPendingMovementInputVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execAddMovementInput)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldDirection);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMovementInput(Z_Param_WorldDirection,Z_Param_ScaleValue,Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execSpawnDefaultController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnDefaultController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execDetachFromControllerPendingDestroy)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DetachFromControllerPendingDestroy();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execGetBaseAimRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetBaseAimRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execIsBotControlled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBotControlled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execIsPlayerControlled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerControlled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execGetPlatformUserId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlatformUserId*)Z_Param__Result=P_THIS->GetPlatformUserId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execIsLocallyControlled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocallyControlled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execGetNavAgentLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetNavAgentLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execSetCanAffectNavigationGeneration)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_GET_UBOOL(Z_Param_bForceUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanAffectNavigationGeneration(Z_Param_bNewValue,Z_Param_bForceUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execOnRep_PlayerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlayerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execOnRep_Controller)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Controller();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execGetControlRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetControlRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execGetController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AController**)Z_Param__Result=P_THIS->GetController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execIsPawnControlled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPawnControlled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execIsControlled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsControlled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execGetMovementBaseActor)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=APawn::GetMovementBaseActor(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execIsLocallyViewed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLocallyViewed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execGetLocalViewingPlayerController)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=P_THIS->GetLocalViewingPlayerController();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execPawnMakeNoise)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Loudness);
		P_GET_STRUCT(FVector,Z_Param_NoiseLocation);
		P_GET_UBOOL(Z_Param_bUseNoiseMakerLocation);
		P_GET_OBJECT(AActor,Z_Param_NoiseMaker);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PawnMakeNoise(Z_Param_Loudness,Z_Param_NoiseLocation,Z_Param_bUseNoiseMakerLocation,Z_Param_NoiseMaker);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APawn::execGetMovementComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPawnMovementComponent**)Z_Param__Result=P_THIS->GetMovementComponent();
		P_NATIVE_END;
	}
	struct Pawn_eventReceiveControllerChanged_Parms
	{
		AController* OldController;
		AController* NewController;
	};
	struct Pawn_eventReceivePossessed_Parms
	{
		AController* NewController;
	};
	struct Pawn_eventReceiveUnpossessed_Parms
	{
		AController* OldController;
	};
	static FName NAME_APawn_ReceiveControllerChanged = FName(TEXT("ReceiveControllerChanged"));
	void APawn::ReceiveControllerChanged(AController* OldController, AController* NewController)
	{
		Pawn_eventReceiveControllerChanged_Parms Parms;
		Parms.OldController=OldController;
		Parms.NewController=NewController;
		ProcessEvent(FindFunctionChecked(NAME_APawn_ReceiveControllerChanged),&Parms);
	}
	static FName NAME_APawn_ReceivePossessed = FName(TEXT("ReceivePossessed"));
	void APawn::ReceivePossessed(AController* NewController)
	{
		Pawn_eventReceivePossessed_Parms Parms;
		Parms.NewController=NewController;
		ProcessEvent(FindFunctionChecked(NAME_APawn_ReceivePossessed),&Parms);
	}
	static FName NAME_APawn_ReceiveRestarted = FName(TEXT("ReceiveRestarted"));
	void APawn::ReceiveRestarted()
	{
		ProcessEvent(FindFunctionChecked(NAME_APawn_ReceiveRestarted),NULL);
	}
	static FName NAME_APawn_ReceiveUnpossessed = FName(TEXT("ReceiveUnpossessed"));
	void APawn::ReceiveUnpossessed(AController* OldController)
	{
		Pawn_eventReceiveUnpossessed_Parms Parms;
		Parms.OldController=OldController;
		ProcessEvent(FindFunctionChecked(NAME_APawn_ReceiveUnpossessed),&Parms);
	}
	void APawn::StaticRegisterNativesAPawn()
	{
		UClass* Class = APawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddControllerPitchInput", &APawn::execAddControllerPitchInput },
			{ "AddControllerRollInput", &APawn::execAddControllerRollInput },
			{ "AddControllerYawInput", &APawn::execAddControllerYawInput },
			{ "AddMovementInput", &APawn::execAddMovementInput },
			{ "ConsumeMovementInputVector", &APawn::execConsumeMovementInputVector },
			{ "DetachFromControllerPendingDestroy", &APawn::execDetachFromControllerPendingDestroy },
			{ "GetBaseAimRotation", &APawn::execGetBaseAimRotation },
			{ "GetController", &APawn::execGetController },
			{ "GetControlRotation", &APawn::execGetControlRotation },
			{ "GetLastMovementInputVector", &APawn::execGetLastMovementInputVector },
			{ "GetLocalViewingPlayerController", &APawn::execGetLocalViewingPlayerController },
			{ "GetMovementBaseActor", &APawn::execGetMovementBaseActor },
			{ "GetMovementComponent", &APawn::execGetMovementComponent },
			{ "GetNavAgentLocation", &APawn::execGetNavAgentLocation },
			{ "GetOverrideInputComponentClass", &APawn::execGetOverrideInputComponentClass },
			{ "GetPendingMovementInputVector", &APawn::execGetPendingMovementInputVector },
			{ "GetPlatformUserId", &APawn::execGetPlatformUserId },
			{ "IsBotControlled", &APawn::execIsBotControlled },
			{ "IsControlled", &APawn::execIsControlled },
			{ "IsLocallyControlled", &APawn::execIsLocallyControlled },
			{ "IsLocallyViewed", &APawn::execIsLocallyViewed },
			{ "IsMoveInputIgnored", &APawn::execIsMoveInputIgnored },
			{ "IsPawnControlled", &APawn::execIsPawnControlled },
			{ "IsPlayerControlled", &APawn::execIsPlayerControlled },
			{ "OnRep_Controller", &APawn::execOnRep_Controller },
			{ "OnRep_PlayerState", &APawn::execOnRep_PlayerState },
			{ "PawnMakeNoise", &APawn::execPawnMakeNoise },
			{ "SetCanAffectNavigationGeneration", &APawn::execSetCanAffectNavigationGeneration },
			{ "SpawnDefaultController", &APawn::execSpawnDefaultController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics
	{
		struct Pawn_eventAddControllerPitchInput_Parms
		{
			float Val;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventAddControllerPitchInput_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Comment", "/**\n\x09 * Add input (affecting Pitch) to the Controller's ControlRotation, if it is a local PlayerController.\n\x09 * This value is multiplied by the PlayerController's InputPitchScale value.\n\x09 * @param Val Amount to add to Pitch. This value is multiplied by the PlayerController's InputPitchScale value.\n\x09 * @see PlayerController::InputPitchScale\n\x09 */" },
		{ "Keywords", "up down addpitch" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Add input (affecting Pitch) to the Controller's ControlRotation, if it is a local PlayerController.\nThis value is multiplied by the PlayerController's InputPitchScale value.\n@param Val Amount to add to Pitch. This value is multiplied by the PlayerController's InputPitchScale value.\n@see PlayerController::InputPitchScale" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "AddControllerPitchInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::Pawn_eventAddControllerPitchInput_Parms), Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_AddControllerPitchInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_AddControllerPitchInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_AddControllerRollInput_Statics
	{
		struct Pawn_eventAddControllerRollInput_Parms
		{
			float Val;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventAddControllerRollInput_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Comment", "/**\n\x09 * Add input (affecting Roll) to the Controller's ControlRotation, if it is a local PlayerController.\n\x09 * This value is multiplied by the PlayerController's InputRollScale value.\n\x09 * @param Val Amount to add to Roll. This value is multiplied by the PlayerController's InputRollScale value.\n\x09 * @see PlayerController::InputRollScale\n\x09 */" },
		{ "Keywords", "addroll" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Add input (affecting Roll) to the Controller's ControlRotation, if it is a local PlayerController.\nThis value is multiplied by the PlayerController's InputRollScale value.\n@param Val Amount to add to Roll. This value is multiplied by the PlayerController's InputRollScale value.\n@see PlayerController::InputRollScale" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "AddControllerRollInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::Pawn_eventAddControllerRollInput_Parms), Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_AddControllerRollInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_AddControllerRollInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_AddControllerYawInput_Statics
	{
		struct Pawn_eventAddControllerYawInput_Parms
		{
			float Val;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventAddControllerYawInput_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Comment", "/**\n\x09 * Add input (affecting Yaw) to the Controller's ControlRotation, if it is a local PlayerController.\n\x09 * This value is multiplied by the PlayerController's InputYawScale value.\n\x09 * @param Val Amount to add to Yaw. This value is multiplied by the PlayerController's InputYawScale value.\n\x09 * @see PlayerController::InputYawScale\n\x09 */" },
		{ "Keywords", "left right turn addyaw" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Add input (affecting Yaw) to the Controller's ControlRotation, if it is a local PlayerController.\nThis value is multiplied by the PlayerController's InputYawScale value.\n@param Val Amount to add to Yaw. This value is multiplied by the PlayerController's InputYawScale value.\n@see PlayerController::InputYawScale" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "AddControllerYawInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::Pawn_eventAddControllerYawInput_Parms), Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_AddControllerYawInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_AddControllerYawInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_AddMovementInput_Statics
	{
		struct Pawn_eventAddMovementInput_Parms
		{
			FVector WorldDirection;
			float ScaleValue;
			bool bForce;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APawn_AddMovementInput_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventAddMovementInput_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APawn_AddMovementInput_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventAddMovementInput_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APawn_AddMovementInput_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((Pawn_eventAddMovementInput_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_AddMovementInput_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Pawn_eventAddMovementInput_Parms), &Z_Construct_UFunction_APawn_AddMovementInput_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_AddMovementInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_AddMovementInput_Statics::NewProp_WorldDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_AddMovementInput_Statics::NewProp_ScaleValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_AddMovementInput_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_AddMovementInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Comment", "/**\n\x09 * Add movement input along the given world direction vector (usually normalized) scaled by 'ScaleValue'. If ScaleValue < 0, movement will be in the opposite direction.\n\x09 * Base Pawn classes won't automatically apply movement, it's up to the user to do so in a Tick event. Subclasses such as Character and DefaultPawn automatically handle this input and move.\n\x09 *\n\x09 * @param WorldDirection\x09""Direction in world space to apply input\n\x09 * @param ScaleValue\x09\x09Scale to apply to input. This can be used for analog input, ie a value of 0.5 applies half the normal value, while -1.0 would reverse the direction.\n\x09 * @param bForce\x09\x09\x09If true always add the input, ignoring the result of IsMoveInputIgnored().\n\x09 * @see GetPendingMovementInputVector(), GetLastMovementInputVector(), ConsumeMovementInputVector()\n\x09 */" },
		{ "CPP_Default_bForce", "false" },
		{ "CPP_Default_ScaleValue", "1.000000" },
		{ "Keywords", "AddInput" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Add movement input along the given world direction vector (usually normalized) scaled by 'ScaleValue'. If ScaleValue < 0, movement will be in the opposite direction.\nBase Pawn classes won't automatically apply movement, it's up to the user to do so in a Tick event. Subclasses such as Character and DefaultPawn automatically handle this input and move.\n\n@param WorldDirection        Direction in world space to apply input\n@param ScaleValue            Scale to apply to input. This can be used for analog input, ie a value of 0.5 applies half the normal value, while -1.0 would reverse the direction.\n@param bForce                        If true always add the input, ignoring the result of IsMoveInputIgnored().\n@see GetPendingMovementInputVector(), GetLastMovementInputVector(), ConsumeMovementInputVector()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_AddMovementInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "AddMovementInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_AddMovementInput_Statics::Pawn_eventAddMovementInput_Parms), Z_Construct_UFunction_APawn_AddMovementInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_AddMovementInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_AddMovementInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_AddMovementInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_AddMovementInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_AddMovementInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics
	{
		struct Pawn_eventConsumeMovementInputVector_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventConsumeMovementInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Comment", "/**\n\x09 * Returns the pending input vector and resets it to zero.\n\x09 * This should be used during a movement update (by the Pawn or PawnMovementComponent) to prevent accumulation of control input between frames.\n\x09 * Copies the pending input vector to the saved input vector (GetLastMovementInputVector()).\n\x09 * @return The pending input vector.\n\x09 */" },
		{ "Keywords", "ConsumeInput" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Returns the pending input vector and resets it to zero.\nThis should be used during a movement update (by the Pawn or PawnMovementComponent) to prevent accumulation of control input between frames.\nCopies the pending input vector to the saved input vector (GetLastMovementInputVector()).\n@return The pending input vector." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "ConsumeMovementInputVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::Pawn_eventConsumeMovementInputVector_Parms), Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_ConsumeMovementInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_ConsumeMovementInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Call this function to detach safely pawn from its controller, knowing that we will be destroyed soon.\x09 */" },
		{ "Keywords", "Delete" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Call this function to detach safely pawn from its controller, knowing that we will be destroyed soon." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "DetachFromControllerPendingDestroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics
	{
		struct Pawn_eventGetBaseAimRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventGetBaseAimRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/**\n\x09 * Return the aim rotation for the Pawn.\n\x09 * If we have a controller, by default we aim at the player's 'eyes' direction\n\x09 * that is by default the Pawn rotation for AI, and camera (crosshair) rotation for human players.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Return the aim rotation for the Pawn.\nIf we have a controller, by default we aim at the player's 'eyes' direction\nthat is by default the Pawn rotation for AI, and camera (crosshair) rotation for human players." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "GetBaseAimRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::Pawn_eventGetBaseAimRotation_Parms), Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_GetBaseAimRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_GetBaseAimRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_GetController_Statics
	{
		struct Pawn_eventGetController_Parms
		{
			AController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APawn_GetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventGetController_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_GetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Returns controller for this actor. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Returns controller for this actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_GetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "GetController", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_GetController_Statics::Pawn_eventGetController_Parms), Z_Construct_UFunction_APawn_GetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_GetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_GetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_GetControlRotation_Statics
	{
		struct Pawn_eventGetControlRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APawn_GetControlRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventGetControlRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_GetControlRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetControlRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetControlRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Get the rotation of the Controller, often the 'view' rotation of this Pawn. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Get the rotation of the Controller, often the 'view' rotation of this Pawn." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_GetControlRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "GetControlRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_GetControlRotation_Statics::Pawn_eventGetControlRotation_Parms), Z_Construct_UFunction_APawn_GetControlRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetControlRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetControlRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetControlRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_GetControlRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_GetControlRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics
	{
		struct Pawn_eventGetLastMovementInputVector_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventGetLastMovementInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Comment", "/**\n\x09 * Return the last input vector in world space that was processed by ConsumeMovementInputVector(), which is usually done by the Pawn or PawnMovementComponent.\n\x09 * Any user that needs to know about the input that last affected movement should use this function.\n\x09 * For example an animation update would want to use this, since by default the order of updates in a frame is:\n\x09 * PlayerController (device input) -> MovementComponent -> Pawn -> Mesh (animations)\n\x09 *\n\x09 * @return The last input vector in world space that was processed by ConsumeMovementInputVector().\n\x09 * @see AddMovementInput(), GetPendingMovementInputVector(), ConsumeMovementInputVector()\n\x09 */" },
		{ "Keywords", "GetMovementInput GetInput" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Return the last input vector in world space that was processed by ConsumeMovementInputVector(), which is usually done by the Pawn or PawnMovementComponent.\nAny user that needs to know about the input that last affected movement should use this function.\nFor example an animation update would want to use this, since by default the order of updates in a frame is:\nPlayerController (device input) -> MovementComponent -> Pawn -> Mesh (animations)\n\n@return The last input vector in world space that was processed by ConsumeMovementInputVector().\n@see AddMovementInput(), GetPendingMovementInputVector(), ConsumeMovementInputVector()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "GetLastMovementInputVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::Pawn_eventGetLastMovementInputVector_Parms), Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_GetLastMovementInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_GetLastMovementInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_GetLocalViewingPlayerController_Statics
	{
		struct Pawn_eventGetLocalViewingPlayerController_Parms
		{
			APlayerController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APawn_GetLocalViewingPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventGetLocalViewingPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_GetLocalViewingPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetLocalViewingPlayerController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetLocalViewingPlayerController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Returns local Player Controller viewing this pawn, whether it is controlling or spectating */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Returns local Player Controller viewing this pawn, whether it is controlling or spectating" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_GetLocalViewingPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "GetLocalViewingPlayerController", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_GetLocalViewingPlayerController_Statics::Pawn_eventGetLocalViewingPlayerController_Parms), Z_Construct_UFunction_APawn_GetLocalViewingPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetLocalViewingPlayerController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetLocalViewingPlayerController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetLocalViewingPlayerController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_GetLocalViewingPlayerController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_GetLocalViewingPlayerController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics
	{
		struct Pawn_eventGetMovementBaseActor_Parms
		{
			const APawn* Pawn;
			AActor* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::NewProp_Pawn_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventGetMovementBaseActor_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::NewProp_Pawn_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventGetMovementBaseActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Gets the owning actor of the Movement Base Component on which the pawn is standing. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Gets the owning actor of the Movement Base Component on which the pawn is standing." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "GetMovementBaseActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::Pawn_eventGetMovementBaseActor_Parms), Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_GetMovementBaseActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_GetMovementBaseActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_GetMovementComponent_Statics
	{
		struct Pawn_eventGetMovementComponent_Parms
		{
			UPawnMovementComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetMovementComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APawn_GetMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventGetMovementComponent_Parms, ReturnValue), Z_Construct_UClass_UPawnMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetMovementComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetMovementComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_GetMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetMovementComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetMovementComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "Tooltip", "Return our PawnMovementComponent, if we have one." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_GetMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "GetMovementComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_GetMovementComponent_Statics::Pawn_eventGetMovementComponent_Parms), Z_Construct_UFunction_APawn_GetMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetMovementComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetMovementComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetMovementComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_GetMovementComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_GetMovementComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics
	{
		struct Pawn_eventGetNavAgentLocation_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventGetNavAgentLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Basically retrieved pawn's location on navmesh */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Basically retrieved pawn's location on navmesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "GetNavAgentLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::Pawn_eventGetNavAgentLocation_Parms), Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_GetNavAgentLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_GetNavAgentLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_GetOverrideInputComponentClass_Statics
	{
		struct Pawn_eventGetOverrideInputComponentClass_Parms
		{
			TSubclassOf<UInputComponent>  ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APawn_GetOverrideInputComponentClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventGetOverrideInputComponentClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_GetOverrideInputComponentClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetOverrideInputComponentClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetOverrideInputComponentClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_GetOverrideInputComponentClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "GetOverrideInputComponentClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_GetOverrideInputComponentClass_Statics::Pawn_eventGetOverrideInputComponentClass_Parms), Z_Construct_UFunction_APawn_GetOverrideInputComponentClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetOverrideInputComponentClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetOverrideInputComponentClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetOverrideInputComponentClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_GetOverrideInputComponentClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_GetOverrideInputComponentClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics
	{
		struct Pawn_eventGetPendingMovementInputVector_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventGetPendingMovementInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Comment", "/**\n\x09 * Return the pending input vector in world space. This is the most up-to-date value of the input vector, pending ConsumeMovementInputVector() which clears it,\n\x09 * Usually only a PawnMovementComponent will want to read this value, or the Pawn itself if it is responsible for movement.\n\x09 *\n\x09 * @return The pending input vector in world space.\n\x09 * @see AddMovementInput(), GetLastMovementInputVector(), ConsumeMovementInputVector()\n\x09 */" },
		{ "Keywords", "GetMovementInput GetInput" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Return the pending input vector in world space. This is the most up-to-date value of the input vector, pending ConsumeMovementInputVector() which clears it,\nUsually only a PawnMovementComponent will want to read this value, or the Pawn itself if it is responsible for movement.\n\n@return The pending input vector in world space.\n@see AddMovementInput(), GetLastMovementInputVector(), ConsumeMovementInputVector()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "GetPendingMovementInputVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::Pawn_eventGetPendingMovementInputVector_Parms), Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_GetPendingMovementInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_GetPendingMovementInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_GetPlatformUserId_Statics
	{
		struct FPlatformUserId
		{
			int32 InternalId;
		};

		struct Pawn_eventGetPlatformUserId_Parms
		{
			FPlatformUserId ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APawn_GetPlatformUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventGetPlatformUserId_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_GetPlatformUserId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_GetPlatformUserId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_GetPlatformUserId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/**\n\x09 * Returns the Platform User ID of the PlayerController that is controlling this character.\n\x09 *\n\x09 * Returns an invalid Platform User ID if this character is not controlled by a local player.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Returns the Platform User ID of the PlayerController that is controlling this character.\n\nReturns an invalid Platform User ID if this character is not controlled by a local player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_GetPlatformUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "GetPlatformUserId", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_GetPlatformUserId_Statics::Pawn_eventGetPlatformUserId_Parms), Z_Construct_UFunction_APawn_GetPlatformUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetPlatformUserId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_GetPlatformUserId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_GetPlatformUserId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_GetPlatformUserId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_GetPlatformUserId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_IsBotControlled_Statics
	{
		struct Pawn_eventIsBotControlled_Parms
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
	void Z_Construct_UFunction_APawn_IsBotControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pawn_eventIsBotControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_IsBotControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Pawn_eventIsBotControlled_Parms), &Z_Construct_UFunction_APawn_IsBotControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_IsBotControlled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_IsBotControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_IsBotControlled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Returns true if controlled by a bot.\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Returns true if controlled by a bot." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_IsBotControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "IsBotControlled", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_IsBotControlled_Statics::Pawn_eventIsBotControlled_Parms), Z_Construct_UFunction_APawn_IsBotControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_IsBotControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_IsBotControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_IsBotControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_IsBotControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_IsBotControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_IsControlled_Statics
	{
		struct Pawn_eventIsControlled_Parms
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
	void Z_Construct_UFunction_APawn_IsControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pawn_eventIsControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_IsControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Pawn_eventIsControlled_Parms), &Z_Construct_UFunction_APawn_IsControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_IsControlled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_IsControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_IsControlled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_IsControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "IsControlled", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_IsControlled_Statics::Pawn_eventIsControlled_Parms), Z_Construct_UFunction_APawn_IsControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_IsControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_IsControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_IsControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_IsControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_IsControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_IsLocallyControlled_Statics
	{
		struct Pawn_eventIsLocallyControlled_Parms
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
	void Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pawn_eventIsLocallyControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Pawn_eventIsLocallyControlled_Parms), &Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Returns true if controlled by a local (not network) Controller.\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Returns true if controlled by a local (not network) Controller." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "IsLocallyControlled", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::Pawn_eventIsLocallyControlled_Parms), Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_IsLocallyControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_IsLocallyControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_IsLocallyViewed_Statics
	{
		struct Pawn_eventIsLocallyViewed_Parms
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
	void Z_Construct_UFunction_APawn_IsLocallyViewed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pawn_eventIsLocallyViewed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_IsLocallyViewed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Pawn_eventIsLocallyViewed_Parms), &Z_Construct_UFunction_APawn_IsLocallyViewed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_IsLocallyViewed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_IsLocallyViewed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_IsLocallyViewed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "// Is this pawn the ViewTarget of a local PlayerController?  Helpful for determining whether the pawn is\n// visible/critical for any VFX.  NOTE: Technically there may be some cases where locally controlled pawns return\n// false for this, such as if you are using a remote camera view of some sort.  But generally it will be true for\n// locally controlled pawns, and it will always be true for pawns that are being spectated in-game or in Replays.\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Is this pawn the ViewTarget of a local PlayerController?  Helpful for determining whether the pawn is\nvisible/critical for any VFX.  NOTE: Technically there may be some cases where locally controlled pawns return\nfalse for this, such as if you are using a remote camera view of some sort.  But generally it will be true for\nlocally controlled pawns, and it will always be true for pawns that are being spectated in-game or in Replays." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_IsLocallyViewed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "IsLocallyViewed", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_IsLocallyViewed_Statics::Pawn_eventIsLocallyViewed_Parms), Z_Construct_UFunction_APawn_IsLocallyViewed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_IsLocallyViewed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_IsLocallyViewed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_IsLocallyViewed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_IsLocallyViewed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_IsLocallyViewed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics
	{
		struct Pawn_eventIsMoveInputIgnored_Parms
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
	void Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pawn_eventIsMoveInputIgnored_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Pawn_eventIsMoveInputIgnored_Parms), &Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Input" },
		{ "Comment", "/** Helper to see if move input is ignored. If our controller is a PlayerController, checks Controller->IsMoveInputIgnored(). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Helper to see if move input is ignored. If our controller is a PlayerController, checks Controller->IsMoveInputIgnored()." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "IsMoveInputIgnored", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::Pawn_eventIsMoveInputIgnored_Parms), Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_IsMoveInputIgnored()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_IsMoveInputIgnored_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_IsPawnControlled_Statics
	{
		struct Pawn_eventIsPawnControlled_Parms
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
	void Z_Construct_UFunction_APawn_IsPawnControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pawn_eventIsPawnControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_IsPawnControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Pawn_eventIsPawnControlled_Parms), &Z_Construct_UFunction_APawn_IsPawnControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_IsPawnControlled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_IsPawnControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_IsPawnControlled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Check if this actor is currently being controlled at all (the actor has a valid Controller, which will be false for remote clients) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Check if this actor is currently being controlled at all (the actor has a valid Controller, which will be false for remote clients)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_IsPawnControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "IsPawnControlled", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_IsPawnControlled_Statics::Pawn_eventIsPawnControlled_Parms), Z_Construct_UFunction_APawn_IsPawnControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_IsPawnControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_IsPawnControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_IsPawnControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_IsPawnControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_IsPawnControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_IsPlayerControlled_Statics
	{
		struct Pawn_eventIsPlayerControlled_Parms
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
	void Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Pawn_eventIsPlayerControlled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Pawn_eventIsPlayerControlled_Parms), &Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Returns true if controlled by a human player (possessed by a PlayerController).\x09This returns true for players controlled by remote clients */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Returns true if controlled by a human player (possessed by a PlayerController).        This returns true for players controlled by remote clients" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "IsPlayerControlled", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::Pawn_eventIsPlayerControlled_Parms), Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_IsPlayerControlled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_IsPlayerControlled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_OnRep_Controller_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_OnRep_Controller_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when Controller is replicated */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Called when Controller is replicated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_OnRep_Controller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "OnRep_Controller", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_OnRep_Controller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_OnRep_Controller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_OnRep_Controller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_OnRep_Controller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_OnRep_PlayerState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_OnRep_PlayerState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** PlayerState Replication Notification Callback */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "PlayerState Replication Notification Callback" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_OnRep_PlayerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "OnRep_PlayerState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_OnRep_PlayerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_OnRep_PlayerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_OnRep_PlayerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_OnRep_PlayerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_PawnMakeNoise_Statics
	{
		struct Pawn_eventPawnMakeNoise_Parms
		{
			float Loudness;
			FVector NoiseLocation;
			bool bUseNoiseMakerLocation;
			AActor* NoiseMaker;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Loudness;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseLocation;
		static void NewProp_bUseNoiseMakerLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNoiseMakerLocation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NoiseMaker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_Loudness = { "Loudness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventPawnMakeNoise_Parms, Loudness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_NoiseLocation = { "NoiseLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventPawnMakeNoise_Parms, NoiseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_bUseNoiseMakerLocation_SetBit(void* Obj)
	{
		((Pawn_eventPawnMakeNoise_Parms*)Obj)->bUseNoiseMakerLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_bUseNoiseMakerLocation = { "bUseNoiseMakerLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Pawn_eventPawnMakeNoise_Parms), &Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_bUseNoiseMakerLocation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_NoiseMaker = { "NoiseMaker", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventPawnMakeNoise_Parms, NoiseMaker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_Loudness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_NoiseLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_bUseNoiseMakerLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::NewProp_NoiseMaker,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/**\n\x09 * Inform AIControllers that you've made a noise they might hear (they are sent a HearNoise message if they have bHearNoises==true)\n\x09 * The instigator of this sound is the pawn which is used to call MakeNoise.\n\x09 *\n\x09 * @param Loudness - is the relative loudness of this noise (range 0.0 to 1.0).  Directly affects the hearing range specified by the AI's HearingThreshold.\n\x09 * @param NoiseLocation - Position of noise source.  If zero vector, use the actor's location.\n\x09 * @param bUseNoiseMakerLocation - If true, use the location of the NoiseMaker rather than NoiseLocation.  If false, use NoiseLocation.\n\x09 * @param NoiseMaker - Which actor is the source of the noise.  Not to be confused with the Noise Instigator, which is responsible for the noise (and is the pawn on which this function is called).  If not specified, the pawn instigating the noise will be used as the NoiseMaker\n\x09 */" },
		{ "CPP_Default_bUseNoiseMakerLocation", "true" },
		{ "CPP_Default_NoiseMaker", "None" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Inform AIControllers that you've made a noise they might hear (they are sent a HearNoise message if they have bHearNoises==true)\nThe instigator of this sound is the pawn which is used to call MakeNoise.\n\n@param Loudness - is the relative loudness of this noise (range 0.0 to 1.0).  Directly affects the hearing range specified by the AI's HearingThreshold.\n@param NoiseLocation - Position of noise source.  If zero vector, use the actor's location.\n@param bUseNoiseMakerLocation - If true, use the location of the NoiseMaker rather than NoiseLocation.  If false, use NoiseLocation.\n@param NoiseMaker - Which actor is the source of the noise.  Not to be confused with the Noise Instigator, which is responsible for the noise (and is the pawn on which this function is called).  If not specified, the pawn instigating the noise will be used as the NoiseMaker" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "PawnMakeNoise", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::Pawn_eventPawnMakeNoise_Parms), Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_PawnMakeNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_PawnMakeNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_ReceiveControllerChanged_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldController;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APawn_ReceiveControllerChanged_Statics::NewProp_OldController = { "OldController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventReceiveControllerChanged_Parms, OldController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APawn_ReceiveControllerChanged_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventReceiveControllerChanged_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_ReceiveControllerChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_ReceiveControllerChanged_Statics::NewProp_OldController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_ReceiveControllerChanged_Statics::NewProp_NewController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_ReceiveControllerChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called after a pawn's controller has changed, on the server and owning client. This will happen at the same time as the delegate on GameInstance */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Event called after a pawn's controller has changed, on the server and owning client. This will happen at the same time as the delegate on GameInstance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_ReceiveControllerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "ReceiveControllerChanged", nullptr, nullptr, sizeof(Pawn_eventReceiveControllerChanged_Parms), Z_Construct_UFunction_APawn_ReceiveControllerChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_ReceiveControllerChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_ReceiveControllerChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_ReceiveControllerChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_ReceiveControllerChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_ReceiveControllerChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_ReceivePossessed_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APawn_ReceivePossessed_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventReceivePossessed_Parms, NewController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_ReceivePossessed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_ReceivePossessed_Statics::NewProp_NewController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_ReceivePossessed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called when the Pawn is possessed by a Controller. Only called on the server (or in standalone) */" },
		{ "DisplayName", "Possessed" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Event called when the Pawn is possessed by a Controller. Only called on the server (or in standalone)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_ReceivePossessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "ReceivePossessed", nullptr, nullptr, sizeof(Pawn_eventReceivePossessed_Parms), Z_Construct_UFunction_APawn_ReceivePossessed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_ReceivePossessed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020804, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_ReceivePossessed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_ReceivePossessed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_ReceivePossessed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_ReceivePossessed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_ReceiveRestarted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_ReceiveRestarted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called after a pawn has been restarted, usually by a possession change. This is called on the server for all pawns and the owning client for player pawns */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Event called after a pawn has been restarted, usually by a possession change. This is called on the server for all pawns and the owning client for player pawns" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_ReceiveRestarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "ReceiveRestarted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_ReceiveRestarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_ReceiveRestarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_ReceiveRestarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_ReceiveRestarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::NewProp_OldController = { "OldController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Pawn_eventReceiveUnpossessed_Parms, OldController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::NewProp_OldController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called when the Pawn is no longer possessed by a Controller. Only called on the server (or in standalone) */" },
		{ "DisplayName", "Unpossessed" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Event called when the Pawn is no longer possessed by a Controller. Only called on the server (or in standalone)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "ReceiveUnpossessed", nullptr, nullptr, sizeof(Pawn_eventReceiveUnpossessed_Parms), Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020804, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_ReceiveUnpossessed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_ReceiveUnpossessed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics
	{
		struct Pawn_eventSetCanAffectNavigationGeneration_Parms
		{
			bool bNewValue;
			bool bForceUpdate;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static void NewProp_bForceUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUpdate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((Pawn_eventSetCanAffectNavigationGeneration_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Pawn_eventSetCanAffectNavigationGeneration_Parms), &Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::NewProp_bForceUpdate_SetBit(void* Obj)
	{
		((Pawn_eventSetCanAffectNavigationGeneration_Parms*)Obj)->bForceUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::NewProp_bForceUpdate = { "bForceUpdate", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(Pawn_eventSetCanAffectNavigationGeneration_Parms), &Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::NewProp_bForceUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::NewProp_bNewValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::NewProp_bForceUpdate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bForceUpdate" },
		{ "Category", "AI|Navigation" },
		{ "Comment", "/**\n\x09 * Use SetCanAffectNavigationGeneration to change this value at runtime.\n\x09 * Note that calling this function at runtime will result in any navigation change only if runtime navigation generation is enabled.\n\x09 */" },
		{ "CPP_Default_bForceUpdate", "false" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Use SetCanAffectNavigationGeneration to change this value at runtime.\nNote that calling this function at runtime will result in any navigation change only if runtime navigation generation is enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "SetCanAffectNavigationGeneration", nullptr, nullptr, sizeof(Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::Pawn_eventSetCanAffectNavigationGeneration_Parms), Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APawn_SpawnDefaultController_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APawn_SpawnDefaultController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Spawn default controller for this Pawn, and get possessed by it. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Spawn default controller for this Pawn, and get possessed by it." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APawn_SpawnDefaultController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APawn, nullptr, "SpawnDefaultController", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APawn_SpawnDefaultController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APawn_SpawnDefaultController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APawn_SpawnDefaultController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APawn_SpawnDefaultController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APawn);
	UClass* Z_Construct_UClass_APawn_NoRegister()
	{
		return APawn::StaticClass();
	}
	struct Z_Construct_UClass_APawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRotationPitch_MetaData[];
#endif
		static void NewProp_bUseControllerRotationPitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRotationPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRotationYaw_MetaData[];
#endif
		static void NewProp_bUseControllerRotationYaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRotationYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseControllerRotationRoll_MetaData[];
#endif
		static void NewProp_bUseControllerRotationRoll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseControllerRotationRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanAffectNavigationGeneration_MetaData[];
#endif
		static void NewProp_bCanAffectNavigationGeneration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAffectNavigationGeneration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocalViewTarget_MetaData[];
#endif
		static void NewProp_bIsLocalViewTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocalViewTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseEyeHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseEyeHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoPossessPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoPossessPlayer;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoPossessAI_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoPossessAI_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoPossessAI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteViewPitch_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RemoteViewPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIControllerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AIControllerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastHitBy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LastHitBy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Controller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviousController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReceiveControllerChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ReceiveControllerChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReceiveRestartedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ReceiveRestartedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlInputVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ControlInputVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastControlInputVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastControlInputVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideInputComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OverrideInputComponentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APawn_AddControllerPitchInput, "AddControllerPitchInput" }, // 1200396043
		{ &Z_Construct_UFunction_APawn_AddControllerRollInput, "AddControllerRollInput" }, // 1846464766
		{ &Z_Construct_UFunction_APawn_AddControllerYawInput, "AddControllerYawInput" }, // 1712213582
		{ &Z_Construct_UFunction_APawn_AddMovementInput, "AddMovementInput" }, // 2003002055
		{ &Z_Construct_UFunction_APawn_ConsumeMovementInputVector, "ConsumeMovementInputVector" }, // 2202543513
		{ &Z_Construct_UFunction_APawn_DetachFromControllerPendingDestroy, "DetachFromControllerPendingDestroy" }, // 2995622035
		{ &Z_Construct_UFunction_APawn_GetBaseAimRotation, "GetBaseAimRotation" }, // 2694626624
		{ &Z_Construct_UFunction_APawn_GetController, "GetController" }, // 972253628
		{ &Z_Construct_UFunction_APawn_GetControlRotation, "GetControlRotation" }, // 1162706238
		{ &Z_Construct_UFunction_APawn_GetLastMovementInputVector, "GetLastMovementInputVector" }, // 2865496526
		{ &Z_Construct_UFunction_APawn_GetLocalViewingPlayerController, "GetLocalViewingPlayerController" }, // 3465148816
		{ &Z_Construct_UFunction_APawn_GetMovementBaseActor, "GetMovementBaseActor" }, // 1975359444
		{ &Z_Construct_UFunction_APawn_GetMovementComponent, "GetMovementComponent" }, // 457868151
		{ &Z_Construct_UFunction_APawn_GetNavAgentLocation, "GetNavAgentLocation" }, // 2481183856
		{ &Z_Construct_UFunction_APawn_GetOverrideInputComponentClass, "GetOverrideInputComponentClass" }, // 3466201540
		{ &Z_Construct_UFunction_APawn_GetPendingMovementInputVector, "GetPendingMovementInputVector" }, // 3464702809
		{ &Z_Construct_UFunction_APawn_GetPlatformUserId, "GetPlatformUserId" }, // 1185134210
		{ &Z_Construct_UFunction_APawn_IsBotControlled, "IsBotControlled" }, // 2817043920
		{ &Z_Construct_UFunction_APawn_IsControlled, "IsControlled" }, // 4189637062
		{ &Z_Construct_UFunction_APawn_IsLocallyControlled, "IsLocallyControlled" }, // 1442717780
		{ &Z_Construct_UFunction_APawn_IsLocallyViewed, "IsLocallyViewed" }, // 1289852206
		{ &Z_Construct_UFunction_APawn_IsMoveInputIgnored, "IsMoveInputIgnored" }, // 1210437116
		{ &Z_Construct_UFunction_APawn_IsPawnControlled, "IsPawnControlled" }, // 591649324
		{ &Z_Construct_UFunction_APawn_IsPlayerControlled, "IsPlayerControlled" }, // 1175025740
		{ &Z_Construct_UFunction_APawn_OnRep_Controller, "OnRep_Controller" }, // 4205938044
		{ &Z_Construct_UFunction_APawn_OnRep_PlayerState, "OnRep_PlayerState" }, // 883106868
		{ &Z_Construct_UFunction_APawn_PawnMakeNoise, "PawnMakeNoise" }, // 2755174022
		{ &Z_Construct_UFunction_APawn_ReceiveControllerChanged, "ReceiveControllerChanged" }, // 337916831
		{ &Z_Construct_UFunction_APawn_ReceivePossessed, "ReceivePossessed" }, // 2756032593
		{ &Z_Construct_UFunction_APawn_ReceiveRestarted, "ReceiveRestarted" }, // 2508224120
		{ &Z_Construct_UFunction_APawn_ReceiveUnpossessed, "ReceiveUnpossessed" }, // 3863281213
		{ &Z_Construct_UFunction_APawn_SetCanAffectNavigationGeneration, "SetCanAffectNavigationGeneration" }, // 3876058648
		{ &Z_Construct_UFunction_APawn_SpawnDefaultController, "SpawnDefaultController" }, // 1726769363
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * Pawn is the base class of all actors that can be possessed by players or AI.\n * They are the physical representations of players and creatures in a level.\n *\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Pawn/\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameFramework/Pawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "A Pawn is an actor that can be 'possessed' and receive input from a controller." },
		{ "ToolTip", "Pawn is the base class of all actors that can be possessed by players or AI.\nThey are the physical representations of players and creatures in a level.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Pawn/" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationPitch_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** If true, this Pawn's pitch will be updated to match the Controller's ControlRotation pitch, if controlled by a PlayerController. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "If true, this Pawn's pitch will be updated to match the Controller's ControlRotation pitch, if controlled by a PlayerController." },
	};
#endif
	void Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationPitch_SetBit(void* Obj)
	{
		((APawn*)Obj)->bUseControllerRotationPitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationPitch = { "bUseControllerRotationPitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APawn), &Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationPitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationYaw_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** If true, this Pawn's yaw will be updated to match the Controller's ControlRotation yaw, if controlled by a PlayerController. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "If true, this Pawn's yaw will be updated to match the Controller's ControlRotation yaw, if controlled by a PlayerController." },
	};
#endif
	void Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationYaw_SetBit(void* Obj)
	{
		((APawn*)Obj)->bUseControllerRotationYaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationYaw = { "bUseControllerRotationYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APawn), &Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationRoll_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** If true, this Pawn's roll will be updated to match the Controller's ControlRotation roll, if controlled by a PlayerController. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "If true, this Pawn's roll will be updated to match the Controller's ControlRotation roll, if controlled by a PlayerController." },
	};
#endif
	void Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationRoll_SetBit(void* Obj)
	{
		((APawn*)Obj)->bUseControllerRotationRoll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationRoll = { "bUseControllerRotationRoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APawn), &Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationRoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationRoll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_bCanAffectNavigationGeneration_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/**\n\x09 *\x09If set to false (default) given pawn instance will never affect navigation generation (but components could).\n\x09 *\x09Setting it to true will result in using regular AActor's navigation relevancy \n\x09 *\x09""calculation to check if this pawn instance should affect navigation generation.\n\x09 *\x09@note Use SetCanAffectNavigationGeneration() to change this value at runtime.\n\x09 *\x09@note Modifying this value at runtime will result in any navigation change only if runtime navigation generation is enabled.\n\x09 *\x09@note Override UpdateNavigationRelevance() to propagate the flag to the desired components.\n\x09 *\x09@see SetCanAffectNavigationGeneration(), UpdateNavigationRelevance()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "If set to false (default) given pawn instance will never affect navigation generation (but components could).\nSetting it to true will result in using regular AActor's navigation relevancy\ncalculation to check if this pawn instance should affect navigation generation.\n@note Use SetCanAffectNavigationGeneration() to change this value at runtime.\n@note Modifying this value at runtime will result in any navigation change only if runtime navigation generation is enabled.\n@note Override UpdateNavigationRelevance() to propagate the flag to the desired components.\n@see SetCanAffectNavigationGeneration(), UpdateNavigationRelevance()" },
	};
#endif
	void Z_Construct_UClass_APawn_Statics::NewProp_bCanAffectNavigationGeneration_SetBit(void* Obj)
	{
		((APawn*)Obj)->bCanAffectNavigationGeneration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_bCanAffectNavigationGeneration = { "bCanAffectNavigationGeneration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APawn), &Z_Construct_UClass_APawn_Statics::NewProp_bCanAffectNavigationGeneration_SetBit, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_bCanAffectNavigationGeneration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_bCanAffectNavigationGeneration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_bIsLocalViewTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
	};
#endif
	void Z_Construct_UClass_APawn_Statics::NewProp_bIsLocalViewTarget_SetBit(void* Obj)
	{
		((APawn*)Obj)->bIsLocalViewTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_bIsLocalViewTarget = { "bIsLocalViewTarget", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(APawn), &Z_Construct_UClass_APawn_Statics::NewProp_bIsLocalViewTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_bIsLocalViewTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_bIsLocalViewTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_BaseEyeHeight_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base eye height above collision center. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Base eye height above collision center." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_BaseEyeHeight = { "BaseEyeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APawn, BaseEyeHeight), METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_BaseEyeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_BaseEyeHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessPlayer_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/**\n\x09 * Determines which PlayerController, if any, should automatically possess the pawn when the level starts or when the pawn is spawned.\n\x09 * @see AutoPossessAI\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Determines which PlayerController, if any, should automatically possess the pawn when the level starts or when the pawn is spawned.\n@see AutoPossessAI" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessPlayer = { "AutoPossessPlayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APawn, AutoPossessPlayer), Z_Construct_UEnum_Engine_EAutoReceiveInput, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessPlayer_MetaData)) }; // 287342573
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessAI_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessAI_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/**\n\x09 * Determines when the Pawn creates and is possessed by an AI Controller (on level start, when spawned, etc).\n\x09 * Only possible if AIControllerClassRef is set, and ignored if AutoPossessPlayer is enabled.\n\x09 * @see AutoPossessPlayer\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Determines when the Pawn creates and is possessed by an AI Controller (on level start, when spawned, etc).\nOnly possible if AIControllerClassRef is set, and ignored if AutoPossessPlayer is enabled.\n@see AutoPossessPlayer" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessAI = { "AutoPossessAI", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APawn, AutoPossessAI), Z_Construct_UEnum_Engine_EAutoPossessAI, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessAI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessAI_MetaData)) }; // 988121265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_RemoteViewPitch_MetaData[] = {
		{ "Comment", "/** Replicated so we can see where remote clients are looking. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Replicated so we can see where remote clients are looking." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APawn_Statics::NewProp_RemoteViewPitch = { "RemoteViewPitch", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APawn, RemoteViewPitch), nullptr, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_RemoteViewPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_RemoteViewPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_AIControllerClass_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Default class to use when pawn is controlled by AI. */" },
		{ "DisplayName", "AI Controller Class" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Default class to use when pawn is controlled by AI." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_AIControllerClass = { "AIControllerClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APawn, AIControllerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_AIControllerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_AIControllerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_PlayerState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pawn" },
		{ "Comment", "/** If Pawn is possessed by a player, points to its Player State.  Needed for network play as controllers are not replicated to clients. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "If Pawn is possessed by a player, points to its Player State.  Needed for network play as controllers are not replicated to clients." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_PlayerState = { "PlayerState", "OnRep_PlayerState", (EPropertyFlags)0x0044000100000034, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APawn, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_PlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_PlayerState_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_LastHitBy_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Controller of the last Actor that caused us damage. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Controller of the last Actor that caused us damage." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_LastHitBy = { "LastHitBy", nullptr, (EPropertyFlags)0x0014000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APawn, LastHitBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_LastHitBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_LastHitBy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_Controller_MetaData[] = {
		{ "Comment", "/** Controller currently possessing this Actor */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Controller currently possessing this Actor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_Controller = { "Controller", "OnRep_Controller", (EPropertyFlags)0x0014000100000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APawn, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_Controller_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_PreviousController_MetaData[] = {
		{ "Comment", "/** Previous controller that was controlling this pawn since the last controller change notification */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Previous controller that was controlling this pawn since the last controller change notification" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_PreviousController = { "PreviousController", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APawn, PreviousController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_PreviousController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_PreviousController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_ReceiveControllerChangedDelegate_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Event called after a pawn's controller has changed, on the server and owning client. This will happen at the same time as the delegate on GameInstance */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Event called after a pawn's controller has changed, on the server and owning client. This will happen at the same time as the delegate on GameInstance" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APawn_Statics::NewProp_ReceiveControllerChangedDelegate = { "ReceiveControllerChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APawn, ReceiveControllerChangedDelegate), Z_Construct_USparseDelegateFunction_Engine_PawnControllerChangedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_ReceiveControllerChangedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_ReceiveControllerChangedDelegate_MetaData)) }; // 3591829745
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_ReceiveRestartedDelegate_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Event called after a pawn has been restarted, usually by a possession change. This is called on the server for all pawns and the owning client for player pawns */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Event called after a pawn has been restarted, usually by a possession change. This is called on the server for all pawns and the owning client for player pawns" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APawn_Statics::NewProp_ReceiveRestartedDelegate = { "ReceiveRestartedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::SparseMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APawn, ReceiveRestartedDelegate), Z_Construct_USparseDelegateFunction_Engine_PawnRestartedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_ReceiveRestartedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_ReceiveRestartedDelegate_MetaData)) }; // 4182522096
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_ControlInputVector_MetaData[] = {
		{ "Comment", "/**\n\x09 * Accumulated control input vector, stored in world space. This is the pending input, which is cleared (zeroed) once consumed.\n\x09 * @see GetPendingMovementInputVector(), AddMovementInput()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "Accumulated control input vector, stored in world space. This is the pending input, which is cleared (zeroed) once consumed.\n@see GetPendingMovementInputVector(), AddMovementInput()" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_ControlInputVector = { "ControlInputVector", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APawn, ControlInputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_ControlInputVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_ControlInputVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_LastControlInputVector_MetaData[] = {
		{ "Comment", "/**\n\x09 * The last control input vector that was processed by ConsumeMovementInputVector().\n\x09 * @see GetLastMovementInputVector()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "The last control input vector that was processed by ConsumeMovementInputVector().\n@see GetLastMovementInputVector()" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_LastControlInputVector = { "LastControlInputVector", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APawn, LastControlInputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_LastControlInputVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_LastControlInputVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APawn_Statics::NewProp_OverrideInputComponentClass_MetaData[] = {
		{ "Category", "Pawn|Input" },
		{ "Comment", "/** If set, then this InputComponent class will be used instead of the Input Settings' DefaultInputComponentClass */" },
		{ "ModuleRelativePath", "Classes/GameFramework/Pawn.h" },
		{ "ToolTip", "If set, then this InputComponent class will be used instead of the Input Settings' DefaultInputComponentClass" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APawn_Statics::NewProp_OverrideInputComponentClass = { "OverrideInputComponentClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APawn, OverrideInputComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::NewProp_OverrideInputComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::NewProp_OverrideInputComponentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_bUseControllerRotationRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_bCanAffectNavigationGeneration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_bIsLocalViewTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_BaseEyeHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessAI_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_AutoPossessAI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_RemoteViewPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_AIControllerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_PlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_LastHitBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_Controller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_PreviousController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_ReceiveControllerChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_ReceiveRestartedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_ControlInputVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_LastControlInputVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APawn_Statics::NewProp_OverrideInputComponentClass,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavAgentInterface_NoRegister, (int32)VTABLE_OFFSET(APawn, INavAgentInterface), false },  // 4068322959
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APawn_Statics::ClassParams = {
		&APawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APawn_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APawn()
	{
		if (!Z_Registration_Info_UClass_APawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APawn.OuterSingleton, Z_Construct_UClass_APawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APawn.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<APawn>()
	{
		return APawn::StaticClass();
	}

	void APawn::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_RemoteViewPitch(TEXT("RemoteViewPitch"));
		static const FName Name_PlayerState(TEXT("PlayerState"));
		static const FName Name_Controller(TEXT("Controller"));

		const bool bIsValid = true
			&& Name_RemoteViewPitch == ClassReps[(int32)ENetFields_Private::RemoteViewPitch].Property->GetFName()
			&& Name_PlayerState == ClassReps[(int32)ENetFields_Private::PlayerState].Property->GetFName()
			&& Name_Controller == ClassReps[(int32)ENetFields_Private::Controller].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APawn"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APawn);
	APawn::~APawn() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APawn, APawn::StaticClass, TEXT("APawn"), &Z_Registration_Info_UClass_APawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APawn), 3147002835U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_899316291(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Pawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
