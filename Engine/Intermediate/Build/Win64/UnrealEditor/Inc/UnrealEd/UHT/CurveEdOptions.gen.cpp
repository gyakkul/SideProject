// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Preferences/CurveEdOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveEdOptions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UNREALED_API UClass* Z_Construct_UClass_UCurveEdOptions();
	UNREALED_API UClass* Z_Construct_UClass_UCurveEdOptions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCurveEdOptions::StaticRegisterNativesUCurveEdOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveEdOptions);
	UClass* Z_Construct_UClass_UCurveEdOptions_NoRegister()
	{
		return UCurveEdOptions::StaticClass();
	}
	struct Z_Construct_UClass_UCurveEdOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinViewRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinViewRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxViewRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxViewRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LabelColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LabelColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedLabelColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedLabelColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GridTextColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GridTextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LabelBlockBkgColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LabelBlockBkgColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedKeyColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedKeyColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveEdOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEdOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Preferences/CurveEdOptions.h" },
		{ "ModuleRelativePath", "Classes/Preferences/CurveEdOptions.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_MinViewRange_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/CurveEdOptions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_MinViewRange = { "MinViewRange", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEdOptions, MinViewRange), METADATA_PARAMS(Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_MinViewRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_MinViewRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_MaxViewRange_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/CurveEdOptions.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_MaxViewRange = { "MaxViewRange", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEdOptions, MaxViewRange), METADATA_PARAMS(Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_MaxViewRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_MaxViewRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/CurveEdOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEdOptions, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_LabelColor_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/CurveEdOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_LabelColor = { "LabelColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEdOptions, LabelColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_LabelColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_LabelColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_SelectedLabelColor_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/CurveEdOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_SelectedLabelColor = { "SelectedLabelColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEdOptions, SelectedLabelColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_SelectedLabelColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_SelectedLabelColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_GridColor_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/CurveEdOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_GridColor = { "GridColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEdOptions, GridColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_GridColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_GridColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_GridTextColor_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/CurveEdOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_GridTextColor = { "GridTextColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEdOptions, GridTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_GridTextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_GridTextColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_LabelBlockBkgColor_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/CurveEdOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_LabelBlockBkgColor = { "LabelBlockBkgColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEdOptions, LabelBlockBkgColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_LabelBlockBkgColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_LabelBlockBkgColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_SelectedKeyColor_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Classes/Preferences/CurveEdOptions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_SelectedKeyColor = { "SelectedKeyColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveEdOptions, SelectedKeyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_SelectedKeyColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_SelectedKeyColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveEdOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_MinViewRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_MaxViewRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_BackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_LabelColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_SelectedLabelColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_GridColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_GridTextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_LabelBlockBkgColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveEdOptions_Statics::NewProp_SelectedKeyColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveEdOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveEdOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveEdOptions_Statics::ClassParams = {
		&UCurveEdOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCurveEdOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEdOptions_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveEdOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveEdOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveEdOptions()
	{
		if (!Z_Registration_Info_UClass_UCurveEdOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveEdOptions.OuterSingleton, Z_Construct_UClass_UCurveEdOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveEdOptions.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCurveEdOptions>()
	{
		return UCurveEdOptions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveEdOptions);
	UCurveEdOptions::~UCurveEdOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_CurveEdOptions_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_CurveEdOptions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveEdOptions, UCurveEdOptions::StaticClass, TEXT("UCurveEdOptions"), &Z_Registration_Info_UClass_UCurveEdOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveEdOptions), 2699232339U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_CurveEdOptions_h_4252902236(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_CurveEdOptions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Preferences_CurveEdOptions_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
