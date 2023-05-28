// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigEditor/IKRigController.h"
#include "IKRigDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIKRigController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigDefinition_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigEffectorGoal_NoRegister();
	IKRIG_API UClass* Z_Construct_UClass_UIKRigSolver_NoRegister();
	IKRIG_API UScriptStruct* Z_Construct_UScriptStruct_FBoneChain();
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRigController();
	IKRIGEDITOR_API UClass* Z_Construct_UClass_UIKRigController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IKRigEditor();
// End Cross Module References
	DEFINE_FUNCTION(UIKRigController::execGetRetargetRoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetRetargetRoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execSetRetargetRoot)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_RootBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRetargetRoot(Z_Param_RootBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetRetargetChains)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FBoneChain>*)Z_Param__Result=P_THIS->GetRetargetChains();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetRetargetChainEndBone)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ChainName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetRetargetChainEndBone(Z_Param_ChainName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetRetargetChainStartBone)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ChainName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetRetargetChainStartBone(Z_Param_ChainName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetRetargetChainGoal)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ChainName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetRetargetChainGoal(Z_Param_ChainName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execSetRetargetChainGoal)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ChainName);
		P_GET_PROPERTY(FNameProperty,Z_Param_GoalName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRetargetChainGoal(Z_Param_ChainName,Z_Param_GoalName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execSetRetargetChainEndBone)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ChainName);
		P_GET_PROPERTY(FNameProperty,Z_Param_EndBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRetargetChainEndBone(Z_Param_ChainName,Z_Param_EndBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execSetRetargetChainStartBone)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ChainName);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRetargetChainStartBone(Z_Param_ChainName,Z_Param_StartBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execRenameRetargetChain)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ChainName);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewChainName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->RenameRetargetChain(Z_Param_ChainName,Z_Param_NewChainName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execRemoveRetargetChain)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ChainName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveRetargetChain(Z_Param_ChainName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execAddRetargetChain)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ChainName);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartBoneName);
		P_GET_PROPERTY(FNameProperty,Z_Param_EndBoneName);
		P_GET_PROPERTY(FNameProperty,Z_Param_GoalName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->AddRetargetChain(Z_Param_ChainName,Z_Param_StartBoneName,Z_Param_EndBoneName,Z_Param_GoalName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetRefPoseTransformOfBone)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=P_THIS->GetRefPoseTransformOfBone(Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetBoneSettings)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SolverIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetBoneSettings(Z_Param_BoneName,Z_Param_SolverIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execRemoveBoneSetting)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SolverIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveBoneSetting(Z_Param_BoneName,Z_Param_SolverIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execAddBoneSetting)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SolverIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddBoneSetting(Z_Param_BoneName,Z_Param_SolverIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetBoneExcluded)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoneExcluded(Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execSetBoneExcluded)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_GET_UBOOL(Z_Param_bExclude);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetBoneExcluded(Z_Param_BoneName,Z_Param_bExclude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetGoalSettingsForSolver)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_GoalName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SolverIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetGoalSettingsForSolver(Z_Param_GoalName,Z_Param_SolverIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetAllGoals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UIKRigEffectorGoal*>*)Z_Param__Result=P_THIS->GetAllGoals();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetGoal)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_GoalName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UIKRigEffectorGoal**)Z_Param__Result=P_THIS->GetGoal(Z_Param_GoalName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execIsGoalConnectedToAnySolver)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_GoalName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGoalConnectedToAnySolver(Z_Param_GoalName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execIsGoalConnectedToSolver)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_GoalName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SolverIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsGoalConnectedToSolver(Z_Param_GoalName,Z_Param_SolverIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execDisconnectGoalFromSolver)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_GoalToRemove);
		P_GET_PROPERTY(FIntProperty,Z_Param_SolverIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DisconnectGoalFromSolver(Z_Param_GoalToRemove,Z_Param_SolverIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execConnectGoalToSolver)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_GoalName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SolverIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConnectGoalToSolver(Z_Param_GoalName,Z_Param_SolverIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetGoalNameForBone)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetGoalNameForBone(Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetBoneForGoal)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_GoalName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetBoneForGoal(Z_Param_GoalName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execSetGoalBone)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_GoalName);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetGoalBone(Z_Param_GoalName,Z_Param_NewBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execRenameGoal)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_OldName);
		P_GET_PROPERTY(FNameProperty,Z_Param_PotentialNewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->RenameGoal(Z_Param_OldName,Z_Param_PotentialNewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execRemoveGoal)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_GoalName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveGoal(Z_Param_GoalName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execAddNewGoal)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_GoalName);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->AddNewGoal(Z_Param_GoalName,Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetEndBone)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SolverIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetEndBone(Z_Param_SolverIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execSetEndBone)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_EndBoneName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SolverIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetEndBone(Z_Param_EndBoneName,Z_Param_SolverIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetRootBone)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SolverIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetRootBone(Z_Param_SolverIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execSetRootBone)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_RootBoneName);
		P_GET_PROPERTY(FIntProperty,Z_Param_SolverIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRootBone(Z_Param_RootBoneName,Z_Param_SolverIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetSolverEnabled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SolverIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSolverEnabled(Z_Param_SolverIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execSetSolverEnabled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SolverIndex);
		P_GET_UBOOL(Z_Param_bIsEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSolverEnabled(Z_Param_SolverIndex,Z_Param_bIsEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execMoveSolverInStack)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SolverToMoveIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetSolverIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MoveSolverInStack(Z_Param_SolverToMoveIndex,Z_Param_TargetSolverIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetNumSolvers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumSolvers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetIndexOfSolver)
	{
		P_GET_OBJECT(UIKRigSolver,Z_Param_Solver);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIndexOfSolver(Z_Param_Solver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetSolverAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UIKRigSolver**)Z_Param__Result=P_THIS->GetSolverAtIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execRemoveSolver)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_SolverIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveSolver(Z_Param_SolverIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execAddSolver)
	{
		P_GET_OBJECT(UClass,Z_Param_InSolverClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddSolver(Z_Param_InSolverClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execIsSkeletalMeshCompatible)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMeshToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSkeletalMeshCompatible(Z_Param_SkeletalMeshToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetSkeletalMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->GetSkeletalMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execSetSkeletalMesh)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_UBOOL(Z_Param_bTransact);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSkeletalMesh(Z_Param_SkeletalMesh,Z_Param_bTransact);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIKRigController::execGetController)
	{
		P_GET_OBJECT(UIKRigDefinition,Z_Param_InIKRigDefinition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UIKRigController**)Z_Param__Result=UIKRigController::GetController(Z_Param_InIKRigDefinition);
		P_NATIVE_END;
	}
	void UIKRigController::StaticRegisterNativesUIKRigController()
	{
		UClass* Class = UIKRigController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBoneSetting", &UIKRigController::execAddBoneSetting },
			{ "AddNewGoal", &UIKRigController::execAddNewGoal },
			{ "AddRetargetChain", &UIKRigController::execAddRetargetChain },
			{ "AddSolver", &UIKRigController::execAddSolver },
			{ "ConnectGoalToSolver", &UIKRigController::execConnectGoalToSolver },
			{ "DisconnectGoalFromSolver", &UIKRigController::execDisconnectGoalFromSolver },
			{ "GetAllGoals", &UIKRigController::execGetAllGoals },
			{ "GetBoneExcluded", &UIKRigController::execGetBoneExcluded },
			{ "GetBoneForGoal", &UIKRigController::execGetBoneForGoal },
			{ "GetBoneSettings", &UIKRigController::execGetBoneSettings },
			{ "GetController", &UIKRigController::execGetController },
			{ "GetEndBone", &UIKRigController::execGetEndBone },
			{ "GetGoal", &UIKRigController::execGetGoal },
			{ "GetGoalNameForBone", &UIKRigController::execGetGoalNameForBone },
			{ "GetGoalSettingsForSolver", &UIKRigController::execGetGoalSettingsForSolver },
			{ "GetIndexOfSolver", &UIKRigController::execGetIndexOfSolver },
			{ "GetNumSolvers", &UIKRigController::execGetNumSolvers },
			{ "GetRefPoseTransformOfBone", &UIKRigController::execGetRefPoseTransformOfBone },
			{ "GetRetargetChainEndBone", &UIKRigController::execGetRetargetChainEndBone },
			{ "GetRetargetChainGoal", &UIKRigController::execGetRetargetChainGoal },
			{ "GetRetargetChains", &UIKRigController::execGetRetargetChains },
			{ "GetRetargetChainStartBone", &UIKRigController::execGetRetargetChainStartBone },
			{ "GetRetargetRoot", &UIKRigController::execGetRetargetRoot },
			{ "GetRootBone", &UIKRigController::execGetRootBone },
			{ "GetSkeletalMesh", &UIKRigController::execGetSkeletalMesh },
			{ "GetSolverAtIndex", &UIKRigController::execGetSolverAtIndex },
			{ "GetSolverEnabled", &UIKRigController::execGetSolverEnabled },
			{ "IsGoalConnectedToAnySolver", &UIKRigController::execIsGoalConnectedToAnySolver },
			{ "IsGoalConnectedToSolver", &UIKRigController::execIsGoalConnectedToSolver },
			{ "IsSkeletalMeshCompatible", &UIKRigController::execIsSkeletalMeshCompatible },
			{ "MoveSolverInStack", &UIKRigController::execMoveSolverInStack },
			{ "RemoveBoneSetting", &UIKRigController::execRemoveBoneSetting },
			{ "RemoveGoal", &UIKRigController::execRemoveGoal },
			{ "RemoveRetargetChain", &UIKRigController::execRemoveRetargetChain },
			{ "RemoveSolver", &UIKRigController::execRemoveSolver },
			{ "RenameGoal", &UIKRigController::execRenameGoal },
			{ "RenameRetargetChain", &UIKRigController::execRenameRetargetChain },
			{ "SetBoneExcluded", &UIKRigController::execSetBoneExcluded },
			{ "SetEndBone", &UIKRigController::execSetEndBone },
			{ "SetGoalBone", &UIKRigController::execSetGoalBone },
			{ "SetRetargetChainEndBone", &UIKRigController::execSetRetargetChainEndBone },
			{ "SetRetargetChainGoal", &UIKRigController::execSetRetargetChainGoal },
			{ "SetRetargetChainStartBone", &UIKRigController::execSetRetargetChainStartBone },
			{ "SetRetargetRoot", &UIKRigController::execSetRetargetRoot },
			{ "SetRootBone", &UIKRigController::execSetRootBone },
			{ "SetSkeletalMesh", &UIKRigController::execSetSkeletalMesh },
			{ "SetSolverEnabled", &UIKRigController::execSetSolverEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics
	{
		struct IKRigController_eventAddBoneSetting_Parms
		{
			FName BoneName;
			int32 SolverIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventAddBoneSetting_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::NewProp_SolverIndex = { "SolverIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventAddBoneSetting_Parms, SolverIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventAddBoneSetting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventAddBoneSetting_Parms), &Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::NewProp_SolverIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Add settings to the given Bone/Solver. Does nothing if Bone already has settings in this Solver.\n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Add settings to the given Bone/Solver. Does nothing if Bone already has settings in this Solver." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "AddBoneSetting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::IKRigController_eventAddBoneSetting_Parms), Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_AddBoneSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_AddBoneSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics
	{
		struct IKRigController_eventAddNewGoal_Parms
		{
			FName GoalName;
			FName BoneName;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::NewProp_GoalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventAddNewGoal_Parms, GoalName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::NewProp_GoalName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventAddNewGoal_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventAddNewGoal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Add a new Goal associated with the given Bone. GoalName must be unique. Bones can have multiple Goals (rare). \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Add a new Goal associated with the given Bone. GoalName must be unique. Bones can have multiple Goals (rare)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "AddNewGoal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::IKRigController_eventAddNewGoal_Parms), Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_AddNewGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_AddNewGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics
	{
		struct IKRigController_eventAddRetargetChain_Parms
		{
			FName ChainName;
			FName StartBoneName;
			FName EndBoneName;
			FName GoalName;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChainName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EndBoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_ChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_ChainName = { "ChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventAddRetargetChain_Parms, ChainName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_ChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_ChainName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_StartBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_StartBoneName = { "StartBoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventAddRetargetChain_Parms, StartBoneName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_StartBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_StartBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_EndBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_EndBoneName = { "EndBoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventAddRetargetChain_Parms, EndBoneName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_EndBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_EndBoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_GoalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventAddRetargetChain_Parms, GoalName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_GoalName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventAddRetargetChain_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_ChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_StartBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_EndBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Add a new chain with the given Chain and Bone names. Returns newly created chain name (uniquified).\n// Note: only the ChainName is required here, all else can be set later.\n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Add a new chain with the given Chain and Bone names. Returns newly created chain name (uniquified).\nNote: only the ChainName is required here, all else can be set later." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "AddRetargetChain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::IKRigController_eventAddRetargetChain_Parms), Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_AddRetargetChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_AddRetargetChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_AddSolver_Statics
	{
		struct IKRigController_eventAddSolver_Parms
		{
			TSubclassOf<UIKRigSolver>  InSolverClass;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_InSolverClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UIKRigController_AddSolver_Statics::NewProp_InSolverClass = { "InSolverClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventAddSolver_Parms, InSolverClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UIKRigSolver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_AddSolver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventAddSolver_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_AddSolver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_AddSolver_Statics::NewProp_InSolverClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_AddSolver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_AddSolver_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Add a new solver of the given type to the bottom of the stack. Returns the stack index.\n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Add a new solver of the given type to the bottom of the stack. Returns the stack index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_AddSolver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "AddSolver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_AddSolver_Statics::IKRigController_eventAddSolver_Parms), Z_Construct_UFunction_UIKRigController_AddSolver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_AddSolver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_AddSolver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_AddSolver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_AddSolver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_AddSolver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics
	{
		struct IKRigController_eventConnectGoalToSolver_Parms
		{
			FName GoalName;
			int32 SolverIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::NewProp_GoalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventConnectGoalToSolver_Parms, GoalName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::NewProp_GoalName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::NewProp_SolverIndex = { "SolverIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventConnectGoalToSolver_Parms, SolverIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventConnectGoalToSolver_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventConnectGoalToSolver_Parms), &Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::NewProp_SolverIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Connect the given Goal to the given Solver. This creates an \"Effector\" with settings specific to this Solver.\n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Connect the given Goal to the given Solver. This creates an \"Effector\" with settings specific to this Solver." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "ConnectGoalToSolver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::IKRigController_eventConnectGoalToSolver_Parms), Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics
	{
		struct IKRigController_eventDisconnectGoalFromSolver_Parms
		{
			FName GoalToRemove;
			int32 SolverIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalToRemove_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalToRemove;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::NewProp_GoalToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::NewProp_GoalToRemove = { "GoalToRemove", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventDisconnectGoalFromSolver_Parms, GoalToRemove), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::NewProp_GoalToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::NewProp_GoalToRemove_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::NewProp_SolverIndex = { "SolverIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventDisconnectGoalFromSolver_Parms, SolverIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventDisconnectGoalFromSolver_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventDisconnectGoalFromSolver_Parms), &Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::NewProp_GoalToRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::NewProp_SolverIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Disconnect the given Goal from the given Solver. This removes the Effector that associates the Goal with the Solver.\n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Disconnect the given Goal from the given Solver. This removes the Effector that associates the Goal with the Solver." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "DisconnectGoalFromSolver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::IKRigController_eventDisconnectGoalFromSolver_Parms), Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetAllGoals_Statics
	{
		struct IKRigController_eventGetAllGoals_Parms
		{
			TArray<UIKRigEffectorGoal*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRigController_GetAllGoals_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UIKRigEffectorGoal_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIKRigController_GetAllGoals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetAllGoals_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetAllGoals_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetAllGoals_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetAllGoals_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetAllGoals_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Get access to the list of Goals. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Get access to the list of Goals." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetAllGoals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetAllGoals", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetAllGoals_Statics::IKRigController_eventGetAllGoals_Parms), Z_Construct_UFunction_UIKRigController_GetAllGoals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetAllGoals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetAllGoals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetAllGoals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetAllGoals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetAllGoals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetBoneExcluded_Statics
	{
		struct IKRigController_eventGetBoneExcluded_Parms
		{
			FName BoneName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetBoneExcluded_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_GetBoneExcluded_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetBoneExcluded_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetBoneExcluded_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetBoneExcluded_Statics::NewProp_BoneName_MetaData)) };
	void Z_Construct_UFunction_UIKRigController_GetBoneExcluded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventGetBoneExcluded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_GetBoneExcluded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventGetBoneExcluded_Parms), &Z_Construct_UFunction_UIKRigController_GetBoneExcluded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetBoneExcluded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetBoneExcluded_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetBoneExcluded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetBoneExcluded_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Returns true if the given Bone is excluded, false otherwise. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Returns true if the given Bone is excluded, false otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetBoneExcluded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetBoneExcluded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetBoneExcluded_Statics::IKRigController_eventGetBoneExcluded_Parms), Z_Construct_UFunction_UIKRigController_GetBoneExcluded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetBoneExcluded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetBoneExcluded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetBoneExcluded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetBoneExcluded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetBoneExcluded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetBoneForGoal_Statics
	{
		struct IKRigController_eventGetBoneForGoal_Parms
		{
			FName GoalName;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetBoneForGoal_Statics::NewProp_GoalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_GetBoneForGoal_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetBoneForGoal_Parms, GoalName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetBoneForGoal_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetBoneForGoal_Statics::NewProp_GoalName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_GetBoneForGoal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetBoneForGoal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetBoneForGoal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetBoneForGoal_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetBoneForGoal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetBoneForGoal_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// The the Bone associated with the given Goal. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "The the Bone associated with the given Goal." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetBoneForGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetBoneForGoal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetBoneForGoal_Statics::IKRigController_eventGetBoneForGoal_Parms), Z_Construct_UFunction_UIKRigController_GetBoneForGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetBoneForGoal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetBoneForGoal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetBoneForGoal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetBoneForGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetBoneForGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetBoneSettings_Statics
	{
		struct IKRigController_eventGetBoneSettings_Parms
		{
			FName BoneName;
			int32 SolverIndex;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetBoneSettings_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_GetBoneSettings_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetBoneSettings_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetBoneSettings_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetBoneSettings_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_GetBoneSettings_Statics::NewProp_SolverIndex = { "SolverIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetBoneSettings_Parms, SolverIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRigController_GetBoneSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetBoneSettings_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetBoneSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetBoneSettings_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetBoneSettings_Statics::NewProp_SolverIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetBoneSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetBoneSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Get the generic (Solver-specific) Bone settings UObject for this Bone in the given Solver.\n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Get the generic (Solver-specific) Bone settings UObject for this Bone in the given Solver." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetBoneSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetBoneSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetBoneSettings_Statics::IKRigController_eventGetBoneSettings_Parms), Z_Construct_UFunction_UIKRigController_GetBoneSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetBoneSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetBoneSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetBoneSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetBoneSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetBoneSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetController_Statics
	{
		struct IKRigController_eventGetController_Parms
		{
			const UIKRigDefinition* InIKRigDefinition;
			UIKRigController* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InIKRigDefinition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InIKRigDefinition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetController_Statics::NewProp_InIKRigDefinition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRigController_GetController_Statics::NewProp_InIKRigDefinition = { "InIKRigDefinition", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetController_Parms, InIKRigDefinition), Z_Construct_UClass_UIKRigDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetController_Statics::NewProp_InIKRigDefinition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetController_Statics::NewProp_InIKRigDefinition_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRigController_GetController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetController_Parms, ReturnValue), Z_Construct_UClass_UIKRigController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetController_Statics::NewProp_InIKRigDefinition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Use this to get the controller for the given IKRig\n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Use this to get the controller for the given IKRig" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetController", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetController_Statics::IKRigController_eventGetController_Parms), Z_Construct_UFunction_UIKRigController_GetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetEndBone_Statics
	{
		struct IKRigController_eventGetEndBone_Parms
		{
			int32 SolverIndex;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_GetEndBone_Statics::NewProp_SolverIndex = { "SolverIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetEndBone_Parms, SolverIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_GetEndBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetEndBone_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetEndBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetEndBone_Statics::NewProp_SolverIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetEndBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetEndBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Get the name of the end bone on a given solver. (not all solvers require extra end bones, checks CanSetEndBone() first) \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Get the name of the end bone on a given solver. (not all solvers require extra end bones, checks CanSetEndBone() first)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetEndBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetEndBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetEndBone_Statics::IKRigController_eventGetEndBone_Parms), Z_Construct_UFunction_UIKRigController_GetEndBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetEndBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetEndBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetEndBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetEndBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetEndBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetGoal_Statics
	{
		struct IKRigController_eventGetGoal_Parms
		{
			FName GoalName;
			UIKRigEffectorGoal* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetGoal_Statics::NewProp_GoalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_GetGoal_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetGoal_Parms, GoalName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetGoal_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetGoal_Statics::NewProp_GoalName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRigController_GetGoal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetGoal_Parms, ReturnValue), Z_Construct_UClass_UIKRigEffectorGoal_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetGoal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetGoal_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetGoal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetGoal_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Get read-write access to the Goal with the given name.\n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Get read-write access to the Goal with the given name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetGoal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetGoal_Statics::IKRigController_eventGetGoal_Parms), Z_Construct_UFunction_UIKRigController_GetGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetGoal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetGoal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetGoal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetGoalNameForBone_Statics
	{
		struct IKRigController_eventGetGoalNameForBone_Parms
		{
			FName BoneName;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetGoalNameForBone_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_GetGoalNameForBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetGoalNameForBone_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetGoalNameForBone_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetGoalNameForBone_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_GetGoalNameForBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetGoalNameForBone_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetGoalNameForBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetGoalNameForBone_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetGoalNameForBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetGoalNameForBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Get the Goal associated with the given Bone (may be NAME_None) \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Get the Goal associated with the given Bone (may be NAME_None)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetGoalNameForBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetGoalNameForBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetGoalNameForBone_Statics::IKRigController_eventGetGoalNameForBone_Parms), Z_Construct_UFunction_UIKRigController_GetGoalNameForBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetGoalNameForBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetGoalNameForBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetGoalNameForBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetGoalNameForBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetGoalNameForBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver_Statics
	{
		struct IKRigController_eventGetGoalSettingsForSolver_Parms
		{
			FName GoalName;
			int32 SolverIndex;
			UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver_Statics::NewProp_GoalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetGoalSettingsForSolver_Parms, GoalName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver_Statics::NewProp_GoalName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver_Statics::NewProp_SolverIndex = { "SolverIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetGoalSettingsForSolver_Parms, SolverIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetGoalSettingsForSolver_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver_Statics::NewProp_SolverIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Get the UObject for the settings associated with the given Goal in the given Solver.\n// Solvers can define their own per-Goal settings depending on their needs. These are termed \"Effectors\".\n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Get the UObject for the settings associated with the given Goal in the given Solver.\nSolvers can define their own per-Goal settings depending on their needs. These are termed \"Effectors\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetGoalSettingsForSolver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver_Statics::IKRigController_eventGetGoalSettingsForSolver_Parms), Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetIndexOfSolver_Statics
	{
		struct IKRigController_eventGetIndexOfSolver_Parms
		{
			UIKRigSolver* Solver;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Solver;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRigController_GetIndexOfSolver_Statics::NewProp_Solver = { "Solver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetIndexOfSolver_Parms, Solver), Z_Construct_UClass_UIKRigSolver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_GetIndexOfSolver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetIndexOfSolver_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetIndexOfSolver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetIndexOfSolver_Statics::NewProp_Solver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetIndexOfSolver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetIndexOfSolver_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Get access to the given solver. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Get access to the given solver." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetIndexOfSolver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetIndexOfSolver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetIndexOfSolver_Statics::IKRigController_eventGetIndexOfSolver_Parms), Z_Construct_UFunction_UIKRigController_GetIndexOfSolver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetIndexOfSolver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetIndexOfSolver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetIndexOfSolver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetIndexOfSolver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetIndexOfSolver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetNumSolvers_Statics
	{
		struct IKRigController_eventGetNumSolvers_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_GetNumSolvers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetNumSolvers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetNumSolvers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetNumSolvers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetNumSolvers_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Get the number of solvers in the stack. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Get the number of solvers in the stack." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetNumSolvers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetNumSolvers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetNumSolvers_Statics::IKRigController_eventGetNumSolvers_Parms), Z_Construct_UFunction_UIKRigController_GetNumSolvers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetNumSolvers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetNumSolvers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetNumSolvers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetNumSolvers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetNumSolvers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetRefPoseTransformOfBone_Statics
	{
		struct IKRigController_eventGetRefPoseTransformOfBone_Parms
		{
			FName BoneName;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetRefPoseTransformOfBone_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_GetRefPoseTransformOfBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetRefPoseTransformOfBone_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetRefPoseTransformOfBone_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetRefPoseTransformOfBone_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRigController_GetRefPoseTransformOfBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetRefPoseTransformOfBone_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetRefPoseTransformOfBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetRefPoseTransformOfBone_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetRefPoseTransformOfBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetRefPoseTransformOfBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Get the global-space retarget pose transform of the given Bone.\n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Get the global-space retarget pose transform of the given Bone." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetRefPoseTransformOfBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetRefPoseTransformOfBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetRefPoseTransformOfBone_Statics::IKRigController_eventGetRefPoseTransformOfBone_Parms), Z_Construct_UFunction_UIKRigController_GetRefPoseTransformOfBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetRefPoseTransformOfBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetRefPoseTransformOfBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetRefPoseTransformOfBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetRefPoseTransformOfBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetRefPoseTransformOfBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetRetargetChainEndBone_Statics
	{
		struct IKRigController_eventGetRetargetChainEndBone_Parms
		{
			FName ChainName;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChainName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetRetargetChainEndBone_Statics::NewProp_ChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_GetRetargetChainEndBone_Statics::NewProp_ChainName = { "ChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetRetargetChainEndBone_Parms, ChainName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetRetargetChainEndBone_Statics::NewProp_ChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetRetargetChainEndBone_Statics::NewProp_ChainName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_GetRetargetChainEndBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetRetargetChainEndBone_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetRetargetChainEndBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetRetargetChainEndBone_Statics::NewProp_ChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetRetargetChainEndBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetRetargetChainEndBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Get the Start Bone name for the given Chain. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Get the Start Bone name for the given Chain." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetRetargetChainEndBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetRetargetChainEndBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetRetargetChainEndBone_Statics::IKRigController_eventGetRetargetChainEndBone_Parms), Z_Construct_UFunction_UIKRigController_GetRetargetChainEndBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetRetargetChainEndBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetRetargetChainEndBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetRetargetChainEndBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetRetargetChainEndBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetRetargetChainEndBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetRetargetChainGoal_Statics
	{
		struct IKRigController_eventGetRetargetChainGoal_Parms
		{
			FName ChainName;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChainName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetRetargetChainGoal_Statics::NewProp_ChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_GetRetargetChainGoal_Statics::NewProp_ChainName = { "ChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetRetargetChainGoal_Parms, ChainName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetRetargetChainGoal_Statics::NewProp_ChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetRetargetChainGoal_Statics::NewProp_ChainName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_GetRetargetChainGoal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetRetargetChainGoal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetRetargetChainGoal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetRetargetChainGoal_Statics::NewProp_ChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetRetargetChainGoal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetRetargetChainGoal_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Get the Goal name for the given Chain. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Get the Goal name for the given Chain." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetRetargetChainGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetRetargetChainGoal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetRetargetChainGoal_Statics::IKRigController_eventGetRetargetChainGoal_Parms), Z_Construct_UFunction_UIKRigController_GetRetargetChainGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetRetargetChainGoal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetRetargetChainGoal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetRetargetChainGoal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetRetargetChainGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetRetargetChainGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetRetargetChains_Statics
	{
		struct IKRigController_eventGetRetargetChains_Parms
		{
			TArray<FBoneChain> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIKRigController_GetRetargetChains_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneChain, METADATA_PARAMS(nullptr, 0) }; // 732417858
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetRetargetChains_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIKRigController_GetRetargetChains_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetRetargetChains_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetRetargetChains_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetRetargetChains_Statics::NewProp_ReturnValue_MetaData)) }; // 732417858
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetRetargetChains_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetRetargetChains_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetRetargetChains_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetRetargetChains_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Get read-only access to the list of Chains. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Get read-only access to the list of Chains." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetRetargetChains_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetRetargetChains", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetRetargetChains_Statics::IKRigController_eventGetRetargetChains_Parms), Z_Construct_UFunction_UIKRigController_GetRetargetChains_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetRetargetChains_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetRetargetChains_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetRetargetChains_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetRetargetChains()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetRetargetChains_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetRetargetChainStartBone_Statics
	{
		struct IKRigController_eventGetRetargetChainStartBone_Parms
		{
			FName ChainName;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChainName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetRetargetChainStartBone_Statics::NewProp_ChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_GetRetargetChainStartBone_Statics::NewProp_ChainName = { "ChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetRetargetChainStartBone_Parms, ChainName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetRetargetChainStartBone_Statics::NewProp_ChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetRetargetChainStartBone_Statics::NewProp_ChainName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_GetRetargetChainStartBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetRetargetChainStartBone_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetRetargetChainStartBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetRetargetChainStartBone_Statics::NewProp_ChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetRetargetChainStartBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetRetargetChainStartBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Get the End Bone name for the given Chain. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Get the End Bone name for the given Chain." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetRetargetChainStartBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetRetargetChainStartBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetRetargetChainStartBone_Statics::IKRigController_eventGetRetargetChainStartBone_Parms), Z_Construct_UFunction_UIKRigController_GetRetargetChainStartBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetRetargetChainStartBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetRetargetChainStartBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetRetargetChainStartBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetRetargetChainStartBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetRetargetChainStartBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetRetargetRoot_Statics
	{
		struct IKRigController_eventGetRetargetRoot_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_GetRetargetRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetRetargetRoot_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetRetargetRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetRetargetRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetRetargetRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Get the name of the Root Bone of the retargeting (can only be one). \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Get the name of the Root Bone of the retargeting (can only be one)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetRetargetRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetRetargetRoot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetRetargetRoot_Statics::IKRigController_eventGetRetargetRoot_Parms), Z_Construct_UFunction_UIKRigController_GetRetargetRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetRetargetRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetRetargetRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetRetargetRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetRetargetRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetRetargetRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetRootBone_Statics
	{
		struct IKRigController_eventGetRootBone_Parms
		{
			int32 SolverIndex;
			FName ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_GetRootBone_Statics::NewProp_SolverIndex = { "SolverIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetRootBone_Parms, SolverIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_GetRootBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetRootBone_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetRootBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetRootBone_Statics::NewProp_SolverIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetRootBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetRootBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Get the name of the root bone on a given solver. (not all solvers support root bones, checks CanSetRootBone() first) \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Get the name of the root bone on a given solver. (not all solvers support root bones, checks CanSetRootBone() first)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetRootBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetRootBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetRootBone_Statics::IKRigController_eventGetRootBone_Parms), Z_Construct_UFunction_UIKRigController_GetRootBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetRootBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetRootBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetRootBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetRootBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetRootBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetSkeletalMesh_Statics
	{
		struct IKRigController_eventGetSkeletalMesh_Parms
		{
			USkeletalMesh* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRigController_GetSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetSkeletalMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetSkeletalMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Get the skeletal mesh this asset is initialized with \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Get the skeletal mesh this asset is initialized with" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetSkeletalMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetSkeletalMesh_Statics::IKRigController_eventGetSkeletalMesh_Parms), Z_Construct_UFunction_UIKRigController_GetSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetSkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetSkeletalMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetSkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetSolverAtIndex_Statics
	{
		struct IKRigController_eventGetSolverAtIndex_Parms
		{
			int32 Index;
			UIKRigSolver* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_GetSolverAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetSolverAtIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRigController_GetSolverAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetSolverAtIndex_Parms, ReturnValue), Z_Construct_UClass_UIKRigSolver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetSolverAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetSolverAtIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetSolverAtIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetSolverAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Get access to the given solver. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Get access to the given solver." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetSolverAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetSolverAtIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetSolverAtIndex_Statics::IKRigController_eventGetSolverAtIndex_Parms), Z_Construct_UFunction_UIKRigController_GetSolverAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetSolverAtIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetSolverAtIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetSolverAtIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetSolverAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetSolverAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_GetSolverEnabled_Statics
	{
		struct IKRigController_eventGetSolverEnabled_Parms
		{
			int32 SolverIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_GetSolverEnabled_Statics::NewProp_SolverIndex = { "SolverIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventGetSolverEnabled_Parms, SolverIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIKRigController_GetSolverEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventGetSolverEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_GetSolverEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventGetSolverEnabled_Parms), &Z_Construct_UFunction_UIKRigController_GetSolverEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_GetSolverEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetSolverEnabled_Statics::NewProp_SolverIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_GetSolverEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_GetSolverEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Get enabled status of the given solver. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Get enabled status of the given solver." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_GetSolverEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "GetSolverEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_GetSolverEnabled_Statics::IKRigController_eventGetSolverEnabled_Parms), Z_Construct_UFunction_UIKRigController_GetSolverEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetSolverEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_GetSolverEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_GetSolverEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_GetSolverEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_GetSolverEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver_Statics
	{
		struct IKRigController_eventIsGoalConnectedToAnySolver_Parms
		{
			FName GoalName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver_Statics::NewProp_GoalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventIsGoalConnectedToAnySolver_Parms, GoalName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver_Statics::NewProp_GoalName_MetaData)) };
	void Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventIsGoalConnectedToAnySolver_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventIsGoalConnectedToAnySolver_Parms), &Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Returns true if the given Goal is connected to ANY solver. False otherwise. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Returns true if the given Goal is connected to ANY solver. False otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "IsGoalConnectedToAnySolver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver_Statics::IKRigController_eventIsGoalConnectedToAnySolver_Parms), Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics
	{
		struct IKRigController_eventIsGoalConnectedToSolver_Parms
		{
			FName GoalName;
			int32 SolverIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::NewProp_GoalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventIsGoalConnectedToSolver_Parms, GoalName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::NewProp_GoalName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::NewProp_SolverIndex = { "SolverIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventIsGoalConnectedToSolver_Parms, SolverIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventIsGoalConnectedToSolver_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventIsGoalConnectedToSolver_Parms), &Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::NewProp_SolverIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Returns true if the given Goal is connected to the given Solver. False otherwise. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Returns true if the given Goal is connected to the given Solver. False otherwise." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "IsGoalConnectedToSolver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::IKRigController_eventIsGoalConnectedToSolver_Parms), Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_IsSkeletalMeshCompatible_Statics
	{
		struct IKRigController_eventIsSkeletalMeshCompatible_Parms
		{
			USkeletalMesh* SkeletalMeshToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRigController_IsSkeletalMeshCompatible_Statics::NewProp_SkeletalMeshToCheck = { "SkeletalMeshToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventIsSkeletalMeshCompatible_Parms, SkeletalMeshToCheck), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIKRigController_IsSkeletalMeshCompatible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventIsSkeletalMeshCompatible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_IsSkeletalMeshCompatible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventIsSkeletalMeshCompatible_Parms), &Z_Construct_UFunction_UIKRigController_IsSkeletalMeshCompatible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_IsSkeletalMeshCompatible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_IsSkeletalMeshCompatible_Statics::NewProp_SkeletalMeshToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_IsSkeletalMeshCompatible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_IsSkeletalMeshCompatible_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Returns true if the provided skeletal mesh could be used with this IK Rig.\n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Returns true if the provided skeletal mesh could be used with this IK Rig." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_IsSkeletalMeshCompatible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "IsSkeletalMeshCompatible", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_IsSkeletalMeshCompatible_Statics::IKRigController_eventIsSkeletalMeshCompatible_Parms), Z_Construct_UFunction_UIKRigController_IsSkeletalMeshCompatible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_IsSkeletalMeshCompatible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_IsSkeletalMeshCompatible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_IsSkeletalMeshCompatible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_IsSkeletalMeshCompatible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_IsSkeletalMeshCompatible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_MoveSolverInStack_Statics
	{
		struct IKRigController_eventMoveSolverInStack_Parms
		{
			int32 SolverToMoveIndex;
			int32 TargetSolverIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverToMoveIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetSolverIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_MoveSolverInStack_Statics::NewProp_SolverToMoveIndex = { "SolverToMoveIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventMoveSolverInStack_Parms, SolverToMoveIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_MoveSolverInStack_Statics::NewProp_TargetSolverIndex = { "TargetSolverIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventMoveSolverInStack_Parms, TargetSolverIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIKRigController_MoveSolverInStack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventMoveSolverInStack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_MoveSolverInStack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventMoveSolverInStack_Parms), &Z_Construct_UFunction_UIKRigController_MoveSolverInStack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_MoveSolverInStack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_MoveSolverInStack_Statics::NewProp_SolverToMoveIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_MoveSolverInStack_Statics::NewProp_TargetSolverIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_MoveSolverInStack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_MoveSolverInStack_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Move the solver at the given index to the target index. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Move the solver at the given index to the target index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_MoveSolverInStack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "MoveSolverInStack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_MoveSolverInStack_Statics::IKRigController_eventMoveSolverInStack_Parms), Z_Construct_UFunction_UIKRigController_MoveSolverInStack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_MoveSolverInStack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_MoveSolverInStack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_MoveSolverInStack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_MoveSolverInStack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_MoveSolverInStack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics
	{
		struct IKRigController_eventRemoveBoneSetting_Parms
		{
			FName BoneName;
			int32 SolverIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventRemoveBoneSetting_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::NewProp_SolverIndex = { "SolverIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventRemoveBoneSetting_Parms, SolverIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventRemoveBoneSetting_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventRemoveBoneSetting_Parms), &Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::NewProp_SolverIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Remove settings for the given Bone/Solver. Does nothing if Bone doesn't have setting in this Solver.\n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Remove settings for the given Bone/Solver. Does nothing if Bone doesn't have setting in this Solver." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "RemoveBoneSetting", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::IKRigController_eventRemoveBoneSetting_Parms), Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_RemoveBoneSetting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_RemoveBoneSetting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_RemoveGoal_Statics
	{
		struct IKRigController_eventRemoveGoal_Parms
		{
			FName GoalName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_RemoveGoal_Statics::NewProp_GoalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_RemoveGoal_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventRemoveGoal_Parms, GoalName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_RemoveGoal_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RemoveGoal_Statics::NewProp_GoalName_MetaData)) };
	void Z_Construct_UFunction_UIKRigController_RemoveGoal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventRemoveGoal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_RemoveGoal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventRemoveGoal_Parms), &Z_Construct_UFunction_UIKRigController_RemoveGoal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_RemoveGoal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_RemoveGoal_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_RemoveGoal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_RemoveGoal_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Remove the Goal by name. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Remove the Goal by name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_RemoveGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "RemoveGoal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_RemoveGoal_Statics::IKRigController_eventRemoveGoal_Parms), Z_Construct_UFunction_UIKRigController_RemoveGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RemoveGoal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_RemoveGoal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RemoveGoal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_RemoveGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_RemoveGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_RemoveRetargetChain_Statics
	{
		struct IKRigController_eventRemoveRetargetChain_Parms
		{
			FName ChainName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChainName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_RemoveRetargetChain_Statics::NewProp_ChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_RemoveRetargetChain_Statics::NewProp_ChainName = { "ChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventRemoveRetargetChain_Parms, ChainName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_RemoveRetargetChain_Statics::NewProp_ChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RemoveRetargetChain_Statics::NewProp_ChainName_MetaData)) };
	void Z_Construct_UFunction_UIKRigController_RemoveRetargetChain_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventRemoveRetargetChain_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_RemoveRetargetChain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventRemoveRetargetChain_Parms), &Z_Construct_UFunction_UIKRigController_RemoveRetargetChain_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_RemoveRetargetChain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_RemoveRetargetChain_Statics::NewProp_ChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_RemoveRetargetChain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_RemoveRetargetChain_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Remove a Chain with the given name. Returns true if a Chain was removed. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Remove a Chain with the given name. Returns true if a Chain was removed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_RemoveRetargetChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "RemoveRetargetChain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_RemoveRetargetChain_Statics::IKRigController_eventRemoveRetargetChain_Parms), Z_Construct_UFunction_UIKRigController_RemoveRetargetChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RemoveRetargetChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_RemoveRetargetChain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RemoveRetargetChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_RemoveRetargetChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_RemoveRetargetChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_RemoveSolver_Statics
	{
		struct IKRigController_eventRemoveSolver_Parms
		{
			int32 SolverIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolverIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_RemoveSolver_Statics::NewProp_SolverIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_RemoveSolver_Statics::NewProp_SolverIndex = { "SolverIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventRemoveSolver_Parms, SolverIndex), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_RemoveSolver_Statics::NewProp_SolverIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RemoveSolver_Statics::NewProp_SolverIndex_MetaData)) };
	void Z_Construct_UFunction_UIKRigController_RemoveSolver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventRemoveSolver_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_RemoveSolver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventRemoveSolver_Parms), &Z_Construct_UFunction_UIKRigController_RemoveSolver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_RemoveSolver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_RemoveSolver_Statics::NewProp_SolverIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_RemoveSolver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_RemoveSolver_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Remove the solver at the given stack index. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Remove the solver at the given stack index." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_RemoveSolver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "RemoveSolver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_RemoveSolver_Statics::IKRigController_eventRemoveSolver_Parms), Z_Construct_UFunction_UIKRigController_RemoveSolver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RemoveSolver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_RemoveSolver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RemoveSolver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_RemoveSolver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_RemoveSolver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_RenameGoal_Statics
	{
		struct IKRigController_eventRenameGoal_Parms
		{
			FName OldName;
			FName PotentialNewName;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PotentialNewName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PotentialNewName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::NewProp_OldName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::NewProp_OldName = { "OldName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventRenameGoal_Parms, OldName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::NewProp_OldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::NewProp_OldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::NewProp_PotentialNewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::NewProp_PotentialNewName = { "PotentialNewName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventRenameGoal_Parms, PotentialNewName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::NewProp_PotentialNewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::NewProp_PotentialNewName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventRenameGoal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::NewProp_OldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::NewProp_PotentialNewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Rename a Goal. Returns new name, which may be different after being sanitized. Returns NAME_None if this fails.\n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Rename a Goal. Returns new name, which may be different after being sanitized. Returns NAME_None if this fails." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "RenameGoal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::IKRigController_eventRenameGoal_Parms), Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_RenameGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_RenameGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics
	{
		struct IKRigController_eventRenameRetargetChain_Parms
		{
			FName ChainName;
			FName NewChainName;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChainName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewChainName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::NewProp_ChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::NewProp_ChainName = { "ChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventRenameRetargetChain_Parms, ChainName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::NewProp_ChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::NewProp_ChainName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::NewProp_NewChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::NewProp_NewChainName = { "NewChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventRenameRetargetChain_Parms, NewChainName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::NewProp_NewChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::NewProp_NewChainName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventRenameRetargetChain_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::NewProp_ChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::NewProp_NewChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Renamed the given Chain. Returns the new name (same as old if unsuccessful). \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Renamed the given Chain. Returns the new name (same as old if unsuccessful)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "RenameRetargetChain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::IKRigController_eventRenameRetargetChain_Parms), Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_RenameRetargetChain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_RenameRetargetChain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics
	{
		struct IKRigController_eventSetBoneExcluded_Parms
		{
			FName BoneName;
			bool bExclude;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExclude_MetaData[];
#endif
		static void NewProp_bExclude_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExclude;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventSetBoneExcluded_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::NewProp_bExclude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::NewProp_bExclude_SetBit(void* Obj)
	{
		((IKRigController_eventSetBoneExcluded_Parms*)Obj)->bExclude = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::NewProp_bExclude = { "bExclude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventSetBoneExcluded_Parms), &Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::NewProp_bExclude_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::NewProp_bExclude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::NewProp_bExclude_MetaData)) };
	void Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventSetBoneExcluded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventSetBoneExcluded_Parms), &Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::NewProp_bExclude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Include/exclude a bone from all the solvers. All bones are included by default. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Include/exclude a bone from all the solvers. All bones are included by default." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "SetBoneExcluded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::IKRigController_eventSetBoneExcluded_Parms), Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_SetBoneExcluded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_SetBoneExcluded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_SetEndBone_Statics
	{
		struct IKRigController_eventSetEndBone_Parms
		{
			FName EndBoneName;
			int32 SolverIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EndBoneName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::NewProp_EndBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::NewProp_EndBoneName = { "EndBoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventSetEndBone_Parms, EndBoneName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::NewProp_EndBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::NewProp_EndBoneName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::NewProp_SolverIndex = { "SolverIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventSetEndBone_Parms, SolverIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventSetEndBone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventSetEndBone_Parms), &Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::NewProp_EndBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::NewProp_SolverIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Set the end bone on a given solver. (not all solvers require extra end bones, checks CanSetEndBone() first) \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Set the end bone on a given solver. (not all solvers require extra end bones, checks CanSetEndBone() first)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "SetEndBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::IKRigController_eventSetEndBone_Parms), Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_SetEndBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_SetEndBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics
	{
		struct IKRigController_eventSetGoalBone_Parms
		{
			FName GoalName;
			FName NewBoneName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewBoneName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::NewProp_GoalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventSetGoalBone_Parms, GoalName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::NewProp_GoalName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::NewProp_NewBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::NewProp_NewBoneName = { "NewBoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventSetGoalBone_Parms, NewBoneName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::NewProp_NewBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::NewProp_NewBoneName_MetaData)) };
	void Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventSetGoalBone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventSetGoalBone_Parms), &Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::NewProp_NewBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// The the Bone that the given Goal should be parented to / associated with. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "The the Bone that the given Goal should be parented to / associated with." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "SetGoalBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::IKRigController_eventSetGoalBone_Parms), Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_SetGoalBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_SetGoalBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics
	{
		struct IKRigController_eventSetRetargetChainEndBone_Parms
		{
			FName ChainName;
			FName EndBoneName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChainName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EndBoneName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::NewProp_ChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::NewProp_ChainName = { "ChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventSetRetargetChainEndBone_Parms, ChainName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::NewProp_ChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::NewProp_ChainName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::NewProp_EndBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::NewProp_EndBoneName = { "EndBoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventSetRetargetChainEndBone_Parms, EndBoneName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::NewProp_EndBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::NewProp_EndBoneName_MetaData)) };
	void Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventSetRetargetChainEndBone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventSetRetargetChainEndBone_Parms), &Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::NewProp_ChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::NewProp_EndBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Set the End Bone for the given Chain. Returns true if operation was successful. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Set the End Bone for the given Chain. Returns true if operation was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "SetRetargetChainEndBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::IKRigController_eventSetRetargetChainEndBone_Parms), Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics
	{
		struct IKRigController_eventSetRetargetChainGoal_Parms
		{
			FName ChainName;
			FName GoalName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChainName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::NewProp_ChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::NewProp_ChainName = { "ChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventSetRetargetChainGoal_Parms, ChainName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::NewProp_ChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::NewProp_ChainName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::NewProp_GoalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventSetRetargetChainGoal_Parms, GoalName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::NewProp_GoalName_MetaData)) };
	void Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventSetRetargetChainGoal_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventSetRetargetChainGoal_Parms), &Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::NewProp_ChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Set the Goal for the given Chain. Returns true if operation was successful. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Set the Goal for the given Chain. Returns true if operation was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "SetRetargetChainGoal", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::IKRigController_eventSetRetargetChainGoal_Parms), Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics
	{
		struct IKRigController_eventSetRetargetChainStartBone_Parms
		{
			FName ChainName;
			FName StartBoneName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChainName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartBoneName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::NewProp_ChainName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::NewProp_ChainName = { "ChainName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventSetRetargetChainStartBone_Parms, ChainName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::NewProp_ChainName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::NewProp_ChainName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::NewProp_StartBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::NewProp_StartBoneName = { "StartBoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventSetRetargetChainStartBone_Parms, StartBoneName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::NewProp_StartBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::NewProp_StartBoneName_MetaData)) };
	void Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventSetRetargetChainStartBone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventSetRetargetChainStartBone_Parms), &Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::NewProp_ChainName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::NewProp_StartBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Set the Start Bone for the given Chain. Returns true if operation was successful. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Set the Start Bone for the given Chain. Returns true if operation was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "SetRetargetChainStartBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::IKRigController_eventSetRetargetChainStartBone_Parms), Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_SetRetargetRoot_Statics
	{
		struct IKRigController_eventSetRetargetRoot_Parms
		{
			FName RootBoneName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RootBoneName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetRetargetRoot_Statics::NewProp_RootBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_SetRetargetRoot_Statics::NewProp_RootBoneName = { "RootBoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventSetRetargetRoot_Parms, RootBoneName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetRetargetRoot_Statics::NewProp_RootBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetRetargetRoot_Statics::NewProp_RootBoneName_MetaData)) };
	void Z_Construct_UFunction_UIKRigController_SetRetargetRoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventSetRetargetRoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_SetRetargetRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventSetRetargetRoot_Parms), &Z_Construct_UFunction_UIKRigController_SetRetargetRoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_SetRetargetRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetRetargetRoot_Statics::NewProp_RootBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetRetargetRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetRetargetRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Set the Root Bone of the retargeting (can only be one). \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Set the Root Bone of the retargeting (can only be one)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_SetRetargetRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "SetRetargetRoot", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_SetRetargetRoot_Statics::IKRigController_eventSetRetargetRoot_Parms), Z_Construct_UFunction_UIKRigController_SetRetargetRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetRetargetRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetRetargetRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetRetargetRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_SetRetargetRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_SetRetargetRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_SetRootBone_Statics
	{
		struct IKRigController_eventSetRootBone_Parms
		{
			FName RootBoneName;
			int32 SolverIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RootBoneName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::NewProp_RootBoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::NewProp_RootBoneName = { "RootBoneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventSetRootBone_Parms, RootBoneName), METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::NewProp_RootBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::NewProp_RootBoneName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::NewProp_SolverIndex = { "SolverIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventSetRootBone_Parms, SolverIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventSetRootBone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventSetRootBone_Parms), &Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::NewProp_RootBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::NewProp_SolverIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Set the root bone on a given solver. (not all solvers support root bones, checks CanSetRootBone() first) \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Set the root bone on a given solver. (not all solvers support root bones, checks CanSetRootBone() first)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "SetRootBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::IKRigController_eventSetRootBone_Parms), Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_SetRootBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_SetRootBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics
	{
		struct IKRigController_eventSetSkeletalMesh_Parms
		{
			USkeletalMesh* SkeletalMesh;
			bool bTransact;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static void NewProp_bTransact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransact;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventSetSkeletalMesh_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics::NewProp_bTransact_SetBit(void* Obj)
	{
		((IKRigController_eventSetSkeletalMesh_Parms*)Obj)->bTransact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics::NewProp_bTransact = { "bTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventSetSkeletalMesh_Parms), &Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics::NewProp_bTransact_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventSetSkeletalMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventSetSkeletalMesh_Parms), &Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics::NewProp_bTransact,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Sets the preview mesh to use. Loads the hierarchy into the asset's IKRigSkeleton.\n// Returns true if the mesh was able to be set. False if it was incompatible for any reason. \n" },
		{ "CPP_Default_bTransact", "false" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Sets the preview mesh to use. Loads the hierarchy into the asset's IKRigSkeleton.\nReturns true if the mesh was able to be set. False if it was incompatible for any reason." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "SetSkeletalMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics::IKRigController_eventSetSkeletalMesh_Parms), Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_SetSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_SetSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics
	{
		struct IKRigController_eventSetSolverEnabled_Parms
		{
			int32 SolverIndex;
			bool bIsEnabled;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SolverIndex;
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics::NewProp_SolverIndex = { "SolverIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IKRigController_eventSetSolverEnabled_Parms, SolverIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((IKRigController_eventSetSolverEnabled_Parms*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventSetSolverEnabled_Parms), &Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((IKRigController_eventSetSolverEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(IKRigController_eventSetSolverEnabled_Parms), &Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics::NewProp_SolverIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "IKRig" },
		{ "Comment", "// Set enabled/disabled status of the given solver. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "Set enabled/disabled status of the given solver." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIKRigController, nullptr, "SetSolverEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics::IKRigController_eventSetSolverEnabled_Parms), Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIKRigController_SetSolverEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIKRigController_SetSolverEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIKRigController);
	UClass* Z_Construct_UClass_UIKRigController_NoRegister()
	{
		return UIKRigController::StaticClass();
	}
	struct Z_Construct_UClass_UIKRigController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIKRigController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IKRigEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIKRigController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIKRigController_AddBoneSetting, "AddBoneSetting" }, // 2903188920
		{ &Z_Construct_UFunction_UIKRigController_AddNewGoal, "AddNewGoal" }, // 2189865511
		{ &Z_Construct_UFunction_UIKRigController_AddRetargetChain, "AddRetargetChain" }, // 172403281
		{ &Z_Construct_UFunction_UIKRigController_AddSolver, "AddSolver" }, // 3762425179
		{ &Z_Construct_UFunction_UIKRigController_ConnectGoalToSolver, "ConnectGoalToSolver" }, // 4125663579
		{ &Z_Construct_UFunction_UIKRigController_DisconnectGoalFromSolver, "DisconnectGoalFromSolver" }, // 2584790843
		{ &Z_Construct_UFunction_UIKRigController_GetAllGoals, "GetAllGoals" }, // 3709896803
		{ &Z_Construct_UFunction_UIKRigController_GetBoneExcluded, "GetBoneExcluded" }, // 2852714816
		{ &Z_Construct_UFunction_UIKRigController_GetBoneForGoal, "GetBoneForGoal" }, // 848488919
		{ &Z_Construct_UFunction_UIKRigController_GetBoneSettings, "GetBoneSettings" }, // 883368654
		{ &Z_Construct_UFunction_UIKRigController_GetController, "GetController" }, // 2167832493
		{ &Z_Construct_UFunction_UIKRigController_GetEndBone, "GetEndBone" }, // 2928325873
		{ &Z_Construct_UFunction_UIKRigController_GetGoal, "GetGoal" }, // 447576293
		{ &Z_Construct_UFunction_UIKRigController_GetGoalNameForBone, "GetGoalNameForBone" }, // 1103531004
		{ &Z_Construct_UFunction_UIKRigController_GetGoalSettingsForSolver, "GetGoalSettingsForSolver" }, // 339634728
		{ &Z_Construct_UFunction_UIKRigController_GetIndexOfSolver, "GetIndexOfSolver" }, // 3396307045
		{ &Z_Construct_UFunction_UIKRigController_GetNumSolvers, "GetNumSolvers" }, // 2400902248
		{ &Z_Construct_UFunction_UIKRigController_GetRefPoseTransformOfBone, "GetRefPoseTransformOfBone" }, // 1462466520
		{ &Z_Construct_UFunction_UIKRigController_GetRetargetChainEndBone, "GetRetargetChainEndBone" }, // 2211271133
		{ &Z_Construct_UFunction_UIKRigController_GetRetargetChainGoal, "GetRetargetChainGoal" }, // 185129122
		{ &Z_Construct_UFunction_UIKRigController_GetRetargetChains, "GetRetargetChains" }, // 3925158525
		{ &Z_Construct_UFunction_UIKRigController_GetRetargetChainStartBone, "GetRetargetChainStartBone" }, // 2467497622
		{ &Z_Construct_UFunction_UIKRigController_GetRetargetRoot, "GetRetargetRoot" }, // 243180972
		{ &Z_Construct_UFunction_UIKRigController_GetRootBone, "GetRootBone" }, // 2600120771
		{ &Z_Construct_UFunction_UIKRigController_GetSkeletalMesh, "GetSkeletalMesh" }, // 4182861646
		{ &Z_Construct_UFunction_UIKRigController_GetSolverAtIndex, "GetSolverAtIndex" }, // 3630711467
		{ &Z_Construct_UFunction_UIKRigController_GetSolverEnabled, "GetSolverEnabled" }, // 2011209563
		{ &Z_Construct_UFunction_UIKRigController_IsGoalConnectedToAnySolver, "IsGoalConnectedToAnySolver" }, // 894389089
		{ &Z_Construct_UFunction_UIKRigController_IsGoalConnectedToSolver, "IsGoalConnectedToSolver" }, // 1994042630
		{ &Z_Construct_UFunction_UIKRigController_IsSkeletalMeshCompatible, "IsSkeletalMeshCompatible" }, // 3917433013
		{ &Z_Construct_UFunction_UIKRigController_MoveSolverInStack, "MoveSolverInStack" }, // 633051966
		{ &Z_Construct_UFunction_UIKRigController_RemoveBoneSetting, "RemoveBoneSetting" }, // 1565667238
		{ &Z_Construct_UFunction_UIKRigController_RemoveGoal, "RemoveGoal" }, // 3381445487
		{ &Z_Construct_UFunction_UIKRigController_RemoveRetargetChain, "RemoveRetargetChain" }, // 1061848089
		{ &Z_Construct_UFunction_UIKRigController_RemoveSolver, "RemoveSolver" }, // 2266203046
		{ &Z_Construct_UFunction_UIKRigController_RenameGoal, "RenameGoal" }, // 39281732
		{ &Z_Construct_UFunction_UIKRigController_RenameRetargetChain, "RenameRetargetChain" }, // 2183014160
		{ &Z_Construct_UFunction_UIKRigController_SetBoneExcluded, "SetBoneExcluded" }, // 1860938271
		{ &Z_Construct_UFunction_UIKRigController_SetEndBone, "SetEndBone" }, // 2085072057
		{ &Z_Construct_UFunction_UIKRigController_SetGoalBone, "SetGoalBone" }, // 648722750
		{ &Z_Construct_UFunction_UIKRigController_SetRetargetChainEndBone, "SetRetargetChainEndBone" }, // 3330247237
		{ &Z_Construct_UFunction_UIKRigController_SetRetargetChainGoal, "SetRetargetChainGoal" }, // 1867857476
		{ &Z_Construct_UFunction_UIKRigController_SetRetargetChainStartBone, "SetRetargetChainStartBone" }, // 3720656554
		{ &Z_Construct_UFunction_UIKRigController_SetRetargetRoot, "SetRetargetRoot" }, // 4225771917
		{ &Z_Construct_UFunction_UIKRigController_SetRootBone, "SetRootBone" }, // 436583487
		{ &Z_Construct_UFunction_UIKRigController_SetSkeletalMesh, "SetSkeletalMesh" }, // 714008209
		{ &Z_Construct_UFunction_UIKRigController_SetSolverEnabled, "SetSolverEnabled" }, // 2618325213
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// A singleton (per-asset) class used to make modifications to a UIKRigDefinition asset\n//\n// All modifications to an IKRigDefinition must go through this controller.\n//\n// Editors can subscribe to the callbacks on this controller to be notified of changes that require reinitialization\n// of a running IK Rig processor instance.\n// The API here is split into public/scripting sections which are accessible from Blueprint/Python and sections that\n// are only relevant to editors in C++.\n" },
		{ "HideCategories", "UObject" },
		{ "IncludePath", "RigEditor/IKRigController.h" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "A singleton (per-asset) class used to make modifications to a UIKRigDefinition asset\n\nAll modifications to an IKRigDefinition must go through this controller.\n\nEditors can subscribe to the callbacks on this controller to be notified of changes that require reinitialization\nof a running IK Rig processor instance.\nThe API here is split into public/scripting sections which are accessible from Blueprint/Python and sections that\nare only relevant to editors in C++." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIKRigController_Statics::NewProp_Asset_MetaData[] = {
		{ "Comment", "// The actual IKRigDefinition asset that this Controller modifies. \n" },
		{ "ModuleRelativePath", "Public/RigEditor/IKRigController.h" },
		{ "ToolTip", "The actual IKRigDefinition asset that this Controller modifies." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UIKRigController_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIKRigController, Asset), Z_Construct_UClass_UIKRigDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIKRigController_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigController_Statics::NewProp_Asset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIKRigController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIKRigController_Statics::NewProp_Asset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIKRigController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIKRigController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIKRigController_Statics::ClassParams = {
		&UIKRigController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIKRigController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigController_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIKRigController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIKRigController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIKRigController()
	{
		if (!Z_Registration_Info_UClass_UIKRigController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIKRigController.OuterSingleton, Z_Construct_UClass_UIKRigController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIKRigController.OuterSingleton;
	}
	template<> IKRIGEDITOR_API UClass* StaticClass<UIKRigController>()
	{
		return UIKRigController::StaticClass();
	}
	UIKRigController::UIKRigController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIKRigController);
	UIKRigController::~UIKRigController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIKRigController, UIKRigController::StaticClass, TEXT("UIKRigController"), &Z_Registration_Info_UClass_UIKRigController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIKRigController), 1135436577U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_2476102330(TEXT("/Script/IKRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_IKRig_Source_IKRigEditor_Public_RigEditor_IKRigController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
