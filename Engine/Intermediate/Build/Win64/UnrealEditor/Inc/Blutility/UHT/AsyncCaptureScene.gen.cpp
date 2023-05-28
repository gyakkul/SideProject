// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/AsyncCaptureScene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncCaptureScene() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UAsyncCaptureScene();
	BLUTILITY_API UClass* Z_Construct_UClass_UAsyncCaptureScene_NoRegister();
	BLUTILITY_API UFunction* Z_Construct_UDelegateFunction_Blutility_OnAsyncCaptureSceneComplete__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ASceneCapture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Blutility_OnAsyncCaptureSceneComplete__DelegateSignature_Statics
	{
		struct _Script_Blutility_eventOnAsyncCaptureSceneComplete_Parms
		{
			UTextureRenderTarget2D* Texture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Blutility_OnAsyncCaptureSceneComplete__DelegateSignature_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Blutility_eventOnAsyncCaptureSceneComplete_Parms, Texture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Blutility_OnAsyncCaptureSceneComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Blutility_OnAsyncCaptureSceneComplete__DelegateSignature_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Blutility_OnAsyncCaptureSceneComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncCaptureScene.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Blutility_OnAsyncCaptureSceneComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Blutility, nullptr, "OnAsyncCaptureSceneComplete__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Blutility_OnAsyncCaptureSceneComplete__DelegateSignature_Statics::_Script_Blutility_eventOnAsyncCaptureSceneComplete_Parms), Z_Construct_UDelegateFunction_Blutility_OnAsyncCaptureSceneComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blutility_OnAsyncCaptureSceneComplete__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Blutility_OnAsyncCaptureSceneComplete__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Blutility_OnAsyncCaptureSceneComplete__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Blutility_OnAsyncCaptureSceneComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Blutility_OnAsyncCaptureSceneComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAsyncCaptureSceneComplete_DelegateWrapper(const FMulticastScriptDelegate& OnAsyncCaptureSceneComplete, UTextureRenderTarget2D* Texture)
{
	struct _Script_Blutility_eventOnAsyncCaptureSceneComplete_Parms
	{
		UTextureRenderTarget2D* Texture;
	};
	_Script_Blutility_eventOnAsyncCaptureSceneComplete_Parms Parms;
	Parms.Texture=Texture;
	OnAsyncCaptureSceneComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAsyncCaptureScene::execCaptureSceneWithWarmupAsync)
	{
		P_GET_OBJECT(UCameraComponent,Z_Param_ViewCamera);
		P_GET_OBJECT(UClass,Z_Param_SceneCaptureClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_ResX);
		P_GET_PROPERTY(FIntProperty,Z_Param_ResY);
		P_GET_PROPERTY(FIntProperty,Z_Param_WarmUpFrames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncCaptureScene**)Z_Param__Result=UAsyncCaptureScene::CaptureSceneWithWarmupAsync(Z_Param_ViewCamera,Z_Param_SceneCaptureClass,Z_Param_ResX,Z_Param_ResY,Z_Param_WarmUpFrames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncCaptureScene::execCaptureSceneAsync)
	{
		P_GET_OBJECT(UCameraComponent,Z_Param_ViewCamera);
		P_GET_OBJECT(UClass,Z_Param_SceneCaptureClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_ResX);
		P_GET_PROPERTY(FIntProperty,Z_Param_ResY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncCaptureScene**)Z_Param__Result=UAsyncCaptureScene::CaptureSceneAsync(Z_Param_ViewCamera,Z_Param_SceneCaptureClass,Z_Param_ResX,Z_Param_ResY);
		P_NATIVE_END;
	}
	void UAsyncCaptureScene::StaticRegisterNativesUAsyncCaptureScene()
	{
		UClass* Class = UAsyncCaptureScene::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CaptureSceneAsync", &UAsyncCaptureScene::execCaptureSceneAsync },
			{ "CaptureSceneWithWarmupAsync", &UAsyncCaptureScene::execCaptureSceneWithWarmupAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics
	{
		struct AsyncCaptureScene_eventCaptureSceneAsync_Parms
		{
			UCameraComponent* ViewCamera;
			TSubclassOf<ASceneCapture2D>  SceneCaptureClass;
			int32 ResX;
			int32 ResY;
			UAsyncCaptureScene* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewCamera;
		static const UECodeGen_Private::FClassPropertyParams NewProp_SceneCaptureClass;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ResX;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ResY;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::NewProp_ViewCamera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::NewProp_ViewCamera = { "ViewCamera", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncCaptureScene_eventCaptureSceneAsync_Parms, ViewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::NewProp_ViewCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::NewProp_ViewCamera_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::NewProp_SceneCaptureClass = { "SceneCaptureClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncCaptureScene_eventCaptureSceneAsync_Parms, SceneCaptureClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASceneCapture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::NewProp_ResX = { "ResX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncCaptureScene_eventCaptureSceneAsync_Parms, ResX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::NewProp_ResY = { "ResY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncCaptureScene_eventCaptureSceneAsync_Parms, ResY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncCaptureScene_eventCaptureSceneAsync_Parms, ReturnValue), Z_Construct_UClass_UAsyncCaptureScene_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::NewProp_ViewCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::NewProp_SceneCaptureClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::NewProp_ResX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::NewProp_ResY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/AsyncCaptureScene.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncCaptureScene, nullptr, "CaptureSceneAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::AsyncCaptureScene_eventCaptureSceneAsync_Parms), Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics
	{
		struct AsyncCaptureScene_eventCaptureSceneWithWarmupAsync_Parms
		{
			UCameraComponent* ViewCamera;
			TSubclassOf<ASceneCapture2D>  SceneCaptureClass;
			int32 ResX;
			int32 ResY;
			int32 WarmUpFrames;
			UAsyncCaptureScene* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewCamera;
		static const UECodeGen_Private::FClassPropertyParams NewProp_SceneCaptureClass;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ResX;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ResY;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_WarmUpFrames;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::NewProp_ViewCamera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::NewProp_ViewCamera = { "ViewCamera", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncCaptureScene_eventCaptureSceneWithWarmupAsync_Parms, ViewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::NewProp_ViewCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::NewProp_ViewCamera_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::NewProp_SceneCaptureClass = { "SceneCaptureClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncCaptureScene_eventCaptureSceneWithWarmupAsync_Parms, SceneCaptureClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASceneCapture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::NewProp_ResX = { "ResX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncCaptureScene_eventCaptureSceneWithWarmupAsync_Parms, ResX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::NewProp_ResY = { "ResY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncCaptureScene_eventCaptureSceneWithWarmupAsync_Parms, ResY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::NewProp_WarmUpFrames = { "WarmUpFrames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncCaptureScene_eventCaptureSceneWithWarmupAsync_Parms, WarmUpFrames), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncCaptureScene_eventCaptureSceneWithWarmupAsync_Parms, ReturnValue), Z_Construct_UClass_UAsyncCaptureScene_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::NewProp_ViewCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::NewProp_SceneCaptureClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::NewProp_ResX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::NewProp_ResY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::NewProp_WarmUpFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "ModuleRelativePath", "Public/AsyncCaptureScene.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncCaptureScene, nullptr, "CaptureSceneWithWarmupAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::AsyncCaptureScene_eventCaptureSceneWithWarmupAsync_Parms), Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncCaptureScene);
	UClass* Z_Construct_UClass_UAsyncCaptureScene_NoRegister()
	{
		return UAsyncCaptureScene::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncCaptureScene_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Complete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Complete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneCapture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneCapture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneCaptureRT_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneCaptureRT;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncCaptureScene_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncCaptureScene_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneAsync, "CaptureSceneAsync" }, // 3542033906
		{ &Z_Construct_UFunction_UAsyncCaptureScene_CaptureSceneWithWarmupAsync, "CaptureSceneWithWarmupAsync" }, // 3219529828
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncCaptureScene_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncCaptureScene.h" },
		{ "ModuleRelativePath", "Public/AsyncCaptureScene.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncCaptureScene_Statics::NewProp_Complete_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncCaptureScene.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncCaptureScene_Statics::NewProp_Complete = { "Complete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncCaptureScene, Complete), Z_Construct_UDelegateFunction_Blutility_OnAsyncCaptureSceneComplete__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncCaptureScene_Statics::NewProp_Complete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncCaptureScene_Statics::NewProp_Complete_MetaData)) }; // 620990791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncCaptureScene_Statics::NewProp_SceneCapture_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncCaptureScene.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAsyncCaptureScene_Statics::NewProp_SceneCapture = { "SceneCapture", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncCaptureScene, SceneCapture), Z_Construct_UClass_ASceneCapture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAsyncCaptureScene_Statics::NewProp_SceneCapture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncCaptureScene_Statics::NewProp_SceneCapture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncCaptureScene_Statics::NewProp_SceneCaptureRT_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncCaptureScene.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAsyncCaptureScene_Statics::NewProp_SceneCaptureRT = { "SceneCaptureRT", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncCaptureScene, SceneCaptureRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAsyncCaptureScene_Statics::NewProp_SceneCaptureRT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncCaptureScene_Statics::NewProp_SceneCaptureRT_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncCaptureScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncCaptureScene_Statics::NewProp_Complete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncCaptureScene_Statics::NewProp_SceneCapture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncCaptureScene_Statics::NewProp_SceneCaptureRT,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncCaptureScene_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncCaptureScene>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncCaptureScene_Statics::ClassParams = {
		&UAsyncCaptureScene::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncCaptureScene_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncCaptureScene_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncCaptureScene_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncCaptureScene_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncCaptureScene()
	{
		if (!Z_Registration_Info_UClass_UAsyncCaptureScene.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncCaptureScene.OuterSingleton, Z_Construct_UClass_UAsyncCaptureScene_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncCaptureScene.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UAsyncCaptureScene>()
	{
		return UAsyncCaptureScene::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncCaptureScene);
	UAsyncCaptureScene::~UAsyncCaptureScene() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_AsyncCaptureScene_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_AsyncCaptureScene_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncCaptureScene, UAsyncCaptureScene::StaticClass, TEXT("UAsyncCaptureScene"), &Z_Registration_Info_UClass_UAsyncCaptureScene, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncCaptureScene), 4066601131U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_AsyncCaptureScene_h_3207038079(TEXT("/Script/Blutility"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_AsyncCaptureScene_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Public_AsyncCaptureScene_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
