// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirtualCameraPawnBase.h"
#include "VirtualCameraSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualCameraPawnBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_VirtualCamera();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_AVirtualCameraPawnBase();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_AVirtualCameraPawnBase_NoRegister();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraCineCameraComponent_NoRegister();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraOptions_NoRegister();
	VIRTUALCAMERA_API UClass* Z_Construct_UClass_UVirtualCameraPresetContainer_NoRegister();
	VIRTUALCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset();
// End Cross Module References
	struct VirtualCameraPawnBase_eventHighlightTappedActor_Parms
	{
		AActor* HighlightedActor;
	};
	static FName NAME_AVirtualCameraPawnBase_HighlightTappedActor = FName(TEXT("HighlightTappedActor"));
	void AVirtualCameraPawnBase::HighlightTappedActor(AActor* HighlightedActor)
	{
		VirtualCameraPawnBase_eventHighlightTappedActor_Parms Parms;
		Parms.HighlightedActor=HighlightedActor;
		ProcessEvent(FindFunctionChecked(NAME_AVirtualCameraPawnBase_HighlightTappedActor),&Parms);
	}
	static FName NAME_AVirtualCameraPawnBase_LoadFinished = FName(TEXT("LoadFinished"));
	void AVirtualCameraPawnBase::LoadFinished()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVirtualCameraPawnBase_LoadFinished),NULL);
	}
	static FName NAME_AVirtualCameraPawnBase_TriggerFocusPlaneTimer = FName(TEXT("TriggerFocusPlaneTimer"));
	void AVirtualCameraPawnBase::TriggerFocusPlaneTimer()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVirtualCameraPawnBase_TriggerFocusPlaneTimer),NULL);
	}
	void AVirtualCameraPawnBase::StaticRegisterNativesAVirtualCameraPawnBase()
	{
	}
	struct Z_Construct_UFunction_AVirtualCameraPawnBase_HighlightTappedActor_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HighlightedActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVirtualCameraPawnBase_HighlightTappedActor_Statics::NewProp_HighlightedActor = { "HighlightedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VirtualCameraPawnBase_eventHighlightTappedActor_Parms, HighlightedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVirtualCameraPawnBase_HighlightTappedActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVirtualCameraPawnBase_HighlightTappedActor_Statics::NewProp_HighlightedActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPawnBase_HighlightTappedActor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Blueprint event to trigger the highlighting of a specific actor.\n\x09 * @param HighlightedActor - The Actor on which the focus is set\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPawnBase.h" },
		{ "ToolTip", "Blueprint event to trigger the highlighting of a specific actor.\n@param HighlightedActor - The Actor on which the focus is set" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPawnBase_HighlightTappedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPawnBase, nullptr, "HighlightTappedActor", nullptr, nullptr, sizeof(VirtualCameraPawnBase_eventHighlightTappedActor_Parms), Z_Construct_UFunction_AVirtualCameraPawnBase_HighlightTappedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPawnBase_HighlightTappedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPawnBase_HighlightTappedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPawnBase_HighlightTappedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPawnBase_HighlightTappedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPawnBase_HighlightTappedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPawnBase_LoadFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPawnBase_LoadFinished_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Blueprint event for signaling UI that game settings have been loaded.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPawnBase.h" },
		{ "ToolTip", "Blueprint event for signaling UI that game settings have been loaded." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPawnBase_LoadFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPawnBase, nullptr, "LoadFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPawnBase_LoadFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPawnBase_LoadFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPawnBase_LoadFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPawnBase_LoadFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AVirtualCameraPawnBase_TriggerFocusPlaneTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVirtualCameraPawnBase_TriggerFocusPlaneTimer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Blueprint event to trigger focus plane visualization for a set amount of time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPawnBase.h" },
		{ "ToolTip", "Blueprint event to trigger focus plane visualization for a set amount of time." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVirtualCameraPawnBase_TriggerFocusPlaneTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVirtualCameraPawnBase, nullptr, "TriggerFocusPlaneTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVirtualCameraPawnBase_TriggerFocusPlaneTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVirtualCameraPawnBase_TriggerFocusPlaneTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVirtualCameraPawnBase_TriggerFocusPlaneTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVirtualCameraPawnBase_TriggerFocusPlaneTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVirtualCameraPawnBase);
	UClass* Z_Construct_UClass_AVirtualCameraPawnBase_NoRegister()
	{
		return AVirtualCameraPawnBase::StaticClass();
	}
	struct Z_Construct_UClass_AVirtualCameraPawnBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CineCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSaveSettingsWhenClosing_MetaData[];
#endif
		static void NewProp_bSaveSettingsWhenClosing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSaveSettingsWhenClosing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedSettingsSlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavedSettingsSlotName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsPresets_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_SettingsPresets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsPresets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SettingsPresets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFocusVisualization_MetaData[];
#endif
		static void NewProp_bAllowFocusVisualization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFocusVisualization;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVirtualCameraPawnBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualCamera,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVirtualCameraPawnBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVirtualCameraPawnBase_HighlightTappedActor, "HighlightTappedActor" }, // 2164459371
		{ &Z_Construct_UFunction_AVirtualCameraPawnBase_LoadFinished, "LoadFinished" }, // 632297324
		{ &Z_Construct_UFunction_AVirtualCameraPawnBase_TriggerFocusPlaneTimer, "TriggerFocusPlaneTimer" }, // 2408132184
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraPawnBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A class to handle aspects of virtual Camera related to general settings, and communicating with components.\n */" },
		{ "HideCategories", "Pawn Camera Rendering Replication Input Actor HLOD Navigation" },
		{ "IncludePath", "VirtualCameraPawnBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VirtualCameraPawnBase.h" },
		{ "ToolTip", "A class to handle aspects of virtual Camera related to general settings, and communicating with components." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_CineCamera_MetaData[] = {
		{ "Category", "Cinematic Camera" },
		{ "Comment", "/** Cinematic camera used for view */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VirtualCameraPawnBase.h" },
		{ "ToolTip", "Cinematic camera used for view" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_CineCamera = { "CineCamera", nullptr, (EPropertyFlags)0x00140000000a000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraPawnBase, CineCamera), Z_Construct_UClass_UVirtualCameraCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_CineCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_CineCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_bSaveSettingsWhenClosing_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Determines if values should be saved between sessions */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPawnBase.h" },
		{ "ToolTip", "Determines if values should be saved between sessions" },
	};
#endif
	void Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_bSaveSettingsWhenClosing_SetBit(void* Obj)
	{
		((AVirtualCameraPawnBase*)Obj)->bSaveSettingsWhenClosing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_bSaveSettingsWhenClosing = { "bSaveSettingsWhenClosing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AVirtualCameraPawnBase), &Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_bSaveSettingsWhenClosing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_bSaveSettingsWhenClosing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_bSaveSettingsWhenClosing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_SavedSettingsSlotName_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Stores the name of the save slot being used currently */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPawnBase.h" },
		{ "ToolTip", "Stores the name of the save slot being used currently" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_SavedSettingsSlotName = { "SavedSettingsSlotName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraPawnBase, SavedSettingsSlotName), METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_SavedSettingsSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_SavedSettingsSlotName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_SettingsPresets_ValueProp = { "SettingsPresets", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVirtualCameraSettingsPreset, METADATA_PARAMS(nullptr, 0) }; // 1209101004
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_SettingsPresets_Key_KeyProp = { "SettingsPresets_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_SettingsPresets_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/* Stores the list of settings presets, and saved presets */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPawnBase.h" },
		{ "ToolTip", "Stores the list of settings presets, and saved presets" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_SettingsPresets = { "SettingsPresets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVirtualCameraPawnBase, SettingsPresets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_SettingsPresets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_SettingsPresets_MetaData)) }; // 1209101004
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_bAllowFocusVisualization_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Should focus plane be shown on all touch focus events */" },
		{ "ModuleRelativePath", "Public/VirtualCameraPawnBase.h" },
		{ "ToolTip", "Should focus plane be shown on all touch focus events" },
	};
#endif
	void Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_bAllowFocusVisualization_SetBit(void* Obj)
	{
		((AVirtualCameraPawnBase*)Obj)->bAllowFocusVisualization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_bAllowFocusVisualization = { "bAllowFocusVisualization", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AVirtualCameraPawnBase), &Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_bAllowFocusVisualization_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_bAllowFocusVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_bAllowFocusVisualization_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVirtualCameraPawnBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_CineCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_bSaveSettingsWhenClosing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_SavedSettingsSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_SettingsPresets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_SettingsPresets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_SettingsPresets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVirtualCameraPawnBase_Statics::NewProp_bAllowFocusVisualization,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AVirtualCameraPawnBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UVirtualCameraPresetContainer_NoRegister, (int32)VTABLE_OFFSET(AVirtualCameraPawnBase, IVirtualCameraPresetContainer), false },  // 1144967962
			{ Z_Construct_UClass_UVirtualCameraOptions_NoRegister, (int32)VTABLE_OFFSET(AVirtualCameraPawnBase, IVirtualCameraOptions), false },  // 1664845038
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVirtualCameraPawnBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVirtualCameraPawnBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVirtualCameraPawnBase_Statics::ClassParams = {
		&AVirtualCameraPawnBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVirtualCameraPawnBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPawnBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AVirtualCameraPawnBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVirtualCameraPawnBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVirtualCameraPawnBase()
	{
		if (!Z_Registration_Info_UClass_AVirtualCameraPawnBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVirtualCameraPawnBase.OuterSingleton, Z_Construct_UClass_AVirtualCameraPawnBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVirtualCameraPawnBase.OuterSingleton;
	}
	template<> VIRTUALCAMERA_API UClass* StaticClass<AVirtualCameraPawnBase>()
	{
		return AVirtualCameraPawnBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVirtualCameraPawnBase);
	AVirtualCameraPawnBase::~AVirtualCameraPawnBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPawnBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPawnBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVirtualCameraPawnBase, AVirtualCameraPawnBase::StaticClass, TEXT("AVirtualCameraPawnBase"), &Z_Registration_Info_UClass_AVirtualCameraPawnBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVirtualCameraPawnBase), 3438019526U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPawnBase_h_740173994(TEXT("/Script/VirtualCamera"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPawnBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VirtualCamera_Public_VirtualCameraPawnBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
