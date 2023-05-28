// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelEditorSubsystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightingBuildQuality();
	LEVELEDITOR_API UClass* Z_Construct_UClass_ULevelEditorSubsystem();
	LEVELEDITOR_API UClass* Z_Construct_UClass_ULevelEditorSubsystem_NoRegister();
	LEVELEDITOR_API UFunction* Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature();
	LEVELEDITOR_API UFunction* Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapChanged__DelegateSignature();
	LEVELEDITOR_API UFunction* Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature();
	LEVELEDITOR_API UFunction* Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature();
	LEVELEDITOR_API UFunction* Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPreSaveWorld__DelegateSignature();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementSelectionSet_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ELevelViewportType();
	UPackage* Z_Construct_UPackage__Script_LevelEditor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPreSaveWorld__DelegateSignature_Statics
	{
		struct _Script_LevelEditor_eventOnLevelEditorPreSaveWorld_Parms
		{
			int32 SaveFlags;
			UWorld* World;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SaveFlags;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPreSaveWorld__DelegateSignature_Statics::NewProp_SaveFlags = { "SaveFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LevelEditor_eventOnLevelEditorPreSaveWorld_Parms, SaveFlags), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPreSaveWorld__DelegateSignature_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LevelEditor_eventOnLevelEditorPreSaveWorld_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPreSaveWorld__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPreSaveWorld__DelegateSignature_Statics::NewProp_SaveFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPreSaveWorld__DelegateSignature_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPreSaveWorld__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate type for pre save world events ( uint32 SaveFlags, UWorld* World ) */" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "Delegate type for pre save world events ( uint32 SaveFlags, UWorld* World )" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPreSaveWorld__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LevelEditor, nullptr, "OnLevelEditorPreSaveWorld__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPreSaveWorld__DelegateSignature_Statics::_Script_LevelEditor_eventOnLevelEditorPreSaveWorld_Parms), Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPreSaveWorld__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPreSaveWorld__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPreSaveWorld__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPreSaveWorld__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPreSaveWorld__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPreSaveWorld__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLevelEditorPreSaveWorld_DelegateWrapper(const FMulticastScriptDelegate& OnLevelEditorPreSaveWorld, int32 SaveFlags, UWorld* World)
{
	struct _Script_LevelEditor_eventOnLevelEditorPreSaveWorld_Parms
	{
		int32 SaveFlags;
		UWorld* World;
	};
	_Script_LevelEditor_eventOnLevelEditorPreSaveWorld_Parms Parms;
	Parms.SaveFlags=SaveFlags;
	Parms.World=World;
	OnLevelEditorPreSaveWorld.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature_Statics
	{
		struct _Script_LevelEditor_eventOnLevelEditorPostSaveWorld_Parms
		{
			int32 SaveFlags;
			UWorld* World;
			bool bSuccess;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SaveFlags;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature_Statics::NewProp_SaveFlags = { "SaveFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LevelEditor_eventOnLevelEditorPostSaveWorld_Parms, SaveFlags), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LevelEditor_eventOnLevelEditorPostSaveWorld_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_LevelEditor_eventOnLevelEditorPostSaveWorld_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_LevelEditor_eventOnLevelEditorPostSaveWorld_Parms), &Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature_Statics::NewProp_SaveFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate type for post save world events ( uint32 SaveFlags, UWorld* World, bool bSuccess ) */" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "Delegate type for post save world events ( uint32 SaveFlags, UWorld* World, bool bSuccess )" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LevelEditor, nullptr, "OnLevelEditorPostSaveWorld__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature_Statics::_Script_LevelEditor_eventOnLevelEditorPostSaveWorld_Parms), Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLevelEditorPostSaveWorld_DelegateWrapper(const FMulticastScriptDelegate& OnLevelEditorPostSaveWorld, int32 SaveFlags, UWorld* World, bool bSuccess)
{
	struct _Script_LevelEditor_eventOnLevelEditorPostSaveWorld_Parms
	{
		int32 SaveFlags;
		UWorld* World;
		bool bSuccess;
	};
	_Script_LevelEditor_eventOnLevelEditorPostSaveWorld_Parms Parms;
	Parms.SaveFlags=SaveFlags;
	Parms.World=World;
	Parms.bSuccess=bSuccess ? true : false;
	OnLevelEditorPostSaveWorld.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics
	{
		struct _Script_LevelEditor_eventOnLevelEditorEditorCameraMoved_Parms
		{
			FVector Location;
			FRotator Rotation;
			TEnumAsByte<ELevelViewportType> ViewportType;
			int32 ViewIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewportType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ViewIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LevelEditor_eventOnLevelEditorEditorCameraMoved_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LevelEditor_eventOnLevelEditorEditorCameraMoved_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::NewProp_Rotation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::NewProp_ViewportType = { "ViewportType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LevelEditor_eventOnLevelEditorEditorCameraMoved_Parms, ViewportType), Z_Construct_UEnum_UnrealEd_ELevelViewportType, METADATA_PARAMS(nullptr, 0) }; // 159852840
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::NewProp_ViewIndex = { "ViewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LevelEditor_eventOnLevelEditorEditorCameraMoved_Parms, ViewIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::NewProp_ViewportType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::NewProp_ViewIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate type for editor camera movement */" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "Delegate type for editor camera movement" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LevelEditor, nullptr, "OnLevelEditorEditorCameraMoved__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::_Script_LevelEditor_eventOnLevelEditorEditorCameraMoved_Parms), Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLevelEditorEditorCameraMoved_DelegateWrapper(const FMulticastScriptDelegate& OnLevelEditorEditorCameraMoved, FVector const& Location, FRotator const& Rotation, ELevelViewportType ViewportType, int32 ViewIndex)
{
	struct _Script_LevelEditor_eventOnLevelEditorEditorCameraMoved_Parms
	{
		FVector Location;
		FRotator Rotation;
		TEnumAsByte<ELevelViewportType> ViewportType;
		int32 ViewIndex;
	};
	_Script_LevelEditor_eventOnLevelEditorEditorCameraMoved_Parms Parms;
	Parms.Location=Location;
	Parms.Rotation=Rotation;
	Parms.ViewportType=ViewportType;
	Parms.ViewIndex=ViewIndex;
	OnLevelEditorEditorCameraMoved.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapChanged__DelegateSignature_Statics
	{
		struct _Script_LevelEditor_eventOnLevelEditorMapChanged_Parms
		{
			int32 MapChangeEventFlags;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MapChangeEventFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapChanged__DelegateSignature_Statics::NewProp_MapChangeEventFlags = { "MapChangeEventFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LevelEditor_eventOnLevelEditorMapChanged_Parms, MapChangeEventFlags), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapChanged__DelegateSignature_Statics::NewProp_MapChangeEventFlags,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate type for map change events ( Params: uint32 MapChangeFlags (MapChangeEventFlags) ) */" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "Delegate type for map change events ( Params: uint32 MapChangeFlags (MapChangeEventFlags) )" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LevelEditor, nullptr, "OnLevelEditorMapChanged__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapChanged__DelegateSignature_Statics::_Script_LevelEditor_eventOnLevelEditorMapChanged_Parms), Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLevelEditorMapChanged_DelegateWrapper(const FMulticastScriptDelegate& OnLevelEditorMapChanged, int32 MapChangeEventFlags)
{
	struct _Script_LevelEditor_eventOnLevelEditorMapChanged_Parms
	{
		int32 MapChangeEventFlags;
	};
	_Script_LevelEditor_eventOnLevelEditorMapChanged_Parms Parms;
	Parms.MapChangeEventFlags=MapChangeEventFlags;
	OnLevelEditorMapChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature_Statics
	{
		struct _Script_LevelEditor_eventOnLevelEditorMapOpened_Parms
		{
			FString Filename;
			bool bAsTemplate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
		static void NewProp_bAsTemplate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAsTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_LevelEditor_eventOnLevelEditorMapOpened_Parms, Filename), METADATA_PARAMS(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature_Statics::NewProp_Filename_MetaData)) };
	void Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature_Statics::NewProp_bAsTemplate_SetBit(void* Obj)
	{
		((_Script_LevelEditor_eventOnLevelEditorMapOpened_Parms*)Obj)->bAsTemplate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature_Statics::NewProp_bAsTemplate = { "bAsTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_LevelEditor_eventOnLevelEditorMapOpened_Parms), &Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature_Statics::NewProp_bAsTemplate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature_Statics::NewProp_Filename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature_Statics::NewProp_bAsTemplate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Delegate type for triggering when a map is opened */" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "Delegate type for triggering when a map is opened" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_LevelEditor, nullptr, "OnLevelEditorMapOpened__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature_Statics::_Script_LevelEditor_eventOnLevelEditorMapOpened_Parms), Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnLevelEditorMapOpened_DelegateWrapper(const FMulticastScriptDelegate& OnLevelEditorMapOpened, const FString& Filename, bool bAsTemplate)
{
	struct _Script_LevelEditor_eventOnLevelEditorMapOpened_Parms
	{
		FString Filename;
		bool bAsTemplate;
	};
	_Script_LevelEditor_eventOnLevelEditorMapOpened_Parms Parms;
	Parms.Filename=Filename;
	Parms.bAsTemplate=bAsTemplate ? true : false;
	OnLevelEditorMapOpened.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execBuildLightMaps)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Quality);
		P_GET_UBOOL(Z_Param_bWithReflectionCaptures);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BuildLightMaps(ELightingBuildQuality(Z_Param_Quality),Z_Param_bWithReflectionCaptures);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execGetSelectionSet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTypedElementSelectionSet**)Z_Param__Result=P_THIS->GetSelectionSet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execGetCurrentLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevel**)Z_Param__Result=P_THIS->GetCurrentLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execSetCurrentLevelByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCurrentLevelByName(Z_Param_LevelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execSaveAllDirtyLevels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveAllDirtyLevels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execSaveCurrentLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveCurrentLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execLoadLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadLevel(Z_Param_AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execNewLevelFromTemplate)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_TemplateAssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NewLevelFromTemplate(Z_Param_AssetPath,Z_Param_TemplateAssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execNewLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NewLevel(Z_Param_AssetPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execGetAllowsCinematicControl)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ViewportConfigKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllowsCinematicControl(Z_Param_ViewportConfigKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execSetAllowsCinematicControl)
	{
		P_GET_UBOOL(Z_Param_bAllow);
		P_GET_PROPERTY(FNameProperty,Z_Param_ViewportConfigKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowsCinematicControl(Z_Param_bAllow,Z_Param_ViewportConfigKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execGetActiveViewportConfigKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetActiveViewportConfigKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execGetViewportConfigKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetViewportConfigKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execIsInPlayInEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInPlayInEditor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execEditorRequestEndPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditorRequestEndPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execEditorGetGameView)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ViewportConfigKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->EditorGetGameView(Z_Param_ViewportConfigKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execEditorSetGameView)
	{
		P_GET_UBOOL(Z_Param_bGameView);
		P_GET_PROPERTY(FNameProperty,Z_Param_ViewportConfigKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditorSetGameView(Z_Param_bGameView,Z_Param_ViewportConfigKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execEditorInvalidateViewports)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditorInvalidateViewports();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execEditorPlaySimulate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EditorPlaySimulate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execGetPilotLevelActor)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ViewportConfigKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetPilotLevelActor(Z_Param_ViewportConfigKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execEjectPilotLevelActor)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ViewportConfigKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EjectPilotLevelActor(Z_Param_ViewportConfigKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelEditorSubsystem::execPilotLevelActor)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorToPilot);
		P_GET_PROPERTY(FNameProperty,Z_Param_ViewportConfigKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PilotLevelActor(Z_Param_ActorToPilot,Z_Param_ViewportConfigKey);
		P_NATIVE_END;
	}
	void ULevelEditorSubsystem::StaticRegisterNativesULevelEditorSubsystem()
	{
		UClass* Class = ULevelEditorSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildLightMaps", &ULevelEditorSubsystem::execBuildLightMaps },
			{ "EditorGetGameView", &ULevelEditorSubsystem::execEditorGetGameView },
			{ "EditorInvalidateViewports", &ULevelEditorSubsystem::execEditorInvalidateViewports },
			{ "EditorPlaySimulate", &ULevelEditorSubsystem::execEditorPlaySimulate },
			{ "EditorRequestEndPlay", &ULevelEditorSubsystem::execEditorRequestEndPlay },
			{ "EditorSetGameView", &ULevelEditorSubsystem::execEditorSetGameView },
			{ "EjectPilotLevelActor", &ULevelEditorSubsystem::execEjectPilotLevelActor },
			{ "GetActiveViewportConfigKey", &ULevelEditorSubsystem::execGetActiveViewportConfigKey },
			{ "GetAllowsCinematicControl", &ULevelEditorSubsystem::execGetAllowsCinematicControl },
			{ "GetCurrentLevel", &ULevelEditorSubsystem::execGetCurrentLevel },
			{ "GetPilotLevelActor", &ULevelEditorSubsystem::execGetPilotLevelActor },
			{ "GetSelectionSet", &ULevelEditorSubsystem::execGetSelectionSet },
			{ "GetViewportConfigKeys", &ULevelEditorSubsystem::execGetViewportConfigKeys },
			{ "IsInPlayInEditor", &ULevelEditorSubsystem::execIsInPlayInEditor },
			{ "LoadLevel", &ULevelEditorSubsystem::execLoadLevel },
			{ "NewLevel", &ULevelEditorSubsystem::execNewLevel },
			{ "NewLevelFromTemplate", &ULevelEditorSubsystem::execNewLevelFromTemplate },
			{ "PilotLevelActor", &ULevelEditorSubsystem::execPilotLevelActor },
			{ "SaveAllDirtyLevels", &ULevelEditorSubsystem::execSaveAllDirtyLevels },
			{ "SaveCurrentLevel", &ULevelEditorSubsystem::execSaveCurrentLevel },
			{ "SetAllowsCinematicControl", &ULevelEditorSubsystem::execSetAllowsCinematicControl },
			{ "SetCurrentLevelByName", &ULevelEditorSubsystem::execSetCurrentLevelByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics
	{
		struct LevelEditorSubsystem_eventBuildLightMaps_Parms
		{
			TEnumAsByte<ELightingBuildQuality> Quality;
			bool bWithReflectionCaptures;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Quality;
		static void NewProp_bWithReflectionCaptures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWithReflectionCaptures;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorSubsystem_eventBuildLightMaps_Parms, Quality), Z_Construct_UEnum_Engine_ELightingBuildQuality, METADATA_PARAMS(nullptr, 0) }; // 178065406
	void Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics::NewProp_bWithReflectionCaptures_SetBit(void* Obj)
	{
		((LevelEditorSubsystem_eventBuildLightMaps_Parms*)Obj)->bWithReflectionCaptures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics::NewProp_bWithReflectionCaptures = { "bWithReflectionCaptures", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelEditorSubsystem_eventBuildLightMaps_Parms), &Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics::NewProp_bWithReflectionCaptures_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditorSubsystem_eventBuildLightMaps_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelEditorSubsystem_eventBuildLightMaps_Parms), &Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics::NewProp_Quality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics::NewProp_bWithReflectionCaptures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "Comment", "/**\n\x09 * Build Light Maps and optionally the reflection captures.\n\x09 * @param\x09Quality\x09One of the enum LightingBuildQuality value. Default is Quality_Production.\n\x09 * @param\x09""bWithReflectionCaptures\x09""Build the related reflection captures after building the light maps.\n\x09 * @return\x09True if build was successful.\n\x09 */" },
		{ "CPP_Default_bWithReflectionCaptures", "false" },
		{ "CPP_Default_Quality", "Quality_Production" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "Build Light Maps and optionally the reflection captures.\n@param       Quality One of the enum LightingBuildQuality value. Default is Quality_Production.\n@param       bWithReflectionCaptures Build the related reflection captures after building the light maps.\n@return      True if build was successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "BuildLightMaps", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics::LevelEditorSubsystem_eventBuildLightMaps_Parms), Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_EditorGetGameView_Statics
	{
		struct LevelEditorSubsystem_eventEditorGetGameView_Parms
		{
			FName ViewportConfigKey;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ViewportConfigKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_EditorGetGameView_Statics::NewProp_ViewportConfigKey = { "ViewportConfigKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorSubsystem_eventEditorGetGameView_Parms, ViewportConfigKey), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULevelEditorSubsystem_EditorGetGameView_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditorSubsystem_eventEditorGetGameView_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_EditorGetGameView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelEditorSubsystem_eventEditorGetGameView_Parms), &Z_Construct_UFunction_ULevelEditorSubsystem_EditorGetGameView_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorSubsystem_EditorGetGameView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_EditorGetGameView_Statics::NewProp_ViewportConfigKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_EditorGetGameView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_EditorGetGameView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "CPP_Default_ViewportConfigKey", "None" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_EditorGetGameView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "EditorGetGameView", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorSubsystem_EditorGetGameView_Statics::LevelEditorSubsystem_eventEditorGetGameView_Parms), Z_Construct_UFunction_ULevelEditorSubsystem_EditorGetGameView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_EditorGetGameView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_EditorGetGameView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_EditorGetGameView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_EditorGetGameView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_EditorGetGameView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_EditorInvalidateViewports_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_EditorInvalidateViewports_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_EditorInvalidateViewports_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "EditorInvalidateViewports", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_EditorInvalidateViewports_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_EditorInvalidateViewports_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_EditorInvalidateViewports()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_EditorInvalidateViewports_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_EditorPlaySimulate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_EditorPlaySimulate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_EditorPlaySimulate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "EditorPlaySimulate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_EditorPlaySimulate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_EditorPlaySimulate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_EditorPlaySimulate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_EditorPlaySimulate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_EditorRequestEndPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_EditorRequestEndPlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_EditorRequestEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "EditorRequestEndPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_EditorRequestEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_EditorRequestEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_EditorRequestEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_EditorRequestEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_EditorSetGameView_Statics
	{
		struct LevelEditorSubsystem_eventEditorSetGameView_Parms
		{
			bool bGameView;
			FName ViewportConfigKey;
		};
		static void NewProp_bGameView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameView;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ViewportConfigKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULevelEditorSubsystem_EditorSetGameView_Statics::NewProp_bGameView_SetBit(void* Obj)
	{
		((LevelEditorSubsystem_eventEditorSetGameView_Parms*)Obj)->bGameView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_EditorSetGameView_Statics::NewProp_bGameView = { "bGameView", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelEditorSubsystem_eventEditorSetGameView_Parms), &Z_Construct_UFunction_ULevelEditorSubsystem_EditorSetGameView_Statics::NewProp_bGameView_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_EditorSetGameView_Statics::NewProp_ViewportConfigKey = { "ViewportConfigKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorSubsystem_eventEditorSetGameView_Parms, ViewportConfigKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorSubsystem_EditorSetGameView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_EditorSetGameView_Statics::NewProp_bGameView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_EditorSetGameView_Statics::NewProp_ViewportConfigKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_EditorSetGameView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "CPP_Default_ViewportConfigKey", "None" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_EditorSetGameView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "EditorSetGameView", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorSubsystem_EditorSetGameView_Statics::LevelEditorSubsystem_eventEditorSetGameView_Parms), Z_Construct_UFunction_ULevelEditorSubsystem_EditorSetGameView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_EditorSetGameView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_EditorSetGameView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_EditorSetGameView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_EditorSetGameView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_EditorSetGameView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_EjectPilotLevelActor_Statics
	{
		struct LevelEditorSubsystem_eventEjectPilotLevelActor_Parms
		{
			FName ViewportConfigKey;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ViewportConfigKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_EjectPilotLevelActor_Statics::NewProp_ViewportConfigKey = { "ViewportConfigKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorSubsystem_eventEjectPilotLevelActor_Parms, ViewportConfigKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorSubsystem_EjectPilotLevelActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_EjectPilotLevelActor_Statics::NewProp_ViewportConfigKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_EjectPilotLevelActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "CPP_Default_ViewportConfigKey", "None" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_EjectPilotLevelActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "EjectPilotLevelActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorSubsystem_EjectPilotLevelActor_Statics::LevelEditorSubsystem_eventEjectPilotLevelActor_Parms), Z_Construct_UFunction_ULevelEditorSubsystem_EjectPilotLevelActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_EjectPilotLevelActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_EjectPilotLevelActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_EjectPilotLevelActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_EjectPilotLevelActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_EjectPilotLevelActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_GetActiveViewportConfigKey_Statics
	{
		struct LevelEditorSubsystem_eventGetActiveViewportConfigKey_Parms
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_GetActiveViewportConfigKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorSubsystem_eventGetActiveViewportConfigKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorSubsystem_GetActiveViewportConfigKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_GetActiveViewportConfigKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_GetActiveViewportConfigKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_GetActiveViewportConfigKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "GetActiveViewportConfigKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorSubsystem_GetActiveViewportConfigKey_Statics::LevelEditorSubsystem_eventGetActiveViewportConfigKey_Parms), Z_Construct_UFunction_ULevelEditorSubsystem_GetActiveViewportConfigKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_GetActiveViewportConfigKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_GetActiveViewportConfigKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_GetActiveViewportConfigKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_GetActiveViewportConfigKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_GetActiveViewportConfigKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_GetAllowsCinematicControl_Statics
	{
		struct LevelEditorSubsystem_eventGetAllowsCinematicControl_Parms
		{
			FName ViewportConfigKey;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ViewportConfigKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_GetAllowsCinematicControl_Statics::NewProp_ViewportConfigKey = { "ViewportConfigKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorSubsystem_eventGetAllowsCinematicControl_Parms, ViewportConfigKey), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULevelEditorSubsystem_GetAllowsCinematicControl_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditorSubsystem_eventGetAllowsCinematicControl_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_GetAllowsCinematicControl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelEditorSubsystem_eventGetAllowsCinematicControl_Parms), &Z_Construct_UFunction_ULevelEditorSubsystem_GetAllowsCinematicControl_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorSubsystem_GetAllowsCinematicControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_GetAllowsCinematicControl_Statics::NewProp_ViewportConfigKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_GetAllowsCinematicControl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_GetAllowsCinematicControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "CPP_Default_ViewportConfigKey", "None" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_GetAllowsCinematicControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "GetAllowsCinematicControl", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorSubsystem_GetAllowsCinematicControl_Statics::LevelEditorSubsystem_eventGetAllowsCinematicControl_Parms), Z_Construct_UFunction_ULevelEditorSubsystem_GetAllowsCinematicControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_GetAllowsCinematicControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_GetAllowsCinematicControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_GetAllowsCinematicControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_GetAllowsCinematicControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_GetAllowsCinematicControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_GetCurrentLevel_Statics
	{
		struct LevelEditorSubsystem_eventGetCurrentLevel_Parms
		{
			ULevel* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_GetCurrentLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorSubsystem_eventGetCurrentLevel_Parms, ReturnValue), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorSubsystem_GetCurrentLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_GetCurrentLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_GetCurrentLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "Comment", "/**\n\x09* Get the current level used by the world editor.\n\x09* @return\x09The current level\n\x09*/" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "Get the current level used by the world editor.\n@return       The current level" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_GetCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "GetCurrentLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorSubsystem_GetCurrentLevel_Statics::LevelEditorSubsystem_eventGetCurrentLevel_Parms), Z_Construct_UFunction_ULevelEditorSubsystem_GetCurrentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_GetCurrentLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_GetCurrentLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_GetCurrentLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_GetCurrentLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_GetCurrentLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_GetPilotLevelActor_Statics
	{
		struct LevelEditorSubsystem_eventGetPilotLevelActor_Parms
		{
			FName ViewportConfigKey;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ViewportConfigKey;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_GetPilotLevelActor_Statics::NewProp_ViewportConfigKey = { "ViewportConfigKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorSubsystem_eventGetPilotLevelActor_Parms, ViewportConfigKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_GetPilotLevelActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorSubsystem_eventGetPilotLevelActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorSubsystem_GetPilotLevelActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_GetPilotLevelActor_Statics::NewProp_ViewportConfigKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_GetPilotLevelActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_GetPilotLevelActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "CPP_Default_ViewportConfigKey", "None" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_GetPilotLevelActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "GetPilotLevelActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorSubsystem_GetPilotLevelActor_Statics::LevelEditorSubsystem_eventGetPilotLevelActor_Parms), Z_Construct_UFunction_ULevelEditorSubsystem_GetPilotLevelActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_GetPilotLevelActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_GetPilotLevelActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_GetPilotLevelActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_GetPilotLevelActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_GetPilotLevelActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_GetSelectionSet_Statics
	{
		struct LevelEditorSubsystem_eventGetSelectionSet_Parms
		{
			UTypedElementSelectionSet* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_GetSelectionSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorSubsystem_eventGetSelectionSet_Parms, ReturnValue), Z_Construct_UClass_UTypedElementSelectionSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorSubsystem_GetSelectionSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_GetSelectionSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_GetSelectionSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "Comment", "/**\n\x09 * Get the selection set for the current world, you can use this to track\n\x09 * and create changes to the level editor's selection\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "Get the selection set for the current world, you can use this to track\nand create changes to the level editor's selection" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_GetSelectionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "GetSelectionSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorSubsystem_GetSelectionSet_Statics::LevelEditorSubsystem_eventGetSelectionSet_Parms), Z_Construct_UFunction_ULevelEditorSubsystem_GetSelectionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_GetSelectionSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_GetSelectionSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_GetSelectionSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_GetSelectionSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_GetSelectionSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_GetViewportConfigKeys_Statics
	{
		struct LevelEditorSubsystem_eventGetViewportConfigKeys_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_GetViewportConfigKeys_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_GetViewportConfigKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorSubsystem_eventGetViewportConfigKeys_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorSubsystem_GetViewportConfigKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_GetViewportConfigKeys_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_GetViewportConfigKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_GetViewportConfigKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_GetViewportConfigKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "GetViewportConfigKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorSubsystem_GetViewportConfigKeys_Statics::LevelEditorSubsystem_eventGetViewportConfigKeys_Parms), Z_Construct_UFunction_ULevelEditorSubsystem_GetViewportConfigKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_GetViewportConfigKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_GetViewportConfigKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_GetViewportConfigKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_GetViewportConfigKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_GetViewportConfigKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_IsInPlayInEditor_Statics
	{
		struct LevelEditorSubsystem_eventIsInPlayInEditor_Parms
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
	void Z_Construct_UFunction_ULevelEditorSubsystem_IsInPlayInEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditorSubsystem_eventIsInPlayInEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_IsInPlayInEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelEditorSubsystem_eventIsInPlayInEditor_Parms), &Z_Construct_UFunction_ULevelEditorSubsystem_IsInPlayInEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorSubsystem_IsInPlayInEditor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_IsInPlayInEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_IsInPlayInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_IsInPlayInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "IsInPlayInEditor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorSubsystem_IsInPlayInEditor_Statics::LevelEditorSubsystem_eventIsInPlayInEditor_Parms), Z_Construct_UFunction_ULevelEditorSubsystem_IsInPlayInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_IsInPlayInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_IsInPlayInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_IsInPlayInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_IsInPlayInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_IsInPlayInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel_Statics
	{
		struct LevelEditorSubsystem_eventLoadLevel_Parms
		{
			FString AssetPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorSubsystem_eventLoadLevel_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel_Statics::NewProp_AssetPath_MetaData)) };
	void Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditorSubsystem_eventLoadLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelEditorSubsystem_eventLoadLevel_Parms), &Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "Comment", "/**\n\x09 * Close the current Persistent Level (without saving it). Loads the specified level.\n\x09 * @param\x09""AssetPath\x09\x09\x09\x09""Asset Path of the level to be loaded.\n\x09 *\x09\x09ie. /Game/MyFolder/MyAsset\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "Close the current Persistent Level (without saving it). Loads the specified level.\n@param       AssetPath                               Asset Path of the level to be loaded.\n             ie. /Game/MyFolder/MyAsset\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "LoadLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel_Statics::LevelEditorSubsystem_eventLoadLevel_Parms), Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel_Statics
	{
		struct LevelEditorSubsystem_eventNewLevel_Parms
		{
			FString AssetPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorSubsystem_eventNewLevel_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel_Statics::NewProp_AssetPath_MetaData)) };
	void Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditorSubsystem_eventNewLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelEditorSubsystem_eventNewLevel_Parms), &Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "Comment", "/**\n\x09 * Close the current Persistent Level (without saving it). Create a new blank Level and save it. Load the new created level.\n\x09 * @param\x09""AssetPath\x09\x09""Asset Path of where the level will be saved.\n\x09 *\x09\x09ie. /Game/MyFolder/MyAsset\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "Close the current Persistent Level (without saving it). Create a new blank Level and save it. Load the new created level.\n@param       AssetPath               Asset Path of where the level will be saved.\n             ie. /Game/MyFolder/MyAsset\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "NewLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel_Statics::LevelEditorSubsystem_eventNewLevel_Parms), Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics
	{
		struct LevelEditorSubsystem_eventNewLevelFromTemplate_Parms
		{
			FString AssetPath;
			FString TemplateAssetPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateAssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TemplateAssetPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorSubsystem_eventNewLevelFromTemplate_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::NewProp_AssetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::NewProp_TemplateAssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::NewProp_TemplateAssetPath = { "TemplateAssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorSubsystem_eventNewLevelFromTemplate_Parms, TemplateAssetPath), METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::NewProp_TemplateAssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::NewProp_TemplateAssetPath_MetaData)) };
	void Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditorSubsystem_eventNewLevelFromTemplate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelEditorSubsystem_eventNewLevelFromTemplate_Parms), &Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::NewProp_TemplateAssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "Comment", "/**\n\x09 * Close the current Persistent Level (without saving it). Create a new Level base on another level and save it. Load the new created level.\n\x09 * @param\x09""AssetPath\x09\x09\x09\x09""Asset Path of where the level will be saved.\n\x09 *\x09\x09ie. /Game/MyFolder/MyAsset\n\x09 * @param\x09TemplateAssetPath\x09\x09Level to be used as Template.\n\x09 *\x09\x09ie. /Game/MyFolder/MyAsset\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "Close the current Persistent Level (without saving it). Create a new Level base on another level and save it. Load the new created level.\n@param       AssetPath                               Asset Path of where the level will be saved.\n             ie. /Game/MyFolder/MyAsset\n@param       TemplateAssetPath               Level to be used as Template.\n             ie. /Game/MyFolder/MyAsset\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "NewLevelFromTemplate", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::LevelEditorSubsystem_eventNewLevelFromTemplate_Parms), Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_PilotLevelActor_Statics
	{
		struct LevelEditorSubsystem_eventPilotLevelActor_Parms
		{
			AActor* ActorToPilot;
			FName ViewportConfigKey;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToPilot;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ViewportConfigKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_PilotLevelActor_Statics::NewProp_ActorToPilot = { "ActorToPilot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorSubsystem_eventPilotLevelActor_Parms, ActorToPilot), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_PilotLevelActor_Statics::NewProp_ViewportConfigKey = { "ViewportConfigKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorSubsystem_eventPilotLevelActor_Parms, ViewportConfigKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorSubsystem_PilotLevelActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_PilotLevelActor_Statics::NewProp_ActorToPilot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_PilotLevelActor_Statics::NewProp_ViewportConfigKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_PilotLevelActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "CPP_Default_ViewportConfigKey", "None" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_PilotLevelActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "PilotLevelActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorSubsystem_PilotLevelActor_Statics::LevelEditorSubsystem_eventPilotLevelActor_Parms), Z_Construct_UFunction_ULevelEditorSubsystem_PilotLevelActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_PilotLevelActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_PilotLevelActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_PilotLevelActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_PilotLevelActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_PilotLevelActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_SaveAllDirtyLevels_Statics
	{
		struct LevelEditorSubsystem_eventSaveAllDirtyLevels_Parms
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
	void Z_Construct_UFunction_ULevelEditorSubsystem_SaveAllDirtyLevels_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditorSubsystem_eventSaveAllDirtyLevels_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_SaveAllDirtyLevels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelEditorSubsystem_eventSaveAllDirtyLevels_Parms), &Z_Construct_UFunction_ULevelEditorSubsystem_SaveAllDirtyLevels_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorSubsystem_SaveAllDirtyLevels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_SaveAllDirtyLevels_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_SaveAllDirtyLevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "Comment", "/**\n\x09 * Saves all Level currently loaded by the World Editor.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "Saves all Level currently loaded by the World Editor.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_SaveAllDirtyLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "SaveAllDirtyLevels", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorSubsystem_SaveAllDirtyLevels_Statics::LevelEditorSubsystem_eventSaveAllDirtyLevels_Parms), Z_Construct_UFunction_ULevelEditorSubsystem_SaveAllDirtyLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_SaveAllDirtyLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_SaveAllDirtyLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_SaveAllDirtyLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_SaveAllDirtyLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_SaveAllDirtyLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_SaveCurrentLevel_Statics
	{
		struct LevelEditorSubsystem_eventSaveCurrentLevel_Parms
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
	void Z_Construct_UFunction_ULevelEditorSubsystem_SaveCurrentLevel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditorSubsystem_eventSaveCurrentLevel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_SaveCurrentLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelEditorSubsystem_eventSaveCurrentLevel_Parms), &Z_Construct_UFunction_ULevelEditorSubsystem_SaveCurrentLevel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorSubsystem_SaveCurrentLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_SaveCurrentLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_SaveCurrentLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "Comment", "/**\n\x09 * Saves the specified Level. Must already be saved at lease once to have a valid path.\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "Saves the specified Level. Must already be saved at lease once to have a valid path.\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_SaveCurrentLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "SaveCurrentLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorSubsystem_SaveCurrentLevel_Statics::LevelEditorSubsystem_eventSaveCurrentLevel_Parms), Z_Construct_UFunction_ULevelEditorSubsystem_SaveCurrentLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_SaveCurrentLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_SaveCurrentLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_SaveCurrentLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_SaveCurrentLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_SaveCurrentLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_SetAllowsCinematicControl_Statics
	{
		struct LevelEditorSubsystem_eventSetAllowsCinematicControl_Parms
		{
			bool bAllow;
			FName ViewportConfigKey;
		};
		static void NewProp_bAllow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllow;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ViewportConfigKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULevelEditorSubsystem_SetAllowsCinematicControl_Statics::NewProp_bAllow_SetBit(void* Obj)
	{
		((LevelEditorSubsystem_eventSetAllowsCinematicControl_Parms*)Obj)->bAllow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_SetAllowsCinematicControl_Statics::NewProp_bAllow = { "bAllow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelEditorSubsystem_eventSetAllowsCinematicControl_Parms), &Z_Construct_UFunction_ULevelEditorSubsystem_SetAllowsCinematicControl_Statics::NewProp_bAllow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_SetAllowsCinematicControl_Statics::NewProp_ViewportConfigKey = { "ViewportConfigKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorSubsystem_eventSetAllowsCinematicControl_Parms, ViewportConfigKey), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorSubsystem_SetAllowsCinematicControl_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_SetAllowsCinematicControl_Statics::NewProp_bAllow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_SetAllowsCinematicControl_Statics::NewProp_ViewportConfigKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_SetAllowsCinematicControl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "CPP_Default_ViewportConfigKey", "None" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_SetAllowsCinematicControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "SetAllowsCinematicControl", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorSubsystem_SetAllowsCinematicControl_Statics::LevelEditorSubsystem_eventSetAllowsCinematicControl_Parms), Z_Construct_UFunction_ULevelEditorSubsystem_SetAllowsCinematicControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_SetAllowsCinematicControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_SetAllowsCinematicControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_SetAllowsCinematicControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_SetAllowsCinematicControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_SetAllowsCinematicControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelEditorSubsystem_SetCurrentLevelByName_Statics
	{
		struct LevelEditorSubsystem_eventSetCurrentLevelByName_Parms
		{
			FName LevelName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_SetCurrentLevelByName_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelEditorSubsystem_eventSetCurrentLevelByName_Parms, LevelName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ULevelEditorSubsystem_SetCurrentLevelByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LevelEditorSubsystem_eventSetCurrentLevelByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULevelEditorSubsystem_SetCurrentLevelByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelEditorSubsystem_eventSetCurrentLevelByName_Parms), &Z_Construct_UFunction_ULevelEditorSubsystem_SetCurrentLevelByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelEditorSubsystem_SetCurrentLevelByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_SetCurrentLevelByName_Statics::NewProp_LevelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelEditorSubsystem_SetCurrentLevelByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelEditorSubsystem_SetCurrentLevelByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "Comment", "/**\n\x09 * Set the current level used by the world editor.\n\x09 * If more than one level shares the same name, the first one encounter of that level name will be used.\n\x09 * @param\x09LevelName\x09The name of the Level the actor belongs to (same name as in the ContentBrowser).\n\x09 * @return\x09True if the operation succeeds.\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "Set the current level used by the world editor.\nIf more than one level shares the same name, the first one encounter of that level name will be used.\n@param       LevelName       The name of the Level the actor belongs to (same name as in the ContentBrowser).\n@return      True if the operation succeeds." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelEditorSubsystem_SetCurrentLevelByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelEditorSubsystem, nullptr, "SetCurrentLevelByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelEditorSubsystem_SetCurrentLevelByName_Statics::LevelEditorSubsystem_eventSetCurrentLevelByName_Parms), Z_Construct_UFunction_ULevelEditorSubsystem_SetCurrentLevelByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_SetCurrentLevelByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelEditorSubsystem_SetCurrentLevelByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelEditorSubsystem_SetCurrentLevelByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelEditorSubsystem_SetCurrentLevelByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelEditorSubsystem_SetCurrentLevelByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelEditorSubsystem);
	UClass* Z_Construct_UClass_ULevelEditorSubsystem_NoRegister()
	{
		return ULevelEditorSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULevelEditorSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPreSaveWorld_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreSaveWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPostSaveWorld_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostSaveWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEditorCameraMoved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEditorCameraMoved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMapChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnMapOpened_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMapOpened;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelEditorSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelEditorSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_BuildLightMaps, "BuildLightMaps" }, // 3227397029
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_EditorGetGameView, "EditorGetGameView" }, // 701179512
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_EditorInvalidateViewports, "EditorInvalidateViewports" }, // 2067196759
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_EditorPlaySimulate, "EditorPlaySimulate" }, // 3980032791
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_EditorRequestEndPlay, "EditorRequestEndPlay" }, // 2028999877
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_EditorSetGameView, "EditorSetGameView" }, // 43089481
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_EjectPilotLevelActor, "EjectPilotLevelActor" }, // 2560353160
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_GetActiveViewportConfigKey, "GetActiveViewportConfigKey" }, // 3901367017
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_GetAllowsCinematicControl, "GetAllowsCinematicControl" }, // 1932307568
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_GetCurrentLevel, "GetCurrentLevel" }, // 3430022738
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_GetPilotLevelActor, "GetPilotLevelActor" }, // 3806345379
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_GetSelectionSet, "GetSelectionSet" }, // 276934891
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_GetViewportConfigKeys, "GetViewportConfigKeys" }, // 2982515465
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_IsInPlayInEditor, "IsInPlayInEditor" }, // 1799591762
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_LoadLevel, "LoadLevel" }, // 2869880819
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_NewLevel, "NewLevel" }, // 256890385
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_NewLevelFromTemplate, "NewLevelFromTemplate" }, // 3984003476
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_PilotLevelActor, "PilotLevelActor" }, // 4285854260
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_SaveAllDirtyLevels, "SaveAllDirtyLevels" }, // 3767984836
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_SaveCurrentLevel, "SaveCurrentLevel" }, // 2322862825
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_SetAllowsCinematicControl, "SetAllowsCinematicControl" }, // 1718745536
		{ &Z_Construct_UFunction_ULevelEditorSubsystem_SetCurrentLevelByName, "SetCurrentLevelByName" }, // 2530246614
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* ULevelEditorSubsystem\n* Subsystem for exposing Level Editor related functionality to scripts\n*/" },
		{ "IncludePath", "LevelEditorSubsystem.h" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "ULevelEditorSubsystem\nSubsystem for exposing Level Editor related functionality to scripts" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnPreSaveWorld_MetaData[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "Comment", "/** Expose PreSaveWorld to blueprints */" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "Expose PreSaveWorld to blueprints" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnPreSaveWorld = { "OnPreSaveWorld", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorSubsystem, OnPreSaveWorld), Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPreSaveWorld__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnPreSaveWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnPreSaveWorld_MetaData)) }; // 2585402454
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnPostSaveWorld_MetaData[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "Comment", "/** Expose PostSaveWorld to blueprints */" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "Expose PostSaveWorld to blueprints" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnPostSaveWorld = { "OnPostSaveWorld", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorSubsystem, OnPostSaveWorld), Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorPostSaveWorld__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnPostSaveWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnPostSaveWorld_MetaData)) }; // 1575776566
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnEditorCameraMoved_MetaData[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "Comment", "/** Expose EditorCameraMoved to blueprints */" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "Expose EditorCameraMoved to blueprints" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnEditorCameraMoved = { "OnEditorCameraMoved", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorSubsystem, OnEditorCameraMoved), Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorEditorCameraMoved__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnEditorCameraMoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnEditorCameraMoved_MetaData)) }; // 2814263992
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnMapChanged_MetaData[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "Comment", "/** Expose MapChanged to blueprints. Note: This executes too early for some editor scripting, consider using OnMapOpened if this doesn't work for you. */" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "Expose MapChanged to blueprints. Note: This executes too early for some editor scripting, consider using OnMapOpened if this doesn't work for you." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnMapChanged = { "OnMapChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorSubsystem, OnMapChanged), Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnMapChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnMapChanged_MetaData)) }; // 873712537
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnMapOpened_MetaData[] = {
		{ "Category", "Editor Scripting | Level Utility" },
		{ "Comment", "/** Expose MapOpened to blueprints */" },
		{ "ModuleRelativePath", "Public/LevelEditorSubsystem.h" },
		{ "ToolTip", "Expose MapOpened to blueprints" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnMapOpened = { "OnMapOpened", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelEditorSubsystem, OnMapOpened), Z_Construct_UDelegateFunction_LevelEditor_OnLevelEditorMapOpened__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnMapOpened_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnMapOpened_MetaData)) }; // 2976792512
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelEditorSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnPreSaveWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnPostSaveWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnEditorCameraMoved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnMapChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelEditorSubsystem_Statics::NewProp_OnMapOpened,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelEditorSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelEditorSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelEditorSubsystem_Statics::ClassParams = {
		&ULevelEditorSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelEditorSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorSubsystem_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelEditorSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelEditorSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelEditorSubsystem()
	{
		if (!Z_Registration_Info_UClass_ULevelEditorSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelEditorSubsystem.OuterSingleton, Z_Construct_UClass_ULevelEditorSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelEditorSubsystem.OuterSingleton;
	}
	template<> LEVELEDITOR_API UClass* StaticClass<ULevelEditorSubsystem>()
	{
		return ULevelEditorSubsystem::StaticClass();
	}
	ULevelEditorSubsystem::ULevelEditorSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelEditorSubsystem);
	ULevelEditorSubsystem::~ULevelEditorSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelEditorSubsystem, ULevelEditorSubsystem::StaticClass, TEXT("ULevelEditorSubsystem"), &Z_Registration_Info_UClass_ULevelEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelEditorSubsystem), 138583985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_1187626294(TEXT("/Script/LevelEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_LevelEditor_Public_LevelEditorSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
