// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateBrushAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset();
	ENGINE_API UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USlateBrushAsset::StaticRegisterNativesUSlateBrushAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateBrushAsset);
	UClass* Z_Construct_UClass_USlateBrushAsset_NoRegister()
	{
		return USlateBrushAsset::StaticClass();
	}
	struct Z_Construct_UClass_USlateBrushAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Brush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Brush;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateBrushAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateBrushAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * An asset describing how a texture can exist in slate's DPI-aware environment\n * and how this texture responds to resizing. e.g. Scale9-stretching? Tiling?\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Slate/SlateBrushAsset.h" },
		{ "ModuleRelativePath", "Classes/Slate/SlateBrushAsset.h" },
		{ "ToolTip", "An asset describing how a texture can exist in slate's DPI-aware environment\nand how this texture responds to resizing. e.g. Scale9-stretching? Tiling?" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateBrushAsset_Statics::NewProp_Brush_MetaData[] = {
		{ "Category", "Brush" },
		{ "Comment", "/** The slate brush resource describing the texture's behavior. */" },
		{ "ModuleRelativePath", "Classes/Slate/SlateBrushAsset.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The slate brush resource describing the texture's behavior." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlateBrushAsset_Statics::NewProp_Brush = { "Brush", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlateBrushAsset, Brush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_USlateBrushAsset_Statics::NewProp_Brush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateBrushAsset_Statics::NewProp_Brush_MetaData)) }; // 4256420591
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlateBrushAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateBrushAsset_Statics::NewProp_Brush,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateBrushAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateBrushAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateBrushAsset_Statics::ClassParams = {
		&USlateBrushAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlateBrushAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlateBrushAsset_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USlateBrushAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlateBrushAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateBrushAsset()
	{
		if (!Z_Registration_Info_UClass_USlateBrushAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateBrushAsset.OuterSingleton, Z_Construct_UClass_USlateBrushAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlateBrushAsset.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USlateBrushAsset>()
	{
		return USlateBrushAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateBrushAsset);
	USlateBrushAsset::~USlateBrushAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_SlateBrushAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_SlateBrushAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlateBrushAsset, USlateBrushAsset::StaticClass, TEXT("USlateBrushAsset"), &Z_Registration_Info_UClass_USlateBrushAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateBrushAsset), 3540041518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_SlateBrushAsset_h_1874289538(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_SlateBrushAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_SlateBrushAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
