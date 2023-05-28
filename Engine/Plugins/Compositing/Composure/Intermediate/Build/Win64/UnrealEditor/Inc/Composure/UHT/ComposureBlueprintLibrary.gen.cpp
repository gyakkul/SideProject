// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComposureBlueprintLibrary.h"
#include "../Public/ComposurePostMoves.h"
#include "../Public/ComposureUVMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposureBlueprintLibrary() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_ACompositingElement_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposureBlueprintLibrary();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposureBlueprintLibrary_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePlayerCompositingTarget_NoRegister();
	COMPOSURE_API UScriptStruct* Z_Construct_UScriptStruct_FComposurePostMoveSettings();
	COMPOSURE_API UScriptStruct* Z_Construct_UScriptStruct_FComposureUVMapSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	DEFINE_FUNCTION(UComposureBlueprintLibrary::execRefreshComposureElementList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UComposureBlueprintLibrary::RefreshComposureElementList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposureBlueprintLibrary::execRequestRedrawComposureViewport)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UComposureBlueprintLibrary::RequestRedrawComposureViewport();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposureBlueprintLibrary::execIsComposureElementDrawing)
	{
		P_GET_OBJECT(ACompositingElement,Z_Param_CompElement);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UComposureBlueprintLibrary::IsComposureElementDrawing(Z_Param_CompElement);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposureBlueprintLibrary::execAttachComposureElement)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParentName);
		P_GET_PROPERTY(FNameProperty,Z_Param_ChildName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UComposureBlueprintLibrary::AttachComposureElement(Z_Param_ParentName,Z_Param_ChildName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposureBlueprintLibrary::execRenameComposureElement)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_OriginalElementName);
		P_GET_PROPERTY(FNameProperty,Z_Param_NewElementName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UComposureBlueprintLibrary::RenameComposureElement(Z_Param_OriginalElementName,Z_Param_NewElementName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposureBlueprintLibrary::execDeleteComposureElementAndChildren)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ElementToDelete);
		P_FINISH;
		P_NATIVE_BEGIN;
		UComposureBlueprintLibrary::DeleteComposureElementAndChildren(Z_Param_ElementToDelete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposureBlueprintLibrary::execGetComposureElement)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ElementName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACompositingElement**)Z_Param__Result=UComposureBlueprintLibrary::GetComposureElement(Z_Param_ElementName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposureBlueprintLibrary::execCreateComposureElement)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ElementName);
		P_GET_OBJECT(UClass,Z_Param_ClassType);
		P_GET_OBJECT(AActor,Z_Param_LevelContext);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACompositingElement**)Z_Param__Result=UComposureBlueprintLibrary::CreateComposureElement(Z_Param_ElementName,Z_Param_ClassType,Z_Param_LevelContext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposureBlueprintLibrary::execCopyCameraSettingsToSceneCapture)
	{
		P_GET_OBJECT(UCameraComponent,Z_Param_SrcCamera);
		P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_DstCaptureComponent);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OriginalFocalLength);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OverscanFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UComposureBlueprintLibrary::CopyCameraSettingsToSceneCapture(Z_Param_SrcCamera,Z_Param_DstCaptureComponent,Z_Param_OriginalFocalLength,Z_Param_OverscanFactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposureBlueprintLibrary::execGetPlayerDisplayGamma)
	{
		P_GET_OBJECT(APlayerCameraManager,Z_Param_PlayerCameraManager);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DisplayGamma);
		P_FINISH;
		P_NATIVE_BEGIN;
		UComposureBlueprintLibrary::GetPlayerDisplayGamma(Z_Param_PlayerCameraManager,Z_Param_Out_DisplayGamma);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposureBlueprintLibrary::execGetRedGreenUVFactorsFromChromaticAberration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ChromaticAberrationAmount);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_RedGreenUVFactors);
		P_FINISH;
		P_NATIVE_BEGIN;
		UComposureBlueprintLibrary::GetRedGreenUVFactorsFromChromaticAberration(Z_Param_ChromaticAberrationAmount,Z_Param_Out_RedGreenUVFactors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposureBlueprintLibrary::execInvertUVDisplacementMapEncodingParameters)
	{
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_In);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UComposureBlueprintLibrary::InvertUVDisplacementMapEncodingParameters(Z_Param_Out_In,Z_Param_Out_Out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposureBlueprintLibrary::execSetUVMapSettingsToMaterialParameters)
	{
		P_GET_STRUCT_REF(FComposureUVMapSettings,Z_Param_Out_UVMapSettings);
		P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		UComposureBlueprintLibrary::SetUVMapSettingsToMaterialParameters(Z_Param_Out_UVMapSettings,Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposureBlueprintLibrary::execGetCroppingUVTransformationMatrixFromPostMoveSettings)
	{
		P_GET_STRUCT_REF(FComposurePostMoveSettings,Z_Param_Out_PostMoveSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AspectRatio);
		P_GET_STRUCT_REF(FMatrix,Z_Param_Out_CropingUVTransformationMatrix);
		P_GET_STRUCT_REF(FMatrix,Z_Param_Out_UncropingUVTransformationMatrix);
		P_FINISH;
		P_NATIVE_BEGIN;
		UComposureBlueprintLibrary::GetCroppingUVTransformationMatrixFromPostMoveSettings(Z_Param_Out_PostMoveSettings,Z_Param_AspectRatio,Z_Param_Out_CropingUVTransformationMatrix,Z_Param_Out_UncropingUVTransformationMatrix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposureBlueprintLibrary::execGetProjectionMatrixFromPostMoveSettings)
	{
		P_GET_STRUCT_REF(FComposurePostMoveSettings,Z_Param_Out_PostMoveSettings);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HorizontalFOVAngle);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AspectRatio);
		P_GET_STRUCT_REF(FMatrix,Z_Param_Out_ProjectionMatrix);
		P_FINISH;
		P_NATIVE_BEGIN;
		UComposureBlueprintLibrary::GetProjectionMatrixFromPostMoveSettings(Z_Param_Out_PostMoveSettings,Z_Param_HorizontalFOVAngle,Z_Param_AspectRatio,Z_Param_Out_ProjectionMatrix);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UComposureBlueprintLibrary::execCreatePlayerCompositingTarget)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UComposurePlayerCompositingTarget**)Z_Param__Result=UComposureBlueprintLibrary::CreatePlayerCompositingTarget(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UComposureBlueprintLibrary::StaticRegisterNativesUComposureBlueprintLibrary()
	{
		UClass* Class = UComposureBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachComposureElement", &UComposureBlueprintLibrary::execAttachComposureElement },
			{ "CopyCameraSettingsToSceneCapture", &UComposureBlueprintLibrary::execCopyCameraSettingsToSceneCapture },
			{ "CreateComposureElement", &UComposureBlueprintLibrary::execCreateComposureElement },
			{ "CreatePlayerCompositingTarget", &UComposureBlueprintLibrary::execCreatePlayerCompositingTarget },
			{ "DeleteComposureElementAndChildren", &UComposureBlueprintLibrary::execDeleteComposureElementAndChildren },
			{ "GetComposureElement", &UComposureBlueprintLibrary::execGetComposureElement },
			{ "GetCroppingUVTransformationMatrixFromPostMoveSettings", &UComposureBlueprintLibrary::execGetCroppingUVTransformationMatrixFromPostMoveSettings },
			{ "GetPlayerDisplayGamma", &UComposureBlueprintLibrary::execGetPlayerDisplayGamma },
			{ "GetProjectionMatrixFromPostMoveSettings", &UComposureBlueprintLibrary::execGetProjectionMatrixFromPostMoveSettings },
			{ "GetRedGreenUVFactorsFromChromaticAberration", &UComposureBlueprintLibrary::execGetRedGreenUVFactorsFromChromaticAberration },
			{ "InvertUVDisplacementMapEncodingParameters", &UComposureBlueprintLibrary::execInvertUVDisplacementMapEncodingParameters },
			{ "IsComposureElementDrawing", &UComposureBlueprintLibrary::execIsComposureElementDrawing },
			{ "RefreshComposureElementList", &UComposureBlueprintLibrary::execRefreshComposureElementList },
			{ "RenameComposureElement", &UComposureBlueprintLibrary::execRenameComposureElement },
			{ "RequestRedrawComposureViewport", &UComposureBlueprintLibrary::execRequestRedrawComposureViewport },
			{ "SetUVMapSettingsToMaterialParameters", &UComposureBlueprintLibrary::execSetUVMapSettingsToMaterialParameters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics
	{
		struct ComposureBlueprintLibrary_eventAttachComposureElement_Parms
		{
			FName ParentName;
			FName ChildName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ChildName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::NewProp_ParentName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::NewProp_ParentName = { "ParentName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventAttachComposureElement_Parms, ParentName), METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::NewProp_ParentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::NewProp_ParentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::NewProp_ChildName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::NewProp_ChildName = { "ChildName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventAttachComposureElement_Parms, ChildName), METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::NewProp_ChildName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::NewProp_ChildName_MetaData)) };
	void Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComposureBlueprintLibrary_eventAttachComposureElement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ComposureBlueprintLibrary_eventAttachComposureElement_Parms), &Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::NewProp_ParentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::NewProp_ChildName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Manager" },
		{ "Comment", "/**\n\x09 * Attach one composure element as the child to another composure element in the scene.\n\x09 * @param ParentName                The name of the parent composure element.\n\x09 * @param ChildName                 The name of the child composure element.\n\x09 * @return bool                     Whether the attaching process is successful or not.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ComposureBlueprintLibrary.h" },
		{ "ToolTip", "Attach one composure element as the child to another composure element in the scene.\n@param ParentName                The name of the parent composure element.\n@param ChildName                 The name of the child composure element.\n@return bool                     Whether the attaching process is successful or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureBlueprintLibrary, nullptr, "AttachComposureElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::ComposureBlueprintLibrary_eventAttachComposureElement_Parms), Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics
	{
		struct ComposureBlueprintLibrary_eventCopyCameraSettingsToSceneCapture_Parms
		{
			UCameraComponent* SrcCamera;
			USceneCaptureComponent2D* DstCaptureComponent;
			float OriginalFocalLength;
			float OverscanFactor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SrcCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SrcCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DstCaptureComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DstCaptureComponent;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalFocalLength;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverscanFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::NewProp_SrcCamera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::NewProp_SrcCamera = { "SrcCamera", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventCopyCameraSettingsToSceneCapture_Parms, SrcCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::NewProp_SrcCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::NewProp_SrcCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::NewProp_DstCaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::NewProp_DstCaptureComponent = { "DstCaptureComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventCopyCameraSettingsToSceneCapture_Parms, DstCaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::NewProp_DstCaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::NewProp_DstCaptureComponent_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::NewProp_OriginalFocalLength = { "OriginalFocalLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventCopyCameraSettingsToSceneCapture_Parms, OriginalFocalLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::NewProp_OverscanFactor = { "OverscanFactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventCopyCameraSettingsToSceneCapture_Parms, OverscanFactor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::NewProp_SrcCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::NewProp_DstCaptureComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::NewProp_OriginalFocalLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::NewProp_OverscanFactor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "CPP_Default_OverscanFactor", "1.000000" },
		{ "ModuleRelativePath", "Classes/ComposureBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureBlueprintLibrary, nullptr, "CopyCameraSettingsToSceneCapture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::ComposureBlueprintLibrary_eventCopyCameraSettingsToSceneCapture_Parms), Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics
	{
		struct ComposureBlueprintLibrary_eventCreateComposureElement_Parms
		{
			FName ElementName;
			TSubclassOf<ACompositingElement>  ClassType;
			AActor* LevelContext;
			ACompositingElement* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ElementName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelContext;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::NewProp_ElementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::NewProp_ElementName = { "ElementName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventCreateComposureElement_Parms, ElementName), METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::NewProp_ElementName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::NewProp_ElementName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::NewProp_ClassType_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::NewProp_ClassType = { "ClassType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventCreateComposureElement_Parms, ClassType), Z_Construct_UClass_UClass, Z_Construct_UClass_ACompositingElement_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::NewProp_ClassType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::NewProp_ClassType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::NewProp_LevelContext = { "LevelContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventCreateComposureElement_Parms, LevelContext), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventCreateComposureElement_Parms, ReturnValue), Z_Construct_UClass_ACompositingElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::NewProp_ElementName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::NewProp_ClassType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::NewProp_LevelContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Manager" },
		{ "Comment", "/**\n\x09 * Create a new Composure in the level without any parenting relationship.\n\x09 * @param ElementName              The name for the newly created composure element\n\x09 * @param ClassType                The type for the new composure element\n\x09 * @param LevelContext             The level context of current level. Default value is nullptr.\n\x09 * @return CompositingElement      The created composure element.\n\x09 */" },
		{ "CPP_Default_LevelContext", "None" },
		{ "DeterminesOutputType", "ClassType" },
		{ "ModuleRelativePath", "Classes/ComposureBlueprintLibrary.h" },
		{ "ToolTip", "Create a new Composure in the level without any parenting relationship.\n@param ElementName              The name for the newly created composure element\n@param ClassType                The type for the new composure element\n@param LevelContext             The level context of current level. Default value is nullptr.\n@return CompositingElement      The created composure element." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureBlueprintLibrary, nullptr, "CreateComposureElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::ComposureBlueprintLibrary_eventCreateComposureElement_Parms), Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposureBlueprintLibrary_CreatePlayerCompositingTarget_Statics
	{
		struct ComposureBlueprintLibrary_eventCreatePlayerCompositingTarget_Parms
		{
			UObject* WorldContextObject;
			UComposurePlayerCompositingTarget* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_CreatePlayerCompositingTarget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventCreatePlayerCompositingTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_CreatePlayerCompositingTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventCreatePlayerCompositingTarget_Parms, ReturnValue), Z_Construct_UClass_UComposurePlayerCompositingTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposureBlueprintLibrary_CreatePlayerCompositingTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_CreatePlayerCompositingTarget_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_CreatePlayerCompositingTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_CreatePlayerCompositingTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "Comment", "/** Creates a Player Compositing Target which you can modify during gameplay. */" },
		{ "ModuleRelativePath", "Classes/ComposureBlueprintLibrary.h" },
		{ "ToolTip", "Creates a Player Compositing Target which you can modify during gameplay." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureBlueprintLibrary_CreatePlayerCompositingTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureBlueprintLibrary, nullptr, "CreatePlayerCompositingTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposureBlueprintLibrary_CreatePlayerCompositingTarget_Statics::ComposureBlueprintLibrary_eventCreatePlayerCompositingTarget_Parms), Z_Construct_UFunction_UComposureBlueprintLibrary_CreatePlayerCompositingTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_CreatePlayerCompositingTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_CreatePlayerCompositingTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_CreatePlayerCompositingTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureBlueprintLibrary_CreatePlayerCompositingTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureBlueprintLibrary_CreatePlayerCompositingTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposureBlueprintLibrary_DeleteComposureElementAndChildren_Statics
	{
		struct ComposureBlueprintLibrary_eventDeleteComposureElementAndChildren_Parms
		{
			FName ElementToDelete;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementToDelete_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ElementToDelete;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_DeleteComposureElementAndChildren_Statics::NewProp_ElementToDelete_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_DeleteComposureElementAndChildren_Statics::NewProp_ElementToDelete = { "ElementToDelete", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventDeleteComposureElementAndChildren_Parms, ElementToDelete), METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_DeleteComposureElementAndChildren_Statics::NewProp_ElementToDelete_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_DeleteComposureElementAndChildren_Statics::NewProp_ElementToDelete_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposureBlueprintLibrary_DeleteComposureElementAndChildren_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_DeleteComposureElementAndChildren_Statics::NewProp_ElementToDelete,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_DeleteComposureElementAndChildren_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Manager" },
		{ "Comment", "/**\n\x09 * Delete a specific composure element without evoking prompt window. Will delete all of its children as well.\n\x09 * @param ElementToDelete           The name of the composure element that we want to delete.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ComposureBlueprintLibrary.h" },
		{ "ToolTip", "Delete a specific composure element without evoking prompt window. Will delete all of its children as well.\n@param ElementToDelete           The name of the composure element that we want to delete." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureBlueprintLibrary_DeleteComposureElementAndChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureBlueprintLibrary, nullptr, "DeleteComposureElementAndChildren", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposureBlueprintLibrary_DeleteComposureElementAndChildren_Statics::ComposureBlueprintLibrary_eventDeleteComposureElementAndChildren_Parms), Z_Construct_UFunction_UComposureBlueprintLibrary_DeleteComposureElementAndChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_DeleteComposureElementAndChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_DeleteComposureElementAndChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_DeleteComposureElementAndChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureBlueprintLibrary_DeleteComposureElementAndChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureBlueprintLibrary_DeleteComposureElementAndChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposureBlueprintLibrary_GetComposureElement_Statics
	{
		struct ComposureBlueprintLibrary_eventGetComposureElement_Parms
		{
			FName ElementName;
			ACompositingElement* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElementName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ElementName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_GetComposureElement_Statics::NewProp_ElementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_GetComposureElement_Statics::NewProp_ElementName = { "ElementName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventGetComposureElement_Parms, ElementName), METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_GetComposureElement_Statics::NewProp_ElementName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_GetComposureElement_Statics::NewProp_ElementName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_GetComposureElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventGetComposureElement_Parms, ReturnValue), Z_Construct_UClass_ACompositingElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposureBlueprintLibrary_GetComposureElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_GetComposureElement_Statics::NewProp_ElementName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_GetComposureElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_GetComposureElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Manager" },
		{ "Comment", "/**\n\x09 * Get a specific composure element \n\x09 * @param ElementName              The name of the composure element that we want to get.\n\x09 * @return CompositingElement      The composure element found. It can be nullptr if there is no composure element matches the input name.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ComposureBlueprintLibrary.h" },
		{ "ToolTip", "Get a specific composure element\n@param ElementName              The name of the composure element that we want to get.\n@return CompositingElement      The composure element found. It can be nullptr if there is no composure element matches the input name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureBlueprintLibrary_GetComposureElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureBlueprintLibrary, nullptr, "GetComposureElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposureBlueprintLibrary_GetComposureElement_Statics::ComposureBlueprintLibrary_eventGetComposureElement_Parms), Z_Construct_UFunction_UComposureBlueprintLibrary_GetComposureElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_GetComposureElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_GetComposureElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_GetComposureElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureBlueprintLibrary_GetComposureElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureBlueprintLibrary_GetComposureElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct ComposureBlueprintLibrary_eventGetCroppingUVTransformationMatrixFromPostMoveSettings_Parms
		{
			FComposurePostMoveSettings PostMoveSettings;
			float AspectRatio;
			FMatrix CropingUVTransformationMatrix;
			FMatrix UncropingUVTransformationMatrix;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostMoveSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostMoveSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CropingUVTransformationMatrix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UncropingUVTransformationMatrix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::NewProp_PostMoveSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::NewProp_PostMoveSettings = { "PostMoveSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventGetCroppingUVTransformationMatrixFromPostMoveSettings_Parms, PostMoveSettings), Z_Construct_UScriptStruct_FComposurePostMoveSettings, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::NewProp_PostMoveSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::NewProp_PostMoveSettings_MetaData)) }; // 116770944
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventGetCroppingUVTransformationMatrixFromPostMoveSettings_Parms, AspectRatio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::NewProp_CropingUVTransformationMatrix = { "CropingUVTransformationMatrix", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventGetCroppingUVTransformationMatrixFromPostMoveSettings_Parms, CropingUVTransformationMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::NewProp_UncropingUVTransformationMatrix = { "UncropingUVTransformationMatrix", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventGetCroppingUVTransformationMatrixFromPostMoveSettings_Parms, UncropingUVTransformationMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::NewProp_PostMoveSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::NewProp_AspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::NewProp_CropingUVTransformationMatrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::NewProp_UncropingUVTransformationMatrix,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "Comment", "/**\n\x09 * Returns UV transformation matrix and its inversed to crop.\n\x09 * @param AspectRatio The desired aspect ratio.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ComposureBlueprintLibrary.h" },
		{ "ToolTip", "Returns UV transformation matrix and its inversed to crop.\n@param AspectRatio The desired aspect ratio." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureBlueprintLibrary, nullptr, "GetCroppingUVTransformationMatrixFromPostMoveSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::ComposureBlueprintLibrary_eventGetCroppingUVTransformationMatrixFromPostMoveSettings_Parms), Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposureBlueprintLibrary_GetPlayerDisplayGamma_Statics
	{
		struct ComposureBlueprintLibrary_eventGetPlayerDisplayGamma_Parms
		{
			const APlayerCameraManager* PlayerCameraManager;
			float DisplayGamma;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCameraManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCameraManager;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplayGamma;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_GetPlayerDisplayGamma_Statics::NewProp_PlayerCameraManager_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_GetPlayerDisplayGamma_Statics::NewProp_PlayerCameraManager = { "PlayerCameraManager", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventGetPlayerDisplayGamma_Parms, PlayerCameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_GetPlayerDisplayGamma_Statics::NewProp_PlayerCameraManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_GetPlayerDisplayGamma_Statics::NewProp_PlayerCameraManager_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_GetPlayerDisplayGamma_Statics::NewProp_DisplayGamma = { "DisplayGamma", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventGetPlayerDisplayGamma_Parms, DisplayGamma), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposureBlueprintLibrary_GetPlayerDisplayGamma_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_GetPlayerDisplayGamma_Statics::NewProp_PlayerCameraManager,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_GetPlayerDisplayGamma_Statics::NewProp_DisplayGamma,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_GetPlayerDisplayGamma_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "Comment", "/** Returns display gamma of a given player camera manager, or 0 if no scene viewport attached. */" },
		{ "ModuleRelativePath", "Classes/ComposureBlueprintLibrary.h" },
		{ "ToolTip", "Returns display gamma of a given player camera manager, or 0 if no scene viewport attached." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureBlueprintLibrary_GetPlayerDisplayGamma_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureBlueprintLibrary, nullptr, "GetPlayerDisplayGamma", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposureBlueprintLibrary_GetPlayerDisplayGamma_Statics::ComposureBlueprintLibrary_eventGetPlayerDisplayGamma_Parms), Z_Construct_UFunction_UComposureBlueprintLibrary_GetPlayerDisplayGamma_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_GetPlayerDisplayGamma_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_GetPlayerDisplayGamma_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_GetPlayerDisplayGamma_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureBlueprintLibrary_GetPlayerDisplayGamma()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureBlueprintLibrary_GetPlayerDisplayGamma_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics
	{
		struct FMatrix
		{
			FPlane XPlane;
			FPlane YPlane;
			FPlane ZPlane;
			FPlane WPlane;
		};

		struct ComposureBlueprintLibrary_eventGetProjectionMatrixFromPostMoveSettings_Parms
		{
			FComposurePostMoveSettings PostMoveSettings;
			float HorizontalFOVAngle;
			float AspectRatio;
			FMatrix ProjectionMatrix;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostMoveSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PostMoveSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalFOVAngle;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionMatrix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::NewProp_PostMoveSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::NewProp_PostMoveSettings = { "PostMoveSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventGetProjectionMatrixFromPostMoveSettings_Parms, PostMoveSettings), Z_Construct_UScriptStruct_FComposurePostMoveSettings, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::NewProp_PostMoveSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::NewProp_PostMoveSettings_MetaData)) }; // 116770944
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::NewProp_HorizontalFOVAngle = { "HorizontalFOVAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventGetProjectionMatrixFromPostMoveSettings_Parms, HorizontalFOVAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventGetProjectionMatrixFromPostMoveSettings_Parms, AspectRatio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::NewProp_ProjectionMatrix = { "ProjectionMatrix", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventGetProjectionMatrixFromPostMoveSettings_Parms, ProjectionMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::NewProp_PostMoveSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::NewProp_HorizontalFOVAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::NewProp_AspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::NewProp_ProjectionMatrix,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "Comment", "/** \n\x09 * Returns a non-centered projection matrix.\n\x09 * @param HorizontalFOVAngle The desired horizontal FOV in degrees.\n\x09 * @param AspectRatio The desired aspect ratio.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ComposureBlueprintLibrary.h" },
		{ "ToolTip", "Returns a non-centered projection matrix.\n@param HorizontalFOVAngle The desired horizontal FOV in degrees.\n@param AspectRatio The desired aspect ratio." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureBlueprintLibrary, nullptr, "GetProjectionMatrixFromPostMoveSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::ComposureBlueprintLibrary_eventGetProjectionMatrixFromPostMoveSettings_Parms), Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration_Statics
	{
		struct ComposureBlueprintLibrary_eventGetRedGreenUVFactorsFromChromaticAberration_Parms
		{
			float ChromaticAberrationAmount;
			FVector2D RedGreenUVFactors;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChromaticAberrationAmount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RedGreenUVFactors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration_Statics::NewProp_ChromaticAberrationAmount = { "ChromaticAberrationAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventGetRedGreenUVFactorsFromChromaticAberration_Parms, ChromaticAberrationAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration_Statics::NewProp_RedGreenUVFactors = { "RedGreenUVFactors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventGetRedGreenUVFactorsFromChromaticAberration_Parms, RedGreenUVFactors), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration_Statics::NewProp_ChromaticAberrationAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration_Statics::NewProp_RedGreenUVFactors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "Comment", "/** Returns the red and green channel factors from percentage of chromatic aberration. */" },
		{ "ModuleRelativePath", "Classes/ComposureBlueprintLibrary.h" },
		{ "ToolTip", "Returns the red and green channel factors from percentage of chromatic aberration." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureBlueprintLibrary, nullptr, "GetRedGreenUVFactorsFromChromaticAberration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration_Statics::ComposureBlueprintLibrary_eventGetRedGreenUVFactorsFromChromaticAberration_Parms), Z_Construct_UFunction_UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Statics
	{
		struct ComposureBlueprintLibrary_eventInvertUVDisplacementMapEncodingParameters_Parms
		{
			FVector2D In;
			FVector2D Out;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_In_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_In;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Out;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Statics::NewProp_In_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Statics::NewProp_In = { "In", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventInvertUVDisplacementMapEncodingParameters_Parms, In), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Statics::NewProp_In_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Statics::NewProp_In_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Statics::NewProp_Out = { "Out", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventInvertUVDisplacementMapEncodingParameters_Parms, Out), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Statics::NewProp_In,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Statics::NewProp_Out,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "Comment", "/**\n\x09 * Converts displacement encoding parameters to decoding parameters.\n\x09 * Can also be used to convert displacement decoding parameters to encoding parameters.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ComposureBlueprintLibrary.h" },
		{ "ToolTip", "Converts displacement encoding parameters to decoding parameters.\nCan also be used to convert displacement decoding parameters to encoding parameters." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureBlueprintLibrary, nullptr, "InvertUVDisplacementMapEncodingParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Statics::ComposureBlueprintLibrary_eventInvertUVDisplacementMapEncodingParameters_Parms), Z_Construct_UFunction_UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposureBlueprintLibrary_IsComposureElementDrawing_Statics
	{
		struct ComposureBlueprintLibrary_eventIsComposureElementDrawing_Parms
		{
			ACompositingElement* CompElement;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CompElement;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_IsComposureElementDrawing_Statics::NewProp_CompElement = { "CompElement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventIsComposureElementDrawing_Parms, CompElement), Z_Construct_UClass_ACompositingElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UComposureBlueprintLibrary_IsComposureElementDrawing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComposureBlueprintLibrary_eventIsComposureElementDrawing_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_IsComposureElementDrawing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ComposureBlueprintLibrary_eventIsComposureElementDrawing_Parms), &Z_Construct_UFunction_UComposureBlueprintLibrary_IsComposureElementDrawing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposureBlueprintLibrary_IsComposureElementDrawing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_IsComposureElementDrawing_Statics::NewProp_CompElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_IsComposureElementDrawing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_IsComposureElementDrawing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Manager" },
		{ "Comment", "/**\n\x09 * Determines if the specified element is being rendered by the hidden compositing viewport.\n\x09 * @param  CompElement\x09The element actor you're querying for\n\x09 * @return True if the game-thread is in the middle of queuing the specified element.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ComposureBlueprintLibrary.h" },
		{ "ToolTip", "Determines if the specified element is being rendered by the hidden compositing viewport.\n@param  CompElement  The element actor you're querying for\n@return True if the game-thread is in the middle of queuing the specified element." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureBlueprintLibrary_IsComposureElementDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureBlueprintLibrary, nullptr, "IsComposureElementDrawing", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposureBlueprintLibrary_IsComposureElementDrawing_Statics::ComposureBlueprintLibrary_eventIsComposureElementDrawing_Parms), Z_Construct_UFunction_UComposureBlueprintLibrary_IsComposureElementDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_IsComposureElementDrawing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_IsComposureElementDrawing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_IsComposureElementDrawing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureBlueprintLibrary_IsComposureElementDrawing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureBlueprintLibrary_IsComposureElementDrawing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposureBlueprintLibrary_RefreshComposureElementList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_RefreshComposureElementList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Manager" },
		{ "Comment", "/**\n\x09 * Re-queries the scene for element actors and rebuilds the authoritative list used by the editor.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ComposureBlueprintLibrary.h" },
		{ "ToolTip", "Re-queries the scene for element actors and rebuilds the authoritative list used by the editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureBlueprintLibrary_RefreshComposureElementList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureBlueprintLibrary, nullptr, "RefreshComposureElementList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_RefreshComposureElementList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_RefreshComposureElementList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureBlueprintLibrary_RefreshComposureElementList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureBlueprintLibrary_RefreshComposureElementList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics
	{
		struct ComposureBlueprintLibrary_eventRenameComposureElement_Parms
		{
			FName OriginalElementName;
			FName NewElementName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalElementName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OriginalElementName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewElementName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewElementName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::NewProp_OriginalElementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::NewProp_OriginalElementName = { "OriginalElementName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventRenameComposureElement_Parms, OriginalElementName), METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::NewProp_OriginalElementName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::NewProp_OriginalElementName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::NewProp_NewElementName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::NewProp_NewElementName = { "NewElementName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventRenameComposureElement_Parms, NewElementName), METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::NewProp_NewElementName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::NewProp_NewElementName_MetaData)) };
	void Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ComposureBlueprintLibrary_eventRenameComposureElement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ComposureBlueprintLibrary_eventRenameComposureElement_Parms), &Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::NewProp_OriginalElementName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::NewProp_NewElementName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Manager" },
		{ "Comment", "/**\n\x09 * Rename a specific composure element\n\x09 * @param OriginalElementName       The name of the composure element that we want to rename.\n\x09 * @param NewElementName            The new name for the composure element.\n\x09 * @return bool                     Whether the renaming operation is successful or not.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/ComposureBlueprintLibrary.h" },
		{ "ToolTip", "Rename a specific composure element\n@param OriginalElementName       The name of the composure element that we want to rename.\n@param NewElementName            The new name for the composure element.\n@return bool                     Whether the renaming operation is successful or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureBlueprintLibrary, nullptr, "RenameComposureElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::ComposureBlueprintLibrary_eventRenameComposureElement_Parms), Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposureBlueprintLibrary_RequestRedrawComposureViewport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_RequestRedrawComposureViewport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Manager" },
		{ "Comment", "/**\n\x09 * Request redrawing the compositing editor viewport  if it is valid.\n\x09 * If it is invalid, this function will create a new view port client. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/ComposureBlueprintLibrary.h" },
		{ "ToolTip", "Request redrawing the compositing editor viewport  if it is valid.\nIf it is invalid, this function will create a new view port client." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureBlueprintLibrary_RequestRedrawComposureViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureBlueprintLibrary, nullptr, "RequestRedrawComposureViewport", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_RequestRedrawComposureViewport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_RequestRedrawComposureViewport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureBlueprintLibrary_RequestRedrawComposureViewport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureBlueprintLibrary_RequestRedrawComposureViewport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Statics
	{
		struct ComposureBlueprintLibrary_eventSetUVMapSettingsToMaterialParameters_Parms
		{
			FComposureUVMapSettings UVMapSettings;
			UMaterialInstanceDynamic* Material;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVMapSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UVMapSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Statics::NewProp_UVMapSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Statics::NewProp_UVMapSettings = { "UVMapSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventSetUVMapSettingsToMaterialParameters_Parms, UVMapSettings), Z_Construct_UScriptStruct_FComposureUVMapSettings, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Statics::NewProp_UVMapSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Statics::NewProp_UVMapSettings_MetaData)) }; // 3070718327
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ComposureBlueprintLibrary_eventSetUVMapSettingsToMaterialParameters_Parms, Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Statics::NewProp_UVMapSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "Comment", "/** Sets parameters of a material that uses Composure's MF_UVMap_SampleLocation material function. */" },
		{ "ModuleRelativePath", "Classes/ComposureBlueprintLibrary.h" },
		{ "ToolTip", "Sets parameters of a material that uses Composure's MF_UVMap_SampleLocation material function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UComposureBlueprintLibrary, nullptr, "SetUVMapSettingsToMaterialParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Statics::ComposureBlueprintLibrary_eventSetUVMapSettingsToMaterialParameters_Parms), Z_Construct_UFunction_UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposureBlueprintLibrary);
	UClass* Z_Construct_UClass_UComposureBlueprintLibrary_NoRegister()
	{
		return UComposureBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UComposureBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposureBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UComposureBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UComposureBlueprintLibrary_AttachComposureElement, "AttachComposureElement" }, // 3245889661
		{ &Z_Construct_UFunction_UComposureBlueprintLibrary_CopyCameraSettingsToSceneCapture, "CopyCameraSettingsToSceneCapture" }, // 31037503
		{ &Z_Construct_UFunction_UComposureBlueprintLibrary_CreateComposureElement, "CreateComposureElement" }, // 1991148252
		{ &Z_Construct_UFunction_UComposureBlueprintLibrary_CreatePlayerCompositingTarget, "CreatePlayerCompositingTarget" }, // 3905452788
		{ &Z_Construct_UFunction_UComposureBlueprintLibrary_DeleteComposureElementAndChildren, "DeleteComposureElementAndChildren" }, // 1518799752
		{ &Z_Construct_UFunction_UComposureBlueprintLibrary_GetComposureElement, "GetComposureElement" }, // 413586689
		{ &Z_Construct_UFunction_UComposureBlueprintLibrary_GetCroppingUVTransformationMatrixFromPostMoveSettings, "GetCroppingUVTransformationMatrixFromPostMoveSettings" }, // 2453456545
		{ &Z_Construct_UFunction_UComposureBlueprintLibrary_GetPlayerDisplayGamma, "GetPlayerDisplayGamma" }, // 2138923279
		{ &Z_Construct_UFunction_UComposureBlueprintLibrary_GetProjectionMatrixFromPostMoveSettings, "GetProjectionMatrixFromPostMoveSettings" }, // 2356352269
		{ &Z_Construct_UFunction_UComposureBlueprintLibrary_GetRedGreenUVFactorsFromChromaticAberration, "GetRedGreenUVFactorsFromChromaticAberration" }, // 3477109967
		{ &Z_Construct_UFunction_UComposureBlueprintLibrary_InvertUVDisplacementMapEncodingParameters, "InvertUVDisplacementMapEncodingParameters" }, // 261050745
		{ &Z_Construct_UFunction_UComposureBlueprintLibrary_IsComposureElementDrawing, "IsComposureElementDrawing" }, // 457996179
		{ &Z_Construct_UFunction_UComposureBlueprintLibrary_RefreshComposureElementList, "RefreshComposureElementList" }, // 291480772
		{ &Z_Construct_UFunction_UComposureBlueprintLibrary_RenameComposureElement, "RenameComposureElement" }, // 1513210059
		{ &Z_Construct_UFunction_UComposureBlueprintLibrary_RequestRedrawComposureViewport, "RequestRedrawComposureViewport" }, // 3897322773
		{ &Z_Construct_UFunction_UComposureBlueprintLibrary_SetUVMapSettingsToMaterialParameters, "SetUVMapSettingsToMaterialParameters" }, // 3123903593
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposureBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ComposureBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Classes/ComposureBlueprintLibrary.h" },
		{ "ScriptName", "ComposureLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposureBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposureBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposureBlueprintLibrary_Statics::ClassParams = {
		&UComposureBlueprintLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComposureBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposureBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposureBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UComposureBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposureBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UComposureBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposureBlueprintLibrary.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UComposureBlueprintLibrary>()
	{
		return UComposureBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposureBlueprintLibrary);
	UComposureBlueprintLibrary::~UComposureBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComposureBlueprintLibrary, UComposureBlueprintLibrary::StaticClass, TEXT("UComposureBlueprintLibrary"), &Z_Registration_Info_UClass_UComposureBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposureBlueprintLibrary), 410667440U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_1758246004(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_ComposureBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
