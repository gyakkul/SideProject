// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FractureEditorMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFractureEditorMode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureEditorMode();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureEditorMode_NoRegister();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureModeCustomizationSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UFractureModeCustomizationSettings_NoRegister();
	FRACTUREEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FFractureModeCustomSectionColor();
	FRACTUREEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FFractureModeCustomToolColor();
	UNREALED_API UClass* Z_Construct_UClass_UBaseLegacyWidgetEdMode();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeSelectInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	void UFractureEditorMode::StaticRegisterNativesUFractureEditorMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureEditorMode);
	UClass* Z_Construct_UClass_UFractureEditorMode_NoRegister()
	{
		return UFractureEditorMode::StaticClass();
	}
	struct Z_Construct_UClass_UFractureEditorMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureEditorMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLegacyWidgetEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureEditorMode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FractureEditorMode.h" },
		{ "ModuleRelativePath", "Public/FractureEditorMode.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFractureEditorMode_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULegacyEdModeSelectInterface_NoRegister, (int32)VTABLE_OFFSET(UFractureEditorMode, ILegacyEdModeSelectInterface), false },  // 3415642726
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureEditorMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureEditorMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureEditorMode_Statics::ClassParams = {
		&UFractureEditorMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureEditorMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureEditorMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureEditorMode()
	{
		if (!Z_Registration_Info_UClass_UFractureEditorMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureEditorMode.OuterSingleton, Z_Construct_UClass_UFractureEditorMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureEditorMode.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureEditorMode>()
	{
		return UFractureEditorMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureEditorMode);
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FractureModeCustomSectionColor;
class UScriptStruct* FFractureModeCustomSectionColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FractureModeCustomSectionColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FractureModeCustomSectionColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFractureModeCustomSectionColor, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("FractureModeCustomSectionColor"));
	}
	return Z_Registration_Info_UScriptStruct_FractureModeCustomSectionColor.OuterSingleton;
}
template<> FRACTUREEDITOR_API UScriptStruct* StaticStruct<FFractureModeCustomSectionColor>()
{
	return FFractureModeCustomSectionColor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines a color to be used for a particular Tool Palette Section\n */" },
		{ "ModuleRelativePath", "Public/FractureEditorMode.h" },
		{ "ToolTip", "Defines a color to be used for a particular Tool Palette Section" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFractureModeCustomSectionColor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "SectionColor" },
		{ "Comment", "/** Name of Section in Fracture Mode Tool Palette */" },
		{ "ModuleRelativePath", "Public/FractureEditorMode.h" },
		{ "ToolTip", "Name of Section in Fracture Mode Tool Palette" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFractureModeCustomSectionColor, SectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::NewProp_SectionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "SectionColor" },
		{ "Comment", "/** Custom Header Color */" },
		{ "ModuleRelativePath", "Public/FractureEditorMode.h" },
		{ "ToolTip", "Custom Header Color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFractureModeCustomSectionColor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		&NewStructOps,
		"FractureModeCustomSectionColor",
		sizeof(FFractureModeCustomSectionColor),
		alignof(FFractureModeCustomSectionColor),
		Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFractureModeCustomSectionColor()
	{
		if (!Z_Registration_Info_UScriptStruct_FractureModeCustomSectionColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FractureModeCustomSectionColor.InnerSingleton, Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FractureModeCustomSectionColor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FractureModeCustomToolColor;
class UScriptStruct* FFractureModeCustomToolColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FractureModeCustomToolColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FractureModeCustomToolColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFractureModeCustomToolColor, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("FractureModeCustomToolColor"));
	}
	return Z_Registration_Info_UScriptStruct_FractureModeCustomToolColor.OuterSingleton;
}
template<> FRACTUREEDITOR_API UScriptStruct* StaticStruct<FFractureModeCustomToolColor>()
{
	return FFractureModeCustomToolColor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToolName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Defines a color to be used for a particular Tool Palette Section\n */" },
		{ "ModuleRelativePath", "Public/FractureEditorMode.h" },
		{ "ToolTip", "Defines a color to be used for a particular Tool Palette Section" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFractureModeCustomToolColor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::NewProp_ToolName_MetaData[] = {
		{ "Category", "ToolColor" },
		{ "Comment", "/**\n\x09 * Name of Section or Tool in Fracture Mode Tool Palette\n\x09 *\n\x09 * Format:\n\x09 * SectionName        (Specifies a default color for all tools in the section.)\n\x09 * SectionName.ToolName        (Specifies an override color for a specific tool in the given section.)\n\x09 */" },
		{ "ModuleRelativePath", "Public/FractureEditorMode.h" },
		{ "ToolTip", "Name of Section or Tool in Fracture Mode Tool Palette\n\nFormat:\nSectionName        (Specifies a default color for all tools in the section.)\nSectionName.ToolName        (Specifies an override color for a specific tool in the given section.)" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::NewProp_ToolName = { "ToolName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFractureModeCustomToolColor, ToolName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::NewProp_ToolName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::NewProp_ToolName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "ToolColor" },
		{ "Comment", "/** Custom Tool Color */" },
		{ "ModuleRelativePath", "Public/FractureEditorMode.h" },
		{ "ToolTip", "Custom Tool Color" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFractureModeCustomToolColor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::NewProp_Color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::NewProp_ToolName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::NewProp_Color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		&NewStructOps,
		"FractureModeCustomToolColor",
		sizeof(FFractureModeCustomToolColor),
		alignof(FFractureModeCustomToolColor),
		Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFractureModeCustomToolColor()
	{
		if (!Z_Registration_Info_UScriptStruct_FractureModeCustomToolColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FractureModeCustomToolColor.InnerSingleton, Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_FractureModeCustomToolColor.InnerSingleton;
	}
	void UFractureModeCustomizationSettings::StaticRegisterNativesUFractureModeCustomizationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFractureModeCustomizationSettings);
	UClass* Z_Construct_UClass_UFractureModeCustomizationSettings_NoRegister()
	{
		return UFractureModeCustomizationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFractureModeCustomizationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToolSectionOrder_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolSectionOrder_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToolSectionOrder;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ToolFavorites_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolFavorites_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToolFavorites;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SectionColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionColors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ToolColors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolColors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToolColors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FractureEditorMode.h" },
		{ "ModuleRelativePath", "Public/FractureEditorMode.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolSectionOrder_Inner = { "ToolSectionOrder", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolSectionOrder_MetaData[] = {
		{ "Category", "Fracture Mode|UI Customization" },
		{ "Comment", "/** Add the names of Fracture Mode Tool Palette Sections to have them appear at the top of the Tool Palette, in the order listed below. */" },
		{ "ModuleRelativePath", "Public/FractureEditorMode.h" },
		{ "ToolTip", "Add the names of Fracture Mode Tool Palette Sections to have them appear at the top of the Tool Palette, in the order listed below." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolSectionOrder = { "ToolSectionOrder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureModeCustomizationSettings, ToolSectionOrder), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolSectionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolSectionOrder_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolFavorites_Inner = { "ToolFavorites", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolFavorites_MetaData[] = {
		{ "Category", "Fracture Mode|UI Customization" },
		{ "Comment", "/** Tool Names listed in the array below will appear in a Favorites section at the top of the Fracture Mode Tool Palette */" },
		{ "ModuleRelativePath", "Public/FractureEditorMode.h" },
		{ "ToolTip", "Tool Names listed in the array below will appear in a Favorites section at the top of the Fracture Mode Tool Palette" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolFavorites = { "ToolFavorites", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureModeCustomizationSettings, ToolFavorites), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolFavorites_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolFavorites_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_SectionColors_Inner = { "SectionColors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFractureModeCustomSectionColor, METADATA_PARAMS(nullptr, 0) }; // 1935646335
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_SectionColors_MetaData[] = {
		{ "Category", "Fracture Mode|UI Customization" },
		{ "Comment", "/** Custom Section Header Colors for listed Sections in the Fracture Mode Tool Palette */" },
		{ "ModuleRelativePath", "Public/FractureEditorMode.h" },
		{ "ToolTip", "Custom Section Header Colors for listed Sections in the Fracture Mode Tool Palette" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_SectionColors = { "SectionColors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureModeCustomizationSettings, SectionColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_SectionColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_SectionColors_MetaData)) }; // 1935646335
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolColors_Inner = { "ToolColors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFractureModeCustomToolColor, METADATA_PARAMS(nullptr, 0) }; // 3794350455
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolColors_MetaData[] = {
		{ "Category", "Fracture Mode|UI Customization" },
		{ "Comment", "/**\n\x09 * Custom Tool Colors for listed Tools in the Fracture Mode Tool Palette.\n\x09 * \n\x09 * Format:\n\x09 * SectionName        (Specifies a default color for all tools in the section.)\n\x09 * SectionName.ToolName        (Specifies an override color for a specific tool in the given section.)\n\x09 */" },
		{ "ModuleRelativePath", "Public/FractureEditorMode.h" },
		{ "ToolTip", "Custom Tool Colors for listed Tools in the Fracture Mode Tool Palette.\n\nFormat:\nSectionName        (Specifies a default color for all tools in the section.)\nSectionName.ToolName        (Specifies an override color for a specific tool in the given section.)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolColors = { "ToolColors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFractureModeCustomizationSettings, ToolColors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolColors_MetaData)) }; // 3794350455
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolSectionOrder_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolSectionOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolFavorites_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolFavorites,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_SectionColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_SectionColors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolColors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::NewProp_ToolColors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFractureModeCustomizationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::ClassParams = {
		&UFractureModeCustomizationSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFractureModeCustomizationSettings()
	{
		if (!Z_Registration_Info_UClass_UFractureModeCustomizationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFractureModeCustomizationSettings.OuterSingleton, Z_Construct_UClass_UFractureModeCustomizationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFractureModeCustomizationSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UFractureModeCustomizationSettings>()
	{
		return UFractureModeCustomizationSettings::StaticClass();
	}
	UFractureModeCustomizationSettings::UFractureModeCustomizationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFractureModeCustomizationSettings);
	UFractureModeCustomizationSettings::~UFractureModeCustomizationSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_Statics::ScriptStructInfo[] = {
		{ FFractureModeCustomSectionColor::StaticStruct, Z_Construct_UScriptStruct_FFractureModeCustomSectionColor_Statics::NewStructOps, TEXT("FractureModeCustomSectionColor"), &Z_Registration_Info_UScriptStruct_FractureModeCustomSectionColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFractureModeCustomSectionColor), 1935646335U) },
		{ FFractureModeCustomToolColor::StaticStruct, Z_Construct_UScriptStruct_FFractureModeCustomToolColor_Statics::NewStructOps, TEXT("FractureModeCustomToolColor"), &Z_Registration_Info_UScriptStruct_FractureModeCustomToolColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFractureModeCustomToolColor), 3794350455U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFractureEditorMode, UFractureEditorMode::StaticClass, TEXT("UFractureEditorMode"), &Z_Registration_Info_UClass_UFractureEditorMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureEditorMode), 555240365U) },
		{ Z_Construct_UClass_UFractureModeCustomizationSettings, UFractureModeCustomizationSettings::StaticClass, TEXT("UFractureModeCustomizationSettings"), &Z_Registration_Info_UClass_UFractureModeCustomizationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFractureModeCustomizationSettings), 3407377458U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_40690564(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Public_FractureEditorMode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
