// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ShotgridEngine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShotgridEngine() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SHOTGRID_API UClass* Z_Construct_UClass_UShotgridEngine();
	SHOTGRID_API UClass* Z_Construct_UClass_UShotgridEngine_NoRegister();
	SHOTGRID_API UScriptStruct* Z_Construct_UScriptStruct_FShotgridMenuItem();
	UPackage* Z_Construct_UPackage__Script_Shotgrid();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ShotgridMenuItem;
class UScriptStruct* FShotgridMenuItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ShotgridMenuItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ShotgridMenuItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FShotgridMenuItem, (UObject*)Z_Construct_UPackage__Script_Shotgrid(), TEXT("ShotgridMenuItem"));
	}
	return Z_Registration_Info_UScriptStruct_ShotgridMenuItem.OuterSingleton;
}
template<> SHOTGRID_API UScriptStruct* StaticStruct<FShotgridMenuItem>()
{
	return FShotgridMenuItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FShotgridMenuItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/ShotgridEngine.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FShotgridMenuItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Python" },
		{ "Comment", "/** Command name for internal use */" },
		{ "ModuleRelativePath", "Private/ShotgridEngine.h" },
		{ "ToolTip", "Command name for internal use" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShotgridMenuItem, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Python" },
		{ "Comment", "/** Text to display in the menu */" },
		{ "ModuleRelativePath", "Private/ShotgridEngine.h" },
		{ "ToolTip", "Text to display in the menu" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShotgridMenuItem, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Python" },
		{ "Comment", "/** Description text for the tooltip */" },
		{ "ModuleRelativePath", "Private/ShotgridEngine.h" },
		{ "ToolTip", "Description text for the tooltip" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShotgridMenuItem, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Python" },
		{ "Comment", "/** Menu item type to help interpret the command */" },
		{ "ModuleRelativePath", "Private/ShotgridEngine.h" },
		{ "ToolTip", "Menu item type to help interpret the command" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FShotgridMenuItem, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Type_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewProp_Type,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Shotgrid,
		nullptr,
		&NewStructOps,
		"ShotgridMenuItem",
		sizeof(FShotgridMenuItem),
		alignof(FShotgridMenuItem),
		Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FShotgridMenuItem()
	{
		if (!Z_Registration_Info_UScriptStruct_ShotgridMenuItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ShotgridMenuItem.InnerSingleton, Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ShotgridMenuItem.InnerSingleton;
	}
	DEFINE_FUNCTION(UShotgridEngine::execGetSelectedActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetSelectedActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShotgridEngine::execGetShotgridWorkDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UShotgridEngine::GetShotgridWorkDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShotgridEngine::execGetReferencedAssets)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetReferencedAssets(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShotgridEngine::execOnEngineInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEngineInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShotgridEngine::execGetInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UShotgridEngine**)Z_Param__Result=UShotgridEngine::GetInstance();
		P_NATIVE_END;
	}
	struct ShotgridEngine_eventExecuteCommand_Parms
	{
		FString CommandName;
	};
	struct ShotgridEngine_eventGetShotgridMenuItems_Parms
	{
		TArray<FShotgridMenuItem> ReturnValue;
	};
	static FName NAME_UShotgridEngine_ExecuteCommand = FName(TEXT("ExecuteCommand"));
	void UShotgridEngine::ExecuteCommand(const FString& CommandName) const
	{
		ShotgridEngine_eventExecuteCommand_Parms Parms;
		Parms.CommandName=CommandName;
		const_cast<UShotgridEngine*>(this)->ProcessEvent(FindFunctionChecked(NAME_UShotgridEngine_ExecuteCommand),&Parms);
	}
	static FName NAME_UShotgridEngine_GetShotgridMenuItems = FName(TEXT("GetShotgridMenuItems"));
	TArray<FShotgridMenuItem> UShotgridEngine::GetShotgridMenuItems() const
	{
		ShotgridEngine_eventGetShotgridMenuItems_Parms Parms;
		const_cast<UShotgridEngine*>(this)->ProcessEvent(FindFunctionChecked(NAME_UShotgridEngine_GetShotgridMenuItems),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UShotgridEngine_Shutdown = FName(TEXT("Shutdown"));
	void UShotgridEngine::Shutdown() const
	{
		const_cast<UShotgridEngine*>(this)->ProcessEvent(FindFunctionChecked(NAME_UShotgridEngine_Shutdown),NULL);
	}
	void UShotgridEngine::StaticRegisterNativesUShotgridEngine()
	{
		UClass* Class = UShotgridEngine::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInstance", &UShotgridEngine::execGetInstance },
			{ "GetReferencedAssets", &UShotgridEngine::execGetReferencedAssets },
			{ "GetSelectedActors", &UShotgridEngine::execGetSelectedActors },
			{ "GetShotgridWorkDir", &UShotgridEngine::execGetShotgridWorkDir },
			{ "OnEngineInitialized", &UShotgridEngine::execOnEngineInitialized },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShotgridEngine_ExecuteCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShotgridEngine_ExecuteCommand_Statics::NewProp_CommandName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UShotgridEngine_ExecuteCommand_Statics::NewProp_CommandName = { "CommandName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShotgridEngine_eventExecuteCommand_Parms, CommandName), METADATA_PARAMS(Z_Construct_UFunction_UShotgridEngine_ExecuteCommand_Statics::NewProp_CommandName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UShotgridEngine_ExecuteCommand_Statics::NewProp_CommandName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShotgridEngine_ExecuteCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShotgridEngine_ExecuteCommand_Statics::NewProp_CommandName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShotgridEngine_ExecuteCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "Comment", "/** Execute a Shotgrid command by name in the Python Shotgrid Engine */" },
		{ "ModuleRelativePath", "Private/ShotgridEngine.h" },
		{ "ToolTip", "Execute a Shotgrid command by name in the Python Shotgrid Engine" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShotgridEngine_ExecuteCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShotgridEngine, nullptr, "ExecuteCommand", nullptr, nullptr, sizeof(ShotgridEngine_eventExecuteCommand_Parms), Z_Construct_UFunction_UShotgridEngine_ExecuteCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShotgridEngine_ExecuteCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShotgridEngine_ExecuteCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShotgridEngine_ExecuteCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShotgridEngine_ExecuteCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShotgridEngine_ExecuteCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShotgridEngine_GetInstance_Statics
	{
		struct ShotgridEngine_eventGetInstance_Parms
		{
			UShotgridEngine* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShotgridEngine_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShotgridEngine_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_UShotgridEngine_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShotgridEngine_GetInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShotgridEngine_GetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShotgridEngine_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "Comment", "/** Get the instance of the Python Shotgrid Engine */" },
		{ "ModuleRelativePath", "Private/ShotgridEngine.h" },
		{ "ToolTip", "Get the instance of the Python Shotgrid Engine" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShotgridEngine_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShotgridEngine, nullptr, "GetInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShotgridEngine_GetInstance_Statics::ShotgridEngine_eventGetInstance_Parms), Z_Construct_UFunction_UShotgridEngine_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShotgridEngine_GetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShotgridEngine_GetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShotgridEngine_GetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShotgridEngine_GetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShotgridEngine_GetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets_Statics
	{
		struct ShotgridEngine_eventGetReferencedAssets_Parms
		{
			const AActor* Actor;
			TArray<UObject*> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShotgridEngine_eventGetReferencedAssets_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets_Statics::NewProp_Actor_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShotgridEngine_eventGetReferencedAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "Comment", "/** Get the assets that are referenced by the given Actor */" },
		{ "ModuleRelativePath", "Private/ShotgridEngine.h" },
		{ "ToolTip", "Get the assets that are referenced by the given Actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShotgridEngine, nullptr, "GetReferencedAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets_Statics::ShotgridEngine_eventGetReferencedAssets_Parms), Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShotgridEngine_GetSelectedActors_Statics
	{
		struct ShotgridEngine_eventGetSelectedActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UShotgridEngine_GetSelectedActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UShotgridEngine_GetSelectedActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShotgridEngine_eventGetSelectedActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShotgridEngine_GetSelectedActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShotgridEngine_GetSelectedActors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShotgridEngine_GetSelectedActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShotgridEngine_GetSelectedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "Comment", "/** Selected actors to be used for Shotgrid commands */" },
		{ "ModuleRelativePath", "Private/ShotgridEngine.h" },
		{ "ToolTip", "Selected actors to be used for Shotgrid commands" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShotgridEngine_GetSelectedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShotgridEngine, nullptr, "GetSelectedActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShotgridEngine_GetSelectedActors_Statics::ShotgridEngine_eventGetSelectedActors_Parms), Z_Construct_UFunction_UShotgridEngine_GetSelectedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShotgridEngine_GetSelectedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShotgridEngine_GetSelectedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShotgridEngine_GetSelectedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShotgridEngine_GetSelectedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShotgridEngine_GetSelectedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShotgridEngine_GetShotgridMenuItems_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UShotgridEngine_GetShotgridMenuItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FShotgridMenuItem, METADATA_PARAMS(nullptr, 0) }; // 3991404144
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UShotgridEngine_GetShotgridMenuItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShotgridEngine_eventGetShotgridMenuItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3991404144
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShotgridEngine_GetShotgridMenuItems_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShotgridEngine_GetShotgridMenuItems_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShotgridEngine_GetShotgridMenuItems_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShotgridEngine_GetShotgridMenuItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "Comment", "/** Get the available Shotgrid commands from the Python Shotgrid Engine */" },
		{ "ModuleRelativePath", "Private/ShotgridEngine.h" },
		{ "ToolTip", "Get the available Shotgrid commands from the Python Shotgrid Engine" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShotgridEngine_GetShotgridMenuItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShotgridEngine, nullptr, "GetShotgridMenuItems", nullptr, nullptr, sizeof(ShotgridEngine_eventGetShotgridMenuItems_Parms), Z_Construct_UFunction_UShotgridEngine_GetShotgridMenuItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShotgridEngine_GetShotgridMenuItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShotgridEngine_GetShotgridMenuItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShotgridEngine_GetShotgridMenuItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShotgridEngine_GetShotgridMenuItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShotgridEngine_GetShotgridMenuItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShotgridEngine_GetShotgridWorkDir_Statics
	{
		struct ShotgridEngine_eventGetShotgridWorkDir_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UShotgridEngine_GetShotgridWorkDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ShotgridEngine_eventGetShotgridWorkDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShotgridEngine_GetShotgridWorkDir_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShotgridEngine_GetShotgridWorkDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShotgridEngine_GetShotgridWorkDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "Comment", "/** Get the root path for the Shotgrid work area */" },
		{ "ModuleRelativePath", "Private/ShotgridEngine.h" },
		{ "ToolTip", "Get the root path for the Shotgrid work area" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShotgridEngine_GetShotgridWorkDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShotgridEngine, nullptr, "GetShotgridWorkDir", nullptr, nullptr, sizeof(Z_Construct_UFunction_UShotgridEngine_GetShotgridWorkDir_Statics::ShotgridEngine_eventGetShotgridWorkDir_Parms), Z_Construct_UFunction_UShotgridEngine_GetShotgridWorkDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShotgridEngine_GetShotgridWorkDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShotgridEngine_GetShotgridWorkDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShotgridEngine_GetShotgridWorkDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShotgridEngine_GetShotgridWorkDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShotgridEngine_GetShotgridWorkDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShotgridEngine_OnEngineInitialized_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShotgridEngine_OnEngineInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "Comment", "/** Callback for when the Python Shotgrid Engine has finished initialization */" },
		{ "ModuleRelativePath", "Private/ShotgridEngine.h" },
		{ "ToolTip", "Callback for when the Python Shotgrid Engine has finished initialization" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShotgridEngine_OnEngineInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShotgridEngine, nullptr, "OnEngineInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShotgridEngine_OnEngineInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShotgridEngine_OnEngineInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShotgridEngine_OnEngineInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShotgridEngine_OnEngineInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShotgridEngine_Shutdown_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShotgridEngine_Shutdown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Python" },
		{ "Comment", "/** Shut down the Python Shotgrid Engine */" },
		{ "ModuleRelativePath", "Private/ShotgridEngine.h" },
		{ "ToolTip", "Shut down the Python Shotgrid Engine" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UShotgridEngine_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShotgridEngine, nullptr, "Shutdown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShotgridEngine_Shutdown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShotgridEngine_Shutdown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShotgridEngine_Shutdown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UShotgridEngine_Shutdown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UShotgridEngine);
	UClass* Z_Construct_UClass_UShotgridEngine_NoRegister()
	{
		return UShotgridEngine::StaticClass();
	}
	struct Z_Construct_UClass_UShotgridEngine_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedAssets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedAssets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedAssets;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShotgridEngine_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Shotgrid,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShotgridEngine_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShotgridEngine_ExecuteCommand, "ExecuteCommand" }, // 2867753116
		{ &Z_Construct_UFunction_UShotgridEngine_GetInstance, "GetInstance" }, // 3350607498
		{ &Z_Construct_UFunction_UShotgridEngine_GetReferencedAssets, "GetReferencedAssets" }, // 3227146580
		{ &Z_Construct_UFunction_UShotgridEngine_GetSelectedActors, "GetSelectedActors" }, // 3580976499
		{ &Z_Construct_UFunction_UShotgridEngine_GetShotgridMenuItems, "GetShotgridMenuItems" }, // 3833482647
		{ &Z_Construct_UFunction_UShotgridEngine_GetShotgridWorkDir, "GetShotgridWorkDir" }, // 761260782
		{ &Z_Construct_UFunction_UShotgridEngine_OnEngineInitialized, "OnEngineInitialized" }, // 3016896704
		{ &Z_Construct_UFunction_UShotgridEngine_Shutdown, "Shutdown" }, // 3948231189
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShotgridEngine_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Wrapper for the Python Shotgrid Engine\n * The functions are implemented in Python by a class that derives from this one\n */" },
		{ "IncludePath", "ShotgridEngine.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/ShotgridEngine.h" },
		{ "ToolTip", "Wrapper for the Python Shotgrid Engine\nThe functions are implemented in Python by a class that derives from this one" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UShotgridEngine_Statics::NewProp_SelectedAssets_Inner = { "SelectedAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShotgridEngine_Statics::NewProp_SelectedAssets_MetaData[] = {
		{ "Category", "Python" },
		{ "Comment", "/** Selected assets to be used for Shotgrid commands */" },
		{ "ModuleRelativePath", "Private/ShotgridEngine.h" },
		{ "ToolTip", "Selected assets to be used for Shotgrid commands" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UShotgridEngine_Statics::NewProp_SelectedAssets = { "SelectedAssets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShotgridEngine, SelectedAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UShotgridEngine_Statics::NewProp_SelectedAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShotgridEngine_Statics::NewProp_SelectedAssets_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UShotgridEngine_Statics::NewProp_SelectedActors_Inner = { "SelectedActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShotgridEngine_Statics::NewProp_SelectedActors_MetaData[] = {
		{ "Category", "Python" },
		{ "Deprecated", "" },
		{ "DeprecationMessage", "SelectedActors is deprecated, use GetSelectedActors instead." },
		{ "ModuleRelativePath", "Private/ShotgridEngine.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UShotgridEngine_Statics::NewProp_SelectedActors = { "SelectedActors", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UShotgridEngine, SelectedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UShotgridEngine_Statics::NewProp_SelectedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShotgridEngine_Statics::NewProp_SelectedActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShotgridEngine_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShotgridEngine_Statics::NewProp_SelectedAssets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShotgridEngine_Statics::NewProp_SelectedAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShotgridEngine_Statics::NewProp_SelectedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShotgridEngine_Statics::NewProp_SelectedActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShotgridEngine_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShotgridEngine>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UShotgridEngine_Statics::ClassParams = {
		&UShotgridEngine::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UShotgridEngine_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UShotgridEngine_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShotgridEngine_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShotgridEngine_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShotgridEngine()
	{
		if (!Z_Registration_Info_UClass_UShotgridEngine.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UShotgridEngine.OuterSingleton, Z_Construct_UClass_UShotgridEngine_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UShotgridEngine.OuterSingleton;
	}
	template<> SHOTGRID_API UClass* StaticClass<UShotgridEngine>()
	{
		return UShotgridEngine::StaticClass();
	}
	UShotgridEngine::UShotgridEngine(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShotgridEngine);
	UShotgridEngine::~UShotgridEngine() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_Statics::ScriptStructInfo[] = {
		{ FShotgridMenuItem::StaticStruct, Z_Construct_UScriptStruct_FShotgridMenuItem_Statics::NewStructOps, TEXT("ShotgridMenuItem"), &Z_Registration_Info_UScriptStruct_ShotgridMenuItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FShotgridMenuItem), 3991404144U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UShotgridEngine, UShotgridEngine::StaticClass, TEXT("UShotgridEngine"), &Z_Registration_Info_UClass_UShotgridEngine, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UShotgridEngine), 2949412545U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_1482731122(TEXT("/Script/Shotgrid"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Shotgrid_Source_Shotgrid_Private_ShotgridEngine_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
