// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionTextureSample.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionTextureSample() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureBase();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSample();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionTextureSample_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESamplerSourceMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureMipValueMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionTextureSample::StaticRegisterNativesUMaterialExpressionTextureSample()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionTextureSample);
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSample_NoRegister()
	{
		return UMaterialExpressionTextureSample::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionTextureSample_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coordinates_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinates;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureObject_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MipValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoordinatesDX_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CoordinatesDX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CoordinatesDY_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CoordinatesDY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutomaticViewMipBiasValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AutomaticViewMipBiasValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipValueMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MipValueMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SamplerSource_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SamplerSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutomaticViewMipBias_MetaData[];
#endif
		static void NewProp_AutomaticViewMipBias_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutomaticViewMipBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConstCoordinate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstMipValue_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ConstMipValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpressionTextureBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionTextureSample.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_Coordinates_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstCoordinate' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_Coordinates = { "Coordinates", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSample, Coordinates), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_Coordinates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_Coordinates_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_TextureObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'Texture' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_TextureObject = { "TextureObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSample, TextureObject), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_TextureObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_TextureObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'AutomaticViewMipBias' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValue = { "MipValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSample, MipValue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Coordinates derivative over the X axis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDX = { "CoordinatesDX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSample, CoordinatesDX), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "RequiredInput", "true" },
		{ "ToolTip", "Coordinates derivative over the Y axis" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDY = { "CoordinatesDY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSample, CoordinatesDY), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBiasValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Ignored if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBiasValue = { "AutomaticViewMipBiasValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSample, AutomaticViewMipBiasValue), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBiasValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBiasValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValueMode_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSample" },
		{ "Comment", "/** Defines how the MipValue property is applied to the texture lookup */" },
		{ "DisplayName", "MipValueMode" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Defines how the MipValue property is applied to the texture lookup" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValueMode = { "MipValueMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSample, MipValueMode), Z_Construct_UEnum_Engine_ETextureMipValueMode, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValueMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValueMode_MetaData)) }; // 3480651946
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_SamplerSource_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSample" },
		{ "Comment", "/** \n\x09 * Controls where the sampler for this texture lookup will come from.  \n\x09 * Choose 'from texture asset' to make use of the UTexture addressing settings,\n\x09 * Otherwise use one of the global samplers, which will not consume a sampler slot.\n\x09 * This allows materials to use more than 16 unique textures on SM5 platforms.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Controls where the sampler for this texture lookup will come from.\nChoose 'from texture asset' to make use of the UTexture addressing settings,\nOtherwise use one of the global samplers, which will not consume a sampler slot.\nThis allows materials to use more than 16 unique textures on SM5 platforms." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_SamplerSource = { "SamplerSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSample, SamplerSource), Z_Construct_UEnum_Engine_ESamplerSourceMode, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_SamplerSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_SamplerSource_MetaData)) }; // 361913610
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBias_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSample" },
		{ "Comment", "/** Whether the texture should be sampled with per view mip biasing for sharper output with Temporal AA. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "ToolTip", "Whether the texture should be sampled with per view mip biasing for sharper output with Temporal AA." },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBias_SetBit(void* Obj)
	{
		((UMaterialExpressionTextureSample*)Obj)->AutomaticViewMipBias = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBias = { "AutomaticViewMipBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionTextureSample), &Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBias_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstCoordinate_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSample" },
		{ "Comment", "/** only used if Coordinates is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "OverridingInputProperty", "Coordinates" },
		{ "ToolTip", "only used if Coordinates is not hooked up" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstCoordinate = { "ConstCoordinate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSample, ConstCoordinate), nullptr, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstCoordinate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstMipValue_MetaData[] = {
		{ "Category", "MaterialExpressionTextureSample" },
		{ "Comment", "/** only used if MipValue is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionTextureSample.h" },
		{ "ToolTip", "only used if MipValue is not hooked up" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstMipValue = { "ConstMipValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionTextureSample, ConstMipValue), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstMipValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstMipValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_Coordinates,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_TextureObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_CoordinatesDY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBiasValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_MipValueMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_SamplerSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_AutomaticViewMipBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::NewProp_ConstMipValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionTextureSample>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::ClassParams = {
		&UMaterialExpressionTextureSample::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::PropPointers),
		0,
		0x001020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionTextureSample()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionTextureSample.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionTextureSample.OuterSingleton, Z_Construct_UClass_UMaterialExpressionTextureSample_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionTextureSample.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionTextureSample>()
	{
		return UMaterialExpressionTextureSample::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionTextureSample);
	UMaterialExpressionTextureSample::~UMaterialExpressionTextureSample() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionTextureSample, UMaterialExpressionTextureSample::StaticClass, TEXT("UMaterialExpressionTextureSample"), &Z_Registration_Info_UClass_UMaterialExpressionTextureSample, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionTextureSample), 2262803343U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_852400802(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionTextureSample_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
