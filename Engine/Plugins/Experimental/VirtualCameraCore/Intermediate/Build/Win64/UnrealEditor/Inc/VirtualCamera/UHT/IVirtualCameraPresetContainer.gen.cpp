// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IVirtualCameraPresetContainer.h"
#include "VirtualCameraSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIVirtualCameraPresetContainer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VirtualCamera();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraPresetContainer();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraPresetContainer_NoRegister();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset();
// End Cross Module References
	DEFINE_FUNCTION(IVirtualCameraPresetContainer::execGetSettingsPresets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FVirtualCameraSettingsPreset>*)Z_Param__Result=P_THIS->GetSettingsPresets_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraPresetContainer::execDeletePreset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PresetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->DeletePreset_Implementation(Z_Param_PresetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraPresetContainer::execLoadPreset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PresetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadPreset_Implementation(Z_Param_PresetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IVirtualCameraPresetContainer::execSavePreset)
	{
		P_GET_UBOOL(Z_Param_bSaveCameraSettings);
		P_GET_UBOOL(Z_Param_bSaveStabilization);
		P_GET_UBOOL(Z_Param_bSaveAxisLocking);
		P_GET_UBOOL(Z_Param_bSaveMotionScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SavePreset_Implementation(Z_Param_bSaveCameraSettings,Z_Param_bSaveStabilization,Z_Param_bSaveAxisLocking,Z_Param_bSaveMotionScale);
		P_NATIVE_END;
	}
	struct VirtualCameraPresetContainer_eventDeletePreset_Parms
	{
		FString PresetName;
		int32 ReturnValue;

		/** Constructor, initializes return property only **/
		VirtualCameraPresetContainer_eventDeletePreset_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct VirtualCameraPresetContainer_eventGetSettingsPresets_Parms
	{
		TMap<FString,FVirtualCameraSettingsPreset> ReturnValue;
	};
	struct VirtualCameraPresetContainer_eventLoadPreset_Parms
	{
		FString PresetName;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		VirtualCameraPresetContainer_eventLoadPreset_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct VirtualCameraPresetContainer_eventSavePreset_Parms
	{
		bool bSaveCameraSettings;
		bool bSaveStabilization;
		bool bSaveAxisLocking;
		bool bSaveMotionScale;
		FString ReturnValue;
	};
	int32 IVirtualCameraPresetContainer::DeletePreset(const FString& PresetName)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DeletePreset instead.");
		VirtualCameraPresetContainer_eventDeletePreset_Parms Parms;
		return Parms.ReturnValue;
	}
	TMap<FString,FVirtualCameraSettingsPreset> IVirtualCameraPresetContainer::GetSettingsPresets()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSettingsPresets instead.");
		VirtualCameraPresetContainer_eventGetSettingsPresets_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IVirtualCameraPresetContainer::LoadPreset(const FString& PresetName)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LoadPreset instead.");
		VirtualCameraPresetContainer_eventLoadPreset_Parms Parms;
		return Parms.ReturnValue;
	}
	FString IVirtualCameraPresetContainer::SavePreset(bool bSaveCameraSettings, bool bSaveStabilization, bool bSaveAxisLocking, bool bSaveMotionScale)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SavePreset instead.");
		VirtualCameraPresetContainer_eventSavePreset_Parms Parms;
		return Parms.ReturnValue;
	}
	void UVirtualCameraPresetContainer::StaticRegisterNativesUVirtualCameraPresetContainer()
	{
		UClass* Class = UVirtualCameraPresetContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeletePreset", &IVirtualCameraPresetContainer::execDeletePreset },
			{ "GetSettingsPresets", &IVirtualCameraPresetContainer::execGetSettingsPresets },
			{ "LoadPreset", &IVirtualCameraPresetContainer::execLoadPreset },
			{ "SavePreset", &IVirtualCameraPresetContainer::execSavePreset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVirtualCameraPresetContainer_DeletePreset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraPresetContainer_DeletePreset_Statics::NewProp_PresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVirtualCameraPresetContainer_DeletePreset_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPresetContainer_eventDeletePreset_Parms, PresetName), METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraPresetContainer_DeletePreset_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraPresetContainer_DeletePreset_Statics::NewProp_PresetName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVirtualCameraPresetContainer_DeletePreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPresetContainer_eventDeletePreset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraPresetContainer_DeletePreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraPresetContainer_DeletePreset_Statics::NewProp_PresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraPresetContainer_DeletePreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraPresetContainer_DeletePreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Presets" },
		{ "Comment", "/**\n\x09 * Deletes a preset using its name as the key.\n\x09 * @param PresetName - The name of the preset to delete\n\x09 * @return the number of values associated with the key\n\x09 */" },
		{ "ModuleRelativePath", "Public/IVirtualCameraPresetContainer.h" },
		{ "ToolTip", "Deletes a preset using its name as the key.\n@param PresetName - The name of the preset to delete\n@return the number of values associated with the key" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraPresetContainer_DeletePreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraPresetContainer, nullptr, "DeletePreset", nullptr, nullptr, sizeof(VirtualCameraPresetContainer_eventDeletePreset_Parms), Z_Construct_UFunction_UVirtualCameraPresetContainer_DeletePreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraPresetContainer_DeletePreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraPresetContainer_DeletePreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraPresetContainer_DeletePreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraPresetContainer_DeletePreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraPresetContainer_DeletePreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraPresetContainer_GetSettingsPresets_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVirtualCameraPresetContainer_GetSettingsPresets_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset, METADATA_PARAMS(nullptr, 0) }; // 1209101004
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVirtualCameraPresetContainer_GetSettingsPresets_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVirtualCameraPresetContainer_GetSettingsPresets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPresetContainer_eventGetSettingsPresets_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1209101004
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraPresetContainer_GetSettingsPresets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraPresetContainer_GetSettingsPresets_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraPresetContainer_GetSettingsPresets_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraPresetContainer_GetSettingsPresets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraPresetContainer_GetSettingsPresets_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Presets" },
		{ "Comment", "/**\n\x09 * Returns a sorted TMap of the current presets.\n\x09 * @return a sorted TMap of settings presets\n\x09 */" },
		{ "ModuleRelativePath", "Public/IVirtualCameraPresetContainer.h" },
		{ "ToolTip", "Returns a sorted TMap of the current presets.\n@return a sorted TMap of settings presets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraPresetContainer_GetSettingsPresets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraPresetContainer, nullptr, "GetSettingsPresets", nullptr, nullptr, sizeof(VirtualCameraPresetContainer_eventGetSettingsPresets_Parms), Z_Construct_UFunction_UVirtualCameraPresetContainer_GetSettingsPresets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraPresetContainer_GetSettingsPresets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraPresetContainer_GetSettingsPresets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraPresetContainer_GetSettingsPresets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraPresetContainer_GetSettingsPresets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraPresetContainer_GetSettingsPresets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PresetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PresetName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset_Statics::NewProp_PresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset_Statics::NewProp_PresetName = { "PresetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPresetContainer_eventLoadPreset_Parms, PresetName), METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset_Statics::NewProp_PresetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset_Statics::NewProp_PresetName_MetaData)) };
	void Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCameraPresetContainer_eventLoadPreset_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPresetContainer_eventLoadPreset_Parms), &Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset_Statics::NewProp_PresetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Presets" },
		{ "Comment", "/**\n\x09 * Loads a preset using its name as a string key.\n\x09 * @param PresetName - The name of the preset to load\n\x09 * @return true if successful, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/IVirtualCameraPresetContainer.h" },
		{ "ToolTip", "Loads a preset using its name as a string key.\n@param PresetName - The name of the preset to load\n@return true if successful, false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraPresetContainer, nullptr, "LoadPreset", nullptr, nullptr, sizeof(VirtualCameraPresetContainer_eventLoadPreset_Parms), Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveCameraSettings_MetaData[];
#endif
		static void NewProp_bSaveCameraSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveCameraSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveStabilization_MetaData[];
#endif
		static void NewProp_bSaveStabilization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveStabilization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveAxisLocking_MetaData[];
#endif
		static void NewProp_bSaveAxisLocking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveAxisLocking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveMotionScale_MetaData[];
#endif
		static void NewProp_bSaveMotionScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveMotionScale;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveCameraSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveCameraSettings_SetBit(void* Obj)
	{
		((VirtualCameraPresetContainer_eventSavePreset_Parms*)Obj)->bSaveCameraSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveCameraSettings = { "bSaveCameraSettings", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPresetContainer_eventSavePreset_Parms), &Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveCameraSettings_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveCameraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveCameraSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveStabilization_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveStabilization_SetBit(void* Obj)
	{
		((VirtualCameraPresetContainer_eventSavePreset_Parms*)Obj)->bSaveStabilization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveStabilization = { "bSaveStabilization", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPresetContainer_eventSavePreset_Parms), &Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveStabilization_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveStabilization_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveStabilization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveAxisLocking_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveAxisLocking_SetBit(void* Obj)
	{
		((VirtualCameraPresetContainer_eventSavePreset_Parms*)Obj)->bSaveAxisLocking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveAxisLocking = { "bSaveAxisLocking", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPresetContainer_eventSavePreset_Parms), &Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveAxisLocking_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveAxisLocking_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveAxisLocking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveMotionScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveMotionScale_SetBit(void* Obj)
	{
		((VirtualCameraPresetContainer_eventSavePreset_Parms*)Obj)->bSaveMotionScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveMotionScale = { "bSaveMotionScale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VirtualCameraPresetContainer_eventSavePreset_Parms), &Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveMotionScale_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveMotionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveMotionScale_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPresetContainer_eventSavePreset_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveCameraSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveStabilization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveAxisLocking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_bSaveMotionScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera | Presets" },
		{ "Comment", "/**\n\x09 * Saves a preset into the list of presets.\n\x09 * @param bSaveCameraSettings - Should this preset save camera settings\n\x09 * @param bSaveStabilization - Should this preset save stabilization settings\n\x09 * @param bSaveAxisLocking - Should this preset save axis locking settings\n\x09 * @param bSaveMotionScale - Should this preset save motion scaled settings\n\x09 * @return the name of the preset\n\x09 */" },
		{ "ModuleRelativePath", "Public/IVirtualCameraPresetContainer.h" },
		{ "ToolTip", "Saves a preset into the list of presets.\n@param bSaveCameraSettings - Should this preset save camera settings\n@param bSaveStabilization - Should this preset save stabilization settings\n@param bSaveAxisLocking - Should this preset save axis locking settings\n@param bSaveMotionScale - Should this preset save motion scaled settings\n@return the name of the preset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCameraPresetContainer, nullptr, "SavePreset", nullptr, nullptr, sizeof(VirtualCameraPresetContainer_eventSavePreset_Parms), Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualCameraPresetContainer);
	UClass* Z_Construct_UClass_UVirtualCameraPresetContainer_NoRegister()
	{
		return UVirtualCameraPresetContainer::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualCameraPresetContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualCameraPresetContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVirtualCameraPresetContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVirtualCameraPresetContainer_DeletePreset, "DeletePreset" }, // 1283747134
		{ &Z_Construct_UFunction_UVirtualCameraPresetContainer_GetSettingsPresets, "GetSettingsPresets" }, // 2252887400
		{ &Z_Construct_UFunction_UVirtualCameraPresetContainer_LoadPreset, "LoadPreset" }, // 1748414707
		{ &Z_Construct_UFunction_UVirtualCameraPresetContainer_SavePreset, "SavePreset" }, // 1423582502
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCameraPresetContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/IVirtualCameraPresetContainer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualCameraPresetContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IVirtualCameraPresetContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualCameraPresetContainer_Statics::ClassParams = {
		&UVirtualCameraPresetContainer::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualCameraPresetContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualCameraPresetContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualCameraPresetContainer()
	{
		if (!Z_Registration_Info_UClass_UVirtualCameraPresetContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualCameraPresetContainer.OuterSingleton, Z_Construct_UClass_UVirtualCameraPresetContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualCameraPresetContainer.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UClass* StaticClass<UVirtualCameraPresetContainer>()
	{
		return UVirtualCameraPresetContainer::StaticClass();
	}
	UVirtualCameraPresetContainer::UVirtualCameraPresetContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualCameraPresetContainer);
	UVirtualCameraPresetContainer::~UVirtualCameraPresetContainer() {}
	static FName NAME_UVirtualCameraPresetContainer_DeletePreset = FName(TEXT("DeletePreset"));
	int32 IVirtualCameraPresetContainer::Execute_DeletePreset(UObject* O, const FString& PresetName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraPresetContainer::StaticClass()));
		VirtualCameraPresetContainer_eventDeletePreset_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraPresetContainer_DeletePreset);
		if (Func)
		{
			Parms.PresetName=PresetName;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualCameraPresetContainer*)(O->GetNativeInterfaceAddress(UVirtualCameraPresetContainer::StaticClass())))
		{
			Parms.ReturnValue = I->DeletePreset_Implementation(PresetName);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVirtualCameraPresetContainer_GetSettingsPresets = FName(TEXT("GetSettingsPresets"));
	TMap<FString,FVirtualCameraSettingsPreset> IVirtualCameraPresetContainer::Execute_GetSettingsPresets(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraPresetContainer::StaticClass()));
		VirtualCameraPresetContainer_eventGetSettingsPresets_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraPresetContainer_GetSettingsPresets);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualCameraPresetContainer*)(O->GetNativeInterfaceAddress(UVirtualCameraPresetContainer::StaticClass())))
		{
			Parms.ReturnValue = I->GetSettingsPresets_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVirtualCameraPresetContainer_LoadPreset = FName(TEXT("LoadPreset"));
	bool IVirtualCameraPresetContainer::Execute_LoadPreset(UObject* O, const FString& PresetName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraPresetContainer::StaticClass()));
		VirtualCameraPresetContainer_eventLoadPreset_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraPresetContainer_LoadPreset);
		if (Func)
		{
			Parms.PresetName=PresetName;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualCameraPresetContainer*)(O->GetNativeInterfaceAddress(UVirtualCameraPresetContainer::StaticClass())))
		{
			Parms.ReturnValue = I->LoadPreset_Implementation(PresetName);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UVirtualCameraPresetContainer_SavePreset = FName(TEXT("SavePreset"));
	FString IVirtualCameraPresetContainer::Execute_SavePreset(UObject* O, bool bSaveCameraSettings, bool bSaveStabilization, bool bSaveAxisLocking, bool bSaveMotionScale)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVirtualCameraPresetContainer::StaticClass()));
		VirtualCameraPresetContainer_eventSavePreset_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVirtualCameraPresetContainer_SavePreset);
		if (Func)
		{
			Parms.bSaveCameraSettings=bSaveCameraSettings;
			Parms.bSaveStabilization=bSaveStabilization;
			Parms.bSaveAxisLocking=bSaveAxisLocking;
			Parms.bSaveMotionScale=bSaveMotionScale;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVirtualCameraPresetContainer*)(O->GetNativeInterfaceAddress(UVirtualCameraPresetContainer::StaticClass())))
		{
			Parms.ReturnValue = I->SavePreset_Implementation(bSaveCameraSettings,bSaveStabilization,bSaveAxisLocking,bSaveMotionScale);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualCameraPresetContainer, UVirtualCameraPresetContainer::StaticClass, TEXT("UVirtualCameraPresetContainer"), &Z_Registration_Info_UClass_UVirtualCameraPresetContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualCameraPresetContainer), 1144967962U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_90633822(TEXT("/Script/VirtualCamera"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_IVirtualCameraPresetContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
