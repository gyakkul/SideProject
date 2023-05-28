// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintHeaderViewSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintHeaderViewSettings() {}
// Cross Module References
	BLUEPRINTHEADERVIEW_API UClass* Z_Construct_UClass_UBlueprintHeaderViewSettings();
	BLUEPRINTHEADERVIEW_API UClass* Z_Construct_UClass_UBlueprintHeaderViewSettings_NoRegister();
	BLUEPRINTHEADERVIEW_API UEnum* Z_Construct_UEnum_BlueprintHeaderView_EHeaderViewSortMethod();
	BLUEPRINTHEADERVIEW_API UScriptStruct* Z_Construct_UScriptStruct_FHeaderViewSyntaxColors();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_BlueprintHeaderView();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHeaderViewSortMethod;
	static UEnum* EHeaderViewSortMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHeaderViewSortMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHeaderViewSortMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintHeaderView_EHeaderViewSortMethod, (UObject*)Z_Construct_UPackage__Script_BlueprintHeaderView(), TEXT("EHeaderViewSortMethod"));
		}
		return Z_Registration_Info_UEnum_EHeaderViewSortMethod.OuterSingleton;
	}
	template<> BLUEPRINTHEADERVIEW_API UEnum* StaticEnum<EHeaderViewSortMethod>()
	{
		return EHeaderViewSortMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_BlueprintHeaderView_EHeaderViewSortMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlueprintHeaderView_EHeaderViewSortMethod_Statics::Enumerators[] = {
		{ "EHeaderViewSortMethod::None", (int64)EHeaderViewSortMethod::None },
		{ "EHeaderViewSortMethod::SortByAccessSpecifier", (int64)EHeaderViewSortMethod::SortByAccessSpecifier },
		{ "EHeaderViewSortMethod::SortForOptimalPadding", (int64)EHeaderViewSortMethod::SortForOptimalPadding },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlueprintHeaderView_EHeaderViewSortMethod_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintHeaderViewSettings.h" },
		{ "None.Comment", "// Properties will stay in the same order they were in the Blueprint class.\n" },
		{ "None.Name", "EHeaderViewSortMethod::None" },
		{ "None.ToolTip", "Properties will stay in the same order they were in the Blueprint class." },
		{ "SortByAccessSpecifier.Comment", "// Properties will be grouped together by Access Specifiers, in order of visibility (public, protected, private).\n" },
		{ "SortByAccessSpecifier.Name", "EHeaderViewSortMethod::SortByAccessSpecifier" },
		{ "SortByAccessSpecifier.ToolTip", "Properties will be grouped together by Access Specifiers, in order of visibility (public, protected, private)." },
		{ "SortForOptimalPadding.Comment", "// Properties will be sorted to minimize padding in compiled class layout.\n" },
		{ "SortForOptimalPadding.Name", "EHeaderViewSortMethod::SortForOptimalPadding" },
		{ "SortForOptimalPadding.ToolTip", "Properties will be sorted to minimize padding in compiled class layout." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintHeaderView_EHeaderViewSortMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlueprintHeaderView,
		nullptr,
		"EHeaderViewSortMethod",
		"EHeaderViewSortMethod",
		Z_Construct_UEnum_BlueprintHeaderView_EHeaderViewSortMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintHeaderView_EHeaderViewSortMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BlueprintHeaderView_EHeaderViewSortMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintHeaderView_EHeaderViewSortMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BlueprintHeaderView_EHeaderViewSortMethod()
	{
		if (!Z_Registration_Info_UEnum_EHeaderViewSortMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHeaderViewSortMethod.InnerSingleton, Z_Construct_UEnum_BlueprintHeaderView_EHeaderViewSortMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHeaderViewSortMethod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HeaderViewSyntaxColors;
class UScriptStruct* FHeaderViewSyntaxColors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HeaderViewSyntaxColors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HeaderViewSyntaxColors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeaderViewSyntaxColors, (UObject*)Z_Construct_UPackage__Script_BlueprintHeaderView(), TEXT("HeaderViewSyntaxColors"));
	}
	return Z_Registration_Info_UScriptStruct_HeaderViewSyntaxColors.OuterSingleton;
}
template<> BLUEPRINTHEADERVIEW_API UScriptStruct* StaticStruct<FHeaderViewSyntaxColors>()
{
	return FHeaderViewSyntaxColors::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Comment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Error;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Macro_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Macro;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Typename_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Typename;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keyword_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Keyword;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::Struct_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/BlueprintHeaderViewSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeaderViewSyntaxColors>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Comment_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BlueprintHeaderViewSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHeaderViewSyntaxColors, Comment), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Comment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Comment_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Error_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BlueprintHeaderViewSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHeaderViewSyntaxColors, Error), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Error_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Macro_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BlueprintHeaderViewSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Macro = { "Macro", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHeaderViewSyntaxColors, Macro), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Macro_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Macro_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Typename_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BlueprintHeaderViewSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Typename = { "Typename", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHeaderViewSyntaxColors, Typename), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Typename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Typename_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BlueprintHeaderViewSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHeaderViewSyntaxColors, Identifier), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Identifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Keyword_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/BlueprintHeaderViewSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Keyword = { "Keyword", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHeaderViewSyntaxColors, Keyword), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Keyword_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Keyword_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Comment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Macro,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Typename,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewProp_Keyword,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintHeaderView,
		nullptr,
		&NewStructOps,
		"HeaderViewSyntaxColors",
		sizeof(FHeaderViewSyntaxColors),
		alignof(FHeaderViewSyntaxColors),
		Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHeaderViewSyntaxColors()
	{
		if (!Z_Registration_Info_UScriptStruct_HeaderViewSyntaxColors.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HeaderViewSyntaxColors.InnerSingleton, Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HeaderViewSyntaxColors.InnerSingleton;
	}
	void UBlueprintHeaderViewSettings::StaticRegisterNativesUBlueprintHeaderViewSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintHeaderViewSettings);
	UClass* Z_Construct_UClass_UBlueprintHeaderViewSettings_NoRegister()
	{
		return UBlueprintHeaderViewSettings::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SyntaxColors_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SyntaxColors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FontSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintHeaderView,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings for the Blueprint Header View Plugin */" },
		{ "IncludePath", "BlueprintHeaderViewSettings.h" },
		{ "ModuleRelativePath", "Public/BlueprintHeaderViewSettings.h" },
		{ "ToolTip", "Settings for the Blueprint Header View Plugin" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_SyntaxColors_MetaData[] = {
		{ "Category", "Settings|Style" },
		{ "Comment", "/** Syntax Highlighting colors for Blueprint Header View output */" },
		{ "ModuleRelativePath", "Public/BlueprintHeaderViewSettings.h" },
		{ "ToolTip", "Syntax Highlighting colors for Blueprint Header View output" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_SyntaxColors = { "SyntaxColors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintHeaderViewSettings, SyntaxColors), Z_Construct_UScriptStruct_FHeaderViewSyntaxColors, METADATA_PARAMS(Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_SyntaxColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_SyntaxColors_MetaData)) }; // 2489077554
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_SelectionColor_MetaData[] = {
		{ "Category", "Settings|Style" },
		{ "Comment", "/** Highlight color for selected items in the Blueprint Header View output */" },
		{ "ModuleRelativePath", "Public/BlueprintHeaderViewSettings.h" },
		{ "ToolTip", "Highlight color for selected items in the Blueprint Header View output" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_SelectionColor = { "SelectionColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintHeaderViewSettings, SelectionColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_SelectionColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_SelectionColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_FontSize_MetaData[] = {
		{ "Category", "Settings|Style" },
		{ "ClampMax", "72" },
		{ "ClampMin", "6" },
		{ "Comment", "/** Font Size for the Blueprint Header View output */" },
		{ "ModuleRelativePath", "Public/BlueprintHeaderViewSettings.h" },
		{ "ToolTip", "Font Size for the Blueprint Header View output" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintHeaderViewSettings, FontSize), METADATA_PARAMS(Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_FontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_FontSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_SortMethod_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Sorting Method for Header View Functions and Properties */" },
		{ "ModuleRelativePath", "Public/BlueprintHeaderViewSettings.h" },
		{ "ToolTip", "Sorting Method for Header View Functions and Properties" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintHeaderViewSettings, SortMethod), Z_Construct_UEnum_BlueprintHeaderView_EHeaderViewSortMethod, METADATA_PARAMS(Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_SortMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_SortMethod_MetaData)) }; // 4264626932
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_SyntaxColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_SelectionColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_FontSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_SortMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::NewProp_SortMethod,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintHeaderViewSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::ClassParams = {
		&UBlueprintHeaderViewSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintHeaderViewSettings()
	{
		if (!Z_Registration_Info_UClass_UBlueprintHeaderViewSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintHeaderViewSettings.OuterSingleton, Z_Construct_UClass_UBlueprintHeaderViewSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintHeaderViewSettings.OuterSingleton;
	}
	template<> BLUEPRINTHEADERVIEW_API UClass* StaticClass<UBlueprintHeaderViewSettings>()
	{
		return UBlueprintHeaderViewSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintHeaderViewSettings);
	UBlueprintHeaderViewSettings::~UBlueprintHeaderViewSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_Statics::EnumInfo[] = {
		{ EHeaderViewSortMethod_StaticEnum, TEXT("EHeaderViewSortMethod"), &Z_Registration_Info_UEnum_EHeaderViewSortMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4264626932U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_Statics::ScriptStructInfo[] = {
		{ FHeaderViewSyntaxColors::StaticStruct, Z_Construct_UScriptStruct_FHeaderViewSyntaxColors_Statics::NewStructOps, TEXT("HeaderViewSyntaxColors"), &Z_Registration_Info_UScriptStruct_HeaderViewSyntaxColors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHeaderViewSyntaxColors), 2489077554U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintHeaderViewSettings, UBlueprintHeaderViewSettings::StaticClass, TEXT("UBlueprintHeaderViewSettings"), &Z_Registration_Info_UClass_UBlueprintHeaderViewSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintHeaderViewSettings), 1039646765U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_3135003418(TEXT("/Script/BlueprintHeaderView"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_BlueprintHeaderView_Source_BlueprintHeaderView_Public_BlueprintHeaderViewSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
