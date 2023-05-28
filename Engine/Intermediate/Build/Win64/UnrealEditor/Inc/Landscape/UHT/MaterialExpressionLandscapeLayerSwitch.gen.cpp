// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Materials/MaterialExpressionLandscapeLayerSwitch.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerSwitch() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch();
	LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void UMaterialExpressionLandscapeLayerSwitch::StaticRegisterNativesUMaterialExpressionLandscapeLayerSwitch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLandscapeLayerSwitch);
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_NoRegister()
	{
		return UMaterialExpressionLandscapeLayerSwitch::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerUsed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerUsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerNotUsed_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerNotUsed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewUsed_MetaData[];
#endif
		static void NewProp_PreviewUsed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PreviewUsed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLandscapeLayerSwitch.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSwitch.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_LayerUsed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSwitch.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_LayerUsed = { "LayerUsed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerSwitch, LayerUsed), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_LayerUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_LayerUsed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_LayerNotUsed_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSwitch.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_LayerNotUsed = { "LayerNotUsed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerSwitch, LayerNotUsed), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_LayerNotUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_LayerNotUsed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerSwitch" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSwitch.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerSwitch, ParameterName), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_PreviewUsed_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerSwitch" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerSwitch.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_PreviewUsed_SetBit(void* Obj)
	{
		((UMaterialExpressionLandscapeLayerSwitch*)Obj)->PreviewUsed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_PreviewUsed = { "PreviewUsed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMaterialExpressionLandscapeLayerSwitch), &Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_PreviewUsed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_PreviewUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_PreviewUsed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_LayerUsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_LayerNotUsed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::NewProp_PreviewUsed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLandscapeLayerSwitch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::ClassParams = {
		&UMaterialExpressionLandscapeLayerSwitch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::PropPointers),
		0,
		0x001020B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<UMaterialExpressionLandscapeLayerSwitch>()
	{
		return UMaterialExpressionLandscapeLayerSwitch::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapeLayerSwitch);
	UMaterialExpressionLandscapeLayerSwitch::~UMaterialExpressionLandscapeLayerSwitch() {}
	IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpressionLandscapeLayerSwitch)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionLandscapeLayerSwitch, UMaterialExpressionLandscapeLayerSwitch::StaticClass, TEXT("UMaterialExpressionLandscapeLayerSwitch"), &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLandscapeLayerSwitch), 3569493328U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h_827262859(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerSwitch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
