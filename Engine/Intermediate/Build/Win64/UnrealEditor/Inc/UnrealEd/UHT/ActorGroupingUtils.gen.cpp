// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/ActorGroupingUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorGroupingUtils() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_AGroupActor_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorGroupingUtils();
	UNREALED_API UClass* Z_Construct_UClass_UActorGroupingUtils_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	DEFINE_FUNCTION(UActorGroupingUtils::execRemoveSelectedFromGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveSelectedFromGroup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorGroupingUtils::execAddSelectedToGroup)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSelectedToGroup();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorGroupingUtils::execUnlockSelectedGroups)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlockSelectedGroups();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorGroupingUtils::execLockSelectedGroups)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockSelectedGroups();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorGroupingUtils::execUngroupActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToUngroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UngroupActors(Z_Param_Out_ActorsToUngroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorGroupingUtils::execUngroupSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UngroupSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorGroupingUtils::execGroupActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGroupActor**)Z_Param__Result=P_THIS->GroupActors(Z_Param_Out_ActorsToGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorGroupingUtils::execGroupSelected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGroupActor**)Z_Param__Result=P_THIS->GroupSelected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorGroupingUtils::execGet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UActorGroupingUtils**)Z_Param__Result=UActorGroupingUtils::Get();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorGroupingUtils::execSetGroupingActive)
	{
		P_GET_UBOOL(Z_Param_bInGroupingActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		UActorGroupingUtils::SetGroupingActive(Z_Param_bInGroupingActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActorGroupingUtils::execIsGroupingActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UActorGroupingUtils::IsGroupingActive();
		P_NATIVE_END;
	}
	void UActorGroupingUtils::StaticRegisterNativesUActorGroupingUtils()
	{
		UClass* Class = UActorGroupingUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSelectedToGroup", &UActorGroupingUtils::execAddSelectedToGroup },
			{ "Get", &UActorGroupingUtils::execGet },
			{ "GroupActors", &UActorGroupingUtils::execGroupActors },
			{ "GroupSelected", &UActorGroupingUtils::execGroupSelected },
			{ "IsGroupingActive", &UActorGroupingUtils::execIsGroupingActive },
			{ "LockSelectedGroups", &UActorGroupingUtils::execLockSelectedGroups },
			{ "RemoveSelectedFromGroup", &UActorGroupingUtils::execRemoveSelectedFromGroup },
			{ "SetGroupingActive", &UActorGroupingUtils::execSetGroupingActive },
			{ "UngroupActors", &UActorGroupingUtils::execUngroupActors },
			{ "UngroupSelected", &UActorGroupingUtils::execUngroupSelected },
			{ "UnlockSelectedGroups", &UActorGroupingUtils::execUnlockSelectedGroups },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_AddSelectedToGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_AddSelectedToGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "Comment", "/**\n\x09 * Activates \"Add to Group\" mode which allows the user to select a group to append current selection\n\x09 */" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Activates \"Add to Group\" mode which allows the user to select a group to append current selection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_AddSelectedToGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "AddSelectedToGroup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_AddSelectedToGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_AddSelectedToGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_AddSelectedToGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_AddSelectedToGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_Get_Statics
	{
		struct ActorGroupingUtils_eventGet_Parms
		{
			UActorGroupingUtils* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorGroupingUtils_eventGet_Parms, ReturnValue), Z_Construct_UClass_UActorGroupingUtils_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "Comment", "/**\n\x09 * Convenience method for accessing grouping utils in a blueprint or script\n\x09 */" },
		{ "DisplayName", "Get Actor Grouping Utils" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Convenience method for accessing grouping utils in a blueprint or script" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "Get", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::ActorGroupingUtils_eventGet_Parms), Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_Get()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_Get_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics
	{
		struct ActorGroupingUtils_eventGroupActors_Parms
		{
			TArray<AActor*> ActorsToGroup;
			AGroupActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToGroup_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToGroup_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToGroup;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::NewProp_ActorsToGroup_Inner = { "ActorsToGroup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::NewProp_ActorsToGroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::NewProp_ActorsToGroup = { "ActorsToGroup", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorGroupingUtils_eventGroupActors_Parms, ActorsToGroup), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::NewProp_ActorsToGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::NewProp_ActorsToGroup_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorGroupingUtils_eventGroupActors_Parms, ReturnValue), Z_Construct_UClass_AGroupActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::NewProp_ActorsToGroup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::NewProp_ActorsToGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "Comment", "/**\n\x09 * Creates a new group from the provided list of actors removing the actors from any existing groups they are already in\n\x09 */" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Creates a new group from the provided list of actors removing the actors from any existing groups they are already in" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "GroupActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::ActorGroupingUtils_eventGroupActors_Parms), Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_GroupActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_GroupActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_GroupSelected_Statics
	{
		struct ActorGroupingUtils_eventGroupSelected_Parms
		{
			AGroupActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorGroupingUtils_GroupSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorGroupingUtils_eventGroupSelected_Parms, ReturnValue), Z_Construct_UClass_AGroupActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorGroupingUtils_GroupSelected_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorGroupingUtils_GroupSelected_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_GroupSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "Comment", "/**\n\x09 * Creates a new group from the current selection removing the actors from any existing groups they are already in\n\x09 */" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Creates a new group from the current selection removing the actors from any existing groups they are already in" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_GroupSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "GroupSelected", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorGroupingUtils_GroupSelected_Statics::ActorGroupingUtils_eventGroupSelected_Parms), Z_Construct_UFunction_UActorGroupingUtils_GroupSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_GroupSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_GroupSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_GroupSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_GroupSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_GroupSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics
	{
		struct ActorGroupingUtils_eventIsGroupingActive_Parms
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
	void Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ActorGroupingUtils_eventIsGroupingActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorGroupingUtils_eventIsGroupingActive_Parms), &Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "IsGroupingActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::ActorGroupingUtils_eventIsGroupingActive_Parms), Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_LockSelectedGroups_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_LockSelectedGroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "Comment", "/**\n\x09* Locks any groups in the current selection\n\x09*/" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Locks any groups in the current selection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_LockSelectedGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "LockSelectedGroups", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_LockSelectedGroups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_LockSelectedGroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_LockSelectedGroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_LockSelectedGroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_RemoveSelectedFromGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_RemoveSelectedFromGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "Comment", "/**\n\x09 * Removes any groups or actors in the current selection from their immediate parent.\n\x09 * If all actors/subgroups are removed, the parent group will be destroyed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Removes any groups or actors in the current selection from their immediate parent.\nIf all actors/subgroups are removed, the parent group will be destroyed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_RemoveSelectedFromGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "RemoveSelectedFromGroup", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_RemoveSelectedFromGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_RemoveSelectedFromGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_RemoveSelectedFromGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_RemoveSelectedFromGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics
	{
		struct ActorGroupingUtils_eventSetGroupingActive_Parms
		{
			bool bInGroupingActive;
		};
		static void NewProp_bInGroupingActive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInGroupingActive;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::NewProp_bInGroupingActive_SetBit(void* Obj)
	{
		((ActorGroupingUtils_eventSetGroupingActive_Parms*)Obj)->bInGroupingActive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::NewProp_bInGroupingActive = { "bInGroupingActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ActorGroupingUtils_eventSetGroupingActive_Parms), &Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::NewProp_bInGroupingActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::NewProp_bInGroupingActive,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "SetGroupingActive", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::ActorGroupingUtils_eventSetGroupingActive_Parms), Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics
	{
		struct ActorGroupingUtils_eventUngroupActors_Parms
		{
			TArray<AActor*> ActorsToUngroup;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToUngroup_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToUngroup_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToUngroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::NewProp_ActorsToUngroup_Inner = { "ActorsToUngroup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::NewProp_ActorsToUngroup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::NewProp_ActorsToUngroup = { "ActorsToUngroup", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorGroupingUtils_eventUngroupActors_Parms, ActorsToUngroup), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::NewProp_ActorsToUngroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::NewProp_ActorsToUngroup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::NewProp_ActorsToUngroup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::NewProp_ActorsToUngroup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "Comment", "/**\n\x09 * Disbands any groups that the provided actors belong to, does not attempt to maintain any hierarchy\n\x09 */" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Disbands any groups that the provided actors belong to, does not attempt to maintain any hierarchy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "UngroupActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::ActorGroupingUtils_eventUngroupActors_Parms), Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_UngroupActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_UngroupActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_UngroupSelected_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_UngroupSelected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "Comment", "/**\n\x09 * Disbands any groups in the current selection, does not attempt to maintain any hierarchy\n\x09 */" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Disbands any groups in the current selection, does not attempt to maintain any hierarchy" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_UngroupSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "UngroupSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_UngroupSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_UngroupSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_UngroupSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_UngroupSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActorGroupingUtils_UnlockSelectedGroups_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorGroupingUtils_UnlockSelectedGroups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Actor Grouping" },
		{ "Comment", "/**\n\x09 * Unlocks any groups in the current selection\n\x09 */" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Unlocks any groups in the current selection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorGroupingUtils_UnlockSelectedGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorGroupingUtils, nullptr, "UnlockSelectedGroups", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorGroupingUtils_UnlockSelectedGroups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorGroupingUtils_UnlockSelectedGroups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorGroupingUtils_UnlockSelectedGroups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorGroupingUtils_UnlockSelectedGroups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorGroupingUtils);
	UClass* Z_Construct_UClass_UActorGroupingUtils_NoRegister()
	{
		return UActorGroupingUtils::StaticClass();
	}
	struct Z_Construct_UClass_UActorGroupingUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorGroupingUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorGroupingUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorGroupingUtils_AddSelectedToGroup, "AddSelectedToGroup" }, // 51201653
		{ &Z_Construct_UFunction_UActorGroupingUtils_Get, "Get" }, // 3201555129
		{ &Z_Construct_UFunction_UActorGroupingUtils_GroupActors, "GroupActors" }, // 2149151944
		{ &Z_Construct_UFunction_UActorGroupingUtils_GroupSelected, "GroupSelected" }, // 341136085
		{ &Z_Construct_UFunction_UActorGroupingUtils_IsGroupingActive, "IsGroupingActive" }, // 3090161416
		{ &Z_Construct_UFunction_UActorGroupingUtils_LockSelectedGroups, "LockSelectedGroups" }, // 2418004061
		{ &Z_Construct_UFunction_UActorGroupingUtils_RemoveSelectedFromGroup, "RemoveSelectedFromGroup" }, // 2406121748
		{ &Z_Construct_UFunction_UActorGroupingUtils_SetGroupingActive, "SetGroupingActive" }, // 3862235854
		{ &Z_Construct_UFunction_UActorGroupingUtils_UngroupActors, "UngroupActors" }, // 16661498
		{ &Z_Construct_UFunction_UActorGroupingUtils_UngroupSelected, "UngroupSelected" }, // 4095589718
		{ &Z_Construct_UFunction_UActorGroupingUtils_UnlockSelectedGroups, "UnlockSelectedGroups" }, // 3166864470
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorGroupingUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Helper class for grouping actors in the level editor\n */" },
		{ "IncludePath", "ActorGroupingUtils.h" },
		{ "ModuleRelativePath", "Public/ActorGroupingUtils.h" },
		{ "ToolTip", "Helper class for grouping actors in the level editor" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorGroupingUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorGroupingUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorGroupingUtils_Statics::ClassParams = {
		&UActorGroupingUtils::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UActorGroupingUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorGroupingUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorGroupingUtils()
	{
		if (!Z_Registration_Info_UClass_UActorGroupingUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorGroupingUtils.OuterSingleton, Z_Construct_UClass_UActorGroupingUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorGroupingUtils.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorGroupingUtils>()
	{
		return UActorGroupingUtils::StaticClass();
	}
	UActorGroupingUtils::UActorGroupingUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorGroupingUtils);
	UActorGroupingUtils::~UActorGroupingUtils() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorGroupingUtils, UActorGroupingUtils::StaticClass, TEXT("UActorGroupingUtils"), &Z_Registration_Info_UClass_UActorGroupingUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorGroupingUtils), 1697798187U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_1343393590(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_ActorGroupingUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
