// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImagePlateComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImagePlateComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	IMAGEPLATE_API UClass* Z_Construct_UClass_UImagePlateComponent();
	IMAGEPLATE_API UClass* Z_Construct_UClass_UImagePlateComponent_NoRegister();
	IMAGEPLATE_API UClass* Z_Construct_UClass_UImagePlateFrustumComponent_NoRegister();
	IMAGEPLATE_API UScriptStruct* Z_Construct_UScriptStruct_FImagePlateParameters();
	UPackage* Z_Construct_UPackage__Script_ImagePlate();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImagePlateParameters;
class UScriptStruct* FImagePlateParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImagePlateParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImagePlateParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImagePlateParameters, (UObject*)Z_Construct_UPackage__Script_ImagePlate(), TEXT("ImagePlateParameters"));
	}
	return Z_Registration_Info_UScriptStruct_ImagePlateParameters.OuterSingleton;
}
template<> IMAGEPLATE_API UScriptStruct* StaticStruct<FImagePlateParameters>()
{
	return FImagePlateParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImagePlateParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TextureParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFillScreen_MetaData[];
#endif
		static void NewProp_bFillScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFillScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillScreenAmount_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FillScreenAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixedSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FixedSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DynamicMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImagePlateParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ImagePlateComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImagePlateParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "Image Plate" },
		{ "Comment", "/** The material that the image plate is rendered with. */" },
		{ "ModuleRelativePath", "Public/ImagePlateComponent.h" },
		{ "ToolTip", "The material that the image plate is rendered with." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014040000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImagePlateParameters, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_TextureParameterName_MetaData[] = {
		{ "Category", "Image Plate" },
		{ "Comment", "/** Name of a texture parameter inside the material to patch the render target texture to */" },
		{ "ModuleRelativePath", "Public/ImagePlateComponent.h" },
		{ "ToolTip", "Name of a texture parameter inside the material to patch the render target texture to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_TextureParameterName = { "TextureParameterName", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImagePlateParameters, TextureParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_TextureParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_TextureParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_bFillScreen_MetaData[] = {
		{ "Category", "Image Plate" },
		{ "Comment", "/** Automatically size the plate based on the active camera's lens and filmback settings. Target Camera is found by looking for an active camera component from this component's actor, through its attached parents. */" },
		{ "ModuleRelativePath", "Public/ImagePlateComponent.h" },
		{ "ToolTip", "Automatically size the plate based on the active camera's lens and filmback settings. Target Camera is found by looking for an active camera component from this component's actor, through its attached parents." },
	};
#endif
	void Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_bFillScreen_SetBit(void* Obj)
	{
		((FImagePlateParameters*)Obj)->bFillScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_bFillScreen = { "bFillScreen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImagePlateParameters), &Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_bFillScreen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_bFillScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_bFillScreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_FillScreenAmount_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Image Plate" },
		{ "Comment", "/** The amount to fill the screen with when attached to a camera */" },
		{ "EditCondition", "bFillScreen" },
		{ "ModuleRelativePath", "Public/ImagePlateComponent.h" },
		{ "ToolTip", "The amount to fill the screen with when attached to a camera" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_FillScreenAmount = { "FillScreenAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImagePlateParameters, FillScreenAmount), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_FillScreenAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_FillScreenAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_FixedSize_MetaData[] = {
		{ "Category", "Image Plate" },
		{ "Comment", "/** The fixed size of the image plate */" },
		{ "EditCondition", "!bFillScreen" },
		{ "ModuleRelativePath", "Public/ImagePlateComponent.h" },
		{ "ToolTip", "The fixed size of the image plate" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_FixedSize = { "FixedSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImagePlateParameters, FixedSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_FixedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_FixedSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_RenderTexture_MetaData[] = {
		{ "Category", "Image Plate" },
		{ "Comment", "/** Transient texture that receives image frames */" },
		{ "ModuleRelativePath", "Public/ImagePlateComponent.h" },
		{ "ToolTip", "Transient texture that receives image frames" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_RenderTexture = { "RenderTexture", nullptr, (EPropertyFlags)0x0014000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImagePlateParameters, RenderTexture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_RenderTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_RenderTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_DynamicMaterial_MetaData[] = {
		{ "Comment", "/** Transient MID to hold the material with the render texture patched in */" },
		{ "ModuleRelativePath", "Public/ImagePlateComponent.h" },
		{ "ToolTip", "Transient MID to hold the material with the render texture patched in" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_DynamicMaterial = { "DynamicMaterial", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImagePlateParameters, DynamicMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_DynamicMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_DynamicMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImagePlateParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_TextureParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_bFillScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_FillScreenAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_FixedSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_RenderTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewProp_DynamicMaterial,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImagePlateParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ImagePlate,
		nullptr,
		&NewStructOps,
		"ImagePlateParameters",
		sizeof(FImagePlateParameters),
		alignof(FImagePlateParameters),
		Z_Construct_UScriptStruct_FImagePlateParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImagePlateParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImagePlateParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImagePlateParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImagePlateParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_ImagePlateParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImagePlateParameters.InnerSingleton, Z_Construct_UScriptStruct_FImagePlateParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImagePlateParameters.InnerSingleton;
	}
	DEFINE_FUNCTION(UImagePlateComponent::execOnRenderTextureChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRenderTextureChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImagePlateComponent::execGetPlate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FImagePlateParameters*)Z_Param__Result=P_THIS->GetPlate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UImagePlateComponent::execSetImagePlate)
	{
		P_GET_STRUCT(FImagePlateParameters,Z_Param_Plate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetImagePlate(Z_Param_Plate);
		P_NATIVE_END;
	}
	void UImagePlateComponent::StaticRegisterNativesUImagePlateComponent()
	{
		UClass* Class = UImagePlateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlate", &UImagePlateComponent::execGetPlate },
			{ "OnRenderTextureChanged", &UImagePlateComponent::execOnRenderTextureChanged },
			{ "SetImagePlate", &UImagePlateComponent::execSetImagePlate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UImagePlateComponent_GetPlate_Statics
	{
		struct ImagePlateComponent_eventGetPlate_Parms
		{
			FImagePlateParameters ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImagePlateComponent_GetPlate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImagePlateComponent_eventGetPlate_Parms, ReturnValue), Z_Construct_UScriptStruct_FImagePlateParameters, METADATA_PARAMS(nullptr, 0) }; // 2262032381
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImagePlateComponent_GetPlate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImagePlateComponent_GetPlate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImagePlateComponent_GetPlate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Image Plate" },
		{ "Comment", "/** Get this actor's image plates */" },
		{ "ModuleRelativePath", "Public/ImagePlateComponent.h" },
		{ "ToolTip", "Get this actor's image plates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImagePlateComponent_GetPlate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImagePlateComponent, nullptr, "GetPlate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImagePlateComponent_GetPlate_Statics::ImagePlateComponent_eventGetPlate_Parms), Z_Construct_UFunction_UImagePlateComponent_GetPlate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImagePlateComponent_GetPlate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImagePlateComponent_GetPlate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImagePlateComponent_GetPlate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImagePlateComponent_GetPlate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImagePlateComponent_GetPlate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImagePlateComponent_OnRenderTextureChanged_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImagePlateComponent_OnRenderTextureChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called by sequencer if a texture is changed */" },
		{ "ModuleRelativePath", "Public/ImagePlateComponent.h" },
		{ "ToolTip", "Called by sequencer if a texture is changed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImagePlateComponent_OnRenderTextureChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImagePlateComponent, nullptr, "OnRenderTextureChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImagePlateComponent_OnRenderTextureChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImagePlateComponent_OnRenderTextureChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImagePlateComponent_OnRenderTextureChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImagePlateComponent_OnRenderTextureChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UImagePlateComponent_SetImagePlate_Statics
	{
		struct ImagePlateComponent_eventSetImagePlate_Parms
		{
			FImagePlateParameters Plate;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Plate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UImagePlateComponent_SetImagePlate_Statics::NewProp_Plate = { "Plate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ImagePlateComponent_eventSetImagePlate_Parms, Plate), Z_Construct_UScriptStruct_FImagePlateParameters, METADATA_PARAMS(nullptr, 0) }; // 2262032381
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UImagePlateComponent_SetImagePlate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UImagePlateComponent_SetImagePlate_Statics::NewProp_Plate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UImagePlateComponent_SetImagePlate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Image Plate" },
		{ "Comment", "/** Add an image plate to this actor */" },
		{ "ModuleRelativePath", "Public/ImagePlateComponent.h" },
		{ "ToolTip", "Add an image plate to this actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UImagePlateComponent_SetImagePlate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UImagePlateComponent, nullptr, "SetImagePlate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UImagePlateComponent_SetImagePlate_Statics::ImagePlateComponent_eventSetImagePlate_Parms), Z_Construct_UFunction_UImagePlateComponent_SetImagePlate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UImagePlateComponent_SetImagePlate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UImagePlateComponent_SetImagePlate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UImagePlateComponent_SetImagePlate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UImagePlateComponent_SetImagePlate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UImagePlateComponent_SetImagePlate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImagePlateComponent);
	UClass* Z_Construct_UClass_UImagePlateComponent_NoRegister()
	{
		return UImagePlateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UImagePlateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Plate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Plate;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorFrustum_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorFrustum;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImagePlateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ImagePlate,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UImagePlateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UImagePlateComponent_GetPlate, "GetPlate" }, // 1508782820
		{ &Z_Construct_UFunction_UImagePlateComponent_OnRenderTextureChanged, "OnRenderTextureChanged" }, // 57850823
		{ &Z_Construct_UFunction_UImagePlateComponent_SetImagePlate, "SetImagePlate" }, // 2790800868
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImagePlateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** \n * A 2d plate that will be rendered always facing the camera.\n */" },
		{ "HideCategories", "Object Activation Collision Components|Activation Physics Mobility VirtualTexture Trigger" },
		{ "IncludePath", "ImagePlateComponent.h" },
		{ "ModuleRelativePath", "Public/ImagePlateComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A 2d plate that will be rendered always facing the camera." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImagePlateComponent_Statics::NewProp_Plate_MetaData[] = {
		{ "Category", "Image Plate" },
		{ "Comment", "/** Array of image plates to render for this component */" },
		{ "DisplayName", "Image Plates" },
		{ "ModuleRelativePath", "Public/ImagePlateComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Array of image plates to render for this component" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UImagePlateComponent_Statics::NewProp_Plate = { "Plate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImagePlateComponent, Plate), Z_Construct_UScriptStruct_FImagePlateParameters, METADATA_PARAMS(Z_Construct_UClass_UImagePlateComponent_Statics::NewProp_Plate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImagePlateComponent_Statics::NewProp_Plate_MetaData)) }; // 2262032381
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImagePlateComponent_Statics::NewProp_EditorFrustum_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ImagePlateComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UImagePlateComponent_Statics::NewProp_EditorFrustum = { "EditorFrustum", nullptr, (EPropertyFlags)0x0044000800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImagePlateComponent, EditorFrustum), Z_Construct_UClass_UImagePlateFrustumComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UImagePlateComponent_Statics::NewProp_EditorFrustum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImagePlateComponent_Statics::NewProp_EditorFrustum_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImagePlateComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImagePlateComponent_Statics::NewProp_Plate,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImagePlateComponent_Statics::NewProp_EditorFrustum,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImagePlateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImagePlateComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImagePlateComponent_Statics::ClassParams = {
		&UImagePlateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UImagePlateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UImagePlateComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UImagePlateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImagePlateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImagePlateComponent()
	{
		if (!Z_Registration_Info_UClass_UImagePlateComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImagePlateComponent.OuterSingleton, Z_Construct_UClass_UImagePlateComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImagePlateComponent.OuterSingleton;
	}
	template<> IMAGEPLATE_API UClass* StaticClass<UImagePlateComponent>()
	{
		return UImagePlateComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImagePlateComponent);
	UImagePlateComponent::~UImagePlateComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_Statics::ScriptStructInfo[] = {
		{ FImagePlateParameters::StaticStruct, Z_Construct_UScriptStruct_FImagePlateParameters_Statics::NewStructOps, TEXT("ImagePlateParameters"), &Z_Registration_Info_UScriptStruct_ImagePlateParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImagePlateParameters), 2262032381U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImagePlateComponent, UImagePlateComponent::StaticClass, TEXT("UImagePlateComponent"), &Z_Registration_Info_UClass_UImagePlateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImagePlateComponent), 542351846U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_2729353018(TEXT("/Script/ImagePlate"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ImagePlate_Source_ImagePlate_Public_ImagePlateComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
