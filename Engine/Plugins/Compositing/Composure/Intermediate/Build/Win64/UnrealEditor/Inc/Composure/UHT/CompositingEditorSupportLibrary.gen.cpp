// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/EditorSupport/CompositingEditorSupportLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositingEditorSupportLibrary() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UCompImageColorPickerInterface_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingPickerAsyncTask();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingPickerAsyncTask_NoRegister();
	COMPOSURE_API UFunction* Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics
	{
		struct _Script_Composure_eventOnPixelPicked_Parms
		{
			FVector2D PickedUV;
			FLinearColor SampledColor;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickedUV_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PickedUV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampledColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SampledColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics::NewProp_PickedUV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics::NewProp_PickedUV = { "PickedUV", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Composure_eventOnPixelPicked_Parms, PickedUV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics::NewProp_PickedUV_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics::NewProp_PickedUV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics::NewProp_SampledColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics::NewProp_SampledColor = { "SampledColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Composure_eventOnPixelPicked_Parms, SampledColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics::NewProp_SampledColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics::NewProp_SampledColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics::NewProp_PickedUV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics::NewProp_SampledColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* UCompositingPickerAsyncTask\n *****************************************************************************/" },
		{ "ModuleRelativePath", "Private/EditorSupport/CompositingEditorSupportLibrary.h" },
		{ "ToolTip", "UCompositingPickerAsyncTask" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Composure, nullptr, "OnPixelPicked__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics::_Script_Composure_eventOnPixelPicked_Parms), Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPixelPicked_DelegateWrapper(const FMulticastScriptDelegate& OnPixelPicked, FVector2D const& PickedUV, FLinearColor const& SampledColor)
{
	struct _Script_Composure_eventOnPixelPicked_Parms
	{
		FVector2D PickedUV;
		FLinearColor SampledColor;
	};
	_Script_Composure_eventOnPixelPicked_Parms Parms;
	Parms.PickedUV=PickedUV;
	Parms.SampledColor=SampledColor;
	OnPixelPicked.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCompositingPickerAsyncTask::execOpenCompositingPicker)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_PickerTarget);
		P_GET_OBJECT(UTexture,Z_Param_DisplayImage);
		P_GET_PROPERTY(FTextProperty,Z_Param_WindowTitle);
		P_GET_UBOOL(Z_Param_bAverageColorOnDrag);
		P_GET_UBOOL(Z_Param_bUseImplicitGamma);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCompositingPickerAsyncTask**)Z_Param__Result=UCompositingPickerAsyncTask::OpenCompositingPicker(Z_Param_PickerTarget,Z_Param_DisplayImage,Z_Param_WindowTitle,Z_Param_bAverageColorOnDrag,Z_Param_bUseImplicitGamma);
		P_NATIVE_END;
	}
	void UCompositingPickerAsyncTask::StaticRegisterNativesUCompositingPickerAsyncTask()
	{
		UClass* Class = UCompositingPickerAsyncTask::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenCompositingPicker", &UCompositingPickerAsyncTask::execOpenCompositingPicker },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics
	{
		struct CompositingPickerAsyncTask_eventOpenCompositingPicker_Parms
		{
			UTextureRenderTarget2D* PickerTarget;
			UTexture* DisplayImage;
			FText WindowTitle;
			bool bAverageColorOnDrag;
			bool bUseImplicitGamma;
			UCompositingPickerAsyncTask* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickerTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplayImage;
		static const UECodeGen_Private::FTextPropertyParams NewProp_WindowTitle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAverageColorOnDrag_MetaData[];
#endif
		static void NewProp_bAverageColorOnDrag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAverageColorOnDrag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseImplicitGamma_MetaData[];
#endif
		static void NewProp_bUseImplicitGamma_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseImplicitGamma;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_PickerTarget = { "PickerTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingPickerAsyncTask_eventOpenCompositingPicker_Parms, PickerTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_DisplayImage = { "DisplayImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingPickerAsyncTask_eventOpenCompositingPicker_Parms, DisplayImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_WindowTitle = { "WindowTitle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingPickerAsyncTask_eventOpenCompositingPicker_Parms, WindowTitle), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_bAverageColorOnDrag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_bAverageColorOnDrag_SetBit(void* Obj)
	{
		((CompositingPickerAsyncTask_eventOpenCompositingPicker_Parms*)Obj)->bAverageColorOnDrag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_bAverageColorOnDrag = { "bAverageColorOnDrag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CompositingPickerAsyncTask_eventOpenCompositingPicker_Parms), &Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_bAverageColorOnDrag_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_bAverageColorOnDrag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_bAverageColorOnDrag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_bUseImplicitGamma_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_bUseImplicitGamma_SetBit(void* Obj)
	{
		((CompositingPickerAsyncTask_eventOpenCompositingPicker_Parms*)Obj)->bUseImplicitGamma = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_bUseImplicitGamma = { "bUseImplicitGamma", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CompositingPickerAsyncTask_eventOpenCompositingPicker_Parms), &Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_bUseImplicitGamma_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_bUseImplicitGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_bUseImplicitGamma_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingPickerAsyncTask_eventOpenCompositingPicker_Parms, ReturnValue), Z_Construct_UClass_UCompositingPickerAsyncTask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_PickerTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_DisplayImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_WindowTitle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_bAverageColorOnDrag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_bUseImplicitGamma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Composure|Editor" },
		{ "CPP_Default_bAverageColorOnDrag", "true" },
		{ "CPP_Default_bUseImplicitGamma", "true" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Private/EditorSupport/CompositingEditorSupportLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingPickerAsyncTask, nullptr, "OpenCompositingPicker", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::CompositingPickerAsyncTask_eventOpenCompositingPicker_Parms), Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositingPickerAsyncTask);
	UClass* Z_Construct_UClass_UCompositingPickerAsyncTask_NoRegister()
	{
		return UCompositingPickerAsyncTask::StaticClass();
	}
	struct Z_Construct_UClass_UCompositingPickerAsyncTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPick_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCancel_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAccept_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAccept;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickerTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PickerTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickerDisplayImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PickerDisplayImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCompositingPickerAsyncTask_OpenCompositingPicker, "OpenCompositingPicker" }, // 3747749028
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorSupport/CompositingEditorSupportLibrary.h" },
		{ "ModuleRelativePath", "Private/EditorSupport/CompositingEditorSupportLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_OnPick_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditorSupport/CompositingEditorSupportLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_OnPick = { "OnPick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingPickerAsyncTask, OnPick), Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_OnPick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_OnPick_MetaData)) }; // 2529087496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_OnCancel_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditorSupport/CompositingEditorSupportLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_OnCancel = { "OnCancel", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingPickerAsyncTask, OnCancel), Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_OnCancel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_OnCancel_MetaData)) }; // 2529087496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_OnAccept_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditorSupport/CompositingEditorSupportLibrary.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_OnAccept = { "OnAccept", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingPickerAsyncTask, OnAccept), Z_Construct_UDelegateFunction_Composure_OnPixelPicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_OnAccept_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_OnAccept_MetaData)) }; // 2529087496
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_PickerTarget_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditorSupport/CompositingEditorSupportLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_PickerTarget = { "PickerTarget", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingPickerAsyncTask, PickerTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_PickerTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_PickerTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_PickerDisplayImage_MetaData[] = {
		{ "ModuleRelativePath", "Private/EditorSupport/CompositingEditorSupportLibrary.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_PickerDisplayImage = { "PickerDisplayImage", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingPickerAsyncTask, PickerDisplayImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_PickerDisplayImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_PickerDisplayImage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_OnPick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_OnCancel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_OnAccept,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_PickerTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::NewProp_PickerDisplayImage,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCompImageColorPickerInterface_NoRegister, (int32)VTABLE_OFFSET(UCompositingPickerAsyncTask, ICompImageColorPickerInterface), false },  // 2773550083
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositingPickerAsyncTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::ClassParams = {
		&UCompositingPickerAsyncTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositingPickerAsyncTask()
	{
		if (!Z_Registration_Info_UClass_UCompositingPickerAsyncTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositingPickerAsyncTask.OuterSingleton, Z_Construct_UClass_UCompositingPickerAsyncTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositingPickerAsyncTask.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UCompositingPickerAsyncTask>()
	{
		return UCompositingPickerAsyncTask::StaticClass();
	}
	UCompositingPickerAsyncTask::UCompositingPickerAsyncTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositingPickerAsyncTask);
	UCompositingPickerAsyncTask::~UCompositingPickerAsyncTask() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCompositingPickerAsyncTask, UCompositingPickerAsyncTask::StaticClass, TEXT("UCompositingPickerAsyncTask"), &Z_Registration_Info_UClass_UCompositingPickerAsyncTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositingPickerAsyncTask), 328584669U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_1444793217(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_EditorSupport_CompositingEditorSupportLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
