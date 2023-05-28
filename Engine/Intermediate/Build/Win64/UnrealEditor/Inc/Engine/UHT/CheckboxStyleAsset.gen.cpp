// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Slate/CheckboxStyleAsset.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckboxStyleAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UCheckBoxStyleAsset();
	ENGINE_API UClass* Z_Construct_UClass_UCheckBoxStyleAsset_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckBoxStyle();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UCheckBoxStyleAsset::StaticRegisterNativesUCheckBoxStyleAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCheckBoxStyleAsset);
	UClass* Z_Construct_UClass_UCheckBoxStyleAsset_NoRegister()
	{
		return UCheckBoxStyleAsset::StaticClass();
	}
	struct Z_Construct_UClass_UCheckBoxStyleAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CheckBoxStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CheckBoxStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckBoxStyleAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBoxStyleAsset_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An asset describing a CheckBox's appearance.\n * Just a wrapper for the struct with real data in it.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Slate/CheckboxStyleAsset.h" },
		{ "ModuleRelativePath", "Classes/Slate/CheckboxStyleAsset.h" },
		{ "ToolTip", "An asset describing a CheckBox's appearance.\nJust a wrapper for the struct with real data in it." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckBoxStyleAsset_Statics::NewProp_CheckBoxStyle_MetaData[] = {
		{ "Category", "Appearance" },
		{ "Comment", "/** The actual data describing the Check Box's appearance. */" },
		{ "ModuleRelativePath", "Classes/Slate/CheckboxStyleAsset.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The actual data describing the Check Box's appearance." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCheckBoxStyleAsset_Statics::NewProp_CheckBoxStyle = { "CheckBoxStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCheckBoxStyleAsset, CheckBoxStyle), Z_Construct_UScriptStruct_FCheckBoxStyle, METADATA_PARAMS(Z_Construct_UClass_UCheckBoxStyleAsset_Statics::NewProp_CheckBoxStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxStyleAsset_Statics::NewProp_CheckBoxStyle_MetaData)) }; // 1946304471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckBoxStyleAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckBoxStyleAsset_Statics::NewProp_CheckBoxStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckBoxStyleAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckBoxStyleAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCheckBoxStyleAsset_Statics::ClassParams = {
		&UCheckBoxStyleAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCheckBoxStyleAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxStyleAsset_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckBoxStyleAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckBoxStyleAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckBoxStyleAsset()
	{
		if (!Z_Registration_Info_UClass_UCheckBoxStyleAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCheckBoxStyleAsset.OuterSingleton, Z_Construct_UClass_UCheckBoxStyleAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCheckBoxStyleAsset.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCheckBoxStyleAsset>()
	{
		return UCheckBoxStyleAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckBoxStyleAsset);
	UCheckBoxStyleAsset::~UCheckBoxStyleAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_CheckboxStyleAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_CheckboxStyleAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCheckBoxStyleAsset, UCheckBoxStyleAsset::StaticClass, TEXT("UCheckBoxStyleAsset"), &Z_Registration_Info_UClass_UCheckBoxStyleAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCheckBoxStyleAsset), 1514427699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_CheckboxStyleAsset_h_3873851502(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_CheckboxStyleAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Slate_CheckboxStyleAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
