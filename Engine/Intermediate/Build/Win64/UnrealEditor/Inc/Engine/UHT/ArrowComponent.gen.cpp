// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "../../Source/Runtime/Engine/Classes/Components/PrimitiveComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrowComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteCategoryInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UArrowComponent::execSetUseInEditorScaling)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseInEditorScaling(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArrowComponent::execSetTreatAsASprite)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTreatAsASprite(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArrowComponent::execSetIsScreenSizeScaled)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsScreenSizeScaled(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArrowComponent::execSetScreenSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewScreenSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScreenSize(Z_Param_NewScreenSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArrowComponent::execSetArrowLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArrowLength(Z_Param_NewLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArrowComponent::execSetArrowSize)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArrowSize(Z_Param_NewSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArrowComponent::execSetArrowFColor)
	{
		P_GET_STRUCT(FColor,Z_Param_NewColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArrowFColor(Z_Param_NewColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UArrowComponent::execSetArrowColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetArrowColor(Z_Param_NewColor);
		P_NATIVE_END;
	}
	void UArrowComponent::StaticRegisterNativesUArrowComponent()
	{
		UClass* Class = UArrowComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetArrowColor", &UArrowComponent::execSetArrowColor },
			{ "SetArrowFColor", &UArrowComponent::execSetArrowFColor },
			{ "SetArrowLength", &UArrowComponent::execSetArrowLength },
			{ "SetArrowSize", &UArrowComponent::execSetArrowSize },
			{ "SetIsScreenSizeScaled", &UArrowComponent::execSetIsScreenSizeScaled },
			{ "SetScreenSize", &UArrowComponent::execSetScreenSize },
			{ "SetTreatAsASprite", &UArrowComponent::execSetTreatAsASprite },
			{ "SetUseInEditorScaling", &UArrowComponent::execSetUseInEditorScaling },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics
	{
		struct ArrowComponent_eventSetArrowColor_Parms
		{
			FLinearColor NewColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArrowComponent_eventSetArrowColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Arrow" },
		{ "Comment", "/** Updates the arrow's colour, and tells it to refresh */" },
		{ "DisplayName", "Set Arrow Color (Linear Color)" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Updates the arrow's colour, and tells it to refresh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrowComponent, nullptr, "SetArrowColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::ArrowComponent_eventSetArrowColor_Parms), Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArrowComponent_SetArrowColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArrowComponent_SetArrowColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics
	{
		struct ArrowComponent_eventSetArrowFColor_Parms
		{
			FColor NewColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArrowComponent_eventSetArrowFColor_Parms, NewColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrowComponent, nullptr, "SetArrowFColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::ArrowComponent_eventSetArrowFColor_Parms), Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArrowComponent_SetArrowFColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArrowComponent_SetArrowFColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics
	{
		struct ArrowComponent_eventSetArrowLength_Parms
		{
			float NewLength;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::NewProp_NewLength = { "NewLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArrowComponent_eventSetArrowLength_Parms, NewLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::NewProp_NewLength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrowComponent, nullptr, "SetArrowLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::ArrowComponent_eventSetArrowLength_Parms), Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArrowComponent_SetArrowLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArrowComponent_SetArrowLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics
	{
		struct ArrowComponent_eventSetArrowSize_Parms
		{
			float NewSize;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::NewProp_NewSize = { "NewSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArrowComponent_eventSetArrowSize_Parms, NewSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::NewProp_NewSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrowComponent, nullptr, "SetArrowSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::ArrowComponent_eventSetArrowSize_Parms), Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArrowComponent_SetArrowSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArrowComponent_SetArrowSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics
	{
		struct ArrowComponent_eventSetIsScreenSizeScaled_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((ArrowComponent_eventSetIsScreenSizeScaled_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ArrowComponent_eventSetIsScreenSizeScaled_Parms), &Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrowComponent, nullptr, "SetIsScreenSizeScaled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::ArrowComponent_eventSetIsScreenSizeScaled_Parms), Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics
	{
		struct ArrowComponent_eventSetScreenSize_Parms
		{
			float NewScreenSize;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewScreenSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::NewProp_NewScreenSize = { "NewScreenSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ArrowComponent_eventSetScreenSize_Parms, NewScreenSize), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::NewProp_NewScreenSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrowComponent, nullptr, "SetScreenSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::ArrowComponent_eventSetScreenSize_Parms), Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArrowComponent_SetScreenSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArrowComponent_SetScreenSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics
	{
		struct ArrowComponent_eventSetTreatAsASprite_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((ArrowComponent_eventSetTreatAsASprite_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ArrowComponent_eventSetTreatAsASprite_Parms), &Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrowComponent, nullptr, "SetTreatAsASprite", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::ArrowComponent_eventSetTreatAsASprite_Parms), Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics
	{
		struct ArrowComponent_eventSetUseInEditorScaling_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((ArrowComponent_eventSetUseInEditorScaling_Parms*)Obj)->bNewValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ArrowComponent_eventSetUseInEditorScaling_Parms), &Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "ArrowComponent" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UArrowComponent, nullptr, "SetUseInEditorScaling", nullptr, nullptr, sizeof(Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::ArrowComponent_eventSetUseInEditorScaling_Parms), Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UArrowComponent);
	UClass* Z_Construct_UClass_UArrowComponent_NoRegister()
	{
		return UArrowComponent::StaticClass();
	}
	struct Z_Construct_UClass_UArrowComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrowColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrowSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrowLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsScreenSizeScaled_MetaData[];
#endif
		static void NewProp_bIsScreenSizeScaled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsScreenSizeScaled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTreatAsASprite_MetaData[];
#endif
		static void NewProp_bTreatAsASprite_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTreatAsASprite;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteCategoryName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SpriteCategoryName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpriteInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLightAttachment_MetaData[];
#endif
		static void NewProp_bLightAttachment_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLightAttachment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInEditorScaling_MetaData[];
#endif
		static void NewProp_bUseInEditorScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInEditorScaling;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UArrowComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UArrowComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UArrowComponent_SetArrowColor, "SetArrowColor" }, // 223821930
		{ &Z_Construct_UFunction_UArrowComponent_SetArrowFColor, "SetArrowFColor" }, // 1891737055
		{ &Z_Construct_UFunction_UArrowComponent_SetArrowLength, "SetArrowLength" }, // 276456376
		{ &Z_Construct_UFunction_UArrowComponent_SetArrowSize, "SetArrowSize" }, // 3437837418
		{ &Z_Construct_UFunction_UArrowComponent_SetIsScreenSizeScaled, "SetIsScreenSizeScaled" }, // 3881733639
		{ &Z_Construct_UFunction_UArrowComponent_SetScreenSize, "SetScreenSize" }, // 2888668882
		{ &Z_Construct_UFunction_UArrowComponent_SetTreatAsASprite, "SetTreatAsASprite" }, // 2008000907
		{ &Z_Construct_UFunction_UArrowComponent_SetUseInEditorScaling, "SetUseInEditorScaling" }, // 3656103960
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/** \n * A simple arrow rendered using lines. Useful for indicating which way an object is facing.\n */" },
		{ "HideCategories", "Object LOD Physics Lighting TextureStreaming Activation Components|Activation Collision Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Components/ArrowComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "A simple arrow rendered using lines. Useful for indicating which way an object is facing." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowColor_MetaData[] = {
		{ "BlueprintSetter", "SetArrowFColor" },
		{ "Category", "ArrowComponent" },
		{ "Comment", "/** Color to draw arrow */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Color to draw arrow" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowColor = { "ArrowColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArrowComponent, ArrowColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowSize_MetaData[] = {
		{ "BlueprintSetter", "SetArrowSize" },
		{ "Category", "ArrowComponent" },
		{ "Comment", "/** Relative size to scale drawn arrow by */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Relative size to scale drawn arrow by" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowSize = { "ArrowSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArrowComponent, ArrowSize), METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowLength_MetaData[] = {
		{ "BlueprintSetter", "SetArrowLength" },
		{ "Category", "ArrowComponent" },
		{ "Comment", "/** Total length of drawn arrow including head */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Total length of drawn arrow including head" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowLength = { "ArrowLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArrowComponent, ArrowLength), METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "BlueprintSetter", "SetScreenSize" },
		{ "Category", "ArrowComponent" },
		{ "Comment", "/** The size on screen to limit this arrow to (in screen space) */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "The size on screen to limit this arrow to (in screen space)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArrowComponent, ScreenSize), METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::NewProp_ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::NewProp_bIsScreenSizeScaled_MetaData[] = {
		{ "BlueprintSetter", "SetIsScreenSizeScaled" },
		{ "Category", "ArrowComponent" },
		{ "Comment", "/** Set to limit the screen size of this arrow */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Set to limit the screen size of this arrow" },
	};
#endif
	void Z_Construct_UClass_UArrowComponent_Statics::NewProp_bIsScreenSizeScaled_SetBit(void* Obj)
	{
		((UArrowComponent*)Obj)->bIsScreenSizeScaled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_bIsScreenSizeScaled = { "bIsScreenSizeScaled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UArrowComponent), &Z_Construct_UClass_UArrowComponent_Statics::NewProp_bIsScreenSizeScaled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::NewProp_bIsScreenSizeScaled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::NewProp_bIsScreenSizeScaled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::NewProp_bTreatAsASprite_MetaData[] = {
		{ "BlueprintSetter", "SetTreatAsASprite" },
		{ "Category", "ArrowComponent" },
		{ "Comment", "/** If true, don't show the arrow when EngineShowFlags.BillboardSprites is disabled. */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "If true, don't show the arrow when EngineShowFlags.BillboardSprites is disabled." },
	};
#endif
	void Z_Construct_UClass_UArrowComponent_Statics::NewProp_bTreatAsASprite_SetBit(void* Obj)
	{
		((UArrowComponent*)Obj)->bTreatAsASprite = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_bTreatAsASprite = { "bTreatAsASprite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UArrowComponent), &Z_Construct_UClass_UArrowComponent_Statics::NewProp_bTreatAsASprite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::NewProp_bTreatAsASprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::NewProp_bTreatAsASprite_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteCategoryName_MetaData[] = {
		{ "Comment", "/** Sprite category that the arrow component belongs to, if being treated as a sprite. Value serves as a key into the localization file. */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Sprite category that the arrow component belongs to, if being treated as a sprite. Value serves as a key into the localization file." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteCategoryName = { "SpriteCategoryName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArrowComponent, SpriteCategoryName_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteCategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteCategoryName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteInfo_MetaData[] = {
		{ "Comment", "/** Sprite category information regarding the arrow component, if being treated as a sprite. */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Sprite category information regarding the arrow component, if being treated as a sprite." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteInfo = { "SpriteInfo", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UArrowComponent, SpriteInfo), Z_Construct_UScriptStruct_FSpriteCategoryInfo, METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteInfo_MetaData)) }; // 1549126214
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::NewProp_bLightAttachment_MetaData[] = {
		{ "Comment", "/** If true, this arrow component is attached to a light actor */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "If true, this arrow component is attached to a light actor" },
	};
#endif
	void Z_Construct_UClass_UArrowComponent_Statics::NewProp_bLightAttachment_SetBit(void* Obj)
	{
		((UArrowComponent*)Obj)->bLightAttachment = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_bLightAttachment = { "bLightAttachment", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UArrowComponent), &Z_Construct_UClass_UArrowComponent_Statics::NewProp_bLightAttachment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::NewProp_bLightAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::NewProp_bLightAttachment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UArrowComponent_Statics::NewProp_bUseInEditorScaling_MetaData[] = {
		{ "BlueprintSetter", "SetUseInEditorScaling" },
		{ "Category", "ArrowComponent" },
		{ "Comment", "/** Whether to use in-editor arrow scaling (i.e. to be affected by the global arrow scale) */" },
		{ "ModuleRelativePath", "Classes/Components/ArrowComponent.h" },
		{ "ToolTip", "Whether to use in-editor arrow scaling (i.e. to be affected by the global arrow scale)" },
	};
#endif
	void Z_Construct_UClass_UArrowComponent_Statics::NewProp_bUseInEditorScaling_SetBit(void* Obj)
	{
		((UArrowComponent*)Obj)->bUseInEditorScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UArrowComponent_Statics::NewProp_bUseInEditorScaling = { "bUseInEditorScaling", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UArrowComponent), &Z_Construct_UClass_UArrowComponent_Statics::NewProp_bUseInEditorScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::NewProp_bUseInEditorScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::NewProp_bUseInEditorScaling_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UArrowComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_ArrowLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_ScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_bIsScreenSizeScaled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_bTreatAsASprite,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteCategoryName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_SpriteInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_bLightAttachment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UArrowComponent_Statics::NewProp_bUseInEditorScaling,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UArrowComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UArrowComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UArrowComponent_Statics::ClassParams = {
		&UArrowComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UArrowComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UArrowComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UArrowComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UArrowComponent()
	{
		if (!Z_Registration_Info_UClass_UArrowComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UArrowComponent.OuterSingleton, Z_Construct_UClass_UArrowComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UArrowComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UArrowComponent>()
	{
		return UArrowComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UArrowComponent);
	UArrowComponent::~UArrowComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UArrowComponent, UArrowComponent::StaticClass, TEXT("UArrowComponent"), &Z_Registration_Info_UClass_UArrowComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UArrowComponent), 2410401672U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_3697557249(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ArrowComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
