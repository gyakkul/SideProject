// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosCloth/ChaosClothingSimulationInteractor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosClothingSimulationInteractor() {}
// Cross Module References
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothingInteractor();
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothingInteractor_NoRegister();
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothingSimulationInteractor();
	CHAOSCLOTH_API UClass* Z_Construct_UClass_UChaosClothingSimulationInteractor_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingInteractor();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingSimulationInteractor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_ChaosCloth();
// End Cross Module References
	DEFINE_FUNCTION(UChaosClothingInteractor::execResetAndTeleport)
	{
		P_GET_UBOOL(Z_Param_bReset);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAndTeleport(Z_Param_bReset,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetVelocityScale)
	{
		P_GET_STRUCT(FVector,Z_Param_LinearVelocityScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AngularVelocityScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FictitiousAngularScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVelocityScale(Z_Param_LinearVelocityScale,Z_Param_AngularVelocityScale,Z_Param_FictitiousAngularScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetAnimDrive)
	{
		P_GET_STRUCT(FVector2D,Z_Param_AnimDriveStiffness);
		P_GET_STRUCT(FVector2D,Z_Param_AnimDriveDamping);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimDrive(Z_Param_AnimDriveStiffness,Z_Param_AnimDriveDamping);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetAnimDriveLinear)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AnimDriveStiffness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAnimDriveLinear(Z_Param_AnimDriveStiffness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetGravity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_GravityScale);
		P_GET_UBOOL(Z_Param_bIsGravityOverridden);
		P_GET_STRUCT(FVector,Z_Param_GravityOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGravity(Z_Param_GravityScale,Z_Param_bIsGravityOverridden,Z_Param_GravityOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetPressure)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Pressure);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPressure(Z_Param_Pressure);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetWind)
	{
		P_GET_STRUCT(FVector2D,Z_Param_Drag);
		P_GET_STRUCT(FVector2D,Z_Param_Lift);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AirDensity);
		P_GET_STRUCT(FVector,Z_Param_WindVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWind(Z_Param_Drag,Z_Param_Lift,Z_Param_AirDensity,Z_Param_WindVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetAerodynamics)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DragCoefficient);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LiftCoefficient);
		P_GET_STRUCT(FVector,Z_Param_WindVelocity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAerodynamics(Z_Param_DragCoefficient,Z_Param_LiftCoefficient,Z_Param_WindVelocity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetDamping)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DampingCoefficient);
		P_GET_PROPERTY(FFloatProperty,Z_Param_LocalDampingCoefficient);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDamping(Z_Param_DampingCoefficient,Z_Param_LocalDampingCoefficient);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetBackstop)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBackstop(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetCollision)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_CollisionThickness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FrictionCoefficient);
		P_GET_UBOOL(Z_Param_bUseCCD);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SelfCollisionThickness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollision(Z_Param_CollisionThickness,Z_Param_FrictionCoefficient,Z_Param_bUseCCD,Z_Param_SelfCollisionThickness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetLongRangeAttachment)
	{
		P_GET_STRUCT(FVector2D,Z_Param_TetherStiffness);
		P_GET_STRUCT(FVector2D,Z_Param_TetherScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLongRangeAttachment(Z_Param_TetherStiffness,Z_Param_TetherScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetLongRangeAttachmentLinear)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_TetherStiffness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TetherScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLongRangeAttachmentLinear(Z_Param_TetherStiffness,Z_Param_TetherScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetMaterial)
	{
		P_GET_STRUCT(FVector2D,Z_Param_EdgeStiffness);
		P_GET_STRUCT(FVector2D,Z_Param_BendingStiffness);
		P_GET_STRUCT(FVector2D,Z_Param_AreaStiffness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterial(Z_Param_EdgeStiffness,Z_Param_BendingStiffness,Z_Param_AreaStiffness);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChaosClothingInteractor::execSetMaterialLinear)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_EdgeStiffness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BendingStiffness);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AreaStiffness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterialLinear(Z_Param_EdgeStiffness,Z_Param_BendingStiffness,Z_Param_AreaStiffness);
		P_NATIVE_END;
	}
	void UChaosClothingInteractor::StaticRegisterNativesUChaosClothingInteractor()
	{
		UClass* Class = UChaosClothingInteractor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetAndTeleport", &UChaosClothingInteractor::execResetAndTeleport },
			{ "SetAerodynamics", &UChaosClothingInteractor::execSetAerodynamics },
			{ "SetAnimDrive", &UChaosClothingInteractor::execSetAnimDrive },
			{ "SetAnimDriveLinear", &UChaosClothingInteractor::execSetAnimDriveLinear },
			{ "SetBackstop", &UChaosClothingInteractor::execSetBackstop },
			{ "SetCollision", &UChaosClothingInteractor::execSetCollision },
			{ "SetDamping", &UChaosClothingInteractor::execSetDamping },
			{ "SetGravity", &UChaosClothingInteractor::execSetGravity },
			{ "SetLongRangeAttachment", &UChaosClothingInteractor::execSetLongRangeAttachment },
			{ "SetLongRangeAttachmentLinear", &UChaosClothingInteractor::execSetLongRangeAttachmentLinear },
			{ "SetMaterial", &UChaosClothingInteractor::execSetMaterial },
			{ "SetMaterialLinear", &UChaosClothingInteractor::execSetMaterialLinear },
			{ "SetPressure", &UChaosClothingInteractor::execSetPressure },
			{ "SetVelocityScale", &UChaosClothingInteractor::execSetVelocityScale },
			{ "SetWind", &UChaosClothingInteractor::execSetWind },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics
	{
		struct ChaosClothingInteractor_eventResetAndTeleport_Parms
		{
			bool bReset;
			bool bTeleport;
		};
		static void NewProp_bReset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReset;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::NewProp_bReset_SetBit(void* Obj)
	{
		((ChaosClothingInteractor_eventResetAndTeleport_Parms*)Obj)->bReset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChaosClothingInteractor_eventResetAndTeleport_Parms), &Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((ChaosClothingInteractor_eventResetAndTeleport_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChaosClothingInteractor_eventResetAndTeleport_Parms), &Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::NewProp_bReset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::NewProp_bTeleport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_bReset", "false" },
		{ "CPP_Default_bTeleport", "false" },
		{ "Keywords", "Chaos" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "ResetAndTeleport", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::ChaosClothingInteractor_eventResetAndTeleport_Parms), Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics
	{
		struct ChaosClothingInteractor_eventSetAerodynamics_Parms
		{
			float DragCoefficient;
			float LiftCoefficient;
			FVector WindVelocity;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DragCoefficient;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LiftCoefficient;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WindVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetAerodynamics_Parms, DragCoefficient), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::NewProp_LiftCoefficient = { "LiftCoefficient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetAerodynamics_Parms, LiftCoefficient), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::NewProp_WindVelocity = { "WindVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetAerodynamics_Parms, WindVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::NewProp_DragCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::NewProp_LiftCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::NewProp_WindVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "Comment", "// Deprecated. This function cannot set different Low and High values for the Drag and Lift weight maps. Use SetWind instead.\n" },
		{ "CPP_Default_DragCoefficient", "0.070000" },
		{ "CPP_Default_LiftCoefficient", "0.035000" },
		{ "CPP_Default_WindVelocity", "0.000000,0.000000,0.000000" },
		{ "Keywords", "Chaos Wind Drag Lift Coefficient" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
		{ "ToolTip", "Deprecated. This function cannot set different Low and High values for the Drag and Lift weight maps. Use SetWind instead." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetAerodynamics", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::ChaosClothingInteractor_eventSetAerodynamics_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics
	{
		struct ChaosClothingInteractor_eventSetAnimDrive_Parms
		{
			FVector2D AnimDriveStiffness;
			FVector2D AnimDriveDamping;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimDriveStiffness;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimDriveDamping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::NewProp_AnimDriveStiffness = { "AnimDriveStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetAnimDrive_Parms, AnimDriveStiffness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::NewProp_AnimDriveDamping = { "AnimDriveDamping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetAnimDrive_Parms, AnimDriveDamping), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::NewProp_AnimDriveStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::NewProp_AnimDriveDamping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_AnimDriveDamping", "(X=0.000,Y=1.000)" },
		{ "CPP_Default_AnimDriveStiffness", "(X=0.000,Y=1.000)" },
		{ "Keywords", "Chaos Stiffness Damping" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetAnimDrive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::ChaosClothingInteractor_eventSetAnimDrive_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics
	{
		struct ChaosClothingInteractor_eventSetAnimDriveLinear_Parms
		{
			float AnimDriveStiffness;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimDriveStiffness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::NewProp_AnimDriveStiffness = { "AnimDriveStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetAnimDriveLinear_Parms, AnimDriveStiffness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::NewProp_AnimDriveStiffness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_AnimDriveStiffness", "0.000000" },
		{ "Keywords", "Chaos Stiffness" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetAnimDriveLinear", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::ChaosClothingInteractor_eventSetAnimDriveLinear_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetBackstop_Statics
	{
		struct ChaosClothingInteractor_eventSetBackstop_Parms
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
	void Z_Construct_UFunction_UChaosClothingInteractor_SetBackstop_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ChaosClothingInteractor_eventSetBackstop_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetBackstop_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChaosClothingInteractor_eventSetBackstop_Parms), &Z_Construct_UFunction_UChaosClothingInteractor_SetBackstop_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetBackstop_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetBackstop_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetBackstop_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_bEnabled", "true" },
		{ "Keywords", "Chaos Backstop Enable Disable Use" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetBackstop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetBackstop", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosClothingInteractor_SetBackstop_Statics::ChaosClothingInteractor_eventSetBackstop_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetBackstop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetBackstop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetBackstop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetBackstop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetBackstop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetBackstop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics
	{
		struct ChaosClothingInteractor_eventSetCollision_Parms
		{
			float CollisionThickness;
			float FrictionCoefficient;
			bool bUseCCD;
			float SelfCollisionThickness;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionThickness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrictionCoefficient;
		static void NewProp_bUseCCD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCCD;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionThickness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_CollisionThickness = { "CollisionThickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetCollision_Parms, CollisionThickness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_FrictionCoefficient = { "FrictionCoefficient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetCollision_Parms, FrictionCoefficient), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_bUseCCD_SetBit(void* Obj)
	{
		((ChaosClothingInteractor_eventSetCollision_Parms*)Obj)->bUseCCD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_bUseCCD = { "bUseCCD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChaosClothingInteractor_eventSetCollision_Parms), &Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_bUseCCD_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_SelfCollisionThickness = { "SelfCollisionThickness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetCollision_Parms, SelfCollisionThickness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_CollisionThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_FrictionCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_bUseCCD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::NewProp_SelfCollisionThickness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_bUseCCD", "false" },
		{ "CPP_Default_CollisionThickness", "1.000000" },
		{ "CPP_Default_FrictionCoefficient", "0.800000" },
		{ "CPP_Default_SelfCollisionThickness", "2.000000" },
		{ "Keywords", "Chaos Self Thickness Friction Coefficient" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetCollision", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::ChaosClothingInteractor_eventSetCollision_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics
	{
		struct ChaosClothingInteractor_eventSetDamping_Parms
		{
			float DampingCoefficient;
			float LocalDampingCoefficient;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DampingCoefficient;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalDampingCoefficient;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::NewProp_DampingCoefficient = { "DampingCoefficient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetDamping_Parms, DampingCoefficient), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::NewProp_LocalDampingCoefficient = { "LocalDampingCoefficient", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetDamping_Parms, LocalDampingCoefficient), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::NewProp_DampingCoefficient,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::NewProp_LocalDampingCoefficient,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_DampingCoefficient", "0.010000" },
		{ "CPP_Default_LocalDampingCoefficient", "0.000000" },
		{ "Keywords", "Chaos Coefficient" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetDamping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::ChaosClothingInteractor_eventSetDamping_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetDamping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetDamping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics
	{
		struct ChaosClothingInteractor_eventSetGravity_Parms
		{
			float GravityScale;
			bool bIsGravityOverridden;
			FVector GravityOverride;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
		static void NewProp_bIsGravityOverridden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGravityOverridden;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GravityOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetGravity_Parms, GravityScale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::NewProp_bIsGravityOverridden_SetBit(void* Obj)
	{
		((ChaosClothingInteractor_eventSetGravity_Parms*)Obj)->bIsGravityOverridden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::NewProp_bIsGravityOverridden = { "bIsGravityOverridden", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ChaosClothingInteractor_eventSetGravity_Parms), &Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::NewProp_bIsGravityOverridden_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::NewProp_GravityOverride = { "GravityOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetGravity_Parms, GravityOverride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::NewProp_GravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::NewProp_bIsGravityOverridden,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::NewProp_GravityOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_bIsGravityOverridden", "false" },
		{ "CPP_Default_GravityOverride", "0.000000,0.000000,-981.000000" },
		{ "CPP_Default_GravityScale", "1.000000" },
		{ "Keywords", "Chaos Scale Override" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetGravity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::ChaosClothingInteractor_eventSetGravity_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetGravity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetGravity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics
	{
		struct ChaosClothingInteractor_eventSetLongRangeAttachment_Parms
		{
			FVector2D TetherStiffness;
			FVector2D TetherScale;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TetherStiffness;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TetherScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::NewProp_TetherStiffness = { "TetherStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetLongRangeAttachment_Parms, TetherStiffness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::NewProp_TetherScale = { "TetherScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetLongRangeAttachment_Parms, TetherScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::NewProp_TetherStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::NewProp_TetherScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_TetherScale", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_TetherStiffness", "(X=1.000,Y=1.000)" },
		{ "Keywords", "Chaos Tether Stiffness Scale" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetLongRangeAttachment", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::ChaosClothingInteractor_eventSetLongRangeAttachment_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics
	{
		struct ChaosClothingInteractor_eventSetLongRangeAttachmentLinear_Parms
		{
			float TetherStiffness;
			float TetherScale;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TetherStiffness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TetherScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::NewProp_TetherStiffness = { "TetherStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetLongRangeAttachmentLinear_Parms, TetherStiffness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::NewProp_TetherScale = { "TetherScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetLongRangeAttachmentLinear_Parms, TetherScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::NewProp_TetherStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::NewProp_TetherScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_TetherScale", "1.000000" },
		{ "CPP_Default_TetherStiffness", "1.000000" },
		{ "Keywords", "Chaos Tether Stiffness Scale" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetLongRangeAttachmentLinear", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::ChaosClothingInteractor_eventSetLongRangeAttachmentLinear_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetMaterial_Statics
	{
		struct ChaosClothingInteractor_eventSetMaterial_Parms
		{
			FVector2D EdgeStiffness;
			FVector2D BendingStiffness;
			FVector2D AreaStiffness;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeStiffness;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BendingStiffness;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AreaStiffness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetMaterial_Statics::NewProp_EdgeStiffness = { "EdgeStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetMaterial_Parms, EdgeStiffness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetMaterial_Statics::NewProp_BendingStiffness = { "BendingStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetMaterial_Parms, BendingStiffness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetMaterial_Statics::NewProp_AreaStiffness = { "AreaStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetMaterial_Parms, AreaStiffness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetMaterial_Statics::NewProp_EdgeStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetMaterial_Statics::NewProp_BendingStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetMaterial_Statics::NewProp_AreaStiffness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_AreaStiffness", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_BendingStiffness", "(X=1.000,Y=1.000)" },
		{ "CPP_Default_EdgeStiffness", "(X=1.000,Y=1.000)" },
		{ "Keywords", "Chaos Edge Bending Area Stiffness" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosClothingInteractor_SetMaterial_Statics::ChaosClothingInteractor_eventSetMaterial_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics
	{
		struct ChaosClothingInteractor_eventSetMaterialLinear_Parms
		{
			float EdgeStiffness;
			float BendingStiffness;
			float AreaStiffness;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeStiffness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BendingStiffness;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AreaStiffness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::NewProp_EdgeStiffness = { "EdgeStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetMaterialLinear_Parms, EdgeStiffness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::NewProp_BendingStiffness = { "BendingStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetMaterialLinear_Parms, BendingStiffness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::NewProp_AreaStiffness = { "AreaStiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetMaterialLinear_Parms, AreaStiffness), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::NewProp_EdgeStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::NewProp_BendingStiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::NewProp_AreaStiffness,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_AreaStiffness", "1.000000" },
		{ "CPP_Default_BendingStiffness", "1.000000" },
		{ "CPP_Default_EdgeStiffness", "1.000000" },
		{ "Keywords", "Chaos Edge Bending Area Stiffness" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetMaterialLinear", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::ChaosClothingInteractor_eventSetMaterialLinear_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetPressure_Statics
	{
		struct ChaosClothingInteractor_eventSetPressure_Parms
		{
			FVector2D Pressure;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pressure;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetPressure_Statics::NewProp_Pressure = { "Pressure", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetPressure_Parms, Pressure), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetPressure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetPressure_Statics::NewProp_Pressure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetPressure_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_Pressure", "(X=0.000,Y=1.000)" },
		{ "Keywords", "Chaos Pressure" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetPressure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetPressure", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosClothingInteractor_SetPressure_Statics::ChaosClothingInteractor_eventSetPressure_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetPressure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetPressure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetPressure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetPressure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetPressure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetPressure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics
	{
		struct ChaosClothingInteractor_eventSetVelocityScale_Parms
		{
			FVector LinearVelocityScale;
			float AngularVelocityScale;
			float FictitiousAngularScale;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocityScale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularVelocityScale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FictitiousAngularScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::NewProp_LinearVelocityScale = { "LinearVelocityScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetVelocityScale_Parms, LinearVelocityScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::NewProp_AngularVelocityScale = { "AngularVelocityScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetVelocityScale_Parms, AngularVelocityScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::NewProp_FictitiousAngularScale = { "FictitiousAngularScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetVelocityScale_Parms, FictitiousAngularScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::NewProp_LinearVelocityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::NewProp_AngularVelocityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::NewProp_FictitiousAngularScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_AngularVelocityScale", "0.750000" },
		{ "CPP_Default_FictitiousAngularScale", "1.000000" },
		{ "CPP_Default_LinearVelocityScale", "0.750000,0.750000,0.750000" },
		{ "Keywords", "Chaos Linear Angular Velocity Scale" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetVelocityScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::ChaosClothingInteractor_eventSetVelocityScale_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChaosClothingInteractor_SetWind_Statics
	{
		struct ChaosClothingInteractor_eventSetWind_Parms
		{
			FVector2D Drag;
			FVector2D Lift;
			float AirDensity;
			FVector WindVelocity;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Drag;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Lift;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AirDensity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WindVelocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetWind_Statics::NewProp_Drag = { "Drag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetWind_Parms, Drag), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetWind_Statics::NewProp_Lift = { "Lift", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetWind_Parms, Lift), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetWind_Statics::NewProp_AirDensity = { "AirDensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetWind_Parms, AirDensity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UChaosClothingInteractor_SetWind_Statics::NewProp_WindVelocity = { "WindVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ChaosClothingInteractor_eventSetWind_Parms, WindVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChaosClothingInteractor_SetWind_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetWind_Statics::NewProp_Drag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetWind_Statics::NewProp_Lift,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetWind_Statics::NewProp_AirDensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChaosClothingInteractor_SetWind_Statics::NewProp_WindVelocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChaosClothingInteractor_SetWind_Statics::Function_MetaDataParams[] = {
		{ "Category", "ClothingSimulation" },
		{ "CPP_Default_AirDensity", "0.000001" },
		{ "CPP_Default_Drag", "(X=0.070,Y=0.500)" },
		{ "CPP_Default_Lift", "(X=0.070,Y=0.500)" },
		{ "CPP_Default_WindVelocity", "0.000000,0.000000,0.000000" },
		{ "Keywords", "Chaos Wind Drag Lift Coefficient Air Density Velocity" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChaosClothingInteractor_SetWind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChaosClothingInteractor, nullptr, "SetWind", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChaosClothingInteractor_SetWind_Statics::ChaosClothingInteractor_eventSetWind_Parms), Z_Construct_UFunction_UChaosClothingInteractor_SetWind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetWind_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChaosClothingInteractor_SetWind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChaosClothingInteractor_SetWind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChaosClothingInteractor_SetWind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChaosClothingInteractor_SetWind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosClothingInteractor);
	UClass* Z_Construct_UClass_UChaosClothingInteractor_NoRegister()
	{
		return UChaosClothingInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothingInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothingInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothingInteractor,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCloth,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChaosClothingInteractor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChaosClothingInteractor_ResetAndTeleport, "ResetAndTeleport" }, // 3070202956
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetAerodynamics, "SetAerodynamics" }, // 678870188
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDrive, "SetAnimDrive" }, // 1126246616
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetAnimDriveLinear, "SetAnimDriveLinear" }, // 4170782013
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetBackstop, "SetBackstop" }, // 2696195530
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetCollision, "SetCollision" }, // 4091242800
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetDamping, "SetDamping" }, // 4027449407
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetGravity, "SetGravity" }, // 2105691208
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachment, "SetLongRangeAttachment" }, // 1520662299
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetLongRangeAttachmentLinear, "SetLongRangeAttachmentLinear" }, // 1698357675
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetMaterial, "SetMaterial" }, // 3327014830
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetMaterialLinear, "SetMaterialLinear" }, // 518828327
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetPressure, "SetPressure" }, // 1431309074
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetVelocityScale, "SetVelocityScale" }, // 3046226253
		{ &Z_Construct_UFunction_UChaosClothingInteractor_SetWind, "SetWind" }, // 3906353336
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothingInteractor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ChaosCloth/ChaosClothingSimulationInteractor.h" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothingInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothingInteractor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothingInteractor_Statics::ClassParams = {
		&UChaosClothingInteractor::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosClothingInteractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothingInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosClothingInteractor()
	{
		if (!Z_Registration_Info_UClass_UChaosClothingInteractor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosClothingInteractor.OuterSingleton, Z_Construct_UClass_UChaosClothingInteractor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosClothingInteractor.OuterSingleton;
	}
	template<> CHAOSCLOTH_API UClass* StaticClass<UChaosClothingInteractor>()
	{
		return UChaosClothingInteractor::StaticClass();
	}
	UChaosClothingInteractor::UChaosClothingInteractor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosClothingInteractor);
	UChaosClothingInteractor::~UChaosClothingInteractor() {}
	void UChaosClothingSimulationInteractor::StaticRegisterNativesUChaosClothingSimulationInteractor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChaosClothingSimulationInteractor);
	UClass* Z_Construct_UClass_UChaosClothingSimulationInteractor_NoRegister()
	{
		return UChaosClothingSimulationInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothingSimulationInteractor,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosCloth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ChaosCloth/ChaosClothingSimulationInteractor.h" },
		{ "ModuleRelativePath", "Public/ChaosCloth/ChaosClothingSimulationInteractor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChaosClothingSimulationInteractor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::ClassParams = {
		&UChaosClothingSimulationInteractor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChaosClothingSimulationInteractor()
	{
		if (!Z_Registration_Info_UClass_UChaosClothingSimulationInteractor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChaosClothingSimulationInteractor.OuterSingleton, Z_Construct_UClass_UChaosClothingSimulationInteractor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChaosClothingSimulationInteractor.OuterSingleton;
	}
	template<> CHAOSCLOTH_API UClass* StaticClass<UChaosClothingSimulationInteractor>()
	{
		return UChaosClothingSimulationInteractor::StaticClass();
	}
	UChaosClothingSimulationInteractor::UChaosClothingSimulationInteractor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChaosClothingSimulationInteractor);
	UChaosClothingSimulationInteractor::~UChaosClothingSimulationInteractor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChaosClothingInteractor, UChaosClothingInteractor::StaticClass, TEXT("UChaosClothingInteractor"), &Z_Registration_Info_UClass_UChaosClothingInteractor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosClothingInteractor), 1273633899U) },
		{ Z_Construct_UClass_UChaosClothingSimulationInteractor, UChaosClothingSimulationInteractor::StaticClass, TEXT("UChaosClothingSimulationInteractor"), &Z_Registration_Info_UClass_UChaosClothingSimulationInteractor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChaosClothingSimulationInteractor), 3861583603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_3918405799(TEXT("/Script/ChaosCloth"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosCloth_Source_Chaos_Public_ChaosCloth_ChaosClothingSimulationInteractor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
