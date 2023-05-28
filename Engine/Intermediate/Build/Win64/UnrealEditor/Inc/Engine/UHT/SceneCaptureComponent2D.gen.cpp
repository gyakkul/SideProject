// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/SceneCaptureComponent2D.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCaptureComponent2D() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneCaptureCompositeMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(USceneCaptureComponent2D::execCaptureScene)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CaptureScene();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneCaptureComponent2D::execRemoveBlendable)
	{
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveBlendable(Z_Param_InBlendableObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USceneCaptureComponent2D::execAddOrUpdateBlendable)
	{
		P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOrUpdateBlendable(Z_Param_InBlendableObject,Z_Param_InWeight);
		P_NATIVE_END;
	}
	void USceneCaptureComponent2D::StaticRegisterNativesUSceneCaptureComponent2D()
	{
		UClass* Class = USceneCaptureComponent2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOrUpdateBlendable", &USceneCaptureComponent2D::execAddOrUpdateBlendable },
			{ "CaptureScene", &USceneCaptureComponent2D::execCaptureScene },
			{ "RemoveBlendable", &USceneCaptureComponent2D::execRemoveBlendable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics
	{
		struct SceneCaptureComponent2D_eventAddOrUpdateBlendable_Parms
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
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject = { "InBlendableObject", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneCaptureComponent2D_eventAddOrUpdateBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneCaptureComponent2D_eventAddOrUpdateBlendable_Parms, InWeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::NewProp_InWeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight */" },
		{ "CPP_Default_InWeight", "1.000000" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent2D, nullptr, "AddOrUpdateBlendable", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::SceneCaptureComponent2D_eventAddOrUpdateBlendable_Parms), Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "Comment", "/** \n\x09 * Render the scene to the texture target immediately.  \n\x09 * This should not be used if bCaptureEveryFrame is enabled, or the scene capture will render redundantly. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Render the scene to the texture target immediately.\nThis should not be used if bCaptureEveryFrame is enabled, or the scene capture will render redundantly." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent2D, nullptr, "CaptureScene", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics
	{
		struct SceneCaptureComponent2D_eventRemoveBlendable_Parms
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
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::NewProp_InBlendableObject = { "InBlendableObject", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SceneCaptureComponent2D_eventRemoveBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::NewProp_InBlendableObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Removes a blendable. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Removes a blendable." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent2D, nullptr, "RemoveBlendable", nullptr, nullptr, sizeof(Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::SceneCaptureComponent2D_eventRemoveBlendable_Parms), Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USceneCaptureComponent2D);
	UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister()
	{
		return USceneCaptureComponent2D::StaticClass();
	}
	struct Z_Construct_UClass_USceneCaptureComponent2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FOVAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrthoWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextureTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositeMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompositeMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_CustomNearClippingPlane_MetaData[];
#endif
		static void NewProp_bOverride_CustomNearClippingPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_CustomNearClippingPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomNearClippingPlane_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomNearClippingPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomProjectionMatrix_MetaData[];
#endif
		static void NewProp_bUseCustomProjectionMatrix_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomProjectionMatrix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomProjectionMatrix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomProjectionMatrix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFauxOrthoViewPos_MetaData[];
#endif
		static void NewProp_bUseFauxOrthoViewPos_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFauxOrthoViewPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOrthographicTiling_MetaData[];
#endif
		static void NewProp_bEnableOrthographicTiling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOrthographicTiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumXTiles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumXTiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumYTiles_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumYTiles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableClipPlane_MetaData[];
#endif
		static void NewProp_bEnableClipPlane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableClipPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipPlaneBase_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClipPlaneBase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClipPlaneNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClipPlaneNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCameraCutThisFrame_MetaData[];
#endif
		static void NewProp_bCameraCutThisFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCameraCutThisFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_MetaData[];
#endif
		static void NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USceneCaptureComponent2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USceneCaptureComponent2D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable, "AddOrUpdateBlendable" }, // 3096494643
		{ &Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene, "CaptureScene" }, // 2143412660
		{ &Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable, "RemoveBlendable" }, // 1603013411
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n *\x09Used to capture a 'snapshot' of the scene from a single plane and feed it to a render target.\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SceneCaptureComponent2D.h" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Used to capture a 'snapshot' of the scene from a single plane and feed it to a render target." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ProjectionType_MetaData[] = {
		{ "Category", "Projection" },
		{ "DisplayName", "Projection Type" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ProjectionType = { "ProjectionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, ProjectionType), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ProjectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ProjectionType_MetaData)) }; // 2603946863
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_FOVAngle_MetaData[] = {
		{ "Category", "Projection" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Camera field of view (in degrees). */" },
		{ "DisplayName", "Field of View" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Camera field of view (in degrees)." },
		{ "UIMax", "170" },
		{ "UIMin", "5.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_FOVAngle = { "FOVAngle", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, FOVAngle), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_FOVAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_FOVAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_OrthoWidth_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** The desired width (in world units) of the orthographic view (ignored in Perspective mode) */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "The desired width (in world units) of the orthographic view (ignored in Perspective mode)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_OrthoWidth = { "OrthoWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, OrthoWidth), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_OrthoWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_OrthoWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_TextureTarget_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Output render target of the scene capture that can be read in materials. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Output render target of the scene capture that can be read in materials." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_TextureTarget = { "TextureTarget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, TextureTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_TextureTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_TextureTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CompositeMode_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** When enabled, the scene capture will composite into the render target instead of overwriting its contents. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "When enabled, the scene capture will composite into the render target instead of overwriting its contents." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CompositeMode = { "CompositeMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, CompositeMode), Z_Construct_UEnum_Engine_ESceneCaptureCompositeMode, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CompositeMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CompositeMode_MetaData)) }; // 3274487289
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessSettings_MetaData)) }; // 1889339962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessBlendWeight_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "Comment", "/** Range (0.0, 1.0) where 0 indicates no effect, 1 indicates full effect. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Range (0.0, 1.0) where 0 indicates no effect, 1 indicates full effect." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessBlendWeight = { "PostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, PostProcessBlendWeight), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessBlendWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessBlendWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bOverride_CustomNearClippingPlane_MetaData[] = {
		{ "Category", "Projection" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
	};
#endif
	void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bOverride_CustomNearClippingPlane_SetBit(void* Obj)
	{
		((USceneCaptureComponent2D*)Obj)->bOverride_CustomNearClippingPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bOverride_CustomNearClippingPlane = { "bOverride_CustomNearClippingPlane", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bOverride_CustomNearClippingPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bOverride_CustomNearClippingPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bOverride_CustomNearClippingPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomNearClippingPlane_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** \n\x09 * Set bOverride_CustomNearClippingPlane to true if you want to use a custom clipping plane instead of GNearClippingPlane.\n\x09 */" },
		{ "editcondition", "bOverride_CustomNearClippingPlane" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Set bOverride_CustomNearClippingPlane to true if you want to use a custom clipping plane instead of GNearClippingPlane." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomNearClippingPlane = { "CustomNearClippingPlane", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, CustomNearClippingPlane), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomNearClippingPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomNearClippingPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCustomProjectionMatrix_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** Whether a custom projection matrix will be used during rendering. Use with caution. Does not currently affect culling */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Whether a custom projection matrix will be used during rendering. Use with caution. Does not currently affect culling" },
	};
#endif
	void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCustomProjectionMatrix_SetBit(void* Obj)
	{
		((USceneCaptureComponent2D*)Obj)->bUseCustomProjectionMatrix = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCustomProjectionMatrix = { "bUseCustomProjectionMatrix", nullptr, (EPropertyFlags)0x0010040000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCustomProjectionMatrix_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCustomProjectionMatrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCustomProjectionMatrix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomProjectionMatrix_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** The custom projection matrix to use */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "The custom projection matrix to use" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomProjectionMatrix = { "CustomProjectionMatrix", nullptr, (EPropertyFlags)0x0010040000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, CustomProjectionMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomProjectionMatrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomProjectionMatrix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseFauxOrthoViewPos_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** In case of orthographic camera, generate a fake view position that has a non-zero W component. The view position will be derived based on the view matrix. */" },
		{ "editcondition", "ProjectionType==1" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "In case of orthographic camera, generate a fake view position that has a non-zero W component. The view position will be derived based on the view matrix." },
	};
#endif
	void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseFauxOrthoViewPos_SetBit(void* Obj)
	{
		((USceneCaptureComponent2D*)Obj)->bUseFauxOrthoViewPos = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseFauxOrthoViewPos = { "bUseFauxOrthoViewPos", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseFauxOrthoViewPos_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseFauxOrthoViewPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseFauxOrthoViewPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableOrthographicTiling_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** Render the scene in n frames (i.e TileCount) - Ignored in Perspective mode, works only in Orthographic mode when CaptureSource uses SceneColor (not FinalColor)\n\x09* If CaptureSource uses FinalColor, tiling will be ignored and a Warning message will be logged\x09*/" },
		{ "editcondition", "ProjectionType==1" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Render the scene in n frames (i.e TileCount) - Ignored in Perspective mode, works only in Orthographic mode when CaptureSource uses SceneColor (not FinalColor)\nIf CaptureSource uses FinalColor, tiling will be ignored and a Warning message will be logged" },
	};
#endif
	void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableOrthographicTiling_SetBit(void* Obj)
	{
		((USceneCaptureComponent2D*)Obj)->bEnableOrthographicTiling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableOrthographicTiling = { "bEnableOrthographicTiling", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableOrthographicTiling_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableOrthographicTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableOrthographicTiling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_NumXTiles_MetaData[] = {
		{ "Category", "Projection" },
		{ "ClampMax", "64" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of X tiles to render. Ignored in Perspective mode, works only in Orthographic mode */" },
		{ "editcondition", "ProjectionType==1 && bEnableOrthographicTiling" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Number of X tiles to render. Ignored in Perspective mode, works only in Orthographic mode" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_NumXTiles = { "NumXTiles", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, NumXTiles), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_NumXTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_NumXTiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_NumYTiles_MetaData[] = {
		{ "Category", "Projection" },
		{ "ClampMax", "64" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of Y tiles to render. Ignored in Perspective mode, works only in Orthographic mode */" },
		{ "editcondition", "ProjectionType==1 && bEnableOrthographicTiling" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Number of Y tiles to render. Ignored in Perspective mode, works only in Orthographic mode" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_NumYTiles = { "NumYTiles", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, NumYTiles), METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_NumYTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_NumYTiles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableClipPlane_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/**\n\x09 * Enables a clip plane while rendering the scene capture which is useful for portals.  \n\x09 * The global clip plane must be enabled in the renderer project settings for this to work.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Enables a clip plane while rendering the scene capture which is useful for portals.\nThe global clip plane must be enabled in the renderer project settings for this to work." },
	};
#endif
	void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableClipPlane_SetBit(void* Obj)
	{
		((USceneCaptureComponent2D*)Obj)->bEnableClipPlane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableClipPlane = { "bEnableClipPlane", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableClipPlane_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableClipPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableClipPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneBase_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Base position for the clip plane, can be any position on the plane. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Base position for the clip plane, can be any position on the plane." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneBase = { "ClipPlaneBase", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, ClipPlaneBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneBase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneNormal_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Normal for the plane. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Normal for the plane." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneNormal = { "ClipPlaneNormal", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USceneCaptureComponent2D, ClipPlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bCameraCutThisFrame_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** \n\x09 * True if we did a camera cut this frame. Automatically reset to false at every capture.\n\x09 * This flag affects various things in the renderer (such as whether to use the occlusion queries from last frame, and motion blur).\n\x09 * Similar to UPlayerCameraManager::bGameCameraCutThisFrame.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "True if we did a camera cut this frame. Automatically reset to false at every capture.\nThis flag affects various things in the renderer (such as whether to use the occlusion queries from last frame, and motion blur).\nSimilar to UPlayerCameraManager::bGameCameraCutThisFrame." },
	};
#endif
	void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bCameraCutThisFrame_SetBit(void* Obj)
	{
		((USceneCaptureComponent2D*)Obj)->bCameraCutThisFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bCameraCutThisFrame = { "bCameraCutThisFrame", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bCameraCutThisFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bCameraCutThisFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bCameraCutThisFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Treat unrendered opaque pixels as fully translucent. This is important for effects such as exponential weight fog, so it does not get applied on unrendered opaque pixels. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Treat unrendered opaque pixels as fully translucent. This is important for effects such as exponential weight fog, so it does not get applied on unrendered opaque pixels." },
	};
#endif
	void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_SetBit(void* Obj)
	{
		((USceneCaptureComponent2D*)Obj)->bConsiderUnrenderedOpaquePixelAsFullyTranslucent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent = { "bConsiderUnrenderedOpaquePixelAsFullyTranslucent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_SetBit, METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneCaptureComponent2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ProjectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_FOVAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_OrthoWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_TextureTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CompositeMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessBlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bOverride_CustomNearClippingPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomNearClippingPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCustomProjectionMatrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomProjectionMatrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseFauxOrthoViewPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableOrthographicTiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_NumXTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_NumYTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableClipPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneBase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bCameraCutThisFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USceneCaptureComponent2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneCaptureComponent2D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::ClassParams = {
		&USceneCaptureComponent2D::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USceneCaptureComponent2D_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_USceneCaptureComponent2D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USceneCaptureComponent2D()
	{
		if (!Z_Registration_Info_UClass_USceneCaptureComponent2D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USceneCaptureComponent2D.OuterSingleton, Z_Construct_UClass_USceneCaptureComponent2D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USceneCaptureComponent2D.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USceneCaptureComponent2D>()
	{
		return USceneCaptureComponent2D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USceneCaptureComponent2D);
	USceneCaptureComponent2D::~USceneCaptureComponent2D() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USceneCaptureComponent2D)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USceneCaptureComponent2D, USceneCaptureComponent2D::StaticClass, TEXT("USceneCaptureComponent2D"), &Z_Registration_Info_UClass_USceneCaptureComponent2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USceneCaptureComponent2D), 739647140U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_2490398757(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
