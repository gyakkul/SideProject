// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/VPUIBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPUIBase() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VPUtilitiesEditor();
	VPBOOKMARK_API UClass* Z_Construct_UClass_UVPBookmark_NoRegister();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_UVPUIBase();
	VPUTILITIESEDITOR_API UClass* Z_Construct_UClass_UVPUIBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVPUIBase::execGetLastVirtualProductionLogMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLastVirtualProductionLogMessage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVPUIBase::execAppendVirtualProductionLog)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AppendVirtualProductionLog(Z_Param_NewMessage);
		P_NATIVE_END;
	}
	struct VPUIBase_eventOnBookmarkCleared_Parms
	{
		UVPBookmark* Cleared;
	};
	struct VPUIBase_eventOnBookmarkCreated_Parms
	{
		UVPBookmark* Created;
	};
	struct VPUIBase_eventOnBookmarkDestroyed_Parms
	{
		UVPBookmark* Destroyed;
	};
	struct VPUIBase_eventOnFlightModeChanged_Parms
	{
		bool WasEntered;
	};
	static FName NAME_UVPUIBase_OnBookmarkCleared = FName(TEXT("OnBookmarkCleared"));
	void UVPUIBase::OnBookmarkCleared(UVPBookmark* Cleared)
	{
		VPUIBase_eventOnBookmarkCleared_Parms Parms;
		Parms.Cleared=Cleared;
		ProcessEvent(FindFunctionChecked(NAME_UVPUIBase_OnBookmarkCleared),&Parms);
	}
	static FName NAME_UVPUIBase_OnBookmarkCreated = FName(TEXT("OnBookmarkCreated"));
	void UVPUIBase::OnBookmarkCreated(UVPBookmark* Created)
	{
		VPUIBase_eventOnBookmarkCreated_Parms Parms;
		Parms.Created=Created;
		ProcessEvent(FindFunctionChecked(NAME_UVPUIBase_OnBookmarkCreated),&Parms);
	}
	static FName NAME_UVPUIBase_OnBookmarkDestroyed = FName(TEXT("OnBookmarkDestroyed"));
	void UVPUIBase::OnBookmarkDestroyed(UVPBookmark* Destroyed)
	{
		VPUIBase_eventOnBookmarkDestroyed_Parms Parms;
		Parms.Destroyed=Destroyed;
		ProcessEvent(FindFunctionChecked(NAME_UVPUIBase_OnBookmarkDestroyed),&Parms);
	}
	static FName NAME_UVPUIBase_OnFlightModeChanged = FName(TEXT("OnFlightModeChanged"));
	void UVPUIBase::OnFlightModeChanged(bool WasEntered)
	{
		VPUIBase_eventOnFlightModeChanged_Parms Parms;
		Parms.WasEntered=WasEntered ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UVPUIBase_OnFlightModeChanged),&Parms);
	}
	static FName NAME_UVPUIBase_OnMapChanged = FName(TEXT("OnMapChanged"));
	void UVPUIBase::OnMapChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVPUIBase_OnMapChanged),NULL);
	}
	static FName NAME_UVPUIBase_OnSelectedActorChanged = FName(TEXT("OnSelectedActorChanged"));
	void UVPUIBase::OnSelectedActorChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVPUIBase_OnSelectedActorChanged),NULL);
	}
	static FName NAME_UVPUIBase_OnSelectedActorPropertyChanged = FName(TEXT("OnSelectedActorPropertyChanged"));
	void UVPUIBase::OnSelectedActorPropertyChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVPUIBase_OnSelectedActorPropertyChanged),NULL);
	}
	static FName NAME_UVPUIBase_OnVirtualProductionLogUpdated = FName(TEXT("OnVirtualProductionLogUpdated"));
	void UVPUIBase::OnVirtualProductionLogUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UVPUIBase_OnVirtualProductionLogUpdated),NULL);
	}
	void UVPUIBase::StaticRegisterNativesUVPUIBase()
	{
		UClass* Class = UVPUIBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendVirtualProductionLog", &UVPUIBase::execAppendVirtualProductionLog },
			{ "GetLastVirtualProductionLogMessage", &UVPUIBase::execGetLastVirtualProductionLogMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVPUIBase_AppendVirtualProductionLog_Statics
	{
		struct VPUIBase_eventAppendVirtualProductionLog_Parms
		{
			FString NewMessage;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVPUIBase_AppendVirtualProductionLog_Statics::NewProp_NewMessage = { "NewMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPUIBase_eventAppendVirtualProductionLog_Parms, NewMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPUIBase_AppendVirtualProductionLog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUIBase_AppendVirtualProductionLog_Statics::NewProp_NewMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUIBase_AppendVirtualProductionLog_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualProduction" },
		{ "ModuleRelativePath", "Private/VPUIBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPUIBase_AppendVirtualProductionLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPUIBase, nullptr, "AppendVirtualProductionLog", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPUIBase_AppendVirtualProductionLog_Statics::VPUIBase_eventAppendVirtualProductionLog_Parms), Z_Construct_UFunction_UVPUIBase_AppendVirtualProductionLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUIBase_AppendVirtualProductionLog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPUIBase_AppendVirtualProductionLog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUIBase_AppendVirtualProductionLog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPUIBase_AppendVirtualProductionLog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPUIBase_AppendVirtualProductionLog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPUIBase_GetLastVirtualProductionLogMessage_Statics
	{
		struct VPUIBase_eventGetLastVirtualProductionLogMessage_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVPUIBase_GetLastVirtualProductionLogMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPUIBase_eventGetLastVirtualProductionLogMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPUIBase_GetLastVirtualProductionLogMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUIBase_GetLastVirtualProductionLogMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUIBase_GetLastVirtualProductionLogMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualProduction" },
		{ "Comment", "/* Log */" },
		{ "ModuleRelativePath", "Private/VPUIBase.h" },
		{ "ToolTip", "Log" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPUIBase_GetLastVirtualProductionLogMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPUIBase, nullptr, "GetLastVirtualProductionLogMessage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVPUIBase_GetLastVirtualProductionLogMessage_Statics::VPUIBase_eventGetLastVirtualProductionLogMessage_Parms), Z_Construct_UFunction_UVPUIBase_GetLastVirtualProductionLogMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUIBase_GetLastVirtualProductionLogMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPUIBase_GetLastVirtualProductionLogMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUIBase_GetLastVirtualProductionLogMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPUIBase_GetLastVirtualProductionLogMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPUIBase_GetLastVirtualProductionLogMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPUIBase_OnBookmarkCleared_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Cleared;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPUIBase_OnBookmarkCleared_Statics::NewProp_Cleared = { "Cleared", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPUIBase_eventOnBookmarkCleared_Parms, Cleared), Z_Construct_UClass_UVPBookmark_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPUIBase_OnBookmarkCleared_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUIBase_OnBookmarkCleared_Statics::NewProp_Cleared,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUIBase_OnBookmarkCleared_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Private/VPUIBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPUIBase_OnBookmarkCleared_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPUIBase, nullptr, "OnBookmarkCleared", nullptr, nullptr, sizeof(VPUIBase_eventOnBookmarkCleared_Parms), Z_Construct_UFunction_UVPUIBase_OnBookmarkCleared_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUIBase_OnBookmarkCleared_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPUIBase_OnBookmarkCleared_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUIBase_OnBookmarkCleared_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPUIBase_OnBookmarkCleared()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPUIBase_OnBookmarkCleared_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPUIBase_OnBookmarkCreated_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Created;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPUIBase_OnBookmarkCreated_Statics::NewProp_Created = { "Created", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPUIBase_eventOnBookmarkCreated_Parms, Created), Z_Construct_UClass_UVPBookmark_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPUIBase_OnBookmarkCreated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUIBase_OnBookmarkCreated_Statics::NewProp_Created,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUIBase_OnBookmarkCreated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Private/VPUIBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPUIBase_OnBookmarkCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPUIBase, nullptr, "OnBookmarkCreated", nullptr, nullptr, sizeof(VPUIBase_eventOnBookmarkCreated_Parms), Z_Construct_UFunction_UVPUIBase_OnBookmarkCreated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUIBase_OnBookmarkCreated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPUIBase_OnBookmarkCreated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUIBase_OnBookmarkCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPUIBase_OnBookmarkCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPUIBase_OnBookmarkCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPUIBase_OnBookmarkDestroyed_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Destroyed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVPUIBase_OnBookmarkDestroyed_Statics::NewProp_Destroyed = { "Destroyed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPUIBase_eventOnBookmarkDestroyed_Parms, Destroyed), Z_Construct_UClass_UVPBookmark_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPUIBase_OnBookmarkDestroyed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUIBase_OnBookmarkDestroyed_Statics::NewProp_Destroyed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUIBase_OnBookmarkDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Private/VPUIBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPUIBase_OnBookmarkDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPUIBase, nullptr, "OnBookmarkDestroyed", nullptr, nullptr, sizeof(VPUIBase_eventOnBookmarkDestroyed_Parms), Z_Construct_UFunction_UVPUIBase_OnBookmarkDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUIBase_OnBookmarkDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPUIBase_OnBookmarkDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUIBase_OnBookmarkDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPUIBase_OnBookmarkDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPUIBase_OnBookmarkDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPUIBase_OnFlightModeChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WasEntered_MetaData[];
#endif
		static void NewProp_WasEntered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WasEntered;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUIBase_OnFlightModeChanged_Statics::NewProp_WasEntered_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVPUIBase_OnFlightModeChanged_Statics::NewProp_WasEntered_SetBit(void* Obj)
	{
		((VPUIBase_eventOnFlightModeChanged_Parms*)Obj)->WasEntered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVPUIBase_OnFlightModeChanged_Statics::NewProp_WasEntered = { "WasEntered", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VPUIBase_eventOnFlightModeChanged_Parms), &Z_Construct_UFunction_UVPUIBase_OnFlightModeChanged_Statics::NewProp_WasEntered_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UVPUIBase_OnFlightModeChanged_Statics::NewProp_WasEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUIBase_OnFlightModeChanged_Statics::NewProp_WasEntered_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVPUIBase_OnFlightModeChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVPUIBase_OnFlightModeChanged_Statics::NewProp_WasEntered,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUIBase_OnFlightModeChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Fires whenever flight mode changes. True if enabled, false is disengaged */" },
		{ "ModuleRelativePath", "Private/VPUIBase.h" },
		{ "ToolTip", "Fires whenever flight mode changes. True if enabled, false is disengaged" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPUIBase_OnFlightModeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPUIBase, nullptr, "OnFlightModeChanged", nullptr, nullptr, sizeof(VPUIBase_eventOnFlightModeChanged_Parms), Z_Construct_UFunction_UVPUIBase_OnFlightModeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUIBase_OnFlightModeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPUIBase_OnFlightModeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUIBase_OnFlightModeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPUIBase_OnFlightModeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPUIBase_OnFlightModeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPUIBase_OnMapChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUIBase_OnMapChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Private/VPUIBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPUIBase_OnMapChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPUIBase, nullptr, "OnMapChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPUIBase_OnMapChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUIBase_OnMapChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPUIBase_OnMapChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPUIBase_OnMapChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPUIBase_OnSelectedActorChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUIBase_OnSelectedActorChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/* Bookmarks */" },
		{ "ModuleRelativePath", "Private/VPUIBase.h" },
		{ "ToolTip", "Bookmarks" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPUIBase_OnSelectedActorChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPUIBase, nullptr, "OnSelectedActorChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPUIBase_OnSelectedActorChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUIBase_OnSelectedActorChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPUIBase_OnSelectedActorChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPUIBase_OnSelectedActorChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPUIBase_OnSelectedActorPropertyChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUIBase_OnSelectedActorPropertyChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** UI subscribes to this to know when the property window for SelectedActor should be refreshed */" },
		{ "ModuleRelativePath", "Private/VPUIBase.h" },
		{ "ToolTip", "UI subscribes to this to know when the property window for SelectedActor should be refreshed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPUIBase_OnSelectedActorPropertyChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPUIBase, nullptr, "OnSelectedActorPropertyChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPUIBase_OnSelectedActorPropertyChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUIBase_OnSelectedActorPropertyChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPUIBase_OnSelectedActorPropertyChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPUIBase_OnSelectedActorPropertyChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVPUIBase_OnVirtualProductionLogUpdated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVPUIBase_OnVirtualProductionLogUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Private/VPUIBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVPUIBase_OnVirtualProductionLogUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVPUIBase, nullptr, "OnVirtualProductionLogUpdated", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVPUIBase_OnVirtualProductionLogUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVPUIBase_OnVirtualProductionLogUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVPUIBase_OnVirtualProductionLogUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVPUIBase_OnVirtualProductionLogUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPUIBase);
	UClass* Z_Construct_UClass_UVPUIBase_NoRegister()
	{
		return UVPUIBase::StaticClass();
	}
	struct Z_Construct_UClass_UVPUIBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectedActor;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VirtualProductionLog_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualProductionLog_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VirtualProductionLog;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPUIBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilitiesEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVPUIBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVPUIBase_AppendVirtualProductionLog, "AppendVirtualProductionLog" }, // 1791544686
		{ &Z_Construct_UFunction_UVPUIBase_GetLastVirtualProductionLogMessage, "GetLastVirtualProductionLogMessage" }, // 2130279552
		{ &Z_Construct_UFunction_UVPUIBase_OnBookmarkCleared, "OnBookmarkCleared" }, // 2212288096
		{ &Z_Construct_UFunction_UVPUIBase_OnBookmarkCreated, "OnBookmarkCreated" }, // 2723681007
		{ &Z_Construct_UFunction_UVPUIBase_OnBookmarkDestroyed, "OnBookmarkDestroyed" }, // 3890308723
		{ &Z_Construct_UFunction_UVPUIBase_OnFlightModeChanged, "OnFlightModeChanged" }, // 2285379948
		{ &Z_Construct_UFunction_UVPUIBase_OnMapChanged, "OnMapChanged" }, // 1384053850
		{ &Z_Construct_UFunction_UVPUIBase_OnSelectedActorChanged, "OnSelectedActorChanged" }, // 1051045986
		{ &Z_Construct_UFunction_UVPUIBase_OnSelectedActorPropertyChanged, "OnSelectedActorPropertyChanged" }, // 4042390143
		{ &Z_Construct_UFunction_UVPUIBase_OnVirtualProductionLogUpdated, "OnVirtualProductionLogUpdated" }, // 4160874153
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPUIBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VPUIBase.h" },
		{ "ModuleRelativePath", "Private/VPUIBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPUIBase_Statics::NewProp_SelectedActor_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Private/VPUIBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVPUIBase_Statics::NewProp_SelectedActor = { "SelectedActor", nullptr, (EPropertyFlags)0x0014000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPUIBase, SelectedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVPUIBase_Statics::NewProp_SelectedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPUIBase_Statics::NewProp_SelectedActor_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVPUIBase_Statics::NewProp_VirtualProductionLog_Inner = { "VirtualProductionLog", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPUIBase_Statics::NewProp_VirtualProductionLog_MetaData[] = {
		{ "ModuleRelativePath", "Private/VPUIBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVPUIBase_Statics::NewProp_VirtualProductionLog = { "VirtualProductionLog", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPUIBase, VirtualProductionLog), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVPUIBase_Statics::NewProp_VirtualProductionLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPUIBase_Statics::NewProp_VirtualProductionLog_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVPUIBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPUIBase_Statics::NewProp_SelectedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPUIBase_Statics::NewProp_VirtualProductionLog_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPUIBase_Statics::NewProp_VirtualProductionLog,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPUIBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPUIBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPUIBase_Statics::ClassParams = {
		&UVPUIBase::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVPUIBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVPUIBase_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVPUIBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPUIBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPUIBase()
	{
		if (!Z_Registration_Info_UClass_UVPUIBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPUIBase.OuterSingleton, Z_Construct_UClass_UVPUIBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPUIBase.OuterSingleton;
	}
	template<> VPUTILITIESEDITOR_API UClass* StaticClass<UVPUIBase>()
	{
		return UVPUIBase::StaticClass();
	}
	UVPUIBase::UVPUIBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPUIBase);
	UVPUIBase::~UVPUIBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPUIBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPUIBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPUIBase, UVPUIBase::StaticClass, TEXT("UVPUIBase"), &Z_Registration_Info_UClass_UVPUIBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPUIBase), 158389255U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPUIBase_h_3918459095(TEXT("/Script/VPUtilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPUIBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilitiesEditor_Private_VPUIBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
