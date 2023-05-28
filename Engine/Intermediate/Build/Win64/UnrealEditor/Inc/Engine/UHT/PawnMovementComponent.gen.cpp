// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnMovementComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UPawnMovementComponent::execGetPawnOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APawn**)Z_Param__Result=P_THIS->GetPawnOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPawnMovementComponent::execIsMoveInputIgnored)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMoveInputIgnored();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPawnMovementComponent::execConsumeInputVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ConsumeInputVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPawnMovementComponent::execGetLastInputVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetLastInputVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPawnMovementComponent::execGetPendingInputVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPendingInputVector();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPawnMovementComponent::execAddInputVector)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldVector);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInputVector(Z_Param_WorldVector,Z_Param_bForce);
		P_NATIVE_END;
	}
	void UPawnMovementComponent::StaticRegisterNativesUPawnMovementComponent()
	{
		UClass* Class = UPawnMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInputVector", &UPawnMovementComponent::execAddInputVector },
			{ "ConsumeInputVector", &UPawnMovementComponent::execConsumeInputVector },
			{ "GetLastInputVector", &UPawnMovementComponent::execGetLastInputVector },
			{ "GetPawnOwner", &UPawnMovementComponent::execGetPawnOwner },
			{ "GetPendingInputVector", &UPawnMovementComponent::execGetPendingInputVector },
			{ "IsMoveInputIgnored", &UPawnMovementComponent::execIsMoveInputIgnored },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics
	{
		struct PawnMovementComponent_eventAddInputVector_Parms
		{
			FVector WorldVector;
			bool bForce;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldVector;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::NewProp_WorldVector = { "WorldVector", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnMovementComponent_eventAddInputVector_Parms, WorldVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((PawnMovementComponent_eventAddInputVector_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PawnMovementComponent_eventAddInputVector_Parms), &Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::NewProp_WorldVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|PawnMovement" },
		{ "Comment", "/**\n\x09 * Adds the given vector to the accumulated input in world space. Input vectors are usually between 0 and 1 in magnitude. \n\x09 * They are accumulated during a frame then applied as acceleration during the movement update.\n\x09 *\n\x09 * @param WorldDirection\x09""Direction in world space to apply input\n\x09 * @param ScaleValue\x09\x09Scale to apply to input. This can be used for analog input, ie a value of 0.5 applies half the normal value.\n\x09 * @param bForce\x09\x09\x09If true always add the input, ignoring the result of IsMoveInputIgnored().\n\x09 * @see APawn::AddMovementInput()\n\x09 */" },
		{ "CPP_Default_bForce", "false" },
		{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
		{ "ToolTip", "Adds the given vector to the accumulated input in world space. Input vectors are usually between 0 and 1 in magnitude.\nThey are accumulated during a frame then applied as acceleration during the movement update.\n\n@param WorldDirection        Direction in world space to apply input\n@param ScaleValue            Scale to apply to input. This can be used for analog input, ie a value of 0.5 applies half the normal value.\n@param bForce                        If true always add the input, ignoring the result of IsMoveInputIgnored().\n@see APawn::AddMovementInput()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, nullptr, "AddInputVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::PawnMovementComponent_eventAddInputVector_Parms), Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnMovementComponent_AddInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnMovementComponent_AddInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics
	{
		struct PawnMovementComponent_eventConsumeInputVector_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnMovementComponent_eventConsumeInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|PawnMovement" },
		{ "Comment", "/* Returns the pending input vector and resets it to zero.\n\x09 * This should be used during a movement update (by the Pawn or PawnMovementComponent) to prevent accumulation of control input between frames.\n\x09 * Copies the pending input vector to the saved input vector (GetLastMovementInputVector()).\n\x09 * @return The pending input vector.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
		{ "ToolTip", "Returns the pending input vector and resets it to zero.\n       * This should be used during a movement update (by the Pawn or PawnMovementComponent) to prevent accumulation of control input between frames.\n       * Copies the pending input vector to the saved input vector (GetLastMovementInputVector()).\n       * @return The pending input vector." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, nullptr, "ConsumeInputVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::PawnMovementComponent_eventConsumeInputVector_Parms), Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics
	{
		struct PawnMovementComponent_eventGetLastInputVector_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnMovementComponent_eventGetLastInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|PawnMovement" },
		{ "Comment", "/**\n\x09* Return the last input vector in world space that was processed by ConsumeInputVector(), which is usually done by the Pawn or PawnMovementComponent.\n\x09* Any user that needs to know about the input that last affected movement should use this function.\n\x09* @return The last input vector in world space that was processed by ConsumeInputVector().\n\x09* @see AddInputVector(), ConsumeInputVector(), GetPendingInputVector()\n\x09*/" },
		{ "Keywords", "GetInput" },
		{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
		{ "ToolTip", "Return the last input vector in world space that was processed by ConsumeInputVector(), which is usually done by the Pawn or PawnMovementComponent.\nAny user that needs to know about the input that last affected movement should use this function.\n@return The last input vector in world space that was processed by ConsumeInputVector().\n@see AddInputVector(), ConsumeInputVector(), GetPendingInputVector()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, nullptr, "GetLastInputVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::PawnMovementComponent_eventGetLastInputVector_Parms), Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics
	{
		struct PawnMovementComponent_eventGetPawnOwner_Parms
		{
			APawn* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnMovementComponent_eventGetPawnOwner_Parms, ReturnValue), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|PawnMovement" },
		{ "Comment", "/** Return the Pawn that owns UpdatedComponent. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
		{ "ToolTip", "Return the Pawn that owns UpdatedComponent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, nullptr, "GetPawnOwner", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::PawnMovementComponent_eventGetPawnOwner_Parms), Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics
	{
		struct PawnMovementComponent_eventGetPendingInputVector_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PawnMovementComponent_eventGetPendingInputVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|PawnMovement" },
		{ "Comment", "/**\n\x09 * Return the pending input vector in world space. This is the most up-to-date value of the input vector, pending ConsumeMovementInputVector() which clears it.\n\x09 * PawnMovementComponents implementing movement usually want to use either this or ConsumeInputVector() as these functions represent the most recent state of input.\n\x09 * @return The pending input vector in world space.\n\x09 * @see AddInputVector(), ConsumeInputVector(), GetLastInputVector()\n\x09 */" },
		{ "Keywords", "GetInput" },
		{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
		{ "ToolTip", "Return the pending input vector in world space. This is the most up-to-date value of the input vector, pending ConsumeMovementInputVector() which clears it.\nPawnMovementComponents implementing movement usually want to use either this or ConsumeInputVector() as these functions represent the most recent state of input.\n@return The pending input vector in world space.\n@see AddInputVector(), ConsumeInputVector(), GetLastInputVector()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, nullptr, "GetPendingInputVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::PawnMovementComponent_eventGetPendingInputVector_Parms), Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics
	{
		struct PawnMovementComponent_eventIsMoveInputIgnored_Parms
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
	void Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PawnMovementComponent_eventIsMoveInputIgnored_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PawnMovementComponent_eventIsMoveInputIgnored_Parms), &Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|PawnMovement" },
		{ "Comment", "/** Helper to see if move input is ignored. If there is no Pawn or UpdatedComponent, returns true, otherwise defers to the Pawn's implementation of IsMoveInputIgnored(). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
		{ "ToolTip", "Helper to see if move input is ignored. If there is no Pawn or UpdatedComponent, returns true, otherwise defers to the Pawn's implementation of IsMoveInputIgnored()." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnMovementComponent, nullptr, "IsMoveInputIgnored", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::PawnMovementComponent_eventIsMoveInputIgnored_Parms), Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnMovementComponent);
	UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister()
	{
		return UPawnMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPawnMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PawnOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPawnMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnMovementComponent_AddInputVector, "AddInputVector" }, // 3699925107
		{ &Z_Construct_UFunction_UPawnMovementComponent_ConsumeInputVector, "ConsumeInputVector" }, // 4002044710
		{ &Z_Construct_UFunction_UPawnMovementComponent_GetLastInputVector, "GetLastInputVector" }, // 3888675307
		{ &Z_Construct_UFunction_UPawnMovementComponent_GetPawnOwner, "GetPawnOwner" }, // 3224915801
		{ &Z_Construct_UFunction_UPawnMovementComponent_GetPendingInputVector, "GetPendingInputVector" }, // 2161198771
		{ &Z_Construct_UFunction_UPawnMovementComponent_IsMoveInputIgnored, "IsMoveInputIgnored" }, // 1146547689
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * PawnMovementComponent can be used to update movement for an associated Pawn.\n * It also provides ways to accumulate and read directional input in a generic way (with AddInputVector(), ConsumeInputVector(), etc).\n * @see APawn\n */" },
		{ "IncludePath", "GameFramework/PawnMovementComponent.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
		{ "ToolTip", "PawnMovementComponent can be used to update movement for an associated Pawn.\nIt also provides ways to accumulate and read directional input in a generic way (with AddInputVector(), ConsumeInputVector(), etc).\n@see APawn" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnMovementComponent_Statics::NewProp_PawnOwner_MetaData[] = {
		{ "Comment", "/** Pawn that owns this component. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PawnMovementComponent.h" },
		{ "ToolTip", "Pawn that owns this component." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPawnMovementComponent_Statics::NewProp_PawnOwner = { "PawnOwner", nullptr, (EPropertyFlags)0x0024080000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPawnMovementComponent, PawnOwner), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPawnMovementComponent_Statics::NewProp_PawnOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnMovementComponent_Statics::NewProp_PawnOwner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnMovementComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnMovementComponent_Statics::NewProp_PawnOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnMovementComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnMovementComponent_Statics::ClassParams = {
		&UPawnMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPawnMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPawnMovementComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UPawnMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPawnMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnMovementComponent()
	{
		if (!Z_Registration_Info_UClass_UPawnMovementComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnMovementComponent.OuterSingleton, Z_Construct_UClass_UPawnMovementComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPawnMovementComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPawnMovementComponent>()
	{
		return UPawnMovementComponent::StaticClass();
	}
	UPawnMovementComponent::UPawnMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnMovementComponent);
	UPawnMovementComponent::~UPawnMovementComponent() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPawnMovementComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPawnMovementComponent, UPawnMovementComponent::StaticClass, TEXT("UPawnMovementComponent"), &Z_Registration_Info_UClass_UPawnMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnMovementComponent), 3106486816U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_1971196665(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PawnMovementComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
