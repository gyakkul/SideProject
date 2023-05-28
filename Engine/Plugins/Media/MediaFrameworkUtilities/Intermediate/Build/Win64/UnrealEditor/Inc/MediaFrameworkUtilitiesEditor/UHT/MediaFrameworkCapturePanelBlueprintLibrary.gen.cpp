// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CaptureTab/MediaFrameworkCapturePanelBlueprintLibrary.h"
#include "MediaCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaFrameworkCapturePanelBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewModeIndex();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaFrameworkCapturePanel();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaFrameworkCapturePanel_NoRegister();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaFrameworkCapturePanelBlueprintLibrary();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaFrameworkCapturePanelBlueprintLibrary_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput_NoRegister();
	MEDIAIOCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaCaptureOptions();
	UPackage* Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor();
// End Cross Module References
	DEFINE_FUNCTION(UMediaFrameworkCapturePanel::execSetCurrentViewportCapture)
	{
		P_GET_OBJECT(UMediaOutput,Z_Param_MediaOutput);
		P_GET_STRUCT(FMediaCaptureOptions,Z_Param_CaptureOptions);
		P_GET_PROPERTY(FByteProperty,Z_Param_ViewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentViewportCapture(Z_Param_MediaOutput,Z_Param_CaptureOptions,EViewModeIndex(Z_Param_ViewMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaFrameworkCapturePanel::execAddViewportCapture)
	{
		P_GET_OBJECT(UMediaOutput,Z_Param_MediaOutput);
		P_GET_OBJECT(AActor,Z_Param_Camera);
		P_GET_STRUCT(FMediaCaptureOptions,Z_Param_CaptureOptions);
		P_GET_PROPERTY(FByteProperty,Z_Param_ViewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddViewportCapture(Z_Param_MediaOutput,Z_Param_Camera,Z_Param_CaptureOptions,EViewModeIndex(Z_Param_ViewMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaFrameworkCapturePanel::execEmptyViewportCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EmptyViewportCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaFrameworkCapturePanel::execAddRenderTargetCapture)
	{
		P_GET_OBJECT(UMediaOutput,Z_Param_MediaOutput);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_GET_STRUCT(FMediaCaptureOptions,Z_Param_CaptureOptions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRenderTargetCapture(Z_Param_MediaOutput,Z_Param_RenderTarget,Z_Param_CaptureOptions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaFrameworkCapturePanel::execEmptyRenderTargetCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EmptyRenderTargetCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaFrameworkCapturePanel::execStopCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaFrameworkCapturePanel::execStartCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCapture();
		P_NATIVE_END;
	}
	void UMediaFrameworkCapturePanel::StaticRegisterNativesUMediaFrameworkCapturePanel()
	{
		UClass* Class = UMediaFrameworkCapturePanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRenderTargetCapture", &UMediaFrameworkCapturePanel::execAddRenderTargetCapture },
			{ "AddViewportCapture", &UMediaFrameworkCapturePanel::execAddViewportCapture },
			{ "EmptyRenderTargetCapture", &UMediaFrameworkCapturePanel::execEmptyRenderTargetCapture },
			{ "EmptyViewportCapture", &UMediaFrameworkCapturePanel::execEmptyViewportCapture },
			{ "SetCurrentViewportCapture", &UMediaFrameworkCapturePanel::execSetCurrentViewportCapture },
			{ "StartCapture", &UMediaFrameworkCapturePanel::execStartCapture },
			{ "StopCapture", &UMediaFrameworkCapturePanel::execStopCapture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddRenderTargetCapture_Statics
	{
		struct MediaFrameworkCapturePanel_eventAddRenderTargetCapture_Parms
		{
			UMediaOutput* MediaOutput;
			UTextureRenderTarget2D* RenderTarget;
			FMediaCaptureOptions CaptureOptions;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaOutput;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddRenderTargetCapture_Statics::NewProp_MediaOutput = { "MediaOutput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaFrameworkCapturePanel_eventAddRenderTargetCapture_Parms, MediaOutput), Z_Construct_UClass_UMediaOutput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddRenderTargetCapture_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaFrameworkCapturePanel_eventAddRenderTargetCapture_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddRenderTargetCapture_Statics::NewProp_CaptureOptions = { "CaptureOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaFrameworkCapturePanel_eventAddRenderTargetCapture_Parms, CaptureOptions), Z_Construct_UScriptStruct_FMediaCaptureOptions, METADATA_PARAMS(nullptr, 0) }; // 2657660499
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddRenderTargetCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddRenderTargetCapture_Statics::NewProp_MediaOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddRenderTargetCapture_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddRenderTargetCapture_Statics::NewProp_CaptureOptions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddRenderTargetCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Media Capture" },
		{ "Comment", "/**\n\x09 * Add a render target 2d to be captured.\n\x09 */" },
		{ "ModuleRelativePath", "Private/CaptureTab/MediaFrameworkCapturePanelBlueprintLibrary.h" },
		{ "ToolTip", "Add a render target 2d to be captured." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddRenderTargetCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaFrameworkCapturePanel, nullptr, "AddRenderTargetCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddRenderTargetCapture_Statics::MediaFrameworkCapturePanel_eventAddRenderTargetCapture_Parms), Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddRenderTargetCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddRenderTargetCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddRenderTargetCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddRenderTargetCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddRenderTargetCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddRenderTargetCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture_Statics
	{
		struct MediaFrameworkCapturePanel_eventAddViewportCapture_Parms
		{
			UMediaOutput* MediaOutput;
			AActor* Camera;
			FMediaCaptureOptions CaptureOptions;
			TEnumAsByte<EViewModeIndex> ViewMode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaOutput;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureOptions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture_Statics::NewProp_MediaOutput = { "MediaOutput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaFrameworkCapturePanel_eventAddViewportCapture_Parms, MediaOutput), Z_Construct_UClass_UMediaOutput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaFrameworkCapturePanel_eventAddViewportCapture_Parms, Camera), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture_Statics::NewProp_CaptureOptions = { "CaptureOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaFrameworkCapturePanel_eventAddViewportCapture_Parms, CaptureOptions), Z_Construct_UScriptStruct_FMediaCaptureOptions, METADATA_PARAMS(nullptr, 0) }; // 2657660499
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture_Statics::NewProp_ViewMode = { "ViewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaFrameworkCapturePanel_eventAddViewportCapture_Parms, ViewMode), Z_Construct_UEnum_Engine_EViewModeIndex, METADATA_PARAMS(nullptr, 0) }; // 1054163023
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture_Statics::NewProp_MediaOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture_Statics::NewProp_CaptureOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture_Statics::NewProp_ViewMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Media Capture" },
		{ "Comment", "/**\n\x09 * Add a camera to be used when capturing the current viewport.\n\x09 */" },
		{ "CPP_Default_ViewMode", "VMI_Unknown" },
		{ "ModuleRelativePath", "Private/CaptureTab/MediaFrameworkCapturePanelBlueprintLibrary.h" },
		{ "ToolTip", "Add a camera to be used when capturing the current viewport." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaFrameworkCapturePanel, nullptr, "AddViewportCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture_Statics::MediaFrameworkCapturePanel_eventAddViewportCapture_Parms), Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaFrameworkCapturePanel_EmptyRenderTargetCapture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaFrameworkCapturePanel_EmptyRenderTargetCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Media Capture" },
		{ "Comment", "/**\n\x09 * Clear all the render target captures.\n\x09 */" },
		{ "ModuleRelativePath", "Private/CaptureTab/MediaFrameworkCapturePanelBlueprintLibrary.h" },
		{ "ToolTip", "Clear all the render target captures." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaFrameworkCapturePanel_EmptyRenderTargetCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaFrameworkCapturePanel, nullptr, "EmptyRenderTargetCapture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaFrameworkCapturePanel_EmptyRenderTargetCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaFrameworkCapturePanel_EmptyRenderTargetCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaFrameworkCapturePanel_EmptyRenderTargetCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaFrameworkCapturePanel_EmptyRenderTargetCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaFrameworkCapturePanel_EmptyViewportCapture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaFrameworkCapturePanel_EmptyViewportCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Media Capture" },
		{ "Comment", "/**\n\x09 * Clear all the viewport captures.\n\x09 */" },
		{ "ModuleRelativePath", "Private/CaptureTab/MediaFrameworkCapturePanelBlueprintLibrary.h" },
		{ "ToolTip", "Clear all the viewport captures." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaFrameworkCapturePanel_EmptyViewportCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaFrameworkCapturePanel, nullptr, "EmptyViewportCapture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaFrameworkCapturePanel_EmptyViewportCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaFrameworkCapturePanel_EmptyViewportCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaFrameworkCapturePanel_EmptyViewportCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaFrameworkCapturePanel_EmptyViewportCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaFrameworkCapturePanel_SetCurrentViewportCapture_Statics
	{
		struct MediaFrameworkCapturePanel_eventSetCurrentViewportCapture_Parms
		{
			UMediaOutput* MediaOutput;
			FMediaCaptureOptions CaptureOptions;
			TEnumAsByte<EViewModeIndex> ViewMode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaOutput;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CaptureOptions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ViewMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaFrameworkCapturePanel_SetCurrentViewportCapture_Statics::NewProp_MediaOutput = { "MediaOutput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaFrameworkCapturePanel_eventSetCurrentViewportCapture_Parms, MediaOutput), Z_Construct_UClass_UMediaOutput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaFrameworkCapturePanel_SetCurrentViewportCapture_Statics::NewProp_CaptureOptions = { "CaptureOptions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaFrameworkCapturePanel_eventSetCurrentViewportCapture_Parms, CaptureOptions), Z_Construct_UScriptStruct_FMediaCaptureOptions, METADATA_PARAMS(nullptr, 0) }; // 2657660499
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMediaFrameworkCapturePanel_SetCurrentViewportCapture_Statics::NewProp_ViewMode = { "ViewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaFrameworkCapturePanel_eventSetCurrentViewportCapture_Parms, ViewMode), Z_Construct_UEnum_Engine_EViewModeIndex, METADATA_PARAMS(nullptr, 0) }; // 1054163023
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaFrameworkCapturePanel_SetCurrentViewportCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaFrameworkCapturePanel_SetCurrentViewportCapture_Statics::NewProp_MediaOutput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaFrameworkCapturePanel_SetCurrentViewportCapture_Statics::NewProp_CaptureOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaFrameworkCapturePanel_SetCurrentViewportCapture_Statics::NewProp_ViewMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaFrameworkCapturePanel_SetCurrentViewportCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Media Capture" },
		{ "Comment", "/**\n\x09 * Change the setting for capturing the current viewport.\n\x09 */" },
		{ "CPP_Default_ViewMode", "VMI_Unknown" },
		{ "ModuleRelativePath", "Private/CaptureTab/MediaFrameworkCapturePanelBlueprintLibrary.h" },
		{ "ToolTip", "Change the setting for capturing the current viewport." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaFrameworkCapturePanel_SetCurrentViewportCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaFrameworkCapturePanel, nullptr, "SetCurrentViewportCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaFrameworkCapturePanel_SetCurrentViewportCapture_Statics::MediaFrameworkCapturePanel_eventSetCurrentViewportCapture_Parms), Z_Construct_UFunction_UMediaFrameworkCapturePanel_SetCurrentViewportCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaFrameworkCapturePanel_SetCurrentViewportCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaFrameworkCapturePanel_SetCurrentViewportCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaFrameworkCapturePanel_SetCurrentViewportCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaFrameworkCapturePanel_SetCurrentViewportCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaFrameworkCapturePanel_SetCurrentViewportCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaFrameworkCapturePanel_StartCapture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaFrameworkCapturePanel_StartCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Media Capture" },
		{ "Comment", "/**\n\x09 * Capture the camera's viewport and the render target.\n\x09 */" },
		{ "ModuleRelativePath", "Private/CaptureTab/MediaFrameworkCapturePanelBlueprintLibrary.h" },
		{ "ToolTip", "Capture the camera's viewport and the render target." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaFrameworkCapturePanel_StartCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaFrameworkCapturePanel, nullptr, "StartCapture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaFrameworkCapturePanel_StartCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaFrameworkCapturePanel_StartCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaFrameworkCapturePanel_StartCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaFrameworkCapturePanel_StartCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaFrameworkCapturePanel_StopCapture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaFrameworkCapturePanel_StopCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Media Capture" },
		{ "Comment", "/**\n\x09 * Stop the current capture.\n\x09 */" },
		{ "ModuleRelativePath", "Private/CaptureTab/MediaFrameworkCapturePanelBlueprintLibrary.h" },
		{ "ToolTip", "Stop the current capture." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaFrameworkCapturePanel_StopCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaFrameworkCapturePanel, nullptr, "StopCapture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaFrameworkCapturePanel_StopCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaFrameworkCapturePanel_StopCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaFrameworkCapturePanel_StopCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaFrameworkCapturePanel_StopCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaFrameworkCapturePanel);
	UClass* Z_Construct_UClass_UMediaFrameworkCapturePanel_NoRegister()
	{
		return UMediaFrameworkCapturePanel::StaticClass();
	}
	struct Z_Construct_UClass_UMediaFrameworkCapturePanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaFrameworkCapturePanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaFrameworkCapturePanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddRenderTargetCapture, "AddRenderTargetCapture" }, // 2943174575
		{ &Z_Construct_UFunction_UMediaFrameworkCapturePanel_AddViewportCapture, "AddViewportCapture" }, // 3387533133
		{ &Z_Construct_UFunction_UMediaFrameworkCapturePanel_EmptyRenderTargetCapture, "EmptyRenderTargetCapture" }, // 2300955369
		{ &Z_Construct_UFunction_UMediaFrameworkCapturePanel_EmptyViewportCapture, "EmptyViewportCapture" }, // 2812202038
		{ &Z_Construct_UFunction_UMediaFrameworkCapturePanel_SetCurrentViewportCapture, "SetCurrentViewportCapture" }, // 1146869172
		{ &Z_Construct_UFunction_UMediaFrameworkCapturePanel_StartCapture, "StartCapture" }, // 3885798667
		{ &Z_Construct_UFunction_UMediaFrameworkCapturePanel_StopCapture, "StopCapture" }, // 3767719169
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaFrameworkCapturePanel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CaptureTab/MediaFrameworkCapturePanelBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Private/CaptureTab/MediaFrameworkCapturePanelBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaFrameworkCapturePanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaFrameworkCapturePanel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaFrameworkCapturePanel_Statics::ClassParams = {
		&UMediaFrameworkCapturePanel::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaFrameworkCapturePanel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkCapturePanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaFrameworkCapturePanel()
	{
		if (!Z_Registration_Info_UClass_UMediaFrameworkCapturePanel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaFrameworkCapturePanel.OuterSingleton, Z_Construct_UClass_UMediaFrameworkCapturePanel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaFrameworkCapturePanel.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* StaticClass<UMediaFrameworkCapturePanel>()
	{
		return UMediaFrameworkCapturePanel::StaticClass();
	}
	UMediaFrameworkCapturePanel::UMediaFrameworkCapturePanel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaFrameworkCapturePanel);
	UMediaFrameworkCapturePanel::~UMediaFrameworkCapturePanel() {}
	DEFINE_FUNCTION(UMediaFrameworkCapturePanelBlueprintLibrary::execGetMediaCapturePanel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaFrameworkCapturePanel**)Z_Param__Result=UMediaFrameworkCapturePanelBlueprintLibrary::GetMediaCapturePanel();
		P_NATIVE_END;
	}
	void UMediaFrameworkCapturePanelBlueprintLibrary::StaticRegisterNativesUMediaFrameworkCapturePanelBlueprintLibrary()
	{
		UClass* Class = UMediaFrameworkCapturePanelBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMediaCapturePanel", &UMediaFrameworkCapturePanelBlueprintLibrary::execGetMediaCapturePanel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaFrameworkCapturePanelBlueprintLibrary_GetMediaCapturePanel_Statics
	{
		struct MediaFrameworkCapturePanelBlueprintLibrary_eventGetMediaCapturePanel_Parms
		{
			UMediaFrameworkCapturePanel* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaFrameworkCapturePanelBlueprintLibrary_GetMediaCapturePanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaFrameworkCapturePanelBlueprintLibrary_eventGetMediaCapturePanel_Parms, ReturnValue), Z_Construct_UClass_UMediaFrameworkCapturePanel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaFrameworkCapturePanelBlueprintLibrary_GetMediaCapturePanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaFrameworkCapturePanelBlueprintLibrary_GetMediaCapturePanel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaFrameworkCapturePanelBlueprintLibrary_GetMediaCapturePanel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Media Capture" },
		{ "Comment", "/**\n\x09 * Get Media Capture panel instance.\n\x09 */" },
		{ "ModuleRelativePath", "Private/CaptureTab/MediaFrameworkCapturePanelBlueprintLibrary.h" },
		{ "ToolTip", "Get Media Capture panel instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaFrameworkCapturePanelBlueprintLibrary_GetMediaCapturePanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaFrameworkCapturePanelBlueprintLibrary, nullptr, "GetMediaCapturePanel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaFrameworkCapturePanelBlueprintLibrary_GetMediaCapturePanel_Statics::MediaFrameworkCapturePanelBlueprintLibrary_eventGetMediaCapturePanel_Parms), Z_Construct_UFunction_UMediaFrameworkCapturePanelBlueprintLibrary_GetMediaCapturePanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaFrameworkCapturePanelBlueprintLibrary_GetMediaCapturePanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaFrameworkCapturePanelBlueprintLibrary_GetMediaCapturePanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaFrameworkCapturePanelBlueprintLibrary_GetMediaCapturePanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaFrameworkCapturePanelBlueprintLibrary_GetMediaCapturePanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaFrameworkCapturePanelBlueprintLibrary_GetMediaCapturePanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaFrameworkCapturePanelBlueprintLibrary);
	UClass* Z_Construct_UClass_UMediaFrameworkCapturePanelBlueprintLibrary_NoRegister()
	{
		return UMediaFrameworkCapturePanelBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMediaFrameworkCapturePanelBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaFrameworkCapturePanelBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaFrameworkCapturePanelBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaFrameworkCapturePanelBlueprintLibrary_GetMediaCapturePanel, "GetMediaCapturePanel" }, // 740897349
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaFrameworkCapturePanelBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CaptureTab/MediaFrameworkCapturePanelBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Private/CaptureTab/MediaFrameworkCapturePanelBlueprintLibrary.h" },
		{ "ScriptName", "MediaFrameworkCapturePanelLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaFrameworkCapturePanelBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaFrameworkCapturePanelBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaFrameworkCapturePanelBlueprintLibrary_Statics::ClassParams = {
		&UMediaFrameworkCapturePanelBlueprintLibrary::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaFrameworkCapturePanelBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkCapturePanelBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaFrameworkCapturePanelBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UMediaFrameworkCapturePanelBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaFrameworkCapturePanelBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UMediaFrameworkCapturePanelBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaFrameworkCapturePanelBlueprintLibrary.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* StaticClass<UMediaFrameworkCapturePanelBlueprintLibrary>()
	{
		return UMediaFrameworkCapturePanelBlueprintLibrary::StaticClass();
	}
	UMediaFrameworkCapturePanelBlueprintLibrary::UMediaFrameworkCapturePanelBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaFrameworkCapturePanelBlueprintLibrary);
	UMediaFrameworkCapturePanelBlueprintLibrary::~UMediaFrameworkCapturePanelBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_CaptureTab_MediaFrameworkCapturePanelBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_CaptureTab_MediaFrameworkCapturePanelBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaFrameworkCapturePanel, UMediaFrameworkCapturePanel::StaticClass, TEXT("UMediaFrameworkCapturePanel"), &Z_Registration_Info_UClass_UMediaFrameworkCapturePanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaFrameworkCapturePanel), 3790936859U) },
		{ Z_Construct_UClass_UMediaFrameworkCapturePanelBlueprintLibrary, UMediaFrameworkCapturePanelBlueprintLibrary::StaticClass, TEXT("UMediaFrameworkCapturePanelBlueprintLibrary"), &Z_Registration_Info_UClass_UMediaFrameworkCapturePanelBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaFrameworkCapturePanelBlueprintLibrary), 2866355787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_CaptureTab_MediaFrameworkCapturePanelBlueprintLibrary_h_210651642(TEXT("/Script/MediaFrameworkUtilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_CaptureTab_MediaFrameworkCapturePanelBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_CaptureTab_MediaFrameworkCapturePanelBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
