// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MaterialEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialEditorSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	MATERIALEDITOR_API UClass* Z_Construct_UClass_UMaterialEditorSettings();
	MATERIALEDITOR_API UClass* Z_Construct_UClass_UMaterialEditorSettings_NoRegister();
	MATERIALEDITOR_API UEnum* Z_Construct_UEnum_MaterialEditor_EBackgroundType();
	MATERIALEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCheckerboardSettings();
	MATERIALEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewBackgroundSettings();
	UPackage* Z_Construct_UPackage__Script_MaterialEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBackgroundType;
	static UEnum* EBackgroundType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBackgroundType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBackgroundType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MaterialEditor_EBackgroundType, (UObject*)Z_Construct_UPackage__Script_MaterialEditor(), TEXT("EBackgroundType"));
		}
		return Z_Registration_Info_UEnum_EBackgroundType.OuterSingleton;
	}
	template<> MATERIALEDITOR_API UEnum* StaticEnum<EBackgroundType>()
	{
		return EBackgroundType_StaticEnum();
	}
	struct Z_Construct_UEnum_MaterialEditor_EBackgroundType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MaterialEditor_EBackgroundType_Statics::Enumerators[] = {
		{ "EBackgroundType::SolidColor", (int64)EBackgroundType::SolidColor },
		{ "EBackgroundType::Checkered", (int64)EBackgroundType::Checkered },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MaterialEditor_EBackgroundType_Statics::Enum_MetaDataParams[] = {
		{ "Checkered.DisplayName", "Checkered" },
		{ "Checkered.Name", "EBackgroundType::Checkered" },
		{ "Comment", "/**\n * Enumerates background for the material editor UI viewport (similar to ETextureEditorBackgrounds)\n */" },
		{ "ModuleRelativePath", "Public/MaterialEditorSettings.h" },
		{ "SolidColor.DisplayName", "Solid Color" },
		{ "SolidColor.Name", "EBackgroundType::SolidColor" },
		{ "ToolTip", "Enumerates background for the material editor UI viewport (similar to ETextureEditorBackgrounds)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MaterialEditor_EBackgroundType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MaterialEditor,
		nullptr,
		"EBackgroundType",
		"EBackgroundType",
		Z_Construct_UEnum_MaterialEditor_EBackgroundType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MaterialEditor_EBackgroundType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MaterialEditor_EBackgroundType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MaterialEditor_EBackgroundType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MaterialEditor_EBackgroundType()
	{
		if (!Z_Registration_Info_UEnum_EBackgroundType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBackgroundType.InnerSingleton, Z_Construct_UEnum_MaterialEditor_EBackgroundType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBackgroundType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CheckerboardSettings;
class UScriptStruct* FCheckerboardSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CheckerboardSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CheckerboardSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCheckerboardSettings, (UObject*)Z_Construct_UPackage__Script_MaterialEditor(), TEXT("CheckerboardSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CheckerboardSettings.OuterSingleton;
}
template<> MATERIALEDITOR_API UScriptStruct* StaticStruct<FCheckerboardSettings>()
{
	return FCheckerboardSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCheckerboardSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorOne_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorOne;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorTwo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorTwo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCheckerboardSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::NewProp_ColorOne_MetaData[] = {
		{ "Category", "Checkerboard" },
		{ "Comment", "// The first color of the checkerboard.\n" },
		{ "ModuleRelativePath", "Public/MaterialEditorSettings.h" },
		{ "ToolTip", "The first color of the checkerboard." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::NewProp_ColorOne = { "ColorOne", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckerboardSettings, ColorOne), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::NewProp_ColorOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::NewProp_ColorOne_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::NewProp_ColorTwo_MetaData[] = {
		{ "Category", "Checkerboard" },
		{ "Comment", "// The second color of the checkerboard\n" },
		{ "ModuleRelativePath", "Public/MaterialEditorSettings.h" },
		{ "ToolTip", "The second color of the checkerboard" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::NewProp_ColorTwo = { "ColorTwo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckerboardSettings, ColorTwo), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::NewProp_ColorTwo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::NewProp_ColorTwo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Checkerboard" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "2" },
		{ "Comment", "// The size of the checkered tiles\n" },
		{ "ModuleRelativePath", "Public/MaterialEditorSettings.h" },
		{ "ToolTip", "The size of the checkered tiles" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCheckerboardSettings, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::NewProp_Size_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::NewProp_ColorOne,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::NewProp_ColorTwo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::NewProp_Size,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialEditor,
		nullptr,
		&NewStructOps,
		"CheckerboardSettings",
		sizeof(FCheckerboardSettings),
		alignof(FCheckerboardSettings),
		Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCheckerboardSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_CheckerboardSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CheckerboardSettings.InnerSingleton, Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CheckerboardSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PreviewBackgroundSettings;
class UScriptStruct* FPreviewBackgroundSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PreviewBackgroundSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PreviewBackgroundSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPreviewBackgroundSettings, (UObject*)Z_Construct_UPackage__Script_MaterialEditor(), TEXT("PreviewBackgroundSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PreviewBackgroundSettings.OuterSingleton;
}
template<> MATERIALEDITOR_API UScriptStruct* StaticStruct<FPreviewBackgroundSettings>()
{
	return FPreviewBackgroundSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowBorder_MetaData[];
#endif
		static void NewProp_bShowBorder_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBorder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BorderColor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BackgroundType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BackgroundType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Checkerboard_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Checkerboard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MaterialEditorSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPreviewBackgroundSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_bShowBorder_MetaData[] = {
		{ "Comment", "// If true, displays a border around the texture (configured via the material editor)\n" },
		{ "ModuleRelativePath", "Public/MaterialEditorSettings.h" },
		{ "ToolTip", "If true, displays a border around the texture (configured via the material editor)" },
	};
#endif
	void Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_bShowBorder_SetBit(void* Obj)
	{
		((FPreviewBackgroundSettings*)Obj)->bShowBorder = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_bShowBorder = { "bShowBorder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPreviewBackgroundSettings), &Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_bShowBorder_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_bShowBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_bShowBorder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_BorderColor_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "// Color to use for the border, if enabled\n" },
		{ "ModuleRelativePath", "Public/MaterialEditorSettings.h" },
		{ "ToolTip", "Color to use for the border, if enabled" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_BorderColor = { "BorderColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewBackgroundSettings, BorderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_BorderColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_BorderColor_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_BackgroundType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_BackgroundType_MetaData[] = {
		{ "Comment", "// The type of background to show (configured via the material editor)\n" },
		{ "ModuleRelativePath", "Public/MaterialEditorSettings.h" },
		{ "ToolTip", "The type of background to show (configured via the material editor)" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_BackgroundType = { "BackgroundType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewBackgroundSettings, BackgroundType), Z_Construct_UEnum_MaterialEditor_EBackgroundType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_BackgroundType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_BackgroundType_MetaData)) }; // 2313032846
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "// The color used as the background of the preview\n" },
		{ "ModuleRelativePath", "Public/MaterialEditorSettings.h" },
		{ "ToolTip", "The color used as the background of the preview" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewBackgroundSettings, BackgroundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_BackgroundColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_Checkerboard_MetaData[] = {
		{ "Category", "Background" },
		{ "ModuleRelativePath", "Public/MaterialEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_Checkerboard = { "Checkerboard", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPreviewBackgroundSettings, Checkerboard), Z_Construct_UScriptStruct_FCheckerboardSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_Checkerboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_Checkerboard_MetaData)) }; // 173820708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_bShowBorder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_BorderColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_BackgroundType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_BackgroundType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_BackgroundColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewProp_Checkerboard,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialEditor,
		nullptr,
		&NewStructOps,
		"PreviewBackgroundSettings",
		sizeof(FPreviewBackgroundSettings),
		alignof(FPreviewBackgroundSettings),
		Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPreviewBackgroundSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_PreviewBackgroundSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PreviewBackgroundSettings.InnerSingleton, Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PreviewBackgroundSettings.InnerSingleton;
	}
	void UMaterialEditorSettings::StaticRegisterNativesUMaterialEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialEditorSettings);
	UClass* Z_Construct_UClass_UMaterialEditorSettings_NoRegister()
	{
		return UMaterialEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaliOfflineCompilerPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaliOfflineCompilerPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPreviewWidth_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultPreviewWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPreviewHeight_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultPreviewHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewBackground_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewBackground;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MaterialEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaterialEditorSettings.h" },
		{ "ModuleRelativePath", "Public/MaterialEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_MaliOfflineCompilerPath_MetaData[] = {
		{ "Category", "Offline Shader Compilers" },
		{ "Comment", "/**\n\x09Path to user installed Mali shader compiler that can be used by the material editor to compile and extract shader informations for Android platforms.\n\x09Official website address: https://developer.arm.com/products/software-development-tools/graphics-development-tools/mali-offline-compiler/downloads\n\x09*/" },
		{ "DisplayName", "Mali Offline Compiler" },
		{ "ModuleRelativePath", "Public/MaterialEditorSettings.h" },
		{ "ToolTip", "Path to user installed Mali shader compiler that can be used by the material editor to compile and extract shader informations for Android platforms.\nOfficial website address: https://developer.arm.com/products/software-development-tools/graphics-development-tools/mali-offline-compiler/downloads" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_MaliOfflineCompilerPath = { "MaliOfflineCompilerPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorSettings, MaliOfflineCompilerPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_MaliOfflineCompilerPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_MaliOfflineCompilerPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_DefaultPreviewWidth_MetaData[] = {
		{ "Category", "User Interface Domain" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "1" },
		{ "Comment", "// The width (in pixels) of the preview viewport when a material editor is first opened\n" },
		{ "ModuleRelativePath", "Public/MaterialEditorSettings.h" },
		{ "ToolTip", "The width (in pixels) of the preview viewport when a material editor is first opened" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_DefaultPreviewWidth = { "DefaultPreviewWidth", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorSettings, DefaultPreviewWidth), METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_DefaultPreviewWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_DefaultPreviewWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_DefaultPreviewHeight_MetaData[] = {
		{ "Category", "User Interface Domain" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "1" },
		{ "Comment", "// The height (in pixels) of the preview viewport when a material editor is first opened\n" },
		{ "ModuleRelativePath", "Public/MaterialEditorSettings.h" },
		{ "ToolTip", "The height (in pixels) of the preview viewport when a material editor is first opened" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_DefaultPreviewHeight = { "DefaultPreviewHeight", nullptr, (EPropertyFlags)0x0020080000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorSettings, DefaultPreviewHeight), METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_DefaultPreviewHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_DefaultPreviewHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_PreviewBackground_MetaData[] = {
		{ "Category", "User Interface Domain" },
		{ "Comment", "// Configures the background shown behind the UI material preview\n" },
		{ "ModuleRelativePath", "Public/MaterialEditorSettings.h" },
		{ "ToolTip", "Configures the background shown behind the UI material preview" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_PreviewBackground = { "PreviewBackground", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialEditorSettings, PreviewBackground), Z_Construct_UScriptStruct_FPreviewBackgroundSettings, METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_PreviewBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_PreviewBackground_MetaData)) }; // 3248323394
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_MaliOfflineCompilerPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_DefaultPreviewWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_DefaultPreviewHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorSettings_Statics::NewProp_PreviewBackground,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialEditorSettings_Statics::ClassParams = {
		&UMaterialEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UMaterialEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialEditorSettings.OuterSingleton, Z_Construct_UClass_UMaterialEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialEditorSettings.OuterSingleton;
	}
	template<> MATERIALEDITOR_API UClass* StaticClass<UMaterialEditorSettings>()
	{
		return UMaterialEditorSettings::StaticClass();
	}
	UMaterialEditorSettings::UMaterialEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialEditorSettings);
	UMaterialEditorSettings::~UMaterialEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_Statics::EnumInfo[] = {
		{ EBackgroundType_StaticEnum, TEXT("EBackgroundType"), &Z_Registration_Info_UEnum_EBackgroundType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2313032846U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_Statics::ScriptStructInfo[] = {
		{ FCheckerboardSettings::StaticStruct, Z_Construct_UScriptStruct_FCheckerboardSettings_Statics::NewStructOps, TEXT("CheckerboardSettings"), &Z_Registration_Info_UScriptStruct_CheckerboardSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCheckerboardSettings), 173820708U) },
		{ FPreviewBackgroundSettings::StaticStruct, Z_Construct_UScriptStruct_FPreviewBackgroundSettings_Statics::NewStructOps, TEXT("PreviewBackgroundSettings"), &Z_Registration_Info_UScriptStruct_PreviewBackgroundSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPreviewBackgroundSettings), 3248323394U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialEditorSettings, UMaterialEditorSettings::StaticClass, TEXT("UMaterialEditorSettings"), &Z_Registration_Info_UClass_UMaterialEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialEditorSettings), 3974633455U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_1692772527(TEXT("/Script/MaterialEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MaterialEditor_Public_MaterialEditorSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
