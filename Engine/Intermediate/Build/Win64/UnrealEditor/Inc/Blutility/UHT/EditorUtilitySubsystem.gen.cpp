// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/EditorUtilitySubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUtilitySubsystem() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilitySubsystem();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilitySubsystem_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityTask_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister();
	BLUTILITY_API UFunction* Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature_Statics
	{
		struct _Script_Blutility_eventOnEditorUtilityPIEEvent_Parms
		{
			bool bIsSimulating;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSimulating_MetaData[];
#endif
		static void NewProp_bIsSimulating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSimulating;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature_Statics::NewProp_bIsSimulating_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature_Statics::NewProp_bIsSimulating_SetBit(void* Obj)
	{
		((_Script_Blutility_eventOnEditorUtilityPIEEvent_Parms*)Obj)->bIsSimulating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature_Statics::NewProp_bIsSimulating = { "bIsSimulating", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_Blutility_eventOnEditorUtilityPIEEvent_Parms), &Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature_Statics::NewProp_bIsSimulating_SetBit, METADATA_PARAMS(Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature_Statics::NewProp_bIsSimulating_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature_Statics::NewProp_bIsSimulating_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature_Statics::NewProp_bIsSimulating,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate for a PIE event exposed via Editor Utility (begin, end, pause/resume, etc) */" },
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
		{ "ToolTip", "Delegate for a PIE event exposed via Editor Utility (begin, end, pause/resume, etc)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Blutility, nullptr, "OnEditorUtilityPIEEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature_Statics::_Script_Blutility_eventOnEditorUtilityPIEEvent_Parms), Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEditorUtilityPIEEvent_DelegateWrapper(const FMulticastScriptDelegate& OnEditorUtilityPIEEvent, bool bIsSimulating)
{
	struct _Script_Blutility_eventOnEditorUtilityPIEEvent_Parms
	{
		bool bIsSimulating;
	};
	_Script_Blutility_eventOnEditorUtilityPIEEvent_Parms Parms;
	Parms.bIsSimulating=bIsSimulating ? true : false;
	OnEditorUtilityPIEEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UEditorUtilitySubsystem::execRegisterAndExecuteTask)
	{
		P_GET_OBJECT(UEditorUtilityTask,Z_Param_NewTask);
		P_GET_OBJECT(UEditorUtilityTask,Z_Param_OptionalParentTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterAndExecuteTask(Z_Param_NewTask,Z_Param_OptionalParentTask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilitySubsystem::execFindUtilityWidgetFromBlueprint)
	{
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_InBlueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEditorUtilityWidget**)Z_Param__Result=P_THIS->FindUtilityWidgetFromBlueprint(Z_Param_InBlueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilitySubsystem::execUnregisterTabByID)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TabID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UnregisterTabByID(Z_Param_TabID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilitySubsystem::execCloseTabByID)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewTabID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CloseTabByID(Z_Param_NewTabID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilitySubsystem::execDoesTabExist)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewTabID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesTabExist(Z_Param_NewTabID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilitySubsystem::execSpawnRegisteredTabByID)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewTabID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SpawnRegisteredTabByID(Z_Param_NewTabID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilitySubsystem::execRegisterTabAndGetID)
	{
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_InBlueprint);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NewTabID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterTabAndGetID(Z_Param_InBlueprint,Z_Param_Out_NewTabID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilitySubsystem::execSpawnAndRegisterTabWithId)
	{
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_InBlueprint);
		P_GET_PROPERTY(FNameProperty,Z_Param_InTabID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEditorUtilityWidget**)Z_Param__Result=P_THIS->SpawnAndRegisterTabWithId(Z_Param_InBlueprint,Z_Param_InTabID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilitySubsystem::execSpawnAndRegisterTab)
	{
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_InBlueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEditorUtilityWidget**)Z_Param__Result=P_THIS->SpawnAndRegisterTab(Z_Param_InBlueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilitySubsystem::execSpawnAndRegisterTabAndGetID)
	{
		P_GET_OBJECT(UEditorUtilityWidgetBlueprint,Z_Param_InBlueprint);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_NewTabID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEditorUtilityWidget**)Z_Param__Result=P_THIS->SpawnAndRegisterTabAndGetID(Z_Param_InBlueprint,Z_Param_Out_NewTabID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilitySubsystem::execCanRun)
	{
		P_GET_OBJECT(UObject,Z_Param_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanRun(Z_Param_Asset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilitySubsystem::execTryRun)
	{
		P_GET_OBJECT(UObject,Z_Param_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryRun(Z_Param_Asset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorUtilitySubsystem::execReleaseInstanceOfAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReleaseInstanceOfAsset(Z_Param_Asset);
		P_NATIVE_END;
	}
	void UEditorUtilitySubsystem::StaticRegisterNativesUEditorUtilitySubsystem()
	{
		UClass* Class = UEditorUtilitySubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanRun", &UEditorUtilitySubsystem::execCanRun },
			{ "CloseTabByID", &UEditorUtilitySubsystem::execCloseTabByID },
			{ "DoesTabExist", &UEditorUtilitySubsystem::execDoesTabExist },
			{ "FindUtilityWidgetFromBlueprint", &UEditorUtilitySubsystem::execFindUtilityWidgetFromBlueprint },
			{ "RegisterAndExecuteTask", &UEditorUtilitySubsystem::execRegisterAndExecuteTask },
			{ "RegisterTabAndGetID", &UEditorUtilitySubsystem::execRegisterTabAndGetID },
			{ "ReleaseInstanceOfAsset", &UEditorUtilitySubsystem::execReleaseInstanceOfAsset },
			{ "SpawnAndRegisterTab", &UEditorUtilitySubsystem::execSpawnAndRegisterTab },
			{ "SpawnAndRegisterTabAndGetID", &UEditorUtilitySubsystem::execSpawnAndRegisterTabAndGetID },
			{ "SpawnAndRegisterTabWithId", &UEditorUtilitySubsystem::execSpawnAndRegisterTabWithId },
			{ "SpawnRegisteredTabByID", &UEditorUtilitySubsystem::execSpawnRegisteredTabByID },
			{ "TryRun", &UEditorUtilitySubsystem::execTryRun },
			{ "UnregisterTabByID", &UEditorUtilitySubsystem::execUnregisterTabByID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorUtilitySubsystem_CanRun_Statics
	{
		struct EditorUtilitySubsystem_eventCanRun_Parms
		{
			UObject* Asset;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_CanRun_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventCanRun_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorUtilitySubsystem_CanRun_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorUtilitySubsystem_eventCanRun_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_CanRun_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorUtilitySubsystem_eventCanRun_Parms), &Z_Construct_UFunction_UEditorUtilitySubsystem_CanRun_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilitySubsystem_CanRun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_CanRun_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_CanRun_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilitySubsystem_CanRun_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilitySubsystem_CanRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilitySubsystem, nullptr, "CanRun", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilitySubsystem_CanRun_Statics::EditorUtilitySubsystem_eventCanRun_Parms), Z_Construct_UFunction_UEditorUtilitySubsystem_CanRun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_CanRun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilitySubsystem_CanRun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_CanRun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilitySubsystem_CanRun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilitySubsystem_CanRun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilitySubsystem_CloseTabByID_Statics
	{
		struct EditorUtilitySubsystem_eventCloseTabByID_Parms
		{
			FName NewTabID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewTabID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_CloseTabByID_Statics::NewProp_NewTabID = { "NewTabID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventCloseTabByID_Parms, NewTabID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorUtilitySubsystem_CloseTabByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorUtilitySubsystem_eventCloseTabByID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_CloseTabByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorUtilitySubsystem_eventCloseTabByID_Parms), &Z_Construct_UFunction_UEditorUtilitySubsystem_CloseTabByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilitySubsystem_CloseTabByID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_CloseTabByID_Statics::NewProp_NewTabID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_CloseTabByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilitySubsystem_CloseTabByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "/** Given an ID for a tab, try to find and close an existing tab. Returns true if it found a tab to close. */" },
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
		{ "ToolTip", "Given an ID for a tab, try to find and close an existing tab. Returns true if it found a tab to close." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilitySubsystem_CloseTabByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilitySubsystem, nullptr, "CloseTabByID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilitySubsystem_CloseTabByID_Statics::EditorUtilitySubsystem_eventCloseTabByID_Parms), Z_Construct_UFunction_UEditorUtilitySubsystem_CloseTabByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_CloseTabByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilitySubsystem_CloseTabByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_CloseTabByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilitySubsystem_CloseTabByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilitySubsystem_CloseTabByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilitySubsystem_DoesTabExist_Statics
	{
		struct EditorUtilitySubsystem_eventDoesTabExist_Parms
		{
			FName NewTabID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewTabID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_DoesTabExist_Statics::NewProp_NewTabID = { "NewTabID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventDoesTabExist_Parms, NewTabID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorUtilitySubsystem_DoesTabExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorUtilitySubsystem_eventDoesTabExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_DoesTabExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorUtilitySubsystem_eventDoesTabExist_Parms), &Z_Construct_UFunction_UEditorUtilitySubsystem_DoesTabExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilitySubsystem_DoesTabExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_DoesTabExist_Statics::NewProp_NewTabID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_DoesTabExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilitySubsystem_DoesTabExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "/** Given an ID for a tab, try to find an existing tab. Returns true if it found a tab. */" },
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
		{ "ToolTip", "Given an ID for a tab, try to find an existing tab. Returns true if it found a tab." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilitySubsystem_DoesTabExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilitySubsystem, nullptr, "DoesTabExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilitySubsystem_DoesTabExist_Statics::EditorUtilitySubsystem_eventDoesTabExist_Parms), Z_Construct_UFunction_UEditorUtilitySubsystem_DoesTabExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_DoesTabExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilitySubsystem_DoesTabExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_DoesTabExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilitySubsystem_DoesTabExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilitySubsystem_DoesTabExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilitySubsystem_FindUtilityWidgetFromBlueprint_Statics
	{
		struct EditorUtilitySubsystem_eventFindUtilityWidgetFromBlueprint_Parms
		{
			UEditorUtilityWidgetBlueprint* InBlueprint;
			UEditorUtilityWidget* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBlueprint;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_FindUtilityWidgetFromBlueprint_Statics::NewProp_InBlueprint = { "InBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventFindUtilityWidgetFromBlueprint_Parms, InBlueprint), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilitySubsystem_FindUtilityWidgetFromBlueprint_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_FindUtilityWidgetFromBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventFindUtilityWidgetFromBlueprint_Parms, ReturnValue), Z_Construct_UClass_UEditorUtilityWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilitySubsystem_FindUtilityWidgetFromBlueprint_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_FindUtilityWidgetFromBlueprint_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilitySubsystem_FindUtilityWidgetFromBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_FindUtilityWidgetFromBlueprint_Statics::NewProp_InBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_FindUtilityWidgetFromBlueprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilitySubsystem_FindUtilityWidgetFromBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "/** Given an editor utility widget blueprint, get the widget it creates. This will return a null pointer if the widget is not currently in a tab.*/" },
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
		{ "ToolTip", "Given an editor utility widget blueprint, get the widget it creates. This will return a null pointer if the widget is not currently in a tab." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilitySubsystem_FindUtilityWidgetFromBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilitySubsystem, nullptr, "FindUtilityWidgetFromBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilitySubsystem_FindUtilityWidgetFromBlueprint_Statics::EditorUtilitySubsystem_eventFindUtilityWidgetFromBlueprint_Parms), Z_Construct_UFunction_UEditorUtilitySubsystem_FindUtilityWidgetFromBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_FindUtilityWidgetFromBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilitySubsystem_FindUtilityWidgetFromBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_FindUtilityWidgetFromBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilitySubsystem_FindUtilityWidgetFromBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilitySubsystem_FindUtilityWidgetFromBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterAndExecuteTask_Statics
	{
		struct EditorUtilitySubsystem_eventRegisterAndExecuteTask_Parms
		{
			UEditorUtilityTask* NewTask;
			UEditorUtilityTask* OptionalParentTask;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTask;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalParentTask;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterAndExecuteTask_Statics::NewProp_NewTask = { "NewTask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventRegisterAndExecuteTask_Parms, NewTask), Z_Construct_UClass_UEditorUtilityTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterAndExecuteTask_Statics::NewProp_OptionalParentTask = { "OptionalParentTask", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventRegisterAndExecuteTask_Parms, OptionalParentTask), Z_Construct_UClass_UEditorUtilityTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterAndExecuteTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterAndExecuteTask_Statics::NewProp_NewTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterAndExecuteTask_Statics::NewProp_OptionalParentTask,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterAndExecuteTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "/**  */" },
		{ "CPP_Default_OptionalParentTask", "None" },
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterAndExecuteTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilitySubsystem, nullptr, "RegisterAndExecuteTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterAndExecuteTask_Statics::EditorUtilitySubsystem_eventRegisterAndExecuteTask_Parms), Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterAndExecuteTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterAndExecuteTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterAndExecuteTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterAndExecuteTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterAndExecuteTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterAndExecuteTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterTabAndGetID_Statics
	{
		struct EditorUtilitySubsystem_eventRegisterTabAndGetID_Parms
		{
			UEditorUtilityWidgetBlueprint* InBlueprint;
			FName NewTabID;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBlueprint;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewTabID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterTabAndGetID_Statics::NewProp_InBlueprint = { "InBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventRegisterTabAndGetID_Parms, InBlueprint), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterTabAndGetID_Statics::NewProp_NewTabID = { "NewTabID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventRegisterTabAndGetID_Parms, NewTabID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterTabAndGetID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterTabAndGetID_Statics::NewProp_InBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterTabAndGetID_Statics::NewProp_NewTabID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterTabAndGetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterTabAndGetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilitySubsystem, nullptr, "RegisterTabAndGetID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterTabAndGetID_Statics::EditorUtilitySubsystem_eventRegisterTabAndGetID_Parms), Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterTabAndGetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterTabAndGetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterTabAndGetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterTabAndGetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterTabAndGetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterTabAndGetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilitySubsystem_ReleaseInstanceOfAsset_Statics
	{
		struct EditorUtilitySubsystem_eventReleaseInstanceOfAsset_Parms
		{
			UObject* Asset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_ReleaseInstanceOfAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventReleaseInstanceOfAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilitySubsystem_ReleaseInstanceOfAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_ReleaseInstanceOfAsset_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilitySubsystem_ReleaseInstanceOfAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "// Allow startup object to be garbage collected\n" },
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
		{ "ToolTip", "Allow startup object to be garbage collected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilitySubsystem_ReleaseInstanceOfAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilitySubsystem, nullptr, "ReleaseInstanceOfAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilitySubsystem_ReleaseInstanceOfAsset_Statics::EditorUtilitySubsystem_eventReleaseInstanceOfAsset_Parms), Z_Construct_UFunction_UEditorUtilitySubsystem_ReleaseInstanceOfAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_ReleaseInstanceOfAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilitySubsystem_ReleaseInstanceOfAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_ReleaseInstanceOfAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilitySubsystem_ReleaseInstanceOfAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilitySubsystem_ReleaseInstanceOfAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTab_Statics
	{
		struct EditorUtilitySubsystem_eventSpawnAndRegisterTab_Parms
		{
			UEditorUtilityWidgetBlueprint* InBlueprint;
			UEditorUtilityWidget* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBlueprint;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTab_Statics::NewProp_InBlueprint = { "InBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventSpawnAndRegisterTab_Parms, InBlueprint), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTab_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTab_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventSpawnAndRegisterTab_Parms, ReturnValue), Z_Construct_UClass_UEditorUtilityWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTab_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTab_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTab_Statics::NewProp_InBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTab_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTab_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilitySubsystem, nullptr, "SpawnAndRegisterTab", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTab_Statics::EditorUtilitySubsystem_eventSpawnAndRegisterTab_Parms), Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID_Statics
	{
		struct EditorUtilitySubsystem_eventSpawnAndRegisterTabAndGetID_Parms
		{
			UEditorUtilityWidgetBlueprint* InBlueprint;
			FName NewTabID;
			UEditorUtilityWidget* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBlueprint;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewTabID;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID_Statics::NewProp_InBlueprint = { "InBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventSpawnAndRegisterTabAndGetID_Parms, InBlueprint), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID_Statics::NewProp_NewTabID = { "NewTabID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventSpawnAndRegisterTabAndGetID_Parms, NewTabID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventSpawnAndRegisterTabAndGetID_Parms, ReturnValue), Z_Construct_UClass_UEditorUtilityWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID_Statics::NewProp_InBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID_Statics::NewProp_NewTabID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilitySubsystem, nullptr, "SpawnAndRegisterTabAndGetID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID_Statics::EditorUtilitySubsystem_eventSpawnAndRegisterTabAndGetID_Parms), Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId_Statics
	{
		struct EditorUtilitySubsystem_eventSpawnAndRegisterTabWithId_Parms
		{
			UEditorUtilityWidgetBlueprint* InBlueprint;
			FName InTabID;
			UEditorUtilityWidget* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InBlueprint;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InTabID;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId_Statics::NewProp_InBlueprint = { "InBlueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventSpawnAndRegisterTabWithId_Parms, InBlueprint), Z_Construct_UClass_UEditorUtilityWidgetBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId_Statics::NewProp_InTabID = { "InTabID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventSpawnAndRegisterTabWithId_Parms, InTabID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventSpawnAndRegisterTabWithId_Parms, ReturnValue), Z_Construct_UClass_UEditorUtilityWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId_Statics::NewProp_InBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId_Statics::NewProp_InTabID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "/**\n\x09 * Unlike SpawnAndRegisterTabAndGetID allows spawn tab while providing TabID from Python scripts or BP\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
		{ "ToolTip", "Unlike SpawnAndRegisterTabAndGetID allows spawn tab while providing TabID from Python scripts or BP" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilitySubsystem, nullptr, "SpawnAndRegisterTabWithId", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId_Statics::EditorUtilitySubsystem_eventSpawnAndRegisterTabWithId_Parms), Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnRegisteredTabByID_Statics
	{
		struct EditorUtilitySubsystem_eventSpawnRegisteredTabByID_Parms
		{
			FName NewTabID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewTabID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnRegisteredTabByID_Statics::NewProp_NewTabID = { "NewTabID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventSpawnRegisteredTabByID_Parms, NewTabID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnRegisteredTabByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorUtilitySubsystem_eventSpawnRegisteredTabByID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnRegisteredTabByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorUtilitySubsystem_eventSpawnRegisteredTabByID_Parms), &Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnRegisteredTabByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnRegisteredTabByID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnRegisteredTabByID_Statics::NewProp_NewTabID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnRegisteredTabByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnRegisteredTabByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "/** Given an ID for a tab, try to find a tab spawner that matches, and then spawn a tab. Returns true if it was able to find a matching tab spawner */" },
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
		{ "ToolTip", "Given an ID for a tab, try to find a tab spawner that matches, and then spawn a tab. Returns true if it was able to find a matching tab spawner" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnRegisteredTabByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilitySubsystem, nullptr, "SpawnRegisteredTabByID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnRegisteredTabByID_Statics::EditorUtilitySubsystem_eventSpawnRegisteredTabByID_Parms), Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnRegisteredTabByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnRegisteredTabByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnRegisteredTabByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnRegisteredTabByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnRegisteredTabByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnRegisteredTabByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilitySubsystem_TryRun_Statics
	{
		struct EditorUtilitySubsystem_eventTryRun_Parms
		{
			UObject* Asset;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_TryRun_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventTryRun_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorUtilitySubsystem_TryRun_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorUtilitySubsystem_eventTryRun_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_TryRun_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorUtilitySubsystem_eventTryRun_Parms), &Z_Construct_UFunction_UEditorUtilitySubsystem_TryRun_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilitySubsystem_TryRun_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_TryRun_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_TryRun_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilitySubsystem_TryRun_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilitySubsystem_TryRun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilitySubsystem, nullptr, "TryRun", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilitySubsystem_TryRun_Statics::EditorUtilitySubsystem_eventTryRun_Parms), Z_Construct_UFunction_UEditorUtilitySubsystem_TryRun_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_TryRun_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilitySubsystem_TryRun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_TryRun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilitySubsystem_TryRun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilitySubsystem_TryRun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorUtilitySubsystem_UnregisterTabByID_Statics
	{
		struct EditorUtilitySubsystem_eventUnregisterTabByID_Parms
		{
			FName TabID;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TabID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_UnregisterTabByID_Statics::NewProp_TabID = { "TabID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorUtilitySubsystem_eventUnregisterTabByID_Parms, TabID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorUtilitySubsystem_UnregisterTabByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorUtilitySubsystem_eventUnregisterTabByID_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorUtilitySubsystem_UnregisterTabByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorUtilitySubsystem_eventUnregisterTabByID_Parms), &Z_Construct_UFunction_UEditorUtilitySubsystem_UnregisterTabByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorUtilitySubsystem_UnregisterTabByID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_UnregisterTabByID_Statics::NewProp_TabID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorUtilitySubsystem_UnregisterTabByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorUtilitySubsystem_UnregisterTabByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "/** Given an ID for a tab, try to close and unregister a tab that was registered through this subsystem */" },
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
		{ "ToolTip", "Given an ID for a tab, try to close and unregister a tab that was registered through this subsystem" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorUtilitySubsystem_UnregisterTabByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorUtilitySubsystem, nullptr, "UnregisterTabByID", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorUtilitySubsystem_UnregisterTabByID_Statics::EditorUtilitySubsystem_eventUnregisterTabByID_Parms), Z_Construct_UFunction_UEditorUtilitySubsystem_UnregisterTabByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_UnregisterTabByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorUtilitySubsystem_UnregisterTabByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorUtilitySubsystem_UnregisterTabByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorUtilitySubsystem_UnregisterTabByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorUtilitySubsystem_UnregisterTabByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorUtilitySubsystem);
	UClass* Z_Construct_UClass_UEditorUtilitySubsystem_NoRegister()
	{
		return UEditorUtilitySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUtilitySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedUIs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadedUIs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LoadedUIs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartupObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartupObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnBeginPIE_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnBeginPIE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEndPIE_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEndPIE;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectInstances_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ObjectInstances_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectInstances_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectInstances;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveTaskStack_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveTaskStack_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveTaskStack;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferencedObjects_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReferencedObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUtilitySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorUtilitySubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorUtilitySubsystem_CanRun, "CanRun" }, // 704767953
		{ &Z_Construct_UFunction_UEditorUtilitySubsystem_CloseTabByID, "CloseTabByID" }, // 3851455362
		{ &Z_Construct_UFunction_UEditorUtilitySubsystem_DoesTabExist, "DoesTabExist" }, // 3853879287
		{ &Z_Construct_UFunction_UEditorUtilitySubsystem_FindUtilityWidgetFromBlueprint, "FindUtilityWidgetFromBlueprint" }, // 225551416
		{ &Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterAndExecuteTask, "RegisterAndExecuteTask" }, // 2027128634
		{ &Z_Construct_UFunction_UEditorUtilitySubsystem_RegisterTabAndGetID, "RegisterTabAndGetID" }, // 3949370653
		{ &Z_Construct_UFunction_UEditorUtilitySubsystem_ReleaseInstanceOfAsset, "ReleaseInstanceOfAsset" }, // 2814887865
		{ &Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTab, "SpawnAndRegisterTab" }, // 1971030609
		{ &Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabAndGetID, "SpawnAndRegisterTabAndGetID" }, // 2282871193
		{ &Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnAndRegisterTabWithId, "SpawnAndRegisterTabWithId" }, // 2175804863
		{ &Z_Construct_UFunction_UEditorUtilitySubsystem_SpawnRegisteredTabByID, "SpawnRegisteredTabByID" }, // 509193978
		{ &Z_Construct_UFunction_UEditorUtilitySubsystem_TryRun, "TryRun" }, // 2527669488
		{ &Z_Construct_UFunction_UEditorUtilitySubsystem_UnregisterTabByID, "UnregisterTabByID" }, // 23479875
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilitySubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorUtilitySubsystem.h" },
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_LoadedUIs_Inner = { "LoadedUIs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_LoadedUIs_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_LoadedUIs = { "LoadedUIs", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilitySubsystem, LoadedUIs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_LoadedUIs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_LoadedUIs_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_StartupObjects_Inner = { "StartupObjects", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_StartupObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_StartupObjects = { "StartupObjects", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilitySubsystem, StartupObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_StartupObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_StartupObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_OnBeginPIE_MetaData[] = {
		{ "Comment", "/** Expose Begin PIE to blueprints.*/" },
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
		{ "ToolTip", "Expose Begin PIE to blueprints." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_OnBeginPIE = { "OnBeginPIE", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilitySubsystem, OnBeginPIE), Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_OnBeginPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_OnBeginPIE_MetaData)) }; // 388098399
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_OnEndPIE_MetaData[] = {
		{ "Comment", "/** Expose End PIE to blueprints.*/" },
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
		{ "ToolTip", "Expose End PIE to blueprints." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_OnEndPIE = { "OnEndPIE", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilitySubsystem, OnEndPIE), Z_Construct_UDelegateFunction_Blutility_OnEditorUtilityPIEEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_OnEndPIE_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_OnEndPIE_MetaData)) }; // 388098399
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ObjectInstances_ValueProp = { "ObjectInstances", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ObjectInstances_Key_KeyProp = { "ObjectInstances_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ObjectInstances_MetaData[] = {
		{ "Comment", "/*Instance*/" },
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
		{ "ToolTip", "Instance" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ObjectInstances = { "ObjectInstances", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilitySubsystem, ObjectInstances), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ObjectInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ObjectInstances_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ActiveTaskStack_Inner = { "ActiveTaskStack", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEditorUtilityTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ActiveTaskStack_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ActiveTaskStack = { "ActiveTaskStack", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilitySubsystem, ActiveTaskStack), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ActiveTaskStack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ActiveTaskStack_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ReferencedObjects_ElementProp = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ReferencedObjects_MetaData[] = {
		{ "Comment", "/** List of objects that are being kept alive by this subsystem. */" },
		{ "ModuleRelativePath", "Public/EditorUtilitySubsystem.h" },
		{ "ToolTip", "List of objects that are being kept alive by this subsystem." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ReferencedObjects = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorUtilitySubsystem, ReferencedObjects), METADATA_PARAMS(Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ReferencedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ReferencedObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorUtilitySubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_LoadedUIs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_LoadedUIs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_StartupObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_StartupObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_OnBeginPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_OnEndPIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ObjectInstances_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ObjectInstances_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ObjectInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ActiveTaskStack_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ActiveTaskStack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ReferencedObjects_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorUtilitySubsystem_Statics::NewProp_ReferencedObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUtilitySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUtilitySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorUtilitySubsystem_Statics::ClassParams = {
		&UEditorUtilitySubsystem::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEditorUtilitySubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilitySubsystem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUtilitySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilitySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUtilitySubsystem()
	{
		if (!Z_Registration_Info_UClass_UEditorUtilitySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorUtilitySubsystem.OuterSingleton, Z_Construct_UClass_UEditorUtilitySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorUtilitySubsystem.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UEditorUtilitySubsystem>()
	{
		return UEditorUtilitySubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUtilitySubsystem);
	UEditorUtilitySubsystem::~UEditorUtilitySubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorUtilitySubsystem, UEditorUtilitySubsystem::StaticClass, TEXT("UEditorUtilitySubsystem"), &Z_Registration_Info_UClass_UEditorUtilitySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorUtilitySubsystem), 2598137572U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_2588895712(TEXT("/Script/Blutility"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_EditorUtilitySubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
