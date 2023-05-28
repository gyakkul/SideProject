// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "../../Source/Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UCameraComponent::execOnCameraMeshHiddenChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCameraMeshHiddenChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraComponent::execRemoveBlendable)
	{
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveBlendable(Z_Param_InBlendableObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraComponent::execAddOrUpdateBlendable)
	{
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOrUpdateBlendable(Z_Param_InBlendableObject,Z_Param_InWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraComponent::execGetCameraView)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_STRUCT_REF(FMinimalViewInfo,Z_Param_Out_DesiredView);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCameraView(Z_Param_DeltaTime,Z_Param_Out_DesiredView);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraComponent::execSetPostProcessBlendWeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InPostProcessBlendWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPostProcessBlendWeight(Z_Param_InPostProcessBlendWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraComponent::execSetProjectionMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InProjectionMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProjectionMode(ECameraProjectionMode::Type(Z_Param_InProjectionMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraComponent::execSetUseFieldOfViewForLOD)
	{
		P_GET_UBOOL(Z_Param_bInUseFieldOfViewForLOD);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseFieldOfViewForLOD(Z_Param_bInUseFieldOfViewForLOD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraComponent::execSetConstraintAspectRatio)
	{
		P_GET_UBOOL(Z_Param_bInConstrainAspectRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConstraintAspectRatio(Z_Param_bInConstrainAspectRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraComponent::execSetAspectRatio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InAspectRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAspectRatio(Z_Param_InAspectRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraComponent::execSetOrthoFarClipPlane)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InOrthoFarClipPlane);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOrthoFarClipPlane(Z_Param_InOrthoFarClipPlane);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraComponent::execSetOrthoNearClipPlane)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InOrthoNearClipPlane);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOrthoNearClipPlane(Z_Param_InOrthoNearClipPlane);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraComponent::execSetOrthoWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InOrthoWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOrthoWidth(Z_Param_InOrthoWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCameraComponent::execSetFieldOfView)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InFieldOfView);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFieldOfView(Z_Param_InFieldOfView);
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(UCameraComponent::execGetFilmbackText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetFilmbackText();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UCameraComponent::StaticRegisterNativesUCameraComponent()
	{
		UClass* Class = UCameraComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrUpdateBlendable", &UCameraComponent::execAddOrUpdateBlendable },
			{ "GetCameraView", &UCameraComponent::execGetCameraView },
#if WITH_EDITOR
			{ "GetFilmbackText", &UCameraComponent::execGetFilmbackText },
#endif // WITH_EDITOR
			{ "OnCameraMeshHiddenChanged", &UCameraComponent::execOnCameraMeshHiddenChanged },
			{ "RemoveBlendable", &UCameraComponent::execRemoveBlendable },
			{ "SetAspectRatio", &UCameraComponent::execSetAspectRatio },
			{ "SetConstraintAspectRatio", &UCameraComponent::execSetConstraintAspectRatio },
			{ "SetFieldOfView", &UCameraComponent::execSetFieldOfView },
			{ "SetOrthoFarClipPlane", &UCameraComponent::execSetOrthoFarClipPlane },
			{ "SetOrthoNearClipPlane", &UCameraComponent::execSetOrthoNearClipPlane },
			{ "SetOrthoWidth", &UCameraComponent::execSetOrthoWidth },
			{ "SetPostProcessBlendWeight", &UCameraComponent::execSetPostProcessBlendWeight },
			{ "SetProjectionMode", &UCameraComponent::execSetProjectionMode },
			{ "SetUseFieldOfViewForLOD", &UCameraComponent::execSetUseFieldOfViewForLOD },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics
	{
		struct CameraComponent_eventAddOrUpdateBlendable_Parms
		{
			TScriptInterface<IBlendableInterface> InBlendableObject;
			float InWeight;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject = { "InBlendableObject", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraComponent_eventAddOrUpdateBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraComponent_eventAddOrUpdateBlendable_Parms, InWeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::NewProp_InWeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight */" },
		{ "CPP_Default_InWeight", "1.000000" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "AddOrUpdateBlendable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::CameraComponent_eventAddOrUpdateBlendable_Parms), Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics
	{
		struct CameraComponent_eventGetCameraView_Parms
		{
			float DeltaTime;
			FMinimalViewInfo DesiredView;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredView;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraComponent_eventGetCameraView_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::NewProp_DesiredView = { "DesiredView", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraComponent_eventGetCameraView_Parms, DesiredView), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(nullptr, 0) }; // 1056960465
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::NewProp_DesiredView,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/**\n\x09 * Returns camera's Point of View.\n\x09 * Called by Camera class. Subclass and postprocess to add any effects.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Returns camera's Point of View.\nCalled by Camera class. Subclass and postprocess to add any effects." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "GetCameraView", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::CameraComponent_eventGetCameraView_Parms), Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_GetCameraView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics
	{
		struct CameraComponent_eventGetFilmbackText_Parms
		{
			FText ReturnValue;
		};
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraComponent_eventGetFilmbackText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returns the filmback text used for burnins on preview viewports\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Returns the filmback text used for burnins on preview viewports" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "GetFilmbackText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::CameraComponent_eventGetFilmbackText_Parms), Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x60020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_GetFilmbackText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_UCameraComponent_OnCameraMeshHiddenChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_OnCameraMeshHiddenChanged_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/**\n\x09* Internal function for updating the camera mesh visibility in PIE\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Internal function for updating the camera mesh visibility in PIE" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_OnCameraMeshHiddenChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "OnCameraMeshHiddenChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_OnCameraMeshHiddenChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_OnCameraMeshHiddenChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_OnCameraMeshHiddenChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_OnCameraMeshHiddenChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics
	{
		struct CameraComponent_eventRemoveBlendable_Parms
		{
			TScriptInterface<IBlendableInterface> InBlendableObject;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::NewProp_InBlendableObject = { "InBlendableObject", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraComponent_eventRemoveBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::NewProp_InBlendableObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Removes a blendable. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Removes a blendable." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "RemoveBlendable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::CameraComponent_eventRemoveBlendable_Parms), Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_RemoveBlendable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics
	{
		struct CameraComponent_eventSetAspectRatio_Parms
		{
			float InAspectRatio;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InAspectRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::NewProp_InAspectRatio = { "InAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraComponent_eventSetAspectRatio_Parms, InAspectRatio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::NewProp_InAspectRatio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetAspectRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::CameraComponent_eventSetAspectRatio_Parms), Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_SetAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics
	{
		struct CameraComponent_eventSetConstraintAspectRatio_Parms
		{
			bool bInConstrainAspectRatio;
		};
		static void NewProp_bInConstrainAspectRatio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInConstrainAspectRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::NewProp_bInConstrainAspectRatio_SetBit(void* Obj)
	{
		((CameraComponent_eventSetConstraintAspectRatio_Parms*)Obj)->bInConstrainAspectRatio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::NewProp_bInConstrainAspectRatio = { "bInConstrainAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CameraComponent_eventSetConstraintAspectRatio_Parms), &Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::NewProp_bInConstrainAspectRatio_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::NewProp_bInConstrainAspectRatio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetConstraintAspectRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::CameraComponent_eventSetConstraintAspectRatio_Parms), Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics
	{
		struct CameraComponent_eventSetFieldOfView_Parms
		{
			float InFieldOfView;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InFieldOfView;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::NewProp_InFieldOfView = { "InFieldOfView", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraComponent_eventSetFieldOfView_Parms, InFieldOfView), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::NewProp_InFieldOfView,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetFieldOfView", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::CameraComponent_eventSetFieldOfView_Parms), Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_SetFieldOfView()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics
	{
		struct CameraComponent_eventSetOrthoFarClipPlane_Parms
		{
			float InOrthoFarClipPlane;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InOrthoFarClipPlane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::NewProp_InOrthoFarClipPlane = { "InOrthoFarClipPlane", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraComponent_eventSetOrthoFarClipPlane_Parms, InOrthoFarClipPlane), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::NewProp_InOrthoFarClipPlane,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetOrthoFarClipPlane", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::CameraComponent_eventSetOrthoFarClipPlane_Parms), Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics
	{
		struct CameraComponent_eventSetOrthoNearClipPlane_Parms
		{
			float InOrthoNearClipPlane;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InOrthoNearClipPlane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::NewProp_InOrthoNearClipPlane = { "InOrthoNearClipPlane", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraComponent_eventSetOrthoNearClipPlane_Parms, InOrthoNearClipPlane), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::NewProp_InOrthoNearClipPlane,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetOrthoNearClipPlane", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::CameraComponent_eventSetOrthoNearClipPlane_Parms), Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics
	{
		struct CameraComponent_eventSetOrthoWidth_Parms
		{
			float InOrthoWidth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InOrthoWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::NewProp_InOrthoWidth = { "InOrthoWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraComponent_eventSetOrthoWidth_Parms, InOrthoWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::NewProp_InOrthoWidth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetOrthoWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::CameraComponent_eventSetOrthoWidth_Parms), Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_SetOrthoWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics
	{
		struct CameraComponent_eventSetPostProcessBlendWeight_Parms
		{
			float InPostProcessBlendWeight;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InPostProcessBlendWeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::NewProp_InPostProcessBlendWeight = { "InPostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraComponent_eventSetPostProcessBlendWeight_Parms, InPostProcessBlendWeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::NewProp_InPostProcessBlendWeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetPostProcessBlendWeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::CameraComponent_eventSetPostProcessBlendWeight_Parms), Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics
	{
		struct CameraComponent_eventSetProjectionMode_Parms
		{
			TEnumAsByte<ECameraProjectionMode::Type> InProjectionMode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InProjectionMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::NewProp_InProjectionMode = { "InProjectionMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CameraComponent_eventSetProjectionMode_Parms, InProjectionMode), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(nullptr, 0) }; // 2603946863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::NewProp_InProjectionMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetProjectionMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::CameraComponent_eventSetProjectionMode_Parms), Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_SetProjectionMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics
	{
		struct CameraComponent_eventSetUseFieldOfViewForLOD_Parms
		{
			bool bInUseFieldOfViewForLOD;
		};
		static void NewProp_bInUseFieldOfViewForLOD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUseFieldOfViewForLOD;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::NewProp_bInUseFieldOfViewForLOD_SetBit(void* Obj)
	{
		((CameraComponent_eventSetUseFieldOfViewForLOD_Parms*)Obj)->bInUseFieldOfViewForLOD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::NewProp_bInUseFieldOfViewForLOD = { "bInUseFieldOfViewForLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CameraComponent_eventSetUseFieldOfViewForLOD_Parms), &Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::NewProp_bInUseFieldOfViewForLOD_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::NewProp_bInUseFieldOfViewForLOD,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetUseFieldOfViewForLOD", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::CameraComponent_eventSetUseFieldOfViewForLOD_Parms), Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraComponent);
	UClass* Z_Construct_UClass_UCameraComponent_NoRegister()
	{
		return UCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrthoWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrthoNearClipPlane_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoNearClipPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrthoFarClipPlane_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoFarClipPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConstrainAspectRatio_MetaData[];
#endif
		static void NewProp_bConstrainAspectRatio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstrainAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFieldOfViewForLOD_MetaData[];
#endif
		static void NewProp_bUseFieldOfViewForLOD_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFieldOfViewForLOD;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawFrustumAllowed_MetaData[];
#endif
		static void NewProp_bDrawFrustumAllowed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawFrustumAllowed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCameraMeshHiddenInGame_MetaData[];
#endif
		static void NewProp_bCameraMeshHiddenInGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCameraMeshHiddenInGame;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockToHmd_MetaData[];
#endif
		static void NewProp_bLockToHmd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockToHmd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsePawnControlRotation_MetaData[];
#endif
		static void NewProp_bUsePawnControlRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePawnControlRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionMode;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseControllerViewRotation_MetaData[];
#endif
		static void NewProp_bUseControllerViewRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseControllerViewRotation;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCameraComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable, "AddOrUpdateBlendable" }, // 1531355634
		{ &Z_Construct_UFunction_UCameraComponent_GetCameraView, "GetCameraView" }, // 1535049289
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UCameraComponent_GetFilmbackText, "GetFilmbackText" }, // 3826464113
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_UCameraComponent_OnCameraMeshHiddenChanged, "OnCameraMeshHiddenChanged" }, // 2557869601
		{ &Z_Construct_UFunction_UCameraComponent_RemoveBlendable, "RemoveBlendable" }, // 1417230404
		{ &Z_Construct_UFunction_UCameraComponent_SetAspectRatio, "SetAspectRatio" }, // 2847000681
		{ &Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio, "SetConstraintAspectRatio" }, // 2653696075
		{ &Z_Construct_UFunction_UCameraComponent_SetFieldOfView, "SetFieldOfView" }, // 1939922349
		{ &Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane, "SetOrthoFarClipPlane" }, // 1126180797
		{ &Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane, "SetOrthoNearClipPlane" }, // 4103360393
		{ &Z_Construct_UFunction_UCameraComponent_SetOrthoWidth, "SetOrthoWidth" }, // 3962696815
		{ &Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight, "SetPostProcessBlendWeight" }, // 3980692107
		{ &Z_Construct_UFunction_UCameraComponent_SetProjectionMode, "SetProjectionMode" }, // 3173706837
		{ &Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD, "SetUseFieldOfViewForLOD" }, // 1253583075
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Camera" },
		{ "Comment", "/**\n  * Represents a camera viewpoint and settings, such as projection type, field of view, and post-process overrides.\n  * The default behavior for an actor used as the camera view target is to look for an attached camera component and use its location, rotation, and settings.\n  */" },
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Camera/CameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Represents a camera viewpoint and settings, such as projection type, field of view, and post-process overrides.\nThe default behavior for an actor used as the camera view target is to look for an attached camera component and use its location, rotation, and settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_FieldOfView_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** \n\x09 * The horizontal field of view (in degrees) in perspective mode (ignored in Orthographic mode)\n\x09 *\n\x09 * If the aspect ratio axis constraint (from ULocalPlayer, ALevelSequenceActor, etc.) is set to maintain vertical FOV, the AspectRatio\n\x09 * property will be used to convert this property's value to a vertical FOV.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "The horizontal field of view (in degrees) in perspective mode (ignored in Orthographic mode)\n\nIf the aspect ratio axis constraint (from ULocalPlayer, ALevelSequenceActor, etc.) is set to maintain vertical FOV, the AspectRatio\nproperty will be used to convert this property's value to a vertical FOV." },
		{ "UIMax", "170" },
		{ "UIMin", "5.0" },
		{ "Units", "deg" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraComponent, FieldOfView), METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_FieldOfView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_FieldOfView_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoWidth_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "Comment", "/** The desired width (in world units) of the orthographic view (ignored in Perspective mode) */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "The desired width (in world units) of the orthographic view (ignored in Perspective mode)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoWidth = { "OrthoWidth", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraComponent, OrthoWidth), METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoNearClipPlane_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "Comment", "/** The near plane distance of the orthographic view (in world units) */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "The near plane distance of the orthographic view (in world units)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoNearClipPlane = { "OrthoNearClipPlane", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraComponent, OrthoNearClipPlane), METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoNearClipPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoNearClipPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoFarClipPlane_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "Comment", "/** The far plane distance of the orthographic view (in world units) */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "The far plane distance of the orthographic view (in world units)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoFarClipPlane = { "OrthoFarClipPlane", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraComponent, OrthoFarClipPlane), METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoFarClipPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoFarClipPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_AspectRatio_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "// Aspect Ratio (Width/Height)\n" },
		{ "EditCondition", "bConstrainAspectRatio" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Aspect Ratio (Width/Height)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraComponent, AspectRatio), METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_AspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_AspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_bConstrainAspectRatio_MetaData[] = {
		{ "Category", "CameraOptions" },
		{ "Comment", "// If bConstrainAspectRatio is true, black bars will be added if the destination view has a different aspect ratio than this camera requested.\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "If bConstrainAspectRatio is true, black bars will be added if the destination view has a different aspect ratio than this camera requested." },
	};
#endif
	void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bConstrainAspectRatio_SetBit(void* Obj)
	{
		((UCameraComponent*)Obj)->bConstrainAspectRatio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bConstrainAspectRatio = { "bConstrainAspectRatio", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bConstrainAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bConstrainAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bConstrainAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseFieldOfViewForLOD_MetaData[] = {
		{ "Category", "CameraOptions" },
		{ "Comment", "// If true, account for the field of view angle when computing which level of detail to use for meshes.\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "If true, account for the field of view angle when computing which level of detail to use for meshes." },
	};
#endif
	void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseFieldOfViewForLOD_SetBit(void* Obj)
	{
		((UCameraComponent*)Obj)->bUseFieldOfViewForLOD = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseFieldOfViewForLOD = { "bUseFieldOfViewForLOD", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseFieldOfViewForLOD_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseFieldOfViewForLOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseFieldOfViewForLOD_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_bDrawFrustumAllowed_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// The Frustum visibility flag for draw frustum component initialization\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "The Frustum visibility flag for draw frustum component initialization" },
	};
#endif
	void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bDrawFrustumAllowed_SetBit(void* Obj)
	{
		((UCameraComponent*)Obj)->bDrawFrustumAllowed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bDrawFrustumAllowed = { "bDrawFrustumAllowed", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bDrawFrustumAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bDrawFrustumAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bDrawFrustumAllowed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_bCameraMeshHiddenInGame_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** If the camera mesh is visible in game. Only relevant when running editor builds. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "If the camera mesh is visible in game. Only relevant when running editor builds." },
	};
#endif
	void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bCameraMeshHiddenInGame_SetBit(void* Obj)
	{
		((UCameraComponent*)Obj)->bCameraMeshHiddenInGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bCameraMeshHiddenInGame = { "bCameraMeshHiddenInGame", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bCameraMeshHiddenInGame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bCameraMeshHiddenInGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bCameraMeshHiddenInGame_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_bLockToHmd_MetaData[] = {
		{ "Category", "CameraOptions" },
		{ "Comment", "/** True if the camera's orientation and position should be locked to the HMD */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "True if the camera's orientation and position should be locked to the HMD" },
	};
#endif
	void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bLockToHmd_SetBit(void* Obj)
	{
		((UCameraComponent*)Obj)->bLockToHmd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bLockToHmd = { "bLockToHmd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bLockToHmd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bLockToHmd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bLockToHmd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUsePawnControlRotation_MetaData[] = {
		{ "Category", "CameraOptions" },
		{ "Comment", "/**\n\x09 * If this camera component is placed on a pawn, should it use the view/control rotation of the pawn where possible?\n\x09 * @see APawn::GetViewRotation()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "If this camera component is placed on a pawn, should it use the view/control rotation of the pawn where possible?\n@see APawn::GetViewRotation()" },
	};
#endif
	void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUsePawnControlRotation_SetBit(void* Obj)
	{
		((UCameraComponent*)Obj)->bUsePawnControlRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUsePawnControlRotation = { "bUsePawnControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUsePawnControlRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUsePawnControlRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUsePawnControlRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_ProjectionMode_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "Comment", "// The type of camera\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "The type of camera" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_ProjectionMode = { "ProjectionMode", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraComponent, ProjectionMode), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_ProjectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_ProjectionMode_MetaData)) }; // 2603946863
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_CameraMesh_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_CameraMesh = { "CameraMesh", nullptr, (EPropertyFlags)0x0024080800000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraComponent, CameraMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_CameraMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_CameraMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessBlendWeight_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** Indicates if PostProcessSettings should be used when using this Camera to view through. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Indicates if PostProcessSettings should be used when using this Camera to view through." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessBlendWeight = { "PostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraComponent, PostProcessBlendWeight), METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessBlendWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** Post process settings to use for this camera. Don't forget to check the properties you want to override */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Post process settings to use for this camera. Don't forget to check the properties you want to override" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCameraComponent, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessSettings_MetaData)) }; // 1889339962
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseControllerViewRotation_MetaData[] = {
		{ "Comment", "/** DEPRECATED: use bUsePawnControlRotation instead */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "DEPRECATED: use bUsePawnControlRotation instead" },
	};
#endif
	void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseControllerViewRotation_SetBit(void* Obj)
	{
		((UCameraComponent*)Obj)->bUseControllerViewRotation_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseControllerViewRotation = { "bUseControllerViewRotation", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseControllerViewRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseControllerViewRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseControllerViewRotation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_FieldOfView,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoNearClipPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoFarClipPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_AspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bConstrainAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseFieldOfViewForLOD,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bDrawFrustumAllowed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bCameraMeshHiddenInGame,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bLockToHmd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUsePawnControlRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_ProjectionMode,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_CameraMesh,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessBlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessSettings,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseControllerViewRotation,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraComponent_Statics::ClassParams = {
		&UCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCameraComponent()
	{
		if (!Z_Registration_Info_UClass_UCameraComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraComponent.OuterSingleton, Z_Construct_UClass_UCameraComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCameraComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCameraComponent>()
	{
		return UCameraComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraComponent);
	UCameraComponent::~UCameraComponent() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCameraComponent)
#endif
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCameraComponent, UCameraComponent::StaticClass, TEXT("UCameraComponent"), &Z_Registration_Info_UClass_UCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraComponent), 1298292307U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_4196425695(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
