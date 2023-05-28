// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/RectLightComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRectLightComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULocalLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_URectLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_URectLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(URectLightComponent::execSetBarnDoorLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBarnDoorLength(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URectLightComponent::execSetBarnDoorAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBarnDoorAngle(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URectLightComponent::execSetSourceHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSourceHeight(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URectLightComponent::execSetSourceWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSourceWidth(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URectLightComponent::execSetSourceTexture)
	{
		P_GET_OBJECT(UTexture,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSourceTexture(Z_Param_NewValue);
		P_NATIVE_END;
	}
	void URectLightComponent::StaticRegisterNativesURectLightComponent()
	{
		UClass* Class = URectLightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBarnDoorAngle", &URectLightComponent::execSetBarnDoorAngle },
			{ "SetBarnDoorLength", &URectLightComponent::execSetBarnDoorLength },
			{ "SetSourceHeight", &URectLightComponent::execSetSourceHeight },
			{ "SetSourceTexture", &URectLightComponent::execSetSourceTexture },
			{ "SetSourceWidth", &URectLightComponent::execSetSourceWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics
	{
		struct RectLightComponent_eventSetBarnDoorAngle_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RectLightComponent_eventSetBarnDoorAngle_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URectLightComponent, nullptr, "SetBarnDoorAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::RectLightComponent_eventSetBarnDoorAngle_Parms), Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics
	{
		struct RectLightComponent_eventSetBarnDoorLength_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RectLightComponent_eventSetBarnDoorLength_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URectLightComponent, nullptr, "SetBarnDoorLength", nullptr, nullptr, sizeof(Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::RectLightComponent_eventSetBarnDoorLength_Parms), Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics
	{
		struct RectLightComponent_eventSetSourceHeight_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RectLightComponent_eventSetSourceHeight_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URectLightComponent, nullptr, "SetSourceHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::RectLightComponent_eventSetSourceHeight_Parms), Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URectLightComponent_SetSourceHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URectLightComponent_SetSourceHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics
	{
		struct RectLightComponent_eventSetSourceTexture_Parms
		{
			UTexture* NewValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RectLightComponent_eventSetSourceTexture_Parms, NewValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URectLightComponent, nullptr, "SetSourceTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::RectLightComponent_eventSetSourceTexture_Parms), Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URectLightComponent_SetSourceTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URectLightComponent_SetSourceTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics
	{
		struct RectLightComponent_eventSetSourceWidth_Parms
		{
			float NewValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RectLightComponent_eventSetSourceWidth_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URectLightComponent, nullptr, "SetSourceWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::RectLightComponent_eventSetSourceWidth_Parms), Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URectLightComponent_SetSourceWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URectLightComponent_SetSourceWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URectLightComponent);
	UClass* Z_Construct_UClass_URectLightComponent_NoRegister()
	{
		return URectLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_URectLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SourceHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarnDoorAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BarnDoorAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarnDoorLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BarnDoorLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URectLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalLightComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URectLightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URectLightComponent_SetBarnDoorAngle, "SetBarnDoorAngle" }, // 3892932076
		{ &Z_Construct_UFunction_URectLightComponent_SetBarnDoorLength, "SetBarnDoorLength" }, // 1036754669
		{ &Z_Construct_UFunction_URectLightComponent_SetSourceHeight, "SetSourceHeight" }, // 1673731161
		{ &Z_Construct_UFunction_URectLightComponent_SetSourceTexture, "SetSourceTexture" }, // 1336942861
		{ &Z_Construct_UFunction_URectLightComponent_SetSourceWidth, "SetSourceWidth" }, // 1358827548
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectLightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Lights" },
		{ "Comment", "/**\n * A light component which emits light from a rectangle.\n */" },
		{ "HideCategories", "Object LightShafts Object LightShafts Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/RectLightComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
		{ "ToolTip", "A light component which emits light from a rectangle." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceWidth_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Width of light source rect.\n\x09 * Note that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
		{ "ToolTip", "Width of light source rect.\nNote that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceWidth = { "SourceWidth", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URectLightComponent, SourceWidth), METADATA_PARAMS(Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceHeight_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Height of light source rect.\n\x09 * Note that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
		{ "ToolTip", "Height of light source rect.\nNote that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceHeight = { "SourceHeight", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URectLightComponent, SourceHeight), METADATA_PARAMS(Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09 * Angle of barn door attached to the light source rect.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
		{ "ToolTip", "Angle of barn door attached to the light source rect." },
		{ "UIMax", "90.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorAngle = { "BarnDoorAngle", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URectLightComponent, BarnDoorAngle), METADATA_PARAMS(Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorLength_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09 * Length of barn door attached to the light source rect.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
		{ "ToolTip", "Length of barn door attached to the light source rect." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorLength = { "BarnDoorLength", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URectLightComponent, BarnDoorLength), METADATA_PARAMS(Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceTexture_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Texture mapped to the light source rectangle */" },
		{ "ModuleRelativePath", "Classes/Components/RectLightComponent.h" },
		{ "ToolTip", "Texture mapped to the light source rectangle" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceTexture = { "SourceTexture", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URectLightComponent, SourceTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URectLightComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectLightComponent_Statics::NewProp_BarnDoorLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectLightComponent_Statics::NewProp_SourceTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URectLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URectLightComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URectLightComponent_Statics::ClassParams = {
		&URectLightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URectLightComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URectLightComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_URectLightComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URectLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URectLightComponent()
	{
		if (!Z_Registration_Info_UClass_URectLightComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URectLightComponent.OuterSingleton, Z_Construct_UClass_URectLightComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URectLightComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<URectLightComponent>()
	{
		return URectLightComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URectLightComponent);
	URectLightComponent::~URectLightComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URectLightComponent, URectLightComponent::StaticClass, TEXT("URectLightComponent"), &Z_Registration_Info_UClass_URectLightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URectLightComponent), 4143627083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_2211662578(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_RectLightComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
