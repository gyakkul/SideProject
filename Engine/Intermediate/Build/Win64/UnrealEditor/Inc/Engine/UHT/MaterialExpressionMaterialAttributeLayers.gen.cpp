// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionMaterialAttributeLayers.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionMaterialAttributeLayers() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialLayersFunctions();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMaterialExpressionMaterialAttributeLayers::StaticRegisterNativesUMaterialExpressionMaterialAttributeLayers()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionMaterialAttributeLayers);
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_NoRegister()
	{
		return UMaterialExpressionMaterialAttributeLayers::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLayers_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultLayers;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LayerCallers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerCallers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerCallers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumActiveLayerCallers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumActiveLayerCallers;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BlendCallers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendCallers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendCallers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumActiveBlendCallers_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumActiveBlendCallers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLayerGraphBuilt_MetaData[];
#endif
		static void NewProp_bIsLayerGraphBuilt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLayerGraphBuilt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionMaterialAttributeLayers.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_Input_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, Input), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_DefaultLayers_MetaData[] = {
		{ "Category", "Layers" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_DefaultLayers = { "DefaultLayers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, DefaultLayers), Z_Construct_UScriptStruct_FMaterialLayersFunctions, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_DefaultLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_DefaultLayers_MetaData)) }; // 1695911908
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_LayerCallers_Inner = { "LayerCallers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_LayerCallers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_LayerCallers = { "LayerCallers", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, LayerCallers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_LayerCallers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_LayerCallers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveLayerCallers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveLayerCallers = { "NumActiveLayerCallers", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, NumActiveLayerCallers), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveLayerCallers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveLayerCallers_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_BlendCallers_Inner = { "BlendCallers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_BlendCallers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_BlendCallers = { "BlendCallers", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, BlendCallers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_BlendCallers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_BlendCallers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveBlendCallers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveBlendCallers = { "NumActiveBlendCallers", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialExpressionMaterialAttributeLayers, NumActiveBlendCallers), METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveBlendCallers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveBlendCallers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_bIsLayerGraphBuilt_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionMaterialAttributeLayers.h" },
	};
#endif
	void Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_bIsLayerGraphBuilt_SetBit(void* Obj)
	{
		((UMaterialExpressionMaterialAttributeLayers*)Obj)->bIsLayerGraphBuilt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_bIsLayerGraphBuilt = { "bIsLayerGraphBuilt", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMaterialExpressionMaterialAttributeLayers), &Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_bIsLayerGraphBuilt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_bIsLayerGraphBuilt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_bIsLayerGraphBuilt_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_DefaultLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_LayerCallers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_LayerCallers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveLayerCallers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_BlendCallers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_BlendCallers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_NumActiveBlendCallers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::NewProp_bIsLayerGraphBuilt,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionMaterialAttributeLayers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::ClassParams = {
		&UMaterialExpressionMaterialAttributeLayers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::PropPointers),
		0,
		0x000800B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers()
	{
		if (!Z_Registration_Info_UClass_UMaterialExpressionMaterialAttributeLayers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionMaterialAttributeLayers.OuterSingleton, Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialExpressionMaterialAttributeLayers.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialExpressionMaterialAttributeLayers>()
	{
		return UMaterialExpressionMaterialAttributeLayers::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionMaterialAttributeLayers);
	UMaterialExpressionMaterialAttributeLayers::~UMaterialExpressionMaterialAttributeLayers() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialAttributeLayers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialAttributeLayers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionMaterialAttributeLayers, UMaterialExpressionMaterialAttributeLayers::StaticClass, TEXT("UMaterialExpressionMaterialAttributeLayers"), &Z_Registration_Info_UClass_UMaterialExpressionMaterialAttributeLayers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionMaterialAttributeLayers), 103543876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialAttributeLayers_h_3271719338(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialAttributeLayers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionMaterialAttributeLayers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
