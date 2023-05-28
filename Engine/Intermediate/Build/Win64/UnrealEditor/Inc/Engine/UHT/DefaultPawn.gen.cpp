// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(ADefaultPawn::execLookUpAtRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookUpAtRate(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultPawn::execTurnAtRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TurnAtRate(Z_Param_Rate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultPawn::execMoveUp_World)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveUp_World(Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultPawn::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADefaultPawn::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_Val);
		P_NATIVE_END;
	}
	void ADefaultPawn::StaticRegisterNativesADefaultPawn()
	{
		UClass* Class = ADefaultPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LookUpAtRate", &ADefaultPawn::execLookUpAtRate },
			{ "MoveForward", &ADefaultPawn::execMoveForward },
			{ "MoveRight", &ADefaultPawn::execMoveRight },
			{ "MoveUp_World", &ADefaultPawn::execMoveUp_World },
			{ "TurnAtRate", &ADefaultPawn::execTurnAtRate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics
	{
		struct DefaultPawn_eventLookUpAtRate_Parms
		{
			float Rate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DefaultPawn_eventLookUpAtRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/**\n\x09* Called via input to look up at a given rate (or down if Rate is negative).\n\x09* @param Rate\x09This is a normalized rate, i.e. 1.0 means 100% of desired turn rate\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "Called via input to look up at a given rate (or down if Rate is negative).\n@param Rate   This is a normalized rate, i.e. 1.0 means 100% of desired turn rate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultPawn, nullptr, "LookUpAtRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::DefaultPawn_eventLookUpAtRate_Parms), Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultPawn_LookUpAtRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefaultPawn_LookUpAtRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics
	{
		struct DefaultPawn_eventMoveForward_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DefaultPawn_eventMoveForward_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/**\n\x09 * Input callback to move forward in local space (or backward if Val is negative).\n\x09 * @param Val Amount of movement in the forward direction (or backward if negative).\n\x09 * @see APawn::AddMovementInput()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "Input callback to move forward in local space (or backward if Val is negative).\n@param Val Amount of movement in the forward direction (or backward if negative).\n@see APawn::AddMovementInput()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultPawn, nullptr, "MoveForward", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::DefaultPawn_eventMoveForward_Parms), Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultPawn_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefaultPawn_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics
	{
		struct DefaultPawn_eventMoveRight_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DefaultPawn_eventMoveRight_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/**\n\x09 * Input callback to strafe right in local space (or left if Val is negative).\n\x09 * @param Val Amount of movement in the right direction (or left if negative).\n\x09 * @see APawn::AddMovementInput()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "Input callback to strafe right in local space (or left if Val is negative).\n@param Val Amount of movement in the right direction (or left if negative).\n@see APawn::AddMovementInput()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultPawn, nullptr, "MoveRight", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::DefaultPawn_eventMoveRight_Parms), Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultPawn_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefaultPawn_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics
	{
		struct DefaultPawn_eventMoveUp_World_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DefaultPawn_eventMoveUp_World_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/**\n\x09 * Input callback to move up in world space (or down if Val is negative).\n\x09 * @param Val Amount of movement in the world up direction (or down if negative).\n\x09 * @see APawn::AddMovementInput()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "Input callback to move up in world space (or down if Val is negative).\n@param Val Amount of movement in the world up direction (or down if negative).\n@see APawn::AddMovementInput()" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultPawn, nullptr, "MoveUp_World", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::DefaultPawn_eventMoveUp_World_Parms), Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultPawn_MoveUp_World()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefaultPawn_MoveUp_World_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics
	{
		struct DefaultPawn_eventTurnAtRate_Parms
		{
			float Rate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DefaultPawn_eventTurnAtRate_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::NewProp_Rate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/**\n\x09 * Called via input to turn at a given rate.\n\x09 * @param Rate\x09This is a normalized rate, i.e. 1.0 means 100% of desired turn rate\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "Called via input to turn at a given rate.\n@param Rate  This is a normalized rate, i.e. 1.0 means 100% of desired turn rate" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultPawn, nullptr, "TurnAtRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::DefaultPawn_eventTurnAtRate_Parms), Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultPawn_TurnAtRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefaultPawn_TurnAtRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefaultPawn);
	UClass* Z_Construct_UClass_ADefaultPawn_NoRegister()
	{
		return ADefaultPawn::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddDefaultMovementBindings_MetaData[];
#endif
		static void NewProp_bAddDefaultMovementBindings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddDefaultMovementBindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADefaultPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefaultPawn_LookUpAtRate, "LookUpAtRate" }, // 2940669922
		{ &Z_Construct_UFunction_ADefaultPawn_MoveForward, "MoveForward" }, // 3514084086
		{ &Z_Construct_UFunction_ADefaultPawn_MoveRight, "MoveRight" }, // 2108332565
		{ &Z_Construct_UFunction_ADefaultPawn_MoveUp_World, "MoveUp_World" }, // 3821562412
		{ &Z_Construct_UFunction_ADefaultPawn_TurnAtRate, "TurnAtRate" }, // 24263027
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultPawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * DefaultPawn implements a simple Pawn with spherical collision and built-in flying movement.\n * @see UFloatingPawnMovement\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameFramework/DefaultPawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "DefaultPawn implements a simple Pawn with spherical collision and built-in flying movement.\n@see UFloatingPawnMovement" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultPawn_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultPawn_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADefaultPawn, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ADefaultPawn_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultPawn_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultPawn_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Base lookup rate, in deg/sec. Other scaling may affect final lookup rate. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "Base lookup rate, in deg/sec. Other scaling may affect final lookup rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADefaultPawn_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADefaultPawn, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ADefaultPawn_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultPawn_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultPawn_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pawn" },
		{ "Comment", "/** DefaultPawn movement component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "DefaultPawn movement component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADefaultPawn_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADefaultPawn, MovementComponent), Z_Construct_UClass_UPawnMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultPawn_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultPawn_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultPawn_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pawn" },
		{ "Comment", "/** DefaultPawn collision component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "DefaultPawn collision component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADefaultPawn_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADefaultPawn, CollisionComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultPawn_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultPawn_Statics::NewProp_CollisionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultPawn_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pawn" },
		{ "Comment", "/** The mesh associated with this Pawn. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "The mesh associated with this Pawn." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADefaultPawn_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADefaultPawn, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultPawn_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultPawn_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultPawn_Statics::NewProp_bAddDefaultMovementBindings_MetaData[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** If true, adds default input bindings for movement and camera look. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/DefaultPawn.h" },
		{ "ToolTip", "If true, adds default input bindings for movement and camera look." },
	};
#endif
	void Z_Construct_UClass_ADefaultPawn_Statics::NewProp_bAddDefaultMovementBindings_SetBit(void* Obj)
	{
		((ADefaultPawn*)Obj)->bAddDefaultMovementBindings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADefaultPawn_Statics::NewProp_bAddDefaultMovementBindings = { "bAddDefaultMovementBindings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ADefaultPawn), &Z_Construct_UClass_ADefaultPawn_Statics::NewProp_bAddDefaultMovementBindings_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADefaultPawn_Statics::NewProp_bAddDefaultMovementBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultPawn_Statics::NewProp_bAddDefaultMovementBindings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultPawn_Statics::NewProp_BaseTurnRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultPawn_Statics::NewProp_BaseLookUpRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultPawn_Statics::NewProp_MovementComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultPawn_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultPawn_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultPawn_Statics::NewProp_bAddDefaultMovementBindings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefaultPawn_Statics::ClassParams = {
		&ADefaultPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADefaultPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADefaultPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefaultPawn()
	{
		if (!Z_Registration_Info_UClass_ADefaultPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefaultPawn.OuterSingleton, Z_Construct_UClass_ADefaultPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADefaultPawn.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ADefaultPawn>()
	{
		return ADefaultPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultPawn);
	ADefaultPawn::~ADefaultPawn() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADefaultPawn, ADefaultPawn::StaticClass, TEXT("ADefaultPawn"), &Z_Registration_Info_UClass_ADefaultPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultPawn), 2035020249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_3722435495(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_DefaultPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
