// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GlobalEditorUtilityBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalEditorUtilityBase() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase();
	BLUTILITY_API UClass* Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_NoRegister();
	BLUTILITY_API UFunction* Z_Construct_UDelegateFunction_Blutility_ForEachActorIteratorSignature__DelegateSignature();
	BLUTILITY_API UFunction* Z_Construct_UDelegateFunction_Blutility_ForEachAssetIteratorSignature__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEditorPerProjectUserSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Blutility_ForEachActorIteratorSignature__DelegateSignature_Statics
	{
		struct _Script_Blutility_eventForEachActorIteratorSignature_Parms
		{
			AActor* Actor;
			int32 Index;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Blutility_ForEachActorIteratorSignature__DelegateSignature_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Blutility_eventForEachActorIteratorSignature_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Blutility_ForEachActorIteratorSignature__DelegateSignature_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Blutility_eventForEachActorIteratorSignature_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Blutility_ForEachActorIteratorSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Blutility_ForEachActorIteratorSignature__DelegateSignature_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Blutility_ForEachActorIteratorSignature__DelegateSignature_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Blutility_ForEachActorIteratorSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Blutility_ForEachActorIteratorSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Blutility, nullptr, "ForEachActorIteratorSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Blutility_ForEachActorIteratorSignature__DelegateSignature_Statics::_Script_Blutility_eventForEachActorIteratorSignature_Parms), Z_Construct_UDelegateFunction_Blutility_ForEachActorIteratorSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blutility_ForEachActorIteratorSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Blutility_ForEachActorIteratorSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blutility_ForEachActorIteratorSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Blutility_ForEachActorIteratorSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Blutility_ForEachActorIteratorSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FForEachActorIteratorSignature_DelegateWrapper(const FMulticastScriptDelegate& ForEachActorIteratorSignature, AActor* Actor, int32 Index)
{
	struct _Script_Blutility_eventForEachActorIteratorSignature_Parms
	{
		AActor* Actor;
		int32 Index;
	};
	_Script_Blutility_eventForEachActorIteratorSignature_Parms Parms;
	Parms.Actor=Actor;
	Parms.Index=Index;
	ForEachActorIteratorSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Blutility_ForEachAssetIteratorSignature__DelegateSignature_Statics
	{
		struct _Script_Blutility_eventForEachAssetIteratorSignature_Parms
		{
			UObject* Asset;
			int32 Index;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Blutility_ForEachAssetIteratorSignature__DelegateSignature_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Blutility_eventForEachAssetIteratorSignature_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Blutility_ForEachAssetIteratorSignature__DelegateSignature_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Blutility_eventForEachAssetIteratorSignature_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Blutility_ForEachAssetIteratorSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Blutility_ForEachAssetIteratorSignature__DelegateSignature_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Blutility_ForEachAssetIteratorSignature__DelegateSignature_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Blutility_ForEachAssetIteratorSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Blutility_ForEachAssetIteratorSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Blutility, nullptr, "ForEachAssetIteratorSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Blutility_ForEachAssetIteratorSignature__DelegateSignature_Statics::_Script_Blutility_eventForEachAssetIteratorSignature_Parms), Z_Construct_UDelegateFunction_Blutility_ForEachAssetIteratorSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blutility_ForEachAssetIteratorSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Blutility_ForEachAssetIteratorSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blutility_ForEachAssetIteratorSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Blutility_ForEachAssetIteratorSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Blutility_ForEachAssetIteratorSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FForEachAssetIteratorSignature_DelegateWrapper(const FMulticastScriptDelegate& ForEachAssetIteratorSignature, UObject* Asset, int32 Index)
{
	struct _Script_Blutility_eventForEachAssetIteratorSignature_Parms
	{
		UObject* Asset;
		int32 Index;
	};
	_Script_Blutility_eventForEachAssetIteratorSignature_Parms Parms;
	Parms.Asset=Asset;
	Parms.Index=Index;
	ForEachAssetIteratorSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UDEPRECATED_GlobalEditorUtilityBase::execRenameAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_Asset);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RenameAsset(Z_Param_Asset,Z_Param_NewName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_GlobalEditorUtilityBase::execGetSelectionBounds)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_BoxExtent);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_SphereRadius);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSelectionBounds(Z_Param_Out_Origin,Z_Param_Out_BoxExtent,Z_Param_Out_SphereRadius);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_GlobalEditorUtilityBase::execSetActorSelectionState)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bShouldBeSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorSelectionState(Z_Param_Actor,Z_Param_bShouldBeSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_GlobalEditorUtilityBase::execSelectNothing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectNothing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_GlobalEditorUtilityBase::execClearActorSelectionSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearActorSelectionSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_GlobalEditorUtilityBase::execGetEditorUserSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEditorPerProjectUserSettings**)Z_Param__Result=P_THIS->GetEditorUserSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_GlobalEditorUtilityBase::execGetSelectedAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetSelectedAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_GlobalEditorUtilityBase::execForEachSelectedAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForEachSelectedAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_GlobalEditorUtilityBase::execForEachSelectedActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForEachSelectedActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_GlobalEditorUtilityBase::execGetActorReference)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetActorReference(Z_Param_PathToActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_GlobalEditorUtilityBase::execGetSelectionSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetSelectionSet();
		P_NATIVE_END;
	}
	static FName NAME_UDEPRECATED_GlobalEditorUtilityBase_OnDefaultActionClicked = FName(TEXT("OnDefaultActionClicked"));
	void UDEPRECATED_GlobalEditorUtilityBase::OnDefaultActionClicked()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDEPRECATED_GlobalEditorUtilityBase_OnDefaultActionClicked),NULL);
	}
	void UDEPRECATED_GlobalEditorUtilityBase::StaticRegisterNativesUDEPRECATED_GlobalEditorUtilityBase()
	{
		UClass* Class = UDEPRECATED_GlobalEditorUtilityBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearActorSelectionSet", &UDEPRECATED_GlobalEditorUtilityBase::execClearActorSelectionSet },
			{ "ForEachSelectedActor", &UDEPRECATED_GlobalEditorUtilityBase::execForEachSelectedActor },
			{ "ForEachSelectedAsset", &UDEPRECATED_GlobalEditorUtilityBase::execForEachSelectedAsset },
			{ "GetActorReference", &UDEPRECATED_GlobalEditorUtilityBase::execGetActorReference },
			{ "GetEditorUserSettings", &UDEPRECATED_GlobalEditorUtilityBase::execGetEditorUserSettings },
			{ "GetSelectedAssets", &UDEPRECATED_GlobalEditorUtilityBase::execGetSelectedAssets },
			{ "GetSelectionBounds", &UDEPRECATED_GlobalEditorUtilityBase::execGetSelectionBounds },
			{ "GetSelectionSet", &UDEPRECATED_GlobalEditorUtilityBase::execGetSelectionSet },
			{ "RenameAsset", &UDEPRECATED_GlobalEditorUtilityBase::execRenameAsset },
			{ "SelectNothing", &UDEPRECATED_GlobalEditorUtilityBase::execSelectNothing },
			{ "SetActorSelectionState", &UDEPRECATED_GlobalEditorUtilityBase::execSetActorSelectionState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ClearActorSelectionSet_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ClearActorSelectionSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "// Remove all actors from the selection set\n" },
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
		{ "ToolTip", "Remove all actors from the selection set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ClearActorSelectionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase, nullptr, "ClearActorSelectionSet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ClearActorSelectionSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ClearActorSelectionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ClearActorSelectionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ClearActorSelectionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ForEachSelectedActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ForEachSelectedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "// Calls OnEachSelectedActor for each selected actor\n" },
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
		{ "ToolTip", "Calls OnEachSelectedActor for each selected actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ForEachSelectedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase, nullptr, "ForEachSelectedActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ForEachSelectedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ForEachSelectedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ForEachSelectedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ForEachSelectedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ForEachSelectedAsset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ForEachSelectedAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "// Calls OnEachSelectedAsset for each selected asset\n" },
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
		{ "ToolTip", "Calls OnEachSelectedAsset for each selected asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ForEachSelectedAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase, nullptr, "ForEachSelectedAsset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ForEachSelectedAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ForEachSelectedAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ForEachSelectedAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ForEachSelectedAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetActorReference_Statics
	{
		struct GlobalEditorUtilityBase_eventGetActorReference_Parms
		{
			FString PathToActor;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetActorReference_Statics::NewProp_PathToActor = { "PathToActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlobalEditorUtilityBase_eventGetActorReference_Parms, PathToActor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetActorReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlobalEditorUtilityBase_eventGetActorReference_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetActorReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetActorReference_Statics::NewProp_PathToActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetActorReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetActorReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "/**\n\x09 * Attempts to find the actor specified by PathToActor in the current editor world\n\x09 * @param\x09PathToActor\x09The path to the actor (e.g. PersistentLevel.PlayerStart)\n\x09 * @return\x09""A reference to the actor, or none if it wasn't found\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
		{ "ToolTip", "Attempts to find the actor specified by PathToActor in the current editor world\n@param       PathToActor     The path to the actor (e.g. PersistentLevel.PlayerStart)\n@return      A reference to the actor, or none if it wasn't found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetActorReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase, nullptr, "GetActorReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetActorReference_Statics::GlobalEditorUtilityBase_eventGetActorReference_Parms), Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetActorReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetActorReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetActorReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetActorReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetActorReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetActorReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetEditorUserSettings_Statics
	{
		struct GlobalEditorUtilityBase_eventGetEditorUserSettings_Parms
		{
			UEditorPerProjectUserSettings* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetEditorUserSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlobalEditorUtilityBase_eventGetEditorUserSettings_Parms, ReturnValue), Z_Construct_UClass_UEditorPerProjectUserSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetEditorUserSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetEditorUserSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetEditorUserSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "///////////////////////////\n" },
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetEditorUserSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase, nullptr, "GetEditorUserSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetEditorUserSettings_Statics::GlobalEditorUtilityBase_eventGetEditorUserSettings_Parms), Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetEditorUserSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetEditorUserSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetEditorUserSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetEditorUserSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetEditorUserSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetEditorUserSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectedAssets_Statics
	{
		struct GlobalEditorUtilityBase_eventGetSelectedAssets_Parms
		{
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectedAssets_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectedAssets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlobalEditorUtilityBase_eventGetSelectedAssets_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectedAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectedAssets_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectedAssets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectedAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "// Gets the set of currently selected assets\n" },
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
		{ "ToolTip", "Gets the set of currently selected assets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase, nullptr, "GetSelectedAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectedAssets_Statics::GlobalEditorUtilityBase_eventGetSelectedAssets_Parms), Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectedAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectedAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectedAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectedAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionBounds_Statics
	{
		struct GlobalEditorUtilityBase_eventGetSelectionBounds_Parms
		{
			FVector Origin;
			FVector BoxExtent;
			float SphereRadius;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionBounds_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlobalEditorUtilityBase_eventGetSelectionBounds_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionBounds_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlobalEditorUtilityBase_eventGetSelectionBounds_Parms, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionBounds_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlobalEditorUtilityBase_eventGetSelectionBounds_Parms, SphereRadius), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionBounds_Statics::NewProp_Origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionBounds_Statics::NewProp_BoxExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionBounds_Statics::NewProp_SphereRadius,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase, nullptr, "GetSelectionBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionBounds_Statics::GlobalEditorUtilityBase_eventGetSelectionBounds_Parms), Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionSet_Statics
	{
		struct GlobalEditorUtilityBase_eventGetSelectionSet_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionSet_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlobalEditorUtilityBase_eventGetSelectionSet_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionSet_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase, nullptr, "GetSelectionSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionSet_Statics::GlobalEditorUtilityBase_eventGetSelectionSet_Parms), Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_OnDefaultActionClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_OnDefaultActionClicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// The default action called when the blutility is invoked if bAutoRunDefaultAction=true (it is never called otherwise)\n" },
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
		{ "ToolTip", "The default action called when the blutility is invoked if bAutoRunDefaultAction=true (it is never called otherwise)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_OnDefaultActionClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase, nullptr, "OnDefaultActionClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_OnDefaultActionClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_OnDefaultActionClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_OnDefaultActionClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_OnDefaultActionClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_RenameAsset_Statics
	{
		struct GlobalEditorUtilityBase_eventRenameAsset_Parms
		{
			UObject* Asset;
			FString NewName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_RenameAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlobalEditorUtilityBase_eventRenameAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_RenameAsset_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_RenameAsset_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlobalEditorUtilityBase_eventRenameAsset_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_RenameAsset_Statics::NewProp_NewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_RenameAsset_Statics::NewProp_NewName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_RenameAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_RenameAsset_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_RenameAsset_Statics::NewProp_NewName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_RenameAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "// Renames an asset (cannot move folders)\n" },
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
		{ "ToolTip", "Renames an asset (cannot move folders)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_RenameAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase, nullptr, "RenameAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_RenameAsset_Statics::GlobalEditorUtilityBase_eventRenameAsset_Parms), Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_RenameAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_RenameAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_RenameAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_RenameAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_RenameAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_RenameAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SelectNothing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SelectNothing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "// Selects nothing in the editor (another way to clear the selection)\n" },
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
		{ "ToolTip", "Selects nothing in the editor (another way to clear the selection)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SelectNothing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase, nullptr, "SelectNothing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SelectNothing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SelectNothing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SelectNothing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SelectNothing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SetActorSelectionState_Statics
	{
		struct GlobalEditorUtilityBase_eventSetActorSelectionState_Parms
		{
			AActor* Actor;
			bool bShouldBeSelected;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_bShouldBeSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldBeSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SetActorSelectionState_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlobalEditorUtilityBase_eventSetActorSelectionState_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SetActorSelectionState_Statics::NewProp_bShouldBeSelected_SetBit(void* Obj)
	{
		((GlobalEditorUtilityBase_eventSetActorSelectionState_Parms*)Obj)->bShouldBeSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SetActorSelectionState_Statics::NewProp_bShouldBeSelected = { "bShouldBeSelected", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GlobalEditorUtilityBase_eventSetActorSelectionState_Parms), &Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SetActorSelectionState_Statics::NewProp_bShouldBeSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SetActorSelectionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SetActorSelectionState_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SetActorSelectionState_Statics::NewProp_bShouldBeSelected,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SetActorSelectionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Development|Editor" },
		{ "Comment", "// Set the selection state for the selected actor\n" },
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
		{ "ToolTip", "Set the selection state for the selected actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SetActorSelectionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase, nullptr, "SetActorSelectionState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SetActorSelectionState_Statics::GlobalEditorUtilityBase_eventSetActorSelectionState_Parms), Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SetActorSelectionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SetActorSelectionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SetActorSelectionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SetActorSelectionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SetActorSelectionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SetActorSelectionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_GlobalEditorUtilityBase);
	UClass* Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_NoRegister()
	{
		return UDEPRECATED_GlobalEditorUtilityBase::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HelpText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HelpText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDirtiedSelectionSet_MetaData[];
#endif
		static void NewProp_bDirtiedSelectionSet_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDirtiedSelectionSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoRunDefaultAction_MetaData[];
#endif
		static void NewProp_bAutoRunDefaultAction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoRunDefaultAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEachSelectedActor_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEachSelectedActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEachSelectedAsset_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEachSelectedAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ClearActorSelectionSet, "ClearActorSelectionSet" }, // 49536970
		{ &Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ForEachSelectedActor, "ForEachSelectedActor" }, // 401140691
		{ &Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_ForEachSelectedAsset, "ForEachSelectedAsset" }, // 2179205375
		{ &Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetActorReference, "GetActorReference" }, // 2090269284
		{ &Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetEditorUserSettings, "GetEditorUserSettings" }, // 300759699
		{ &Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectedAssets, "GetSelectedAssets" }, // 1193721101
		{ &Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionBounds, "GetSelectionBounds" }, // 1956113777
		{ &Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_GetSelectionSet, "GetSelectionSet" }, // 343987914
		{ &Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_OnDefaultActionClicked, "OnDefaultActionClicked" }, // 1851506261
		{ &Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_RenameAsset, "RenameAsset" }, // 303522287
		{ &Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SelectNothing, "SelectNothing" }, // 703694507
		{ &Z_Construct_UFunction_UDEPRECATED_GlobalEditorUtilityBase_SetActorSelectionState, "SetActorSelectionState" }, // 3297654647
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "GlobalEditorUtilityBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_HelpText_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_HelpText = { "HelpText", nullptr, (EPropertyFlags)0x0010010000010005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_GlobalEditorUtilityBase, HelpText), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_HelpText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_HelpText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_bDirtiedSelectionSet_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_bDirtiedSelectionSet_SetBit(void* Obj)
	{
		((UDEPRECATED_GlobalEditorUtilityBase*)Obj)->bDirtiedSelectionSet = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_bDirtiedSelectionSet = { "bDirtiedSelectionSet", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_GlobalEditorUtilityBase), &Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_bDirtiedSelectionSet_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_bDirtiedSelectionSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_bDirtiedSelectionSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_bAutoRunDefaultAction_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Should this blueprint automatically run OnDefaultActionClicked, or should it open up a details panel to edit properties and/or offer multiple buttons\n" },
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
		{ "ToolTip", "Should this blueprint automatically run OnDefaultActionClicked, or should it open up a details panel to edit properties and/or offer multiple buttons" },
	};
#endif
	void Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_bAutoRunDefaultAction_SetBit(void* Obj)
	{
		((UDEPRECATED_GlobalEditorUtilityBase*)Obj)->bAutoRunDefaultAction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_bAutoRunDefaultAction = { "bAutoRunDefaultAction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEPRECATED_GlobalEditorUtilityBase), &Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_bAutoRunDefaultAction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_bAutoRunDefaultAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_bAutoRunDefaultAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_OnEachSelectedActor_MetaData[] = {
		{ "Comment", "// The method called for each selected actor when ForEachSelectedActor is called\n" },
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
		{ "ToolTip", "The method called for each selected actor when ForEachSelectedActor is called" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_OnEachSelectedActor = { "OnEachSelectedActor", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_GlobalEditorUtilityBase, OnEachSelectedActor), Z_Construct_UDelegateFunction_Blutility_ForEachActorIteratorSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_OnEachSelectedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_OnEachSelectedActor_MetaData)) }; // 3264854321
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_OnEachSelectedAsset_MetaData[] = {
		{ "Comment", "// The method called for each selected asset when ForEachSelectedAsset is called\n" },
		{ "ModuleRelativePath", "Classes/GlobalEditorUtilityBase.h" },
		{ "ToolTip", "The method called for each selected asset when ForEachSelectedAsset is called" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_OnEachSelectedAsset = { "OnEachSelectedAsset", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_GlobalEditorUtilityBase, OnEachSelectedAsset), Z_Construct_UDelegateFunction_Blutility_ForEachAssetIteratorSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_OnEachSelectedAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_OnEachSelectedAsset_MetaData)) }; // 456430212
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_HelpText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_bDirtiedSelectionSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_bAutoRunDefaultAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_OnEachSelectedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::NewProp_OnEachSelectedAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_GlobalEditorUtilityBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::ClassParams = {
		&UDEPRECATED_GlobalEditorUtilityBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::PropPointers),
		0,
		0x029002A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_GlobalEditorUtilityBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_GlobalEditorUtilityBase.OuterSingleton, Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_GlobalEditorUtilityBase.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UDEPRECATED_GlobalEditorUtilityBase>()
	{
		return UDEPRECATED_GlobalEditorUtilityBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_GlobalEditorUtilityBase);
	UDEPRECATED_GlobalEditorUtilityBase::~UDEPRECATED_GlobalEditorUtilityBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_GlobalEditorUtilityBase, UDEPRECATED_GlobalEditorUtilityBase::StaticClass, TEXT("UDEPRECATED_GlobalEditorUtilityBase"), &Z_Registration_Info_UClass_UDEPRECATED_GlobalEditorUtilityBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_GlobalEditorUtilityBase), 3440190858U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_1330305399(TEXT("/Script/Blutility"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_GlobalEditorUtilityBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
