// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Materials/MaterialExpressionLandscapeLayerBlend.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerBlend() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_NoRegister();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLayerBlendInput();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeLayerBlendType;
	static UEnum* ELandscapeLayerBlendType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeLayerBlendType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELandscapeLayerBlendType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeLayerBlendType"));
		}
		return Z_Registration_Info_UEnum_ELandscapeLayerBlendType.OuterSingleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeLayerBlendType>()
	{
		return ELandscapeLayerBlendType_StaticEnum();
	}
	struct Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType_Statics::Enumerators[] = {
		{ "LB_WeightBlend", (int64)LB_WeightBlend },
		{ "LB_AlphaBlend", (int64)LB_AlphaBlend },
		{ "LB_HeightBlend", (int64)LB_HeightBlend },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType_Statics::Enum_MetaDataParams[] = {
		{ "LB_AlphaBlend.Name", "LB_AlphaBlend" },
		{ "LB_HeightBlend.Name", "LB_HeightBlend" },
		{ "LB_WeightBlend.Name", "LB_WeightBlend" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		"ELandscapeLayerBlendType",
		"ELandscapeLayerBlendType",
		Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType()
	{
		if (!Z_Registration_Info_UEnum_ELandscapeLayerBlendType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeLayerBlendType.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELandscapeLayerBlendType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LayerBlendInput;
class UScriptStruct* FLayerBlendInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LayerBlendInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LayerBlendInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayerBlendInput, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LayerBlendInput"));
	}
	return Z_Registration_Info_UScriptStruct_LayerBlendInput.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLayerBlendInput>()
{
	return FLayerBlendInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLayerBlendInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeightInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviewWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstLayerInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstLayerInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstHeightInput_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstHeightInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerBlendInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayerBlendInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerName_MetaData[] = {
		{ "Category", "LayerBlendInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLayerBlendInput, LayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_BlendType_MetaData[] = {
		{ "Category", "LayerBlendInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_BlendType = { "BlendType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLayerBlendInput, BlendType), Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_BlendType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_BlendType_MetaData)) }; // 3961729380
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstLayerInput' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerInput = { "LayerInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLayerBlendInput, LayerInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_HeightInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstHeightInput' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_HeightInput = { "HeightInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLayerBlendInput, HeightInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_HeightInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_HeightInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_PreviewWeight_MetaData[] = {
		{ "Category", "LayerBlendInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_PreviewWeight = { "PreviewWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLayerBlendInput, PreviewWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_PreviewWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_PreviewWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstLayerInput_MetaData[] = {
		{ "Category", "LayerBlendInput" },
		{ "Comment", "/** only used if LayerInput is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
		{ "ToolTip", "only used if LayerInput is not hooked up" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstLayerInput = { "ConstLayerInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLayerBlendInput, ConstLayerInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstLayerInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstLayerInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstHeightInput_MetaData[] = {
		{ "Category", "LayerBlendInput" },
		{ "Comment", "/** only used if HeightInput is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
		{ "ToolTip", "only used if HeightInput is not hooked up" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstHeightInput = { "ConstHeightInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLayerBlendInput, ConstHeightInput), METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstHeightInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstHeightInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayerBlendInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_BlendType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_HeightInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_PreviewWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstLayerInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstHeightInput,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LayerBlendInput",
		sizeof(FLayerBlendInput),
		alignof(FLayerBlendInput),
		Z_Construct_UScriptStruct_FLayerBlendInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLayerBlendInput()
	{
		if (!Z_Registration_Info_UScriptStruct_LayerBlendInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LayerBlendInput.InnerSingleton, Z_Construct_UScriptStruct_FLayerBlendInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LayerBlendInput.InnerSingleton;
	}
	void UMaterialExpressionLandscapeLayerBlend::StaticRegisterNativesUMaterialExpressionLandscapeLayerBlend()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLandscapeLayerBlend);
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_NoRegister()
	{
		return UMaterialExpressionLandscapeLayerBlend::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Layers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLandscapeLayerBlend.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLayerBlendInput, METADATA_PARAMS(nullptr, 0) }; // 2538471104
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_Layers_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerBlend" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerBlend, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_Layers_MetaData)) }; // 2538471104
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_Layers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_Layers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLandscapeLayerBlend>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::ClassParams = {
		&UMaterialExpressionLandscapeLayerBlend::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::PropPointers),
		0,
		0x001020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<UMaterialExpressionLandscapeLayerBlend>()
	{
		return UMaterialExpressionLandscapeLayerBlend::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapeLayerBlend);
	UMaterialExpressionLandscapeLayerBlend::~UMaterialExpressionLandscapeLayerBlend() {}
	IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpressionLandscapeLayerBlend)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_Statics::EnumInfo[] = {
		{ ELandscapeLayerBlendType_StaticEnum, TEXT("ELandscapeLayerBlendType"), &Z_Registration_Info_UEnum_ELandscapeLayerBlendType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3961729380U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_Statics::ScriptStructInfo[] = {
		{ FLayerBlendInput::StaticStruct, Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewStructOps, TEXT("LayerBlendInput"), &Z_Registration_Info_UScriptStruct_LayerBlendInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayerBlendInput), 2538471104U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend, UMaterialExpressionLandscapeLayerBlend::StaticClass, TEXT("UMaterialExpressionLandscapeLayerBlend"), &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLandscapeLayerBlend), 495946128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_3702903378(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
