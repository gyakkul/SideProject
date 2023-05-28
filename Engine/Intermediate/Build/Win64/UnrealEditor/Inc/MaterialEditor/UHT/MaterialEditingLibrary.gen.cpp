// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialEditingLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialEditingLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USparseVolumeTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialParameterAssociation();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialProperty();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialUsage();
	MATERIALEDITOR_API UClass* Z_Construct_UClass_UMaterialEditingLibrary();
	MATERIALEDITOR_API UClass* Z_Construct_UClass_UMaterialEditingLibrary_NoRegister();
	MATERIALEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialStatistics();
	UPackage* Z_Construct_UPackage__Script_MaterialEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialStatistics;
class UScriptStruct* FMaterialStatistics::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialStatistics.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialStatistics.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialStatistics, (UObject*)Z_Construct_UPackage__Script_MaterialEditor(), TEXT("MaterialStatistics"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialStatistics.OuterSingleton;
}
template<> MATERIALEDITOR_API UScriptStruct* StaticStruct<FMaterialStatistics>()
{
	return FMaterialStatistics::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialStatistics_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumVertexShaderInstructions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumVertexShaderInstructions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPixelShaderInstructions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPixelShaderInstructions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSamplers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSamplers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumVertexTextureSamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumVertexTextureSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPixelTextureSamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPixelTextureSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumVirtualTextureSamples_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumVirtualTextureSamples;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumUVScalars_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumUVScalars;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumInterpolatorScalars_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumInterpolatorScalars;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialStatistics_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialStatistics>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumVertexShaderInstructions_MetaData[] = {
		{ "Category", "Statistics" },
		{ "Comment", "/** Number of instructions used by most expensive vertex shader in the material */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Number of instructions used by most expensive vertex shader in the material" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumVertexShaderInstructions = { "NumVertexShaderInstructions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialStatistics, NumVertexShaderInstructions), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumVertexShaderInstructions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumVertexShaderInstructions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumPixelShaderInstructions_MetaData[] = {
		{ "Category", "Statistics" },
		{ "Comment", "/** Number of instructions used by most expensive pixel shader in the material */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Number of instructions used by most expensive pixel shader in the material" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumPixelShaderInstructions = { "NumPixelShaderInstructions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialStatistics, NumPixelShaderInstructions), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumPixelShaderInstructions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumPixelShaderInstructions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumSamplers_MetaData[] = {
		{ "Category", "Statistics" },
		{ "Comment", "/** Number of samplers required by the material */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Number of samplers required by the material" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumSamplers = { "NumSamplers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialStatistics, NumSamplers), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumSamplers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumSamplers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumVertexTextureSamples_MetaData[] = {
		{ "Category", "Statistics" },
		{ "Comment", "/** Number of textures sampled by the vertex shader */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Number of textures sampled by the vertex shader" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumVertexTextureSamples = { "NumVertexTextureSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialStatistics, NumVertexTextureSamples), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumVertexTextureSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumVertexTextureSamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumPixelTextureSamples_MetaData[] = {
		{ "Category", "Statistics" },
		{ "Comment", "/** Number of textures sampled by the pixel shader */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Number of textures sampled by the pixel shader" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumPixelTextureSamples = { "NumPixelTextureSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialStatistics, NumPixelTextureSamples), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumPixelTextureSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumPixelTextureSamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumVirtualTextureSamples_MetaData[] = {
		{ "Category", "Statistics" },
		{ "Comment", "/** Number of virtual textures sampled */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Number of virtual textures sampled" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumVirtualTextureSamples = { "NumVirtualTextureSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialStatistics, NumVirtualTextureSamples), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumVirtualTextureSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumVirtualTextureSamples_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumUVScalars_MetaData[] = {
		{ "Category", "Statistics" },
		{ "Comment", "/** Number of interpolator scalars required for UVs */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Number of interpolator scalars required for UVs" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumUVScalars = { "NumUVScalars", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialStatistics, NumUVScalars), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumUVScalars_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumUVScalars_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumInterpolatorScalars_MetaData[] = {
		{ "Category", "Statistics" },
		{ "Comment", "/** Number of interpolator scalars required for user-defined interpolators */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Number of interpolator scalars required for user-defined interpolators" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumInterpolatorScalars = { "NumInterpolatorScalars", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialStatistics, NumInterpolatorScalars), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumInterpolatorScalars_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumInterpolatorScalars_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialStatistics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumVertexShaderInstructions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumPixelShaderInstructions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumSamplers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumVertexTextureSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumPixelTextureSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumVirtualTextureSamples,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumUVScalars,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewProp_NumInterpolatorScalars,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialStatistics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialEditor,
		nullptr,
		&NewStructOps,
		"MaterialStatistics",
		sizeof(FMaterialStatistics),
		alignof(FMaterialStatistics),
		Z_Construct_UScriptStruct_FMaterialStatistics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialStatistics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialStatistics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialStatistics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialStatistics()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialStatistics.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialStatistics.InnerSingleton, Z_Construct_UScriptStruct_FMaterialStatistics_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialStatistics.InnerSingleton;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetStatistics)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMaterialStatistics*)Z_Param__Result=UMaterialEditingLibrary::GetStatistics(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetStaticSwitchParameterSource)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_ParameterSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::GetStaticSwitchParameterSource(Z_Param_Material,Z_Param_ParameterName,Z_Param_Out_ParameterSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetTextureParameterSource)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_ParameterSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::GetTextureParameterSource(Z_Param_Material,Z_Param_ParameterName,Z_Param_Out_ParameterSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetVectorParameterSource)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_ParameterSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::GetVectorParameterSource(Z_Param_Material,Z_Param_ParameterName,Z_Param_Out_ParameterSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetScalarParameterSource)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT_REF(FSoftObjectPath,Z_Param_Out_ParameterSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::GetScalarParameterSource(Z_Param_Material,Z_Param_ParameterName,Z_Param_Out_ParameterSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetStaticSwitchParameterNames)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_TARRAY_REF(FName,Z_Param_Out_ParameterNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMaterialEditingLibrary::GetStaticSwitchParameterNames(Z_Param_Material,Z_Param_Out_ParameterNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetTextureParameterNames)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_TARRAY_REF(FName,Z_Param_Out_ParameterNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMaterialEditingLibrary::GetTextureParameterNames(Z_Param_Material,Z_Param_Out_ParameterNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetVectorParameterNames)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_TARRAY_REF(FName,Z_Param_Out_ParameterNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMaterialEditingLibrary::GetVectorParameterNames(Z_Param_Material,Z_Param_Out_ParameterNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetScalarParameterNames)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_TARRAY_REF(FName,Z_Param_Out_ParameterNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMaterialEditingLibrary::GetScalarParameterNames(Z_Param_Material,Z_Param_Out_ParameterNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetChildInstances)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Parent);
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_ChildInstances);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMaterialEditingLibrary::GetChildInstances(Z_Param_Parent,Z_Param_Out_ChildInstances);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execUpdateMaterialInstance)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMaterialEditingLibrary::UpdateMaterialInstance(Z_Param_Instance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execSetMaterialInstanceStaticSwitchParameterValue)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_UBOOL(Z_Param_Value);
		P_GET_PROPERTY(FByteProperty,Z_Param_Association);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::SetMaterialInstanceStaticSwitchParameterValue(Z_Param_Instance,Z_Param_ParameterName,Z_Param_Value,EMaterialParameterAssociation(Z_Param_Association));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetMaterialInstanceStaticSwitchParameterValue)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FByteProperty,Z_Param_Association);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::GetMaterialInstanceStaticSwitchParameterValue(Z_Param_Instance,Z_Param_ParameterName,EMaterialParameterAssociation(Z_Param_Association));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execSetMaterialInstanceVectorParameterValue)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FLinearColor,Z_Param_Value);
		P_GET_PROPERTY(FByteProperty,Z_Param_Association);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::SetMaterialInstanceVectorParameterValue(Z_Param_Instance,Z_Param_ParameterName,Z_Param_Value,EMaterialParameterAssociation(Z_Param_Association));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetMaterialInstanceVectorParameterValue)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FByteProperty,Z_Param_Association);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UMaterialEditingLibrary::GetMaterialInstanceVectorParameterValue(Z_Param_Instance,Z_Param_ParameterName,EMaterialParameterAssociation(Z_Param_Association));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execSetMaterialInstanceSparseVolumeTextureParameterValue)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_OBJECT(USparseVolumeTexture,Z_Param_Value);
		P_GET_PROPERTY(FByteProperty,Z_Param_Association);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::SetMaterialInstanceSparseVolumeTextureParameterValue(Z_Param_Instance,Z_Param_ParameterName,Z_Param_Value,EMaterialParameterAssociation(Z_Param_Association));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetMaterialInstanceSparseVolumeTextureParameterValue)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FByteProperty,Z_Param_Association);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USparseVolumeTexture**)Z_Param__Result=UMaterialEditingLibrary::GetMaterialInstanceSparseVolumeTextureParameterValue(Z_Param_Instance,Z_Param_ParameterName,EMaterialParameterAssociation(Z_Param_Association));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execSetMaterialInstanceRuntimeVirtualTextureParameterValue)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_OBJECT(URuntimeVirtualTexture,Z_Param_Value);
		P_GET_PROPERTY(FByteProperty,Z_Param_Association);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::SetMaterialInstanceRuntimeVirtualTextureParameterValue(Z_Param_Instance,Z_Param_ParameterName,Z_Param_Value,EMaterialParameterAssociation(Z_Param_Association));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetMaterialInstanceRuntimeVirtualTextureParameterValue)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FByteProperty,Z_Param_Association);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URuntimeVirtualTexture**)Z_Param__Result=UMaterialEditingLibrary::GetMaterialInstanceRuntimeVirtualTextureParameterValue(Z_Param_Instance,Z_Param_ParameterName,EMaterialParameterAssociation(Z_Param_Association));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execSetMaterialInstanceTextureParameterValue)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_OBJECT(UTexture,Z_Param_Value);
		P_GET_PROPERTY(FByteProperty,Z_Param_Association);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::SetMaterialInstanceTextureParameterValue(Z_Param_Instance,Z_Param_ParameterName,Z_Param_Value,EMaterialParameterAssociation(Z_Param_Association));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetMaterialInstanceTextureParameterValue)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FByteProperty,Z_Param_Association);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=UMaterialEditingLibrary::GetMaterialInstanceTextureParameterValue(Z_Param_Instance,Z_Param_ParameterName,EMaterialParameterAssociation(Z_Param_Association));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execSetMaterialInstanceScalarParameterValue)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FByteProperty,Z_Param_Association);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::SetMaterialInstanceScalarParameterValue(Z_Param_Instance,Z_Param_ParameterName,Z_Param_Value,EMaterialParameterAssociation(Z_Param_Association));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetMaterialInstanceScalarParameterValue)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FByteProperty,Z_Param_Association);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMaterialEditingLibrary::GetMaterialInstanceScalarParameterValue(Z_Param_Instance,Z_Param_ParameterName,EMaterialParameterAssociation(Z_Param_Association));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execClearAllMaterialInstanceParameters)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMaterialEditingLibrary::ClearAllMaterialInstanceParameters(Z_Param_Instance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execSetMaterialInstanceParent)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_Instance);
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewParent);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMaterialEditingLibrary::SetMaterialInstanceParent(Z_Param_Instance,Z_Param_NewParent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execLayoutMaterialFunctionExpressions)
	{
		P_GET_OBJECT(UMaterialFunction,Z_Param_MaterialFunction);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMaterialEditingLibrary::LayoutMaterialFunctionExpressions(Z_Param_MaterialFunction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execUpdateMaterialFunction)
	{
		P_GET_OBJECT(UMaterialFunctionInterface,Z_Param_MaterialFunction);
		P_GET_OBJECT(UMaterial,Z_Param_PreviewMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMaterialEditingLibrary::UpdateMaterialFunction(Z_Param_MaterialFunction,Z_Param_PreviewMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execDeleteMaterialExpressionInFunction)
	{
		P_GET_OBJECT(UMaterialFunction,Z_Param_MaterialFunction);
		P_GET_OBJECT(UMaterialExpression,Z_Param_Expression);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMaterialEditingLibrary::DeleteMaterialExpressionInFunction(Z_Param_MaterialFunction,Z_Param_Expression);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execDeleteAllMaterialExpressionsInFunction)
	{
		P_GET_OBJECT(UMaterialFunction,Z_Param_MaterialFunction);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMaterialEditingLibrary::DeleteAllMaterialExpressionsInFunction(Z_Param_MaterialFunction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execCreateMaterialExpressionInFunction)
	{
		P_GET_OBJECT(UMaterialFunction,Z_Param_MaterialFunction);
		P_GET_OBJECT(UClass,Z_Param_ExpressionClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodePosX);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodePosY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialExpression**)Z_Param__Result=UMaterialEditingLibrary::CreateMaterialExpressionInFunction(Z_Param_MaterialFunction,Z_Param_ExpressionClass,Z_Param_NodePosX,Z_Param_NodePosY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetNumMaterialExpressionsInFunction)
	{
		P_GET_OBJECT(UMaterialFunction,Z_Param_MaterialFunction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMaterialEditingLibrary::GetNumMaterialExpressionsInFunction(Z_Param_MaterialFunction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetUsedTextures)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTexture*>*)Z_Param__Result=UMaterialEditingLibrary::GetUsedTextures(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetMaterialExpressionNodePosition)
	{
		P_GET_OBJECT(UMaterialExpression,Z_Param_MaterialExpression);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NodePosX);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_NodePosY);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMaterialEditingLibrary::GetMaterialExpressionNodePosition(Z_Param_MaterialExpression,Z_Param_Out_NodePosX,Z_Param_Out_NodePosY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetInputNodeOutputNameForMaterialExpression)
	{
		P_GET_OBJECT(UMaterialExpression,Z_Param_MaterialExpression);
		P_GET_OBJECT(UMaterialExpression,Z_Param_InputNode);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutputName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::GetInputNodeOutputNameForMaterialExpression(Z_Param_MaterialExpression,Z_Param_InputNode,Z_Param_Out_OutputName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetInputsForMaterialExpression)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_GET_OBJECT(UMaterialExpression,Z_Param_MaterialExpression);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMaterialExpression*>*)Z_Param__Result=UMaterialEditingLibrary::GetInputsForMaterialExpression(Z_Param_Material,Z_Param_MaterialExpression);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetMaterialPropertyInputNodeOutputName)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_GET_PROPERTY(FByteProperty,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMaterialEditingLibrary::GetMaterialPropertyInputNodeOutputName(Z_Param_Material,EMaterialProperty(Z_Param_Property));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetMaterialPropertyInputNode)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_GET_PROPERTY(FByteProperty,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialExpression**)Z_Param__Result=UMaterialEditingLibrary::GetMaterialPropertyInputNode(Z_Param_Material,EMaterialProperty(Z_Param_Property));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetMaterialSelectedNodes)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<UObject*>*)Z_Param__Result=UMaterialEditingLibrary::GetMaterialSelectedNodes(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetMaterialDefaultStaticSwitchParameterValue)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::GetMaterialDefaultStaticSwitchParameterValue(Z_Param_Material,Z_Param_ParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetMaterialDefaultVectorParameterValue)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UMaterialEditingLibrary::GetMaterialDefaultVectorParameterValue(Z_Param_Material,Z_Param_ParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetMaterialDefaultTextureParameterValue)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=UMaterialEditingLibrary::GetMaterialDefaultTextureParameterValue(Z_Param_Material,Z_Param_ParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetMaterialDefaultScalarParameterValue)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UMaterialEditingLibrary::GetMaterialDefaultScalarParameterValue(Z_Param_Material,Z_Param_ParameterName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execLayoutMaterialExpressions)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMaterialEditingLibrary::LayoutMaterialExpressions(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execRecompileMaterial)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMaterialEditingLibrary::RecompileMaterial(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execConnectMaterialExpressions)
	{
		P_GET_OBJECT(UMaterialExpression,Z_Param_FromExpression);
		P_GET_PROPERTY(FStrProperty,Z_Param_FromOutputName);
		P_GET_OBJECT(UMaterialExpression,Z_Param_ToExpression);
		P_GET_PROPERTY(FStrProperty,Z_Param_ToInputName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::ConnectMaterialExpressions(Z_Param_FromExpression,Z_Param_FromOutputName,Z_Param_ToExpression,Z_Param_ToInputName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execConnectMaterialProperty)
	{
		P_GET_OBJECT(UMaterialExpression,Z_Param_FromExpression);
		P_GET_PROPERTY(FStrProperty,Z_Param_FromOutputName);
		P_GET_PROPERTY(FByteProperty,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::ConnectMaterialProperty(Z_Param_FromExpression,Z_Param_FromOutputName,EMaterialProperty(Z_Param_Property));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execHasMaterialUsage)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_GET_PROPERTY(FByteProperty,Z_Param_Usage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::HasMaterialUsage(Z_Param_Material,EMaterialUsage(Z_Param_Usage));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execSetMaterialUsage)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_GET_PROPERTY(FByteProperty,Z_Param_Usage);
		P_GET_UBOOL_REF(Z_Param_Out_bNeedsRecompile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMaterialEditingLibrary::SetMaterialUsage(Z_Param_Material,EMaterialUsage(Z_Param_Usage),Z_Param_Out_bNeedsRecompile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execDuplicateMaterialExpression)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_GET_OBJECT(UMaterialFunction,Z_Param_MaterialFunction);
		P_GET_OBJECT(UMaterialExpression,Z_Param_Expression);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialExpression**)Z_Param__Result=UMaterialEditingLibrary::DuplicateMaterialExpression(Z_Param_Material,Z_Param_MaterialFunction,Z_Param_Expression);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execCreateMaterialExpression)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_GET_OBJECT(UClass,Z_Param_ExpressionClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodePosX);
		P_GET_PROPERTY(FIntProperty,Z_Param_NodePosY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialExpression**)Z_Param__Result=UMaterialEditingLibrary::CreateMaterialExpression(Z_Param_Material,Z_Param_ExpressionClass,Z_Param_NodePosX,Z_Param_NodePosY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execDeleteMaterialExpression)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_GET_OBJECT(UMaterialExpression,Z_Param_Expression);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMaterialEditingLibrary::DeleteMaterialExpression(Z_Param_Material,Z_Param_Expression);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execDeleteAllMaterialExpressions)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMaterialEditingLibrary::DeleteAllMaterialExpressions(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialEditingLibrary::execGetNumMaterialExpressions)
	{
		P_GET_OBJECT(UMaterial,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMaterialEditingLibrary::GetNumMaterialExpressions(Z_Param_Material);
		P_NATIVE_END;
	}
	void UMaterialEditingLibrary::StaticRegisterNativesUMaterialEditingLibrary()
	{
		UClass* Class = UMaterialEditingLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAllMaterialInstanceParameters", &UMaterialEditingLibrary::execClearAllMaterialInstanceParameters },
			{ "ConnectMaterialExpressions", &UMaterialEditingLibrary::execConnectMaterialExpressions },
			{ "ConnectMaterialProperty", &UMaterialEditingLibrary::execConnectMaterialProperty },
			{ "CreateMaterialExpression", &UMaterialEditingLibrary::execCreateMaterialExpression },
			{ "CreateMaterialExpressionInFunction", &UMaterialEditingLibrary::execCreateMaterialExpressionInFunction },
			{ "DeleteAllMaterialExpressions", &UMaterialEditingLibrary::execDeleteAllMaterialExpressions },
			{ "DeleteAllMaterialExpressionsInFunction", &UMaterialEditingLibrary::execDeleteAllMaterialExpressionsInFunction },
			{ "DeleteMaterialExpression", &UMaterialEditingLibrary::execDeleteMaterialExpression },
			{ "DeleteMaterialExpressionInFunction", &UMaterialEditingLibrary::execDeleteMaterialExpressionInFunction },
			{ "DuplicateMaterialExpression", &UMaterialEditingLibrary::execDuplicateMaterialExpression },
			{ "GetChildInstances", &UMaterialEditingLibrary::execGetChildInstances },
			{ "GetInputNodeOutputNameForMaterialExpression", &UMaterialEditingLibrary::execGetInputNodeOutputNameForMaterialExpression },
			{ "GetInputsForMaterialExpression", &UMaterialEditingLibrary::execGetInputsForMaterialExpression },
			{ "GetMaterialDefaultScalarParameterValue", &UMaterialEditingLibrary::execGetMaterialDefaultScalarParameterValue },
			{ "GetMaterialDefaultStaticSwitchParameterValue", &UMaterialEditingLibrary::execGetMaterialDefaultStaticSwitchParameterValue },
			{ "GetMaterialDefaultTextureParameterValue", &UMaterialEditingLibrary::execGetMaterialDefaultTextureParameterValue },
			{ "GetMaterialDefaultVectorParameterValue", &UMaterialEditingLibrary::execGetMaterialDefaultVectorParameterValue },
			{ "GetMaterialExpressionNodePosition", &UMaterialEditingLibrary::execGetMaterialExpressionNodePosition },
			{ "GetMaterialInstanceRuntimeVirtualTextureParameterValue", &UMaterialEditingLibrary::execGetMaterialInstanceRuntimeVirtualTextureParameterValue },
			{ "GetMaterialInstanceScalarParameterValue", &UMaterialEditingLibrary::execGetMaterialInstanceScalarParameterValue },
			{ "GetMaterialInstanceSparseVolumeTextureParameterValue", &UMaterialEditingLibrary::execGetMaterialInstanceSparseVolumeTextureParameterValue },
			{ "GetMaterialInstanceStaticSwitchParameterValue", &UMaterialEditingLibrary::execGetMaterialInstanceStaticSwitchParameterValue },
			{ "GetMaterialInstanceTextureParameterValue", &UMaterialEditingLibrary::execGetMaterialInstanceTextureParameterValue },
			{ "GetMaterialInstanceVectorParameterValue", &UMaterialEditingLibrary::execGetMaterialInstanceVectorParameterValue },
			{ "GetMaterialPropertyInputNode", &UMaterialEditingLibrary::execGetMaterialPropertyInputNode },
			{ "GetMaterialPropertyInputNodeOutputName", &UMaterialEditingLibrary::execGetMaterialPropertyInputNodeOutputName },
			{ "GetMaterialSelectedNodes", &UMaterialEditingLibrary::execGetMaterialSelectedNodes },
			{ "GetNumMaterialExpressions", &UMaterialEditingLibrary::execGetNumMaterialExpressions },
			{ "GetNumMaterialExpressionsInFunction", &UMaterialEditingLibrary::execGetNumMaterialExpressionsInFunction },
			{ "GetScalarParameterNames", &UMaterialEditingLibrary::execGetScalarParameterNames },
			{ "GetScalarParameterSource", &UMaterialEditingLibrary::execGetScalarParameterSource },
			{ "GetStaticSwitchParameterNames", &UMaterialEditingLibrary::execGetStaticSwitchParameterNames },
			{ "GetStaticSwitchParameterSource", &UMaterialEditingLibrary::execGetStaticSwitchParameterSource },
			{ "GetStatistics", &UMaterialEditingLibrary::execGetStatistics },
			{ "GetTextureParameterNames", &UMaterialEditingLibrary::execGetTextureParameterNames },
			{ "GetTextureParameterSource", &UMaterialEditingLibrary::execGetTextureParameterSource },
			{ "GetUsedTextures", &UMaterialEditingLibrary::execGetUsedTextures },
			{ "GetVectorParameterNames", &UMaterialEditingLibrary::execGetVectorParameterNames },
			{ "GetVectorParameterSource", &UMaterialEditingLibrary::execGetVectorParameterSource },
			{ "HasMaterialUsage", &UMaterialEditingLibrary::execHasMaterialUsage },
			{ "LayoutMaterialExpressions", &UMaterialEditingLibrary::execLayoutMaterialExpressions },
			{ "LayoutMaterialFunctionExpressions", &UMaterialEditingLibrary::execLayoutMaterialFunctionExpressions },
			{ "RecompileMaterial", &UMaterialEditingLibrary::execRecompileMaterial },
			{ "SetMaterialInstanceParent", &UMaterialEditingLibrary::execSetMaterialInstanceParent },
			{ "SetMaterialInstanceRuntimeVirtualTextureParameterValue", &UMaterialEditingLibrary::execSetMaterialInstanceRuntimeVirtualTextureParameterValue },
			{ "SetMaterialInstanceScalarParameterValue", &UMaterialEditingLibrary::execSetMaterialInstanceScalarParameterValue },
			{ "SetMaterialInstanceSparseVolumeTextureParameterValue", &UMaterialEditingLibrary::execSetMaterialInstanceSparseVolumeTextureParameterValue },
			{ "SetMaterialInstanceStaticSwitchParameterValue", &UMaterialEditingLibrary::execSetMaterialInstanceStaticSwitchParameterValue },
			{ "SetMaterialInstanceTextureParameterValue", &UMaterialEditingLibrary::execSetMaterialInstanceTextureParameterValue },
			{ "SetMaterialInstanceVectorParameterValue", &UMaterialEditingLibrary::execSetMaterialInstanceVectorParameterValue },
			{ "SetMaterialUsage", &UMaterialEditingLibrary::execSetMaterialUsage },
			{ "UpdateMaterialFunction", &UMaterialEditingLibrary::execUpdateMaterialFunction },
			{ "UpdateMaterialInstance", &UMaterialEditingLibrary::execUpdateMaterialInstance },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics
	{
		struct MaterialEditingLibrary_eventClearAllMaterialInstanceParameters_Parms
		{
			UMaterialInstanceConstant* Instance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventClearAllMaterialInstanceParameters_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Clears all material parameters set by this Material Instance */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Clears all material parameters set by this Material Instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "ClearAllMaterialInstanceParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::MaterialEditingLibrary_eventClearAllMaterialInstanceParameters_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics
	{
		struct MaterialEditingLibrary_eventConnectMaterialExpressions_Parms
		{
			UMaterialExpression* FromExpression;
			FString FromOutputName;
			UMaterialExpression* ToExpression;
			FString ToInputName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromExpression;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FromOutputName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToExpression;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToInputName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_FromExpression = { "FromExpression", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventConnectMaterialExpressions_Parms, FromExpression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_FromOutputName = { "FromOutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventConnectMaterialExpressions_Parms, FromOutputName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_ToExpression = { "ToExpression", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventConnectMaterialExpressions_Parms, ToExpression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_ToInputName = { "ToInputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventConnectMaterialExpressions_Parms, ToInputName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventConnectMaterialExpressions_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialEditingLibrary_eventConnectMaterialExpressions_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_FromExpression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_FromOutputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_ToExpression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_ToInputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/**\n\x09 *\x09""Create connection between two material expressions\n\x09 *\x09@param\x09""FromExpression\x09\x09""Expression to make connection from\n\x09 *\x09@param\x09""FromOutputName\x09\x09Name of output of FromExpression to make connection from. Leave empty to use first output.\n\x09 *\x09@param\x09ToExpression\x09\x09""Expression to make connection to\n\x09 *\x09@param\x09ToInputName\x09\x09\x09Name of input of ToExpression to make connection to. Leave empty to use first input.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Create connection between two material expressions\n@param  FromExpression          Expression to make connection from\n@param  FromOutputName          Name of output of FromExpression to make connection from. Leave empty to use first output.\n@param  ToExpression            Expression to make connection to\n@param  ToInputName                     Name of input of ToExpression to make connection to. Leave empty to use first input." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "ConnectMaterialExpressions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::MaterialEditingLibrary_eventConnectMaterialExpressions_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics
	{
		struct MaterialEditingLibrary_eventConnectMaterialProperty_Parms
		{
			UMaterialExpression* FromExpression;
			FString FromOutputName;
			TEnumAsByte<EMaterialProperty> Property;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromExpression;
		static const UECodeGen_Private::FStrPropertyParams NewProp_FromOutputName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Property;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_FromExpression = { "FromExpression", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventConnectMaterialProperty_Parms, FromExpression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_FromOutputName = { "FromOutputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventConnectMaterialProperty_Parms, FromOutputName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventConnectMaterialProperty_Parms, Property), Z_Construct_UEnum_Engine_EMaterialProperty, METADATA_PARAMS(nullptr, 0) }; // 3911056803
	void Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventConnectMaterialProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialEditingLibrary_eventConnectMaterialProperty_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_FromExpression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_FromOutputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** \n\x09 *\x09""Connect a material expression output to one of the material property inputs (e.g. diffuse color, opacity etc)\n\x09 *\x09@param\x09""FromExpression\x09\x09""Expression to make connection from\n\x09 *\x09@param\x09""FromOutputName\x09\x09Name of output of FromExpression to make connection from\n\x09 *\x09@param\x09Property\x09\x09\x09Property input on material to make connection to\n\x09 */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Connect a material expression output to one of the material property inputs (e.g. diffuse color, opacity etc)\n@param  FromExpression          Expression to make connection from\n@param  FromOutputName          Name of output of FromExpression to make connection from\n@param  Property                        Property input on material to make connection to" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "ConnectMaterialProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::MaterialEditingLibrary_eventConnectMaterialProperty_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics
	{
		struct MaterialEditingLibrary_eventCreateMaterialExpression_Parms
		{
			UMaterial* Material;
			TSubclassOf<UMaterialExpression>  ExpressionClass;
			int32 NodePosX;
			int32 NodePosY;
			UMaterialExpression* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ExpressionClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodePosX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodePosY;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpression_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_ExpressionClass = { "ExpressionClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpression_Parms, ExpressionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_NodePosX = { "NodePosX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpression_Parms, NodePosX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_NodePosY = { "NodePosY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpression_Parms, NodePosY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpression_Parms, ReturnValue), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_ExpressionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_NodePosX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_NodePosY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** \n\x09 *\x09""Create a new material expression node within the supplied material \n\x09 *\x09@param\x09Material\x09\x09\x09Material asset to add an expression to\n\x09 *\x09@param\x09""ExpressionClass\x09\x09""Class of expression to add\n\x09 *\x09@param\x09NodePosX\x09\x09\x09X position of new expression node\n\x09 *\x09@param\x09NodePosY\x09\x09\x09Y position of new expression node\n\x09 */" },
		{ "CPP_Default_NodePosX", "0" },
		{ "CPP_Default_NodePosY", "0" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Create a new material expression node within the supplied material\n@param  Material                        Material asset to add an expression to\n@param  ExpressionClass         Class of expression to add\n@param  NodePosX                        X position of new expression node\n@param  NodePosY                        Y position of new expression node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "CreateMaterialExpression", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::MaterialEditingLibrary_eventCreateMaterialExpression_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics
	{
		struct MaterialEditingLibrary_eventCreateMaterialExpressionInFunction_Parms
		{
			UMaterialFunction* MaterialFunction;
			TSubclassOf<UMaterialExpression>  ExpressionClass;
			int32 NodePosX;
			int32 NodePosY;
			UMaterialExpression* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialFunction;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ExpressionClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodePosX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodePosY;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_MaterialFunction = { "MaterialFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpressionInFunction_Parms, MaterialFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_ExpressionClass = { "ExpressionClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpressionInFunction_Parms, ExpressionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_NodePosX = { "NodePosX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpressionInFunction_Parms, NodePosX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_NodePosY = { "NodePosY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpressionInFunction_Parms, NodePosY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventCreateMaterialExpressionInFunction_Parms, ReturnValue), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_MaterialFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_ExpressionClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_NodePosX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_NodePosY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/**\n\x09*\x09""Create a new material expression node within the supplied material function\n\x09*\x09@param\x09MaterialFunction\x09Material function asset to add an expression to\n\x09*\x09@param\x09""ExpressionClass\x09\x09""Class of expression to add\n\x09*\x09@param\x09NodePosX\x09\x09\x09X position of new expression node\n\x09*\x09@param\x09NodePosY\x09\x09\x09Y position of new expression node\n\x09*/" },
		{ "CPP_Default_NodePosX", "0" },
		{ "CPP_Default_NodePosY", "0" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Create a new material expression node within the supplied material function\n@param  MaterialFunction        Material function asset to add an expression to\n@param  ExpressionClass         Class of expression to add\n@param  NodePosX                        X position of new expression node\n@param  NodePosY                        Y position of new expression node" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "CreateMaterialExpressionInFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::MaterialEditingLibrary_eventCreateMaterialExpressionInFunction_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics
	{
		struct MaterialEditingLibrary_eventDeleteAllMaterialExpressions_Parms
		{
			UMaterial* Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventDeleteAllMaterialExpressions_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Delete all material expressions in the supplied material */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Delete all material expressions in the supplied material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "DeleteAllMaterialExpressions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::MaterialEditingLibrary_eventDeleteAllMaterialExpressions_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics
	{
		struct MaterialEditingLibrary_eventDeleteAllMaterialExpressionsInFunction_Parms
		{
			UMaterialFunction* MaterialFunction;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialFunction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::NewProp_MaterialFunction = { "MaterialFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventDeleteAllMaterialExpressionsInFunction_Parms, MaterialFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::NewProp_MaterialFunction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Delete all material expressions in the supplied material function */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Delete all material expressions in the supplied material function" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "DeleteAllMaterialExpressionsInFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::MaterialEditingLibrary_eventDeleteAllMaterialExpressionsInFunction_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics
	{
		struct MaterialEditingLibrary_eventDeleteMaterialExpression_Parms
		{
			UMaterial* Material;
			UMaterialExpression* Expression;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Expression;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventDeleteMaterialExpression_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventDeleteMaterialExpression_Parms, Expression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::NewProp_Expression,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Delete a specific expression from a material. Will disconnect from other expressions. */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Delete a specific expression from a material. Will disconnect from other expressions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "DeleteMaterialExpression", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::MaterialEditingLibrary_eventDeleteMaterialExpression_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics
	{
		struct MaterialEditingLibrary_eventDeleteMaterialExpressionInFunction_Parms
		{
			UMaterialFunction* MaterialFunction;
			UMaterialExpression* Expression;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialFunction;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Expression;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::NewProp_MaterialFunction = { "MaterialFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventDeleteMaterialExpressionInFunction_Parms, MaterialFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventDeleteMaterialExpressionInFunction_Parms, Expression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::NewProp_MaterialFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::NewProp_Expression,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Delete a specific expression from a material function. Will disconnect from other expressions. */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Delete a specific expression from a material function. Will disconnect from other expressions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "DeleteMaterialExpressionInFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::MaterialEditingLibrary_eventDeleteMaterialExpressionInFunction_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression_Statics
	{
		struct MaterialEditingLibrary_eventDuplicateMaterialExpression_Parms
		{
			UMaterial* Material;
			UMaterialFunction* MaterialFunction;
			UMaterialExpression* Expression;
			UMaterialExpression* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialFunction;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Expression;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventDuplicateMaterialExpression_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression_Statics::NewProp_MaterialFunction = { "MaterialFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventDuplicateMaterialExpression_Parms, MaterialFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventDuplicateMaterialExpression_Parms, Expression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventDuplicateMaterialExpression_Parms, ReturnValue), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression_Statics::NewProp_MaterialFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression_Statics::NewProp_Expression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** \n\x09 *\x09""Duplicates the provided material expression adding it to the same material / material function, and copying parameters.\n\x09 *  Note: Does not duplicate transient properties (Ex: GraphNode).\n\x09 *\n\x09 *\x09@param\x09Material\x09\x09\x09Material asset to add an expression to\n\x09 *\x09@param\x09MaterialFunction\x09Specified if adding an expression to a MaterialFunction, used as Outer for new expression object\n\x09 *\x09@param\x09SourceExpression\x09""Expression to be duplicated\n\x09 */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Duplicates the provided material expression adding it to the same material / material function, and copying parameters.\nNote: Does not duplicate transient properties (Ex: GraphNode).\n\n@param  Material                        Material asset to add an expression to\n@param  MaterialFunction        Specified if adding an expression to a MaterialFunction, used as Outer for new expression object\n@param  SourceExpression        Expression to be duplicated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "DuplicateMaterialExpression", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression_Statics::MaterialEditingLibrary_eventDuplicateMaterialExpression_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetChildInstances_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct MaterialEditingLibrary_eventGetChildInstances_Parms
		{
			UMaterialInterface* Parent;
			TArray<FAssetData> ChildInstances;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChildInstances_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildInstances;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetChildInstances_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetChildInstances_Parms, Parent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetChildInstances_Statics::NewProp_ChildInstances_Inner = { "ChildInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetChildInstances_Statics::NewProp_ChildInstances = { "ChildInstances", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetChildInstances_Parms, ChildInstances), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetChildInstances_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetChildInstances_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetChildInstances_Statics::NewProp_ChildInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetChildInstances_Statics::NewProp_ChildInstances,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetChildInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Gets all direct child mat instances */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Gets all direct child mat instances" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetChildInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetChildInstances", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetChildInstances_Statics::MaterialEditingLibrary_eventGetChildInstances_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetChildInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetChildInstances_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetChildInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetChildInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetChildInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetChildInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics
	{
		struct MaterialEditingLibrary_eventGetInputNodeOutputNameForMaterialExpression_Parms
		{
			UMaterialExpression* MaterialExpression;
			UMaterialExpression* InputNode;
			FString OutputName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialExpression;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputNode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics::NewProp_MaterialExpression = { "MaterialExpression", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetInputNodeOutputNameForMaterialExpression_Parms, MaterialExpression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics::NewProp_InputNode = { "InputNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetInputNodeOutputNameForMaterialExpression_Parms, InputNode), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetInputNodeOutputNameForMaterialExpression_Parms, OutputName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventGetInputNodeOutputNameForMaterialExpression_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialEditingLibrary_eventGetInputNodeOutputNameForMaterialExpression_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics::NewProp_MaterialExpression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics::NewProp_InputNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics::NewProp_OutputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Get the output name of input node connected to MaterialExpression from an active material editor */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the output name of input node connected to MaterialExpression from an active material editor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetInputNodeOutputNameForMaterialExpression", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics::MaterialEditingLibrary_eventGetInputNodeOutputNameForMaterialExpression_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression_Statics
	{
		struct MaterialEditingLibrary_eventGetInputsForMaterialExpression_Parms
		{
			UMaterial* Material;
			UMaterialExpression* MaterialExpression;
			TArray<UMaterialExpression*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialExpression;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetInputsForMaterialExpression_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression_Statics::NewProp_MaterialExpression = { "MaterialExpression", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetInputsForMaterialExpression_Parms, MaterialExpression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetInputsForMaterialExpression_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression_Statics::NewProp_MaterialExpression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Get the set of nodes acting as inputs to a node from an active material editor */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the set of nodes acting as inputs to a node from an active material editor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetInputsForMaterialExpression", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression_Statics::MaterialEditingLibrary_eventGetInputsForMaterialExpression_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultScalarParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventGetMaterialDefaultScalarParameterValue_Parms
		{
			UMaterial* Material;
			FName ParameterName;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultScalarParameterValue_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialDefaultScalarParameterValue_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialDefaultScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultScalarParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialDefaultScalarParameterValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultScalarParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultScalarParameterValue_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultScalarParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultScalarParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Get the default scalar (float) parameter value from a Material */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the default scalar (float) parameter value from a Material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetMaterialDefaultScalarParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultScalarParameterValue_Statics::MaterialEditingLibrary_eventGetMaterialDefaultScalarParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultScalarParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultScalarParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventGetMaterialDefaultStaticSwitchParameterValue_Parms
		{
			UMaterial* Material;
			FName ParameterName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialDefaultStaticSwitchParameterValue_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialDefaultStaticSwitchParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventGetMaterialDefaultStaticSwitchParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialEditingLibrary_eventGetMaterialDefaultStaticSwitchParameterValue_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Get the default static switch parameter value from a Material */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the default static switch parameter value from a Material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetMaterialDefaultStaticSwitchParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue_Statics::MaterialEditingLibrary_eventGetMaterialDefaultStaticSwitchParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultTextureParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventGetMaterialDefaultTextureParameterValue_Parms
		{
			UMaterial* Material;
			FName ParameterName;
			UTexture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultTextureParameterValue_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialDefaultTextureParameterValue_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialDefaultTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultTextureParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialDefaultTextureParameterValue_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultTextureParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultTextureParameterValue_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultTextureParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultTextureParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Get the default texture parameter value from a Material  */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the default texture parameter value from a Material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetMaterialDefaultTextureParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultTextureParameterValue_Statics::MaterialEditingLibrary_eventGetMaterialDefaultTextureParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultTextureParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultVectorParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventGetMaterialDefaultVectorParameterValue_Parms
		{
			UMaterial* Material;
			FName ParameterName;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultVectorParameterValue_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialDefaultVectorParameterValue_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialDefaultVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultVectorParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialDefaultVectorParameterValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultVectorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultVectorParameterValue_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultVectorParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultVectorParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Get the default vector parameter value from a Material */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the default vector parameter value from a Material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetMaterialDefaultVectorParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultVectorParameterValue_Statics::MaterialEditingLibrary_eventGetMaterialDefaultVectorParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultVectorParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialExpressionNodePosition_Statics
	{
		struct MaterialEditingLibrary_eventGetMaterialExpressionNodePosition_Parms
		{
			UMaterialExpression* MaterialExpression;
			int32 NodePosX;
			int32 NodePosY;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialExpression;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodePosX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_NodePosY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialExpressionNodePosition_Statics::NewProp_MaterialExpression = { "MaterialExpression", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialExpressionNodePosition_Parms, MaterialExpression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialExpressionNodePosition_Statics::NewProp_NodePosX = { "NodePosX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialExpressionNodePosition_Parms, NodePosX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialExpressionNodePosition_Statics::NewProp_NodePosY = { "NodePosY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialExpressionNodePosition_Parms, NodePosY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialExpressionNodePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialExpressionNodePosition_Statics::NewProp_MaterialExpression,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialExpressionNodePosition_Statics::NewProp_NodePosX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialExpressionNodePosition_Statics::NewProp_NodePosY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialExpressionNodePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Get the position of the MaterialExpression node. */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the position of the MaterialExpression node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialExpressionNodePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetMaterialExpressionNodePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialExpressionNodePosition_Statics::MaterialEditingLibrary_eventGetMaterialExpressionNodePosition_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialExpressionNodePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialExpressionNodePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialExpressionNodePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialExpressionNodePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialExpressionNodePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialExpressionNodePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventGetMaterialInstanceRuntimeVirtualTextureParameterValue_Parms
		{
			UMaterialInstanceConstant* Instance;
			FName ParameterName;
			TEnumAsByte<EMaterialParameterAssociation> Association;
			URuntimeVirtualTexture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Association;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceRuntimeVirtualTextureParameterValue_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceRuntimeVirtualTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_Association = { "Association", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceRuntimeVirtualTextureParameterValue_Parms, Association), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(nullptr, 0) }; // 534775543
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceRuntimeVirtualTextureParameterValue_Parms, ReturnValue), Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_Association,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Get the current texture parameter value from a Material Instance */" },
		{ "CPP_Default_Association", "GlobalParameter" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the current texture parameter value from a Material Instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetMaterialInstanceRuntimeVirtualTextureParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::MaterialEditingLibrary_eventGetMaterialInstanceRuntimeVirtualTextureParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventGetMaterialInstanceScalarParameterValue_Parms
		{
			UMaterialInstanceConstant* Instance;
			FName ParameterName;
			TEnumAsByte<EMaterialParameterAssociation> Association;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Association;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceScalarParameterValue_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::NewProp_Association = { "Association", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceScalarParameterValue_Parms, Association), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(nullptr, 0) }; // 534775543
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceScalarParameterValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::NewProp_Association,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Get the current scalar (float) parameter value from a Material Instance */" },
		{ "CPP_Default_Association", "GlobalParameter" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the current scalar (float) parameter value from a Material Instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetMaterialInstanceScalarParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::MaterialEditingLibrary_eventGetMaterialInstanceScalarParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventGetMaterialInstanceSparseVolumeTextureParameterValue_Parms
		{
			UMaterialInstanceConstant* Instance;
			FName ParameterName;
			TEnumAsByte<EMaterialParameterAssociation> Association;
			USparseVolumeTexture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Association;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceSparseVolumeTextureParameterValue_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceSparseVolumeTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_Association = { "Association", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceSparseVolumeTextureParameterValue_Parms, Association), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(nullptr, 0) }; // 534775543
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceSparseVolumeTextureParameterValue_Parms, ReturnValue), Z_Construct_UClass_USparseVolumeTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_Association,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Get the current texture parameter value from a Material Instance */" },
		{ "CPP_Default_Association", "GlobalParameter" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the current texture parameter value from a Material Instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetMaterialInstanceSparseVolumeTextureParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue_Statics::MaterialEditingLibrary_eventGetMaterialInstanceSparseVolumeTextureParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventGetMaterialInstanceStaticSwitchParameterValue_Parms
		{
			UMaterialInstanceConstant* Instance;
			FName ParameterName;
			TEnumAsByte<EMaterialParameterAssociation> Association;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Association;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceStaticSwitchParameterValue_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceStaticSwitchParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_Association = { "Association", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceStaticSwitchParameterValue_Parms, Association), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(nullptr, 0) }; // 534775543
	void Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventGetMaterialInstanceStaticSwitchParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialEditingLibrary_eventGetMaterialInstanceStaticSwitchParameterValue_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_Association,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Get the current static switch parameter value from a Material Instance */" },
		{ "CPP_Default_Association", "GlobalParameter" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the current static switch parameter value from a Material Instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetMaterialInstanceStaticSwitchParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics::MaterialEditingLibrary_eventGetMaterialInstanceStaticSwitchParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventGetMaterialInstanceTextureParameterValue_Parms
		{
			UMaterialInstanceConstant* Instance;
			FName ParameterName;
			TEnumAsByte<EMaterialParameterAssociation> Association;
			UTexture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Association;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceTextureParameterValue_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::NewProp_Association = { "Association", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceTextureParameterValue_Parms, Association), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(nullptr, 0) }; // 534775543
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceTextureParameterValue_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::NewProp_Association,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Get the current texture parameter value from a Material Instance */" },
		{ "CPP_Default_Association", "GlobalParameter" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the current texture parameter value from a Material Instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetMaterialInstanceTextureParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::MaterialEditingLibrary_eventGetMaterialInstanceTextureParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventGetMaterialInstanceVectorParameterValue_Parms
		{
			UMaterialInstanceConstant* Instance;
			FName ParameterName;
			TEnumAsByte<EMaterialParameterAssociation> Association;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Association;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceVectorParameterValue_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::NewProp_Association = { "Association", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceVectorParameterValue_Parms, Association), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(nullptr, 0) }; // 534775543
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialInstanceVectorParameterValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::NewProp_Association,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Get the current vector parameter value from a Material Instance */" },
		{ "CPP_Default_Association", "GlobalParameter" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the current vector parameter value from a Material Instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetMaterialInstanceVectorParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::MaterialEditingLibrary_eventGetMaterialInstanceVectorParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNode_Statics
	{
		struct MaterialEditingLibrary_eventGetMaterialPropertyInputNode_Parms
		{
			UMaterial* Material;
			TEnumAsByte<EMaterialProperty> Property;
			UMaterialExpression* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Property;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNode_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialPropertyInputNode_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNode_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialPropertyInputNode_Parms, Property), Z_Construct_UEnum_Engine_EMaterialProperty, METADATA_PARAMS(nullptr, 0) }; // 3911056803
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialPropertyInputNode_Parms, ReturnValue), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNode_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNode_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Get the node providing the output for a given material property from an active material editor */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the node providing the output for a given material property from an active material editor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetMaterialPropertyInputNode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNode_Statics::MaterialEditingLibrary_eventGetMaterialPropertyInputNode_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNodeOutputName_Statics
	{
		struct MaterialEditingLibrary_eventGetMaterialPropertyInputNodeOutputName_Parms
		{
			UMaterial* Material;
			TEnumAsByte<EMaterialProperty> Property;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Property;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNodeOutputName_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialPropertyInputNodeOutputName_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNodeOutputName_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialPropertyInputNodeOutputName_Parms, Property), Z_Construct_UEnum_Engine_EMaterialProperty, METADATA_PARAMS(nullptr, 0) }; // 3911056803
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNodeOutputName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialPropertyInputNodeOutputName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNodeOutputName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNodeOutputName_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNodeOutputName_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNodeOutputName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNodeOutputName_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Get the node output name providing the output for a given material property from an active material editor */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the node output name providing the output for a given material property from an active material editor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNodeOutputName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetMaterialPropertyInputNodeOutputName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNodeOutputName_Statics::MaterialEditingLibrary_eventGetMaterialPropertyInputNodeOutputName_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNodeOutputName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNodeOutputName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNodeOutputName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNodeOutputName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNodeOutputName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNodeOutputName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialSelectedNodes_Statics
	{
		struct MaterialEditingLibrary_eventGetMaterialSelectedNodes_Parms
		{
			UMaterial* Material;
			TSet<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialSelectedNodes_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialSelectedNodes_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialSelectedNodes_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialSelectedNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetMaterialSelectedNodes_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialSelectedNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialSelectedNodes_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialSelectedNodes_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialSelectedNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialSelectedNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Get the set of selected nodes from an active material editor */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the set of selected nodes from an active material editor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialSelectedNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetMaterialSelectedNodes", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialSelectedNodes_Statics::MaterialEditingLibrary_eventGetMaterialSelectedNodes_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialSelectedNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialSelectedNodes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialSelectedNodes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialSelectedNodes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialSelectedNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialSelectedNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics
	{
		struct MaterialEditingLibrary_eventGetNumMaterialExpressions_Parms
		{
			const UMaterial* Material;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::NewProp_Material_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetNumMaterialExpressions_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetNumMaterialExpressions_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Returns number of material expressions in the supplied material */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Returns number of material expressions in the supplied material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetNumMaterialExpressions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::MaterialEditingLibrary_eventGetNumMaterialExpressions_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics
	{
		struct MaterialEditingLibrary_eventGetNumMaterialExpressionsInFunction_Parms
		{
			const UMaterialFunction* MaterialFunction;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFunction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialFunction;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::NewProp_MaterialFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::NewProp_MaterialFunction = { "MaterialFunction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetNumMaterialExpressionsInFunction_Parms, MaterialFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::NewProp_MaterialFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::NewProp_MaterialFunction_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetNumMaterialExpressionsInFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::NewProp_MaterialFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Returns number of material expressions in the supplied material */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Returns number of material expressions in the supplied material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetNumMaterialExpressionsInFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::MaterialEditingLibrary_eventGetNumMaterialExpressionsInFunction_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterNames_Statics
	{
		struct MaterialEditingLibrary_eventGetScalarParameterNames_Parms
		{
			UMaterialInterface* Material;
			TArray<FName> ParameterNames;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterNames_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetScalarParameterNames_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterNames_Statics::NewProp_ParameterNames_Inner = { "ParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterNames_Statics::NewProp_ParameterNames = { "ParameterNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetScalarParameterNames_Parms, ParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterNames_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterNames_Statics::NewProp_ParameterNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterNames_Statics::NewProp_ParameterNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Gets all scalar parameter names */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Gets all scalar parameter names" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetScalarParameterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterNames_Statics::MaterialEditingLibrary_eventGetScalarParameterNames_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct MaterialEditingLibrary_eventGetScalarParameterSource_Parms
		{
			UMaterialInterface* Material;
			FName ParameterName;
			FSoftObjectPath ParameterSource;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterSource;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetScalarParameterSource_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetScalarParameterSource_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::NewProp_ParameterName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::NewProp_ParameterSource = { "ParameterSource", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetScalarParameterSource_Parms, ParameterSource), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventGetScalarParameterSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialEditingLibrary_eventGetScalarParameterSource_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::NewProp_ParameterSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/**\n\x09*\x09Returns the path of the asset where the parameter originated, as well as true/false if it was found\n\x09*\x09@param\x09Material\x09The material or material instance you want to look up a parameter from\n\x09*\x09@param\x09ParameterName\x09\x09The parameter name\n\x09*\x09@param\x09ParameterSource\x09\x09The soft object path of the asset the parameter originates in \n\x09*\x09@return\x09Whether or not the parameter was found in this material\n\x09*/" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Returns the path of the asset where the parameter originated, as well as true/false if it was found\n@param  Material        The material or material instance you want to look up a parameter from\n@param  ParameterName           The parameter name\n@param  ParameterSource         The soft object path of the asset the parameter originates in\n@return Whether or not the parameter was found in this material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetScalarParameterSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::MaterialEditingLibrary_eventGetScalarParameterSource_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterNames_Statics
	{
		struct MaterialEditingLibrary_eventGetStaticSwitchParameterNames_Parms
		{
			UMaterialInterface* Material;
			TArray<FName> ParameterNames;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterNames_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetStaticSwitchParameterNames_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterNames_Statics::NewProp_ParameterNames_Inner = { "ParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterNames_Statics::NewProp_ParameterNames = { "ParameterNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetStaticSwitchParameterNames_Parms, ParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterNames_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterNames_Statics::NewProp_ParameterNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterNames_Statics::NewProp_ParameterNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Gets all static switch parameter names */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Gets all static switch parameter names" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetStaticSwitchParameterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterNames_Statics::MaterialEditingLibrary_eventGetStaticSwitchParameterNames_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct MaterialEditingLibrary_eventGetStaticSwitchParameterSource_Parms
		{
			UMaterialInterface* Material;
			FName ParameterName;
			FSoftObjectPath ParameterSource;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterSource;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetStaticSwitchParameterSource_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetStaticSwitchParameterSource_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::NewProp_ParameterName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::NewProp_ParameterSource = { "ParameterSource", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetStaticSwitchParameterSource_Parms, ParameterSource), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventGetStaticSwitchParameterSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialEditingLibrary_eventGetStaticSwitchParameterSource_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::NewProp_ParameterSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/**\n\x09*\x09Returns the path of the asset where the parameter originated, as well as true/false if it was found\n\x09*\x09@param\x09Material\x09The material or material instance you want to look up a parameter from\n\x09*\x09@param\x09ParameterName\x09\x09The parameter name\n\x09*\x09@param\x09ParameterSource\x09\x09The soft object path of the asset the parameter originates in\n\x09*\x09@return\x09Whether or not the parameter was found in this material\n\x09*/" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Returns the path of the asset where the parameter originated, as well as true/false if it was found\n@param  Material        The material or material instance you want to look up a parameter from\n@param  ParameterName           The parameter name\n@param  ParameterSource         The soft object path of the asset the parameter originates in\n@return Whether or not the parameter was found in this material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetStaticSwitchParameterSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::MaterialEditingLibrary_eventGetStaticSwitchParameterSource_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetStatistics_Statics
	{
		struct MaterialEditingLibrary_eventGetStatistics_Parms
		{
			UMaterialInterface* Material;
			FMaterialStatistics ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetStatistics_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetStatistics_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetStatistics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetStatistics_Parms, ReturnValue), Z_Construct_UScriptStruct_FMaterialStatistics, METADATA_PARAMS(nullptr, 0) }; // 1475469770
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetStatistics_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetStatistics_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetStatistics_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetStatistics_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Returns statistics about the given material */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Returns statistics about the given material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetStatistics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetStatistics", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetStatistics_Statics::MaterialEditingLibrary_eventGetStatistics_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetStatistics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetStatistics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetStatistics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetStatistics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetStatistics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetStatistics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterNames_Statics
	{
		struct MaterialEditingLibrary_eventGetTextureParameterNames_Parms
		{
			UMaterialInterface* Material;
			TArray<FName> ParameterNames;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterNames_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetTextureParameterNames_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterNames_Statics::NewProp_ParameterNames_Inner = { "ParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterNames_Statics::NewProp_ParameterNames = { "ParameterNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetTextureParameterNames_Parms, ParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterNames_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterNames_Statics::NewProp_ParameterNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterNames_Statics::NewProp_ParameterNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Gets all texture parameter names */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Gets all texture parameter names" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetTextureParameterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterNames_Statics::MaterialEditingLibrary_eventGetTextureParameterNames_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct MaterialEditingLibrary_eventGetTextureParameterSource_Parms
		{
			UMaterialInterface* Material;
			FName ParameterName;
			FSoftObjectPath ParameterSource;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterSource;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetTextureParameterSource_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetTextureParameterSource_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::NewProp_ParameterName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::NewProp_ParameterSource = { "ParameterSource", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetTextureParameterSource_Parms, ParameterSource), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventGetTextureParameterSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialEditingLibrary_eventGetTextureParameterSource_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::NewProp_ParameterSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/**\n\x09*\x09Returns the path of the asset where the parameter originated, as well as true/false if it was found\n\x09*\x09@param\x09Material\x09The material or material instance you want to look up a parameter from\n\x09*\x09@param\x09ParameterName\x09\x09The parameter name\n\x09*\x09@param\x09ParameterSource\x09\x09The soft object path of the asset the parameter originates in\n\x09*\x09@return\x09Whether or not the parameter was found in this material\n\x09*/" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Returns the path of the asset where the parameter originated, as well as true/false if it was found\n@param  Material        The material or material instance you want to look up a parameter from\n@param  ParameterName           The parameter name\n@param  ParameterSource         The soft object path of the asset the parameter originates in\n@return Whether or not the parameter was found in this material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetTextureParameterSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::MaterialEditingLibrary_eventGetTextureParameterSource_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetUsedTextures_Statics
	{
		struct MaterialEditingLibrary_eventGetUsedTextures_Parms
		{
			UMaterial* Material;
			TArray<UTexture*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetUsedTextures_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetUsedTextures_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetUsedTextures_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetUsedTextures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetUsedTextures_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetUsedTextures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetUsedTextures_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetUsedTextures_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetUsedTextures_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetUsedTextures_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Get the list of textures used by a material */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Get the list of textures used by a material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetUsedTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetUsedTextures", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetUsedTextures_Statics::MaterialEditingLibrary_eventGetUsedTextures_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetUsedTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetUsedTextures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetUsedTextures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetUsedTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetUsedTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetUsedTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterNames_Statics
	{
		struct MaterialEditingLibrary_eventGetVectorParameterNames_Parms
		{
			UMaterialInterface* Material;
			TArray<FName> ParameterNames;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterNames_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetVectorParameterNames_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterNames_Statics::NewProp_ParameterNames_Inner = { "ParameterNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterNames_Statics::NewProp_ParameterNames = { "ParameterNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetVectorParameterNames_Parms, ParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterNames_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterNames_Statics::NewProp_ParameterNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterNames_Statics::NewProp_ParameterNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Gets all vector parameter names */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Gets all vector parameter names" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetVectorParameterNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterNames_Statics::MaterialEditingLibrary_eventGetVectorParameterNames_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct MaterialEditingLibrary_eventGetVectorParameterSource_Parms
		{
			UMaterialInterface* Material;
			FName ParameterName;
			FSoftObjectPath ParameterSource;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterSource;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetVectorParameterSource_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetVectorParameterSource_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::NewProp_ParameterName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::NewProp_ParameterSource = { "ParameterSource", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventGetVectorParameterSource_Parms, ParameterSource), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventGetVectorParameterSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialEditingLibrary_eventGetVectorParameterSource_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::NewProp_ParameterSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/**\n\x09*\x09Returns the path of the asset where the parameter originated, as well as true/false if it was found\n\x09*\x09@param\x09Material\x09The material or material instance you want to look up a parameter from\n\x09*\x09@param\x09ParameterName\x09\x09The parameter name\n\x09*\x09@param\x09ParameterSource\x09\x09The soft object path of the asset the parameter originates in\n\x09*\x09@return\x09Whether or not the parameter was found in this material\n\x09*/" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Returns the path of the asset where the parameter originated, as well as true/false if it was found\n@param  Material        The material or material instance you want to look up a parameter from\n@param  ParameterName           The parameter name\n@param  ParameterSource         The soft object path of the asset the parameter originates in\n@return Whether or not the parameter was found in this material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "GetVectorParameterSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::MaterialEditingLibrary_eventGetVectorParameterSource_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage_Statics
	{
		struct MaterialEditingLibrary_eventHasMaterialUsage_Parms
		{
			UMaterial* Material;
			TEnumAsByte<EMaterialUsage> Usage;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Usage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventHasMaterialUsage_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage_Statics::NewProp_Usage = { "Usage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventHasMaterialUsage_Parms, Usage), Z_Construct_UEnum_Engine_EMaterialUsage, METADATA_PARAMS(nullptr, 0) }; // 3846502480
	void Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventHasMaterialUsage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialEditingLibrary_eventHasMaterialUsage_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage_Statics::NewProp_Usage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/**\n\x09 *\x09""Check if a particular usage is enabled for the supplied material (e.g. SkeletalMesh, ParticleSprite etc)\n\x09 *\x09@param\x09Material\x09\x09\x09Material to check usage for\n\x09 *\x09@param\x09Usage\x09\x09\x09\x09Usage type to check for this material\n\x09 */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Check if a particular usage is enabled for the supplied material (e.g. SkeletalMesh, ParticleSprite etc)\n@param  Material                        Material to check usage for\n@param  Usage                           Usage type to check for this material" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "HasMaterialUsage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage_Statics::MaterialEditingLibrary_eventHasMaterialUsage_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics
	{
		struct MaterialEditingLibrary_eventLayoutMaterialExpressions_Parms
		{
			UMaterial* Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventLayoutMaterialExpressions_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/**\n\x09 *\x09Layouts the expressions in a grid pattern\n\x09 */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Layouts the expressions in a grid pattern" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "LayoutMaterialExpressions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::MaterialEditingLibrary_eventLayoutMaterialExpressions_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics
	{
		struct MaterialEditingLibrary_eventLayoutMaterialFunctionExpressions_Parms
		{
			UMaterialFunction* MaterialFunction;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialFunction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::NewProp_MaterialFunction = { "MaterialFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventLayoutMaterialFunctionExpressions_Parms, MaterialFunction), Z_Construct_UClass_UMaterialFunction_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::NewProp_MaterialFunction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/**\n\x09 *\x09Layouts the expressions in a grid pattern\n\x09 */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Layouts the expressions in a grid pattern" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "LayoutMaterialFunctionExpressions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::MaterialEditingLibrary_eventLayoutMaterialFunctionExpressions_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics
	{
		struct MaterialEditingLibrary_eventRecompileMaterial_Parms
		{
			UMaterial* Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventRecompileMaterial_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** \n\x09 *\x09Trigger a recompile of a material. Must be performed after making changes to the graph to have changes reflected.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Trigger a recompile of a material. Must be performed after making changes to the graph to have changes reflected." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "RecompileMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::MaterialEditingLibrary_eventRecompileMaterial_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics
	{
		struct MaterialEditingLibrary_eventSetMaterialInstanceParent_Parms
		{
			UMaterialInstanceConstant* Instance;
			UMaterialInterface* NewParent;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewParent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceParent_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::NewProp_NewParent = { "NewParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceParent_Parms, NewParent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::NewProp_NewParent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Set the parent Material or Material Instance to use for this Material Instance */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Set the parent Material or Material Instance to use for this Material Instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "SetMaterialInstanceParent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::MaterialEditingLibrary_eventSetMaterialInstanceParent_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventSetMaterialInstanceRuntimeVirtualTextureParameterValue_Parms
		{
			UMaterialInstanceConstant* Instance;
			FName ParameterName;
			URuntimeVirtualTexture* Value;
			TEnumAsByte<EMaterialParameterAssociation> Association;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Association;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceRuntimeVirtualTextureParameterValue_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceRuntimeVirtualTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceRuntimeVirtualTextureParameterValue_Parms, Value), Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_Association = { "Association", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceRuntimeVirtualTextureParameterValue_Parms, Association), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(nullptr, 0) }; // 534775543
	void Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventSetMaterialInstanceRuntimeVirtualTextureParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialEditingLibrary_eventSetMaterialInstanceRuntimeVirtualTextureParameterValue_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_Association,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Set the texture parameter value for a Material Instance */" },
		{ "CPP_Default_Association", "GlobalParameter" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Set the texture parameter value for a Material Instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "SetMaterialInstanceRuntimeVirtualTextureParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::MaterialEditingLibrary_eventSetMaterialInstanceRuntimeVirtualTextureParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventSetMaterialInstanceScalarParameterValue_Parms
		{
			UMaterialInstanceConstant* Instance;
			FName ParameterName;
			float Value;
			TEnumAsByte<EMaterialParameterAssociation> Association;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Association;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceScalarParameterValue_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceScalarParameterValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_Association = { "Association", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceScalarParameterValue_Parms, Association), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(nullptr, 0) }; // 534775543
	void Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventSetMaterialInstanceScalarParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialEditingLibrary_eventSetMaterialInstanceScalarParameterValue_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_Association,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Set the scalar (float) parameter value for a Material Instance */" },
		{ "CPP_Default_Association", "GlobalParameter" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Set the scalar (float) parameter value for a Material Instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "SetMaterialInstanceScalarParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::MaterialEditingLibrary_eventSetMaterialInstanceScalarParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventSetMaterialInstanceSparseVolumeTextureParameterValue_Parms
		{
			UMaterialInstanceConstant* Instance;
			FName ParameterName;
			USparseVolumeTexture* Value;
			TEnumAsByte<EMaterialParameterAssociation> Association;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Association;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceSparseVolumeTextureParameterValue_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceSparseVolumeTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceSparseVolumeTextureParameterValue_Parms, Value), Z_Construct_UClass_USparseVolumeTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_Association = { "Association", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceSparseVolumeTextureParameterValue_Parms, Association), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(nullptr, 0) }; // 534775543
	void Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventSetMaterialInstanceSparseVolumeTextureParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialEditingLibrary_eventSetMaterialInstanceSparseVolumeTextureParameterValue_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_Association,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Set the texture parameter value for a Material Instance */" },
		{ "CPP_Default_Association", "GlobalParameter" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Set the texture parameter value for a Material Instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "SetMaterialInstanceSparseVolumeTextureParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::MaterialEditingLibrary_eventSetMaterialInstanceSparseVolumeTextureParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventSetMaterialInstanceStaticSwitchParameterValue_Parms
		{
			UMaterialInstanceConstant* Instance;
			FName ParameterName;
			bool Value;
			TEnumAsByte<EMaterialParameterAssociation> Association;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Association;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceStaticSwitchParameterValue_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceStaticSwitchParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventSetMaterialInstanceStaticSwitchParameterValue_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialEditingLibrary_eventSetMaterialInstanceStaticSwitchParameterValue_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_Association = { "Association", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceStaticSwitchParameterValue_Parms, Association), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(nullptr, 0) }; // 534775543
	void Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventSetMaterialInstanceStaticSwitchParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialEditingLibrary_eventSetMaterialInstanceStaticSwitchParameterValue_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_Association,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Set the static switch parameter value for a Material Instance */" },
		{ "CPP_Default_Association", "GlobalParameter" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Set the static switch parameter value for a Material Instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "SetMaterialInstanceStaticSwitchParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::MaterialEditingLibrary_eventSetMaterialInstanceStaticSwitchParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventSetMaterialInstanceTextureParameterValue_Parms
		{
			UMaterialInstanceConstant* Instance;
			FName ParameterName;
			UTexture* Value;
			TEnumAsByte<EMaterialParameterAssociation> Association;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Association;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceTextureParameterValue_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceTextureParameterValue_Parms, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_Association = { "Association", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceTextureParameterValue_Parms, Association), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(nullptr, 0) }; // 534775543
	void Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventSetMaterialInstanceTextureParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialEditingLibrary_eventSetMaterialInstanceTextureParameterValue_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_Association,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Set the texture parameter value for a Material Instance */" },
		{ "CPP_Default_Association", "GlobalParameter" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Set the texture parameter value for a Material Instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "SetMaterialInstanceTextureParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::MaterialEditingLibrary_eventSetMaterialInstanceTextureParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics
	{
		struct MaterialEditingLibrary_eventSetMaterialInstanceVectorParameterValue_Parms
		{
			UMaterialInstanceConstant* Instance;
			FName ParameterName;
			FLinearColor Value;
			TEnumAsByte<EMaterialParameterAssociation> Association;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Association;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceVectorParameterValue_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceVectorParameterValue_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_Association = { "Association", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialInstanceVectorParameterValue_Parms, Association), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(nullptr, 0) }; // 534775543
	void Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventSetMaterialInstanceVectorParameterValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialEditingLibrary_eventSetMaterialInstanceVectorParameterValue_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_Instance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_Association,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Set the vector parameter value for a Material Instance */" },
		{ "CPP_Default_Association", "GlobalParameter" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Set the vector parameter value for a Material Instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "SetMaterialInstanceVectorParameterValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::MaterialEditingLibrary_eventSetMaterialInstanceVectorParameterValue_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics
	{
		struct MaterialEditingLibrary_eventSetMaterialUsage_Parms
		{
			UMaterial* Material;
			TEnumAsByte<EMaterialUsage> Usage;
			bool bNeedsRecompile;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Usage;
		static void NewProp_bNeedsRecompile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsRecompile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialUsage_Parms, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_Usage = { "Usage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventSetMaterialUsage_Parms, Usage), Z_Construct_UEnum_Engine_EMaterialUsage, METADATA_PARAMS(nullptr, 0) }; // 3846502480
	void Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_bNeedsRecompile_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventSetMaterialUsage_Parms*)Obj)->bNeedsRecompile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_bNeedsRecompile = { "bNeedsRecompile", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialEditingLibrary_eventSetMaterialUsage_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_bNeedsRecompile_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MaterialEditingLibrary_eventSetMaterialUsage_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialEditingLibrary_eventSetMaterialUsage_Parms), &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_Usage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_bNeedsRecompile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** \n\x09 *\x09""Enable a particular usage for the supplied material (e.g. SkeletalMesh, ParticleSprite etc)\n\x09 *\x09@param\x09Material\x09\x09\x09Material to change usage for\n\x09 *\x09@param\x09Usage\x09\x09\x09\x09New usage type to enable for this material\n\x09 *\x09@param\x09""bNeedsRecompile\x09\x09Returned to indicate if material needs recompiling after this change\n\x09 */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Enable a particular usage for the supplied material (e.g. SkeletalMesh, ParticleSprite etc)\n@param  Material                        Material to change usage for\n@param  Usage                           New usage type to enable for this material\n@param  bNeedsRecompile         Returned to indicate if material needs recompiling after this change" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "SetMaterialUsage", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::MaterialEditingLibrary_eventSetMaterialUsage_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics
	{
		struct MaterialEditingLibrary_eventUpdateMaterialFunction_Parms
		{
			UMaterialFunctionInterface* MaterialFunction;
			UMaterial* PreviewMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialFunction;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::NewProp_MaterialFunction = { "MaterialFunction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventUpdateMaterialFunction_Parms, MaterialFunction), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::NewProp_PreviewMaterial = { "PreviewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventUpdateMaterialFunction_Parms, PreviewMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::NewProp_MaterialFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::NewProp_PreviewMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/**\n\x09 *\x09Update a Material Function after edits have been made.\n\x09 *\x09Will recompile any Materials that use the supplied Material Function.\n\x09 */" },
		{ "CPP_Default_PreviewMaterial", "None" },
		{ "HidePin", "PreviewMaterial" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Update a Material Function after edits have been made.\nWill recompile any Materials that use the supplied Material Function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "UpdateMaterialFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::MaterialEditingLibrary_eventUpdateMaterialFunction_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics
	{
		struct MaterialEditingLibrary_eventUpdateMaterialInstance_Parms
		{
			UMaterialInstanceConstant* Instance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialEditingLibrary_eventUpdateMaterialInstance_Parms, Instance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "MaterialEditing" },
		{ "Comment", "/** Called after making modifications to a Material Instance to recompile shaders etc. */" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Called after making modifications to a Material Instance to recompile shaders etc." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialEditingLibrary, nullptr, "UpdateMaterialInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::MaterialEditingLibrary_eventUpdateMaterialInstance_Parms), Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialEditingLibrary);
	UClass* Z_Construct_UClass_UMaterialEditingLibrary_NoRegister()
	{
		return UMaterialEditingLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialEditingLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialEditingLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialEditingLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_ClearAllMaterialInstanceParameters, "ClearAllMaterialInstanceParameters" }, // 2418103164
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialExpressions, "ConnectMaterialExpressions" }, // 173575884
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_ConnectMaterialProperty, "ConnectMaterialProperty" }, // 2914982401
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpression, "CreateMaterialExpression" }, // 2267704409
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_CreateMaterialExpressionInFunction, "CreateMaterialExpressionInFunction" }, // 3283900083
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressions, "DeleteAllMaterialExpressions" }, // 2189747871
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_DeleteAllMaterialExpressionsInFunction, "DeleteAllMaterialExpressionsInFunction" }, // 2947775590
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpression, "DeleteMaterialExpression" }, // 542689609
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_DeleteMaterialExpressionInFunction, "DeleteMaterialExpressionInFunction" }, // 1349995375
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_DuplicateMaterialExpression, "DuplicateMaterialExpression" }, // 1154678591
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetChildInstances, "GetChildInstances" }, // 186304208
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetInputNodeOutputNameForMaterialExpression, "GetInputNodeOutputNameForMaterialExpression" }, // 2084852661
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetInputsForMaterialExpression, "GetInputsForMaterialExpression" }, // 2010640266
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultScalarParameterValue, "GetMaterialDefaultScalarParameterValue" }, // 3236547506
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultStaticSwitchParameterValue, "GetMaterialDefaultStaticSwitchParameterValue" }, // 784358919
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultTextureParameterValue, "GetMaterialDefaultTextureParameterValue" }, // 1939421758
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialDefaultVectorParameterValue, "GetMaterialDefaultVectorParameterValue" }, // 1585076563
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialExpressionNodePosition, "GetMaterialExpressionNodePosition" }, // 956365259
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceRuntimeVirtualTextureParameterValue, "GetMaterialInstanceRuntimeVirtualTextureParameterValue" }, // 831683676
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceScalarParameterValue, "GetMaterialInstanceScalarParameterValue" }, // 1906109456
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceSparseVolumeTextureParameterValue, "GetMaterialInstanceSparseVolumeTextureParameterValue" }, // 607118386
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceStaticSwitchParameterValue, "GetMaterialInstanceStaticSwitchParameterValue" }, // 3460854448
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceTextureParameterValue, "GetMaterialInstanceTextureParameterValue" }, // 3160375064
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialInstanceVectorParameterValue, "GetMaterialInstanceVectorParameterValue" }, // 1970998435
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNode, "GetMaterialPropertyInputNode" }, // 1741508613
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialPropertyInputNodeOutputName, "GetMaterialPropertyInputNodeOutputName" }, // 1608059506
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetMaterialSelectedNodes, "GetMaterialSelectedNodes" }, // 2618096291
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressions, "GetNumMaterialExpressions" }, // 628395357
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetNumMaterialExpressionsInFunction, "GetNumMaterialExpressionsInFunction" }, // 4242981628
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterNames, "GetScalarParameterNames" }, // 1409503285
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetScalarParameterSource, "GetScalarParameterSource" }, // 679247194
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterNames, "GetStaticSwitchParameterNames" }, // 772254334
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetStaticSwitchParameterSource, "GetStaticSwitchParameterSource" }, // 4291609895
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetStatistics, "GetStatistics" }, // 2806933437
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterNames, "GetTextureParameterNames" }, // 3243647259
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetTextureParameterSource, "GetTextureParameterSource" }, // 777066854
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetUsedTextures, "GetUsedTextures" }, // 1575868370
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterNames, "GetVectorParameterNames" }, // 3617721495
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_GetVectorParameterSource, "GetVectorParameterSource" }, // 1018831571
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_HasMaterialUsage, "HasMaterialUsage" }, // 199150199
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialExpressions, "LayoutMaterialExpressions" }, // 406044870
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_LayoutMaterialFunctionExpressions, "LayoutMaterialFunctionExpressions" }, // 1902256777
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_RecompileMaterial, "RecompileMaterial" }, // 2303221762
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceParent, "SetMaterialInstanceParent" }, // 716904811
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceRuntimeVirtualTextureParameterValue, "SetMaterialInstanceRuntimeVirtualTextureParameterValue" }, // 2465424979
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceScalarParameterValue, "SetMaterialInstanceScalarParameterValue" }, // 19216655
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceSparseVolumeTextureParameterValue, "SetMaterialInstanceSparseVolumeTextureParameterValue" }, // 3247698010
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceStaticSwitchParameterValue, "SetMaterialInstanceStaticSwitchParameterValue" }, // 3830155436
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceTextureParameterValue, "SetMaterialInstanceTextureParameterValue" }, // 875796533
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialInstanceVectorParameterValue, "SetMaterialInstanceVectorParameterValue" }, // 1500633839
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_SetMaterialUsage, "SetMaterialUsage" }, // 2376993393
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialFunction, "UpdateMaterialFunction" }, // 3380991220
		{ &Z_Construct_UFunction_UMaterialEditingLibrary_UpdateMaterialInstance, "UpdateMaterialInstance" }, // 540848516
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditingLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Blueprint library for creating/editing Materials */" },
		{ "IncludePath", "MaterialEditingLibrary.h" },
		{ "ModuleRelativePath", "Public/MaterialEditingLibrary.h" },
		{ "ToolTip", "Blueprint library for creating/editing Materials" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialEditingLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialEditingLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialEditingLibrary_Statics::ClassParams = {
		&UMaterialEditingLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMaterialEditingLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditingLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialEditingLibrary()
	{
		if (!Z_Registration_Info_UClass_UMaterialEditingLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialEditingLibrary.OuterSingleton, Z_Construct_UClass_UMaterialEditingLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialEditingLibrary.OuterSingleton;
	}
	template<> MATERIALEDITOR_API UClass* StaticClass<UMaterialEditingLibrary>()
	{
		return UMaterialEditingLibrary::StaticClass();
	}
	UMaterialEditingLibrary::UMaterialEditingLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialEditingLibrary);
	UMaterialEditingLibrary::~UMaterialEditingLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_Statics::ScriptStructInfo[] = {
		{ FMaterialStatistics::StaticStruct, Z_Construct_UScriptStruct_FMaterialStatistics_Statics::NewStructOps, TEXT("MaterialStatistics"), &Z_Registration_Info_UScriptStruct_MaterialStatistics, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialStatistics), 1475469770U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialEditingLibrary, UMaterialEditingLibrary::StaticClass, TEXT("UMaterialEditingLibrary"), &Z_Registration_Info_UClass_UMaterialEditingLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialEditingLibrary), 2385845350U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_3588294982(TEXT("/Script/MaterialEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditingLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
