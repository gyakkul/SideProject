// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompositingElements/CompositingElementPasses.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositingElementPasses() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementInput();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementInput_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementOutput();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementOutput_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementPass();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementPass_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementTransform();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementTransform_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessingPassProxy_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	DEFINE_FUNCTION(UCompositingElementPass::execReleaseRenderTarget)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_AssignedTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReleaseRenderTarget(Z_Param_AssignedTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCompositingElementPass::execRequestNativelyFormattedTarget)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RenderScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->RequestNativelyFormattedTarget(Z_Param_RenderScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCompositingElementPass::execRequestRenderTarget)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_Dimensions);
		P_GET_PROPERTY(FByteProperty,Z_Param_Format);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->RequestRenderTarget(Z_Param_Dimensions,ETextureRenderTargetFormat(Z_Param_Format));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCompositingElementPass::execOnEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEnabled_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCompositingElementPass::execOnDisabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDisabled_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCompositingElementPass::execSetPassEnabled)
	{
		P_GET_UBOOL(Z_Param_bSetEnabledTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPassEnabled(Z_Param_bSetEnabledTo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCompositingElementPass::execIsPassEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPassEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCompositingElementPass::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCompositingElementPass::execOnFrameEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFrameEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCompositingElementPass::execOnFrameBegin)
	{
		P_GET_UBOOL(Z_Param_bCameraCutThisFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFrameBegin_Implementation(Z_Param_bCameraCutThisFrame);
		P_NATIVE_END;
	}
	struct CompositingElementPass_eventOnFrameBegin_Parms
	{
		bool bCameraCutThisFrame;
	};
	static FName NAME_UCompositingElementPass_OnDisabled = FName(TEXT("OnDisabled"));
	void UCompositingElementPass::OnDisabled()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCompositingElementPass_OnDisabled),NULL);
	}
	static FName NAME_UCompositingElementPass_OnEnabled = FName(TEXT("OnEnabled"));
	void UCompositingElementPass::OnEnabled()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCompositingElementPass_OnEnabled),NULL);
	}
	static FName NAME_UCompositingElementPass_OnFrameBegin = FName(TEXT("OnFrameBegin"));
	void UCompositingElementPass::OnFrameBegin(bool bCameraCutThisFrame)
	{
		CompositingElementPass_eventOnFrameBegin_Parms Parms;
		Parms.bCameraCutThisFrame=bCameraCutThisFrame ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UCompositingElementPass_OnFrameBegin),&Parms);
	}
	static FName NAME_UCompositingElementPass_OnFrameEnd = FName(TEXT("OnFrameEnd"));
	void UCompositingElementPass::OnFrameEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCompositingElementPass_OnFrameEnd),NULL);
	}
	static FName NAME_UCompositingElementPass_Reset = FName(TEXT("Reset"));
	void UCompositingElementPass::Reset()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCompositingElementPass_Reset),NULL);
	}
	void UCompositingElementPass::StaticRegisterNativesUCompositingElementPass()
	{
		UClass* Class = UCompositingElementPass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsPassEnabled", &UCompositingElementPass::execIsPassEnabled },
			{ "OnDisabled", &UCompositingElementPass::execOnDisabled },
			{ "OnEnabled", &UCompositingElementPass::execOnEnabled },
			{ "OnFrameBegin", &UCompositingElementPass::execOnFrameBegin },
			{ "OnFrameEnd", &UCompositingElementPass::execOnFrameEnd },
			{ "ReleaseRenderTarget", &UCompositingElementPass::execReleaseRenderTarget },
			{ "RequestNativelyFormattedTarget", &UCompositingElementPass::execRequestNativelyFormattedTarget },
			{ "RequestRenderTarget", &UCompositingElementPass::execRequestRenderTarget },
			{ "Reset", &UCompositingElementPass::execReset },
			{ "SetPassEnabled", &UCompositingElementPass::execSetPassEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCompositingElementPass_IsPassEnabled_Statics
	{
		struct CompositingElementPass_eventIsPassEnabled_Parms
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
	void Z_Construct_UFunction_UCompositingElementPass_IsPassEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CompositingElementPass_eventIsPassEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCompositingElementPass_IsPassEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CompositingElementPass_eventIsPassEnabled_Parms), &Z_Construct_UFunction_UCompositingElementPass_IsPassEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositingElementPass_IsPassEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementPass_IsPassEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingElementPass_IsPassEnabled_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingElementPass_IsPassEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingElementPass, nullptr, "IsPassEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCompositingElementPass_IsPassEnabled_Statics::CompositingElementPass_eventIsPassEnabled_Parms), Z_Construct_UFunction_UCompositingElementPass_IsPassEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementPass_IsPassEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingElementPass_IsPassEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementPass_IsPassEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingElementPass_IsPassEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingElementPass_IsPassEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompositingElementPass_OnDisabled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingElementPass_OnDisabled_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Composure|Compositing Pass" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingElementPass_OnDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingElementPass, nullptr, "OnDisabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingElementPass_OnDisabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementPass_OnDisabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingElementPass_OnDisabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingElementPass_OnDisabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompositingElementPass_OnEnabled_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingElementPass_OnEnabled_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Composure|Compositing Pass" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingElementPass_OnEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingElementPass, nullptr, "OnEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingElementPass_OnEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementPass_OnEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingElementPass_OnEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingElementPass_OnEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompositingElementPass_OnFrameBegin_Statics
	{
		static void NewProp_bCameraCutThisFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCameraCutThisFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCompositingElementPass_OnFrameBegin_Statics::NewProp_bCameraCutThisFrame_SetBit(void* Obj)
	{
		((CompositingElementPass_eventOnFrameBegin_Parms*)Obj)->bCameraCutThisFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCompositingElementPass_OnFrameBegin_Statics::NewProp_bCameraCutThisFrame = { "bCameraCutThisFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CompositingElementPass_eventOnFrameBegin_Parms), &Z_Construct_UFunction_UCompositingElementPass_OnFrameBegin_Statics::NewProp_bCameraCutThisFrame_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositingElementPass_OnFrameBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementPass_OnFrameBegin_Statics::NewProp_bCameraCutThisFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingElementPass_OnFrameBegin_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Composure|Compositing Pass" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingElementPass_OnFrameBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingElementPass, nullptr, "OnFrameBegin", nullptr, nullptr, sizeof(CompositingElementPass_eventOnFrameBegin_Parms), Z_Construct_UFunction_UCompositingElementPass_OnFrameBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementPass_OnFrameBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingElementPass_OnFrameBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementPass_OnFrameBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingElementPass_OnFrameBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingElementPass_OnFrameBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompositingElementPass_OnFrameEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingElementPass_OnFrameEnd_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Composure|Compositing Pass" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingElementPass_OnFrameEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingElementPass, nullptr, "OnFrameEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingElementPass_OnFrameEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementPass_OnFrameEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingElementPass_OnFrameEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingElementPass_OnFrameEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompositingElementPass_ReleaseRenderTarget_Statics
	{
		struct CompositingElementPass_eventReleaseRenderTarget_Parms
		{
			UTextureRenderTarget2D* AssignedTarget;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssignedTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingElementPass_ReleaseRenderTarget_Statics::NewProp_AssignedTarget = { "AssignedTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElementPass_eventReleaseRenderTarget_Parms, AssignedTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCompositingElementPass_ReleaseRenderTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CompositingElementPass_eventReleaseRenderTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCompositingElementPass_ReleaseRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CompositingElementPass_eventReleaseRenderTarget_Parms), &Z_Construct_UFunction_UCompositingElementPass_ReleaseRenderTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositingElementPass_ReleaseRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementPass_ReleaseRenderTarget_Statics::NewProp_AssignedTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementPass_ReleaseRenderTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingElementPass_ReleaseRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|CompositingPass" },
		{ "Comment", "/*, meta = (BlueprintProtected = \"true\")*/" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
		{ "ToolTip", ", meta = (BlueprintProtected = \"true\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingElementPass_ReleaseRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingElementPass, nullptr, "ReleaseRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCompositingElementPass_ReleaseRenderTarget_Statics::CompositingElementPass_eventReleaseRenderTarget_Parms), Z_Construct_UFunction_UCompositingElementPass_ReleaseRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementPass_ReleaseRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingElementPass_ReleaseRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementPass_ReleaseRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingElementPass_ReleaseRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingElementPass_ReleaseRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompositingElementPass_RequestNativelyFormattedTarget_Statics
	{
		struct CompositingElementPass_eventRequestNativelyFormattedTarget_Parms
		{
			float RenderScale;
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RenderScale;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCompositingElementPass_RequestNativelyFormattedTarget_Statics::NewProp_RenderScale = { "RenderScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElementPass_eventRequestNativelyFormattedTarget_Parms, RenderScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingElementPass_RequestNativelyFormattedTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElementPass_eventRequestNativelyFormattedTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositingElementPass_RequestNativelyFormattedTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementPass_RequestNativelyFormattedTarget_Statics::NewProp_RenderScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementPass_RequestNativelyFormattedTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingElementPass_RequestNativelyFormattedTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Compositing Pass" },
		{ "Comment", "/*, meta = (BlueprintProtected = \"true\")*/" },
		{ "CPP_Default_RenderScale", "1.000000" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
		{ "ToolTip", ", meta = (BlueprintProtected = \"true\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingElementPass_RequestNativelyFormattedTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingElementPass, nullptr, "RequestNativelyFormattedTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCompositingElementPass_RequestNativelyFormattedTarget_Statics::CompositingElementPass_eventRequestNativelyFormattedTarget_Parms), Z_Construct_UFunction_UCompositingElementPass_RequestNativelyFormattedTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementPass_RequestNativelyFormattedTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingElementPass_RequestNativelyFormattedTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementPass_RequestNativelyFormattedTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingElementPass_RequestNativelyFormattedTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingElementPass_RequestNativelyFormattedTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompositingElementPass_RequestRenderTarget_Statics
	{
		struct CompositingElementPass_eventRequestRenderTarget_Parms
		{
			FIntPoint Dimensions;
			TEnumAsByte<ETextureRenderTargetFormat> Format;
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dimensions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCompositingElementPass_RequestRenderTarget_Statics::NewProp_Dimensions = { "Dimensions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElementPass_eventRequestRenderTarget_Parms, Dimensions), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCompositingElementPass_RequestRenderTarget_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElementPass_eventRequestRenderTarget_Parms, Format), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(nullptr, 0) }; // 1004718673
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingElementPass_RequestRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElementPass_eventRequestRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositingElementPass_RequestRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementPass_RequestRenderTarget_Statics::NewProp_Dimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementPass_RequestRenderTarget_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementPass_RequestRenderTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingElementPass_RequestRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Compositing Pass" },
		{ "Comment", "/*, meta = (BlueprintProtected = \"true\")*/" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
		{ "ToolTip", ", meta = (BlueprintProtected = \"true\")" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingElementPass_RequestRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingElementPass, nullptr, "RequestRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCompositingElementPass_RequestRenderTarget_Statics::CompositingElementPass_eventRequestRenderTarget_Parms), Z_Construct_UFunction_UCompositingElementPass_RequestRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementPass_RequestRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingElementPass_RequestRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementPass_RequestRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingElementPass_RequestRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingElementPass_RequestRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompositingElementPass_Reset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingElementPass_Reset_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Composure|Compositing Pass" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingElementPass_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingElementPass, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingElementPass_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementPass_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingElementPass_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingElementPass_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompositingElementPass_SetPassEnabled_Statics
	{
		struct CompositingElementPass_eventSetPassEnabled_Parms
		{
			bool bSetEnabledTo;
		};
		static void NewProp_bSetEnabledTo_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetEnabledTo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCompositingElementPass_SetPassEnabled_Statics::NewProp_bSetEnabledTo_SetBit(void* Obj)
	{
		((CompositingElementPass_eventSetPassEnabled_Parms*)Obj)->bSetEnabledTo = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCompositingElementPass_SetPassEnabled_Statics::NewProp_bSetEnabledTo = { "bSetEnabledTo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CompositingElementPass_eventSetPassEnabled_Parms), &Z_Construct_UFunction_UCompositingElementPass_SetPassEnabled_Statics::NewProp_bSetEnabledTo_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositingElementPass_SetPassEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementPass_SetPassEnabled_Statics::NewProp_bSetEnabledTo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingElementPass_SetPassEnabled_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "CPP_Default_bSetEnabledTo", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingElementPass_SetPassEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingElementPass, nullptr, "SetPassEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCompositingElementPass_SetPassEnabled_Statics::CompositingElementPass_eventSetPassEnabled_Parms), Z_Construct_UFunction_UCompositingElementPass_SetPassEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementPass_SetPassEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingElementPass_SetPassEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementPass_SetPassEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingElementPass_SetPassEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingElementPass_SetPassEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositingElementPass);
	UClass* Z_Construct_UClass_UCompositingElementPass_NoRegister()
	{
		return UCompositingElementPass::StaticClass();
	}
	struct Z_Construct_UClass_UCompositingElementPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PassName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositingElementPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCompositingElementPass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCompositingElementPass_IsPassEnabled, "IsPassEnabled" }, // 380488046
		{ &Z_Construct_UFunction_UCompositingElementPass_OnDisabled, "OnDisabled" }, // 2644895207
		{ &Z_Construct_UFunction_UCompositingElementPass_OnEnabled, "OnEnabled" }, // 2495031684
		{ &Z_Construct_UFunction_UCompositingElementPass_OnFrameBegin, "OnFrameBegin" }, // 1687739699
		{ &Z_Construct_UFunction_UCompositingElementPass_OnFrameEnd, "OnFrameEnd" }, // 2303440818
		{ &Z_Construct_UFunction_UCompositingElementPass_ReleaseRenderTarget, "ReleaseRenderTarget" }, // 1977146075
		{ &Z_Construct_UFunction_UCompositingElementPass_RequestNativelyFormattedTarget, "RequestNativelyFormattedTarget" }, // 2252087672
		{ &Z_Construct_UFunction_UCompositingElementPass_RequestRenderTarget, "RequestRenderTarget" }, // 759440406
		{ &Z_Construct_UFunction_UCompositingElementPass_Reset, "Reset" }, // 1904712567
		{ &Z_Construct_UFunction_UCompositingElementPass_SetPassEnabled, "SetPassEnabled" }, // 1204804159
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingElementPass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* UCompositingElementPass\n *****************************************************************************/" },
		{ "IncludePath", "CompositingElements/CompositingElementPasses.h" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
		{ "ToolTip", "UCompositingElementPass" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingElementPass_Statics::NewProp_bEnabled_MetaData[] = {
		{ "BlueprintGetter", "IsPassEnabled" },
		{ "BlueprintSetter", "SetPassEnabled" },
		{ "Category", "Compositing Pass" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
	};
#endif
	void Z_Construct_UClass_UCompositingElementPass_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UCompositingElementPass*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCompositingElementPass_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCompositingElementPass), &Z_Construct_UClass_UCompositingElementPass_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCompositingElementPass_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingElementPass_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingElementPass_Statics::NewProp_PassName_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCompositingElementPass_Statics::NewProp_PassName = { "PassName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingElementPass, PassName), METADATA_PARAMS(Z_Construct_UClass_UCompositingElementPass_Statics::NewProp_PassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingElementPass_Statics::NewProp_PassName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositingElementPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingElementPass_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingElementPass_Statics::NewProp_PassName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositingElementPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositingElementPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositingElementPass_Statics::ClassParams = {
		&UCompositingElementPass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCompositingElementPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingElementPass_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositingElementPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingElementPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositingElementPass()
	{
		if (!Z_Registration_Info_UClass_UCompositingElementPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositingElementPass.OuterSingleton, Z_Construct_UClass_UCompositingElementPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositingElementPass.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UCompositingElementPass>()
	{
		return UCompositingElementPass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositingElementPass);
	UCompositingElementPass::~UCompositingElementPass() {}
	DEFINE_FUNCTION(UCompositingElementInput::execGenerateInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->GenerateInput_Implementation();
		P_NATIVE_END;
	}
	struct CompositingElementInput_eventGenerateInput_Parms
	{
		UTexture* ReturnValue;

		/** Constructor, initializes return property only **/
		CompositingElementInput_eventGenerateInput_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	static FName NAME_UCompositingElementInput_GenerateInput = FName(TEXT("GenerateInput"));
	UTexture* UCompositingElementInput::GenerateInput()
	{
		CompositingElementInput_eventGenerateInput_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UCompositingElementInput_GenerateInput),&Parms);
		return Parms.ReturnValue;
	}
	void UCompositingElementInput::StaticRegisterNativesUCompositingElementInput()
	{
		UClass* Class = UCompositingElementInput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateInput", &UCompositingElementInput::execGenerateInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCompositingElementInput_GenerateInput_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingElementInput_GenerateInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElementInput_eventGenerateInput_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositingElementInput_GenerateInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementInput_GenerateInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingElementInput_GenerateInput_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "" },
		{ "Category", "Composure|Compositing Pass" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingElementInput_GenerateInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingElementInput, nullptr, "GenerateInput", nullptr, nullptr, sizeof(CompositingElementInput_eventGenerateInput_Parms), Z_Construct_UFunction_UCompositingElementInput_GenerateInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementInput_GenerateInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingElementInput_GenerateInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementInput_GenerateInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingElementInput_GenerateInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingElementInput_GenerateInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositingElementInput);
	UClass* Z_Construct_UClass_UCompositingElementInput_NoRegister()
	{
		return UCompositingElementInput::StaticClass();
	}
	struct Z_Construct_UClass_UCompositingElementInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntermediate_MetaData[];
#endif
		static void NewProp_bIntermediate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntermediate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositingElementInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementPass,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCompositingElementInput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCompositingElementInput_GenerateInput, "GenerateInput" }, // 125366348
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingElementInput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CompositingElements/CompositingElementPasses.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingElementInput_Statics::NewProp_bIntermediate_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "Comment", "/** \n\x09 * Marks this pass for 'internal use only' - prevents it from being exposed to parent elements. \n\x09 * When set, render target resources used by this element will be reused. For inputs, all 'Intermediate'\n\x09 * passes are available to the first transform pass, and released after that.\n\x09 */" },
		{ "DisplayAfter", "EndOfCategory" },
		{ "DisplayName", "Intermediate" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
		{ "ToolTip", "Marks this pass for 'internal use only' - prevents it from being exposed to parent elements.\nWhen set, render target resources used by this element will be reused. For inputs, all 'Intermediate'\npasses are available to the first transform pass, and released after that." },
	};
#endif
	void Z_Construct_UClass_UCompositingElementInput_Statics::NewProp_bIntermediate_SetBit(void* Obj)
	{
		((UCompositingElementInput*)Obj)->bIntermediate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCompositingElementInput_Statics::NewProp_bIntermediate = { "bIntermediate", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCompositingElementInput), &Z_Construct_UClass_UCompositingElementInput_Statics::NewProp_bIntermediate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCompositingElementInput_Statics::NewProp_bIntermediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingElementInput_Statics::NewProp_bIntermediate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositingElementInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingElementInput_Statics::NewProp_bIntermediate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositingElementInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositingElementInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositingElementInput_Statics::ClassParams = {
		&UCompositingElementInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCompositingElementInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingElementInput_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositingElementInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingElementInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositingElementInput()
	{
		if (!Z_Registration_Info_UClass_UCompositingElementInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositingElementInput.OuterSingleton, Z_Construct_UClass_UCompositingElementInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositingElementInput.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UCompositingElementInput>()
	{
		return UCompositingElementInput::StaticClass();
	}
	UCompositingElementInput::UCompositingElementInput() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositingElementInput);
	UCompositingElementInput::~UCompositingElementInput() {}
	DEFINE_FUNCTION(UCompositingElementTransform::execFindNamedPrePassResult)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PassLookupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->FindNamedPrePassResult(Z_Param_PassLookupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCompositingElementTransform::execApplyTransform)
	{
		P_GET_OBJECT(UTexture,Z_Param_Input);
		P_GET_OBJECT(UComposurePostProcessingPassProxy,Z_Param_PostProcessProxy);
		P_GET_OBJECT(ACameraActor,Z_Param_TargetCamera);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->ApplyTransform_Implementation(Z_Param_Input,Z_Param_PostProcessProxy,Z_Param_TargetCamera);
		P_NATIVE_END;
	}
	struct CompositingElementTransform_eventApplyTransform_Parms
	{
		UTexture* Input;
		UComposurePostProcessingPassProxy* PostProcessProxy;
		ACameraActor* TargetCamera;
		UTexture* ReturnValue;

		/** Constructor, initializes return property only **/
		CompositingElementTransform_eventApplyTransform_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	static FName NAME_UCompositingElementTransform_ApplyTransform = FName(TEXT("ApplyTransform"));
	UTexture* UCompositingElementTransform::ApplyTransform(UTexture* Input, UComposurePostProcessingPassProxy* PostProcessProxy, ACameraActor* TargetCamera)
	{
		CompositingElementTransform_eventApplyTransform_Parms Parms;
		Parms.Input=Input;
		Parms.PostProcessProxy=PostProcessProxy;
		Parms.TargetCamera=TargetCamera;
		ProcessEvent(FindFunctionChecked(NAME_UCompositingElementTransform_ApplyTransform),&Parms);
		return Parms.ReturnValue;
	}
	void UCompositingElementTransform::StaticRegisterNativesUCompositingElementTransform()
	{
		UClass* Class = UCompositingElementTransform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyTransform", &UCompositingElementTransform::execApplyTransform },
			{ "FindNamedPrePassResult", &UCompositingElementTransform::execFindNamedPrePassResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PostProcessProxy;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCamera;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElementTransform_eventApplyTransform_Parms, Input), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics::NewProp_PostProcessProxy_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics::NewProp_PostProcessProxy = { "PostProcessProxy", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElementTransform_eventApplyTransform_Parms, PostProcessProxy), Z_Construct_UClass_UComposurePostProcessingPassProxy_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics::NewProp_PostProcessProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics::NewProp_PostProcessProxy_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics::NewProp_TargetCamera = { "TargetCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElementTransform_eventApplyTransform_Parms, TargetCamera), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElementTransform_eventApplyTransform_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics::NewProp_PostProcessProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics::NewProp_TargetCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "" },
		{ "Category", "Composure|Compositing Pass" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingElementTransform, nullptr, "ApplyTransform", nullptr, nullptr, sizeof(CompositingElementTransform_eventApplyTransform_Parms), Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompositingElementTransform_FindNamedPrePassResult_Statics
	{
		struct CompositingElementTransform_eventFindNamedPrePassResult_Parms
		{
			FName PassLookupName;
			UTexture* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PassLookupName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCompositingElementTransform_FindNamedPrePassResult_Statics::NewProp_PassLookupName = { "PassLookupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElementTransform_eventFindNamedPrePassResult_Parms, PassLookupName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingElementTransform_FindNamedPrePassResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElementTransform_eventFindNamedPrePassResult_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositingElementTransform_FindNamedPrePassResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementTransform_FindNamedPrePassResult_Statics::NewProp_PassLookupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementTransform_FindNamedPrePassResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingElementTransform_FindNamedPrePassResult_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "true" },
		{ "Category", "Composure|Compositing Pass" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingElementTransform_FindNamedPrePassResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingElementTransform, nullptr, "FindNamedPrePassResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCompositingElementTransform_FindNamedPrePassResult_Statics::CompositingElementTransform_eventFindNamedPrePassResult_Parms), Z_Construct_UFunction_UCompositingElementTransform_FindNamedPrePassResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementTransform_FindNamedPrePassResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingElementTransform_FindNamedPrePassResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementTransform_FindNamedPrePassResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingElementTransform_FindNamedPrePassResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingElementTransform_FindNamedPrePassResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositingElementTransform);
	UClass* Z_Construct_UClass_UCompositingElementTransform_NoRegister()
	{
		return UCompositingElementTransform::StaticClass();
	}
	struct Z_Construct_UClass_UCompositingElementTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIntermediate_MetaData[];
#endif
		static void NewProp_bIntermediate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIntermediate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositingElementTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementPass,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCompositingElementTransform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCompositingElementTransform_ApplyTransform, "ApplyTransform" }, // 1830686012
		{ &Z_Construct_UFunction_UCompositingElementTransform_FindNamedPrePassResult, "FindNamedPrePassResult" }, // 1366910437
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingElementTransform_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CompositingElements/CompositingElementPasses.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingElementTransform_Statics::NewProp_bIntermediate_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "Comment", "/** \n\x09 * Marks this pass for 'internal use only' - prevents it from being exposed to parent elements. \n\x09 * When set, render target resources used by this element will be reused. For transforms, all 'Intermediate'\n\x09 * passes are available to the next transform pass, and released after that.\n\x09 */" },
		{ "DisplayAfter", "EndOfCategory" },
		{ "DisplayName", "Intermediate" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
		{ "ToolTip", "Marks this pass for 'internal use only' - prevents it from being exposed to parent elements.\nWhen set, render target resources used by this element will be reused. For transforms, all 'Intermediate'\npasses are available to the next transform pass, and released after that." },
	};
#endif
	void Z_Construct_UClass_UCompositingElementTransform_Statics::NewProp_bIntermediate_SetBit(void* Obj)
	{
		((UCompositingElementTransform*)Obj)->bIntermediate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCompositingElementTransform_Statics::NewProp_bIntermediate = { "bIntermediate", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCompositingElementTransform), &Z_Construct_UClass_UCompositingElementTransform_Statics::NewProp_bIntermediate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCompositingElementTransform_Statics::NewProp_bIntermediate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingElementTransform_Statics::NewProp_bIntermediate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositingElementTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingElementTransform_Statics::NewProp_bIntermediate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositingElementTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositingElementTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositingElementTransform_Statics::ClassParams = {
		&UCompositingElementTransform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCompositingElementTransform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingElementTransform_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositingElementTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingElementTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositingElementTransform()
	{
		if (!Z_Registration_Info_UClass_UCompositingElementTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositingElementTransform.OuterSingleton, Z_Construct_UClass_UCompositingElementTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositingElementTransform.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UCompositingElementTransform>()
	{
		return UCompositingElementTransform::StaticClass();
	}
	UCompositingElementTransform::UCompositingElementTransform() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositingElementTransform);
	UCompositingElementTransform::~UCompositingElementTransform() {}
	DEFINE_FUNCTION(UCompositingElementOutput::execRelayOutput)
	{
		P_GET_OBJECT(UTexture,Z_Param_FinalResult);
		P_GET_OBJECT(UComposurePostProcessingPassProxy,Z_Param_PostProcessProxy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RelayOutput_Implementation(Z_Param_FinalResult,Z_Param_PostProcessProxy);
		P_NATIVE_END;
	}
	struct CompositingElementOutput_eventRelayOutput_Parms
	{
		UTexture* FinalResult;
		UComposurePostProcessingPassProxy* PostProcessProxy;
	};
	static FName NAME_UCompositingElementOutput_RelayOutput = FName(TEXT("RelayOutput"));
	void UCompositingElementOutput::RelayOutput(UTexture* FinalResult, UComposurePostProcessingPassProxy* PostProcessProxy)
	{
		CompositingElementOutput_eventRelayOutput_Parms Parms;
		Parms.FinalResult=FinalResult;
		Parms.PostProcessProxy=PostProcessProxy;
		ProcessEvent(FindFunctionChecked(NAME_UCompositingElementOutput_RelayOutput),&Parms);
	}
	void UCompositingElementOutput::StaticRegisterNativesUCompositingElementOutput()
	{
		UClass* Class = UCompositingElementOutput::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RelayOutput", &UCompositingElementOutput::execRelayOutput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCompositingElementOutput_RelayOutput_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FinalResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PostProcessProxy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingElementOutput_RelayOutput_Statics::NewProp_FinalResult = { "FinalResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElementOutput_eventRelayOutput_Parms, FinalResult), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingElementOutput_RelayOutput_Statics::NewProp_PostProcessProxy_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingElementOutput_RelayOutput_Statics::NewProp_PostProcessProxy = { "PostProcessProxy", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElementOutput_eventRelayOutput_Parms, PostProcessProxy), Z_Construct_UClass_UComposurePostProcessingPassProxy_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCompositingElementOutput_RelayOutput_Statics::NewProp_PostProcessProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementOutput_RelayOutput_Statics::NewProp_PostProcessProxy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositingElementOutput_RelayOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementOutput_RelayOutput_Statics::NewProp_FinalResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementOutput_RelayOutput_Statics::NewProp_PostProcessProxy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingElementOutput_RelayOutput_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "" },
		{ "Category", "Composure|Compositing Pass" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingElementOutput_RelayOutput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingElementOutput, nullptr, "RelayOutput", nullptr, nullptr, sizeof(CompositingElementOutput_eventRelayOutput_Parms), Z_Construct_UFunction_UCompositingElementOutput_RelayOutput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementOutput_RelayOutput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingElementOutput_RelayOutput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementOutput_RelayOutput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingElementOutput_RelayOutput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingElementOutput_RelayOutput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositingElementOutput);
	UClass* Z_Construct_UClass_UCompositingElementOutput_NoRegister()
	{
		return UCompositingElementOutput::StaticClass();
	}
	struct Z_Construct_UClass_UCompositingElementOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositingElementOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementPass,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCompositingElementOutput_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCompositingElementOutput_RelayOutput, "RelayOutput" }, // 4083221726
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingElementOutput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CompositingElements/CompositingElementPasses.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementPasses.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositingElementOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositingElementOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositingElementOutput_Statics::ClassParams = {
		&UCompositingElementOutput::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositingElementOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingElementOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositingElementOutput()
	{
		if (!Z_Registration_Info_UClass_UCompositingElementOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositingElementOutput.OuterSingleton, Z_Construct_UClass_UCompositingElementOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositingElementOutput.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UCompositingElementOutput>()
	{
		return UCompositingElementOutput::StaticClass();
	}
	UCompositingElementOutput::UCompositingElementOutput() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositingElementOutput);
	UCompositingElementOutput::~UCompositingElementOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCompositingElementPass, UCompositingElementPass::StaticClass, TEXT("UCompositingElementPass"), &Z_Registration_Info_UClass_UCompositingElementPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositingElementPass), 3363261570U) },
		{ Z_Construct_UClass_UCompositingElementInput, UCompositingElementInput::StaticClass, TEXT("UCompositingElementInput"), &Z_Registration_Info_UClass_UCompositingElementInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositingElementInput), 1177152297U) },
		{ Z_Construct_UClass_UCompositingElementTransform, UCompositingElementTransform::StaticClass, TEXT("UCompositingElementTransform"), &Z_Registration_Info_UClass_UCompositingElementTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositingElementTransform), 4152439875U) },
		{ Z_Construct_UClass_UCompositingElementOutput, UCompositingElementOutput::StaticClass, TEXT("UCompositingElementOutput"), &Z_Registration_Info_UClass_UCompositingElementOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositingElementOutput), 1270694338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_1824952535(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementPasses_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
