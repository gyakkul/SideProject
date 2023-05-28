// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../../Plugins/Editor/BlueprintMaterialTextureNodes/Source/BlueprintMaterialTextureNodes/Public/BlueprintMaterialTextureNodesBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintMaterialTextureNodesBPLibrary() {}
// Cross Module References
	BLUEPRINTMATERIALTEXTURENODES_API UClass* Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary();
	BLUEPRINTMATERIALTEXTURENODES_API UClass* Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
	UPackage* Z_Construct_UPackage__Script_BlueprintMaterialTextureNodes();
// End Cross Module References
	DEFINE_FUNCTION(UBlueprintMaterialTextureNodesBPLibrary::execSetMICDitheredLODTransition_EditorOnly)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Material);
		P_GET_UBOOL(Z_Param_DitheredLODTransition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintMaterialTextureNodesBPLibrary::SetMICDitheredLODTransition_EditorOnly(Z_Param_Material,Z_Param_DitheredLODTransition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintMaterialTextureNodesBPLibrary::execSetMICIsThinSurface_EditorOnly)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Material);
		P_GET_UBOOL(Z_Param_bIsThinSurface);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintMaterialTextureNodesBPLibrary::SetMICIsThinSurface_EditorOnly(Z_Param_Material,Z_Param_bIsThinSurface);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintMaterialTextureNodesBPLibrary::execSetMICTwoSided_EditorOnly)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Material);
		P_GET_UBOOL(Z_Param_TwoSided);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintMaterialTextureNodesBPLibrary::SetMICTwoSided_EditorOnly(Z_Param_Material,Z_Param_TwoSided);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintMaterialTextureNodesBPLibrary::execSetMICBlendMode_EditorOnly)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Material);
		P_GET_PROPERTY(FByteProperty,Z_Param_BlendMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintMaterialTextureNodesBPLibrary::SetMICBlendMode_EditorOnly(Z_Param_Material,EBlendMode(Z_Param_BlendMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintMaterialTextureNodesBPLibrary::execSetMICShadingModel_EditorOnly)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Material);
		P_GET_PROPERTY(FByteProperty,Z_Param_ShadingModel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintMaterialTextureNodesBPLibrary::SetMICShadingModel_EditorOnly(Z_Param_Material,EMaterialShadingModel(Z_Param_ShadingModel));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintMaterialTextureNodesBPLibrary::execSetMICTextureParam_EditorOnly)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Material);
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintMaterialTextureNodesBPLibrary::SetMICTextureParam_EditorOnly(Z_Param_Material,Z_Param_ParamName,Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintMaterialTextureNodesBPLibrary::execSetMICVectorParam_EditorOnly)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Material);
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_GET_STRUCT(FLinearColor,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintMaterialTextureNodesBPLibrary::SetMICVectorParam_EditorOnly(Z_Param_Material,Z_Param_ParamName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintMaterialTextureNodesBPLibrary::execSetMICScalarParam_EditorOnly)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Material);
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueprintMaterialTextureNodesBPLibrary::SetMICScalarParam_EditorOnly(Z_Param_Material,Z_Param_ParamName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintMaterialTextureNodesBPLibrary::execUpdateMIC)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_MIC);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintMaterialTextureNodesBPLibrary::UpdateMIC(Z_Param_MIC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintMaterialTextureNodesBPLibrary::execCreateMIC_EditorOnly)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceConstant**)Z_Param__Result=UBlueprintMaterialTextureNodesBPLibrary::CreateMIC_EditorOnly(Z_Param_Material,Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintMaterialTextureNodesBPLibrary::execRenderTarget_SampleUV_EditorOnly)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget);
		P_GET_STRUCT(FVector2D,Z_Param_UV);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UBlueprintMaterialTextureNodesBPLibrary::RenderTarget_SampleUV_EditorOnly(Z_Param_InRenderTarget,Z_Param_UV);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintMaterialTextureNodesBPLibrary::execRenderTarget_SampleRectangle_EditorOnly)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget);
		P_GET_STRUCT(FLinearColor,Z_Param_InRect);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLinearColor>*)Z_Param__Result=UBlueprintMaterialTextureNodesBPLibrary::RenderTarget_SampleRectangle_EditorOnly(Z_Param_InRenderTarget,Z_Param_InRect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintMaterialTextureNodesBPLibrary::execTexture2D_SampleUV_EditorOnly)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_GET_STRUCT(FVector2D,Z_Param_UV);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UBlueprintMaterialTextureNodesBPLibrary::Texture2D_SampleUV_EditorOnly(Z_Param_Texture,Z_Param_UV);
		P_NATIVE_END;
	}
	void UBlueprintMaterialTextureNodesBPLibrary::StaticRegisterNativesUBlueprintMaterialTextureNodesBPLibrary()
	{
		UClass* Class = UBlueprintMaterialTextureNodesBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateMIC_EditorOnly", &UBlueprintMaterialTextureNodesBPLibrary::execCreateMIC_EditorOnly },
			{ "RenderTarget_SampleRectangle_EditorOnly", &UBlueprintMaterialTextureNodesBPLibrary::execRenderTarget_SampleRectangle_EditorOnly },
			{ "RenderTarget_SampleUV_EditorOnly", &UBlueprintMaterialTextureNodesBPLibrary::execRenderTarget_SampleUV_EditorOnly },
			{ "SetMICBlendMode_EditorOnly", &UBlueprintMaterialTextureNodesBPLibrary::execSetMICBlendMode_EditorOnly },
			{ "SetMICDitheredLODTransition_EditorOnly", &UBlueprintMaterialTextureNodesBPLibrary::execSetMICDitheredLODTransition_EditorOnly },
			{ "SetMICIsThinSurface_EditorOnly", &UBlueprintMaterialTextureNodesBPLibrary::execSetMICIsThinSurface_EditorOnly },
			{ "SetMICScalarParam_EditorOnly", &UBlueprintMaterialTextureNodesBPLibrary::execSetMICScalarParam_EditorOnly },
			{ "SetMICShadingModel_EditorOnly", &UBlueprintMaterialTextureNodesBPLibrary::execSetMICShadingModel_EditorOnly },
			{ "SetMICTextureParam_EditorOnly", &UBlueprintMaterialTextureNodesBPLibrary::execSetMICTextureParam_EditorOnly },
			{ "SetMICTwoSided_EditorOnly", &UBlueprintMaterialTextureNodesBPLibrary::execSetMICTwoSided_EditorOnly },
			{ "SetMICVectorParam_EditorOnly", &UBlueprintMaterialTextureNodesBPLibrary::execSetMICVectorParam_EditorOnly },
			{ "Texture2D_SampleUV_EditorOnly", &UBlueprintMaterialTextureNodesBPLibrary::execTexture2D_SampleUV_EditorOnly },
			{ "UpdateMIC", &UBlueprintMaterialTextureNodesBPLibrary::execUpdateMIC },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_CreateMIC_EditorOnly_Statics
	{
		struct BlueprintMaterialTextureNodesBPLibrary_eventCreateMIC_EditorOnly_Parms
		{
			UMaterialInterface* Material;
			FString Name;
			UMaterialInstanceConstant* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_CreateMIC_EditorOnly_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventCreateMIC_EditorOnly_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_CreateMIC_EditorOnly_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventCreateMIC_EditorOnly_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_CreateMIC_EditorOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventCreateMIC_EditorOnly_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_CreateMIC_EditorOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_CreateMIC_EditorOnly_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_CreateMIC_EditorOnly_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_CreateMIC_EditorOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_CreateMIC_EditorOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Creates a new Material Instance Constant asset\n\x09* Only works in the editor\n\x09*/" },
		{ "CPP_Default_Name", "MIC_" },
		{ "DisplayName", "Create MIC Editor Only" },
		{ "Keywords", "Create MIC" },
		{ "ModuleRelativePath", "Public/BlueprintMaterialTextureNodesBPLibrary.h" },
		{ "ToolTip", "Creates a new Material Instance Constant asset\nOnly works in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_CreateMIC_EditorOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary, nullptr, "CreateMIC_EditorOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_CreateMIC_EditorOnly_Statics::BlueprintMaterialTextureNodesBPLibrary_eventCreateMIC_EditorOnly_Parms), Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_CreateMIC_EditorOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_CreateMIC_EditorOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_CreateMIC_EditorOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_CreateMIC_EditorOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_CreateMIC_EditorOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_CreateMIC_EditorOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly_Statics
	{
		struct BlueprintMaterialTextureNodesBPLibrary_eventRenderTarget_SampleRectangle_EditorOnly_Parms
		{
			UTextureRenderTarget2D* InRenderTarget;
			FLinearColor InRect;
			TArray<FLinearColor> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRenderTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InRect;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly_Statics::NewProp_InRenderTarget = { "InRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventRenderTarget_SampleRectangle_EditorOnly_Parms, InRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly_Statics::NewProp_InRect = { "InRect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventRenderTarget_SampleRectangle_EditorOnly_Parms, InRect), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventRenderTarget_SampleRectangle_EditorOnly_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly_Statics::NewProp_InRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly_Statics::NewProp_InRect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Samples an array of values from a Texture Render Target 2D. Currently only 4 channel formats are supported.\n\x09* Only works in the editor\n\x09*/" },
		{ "DisplayName", "Render Target Sample Rectangle Editor Only" },
		{ "Keywords", "Sample Render Target Rectangle" },
		{ "ModuleRelativePath", "Public/BlueprintMaterialTextureNodesBPLibrary.h" },
		{ "ToolTip", "Samples an array of values from a Texture Render Target 2D. Currently only 4 channel formats are supported.\nOnly works in the editor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary, nullptr, "RenderTarget_SampleRectangle_EditorOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly_Statics::BlueprintMaterialTextureNodesBPLibrary_eventRenderTarget_SampleRectangle_EditorOnly_Parms), Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleUV_EditorOnly_Statics
	{
		struct BlueprintMaterialTextureNodesBPLibrary_eventRenderTarget_SampleUV_EditorOnly_Parms
		{
			UTextureRenderTarget2D* InRenderTarget;
			FVector2D UV;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InRenderTarget;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleUV_EditorOnly_Statics::NewProp_InRenderTarget = { "InRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventRenderTarget_SampleUV_EditorOnly_Parms, InRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleUV_EditorOnly_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventRenderTarget_SampleUV_EditorOnly_Parms, UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleUV_EditorOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventRenderTarget_SampleUV_EditorOnly_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleUV_EditorOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleUV_EditorOnly_Statics::NewProp_InRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleUV_EditorOnly_Statics::NewProp_UV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleUV_EditorOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleUV_EditorOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Samples a value from a Texture Render Target 2D. Currently only 4 channel formats are supported.\n\x09* Only works in the editor\n\x09*/" },
		{ "DisplayName", "Render Target Sample UV Editor Only" },
		{ "Keywords", "Sample Render Target UV" },
		{ "ModuleRelativePath", "Public/BlueprintMaterialTextureNodesBPLibrary.h" },
		{ "ToolTip", "Samples a value from a Texture Render Target 2D. Currently only 4 channel formats are supported.\nOnly works in the editor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleUV_EditorOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary, nullptr, "RenderTarget_SampleUV_EditorOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleUV_EditorOnly_Statics::BlueprintMaterialTextureNodesBPLibrary_eventRenderTarget_SampleUV_EditorOnly_Parms), Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleUV_EditorOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleUV_EditorOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleUV_EditorOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleUV_EditorOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleUV_EditorOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleUV_EditorOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly_Statics
	{
		struct BlueprintMaterialTextureNodesBPLibrary_eventSetMICBlendMode_EditorOnly_Parms
		{
			UMaterialInstanceConstant* Material;
			TEnumAsByte<EBlendMode> BlendMode;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventSetMICBlendMode_EditorOnly_Parms, Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventSetMICBlendMode_EditorOnly_Parms, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(nullptr, 0) }; // 799871737
	void Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintMaterialTextureNodesBPLibrary_eventSetMICBlendMode_EditorOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintMaterialTextureNodesBPLibrary_eventSetMICBlendMode_EditorOnly_Parms), &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly_Statics::NewProp_BlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Overrides the Blend Mode of a Material Instance Constant\n\x09* Only works in the editor\n\x09*/" },
		{ "CPP_Default_BlendMode", "BLEND_Opaque" },
		{ "DisplayName", "Set MIC Blend Mode Editor Only" },
		{ "Keywords", "Set MIC Blend Mode" },
		{ "ModuleRelativePath", "Public/BlueprintMaterialTextureNodesBPLibrary.h" },
		{ "ToolTip", "Overrides the Blend Mode of a Material Instance Constant\nOnly works in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary, nullptr, "SetMICBlendMode_EditorOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly_Statics::BlueprintMaterialTextureNodesBPLibrary_eventSetMICBlendMode_EditorOnly_Parms), Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics
	{
		struct BlueprintMaterialTextureNodesBPLibrary_eventSetMICDitheredLODTransition_EditorOnly_Parms
		{
			UMaterialInstanceConstant* Material;
			bool DitheredLODTransition;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static void NewProp_DitheredLODTransition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DitheredLODTransition;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventSetMICDitheredLODTransition_EditorOnly_Parms, Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics::NewProp_DitheredLODTransition_SetBit(void* Obj)
	{
		((BlueprintMaterialTextureNodesBPLibrary_eventSetMICDitheredLODTransition_EditorOnly_Parms*)Obj)->DitheredLODTransition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics::NewProp_DitheredLODTransition = { "DitheredLODTransition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintMaterialTextureNodesBPLibrary_eventSetMICDitheredLODTransition_EditorOnly_Parms), &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics::NewProp_DitheredLODTransition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintMaterialTextureNodesBPLibrary_eventSetMICDitheredLODTransition_EditorOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintMaterialTextureNodesBPLibrary_eventSetMICDitheredLODTransition_EditorOnly_Parms), &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics::NewProp_DitheredLODTransition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Overrides the Blend Mode of a Material Instance Constant\n\x09* Only works in the editor\n\x09*/" },
		{ "CPP_Default_DitheredLODTransition", "false" },
		{ "DisplayName", "Set MIC Dithered LOD Editor Only" },
		{ "Keywords", "Set MIC Dithered LOD Transition" },
		{ "ModuleRelativePath", "Public/BlueprintMaterialTextureNodesBPLibrary.h" },
		{ "ToolTip", "Overrides the Blend Mode of a Material Instance Constant\nOnly works in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary, nullptr, "SetMICDitheredLODTransition_EditorOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics::BlueprintMaterialTextureNodesBPLibrary_eventSetMICDitheredLODTransition_EditorOnly_Parms), Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics
	{
		struct BlueprintMaterialTextureNodesBPLibrary_eventSetMICIsThinSurface_EditorOnly_Parms
		{
			UMaterialInstanceConstant* Material;
			bool bIsThinSurface;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static void NewProp_bIsThinSurface_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsThinSurface;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventSetMICIsThinSurface_EditorOnly_Parms, Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics::NewProp_bIsThinSurface_SetBit(void* Obj)
	{
		((BlueprintMaterialTextureNodesBPLibrary_eventSetMICIsThinSurface_EditorOnly_Parms*)Obj)->bIsThinSurface = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics::NewProp_bIsThinSurface = { "bIsThinSurface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintMaterialTextureNodesBPLibrary_eventSetMICIsThinSurface_EditorOnly_Parms), &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics::NewProp_bIsThinSurface_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintMaterialTextureNodesBPLibrary_eventSetMICIsThinSurface_EditorOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintMaterialTextureNodesBPLibrary_eventSetMICIsThinSurface_EditorOnly_Parms), &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics::NewProp_bIsThinSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Overrides the IsThinSurface setting of a Material Instance Constant\n\x09* Only works in the editor\n\x09*/" },
		{ "CPP_Default_bIsThinSurface", "false" },
		{ "DisplayName", "Set MIC IsThinSurface Editor Only" },
		{ "Keywords", "Set MIC IsThinSurface" },
		{ "ModuleRelativePath", "Public/BlueprintMaterialTextureNodesBPLibrary.h" },
		{ "ToolTip", "Overrides the IsThinSurface setting of a Material Instance Constant\nOnly works in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary, nullptr, "SetMICIsThinSurface_EditorOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics::BlueprintMaterialTextureNodesBPLibrary_eventSetMICIsThinSurface_EditorOnly_Parms), Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics
	{
		struct BlueprintMaterialTextureNodesBPLibrary_eventSetMICScalarParam_EditorOnly_Parms
		{
			UMaterialInstanceConstant* Material;
			FString ParamName;
			float Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventSetMICScalarParam_EditorOnly_Parms, Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventSetMICScalarParam_EditorOnly_Parms, ParamName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventSetMICScalarParam_EditorOnly_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintMaterialTextureNodesBPLibrary_eventSetMICScalarParam_EditorOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintMaterialTextureNodesBPLibrary_eventSetMICScalarParam_EditorOnly_Parms), &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Sets a Scalar Parameter value in a Material Instance Constant\n\x09* Only works in the editor\n\x09*/" },
		{ "CPP_Default_ParamName", "test" },
		{ "CPP_Default_Value", "0.000000" },
		{ "DisplayName", "Set MIC Scalar Parameter Editor Only" },
		{ "Keywords", "Set MIC Scalar Parameter" },
		{ "ModuleRelativePath", "Public/BlueprintMaterialTextureNodesBPLibrary.h" },
		{ "ToolTip", "Sets a Scalar Parameter value in a Material Instance Constant\nOnly works in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary, nullptr, "SetMICScalarParam_EditorOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics::BlueprintMaterialTextureNodesBPLibrary_eventSetMICScalarParam_EditorOnly_Parms), Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly_Statics
	{
		struct BlueprintMaterialTextureNodesBPLibrary_eventSetMICShadingModel_EditorOnly_Parms
		{
			UMaterialInstanceConstant* Material;
			TEnumAsByte<EMaterialShadingModel> ShadingModel;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShadingModel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventSetMICShadingModel_EditorOnly_Parms, Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly_Statics::NewProp_ShadingModel = { "ShadingModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventSetMICShadingModel_EditorOnly_Parms, ShadingModel), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(nullptr, 0) }; // 3734556393
	void Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintMaterialTextureNodesBPLibrary_eventSetMICShadingModel_EditorOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintMaterialTextureNodesBPLibrary_eventSetMICShadingModel_EditorOnly_Parms), &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly_Statics::NewProp_ShadingModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Overrides the Shading Model of a Material Instance Constant\n\x09* Only works in the editor\n\x09*/" },
		{ "CPP_Default_ShadingModel", "MSM_DefaultLit" },
		{ "DisplayName", "Set MIC Shading Model Editor Only" },
		{ "Keywords", "Set MIC Shading Model" },
		{ "ModuleRelativePath", "Public/BlueprintMaterialTextureNodesBPLibrary.h" },
		{ "ToolTip", "Overrides the Shading Model of a Material Instance Constant\nOnly works in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary, nullptr, "SetMICShadingModel_EditorOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly_Statics::BlueprintMaterialTextureNodesBPLibrary_eventSetMICShadingModel_EditorOnly_Parms), Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics
	{
		struct BlueprintMaterialTextureNodesBPLibrary_eventSetMICTextureParam_EditorOnly_Parms
		{
			UMaterialInstanceConstant* Material;
			FString ParamName;
			UTexture2D* Texture;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventSetMICTextureParam_EditorOnly_Parms, Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventSetMICTextureParam_EditorOnly_Parms, ParamName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventSetMICTextureParam_EditorOnly_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintMaterialTextureNodesBPLibrary_eventSetMICTextureParam_EditorOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintMaterialTextureNodesBPLibrary_eventSetMICTextureParam_EditorOnly_Parms), &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Sets a Texture Parameter value in a Material Instance Constant\n\x09* Only works in the editor\n\x09*/" },
		{ "CPP_Default_Texture", "None" },
		{ "DisplayName", "Set MIC Texture Parameter Editor Only" },
		{ "Keywords", "Set MIC Texture Parameter" },
		{ "ModuleRelativePath", "Public/BlueprintMaterialTextureNodesBPLibrary.h" },
		{ "ToolTip", "Sets a Texture Parameter value in a Material Instance Constant\nOnly works in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary, nullptr, "SetMICTextureParam_EditorOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics::BlueprintMaterialTextureNodesBPLibrary_eventSetMICTextureParam_EditorOnly_Parms), Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics
	{
		struct BlueprintMaterialTextureNodesBPLibrary_eventSetMICTwoSided_EditorOnly_Parms
		{
			UMaterialInstanceConstant* Material;
			bool TwoSided;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static void NewProp_TwoSided_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TwoSided;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventSetMICTwoSided_EditorOnly_Parms, Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics::NewProp_TwoSided_SetBit(void* Obj)
	{
		((BlueprintMaterialTextureNodesBPLibrary_eventSetMICTwoSided_EditorOnly_Parms*)Obj)->TwoSided = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics::NewProp_TwoSided = { "TwoSided", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintMaterialTextureNodesBPLibrary_eventSetMICTwoSided_EditorOnly_Parms), &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics::NewProp_TwoSided_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintMaterialTextureNodesBPLibrary_eventSetMICTwoSided_EditorOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintMaterialTextureNodesBPLibrary_eventSetMICTwoSided_EditorOnly_Parms), &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics::NewProp_TwoSided,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Overrides the Two Sided setting of a Material Instance Constant\n\x09* Only works in the editor\n\x09*/" },
		{ "CPP_Default_TwoSided", "false" },
		{ "DisplayName", "Set MIC Two Sided Editor Only" },
		{ "Keywords", "Set MIC Two Sided" },
		{ "ModuleRelativePath", "Public/BlueprintMaterialTextureNodesBPLibrary.h" },
		{ "ToolTip", "Overrides the Two Sided setting of a Material Instance Constant\nOnly works in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary, nullptr, "SetMICTwoSided_EditorOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics::BlueprintMaterialTextureNodesBPLibrary_eventSetMICTwoSided_EditorOnly_Parms), Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics
	{
		struct BlueprintMaterialTextureNodesBPLibrary_eventSetMICVectorParam_EditorOnly_Parms
		{
			UMaterialInstanceConstant* Material;
			FString ParamName;
			FLinearColor Value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventSetMICVectorParam_EditorOnly_Parms, Material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventSetMICVectorParam_EditorOnly_Parms, ParamName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventSetMICVectorParam_EditorOnly_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueprintMaterialTextureNodesBPLibrary_eventSetMICVectorParam_EditorOnly_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BlueprintMaterialTextureNodesBPLibrary_eventSetMICVectorParam_EditorOnly_Parms), &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Sets a Vector Parameter value in a Material Instance Constant\n\x09* Only works in the editor\n\x09*/" },
		{ "CPP_Default_Value", "(R=0.000000,G=0.000000,B=0.000000,A=0.000000)" },
		{ "DisplayName", "Set MIC Vector Parameter Editor Only" },
		{ "Keywords", "Set MIC Vector Parameter" },
		{ "ModuleRelativePath", "Public/BlueprintMaterialTextureNodesBPLibrary.h" },
		{ "ToolTip", "Sets a Vector Parameter value in a Material Instance Constant\nOnly works in the editor" },
		{ "UnsafeDuringActorConstruction", "true" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary, nullptr, "SetMICVectorParam_EditorOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics::BlueprintMaterialTextureNodesBPLibrary_eventSetMICVectorParam_EditorOnly_Parms), Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_Texture2D_SampleUV_EditorOnly_Statics
	{
		struct BlueprintMaterialTextureNodesBPLibrary_eventTexture2D_SampleUV_EditorOnly_Parms
		{
			UTexture2D* Texture;
			FVector2D UV;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_Texture2D_SampleUV_EditorOnly_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventTexture2D_SampleUV_EditorOnly_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_Texture2D_SampleUV_EditorOnly_Statics::NewProp_UV = { "UV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventTexture2D_SampleUV_EditorOnly_Parms, UV), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_Texture2D_SampleUV_EditorOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventTexture2D_SampleUV_EditorOnly_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_Texture2D_SampleUV_EditorOnly_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_Texture2D_SampleUV_EditorOnly_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_Texture2D_SampleUV_EditorOnly_Statics::NewProp_UV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_Texture2D_SampleUV_EditorOnly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_Texture2D_SampleUV_EditorOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09* Samples a texel from a Texture 2D with VectorDisplacement Compression\n\x09*/" },
		{ "DisplayName", "Texture2D Sample UV Editor Only" },
		{ "Keywords", "Read Texture UV" },
		{ "ModuleRelativePath", "Public/BlueprintMaterialTextureNodesBPLibrary.h" },
		{ "ToolTip", "Samples a texel from a Texture 2D with VectorDisplacement Compression" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_Texture2D_SampleUV_EditorOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary, nullptr, "Texture2D_SampleUV_EditorOnly", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_Texture2D_SampleUV_EditorOnly_Statics::BlueprintMaterialTextureNodesBPLibrary_eventTexture2D_SampleUV_EditorOnly_Parms), Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_Texture2D_SampleUV_EditorOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_Texture2D_SampleUV_EditorOnly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_Texture2D_SampleUV_EditorOnly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_Texture2D_SampleUV_EditorOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_Texture2D_SampleUV_EditorOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_Texture2D_SampleUV_EditorOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_UpdateMIC_Statics
	{
		struct BlueprintMaterialTextureNodesBPLibrary_eventUpdateMIC_Parms
		{
			UMaterialInstanceConstant* MIC;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MIC;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_UpdateMIC_Statics::NewProp_MIC = { "MIC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BlueprintMaterialTextureNodesBPLibrary_eventUpdateMIC_Parms, MIC), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_UpdateMIC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_UpdateMIC_Statics::NewProp_MIC,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_UpdateMIC_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintMaterialTextureNodesBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_UpdateMIC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary, nullptr, "UpdateMIC", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_UpdateMIC_Statics::BlueprintMaterialTextureNodesBPLibrary_eventUpdateMIC_Parms), Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_UpdateMIC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_UpdateMIC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_UpdateMIC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_UpdateMIC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_UpdateMIC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_UpdateMIC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintMaterialTextureNodesBPLibrary);
	UClass* Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_NoRegister()
	{
		return UBlueprintMaterialTextureNodesBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintMaterialTextureNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_CreateMIC_EditorOnly, "CreateMIC_EditorOnly" }, // 1266071387
		{ &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleRectangle_EditorOnly, "RenderTarget_SampleRectangle_EditorOnly" }, // 3576201059
		{ &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_RenderTarget_SampleUV_EditorOnly, "RenderTarget_SampleUV_EditorOnly" }, // 3679554669
		{ &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICBlendMode_EditorOnly, "SetMICBlendMode_EditorOnly" }, // 2450731783
		{ &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICDitheredLODTransition_EditorOnly, "SetMICDitheredLODTransition_EditorOnly" }, // 443496795
		{ &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICIsThinSurface_EditorOnly, "SetMICIsThinSurface_EditorOnly" }, // 3373660842
		{ &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICScalarParam_EditorOnly, "SetMICScalarParam_EditorOnly" }, // 3003221304
		{ &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICShadingModel_EditorOnly, "SetMICShadingModel_EditorOnly" }, // 2674623572
		{ &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTextureParam_EditorOnly, "SetMICTextureParam_EditorOnly" }, // 292062337
		{ &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICTwoSided_EditorOnly, "SetMICTwoSided_EditorOnly" }, // 2231642344
		{ &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_SetMICVectorParam_EditorOnly, "SetMICVectorParam_EditorOnly" }, // 594196110
		{ &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_Texture2D_SampleUV_EditorOnly, "Texture2D_SampleUV_EditorOnly" }, // 1856234821
		{ &Z_Construct_UFunction_UBlueprintMaterialTextureNodesBPLibrary_UpdateMIC, "UpdateMIC" }, // 906253380
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://docs.unrealengine.com/ProgrammingAndScripting/Blueprints/TechnicalGuide/ExtendingBlueprints\n*/" },
		{ "IncludePath", "BlueprintMaterialTextureNodesBPLibrary.h" },
		{ "ModuleRelativePath", "Public/BlueprintMaterialTextureNodesBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://docs.unrealengine.com/ProgrammingAndScripting/Blueprints/TechnicalGuide/ExtendingBlueprints" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintMaterialTextureNodesBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_Statics::ClassParams = {
		&UBlueprintMaterialTextureNodesBPLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UBlueprintMaterialTextureNodesBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintMaterialTextureNodesBPLibrary.OuterSingleton, Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintMaterialTextureNodesBPLibrary.OuterSingleton;
	}
	template<> BLUEPRINTMATERIALTEXTURENODES_API UClass* StaticClass<UBlueprintMaterialTextureNodesBPLibrary>()
	{
		return UBlueprintMaterialTextureNodesBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintMaterialTextureNodesBPLibrary);
	UBlueprintMaterialTextureNodesBPLibrary::~UBlueprintMaterialTextureNodesBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintMaterialTextureNodesBPLibrary, UBlueprintMaterialTextureNodesBPLibrary::StaticClass, TEXT("UBlueprintMaterialTextureNodesBPLibrary"), &Z_Registration_Info_UClass_UBlueprintMaterialTextureNodesBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintMaterialTextureNodesBPLibrary), 1964878421U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_1098885355(TEXT("/Script/BlueprintMaterialTextureNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_BlueprintMaterialTextureNodes_Source_BlueprintMaterialTextureNodes_Public_BlueprintMaterialTextureNodesBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
