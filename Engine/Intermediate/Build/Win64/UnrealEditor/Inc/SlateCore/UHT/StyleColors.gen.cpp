// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Styling/StyleColors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStyleColors() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UClass* Z_Construct_UClass_USlateThemeManager();
	SLATECORE_API UClass* Z_Construct_UClass_USlateThemeManager_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EStyleColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FStyleColorList();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FStyleTheme();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStyleColor;
	static UEnum* EStyleColor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStyleColor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStyleColor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EStyleColor, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EStyleColor"));
		}
		return Z_Registration_Info_UEnum_EStyleColor.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EStyleColor>()
	{
		return EStyleColor_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_EStyleColor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_EStyleColor_Statics::Enumerators[] = {
		{ "EStyleColor::Black", (int64)EStyleColor::Black },
		{ "EStyleColor::Background", (int64)EStyleColor::Background },
		{ "EStyleColor::Title", (int64)EStyleColor::Title },
		{ "EStyleColor::WindowBorder", (int64)EStyleColor::WindowBorder },
		{ "EStyleColor::Foldout", (int64)EStyleColor::Foldout },
		{ "EStyleColor::Input", (int64)EStyleColor::Input },
		{ "EStyleColor::InputOutline", (int64)EStyleColor::InputOutline },
		{ "EStyleColor::Recessed", (int64)EStyleColor::Recessed },
		{ "EStyleColor::Panel", (int64)EStyleColor::Panel },
		{ "EStyleColor::Header", (int64)EStyleColor::Header },
		{ "EStyleColor::Dropdown", (int64)EStyleColor::Dropdown },
		{ "EStyleColor::DropdownOutline", (int64)EStyleColor::DropdownOutline },
		{ "EStyleColor::Hover", (int64)EStyleColor::Hover },
		{ "EStyleColor::Hover2", (int64)EStyleColor::Hover2 },
		{ "EStyleColor::White", (int64)EStyleColor::White },
		{ "EStyleColor::White25", (int64)EStyleColor::White25 },
		{ "EStyleColor::Highlight", (int64)EStyleColor::Highlight },
		{ "EStyleColor::Primary", (int64)EStyleColor::Primary },
		{ "EStyleColor::PrimaryHover", (int64)EStyleColor::PrimaryHover },
		{ "EStyleColor::PrimaryPress", (int64)EStyleColor::PrimaryPress },
		{ "EStyleColor::Secondary", (int64)EStyleColor::Secondary },
		{ "EStyleColor::Foreground", (int64)EStyleColor::Foreground },
		{ "EStyleColor::ForegroundHover", (int64)EStyleColor::ForegroundHover },
		{ "EStyleColor::ForegroundInverted", (int64)EStyleColor::ForegroundInverted },
		{ "EStyleColor::ForegroundHeader", (int64)EStyleColor::ForegroundHeader },
		{ "EStyleColor::Select", (int64)EStyleColor::Select },
		{ "EStyleColor::SelectInactive", (int64)EStyleColor::SelectInactive },
		{ "EStyleColor::SelectParent", (int64)EStyleColor::SelectParent },
		{ "EStyleColor::SelectHover", (int64)EStyleColor::SelectHover },
		{ "EStyleColor::Notifications", (int64)EStyleColor::Notifications },
		{ "EStyleColor::AccentBlue", (int64)EStyleColor::AccentBlue },
		{ "EStyleColor::AccentPurple", (int64)EStyleColor::AccentPurple },
		{ "EStyleColor::AccentPink", (int64)EStyleColor::AccentPink },
		{ "EStyleColor::AccentRed", (int64)EStyleColor::AccentRed },
		{ "EStyleColor::AccentOrange", (int64)EStyleColor::AccentOrange },
		{ "EStyleColor::AccentYellow", (int64)EStyleColor::AccentYellow },
		{ "EStyleColor::AccentGreen", (int64)EStyleColor::AccentGreen },
		{ "EStyleColor::AccentBrown", (int64)EStyleColor::AccentBrown },
		{ "EStyleColor::AccentBlack", (int64)EStyleColor::AccentBlack },
		{ "EStyleColor::AccentGray", (int64)EStyleColor::AccentGray },
		{ "EStyleColor::AccentWhite", (int64)EStyleColor::AccentWhite },
		{ "EStyleColor::AccentFolder", (int64)EStyleColor::AccentFolder },
		{ "EStyleColor::Warning", (int64)EStyleColor::Warning },
		{ "EStyleColor::Error", (int64)EStyleColor::Error },
		{ "EStyleColor::Success", (int64)EStyleColor::Success },
		{ "EStyleColor::User1", (int64)EStyleColor::User1 },
		{ "EStyleColor::User2", (int64)EStyleColor::User2 },
		{ "EStyleColor::User3", (int64)EStyleColor::User3 },
		{ "EStyleColor::User4", (int64)EStyleColor::User4 },
		{ "EStyleColor::User5", (int64)EStyleColor::User5 },
		{ "EStyleColor::User6", (int64)EStyleColor::User6 },
		{ "EStyleColor::User7", (int64)EStyleColor::User7 },
		{ "EStyleColor::User8", (int64)EStyleColor::User8 },
		{ "EStyleColor::User9", (int64)EStyleColor::User9 },
		{ "EStyleColor::User10", (int64)EStyleColor::User10 },
		{ "EStyleColor::User11", (int64)EStyleColor::User11 },
		{ "EStyleColor::User12", (int64)EStyleColor::User12 },
		{ "EStyleColor::User13", (int64)EStyleColor::User13 },
		{ "EStyleColor::User14", (int64)EStyleColor::User14 },
		{ "EStyleColor::User15", (int64)EStyleColor::User15 },
		{ "EStyleColor::User16", (int64)EStyleColor::User16 },
		{ "EStyleColor::MAX", (int64)EStyleColor::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_EStyleColor_Statics::Enum_MetaDataParams[] = {
		{ "AccentBlack.Name", "EStyleColor::AccentBlack" },
		{ "AccentBlue.Name", "EStyleColor::AccentBlue" },
		{ "AccentBrown.Name", "EStyleColor::AccentBrown" },
		{ "AccentFolder.Name", "EStyleColor::AccentFolder" },
		{ "AccentGray.Name", "EStyleColor::AccentGray" },
		{ "AccentGreen.Name", "EStyleColor::AccentGreen" },
		{ "AccentOrange.Name", "EStyleColor::AccentOrange" },
		{ "AccentPink.Name", "EStyleColor::AccentPink" },
		{ "AccentPurple.Name", "EStyleColor::AccentPurple" },
		{ "AccentRed.Name", "EStyleColor::AccentRed" },
		{ "AccentWhite.Name", "EStyleColor::AccentWhite" },
		{ "AccentYellow.Name", "EStyleColor::AccentYellow" },
		{ "Background.Name", "EStyleColor::Background" },
		{ "Black.Name", "EStyleColor::Black" },
		{ "Comment", "/**\n * Note: If you add another color here, you should update the Dark.json theme file in Engine\\Content\\Slate\\Themes & FUMGColors in UMGCoreStyle.cpp for consistency\n */" },
		{ "Dropdown.Name", "EStyleColor::Dropdown" },
		{ "DropdownOutline.Name", "EStyleColor::DropdownOutline" },
		{ "Error.Name", "EStyleColor::Error" },
		{ "Foldout.Name", "EStyleColor::Foldout" },
		{ "Foreground.Name", "EStyleColor::Foreground" },
		{ "ForegroundHeader.Name", "EStyleColor::ForegroundHeader" },
		{ "ForegroundHover.Name", "EStyleColor::ForegroundHover" },
		{ "ForegroundInverted.Name", "EStyleColor::ForegroundInverted" },
		{ "Header.Name", "EStyleColor::Header" },
		{ "Highlight.Name", "EStyleColor::Highlight" },
		{ "Hover.Name", "EStyleColor::Hover" },
		{ "Hover2.Name", "EStyleColor::Hover2" },
		{ "Input.Name", "EStyleColor::Input" },
		{ "InputOutline.Name", "EStyleColor::InputOutline" },
		{ "MAX.Name", "EStyleColor::MAX" },
		{ "ModuleRelativePath", "Public/Styling/StyleColors.h" },
		{ "Notifications.Name", "EStyleColor::Notifications" },
		{ "Panel.Name", "EStyleColor::Panel" },
		{ "Primary.Name", "EStyleColor::Primary" },
		{ "PrimaryHover.Name", "EStyleColor::PrimaryHover" },
		{ "PrimaryPress.Name", "EStyleColor::PrimaryPress" },
		{ "Recessed.Name", "EStyleColor::Recessed" },
		{ "Secondary.Name", "EStyleColor::Secondary" },
		{ "Select.Name", "EStyleColor::Select" },
		{ "SelectHover.Name", "EStyleColor::SelectHover" },
		{ "SelectInactive.Name", "EStyleColor::SelectInactive" },
		{ "SelectParent.Name", "EStyleColor::SelectParent" },
		{ "Success.Name", "EStyleColor::Success" },
		{ "Title.Name", "EStyleColor::Title" },
		{ "ToolTip", "Note: If you add another color here, you should update the Dark.json theme file in Engine\\Content\\Slate\\Themes & FUMGColors in UMGCoreStyle.cpp for consistency" },
		{ "User1.Comment", "/** Only user colors should be below this line\n\x09 * To use user colors:\n\x09 * 1. Set an unused user enum value below as the color value for an FSlateColor. E.g. FSlateColor MyCustomColor(EStyleColors::User1)\n\x09 * 2. Set the actual color. E.g USlateThemeManager::Get().SetDefaultColor(EStyleColor::User1, FLinearColor::White)\n\x09 * 3. Give it a display name if you want it to be configurable by editor users. E.g.  UStyleColorTable::Get().SetColorDisplayName(EUserStyleColor::User1, \"My Color Name\")\n\x09 */" },
		{ "User1.Name", "EStyleColor::User1" },
		{ "User1.ToolTip", "Only user colors should be below this line\nTo use user colors:\n1. Set an unused user enum value below as the color value for an FSlateColor. E.g. FSlateColor MyCustomColor(EStyleColors::User1)\n2. Set the actual color. E.g USlateThemeManager::Get().SetDefaultColor(EStyleColor::User1, FLinearColor::White)\n3. Give it a display name if you want it to be configurable by editor users. E.g.  UStyleColorTable::Get().SetColorDisplayName(EUserStyleColor::User1, \"My Color Name\")" },
		{ "User10.Name", "EStyleColor::User10" },
		{ "User11.Name", "EStyleColor::User11" },
		{ "User12.Name", "EStyleColor::User12" },
		{ "User13.Name", "EStyleColor::User13" },
		{ "User14.Name", "EStyleColor::User14" },
		{ "User15.Name", "EStyleColor::User15" },
		{ "User16.Name", "EStyleColor::User16" },
		{ "User2.Name", "EStyleColor::User2" },
		{ "User3.Name", "EStyleColor::User3" },
		{ "User4.Name", "EStyleColor::User4" },
		{ "User5.Name", "EStyleColor::User5" },
		{ "User6.Name", "EStyleColor::User6" },
		{ "User7.Name", "EStyleColor::User7" },
		{ "User8.Name", "EStyleColor::User8" },
		{ "User9.Name", "EStyleColor::User9" },
		{ "Warning.Name", "EStyleColor::Warning" },
		{ "White.Name", "EStyleColor::White" },
		{ "White25.Name", "EStyleColor::White25" },
		{ "WindowBorder.Name", "EStyleColor::WindowBorder" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EStyleColor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"EStyleColor",
		"EStyleColor",
		Z_Construct_UEnum_SlateCore_EStyleColor_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EStyleColor_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_EStyleColor_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EStyleColor_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_EStyleColor()
	{
		if (!Z_Registration_Info_UEnum_EStyleColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStyleColor.InnerSingleton, Z_Construct_UEnum_SlateCore_EStyleColor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStyleColor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StyleColorList;
class UScriptStruct* FStyleColorList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StyleColorList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StyleColorList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStyleColorList, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("StyleColorList"));
	}
	return Z_Registration_Info_UScriptStruct_StyleColorList.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FStyleColorList>()
{
	return FStyleColorList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStyleColorList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StyleColors_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StyleColors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStyleColorList_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Styling/StyleColors.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStyleColorList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStyleColorList>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStyleColorList_Statics::NewProp_StyleColors_MetaData[] = {
		{ "ArraySizeEnum", "/Script/SlateCore.EStyleColor" },
		{ "Category", "Colors" },
		{ "ModuleRelativePath", "Public/Styling/StyleColors.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStyleColorList_Statics::NewProp_StyleColors = { "StyleColors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(StyleColors, FStyleColorList), nullptr, nullptr, STRUCT_OFFSET(FStyleColorList, StyleColors), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FStyleColorList_Statics::NewProp_StyleColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStyleColorList_Statics::NewProp_StyleColors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStyleColorList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStyleColorList_Statics::NewProp_StyleColors,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStyleColorList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"StyleColorList",
		sizeof(FStyleColorList),
		alignof(FStyleColorList),
		Z_Construct_UScriptStruct_FStyleColorList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStyleColorList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStyleColorList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStyleColorList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStyleColorList()
	{
		if (!Z_Registration_Info_UScriptStruct_StyleColorList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StyleColorList.InnerSingleton, Z_Construct_UScriptStruct_FStyleColorList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StyleColorList.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StyleTheme;
class UScriptStruct* FStyleTheme::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StyleTheme.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StyleTheme.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStyleTheme, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("StyleTheme"));
	}
	return Z_Registration_Info_UScriptStruct_StyleTheme.OuterSingleton;
}
template<> SLATECORE_API UScriptStruct* StaticStruct<FStyleTheme>()
{
	return FStyleTheme::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStyleTheme_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStyleTheme_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents a single theme\n */" },
		{ "ModuleRelativePath", "Public/Styling/StyleColors.h" },
		{ "ToolTip", "Represents a single theme" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStyleTheme_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStyleTheme>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStyleTheme_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		&NewStructOps,
		"StyleTheme",
		sizeof(FStyleTheme),
		alignof(FStyleTheme),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStyleTheme_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStyleTheme_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStyleTheme()
	{
		if (!Z_Registration_Info_UScriptStruct_StyleTheme.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StyleTheme.InnerSingleton, Z_Construct_UScriptStruct_FStyleTheme_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StyleTheme.InnerSingleton;
	}
	void USlateThemeManager::StaticRegisterNativesUSlateThemeManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateThemeManager);
	UClass* Z_Construct_UClass_USlateThemeManager_NoRegister()
	{
		return USlateThemeManager::StaticClass();
	}
	struct Z_Construct_UClass_USlateThemeManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentThemeId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentThemeId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveColors_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveColors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlateThemeManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SlateCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateThemeManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Styling/StyleColors.h" },
		{ "ModuleRelativePath", "Public/Styling/StyleColors.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateThemeManager_Statics::NewProp_CurrentThemeId_MetaData[] = {
		{ "Category", "Colors" },
		{ "ModuleRelativePath", "Public/Styling/StyleColors.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlateThemeManager_Statics::NewProp_CurrentThemeId = { "CurrentThemeId", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlateThemeManager, CurrentThemeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USlateThemeManager_Statics::NewProp_CurrentThemeId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateThemeManager_Statics::NewProp_CurrentThemeId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlateThemeManager_Statics::NewProp_ActiveColors_MetaData[] = {
		{ "Category", "Colors" },
		{ "ModuleRelativePath", "Public/Styling/StyleColors.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlateThemeManager_Statics::NewProp_ActiveColors = { "ActiveColors", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USlateThemeManager, ActiveColors), Z_Construct_UScriptStruct_FStyleColorList, METADATA_PARAMS(Z_Construct_UClass_USlateThemeManager_Statics::NewProp_ActiveColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlateThemeManager_Statics::NewProp_ActiveColors_MetaData)) }; // 762079879
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlateThemeManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateThemeManager_Statics::NewProp_CurrentThemeId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateThemeManager_Statics::NewProp_ActiveColors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlateThemeManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateThemeManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateThemeManager_Statics::ClassParams = {
		&USlateThemeManager::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlateThemeManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlateThemeManager_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USlateThemeManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlateThemeManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlateThemeManager()
	{
		if (!Z_Registration_Info_UClass_USlateThemeManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateThemeManager.OuterSingleton, Z_Construct_UClass_USlateThemeManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlateThemeManager.OuterSingleton;
	}
	template<> SLATECORE_API UClass* StaticClass<USlateThemeManager>()
	{
		return USlateThemeManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlateThemeManager);
	USlateThemeManager::~USlateThemeManager() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_StyleColors_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_StyleColors_h_Statics::EnumInfo[] = {
		{ EStyleColor_StaticEnum, TEXT("EStyleColor"), &Z_Registration_Info_UEnum_EStyleColor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1147901408U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_StyleColors_h_Statics::ScriptStructInfo[] = {
		{ FStyleColorList::StaticStruct, Z_Construct_UScriptStruct_FStyleColorList_Statics::NewStructOps, TEXT("StyleColorList"), &Z_Registration_Info_UScriptStruct_StyleColorList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStyleColorList), 762079879U) },
		{ FStyleTheme::StaticStruct, Z_Construct_UScriptStruct_FStyleTheme_Statics::NewStructOps, TEXT("StyleTheme"), &Z_Registration_Info_UScriptStruct_StyleTheme, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStyleTheme), 3267621701U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_StyleColors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlateThemeManager, USlateThemeManager::StaticClass, TEXT("USlateThemeManager"), &Z_Registration_Info_UClass_USlateThemeManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateThemeManager), 3511123644U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_StyleColors_h_3075871764(TEXT("/Script/SlateCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_StyleColors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_StyleColors_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_StyleColors_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_StyleColors_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_StyleColors_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Styling_StyleColors_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
