// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/VREditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorMode() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VIEWPORTINTERACTION_API UClass* Z_Construct_UClass_UViewportWorldInteraction_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorAvatarActor_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_AVREditorTeleporter_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorAssetContainer_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorAutoScaler_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorInteractor_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorMode();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorMode_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorModeBase();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorPlacement_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorUISystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVREditorMode::execGetWorldScaleFactor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetWorldScaleFactor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorMode::execIsInGameView)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInGameView();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVREditorMode::execSetGameView)
	{
		P_GET_UBOOL(Z_Param_bGameView);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameView(Z_Param_bGameView);
		P_NATIVE_END;
	}
	void UVREditorMode::StaticRegisterNativesUVREditorMode()
	{
		UClass* Class = UVREditorMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetWorldScaleFactor", &UVREditorMode::execGetWorldScaleFactor },
			{ "IsInGameView", &UVREditorMode::execIsInGameView },
			{ "SetGameView", &UVREditorMode::execSetGameView },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics
	{
		struct VREditorMode_eventGetWorldScaleFactor_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VREditorMode_eventGetWorldScaleFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "VREditorMode" },
		{ "Comment", "/** Gets the world scale factor, which can be multiplied by a scale vector to convert to room space */" },
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "Gets the world scale factor, which can be multiplied by a scale vector to convert to room space" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorMode, nullptr, "GetWorldScaleFactor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::VREditorMode_eventGetWorldScaleFactor_Parms), Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorMode_IsInGameView_Statics
	{
		struct VREditorMode_eventIsInGameView_Parms
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
	void Z_Construct_UFunction_UVREditorMode_IsInGameView_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VREditorMode_eventIsInGameView_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREditorMode_IsInGameView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VREditorMode_eventIsInGameView_Parms), &Z_Construct_UFunction_UVREditorMode_IsInGameView_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorMode_IsInGameView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorMode_IsInGameView_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorMode_IsInGameView_Statics::Function_MetaDataParams[] = {
		{ "Category", "VREditorMode" },
		{ "Comment", "/** Returns whether game view is currently active. */" },
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "Returns whether game view is currently active." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorMode_IsInGameView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorMode, nullptr, "IsInGameView", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorMode_IsInGameView_Statics::VREditorMode_eventIsInGameView_Parms), Z_Construct_UFunction_UVREditorMode_IsInGameView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorMode_IsInGameView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorMode_IsInGameView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorMode_IsInGameView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorMode_IsInGameView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorMode_IsInGameView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVREditorMode_SetGameView_Statics
	{
		struct VREditorMode_eventSetGameView_Parms
		{
			bool bGameView;
		};
		static void NewProp_bGameView_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameView;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVREditorMode_SetGameView_Statics::NewProp_bGameView_SetBit(void* Obj)
	{
		((VREditorMode_eventSetGameView_Parms*)Obj)->bGameView = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVREditorMode_SetGameView_Statics::NewProp_bGameView = { "bGameView", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VREditorMode_eventSetGameView_Parms), &Z_Construct_UFunction_UVREditorMode_SetGameView_Statics::NewProp_bGameView_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVREditorMode_SetGameView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVREditorMode_SetGameView_Statics::NewProp_bGameView,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVREditorMode_SetGameView_Statics::Function_MetaDataParams[] = {
		{ "Category", "VREditorMode" },
		{ "Comment", "/** Display the scene more closely to how it would appear at runtime (as opposed to edit time). */" },
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "Display the scene more closely to how it would appear at runtime (as opposed to edit time)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVREditorMode_SetGameView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVREditorMode, nullptr, "SetGameView", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVREditorMode_SetGameView_Statics::VREditorMode_eventSetGameView_Parms), Z_Construct_UFunction_UVREditorMode_SetGameView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorMode_SetGameView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVREditorMode_SetGameView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVREditorMode_SetGameView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVREditorMode_SetGameView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVREditorMode_SetGameView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVREditorMode);
	UClass* Z_Construct_UClass_UVREditorMode_NoRegister()
	{
		return UVREditorMode::StaticClass();
	}
	struct Z_Construct_UClass_UVREditorMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AvatarActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UISystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UISystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TeleportActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoScalerSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AutoScalerSystem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldInteraction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WorldInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlacementSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlacementSystem;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Interactors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interactors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Interactors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractorClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_InteractorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleporterClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_TeleporterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AssetContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVREditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVREditorModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVREditorMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVREditorMode_GetWorldScaleFactor, "GetWorldScaleFactor" }, // 1070258997
		{ &Z_Construct_UFunction_UVREditorMode_IsInGameView, "IsInGameView" }, // 1435786469
		{ &Z_Construct_UFunction_UVREditorMode_SetGameView, "SetGameView" }, // 384849441
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * VR Editor Mode. Extends editor viewports with functionality for VR controls and object manipulation\n */" },
		{ "IncludePath", "VREditorMode.h" },
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "VR Editor Mode. Extends editor viewports with functionality for VR controls and object manipulation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::NewProp_AvatarActor_MetaData[] = {
		{ "Comment", "/** Actor with components to represent the VR avatar in the world, including motion controller meshes */" },
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "Actor with components to represent the VR avatar in the world, including motion controller meshes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_AvatarActor = { "AvatarActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorMode, AvatarActor), Z_Construct_UClass_AVREditorAvatarActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::NewProp_AvatarActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::NewProp_AvatarActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::NewProp_UISystem_MetaData[] = {
		{ "Comment", "/** VR UI system */" },
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "VR UI system" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_UISystem = { "UISystem", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorMode, UISystem), Z_Construct_UClass_UVREditorUISystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::NewProp_UISystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::NewProp_UISystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::NewProp_TeleportActor_MetaData[] = {
		{ "Comment", "/** Teleporter system */" },
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "Teleporter system" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_TeleportActor = { "TeleportActor", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorMode, TeleportActor), Z_Construct_UClass_AVREditorTeleporter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::NewProp_TeleportActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::NewProp_TeleportActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::NewProp_AutoScalerSystem_MetaData[] = {
		{ "Comment", "/** Automatic scale system */" },
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "Automatic scale system" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_AutoScalerSystem = { "AutoScalerSystem", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorMode, AutoScalerSystem), Z_Construct_UClass_UVREditorAutoScaler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::NewProp_AutoScalerSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::NewProp_AutoScalerSystem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::NewProp_WorldInteraction_MetaData[] = {
		{ "Comment", "/** World interaction manager */" },
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "World interaction manager" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_WorldInteraction = { "WorldInteraction", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorMode, WorldInteraction), Z_Construct_UClass_UViewportWorldInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::NewProp_WorldInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::NewProp_WorldInteraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::NewProp_PlacementSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_PlacementSystem = { "PlacementSystem", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorMode, PlacementSystem), Z_Construct_UClass_UVREditorPlacement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::NewProp_PlacementSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::NewProp_PlacementSystem_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_Interactors_Inner = { "Interactors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UVREditorInteractor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::NewProp_Interactors_MetaData[] = {
		{ "Comment", "//\n// Interactors\n//\n" },
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "Interactors" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_Interactors = { "Interactors", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorMode, Interactors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::NewProp_Interactors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::NewProp_Interactors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::NewProp_InteractorClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "Comment", "/** The controller to use when UnrealEd is in VR mode. Use VREditorInteractor get default editor behavior, or select a custom controller for special behavior */" },
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "The controller to use when UnrealEd is in VR mode. Use VREditorInteractor get default editor behavior, or select a custom controller for special behavior" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_InteractorClass = { "InteractorClass", nullptr, (EPropertyFlags)0x0014000002000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorMode, InteractorClass), Z_Construct_UClass_UVREditorInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::NewProp_InteractorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::NewProp_InteractorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::NewProp_TeleporterClass_MetaData[] = {
		{ "Category", "Classes" },
		{ "Comment", "/** The teleporter to use when UnrealEd is in VR mode. Use VREditorTeleporter to get default editor behavior, or select a custom teleporter */" },
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "The teleporter to use when UnrealEd is in VR mode. Use VREditorTeleporter to get default editor behavior, or select a custom teleporter" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_TeleporterClass = { "TeleporterClass", nullptr, (EPropertyFlags)0x0014000002000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorMode, TeleporterClass), Z_Construct_UClass_AVREditorTeleporter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::NewProp_TeleporterClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::NewProp_TeleporterClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVREditorMode_Statics::NewProp_AssetContainer_MetaData[] = {
		{ "Comment", "/** Container of assets */" },
		{ "ModuleRelativePath", "Public/VREditorMode.h" },
		{ "ToolTip", "Container of assets" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UVREditorMode_Statics::NewProp_AssetContainer = { "AssetContainer", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVREditorMode, AssetContainer), Z_Construct_UClass_UVREditorAssetContainer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::NewProp_AssetContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::NewProp_AssetContainer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVREditorMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_AvatarActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_UISystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_TeleportActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_AutoScalerSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_WorldInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_PlacementSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_Interactors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_Interactors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_InteractorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_TeleporterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVREditorMode_Statics::NewProp_AssetContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVREditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVREditorMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVREditorMode_Statics::ClassParams = {
		&UVREditorMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVREditorMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::PropPointers),
		0,
		0x001000A9u,
		METADATA_PARAMS(Z_Construct_UClass_UVREditorMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVREditorMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVREditorMode()
	{
		if (!Z_Registration_Info_UClass_UVREditorMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVREditorMode.OuterSingleton, Z_Construct_UClass_UVREditorMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVREditorMode.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<UVREditorMode>()
	{
		return UVREditorMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVREditorMode);
	UVREditorMode::~UVREditorMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVREditorMode, UVREditorMode::StaticClass, TEXT("UVREditorMode"), &Z_Registration_Info_UClass_UVREditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVREditorMode), 874177119U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_3329195563(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_Public_VREditorMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
