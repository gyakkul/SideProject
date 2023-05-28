// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialEditor/DEditorMaterialLayersParameterValue.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDEditorMaterialLayersParameterValue() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialLayersFunctions();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorMaterialLayersParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorMaterialLayersParameterValue_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDEditorMaterialLayersParameterValue::StaticRegisterNativesUDEditorMaterialLayersParameterValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEditorMaterialLayersParameterValue);
	UClass* Z_Construct_UClass_UDEditorMaterialLayersParameterValue_NoRegister()
	{
		return UDEditorMaterialLayersParameterValue::StaticClass();
	}
	struct Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEditorParameterValue,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// FMaterialLayersFunctions are no longer treated as material parameters, so this should maybe be refactored at some point\n" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialEditor/DEditorMaterialLayersParameterValue.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorMaterialLayersParameterValue.h" },
		{ "ToolTip", "FMaterialLayersFunctions are no longer treated as material parameters, so this should maybe be refactored at some point" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "DEditorMaterialLayersParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorMaterialLayersParameterValue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEditorMaterialLayersParameterValue, ParameterValue), Z_Construct_UScriptStruct_FMaterialLayersFunctions, METADATA_PARAMS(Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::NewProp_ParameterValue_MetaData)) }; // 1695911908
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::NewProp_ParameterValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEditorMaterialLayersParameterValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::ClassParams = {
		&UDEditorMaterialLayersParameterValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEditorMaterialLayersParameterValue()
	{
		if (!Z_Registration_Info_UClass_UDEditorMaterialLayersParameterValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEditorMaterialLayersParameterValue.OuterSingleton, Z_Construct_UClass_UDEditorMaterialLayersParameterValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEditorMaterialLayersParameterValue.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDEditorMaterialLayersParameterValue>()
	{
		return UDEditorMaterialLayersParameterValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEditorMaterialLayersParameterValue);
	UDEditorMaterialLayersParameterValue::~UDEditorMaterialLayersParameterValue() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorMaterialLayersParameterValue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorMaterialLayersParameterValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEditorMaterialLayersParameterValue, UDEditorMaterialLayersParameterValue::StaticClass, TEXT("UDEditorMaterialLayersParameterValue"), &Z_Registration_Info_UClass_UDEditorMaterialLayersParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEditorMaterialLayersParameterValue), 4145680829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorMaterialLayersParameterValue_h_1390248350(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorMaterialLayersParameterValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorMaterialLayersParameterValue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
