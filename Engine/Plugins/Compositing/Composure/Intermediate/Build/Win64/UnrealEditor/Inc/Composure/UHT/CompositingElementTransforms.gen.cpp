// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompositingElements/CompositingElementTransforms.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
#include "../Public/CompositingElements/CompositingMaterialPass.h"
#include "OpenColorIOColorSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositingElementTransforms() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UAlphaTransformPass();
	COMPOSURE_API UClass* Z_Construct_UClass_UAlphaTransformPass_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementMaterialPass();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementMaterialPass_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementTransform();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingOpenColorIOPass();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingOpenColorIOPass_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingPostProcessPass();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingPostProcessPass_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingTonemapPass();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingTonemapPass_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessPassPolicy_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposureTonemapperPassPolicy_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UMultiPassChromaKeyer();
	COMPOSURE_API UClass* Z_Construct_UClass_UMultiPassChromaKeyer_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UMultiPassDespill();
	COMPOSURE_API UClass* Z_Construct_UClass_UMultiPassDespill_NoRegister();
	COMPOSURE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositingMaterial();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FColorGradingSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilmStockSettings();
	OPENCOLORIO_API UScriptStruct* Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	void UCompositingPostProcessPass::StaticRegisterNativesUCompositingPostProcessPass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositingPostProcessPass);
	UClass* Z_Construct_UClass_UCompositingPostProcessPass_NoRegister()
	{
		return UCompositingPostProcessPass::StaticClass();
	}
	struct Z_Construct_UClass_UCompositingPostProcessPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RenderScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessPasses_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PostProcessPasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessPasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PostProcessPasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositingPostProcessPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementTransform,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingPostProcessPass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CompositingElements/CompositingElementTransforms.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingPostProcessPass_Statics::NewProp_RenderScale_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCompositingPostProcessPass_Statics::NewProp_RenderScale = { "RenderScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingPostProcessPass, RenderScale), METADATA_PARAMS(Z_Construct_UClass_UCompositingPostProcessPass_Statics::NewProp_RenderScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingPostProcessPass_Statics::NewProp_RenderScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingPostProcessPass_Statics::NewProp_PostProcessPasses_Inner_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "RenderScale" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCompositingPostProcessPass_Statics::NewProp_PostProcessPasses_Inner = { "PostProcessPasses", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UComposurePostProcessPassPolicy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompositingPostProcessPass_Statics::NewProp_PostProcessPasses_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingPostProcessPass_Statics::NewProp_PostProcessPasses_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingPostProcessPass_Statics::NewProp_PostProcessPasses_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "RenderScale" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCompositingPostProcessPass_Statics::NewProp_PostProcessPasses = { "PostProcessPasses", nullptr, (EPropertyFlags)0x001400800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingPostProcessPass, PostProcessPasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCompositingPostProcessPass_Statics::NewProp_PostProcessPasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingPostProcessPass_Statics::NewProp_PostProcessPasses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositingPostProcessPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingPostProcessPass_Statics::NewProp_RenderScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingPostProcessPass_Statics::NewProp_PostProcessPasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingPostProcessPass_Statics::NewProp_PostProcessPasses,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositingPostProcessPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositingPostProcessPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositingPostProcessPass_Statics::ClassParams = {
		&UCompositingPostProcessPass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCompositingPostProcessPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingPostProcessPass_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositingPostProcessPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingPostProcessPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositingPostProcessPass()
	{
		if (!Z_Registration_Info_UClass_UCompositingPostProcessPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositingPostProcessPass.OuterSingleton, Z_Construct_UClass_UCompositingPostProcessPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositingPostProcessPass.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UCompositingPostProcessPass>()
	{
		return UCompositingPostProcessPass::StaticClass();
	}
	UCompositingPostProcessPass::UCompositingPostProcessPass() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositingPostProcessPass);
	UCompositingPostProcessPass::~UCompositingPostProcessPass() {}
	DEFINE_FUNCTION(UCompositingElementMaterialPass::execSetParameterMapping)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TextureParamName);
		P_GET_PROPERTY(FNameProperty,Z_Param_ComposureLayerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetParameterMapping(Z_Param_TextureParamName,Z_Param_ComposureLayerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCompositingElementMaterialPass::execSetMaterialInterface)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterialInterface(Z_Param_NewMaterial);
		P_NATIVE_END;
	}
	struct CompositingElementMaterialPass_eventApplyMaterialParams_Parms
	{
		UMaterialInstanceDynamic* MID;
	};
	static FName NAME_UCompositingElementMaterialPass_ApplyMaterialParams = FName(TEXT("ApplyMaterialParams"));
	void UCompositingElementMaterialPass::ApplyMaterialParams(UMaterialInstanceDynamic* MID)
	{
		CompositingElementMaterialPass_eventApplyMaterialParams_Parms Parms;
		Parms.MID=MID;
		ProcessEvent(FindFunctionChecked(NAME_UCompositingElementMaterialPass_ApplyMaterialParams),&Parms);
	}
	void UCompositingElementMaterialPass::StaticRegisterNativesUCompositingElementMaterialPass()
	{
		UClass* Class = UCompositingElementMaterialPass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMaterialInterface", &UCompositingElementMaterialPass::execSetMaterialInterface },
			{ "SetParameterMapping", &UCompositingElementMaterialPass::execSetParameterMapping },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCompositingElementMaterialPass_ApplyMaterialParams_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingElementMaterialPass_ApplyMaterialParams_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElementMaterialPass_eventApplyMaterialParams_Parms, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositingElementMaterialPass_ApplyMaterialParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementMaterialPass_ApplyMaterialParams_Statics::NewProp_MID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingElementMaterialPass_ApplyMaterialParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingElementMaterialPass_ApplyMaterialParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingElementMaterialPass, nullptr, "ApplyMaterialParams", nullptr, nullptr, sizeof(CompositingElementMaterialPass_eventApplyMaterialParams_Parms), Z_Construct_UFunction_UCompositingElementMaterialPass_ApplyMaterialParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementMaterialPass_ApplyMaterialParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingElementMaterialPass_ApplyMaterialParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementMaterialPass_ApplyMaterialParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingElementMaterialPass_ApplyMaterialParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingElementMaterialPass_ApplyMaterialParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompositingElementMaterialPass_SetMaterialInterface_Statics
	{
		struct CompositingElementMaterialPass_eventSetMaterialInterface_Parms
		{
			UMaterialInterface* NewMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCompositingElementMaterialPass_SetMaterialInterface_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElementMaterialPass_eventSetMaterialInterface_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositingElementMaterialPass_SetMaterialInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementMaterialPass_SetMaterialInterface_Statics::NewProp_NewMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingElementMaterialPass_SetMaterialInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compositing Pass" },
		{ "Comment", "/**\n\x09 * Set the material interface used by current material pass. \n\x09 * @param NewMaterial            The new material interface users want to set.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
		{ "ToolTip", "Set the material interface used by current material pass.\n@param NewMaterial            The new material interface users want to set." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingElementMaterialPass_SetMaterialInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingElementMaterialPass, nullptr, "SetMaterialInterface", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCompositingElementMaterialPass_SetMaterialInterface_Statics::CompositingElementMaterialPass_eventSetMaterialInterface_Parms), Z_Construct_UFunction_UCompositingElementMaterialPass_SetMaterialInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementMaterialPass_SetMaterialInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingElementMaterialPass_SetMaterialInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementMaterialPass_SetMaterialInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingElementMaterialPass_SetMaterialInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingElementMaterialPass_SetMaterialInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping_Statics
	{
		struct CompositingElementMaterialPass_eventSetParameterMapping_Parms
		{
			FName TextureParamName;
			FName ComposureLayerName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TextureParamName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComposureLayerName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping_Statics::NewProp_TextureParamName = { "TextureParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElementMaterialPass_eventSetParameterMapping_Parms, TextureParamName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping_Statics::NewProp_ComposureLayerName = { "ComposureLayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElementMaterialPass_eventSetParameterMapping_Parms, ComposureLayerName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CompositingElementMaterialPass_eventSetParameterMapping_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CompositingElementMaterialPass_eventSetParameterMapping_Parms), &Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping_Statics::NewProp_TextureParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping_Statics::NewProp_ComposureLayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping_Statics::Function_MetaDataParams[] = {
		{ "Category", "Compositing Pass" },
		{ "Comment", "/**\n\x09 * Set the parameter mappings between texture parameters and composure layers. Users can not create new entries into the map as the keys are read only.\n\x09 * Invalid Texture parameter names will result in a failed setting operation. \n\x09 * @param TextureParamName       The name of the texture parameter inside the material interface. Used as key.\n\x09 * @param ComposureLayerName     The name of the composure layer the texture parameter is mapped to. Used as value.\n\x09 * @return bool                  True if set operation is successful. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
		{ "ToolTip", "Set the parameter mappings between texture parameters and composure layers. Users can not create new entries into the map as the keys are read only.\nInvalid Texture parameter names will result in a failed setting operation.\n@param TextureParamName       The name of the texture parameter inside the material interface. Used as key.\n@param ComposureLayerName     The name of the composure layer the texture parameter is mapped to. Used as value.\n@return bool                  True if set operation is successful." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCompositingElementMaterialPass, nullptr, "SetParameterMapping", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping_Statics::CompositingElementMaterialPass_eventSetParameterMapping_Parms), Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositingElementMaterialPass);
	UClass* Z_Construct_UClass_UCompositingElementMaterialPass_NoRegister()
	{
		return UCompositingElementMaterialPass::StaticClass();
	}
	struct Z_Construct_UClass_UCompositingElementMaterialPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositingElementMaterialPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingPostProcessPass,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCompositingElementMaterialPass_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCompositingElementMaterialPass_ApplyMaterialParams, "ApplyMaterialParams" }, // 2498839654
		{ &Z_Construct_UFunction_UCompositingElementMaterialPass_SetMaterialInterface, "SetMaterialInterface" }, // 645150384
		{ &Z_Construct_UFunction_UCompositingElementMaterialPass_SetParameterMapping, "SetParameterMapping" }, // 3292739539
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingElementMaterialPass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* UCompositingElementMaterialPass\n *****************************************************************************/" },
		{ "IncludePath", "CompositingElements/CompositingElementTransforms.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
		{ "ToolTip", "UCompositingElementMaterialPass" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingElementMaterialPass_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCompositingElementMaterialPass_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingElementMaterialPass, Material), Z_Construct_UScriptStruct_FCompositingMaterial, METADATA_PARAMS(Z_Construct_UClass_UCompositingElementMaterialPass_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingElementMaterialPass_Statics::NewProp_Material_MetaData)) }; // 3535646560
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositingElementMaterialPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingElementMaterialPass_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositingElementMaterialPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositingElementMaterialPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositingElementMaterialPass_Statics::ClassParams = {
		&UCompositingElementMaterialPass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCompositingElementMaterialPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingElementMaterialPass_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositingElementMaterialPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingElementMaterialPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositingElementMaterialPass()
	{
		if (!Z_Registration_Info_UClass_UCompositingElementMaterialPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositingElementMaterialPass.OuterSingleton, Z_Construct_UClass_UCompositingElementMaterialPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositingElementMaterialPass.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UCompositingElementMaterialPass>()
	{
		return UCompositingElementMaterialPass::StaticClass();
	}
	UCompositingElementMaterialPass::UCompositingElementMaterialPass() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositingElementMaterialPass);
	UCompositingElementMaterialPass::~UCompositingElementMaterialPass() {}
	void UCompositingTonemapPass::StaticRegisterNativesUCompositingTonemapPass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositingTonemapPass);
	UClass* Z_Construct_UClass_UCompositingTonemapPass_NoRegister()
	{
		return UCompositingTonemapPass::StaticClass();
	}
	struct Z_Construct_UClass_UCompositingTonemapPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorGradingSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorGradingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilmStockSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilmStockSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChromaticAberration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ChromaticAberration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TonemapPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TonemapPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositingTonemapPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementTransform,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingTonemapPass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CompositingElements/CompositingElementTransforms.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_ColorGradingSettings_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "Comment", "/** Color grading settings. */" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Color grading settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_ColorGradingSettings = { "ColorGradingSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingTonemapPass, ColorGradingSettings), Z_Construct_UScriptStruct_FColorGradingSettings, METADATA_PARAMS(Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_ColorGradingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_ColorGradingSettings_MetaData)) }; // 32815037
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_FilmStockSettings_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "Comment", "/** Film stock settings. */" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Film stock settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_FilmStockSettings = { "FilmStockSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingTonemapPass, FilmStockSettings), Z_Construct_UScriptStruct_FFilmStockSettings, METADATA_PARAMS(Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_FilmStockSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_FilmStockSettings_MetaData)) }; // 2552197186
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_ChromaticAberration_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "Comment", "/** in percent, Scene chromatic aberration / color fringe (camera imperfection) to simulate an artifact that happens in real-world lens, mostly visible in the image corners. */" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
		{ "ToolTip", "in percent, Scene chromatic aberration / color fringe (camera imperfection) to simulate an artifact that happens in real-world lens, mostly visible in the image corners." },
		{ "UIMax", "5.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_ChromaticAberration = { "ChromaticAberration", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingTonemapPass, ChromaticAberration), METADATA_PARAMS(Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_ChromaticAberration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_ChromaticAberration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_TonemapPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_TonemapPolicy = { "TonemapPolicy", nullptr, (EPropertyFlags)0x00c4000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingTonemapPass, TonemapPolicy), Z_Construct_UClass_UComposureTonemapperPassPolicy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_TonemapPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_TonemapPolicy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositingTonemapPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_ColorGradingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_FilmStockSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_ChromaticAberration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingTonemapPass_Statics::NewProp_TonemapPolicy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositingTonemapPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositingTonemapPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositingTonemapPass_Statics::ClassParams = {
		&UCompositingTonemapPass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCompositingTonemapPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingTonemapPass_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositingTonemapPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingTonemapPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositingTonemapPass()
	{
		if (!Z_Registration_Info_UClass_UCompositingTonemapPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositingTonemapPass.OuterSingleton, Z_Construct_UClass_UCompositingTonemapPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositingTonemapPass.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UCompositingTonemapPass>()
	{
		return UCompositingTonemapPass::StaticClass();
	}
	UCompositingTonemapPass::UCompositingTonemapPass() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositingTonemapPass);
	UCompositingTonemapPass::~UCompositingTonemapPass() {}
	void UMultiPassChromaKeyer::StaticRegisterNativesUMultiPassChromaKeyer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiPassChromaKeyer);
	UClass* Z_Construct_UClass_UMultiPassChromaKeyer_NoRegister()
	{
		return UMultiPassChromaKeyer::StaticClass();
	}
	struct Z_Construct_UClass_UMultiPassChromaKeyer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyerMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyerMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWhiteTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultWhiteTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiPassChromaKeyer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementTransform,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiPassChromaKeyer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CompositingElements/CompositingElementTransforms.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiPassChromaKeyer_Statics::NewProp_KeyColors_Inner = { "KeyColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiPassChromaKeyer_Statics::NewProp_KeyColors_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultiPassChromaKeyer_Statics::NewProp_KeyColors = { "KeyColors", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiPassChromaKeyer, KeyColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMultiPassChromaKeyer_Statics::NewProp_KeyColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiPassChromaKeyer_Statics::NewProp_KeyColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiPassChromaKeyer_Statics::NewProp_KeyerMaterial_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiPassChromaKeyer_Statics::NewProp_KeyerMaterial = { "KeyerMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiPassChromaKeyer, KeyerMaterial), Z_Construct_UScriptStruct_FCompositingMaterial, METADATA_PARAMS(Z_Construct_UClass_UMultiPassChromaKeyer_Statics::NewProp_KeyerMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiPassChromaKeyer_Statics::NewProp_KeyerMaterial_MetaData)) }; // 3535646560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiPassChromaKeyer_Statics::NewProp_DefaultWhiteTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMultiPassChromaKeyer_Statics::NewProp_DefaultWhiteTexture = { "DefaultWhiteTexture", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiPassChromaKeyer, DefaultWhiteTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMultiPassChromaKeyer_Statics::NewProp_DefaultWhiteTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiPassChromaKeyer_Statics::NewProp_DefaultWhiteTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiPassChromaKeyer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiPassChromaKeyer_Statics::NewProp_KeyColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiPassChromaKeyer_Statics::NewProp_KeyColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiPassChromaKeyer_Statics::NewProp_KeyerMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiPassChromaKeyer_Statics::NewProp_DefaultWhiteTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiPassChromaKeyer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiPassChromaKeyer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiPassChromaKeyer_Statics::ClassParams = {
		&UMultiPassChromaKeyer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMultiPassChromaKeyer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMultiPassChromaKeyer_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiPassChromaKeyer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiPassChromaKeyer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiPassChromaKeyer()
	{
		if (!Z_Registration_Info_UClass_UMultiPassChromaKeyer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiPassChromaKeyer.OuterSingleton, Z_Construct_UClass_UMultiPassChromaKeyer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiPassChromaKeyer.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UMultiPassChromaKeyer>()
	{
		return UMultiPassChromaKeyer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiPassChromaKeyer);
	UMultiPassChromaKeyer::~UMultiPassChromaKeyer() {}
	void UMultiPassDespill::StaticRegisterNativesUMultiPassDespill()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMultiPassDespill);
	UClass* Z_Construct_UClass_UMultiPassDespill_NoRegister()
	{
		return UMultiPassDespill::StaticClass();
	}
	struct Z_Construct_UClass_UMultiPassDespill_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyerMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyerMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWhiteTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultWhiteTexture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMultiPassDespill_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementTransform,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiPassDespill_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CompositingElements/CompositingElementTransforms.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiPassDespill_Statics::NewProp_KeyColors_Inner = { "KeyColors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiPassDespill_Statics::NewProp_KeyColors_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMultiPassDespill_Statics::NewProp_KeyColors = { "KeyColors", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiPassDespill, KeyColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMultiPassDespill_Statics::NewProp_KeyColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiPassDespill_Statics::NewProp_KeyColors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiPassDespill_Statics::NewProp_KeyerMaterial_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMultiPassDespill_Statics::NewProp_KeyerMaterial = { "KeyerMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiPassDespill, KeyerMaterial), Z_Construct_UScriptStruct_FCompositingMaterial, METADATA_PARAMS(Z_Construct_UClass_UMultiPassDespill_Statics::NewProp_KeyerMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiPassDespill_Statics::NewProp_KeyerMaterial_MetaData)) }; // 3535646560
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMultiPassDespill_Statics::NewProp_DefaultWhiteTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMultiPassDespill_Statics::NewProp_DefaultWhiteTexture = { "DefaultWhiteTexture", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMultiPassDespill, DefaultWhiteTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMultiPassDespill_Statics::NewProp_DefaultWhiteTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiPassDespill_Statics::NewProp_DefaultWhiteTexture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMultiPassDespill_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiPassDespill_Statics::NewProp_KeyColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiPassDespill_Statics::NewProp_KeyColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiPassDespill_Statics::NewProp_KeyerMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMultiPassDespill_Statics::NewProp_DefaultWhiteTexture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMultiPassDespill_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiPassDespill>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiPassDespill_Statics::ClassParams = {
		&UMultiPassDespill::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMultiPassDespill_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMultiPassDespill_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMultiPassDespill_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMultiPassDespill_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMultiPassDespill()
	{
		if (!Z_Registration_Info_UClass_UMultiPassDespill.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiPassDespill.OuterSingleton, Z_Construct_UClass_UMultiPassDespill_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMultiPassDespill.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UMultiPassDespill>()
	{
		return UMultiPassDespill::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiPassDespill);
	UMultiPassDespill::~UMultiPassDespill() {}
	void UAlphaTransformPass::StaticRegisterNativesUAlphaTransformPass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAlphaTransformPass);
	UClass* Z_Construct_UClass_UAlphaTransformPass_NoRegister()
	{
		return UAlphaTransformPass::StaticClass();
	}
	struct Z_Construct_UClass_UAlphaTransformPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaTransformMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AlphaTransformMID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlphaTransformPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementTransform,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlphaTransformPass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CompositingElements/CompositingElementTransforms.h" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlphaTransformPass_Statics::NewProp_AlphaScale_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlphaTransformPass_Statics::NewProp_AlphaScale = { "AlphaScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAlphaTransformPass, AlphaScale), METADATA_PARAMS(Z_Construct_UClass_UAlphaTransformPass_Statics::NewProp_AlphaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAlphaTransformPass_Statics::NewProp_AlphaScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlphaTransformPass_Statics::NewProp_DefaultMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAlphaTransformPass_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAlphaTransformPass, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAlphaTransformPass_Statics::NewProp_DefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAlphaTransformPass_Statics::NewProp_DefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlphaTransformPass_Statics::NewProp_AlphaTransformMID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAlphaTransformPass_Statics::NewProp_AlphaTransformMID = { "AlphaTransformMID", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAlphaTransformPass, AlphaTransformMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAlphaTransformPass_Statics::NewProp_AlphaTransformMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAlphaTransformPass_Statics::NewProp_AlphaTransformMID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlphaTransformPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlphaTransformPass_Statics::NewProp_AlphaScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlphaTransformPass_Statics::NewProp_DefaultMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlphaTransformPass_Statics::NewProp_AlphaTransformMID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlphaTransformPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlphaTransformPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAlphaTransformPass_Statics::ClassParams = {
		&UAlphaTransformPass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAlphaTransformPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlphaTransformPass_Statics::PropPointers),
		0,
		0x041000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAlphaTransformPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAlphaTransformPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAlphaTransformPass()
	{
		if (!Z_Registration_Info_UClass_UAlphaTransformPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAlphaTransformPass.OuterSingleton, Z_Construct_UClass_UAlphaTransformPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAlphaTransformPass.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UAlphaTransformPass>()
	{
		return UAlphaTransformPass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlphaTransformPass);
	UAlphaTransformPass::~UAlphaTransformPass() {}
	void UCompositingOpenColorIOPass::StaticRegisterNativesUCompositingOpenColorIOPass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositingOpenColorIOPass);
	UClass* Z_Construct_UClass_UCompositingOpenColorIOPass_NoRegister()
	{
		return UCompositingOpenColorIOPass::StaticClass();
	}
	struct Z_Construct_UClass_UCompositingOpenColorIOPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorConversionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorConversionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCompositingOpenColorIOPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCompositingElementTransform,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingOpenColorIOPass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* UCompositingOpenColorIOPass\n*****************************************************************************/" },
		{ "DisplayName", "OpenColorIO Pass" },
		{ "IncludePath", "CompositingElements/CompositingElementTransforms.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
		{ "ToolTip", "UCompositingOpenColorIOPass" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCompositingOpenColorIOPass_Statics::NewProp_ColorConversionSettings_MetaData[] = {
		{ "Category", "OpenColorIO Settings" },
		{ "Comment", "/** Color grading settings. */" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/CompositingElementTransforms.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Color grading settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCompositingOpenColorIOPass_Statics::NewProp_ColorConversionSettings = { "ColorConversionSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCompositingOpenColorIOPass, ColorConversionSettings), Z_Construct_UScriptStruct_FOpenColorIOColorConversionSettings, METADATA_PARAMS(Z_Construct_UClass_UCompositingOpenColorIOPass_Statics::NewProp_ColorConversionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingOpenColorIOPass_Statics::NewProp_ColorConversionSettings_MetaData)) }; // 349333024
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositingOpenColorIOPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositingOpenColorIOPass_Statics::NewProp_ColorConversionSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCompositingOpenColorIOPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositingOpenColorIOPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositingOpenColorIOPass_Statics::ClassParams = {
		&UCompositingOpenColorIOPass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCompositingOpenColorIOPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingOpenColorIOPass_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCompositingOpenColorIOPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCompositingOpenColorIOPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCompositingOpenColorIOPass()
	{
		if (!Z_Registration_Info_UClass_UCompositingOpenColorIOPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositingOpenColorIOPass.OuterSingleton, Z_Construct_UClass_UCompositingOpenColorIOPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCompositingOpenColorIOPass.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UCompositingOpenColorIOPass>()
	{
		return UCompositingOpenColorIOPass::StaticClass();
	}
	UCompositingOpenColorIOPass::UCompositingOpenColorIOPass() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositingOpenColorIOPass);
	UCompositingOpenColorIOPass::~UCompositingOpenColorIOPass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCompositingPostProcessPass, UCompositingPostProcessPass::StaticClass, TEXT("UCompositingPostProcessPass"), &Z_Registration_Info_UClass_UCompositingPostProcessPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositingPostProcessPass), 1688357394U) },
		{ Z_Construct_UClass_UCompositingElementMaterialPass, UCompositingElementMaterialPass::StaticClass, TEXT("UCompositingElementMaterialPass"), &Z_Registration_Info_UClass_UCompositingElementMaterialPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositingElementMaterialPass), 858500544U) },
		{ Z_Construct_UClass_UCompositingTonemapPass, UCompositingTonemapPass::StaticClass, TEXT("UCompositingTonemapPass"), &Z_Registration_Info_UClass_UCompositingTonemapPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositingTonemapPass), 3293092380U) },
		{ Z_Construct_UClass_UMultiPassChromaKeyer, UMultiPassChromaKeyer::StaticClass, TEXT("UMultiPassChromaKeyer"), &Z_Registration_Info_UClass_UMultiPassChromaKeyer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiPassChromaKeyer), 2618459035U) },
		{ Z_Construct_UClass_UMultiPassDespill, UMultiPassDespill::StaticClass, TEXT("UMultiPassDespill"), &Z_Registration_Info_UClass_UMultiPassDespill, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiPassDespill), 936654126U) },
		{ Z_Construct_UClass_UAlphaTransformPass, UAlphaTransformPass::StaticClass, TEXT("UAlphaTransformPass"), &Z_Registration_Info_UClass_UAlphaTransformPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAlphaTransformPass), 1149889611U) },
		{ Z_Construct_UClass_UCompositingOpenColorIOPass, UCompositingOpenColorIOPass::StaticClass, TEXT("UCompositingOpenColorIOPass"), &Z_Registration_Info_UClass_UCompositingOpenColorIOPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositingOpenColorIOPass), 985160609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_2570713567(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_CompositingElementTransforms_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
