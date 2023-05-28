// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComposurePlayerCompositingTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposurePlayerCompositingTarget() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UCompEditorImagePreviewInterface_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposureCompositingTargetComponent();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposureCompositingTargetComponent_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePlayerCompositingInterface_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePlayerCompositingTarget();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePlayerCompositingTarget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	DEFINE_FUNCTION(UComposurePlayerCompositingTarget::execSetRenderTarget)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderTarget(Z_Param_RenderTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposurePlayerCompositingTarget::execSetPlayerCameraManager)
	{
		P_GET_OBJECT(APlayerCameraManager,Z_Param_PlayerCameraManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerCameraManager**)Z_Param__Result=P_THIS->SetPlayerCameraManager(Z_Param_PlayerCameraManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposurePlayerCompositingTarget::execGetPlayerCameraManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerCameraManager**)Z_Param__Result=P_THIS->GetPlayerCameraManager();
		P_NATIVE_END;
	}
	void UComposurePlayerCompositingTarget::StaticRegisterNativesUComposurePlayerCompositingTarget()
	{
		UClass* Class = UComposurePlayerCompositingTarget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerCameraManager", &UComposurePlayerCompositingTarget::execGetPlayerCameraManager },
			{ "SetPlayerCameraManager", &UComposurePlayerCompositingTarget::execSetPlayerCameraManager },
			{ "SetRenderTarget", &UComposurePlayerCompositingTarget::execSetRenderTarget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComposurePlayerCompositingTarget_GetPlayerCameraManager_Statics
	{
		struct ComposurePlayerCompositingTarget_eventGetPlayerCameraManager_Parms
		{
			APlayerCameraManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposurePlayerCompositingTarget_GetPlayerCameraManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposurePlayerCompositingTarget_eventGetPlayerCameraManager_Parms, ReturnValue), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposurePlayerCompositingTarget_GetPlayerCameraManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposurePlayerCompositingTarget_GetPlayerCameraManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposurePlayerCompositingTarget_GetPlayerCameraManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Compositing target" },
		{ "Comment", "// Current player camera manager the target is bind on.\n" },
		{ "ModuleRelativePath", "Classes/ComposurePlayerCompositingTarget.h" },
		{ "ToolTip", "Current player camera manager the target is bind on." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposurePlayerCompositingTarget_GetPlayerCameraManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposurePlayerCompositingTarget, nullptr, "GetPlayerCameraManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposurePlayerCompositingTarget_GetPlayerCameraManager_Statics::ComposurePlayerCompositingTarget_eventGetPlayerCameraManager_Parms), Z_Construct_UFunction_UComposurePlayerCompositingTarget_GetPlayerCameraManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposurePlayerCompositingTarget_GetPlayerCameraManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposurePlayerCompositingTarget_GetPlayerCameraManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposurePlayerCompositingTarget_GetPlayerCameraManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposurePlayerCompositingTarget_GetPlayerCameraManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposurePlayerCompositingTarget_GetPlayerCameraManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetPlayerCameraManager_Statics
	{
		struct ComposurePlayerCompositingTarget_eventSetPlayerCameraManager_Parms
		{
			APlayerCameraManager* PlayerCameraManager;
			APlayerCameraManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCameraManager;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetPlayerCameraManager_Statics::NewProp_PlayerCameraManager = { "PlayerCameraManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposurePlayerCompositingTarget_eventSetPlayerCameraManager_Parms, PlayerCameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetPlayerCameraManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposurePlayerCompositingTarget_eventSetPlayerCameraManager_Parms, ReturnValue), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetPlayerCameraManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetPlayerCameraManager_Statics::NewProp_PlayerCameraManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetPlayerCameraManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetPlayerCameraManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Compositing target" },
		{ "Comment", "// Set player camera manager to bind the render target to.\n" },
		{ "ModuleRelativePath", "Classes/ComposurePlayerCompositingTarget.h" },
		{ "ToolTip", "Set player camera manager to bind the render target to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetPlayerCameraManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposurePlayerCompositingTarget, nullptr, "SetPlayerCameraManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetPlayerCameraManager_Statics::ComposurePlayerCompositingTarget_eventSetPlayerCameraManager_Parms), Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetPlayerCameraManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetPlayerCameraManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetPlayerCameraManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetPlayerCameraManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetPlayerCameraManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetPlayerCameraManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetRenderTarget_Statics
	{
		struct ComposurePlayerCompositingTarget_eventSetRenderTarget_Parms
		{
			UTextureRenderTarget2D* RenderTarget;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetRenderTarget_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposurePlayerCompositingTarget_eventSetRenderTarget_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetRenderTarget_Statics::NewProp_RenderTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Compositing target" },
		{ "Comment", "// Set the render target of the player.\n" },
		{ "ModuleRelativePath", "Classes/ComposurePlayerCompositingTarget.h" },
		{ "ToolTip", "Set the render target of the player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposurePlayerCompositingTarget, nullptr, "SetRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetRenderTarget_Statics::ComposurePlayerCompositingTarget_eventSetRenderTarget_Parms), Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposurePlayerCompositingTarget);
	UClass* Z_Construct_UClass_UComposurePlayerCompositingTarget_NoRegister()
	{
		return UComposurePlayerCompositingTarget::StaticClass();
	}
	struct Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCameraManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerCameraManager;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCameraModifier_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerCameraModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplaceTonemapperMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReplaceTonemapperMID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComposurePlayerCompositingTarget_GetPlayerCameraManager, "GetPlayerCameraManager" }, // 3696619433
		{ &Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetPlayerCameraManager, "SetPlayerCameraManager" }, // 2396142315
		{ &Z_Construct_UFunction_UComposurePlayerCompositingTarget_SetRenderTarget, "SetRenderTarget" }, // 3159551318
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Object to bind to a APlayerCameraManager with a UTextureRenderTarget2D to be used as a player's render target.\n * @TODO-BADGER: deprecate this (UComposurePlayerCompositingTarget) once we're comfortable using the new UComposureCompositingTargetComponent in its place\n */" },
		{ "IncludePath", "ComposurePlayerCompositingTarget.h" },
		{ "ModuleRelativePath", "Classes/ComposurePlayerCompositingTarget.h" },
		{ "ToolTip", "Object to bind to a APlayerCameraManager with a UTextureRenderTarget2D to be used as a player's render target.\n@TODO-BADGER: deprecate this (UComposurePlayerCompositingTarget) once we're comfortable using the new UComposureCompositingTargetComponent in its place" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::NewProp_PlayerCameraManager_MetaData[] = {
		{ "Comment", "// Current player camera manager the target is bind on.\n" },
		{ "ModuleRelativePath", "Classes/ComposurePlayerCompositingTarget.h" },
		{ "ToolTip", "Current player camera manager the target is bind on." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::NewProp_PlayerCameraManager = { "PlayerCameraManager", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposurePlayerCompositingTarget, PlayerCameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::NewProp_PlayerCameraManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::NewProp_PlayerCameraManager_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::NewProp_PlayerCameraModifier_MetaData[] = {
		{ "Comment", "// Underlying player camera modifier\n" },
		{ "ModuleRelativePath", "Classes/ComposurePlayerCompositingTarget.h" },
		{ "ToolTip", "Underlying player camera modifier" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::NewProp_PlayerCameraModifier = { "PlayerCameraModifier", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposurePlayerCompositingTarget, PlayerCameraModifier), Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::NewProp_PlayerCameraModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::NewProp_PlayerCameraModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::NewProp_ReplaceTonemapperMID_MetaData[] = {
		{ "Comment", "// Post process material that replaces the tonemapper to dump the player's render target.\n" },
		{ "ModuleRelativePath", "Classes/ComposurePlayerCompositingTarget.h" },
		{ "ToolTip", "Post process material that replaces the tonemapper to dump the player's render target." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::NewProp_ReplaceTonemapperMID = { "ReplaceTonemapperMID", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposurePlayerCompositingTarget, ReplaceTonemapperMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::NewProp_ReplaceTonemapperMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::NewProp_ReplaceTonemapperMID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::NewProp_PlayerCameraManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::NewProp_PlayerCameraModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::NewProp_ReplaceTonemapperMID,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UComposurePlayerCompositingInterface_NoRegister, (int32)VTABLE_OFFSET(UComposurePlayerCompositingTarget, IComposurePlayerCompositingInterface), false },  // 890134009
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposurePlayerCompositingTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::ClassParams = {
		&UComposurePlayerCompositingTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposurePlayerCompositingTarget()
	{
		if (!Z_Registration_Info_UClass_UComposurePlayerCompositingTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposurePlayerCompositingTarget.OuterSingleton, Z_Construct_UClass_UComposurePlayerCompositingTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposurePlayerCompositingTarget.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UComposurePlayerCompositingTarget>()
	{
		return UComposurePlayerCompositingTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposurePlayerCompositingTarget);
	DEFINE_FUNCTION(UComposureCompositingTargetComponent::execGetDisplayTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->GetDisplayTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposureCompositingTargetComponent::execSetDisplayTexture)
	{
		P_GET_OBJECT(UTexture,Z_Param_DisplayTexture);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisplayTexture(Z_Param_DisplayTexture);
		P_NATIVE_END;
	}
	void UComposureCompositingTargetComponent::StaticRegisterNativesUComposureCompositingTargetComponent()
	{
		UClass* Class = UComposureCompositingTargetComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisplayTexture", &UComposureCompositingTargetComponent::execGetDisplayTexture },
			{ "SetDisplayTexture", &UComposureCompositingTargetComponent::execSetDisplayTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComposureCompositingTargetComponent_GetDisplayTexture_Statics
	{
		struct ComposureCompositingTargetComponent_eventGetDisplayTexture_Parms
		{
			UTexture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposureCompositingTargetComponent_GetDisplayTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureCompositingTargetComponent_eventGetDisplayTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposureCompositingTargetComponent_GetDisplayTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureCompositingTargetComponent_GetDisplayTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureCompositingTargetComponent_GetDisplayTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|CompositingTarget" },
		{ "ModuleRelativePath", "Classes/ComposurePlayerCompositingTarget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureCompositingTargetComponent_GetDisplayTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureCompositingTargetComponent, nullptr, "GetDisplayTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposureCompositingTargetComponent_GetDisplayTexture_Statics::ComposureCompositingTargetComponent_eventGetDisplayTexture_Parms), Z_Construct_UFunction_UComposureCompositingTargetComponent_GetDisplayTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureCompositingTargetComponent_GetDisplayTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureCompositingTargetComponent_GetDisplayTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureCompositingTargetComponent_GetDisplayTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureCompositingTargetComponent_GetDisplayTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureCompositingTargetComponent_GetDisplayTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposureCompositingTargetComponent_SetDisplayTexture_Statics
	{
		struct ComposureCompositingTargetComponent_eventSetDisplayTexture_Parms
		{
			UTexture* DisplayTexture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposureCompositingTargetComponent_SetDisplayTexture_Statics::NewProp_DisplayTexture = { "DisplayTexture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureCompositingTargetComponent_eventSetDisplayTexture_Parms, DisplayTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposureCompositingTargetComponent_SetDisplayTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureCompositingTargetComponent_SetDisplayTexture_Statics::NewProp_DisplayTexture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureCompositingTargetComponent_SetDisplayTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|CompositingTarget" },
		{ "ModuleRelativePath", "Classes/ComposurePlayerCompositingTarget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureCompositingTargetComponent_SetDisplayTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureCompositingTargetComponent, nullptr, "SetDisplayTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposureCompositingTargetComponent_SetDisplayTexture_Statics::ComposureCompositingTargetComponent_eventSetDisplayTexture_Parms), Z_Construct_UFunction_UComposureCompositingTargetComponent_SetDisplayTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureCompositingTargetComponent_SetDisplayTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureCompositingTargetComponent_SetDisplayTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureCompositingTargetComponent_SetDisplayTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureCompositingTargetComponent_SetDisplayTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureCompositingTargetComponent_SetDisplayTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposureCompositingTargetComponent);
	UClass* Z_Construct_UClass_UComposureCompositingTargetComponent_NoRegister()
	{
		return UComposureCompositingTargetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UComposureCompositingTargetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DisplayTexture;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompilerErrImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CompilerErrImage;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComposureCompositingTargetComponent_GetDisplayTexture, "GetDisplayTexture" }, // 1736489200
		{ &Z_Construct_UFunction_UComposureCompositingTargetComponent_SetDisplayTexture, "SetDisplayTexture" }, // 4276062797
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * Component intended to replace UComposurePlayerCompositingTarget - a object to bind to a APlayerCameraManager \n * with a UTextureRenderTarget2D to be used as a player's render target.\n * Made into a component so we can hook into preview rendering in editor.\n */" },
		{ "IncludePath", "ComposurePlayerCompositingTarget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/ComposurePlayerCompositingTarget.h" },
		{ "ToolTip", "Component intended to replace UComposurePlayerCompositingTarget - a object to bind to a APlayerCameraManager\nwith a UTextureRenderTarget2D to be used as a player's render target.\nMade into a component so we can hook into preview rendering in editor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::NewProp_DisplayTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ComposurePlayerCompositingTarget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::NewProp_DisplayTexture = { "DisplayTexture", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposureCompositingTargetComponent, DisplayTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::NewProp_DisplayTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::NewProp_DisplayTexture_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::NewProp_CompilerErrImage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/ComposurePlayerCompositingTarget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::NewProp_CompilerErrImage = { "CompilerErrImage", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposureCompositingTargetComponent, CompilerErrImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::NewProp_CompilerErrImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::NewProp_CompilerErrImage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::NewProp_DisplayTexture,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::NewProp_CompilerErrImage,
#endif // WITH_EDITORONLY_DATA
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCompEditorImagePreviewInterface_NoRegister, (int32)VTABLE_OFFSET(UComposureCompositingTargetComponent, ICompEditorImagePreviewInterface), false },  // 454777561
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposureCompositingTargetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::ClassParams = {
		&UComposureCompositingTargetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposureCompositingTargetComponent()
	{
		if (!Z_Registration_Info_UClass_UComposureCompositingTargetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposureCompositingTargetComponent.OuterSingleton, Z_Construct_UClass_UComposureCompositingTargetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposureCompositingTargetComponent.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UComposureCompositingTargetComponent>()
	{
		return UComposureCompositingTargetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposureCompositingTargetComponent);
	UComposureCompositingTargetComponent::~UComposureCompositingTargetComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComposurePlayerCompositingTarget, UComposurePlayerCompositingTarget::StaticClass, TEXT("UComposurePlayerCompositingTarget"), &Z_Registration_Info_UClass_UComposurePlayerCompositingTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposurePlayerCompositingTarget), 2820062874U) },
		{ Z_Construct_UClass_UComposureCompositingTargetComponent, UComposureCompositingTargetComponent::StaticClass, TEXT("UComposureCompositingTargetComponent"), &Z_Registration_Info_UClass_UComposureCompositingTargetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposureCompositingTargetComponent), 1317679480U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_1860673867(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposurePlayerCompositingTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
