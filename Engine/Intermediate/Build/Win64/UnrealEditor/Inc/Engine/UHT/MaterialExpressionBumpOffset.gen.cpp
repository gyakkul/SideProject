// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionBumpOffset.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionBumpOffset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBumpOffset();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionBumpOffset_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionBumpOffset::StaticRegisterNativesUMaterialExpressionBumpOffset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionBumpOffset);
	UClass* Z_Construct_UClass_UMaterialExpressionBumpOffset_NoRegister()
	{
		return UMaterialExpressionBumpOffset::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Coordinate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Coordinate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightRatioInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HeightRatioInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencePlane_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReferencePlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstCoordinate_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ConstCoordinate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionBumpOffset.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Coordinate_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstCoordinate' if not specified" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Coordinate = { "Coordinate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionBumpOffset, Coordinate), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Coordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Coordinate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionBumpOffset, Height), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatioInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
		{ "RequiredInput", "false" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatioInput = { "HeightRatioInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionBumpOffset, HeightRatioInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatioInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatioInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatio_MetaData[] = {
		{ "Category", "MaterialExpressionBumpOffset" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
		{ "OverridingInputProperty", "HeightRatioInput" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatio = { "HeightRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionBumpOffset, HeightRatio), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ReferencePlane_MetaData[] = {
		{ "Category", "MaterialExpressionBumpOffset" },
		{ "Comment", "// Perceived height as a fraction of width.\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
		{ "ToolTip", "Perceived height as a fraction of width." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ReferencePlane = { "ReferencePlane", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionBumpOffset, ReferencePlane), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ReferencePlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ReferencePlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ConstCoordinate_MetaData[] = {
		{ "Category", "MaterialExpressionBumpOffset" },
		{ "Comment", "/** only used if Coordinate is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionBumpOffset.h" },
		{ "OverridingInputProperty", "Coordinate" },
		{ "ToolTip", "only used if Coordinate is not hooked up" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ConstCoordinate = { "ConstCoordinate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionBumpOffset, ConstCoordinate), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ConstCoordinate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ConstCoordinate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Coordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatioInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_HeightRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ReferencePlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::NewProp_ConstCoordinate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionBumpOffset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::ClassParams = {
		&UMaterialExpressionBumpOffset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::PropPointers),
		0,
		0x000820B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionBumpOffset()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionBumpOffset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionBumpOffset.OuterSingleton, Z_Construct_UClass_UMaterialExpressionBumpOffset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionBumpOffset.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionBumpOffset>()
	{
		return UMaterialExpressionBumpOffset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionBumpOffset);
	UMaterialExpressionBumpOffset::~UMaterialExpressionBumpOffset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBumpOffset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBumpOffset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionBumpOffset, UMaterialExpressionBumpOffset::StaticClass, TEXT("UMaterialExpressionBumpOffset"), &Z_Registration_Info_UClass_UMaterialExpressionBumpOffset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionBumpOffset), 564955037U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBumpOffset_h_33567990(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBumpOffset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionBumpOffset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
