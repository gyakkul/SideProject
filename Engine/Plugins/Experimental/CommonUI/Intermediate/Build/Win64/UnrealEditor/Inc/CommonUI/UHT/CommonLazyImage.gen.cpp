// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonLazyImage.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonLazyImage() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonLazyImage();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonLazyImage_NoRegister();
	COMMONUI_API UFunction* Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UMG_API UClass* Z_Construct_UClass_UImage();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	DEFINE_FUNCTION(UCommonLazyImage::execSetMaterialTextureParamName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TextureParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterialTextureParamName(Z_Param_TextureParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonLazyImage::execIsLoading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsLoading();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonLazyImage::execSetBrushFromLazyDisplayAsset)
	{
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UObject>,Z_Param_Out_LazyObject);
		P_GET_UBOOL(Z_Param_bMatchTextureSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrushFromLazyDisplayAsset(Z_Param_Out_LazyObject,Z_Param_bMatchTextureSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonLazyImage::execSetBrushFromLazyMaterial)
	{
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UMaterialInterface>,Z_Param_Out_LazyMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrushFromLazyMaterial(Z_Param_Out_LazyMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCommonLazyImage::execSetBrushFromLazyTexture)
	{
		P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out_LazyTexture);
		P_GET_UBOOL(Z_Param_bMatchSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBrushFromLazyTexture(Z_Param_Out_LazyTexture,Z_Param_bMatchSize);
		P_NATIVE_END;
	}
	void UCommonLazyImage::StaticRegisterNativesUCommonLazyImage()
	{
		UClass* Class = UCommonLazyImage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsLoading", &UCommonLazyImage::execIsLoading },
			{ "SetBrushFromLazyDisplayAsset", &UCommonLazyImage::execSetBrushFromLazyDisplayAsset },
			{ "SetBrushFromLazyMaterial", &UCommonLazyImage::execSetBrushFromLazyMaterial },
			{ "SetBrushFromLazyTexture", &UCommonLazyImage::execSetBrushFromLazyTexture },
			{ "SetMaterialTextureParamName", &UCommonLazyImage::execSetMaterialTextureParamName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics
	{
		struct CommonLazyImage_eventIsLoading_Parms
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
	void Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CommonLazyImage_eventIsLoading_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonLazyImage_eventIsLoading_Parms), &Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::Function_MetaDataParams[] = {
		{ "Category", "LazyImage" },
		{ "ModuleRelativePath", "Public/CommonLazyImage.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLazyImage, nullptr, "IsLoading", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::CommonLazyImage_eventIsLoading_Parms), Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLazyImage_IsLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonLazyImage_IsLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics
	{
		struct CommonLazyImage_eventSetBrushFromLazyDisplayAsset_Parms
		{
			TSoftObjectPtr<UObject> LazyObject;
			bool bMatchTextureSize;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LazyObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LazyObject;
		static void NewProp_bMatchTextureSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchTextureSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::NewProp_LazyObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::NewProp_LazyObject = { "LazyObject", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonLazyImage_eventSetBrushFromLazyDisplayAsset_Parms, LazyObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::NewProp_LazyObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::NewProp_LazyObject_MetaData)) };
	void Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::NewProp_bMatchTextureSize_SetBit(void* Obj)
	{
		((CommonLazyImage_eventSetBrushFromLazyDisplayAsset_Parms*)Obj)->bMatchTextureSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::NewProp_bMatchTextureSize = { "bMatchTextureSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonLazyImage_eventSetBrushFromLazyDisplayAsset_Parms), &Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::NewProp_bMatchTextureSize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::NewProp_LazyObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::NewProp_bMatchTextureSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "LazyImage" },
		{ "Comment", "/** Set the brush from a string asset ref only - expects the referenced asset to be a texture or material. */" },
		{ "CPP_Default_bMatchTextureSize", "false" },
		{ "ModuleRelativePath", "Public/CommonLazyImage.h" },
		{ "ToolTip", "Set the brush from a string asset ref only - expects the referenced asset to be a texture or material." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLazyImage, nullptr, "SetBrushFromLazyDisplayAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::CommonLazyImage_eventSetBrushFromLazyDisplayAsset_Parms), Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics
	{
		struct CommonLazyImage_eventSetBrushFromLazyMaterial_Parms
		{
			TSoftObjectPtr<UMaterialInterface> LazyMaterial;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LazyMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LazyMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::NewProp_LazyMaterial_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::NewProp_LazyMaterial = { "LazyMaterial", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonLazyImage_eventSetBrushFromLazyMaterial_Parms, LazyMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::NewProp_LazyMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::NewProp_LazyMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::NewProp_LazyMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "LazyImage" },
		{ "Comment", "/** Set the brush from a lazy material asset pointer - will load the material as needed. */" },
		{ "ModuleRelativePath", "Public/CommonLazyImage.h" },
		{ "ToolTip", "Set the brush from a lazy material asset pointer - will load the material as needed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLazyImage, nullptr, "SetBrushFromLazyMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::CommonLazyImage_eventSetBrushFromLazyMaterial_Parms), Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics
	{
		struct CommonLazyImage_eventSetBrushFromLazyTexture_Parms
		{
			TSoftObjectPtr<UTexture2D> LazyTexture;
			bool bMatchSize;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LazyTexture_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LazyTexture;
		static void NewProp_bMatchSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::NewProp_LazyTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::NewProp_LazyTexture = { "LazyTexture", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonLazyImage_eventSetBrushFromLazyTexture_Parms, LazyTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::NewProp_LazyTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::NewProp_LazyTexture_MetaData)) };
	void Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::NewProp_bMatchSize_SetBit(void* Obj)
	{
		((CommonLazyImage_eventSetBrushFromLazyTexture_Parms*)Obj)->bMatchSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::NewProp_bMatchSize = { "bMatchSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CommonLazyImage_eventSetBrushFromLazyTexture_Parms), &Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::NewProp_bMatchSize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::NewProp_LazyTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::NewProp_bMatchSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "LazyImage" },
		{ "Comment", "/** Set the brush from a lazy texture asset pointer - will load the texture as needed. */" },
		{ "CPP_Default_bMatchSize", "false" },
		{ "ModuleRelativePath", "Public/CommonLazyImage.h" },
		{ "ToolTip", "Set the brush from a lazy texture asset pointer - will load the texture as needed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLazyImage, nullptr, "SetBrushFromLazyTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::CommonLazyImage_eventSetBrushFromLazyTexture_Parms), Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics
	{
		struct CommonLazyImage_eventSetMaterialTextureParamName_Parms
		{
			FName TextureParamName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TextureParamName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::NewProp_TextureParamName = { "TextureParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CommonLazyImage_eventSetMaterialTextureParamName_Parms, TextureParamName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::NewProp_TextureParamName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::Function_MetaDataParams[] = {
		{ "Category", "LazyImage" },
		{ "Comment", "/**\n\x09 * Establishes the name of the texture parameter on the currently applied brush material to which textures should be applied.\n\x09 * Does nothing if the current brush resource object is not a material.\n\x09 *\n\x09 * Note: that this is cleared out automatically if/when a new material is established on the brush.\n\x09 * You must call this function again after doing so if the new material has a texture param.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CommonLazyImage.h" },
		{ "ToolTip", "Establishes the name of the texture parameter on the currently applied brush material to which textures should be applied.\nDoes nothing if the current brush resource object is not a material.\n\nNote: that this is cleared out automatically if/when a new material is established on the brush.\nYou must call this function again after doing so if the new material has a texture param." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommonLazyImage, nullptr, "SetMaterialTextureParamName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::CommonLazyImage_eventSetMaterialTextureParamName_Parms), Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonLazyImage);
	UClass* Z_Construct_UClass_UCommonLazyImage_NoRegister()
	{
		return UCommonLazyImage::StaticClass();
	}
	struct Z_Construct_UClass_UCommonLazyImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowLoading_MetaData[];
#endif
		static void NewProp_bShowLoading_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLoading;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadingBackgroundBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingBackgroundBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialTextureParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialTextureParamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BP_OnLoadingStateChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BP_OnLoadingStateChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonLazyImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImage,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommonLazyImage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommonLazyImage_IsLoading, "IsLoading" }, // 614688524
		{ &Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyDisplayAsset, "SetBrushFromLazyDisplayAsset" }, // 661913366
		{ &Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyMaterial, "SetBrushFromLazyMaterial" }, // 1884625039
		{ &Z_Construct_UFunction_UCommonLazyImage_SetBrushFromLazyTexture, "SetBrushFromLazyTexture" }, // 1927493732
		{ &Z_Construct_UFunction_UCommonLazyImage_SetMaterialTextureParamName, "SetMaterialTextureParamName" }, // 1795086870
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLazyImage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A special Image widget that can show unloaded images and takes care of the loading for you!\n * \n * UCommonLazyImage is another wrapper for SLoadGuard, but it only handles image loading and \n * a throbber during loading.\n * \n * If this class changes to show any text, by default it will have CoreStyle styling\n */" },
		{ "IncludePath", "CommonLazyImage.h" },
		{ "ModuleRelativePath", "Public/CommonLazyImage.h" },
		{ "ToolTip", "A special Image widget that can show unloaded images and takes care of the loading for you!\n\nUCommonLazyImage is another wrapper for SLoadGuard, but it only handles image loading and\na throbber during loading.\n\nIf this class changes to show any text, by default it will have CoreStyle styling" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_bShowLoading_MetaData[] = {
		{ "Category", "LoadPreview" },
		{ "ModuleRelativePath", "Public/CommonLazyImage.h" },
	};
#endif
	void Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_bShowLoading_SetBit(void* Obj)
	{
		((UCommonLazyImage*)Obj)->bShowLoading = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_bShowLoading = { "bShowLoading", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonLazyImage), &Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_bShowLoading_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_bShowLoading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_bShowLoading_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_LoadingBackgroundBrush_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/CommonLazyImage.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_LoadingBackgroundBrush = { "LoadingBackgroundBrush", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonLazyImage, LoadingBackgroundBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_LoadingBackgroundBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_LoadingBackgroundBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_MaterialTextureParamName_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** \n\x09 * If this image uses a material that a texture should be applied to, this is the name of the material param to use.\n\x09 * I.e. if this property is not blank, the resource object of our brush is a material, and we are given a lazy texture, that texture\n\x09 * will be assigned to the texture param on the material instead of replacing the material outright on the brush.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CommonLazyImage.h" },
		{ "ToolTip", "If this image uses a material that a texture should be applied to, this is the name of the material param to use.\nI.e. if this property is not blank, the resource object of our brush is a material, and we are given a lazy texture, that texture\nwill be assigned to the texture param on the material instead of replacing the material outright on the brush." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_MaterialTextureParamName = { "MaterialTextureParamName", nullptr, (EPropertyFlags)0x0040040000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonLazyImage, MaterialTextureParamName), METADATA_PARAMS(Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_MaterialTextureParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_MaterialTextureParamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_BP_OnLoadingStateChanged_MetaData[] = {
		{ "Category", "LazyImage" },
		{ "DisplayName", "On Loading State Changed" },
		{ "ModuleRelativePath", "Public/CommonLazyImage.h" },
		{ "ScriptName", "OnLoadingStateChanged" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_BP_OnLoadingStateChanged = { "BP_OnLoadingStateChanged", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonLazyImage, BP_OnLoadingStateChanged), Z_Construct_UDelegateFunction_CommonUI_OnLoadGuardStateChangedDynamic__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_BP_OnLoadingStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_BP_OnLoadingStateChanged_MetaData)) }; // 2194747320
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonLazyImage_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_bShowLoading,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_LoadingBackgroundBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_MaterialTextureParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonLazyImage_Statics::NewProp_BP_OnLoadingStateChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonLazyImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonLazyImage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonLazyImage_Statics::ClassParams = {
		&UCommonLazyImage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCommonLazyImage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLazyImage_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonLazyImage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonLazyImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonLazyImage()
	{
		if (!Z_Registration_Info_UClass_UCommonLazyImage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonLazyImage.OuterSingleton, Z_Construct_UClass_UCommonLazyImage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonLazyImage.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonLazyImage>()
	{
		return UCommonLazyImage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommonLazyImage);
	UCommonLazyImage::~UCommonLazyImage() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonLazyImage, UCommonLazyImage::StaticClass, TEXT("UCommonLazyImage"), &Z_Registration_Info_UClass_UCommonLazyImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonLazyImage), 2130284719U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_1508270276(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonLazyImage_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
