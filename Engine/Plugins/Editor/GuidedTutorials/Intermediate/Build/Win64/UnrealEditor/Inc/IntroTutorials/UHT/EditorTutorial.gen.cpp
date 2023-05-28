// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorTutorial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorTutorial() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UEditorTutorial();
	INTROTUTORIALS_API UClass* Z_Construct_UClass_UEditorTutorial_NoRegister();
	INTROTUTORIALS_API UEnum* Z_Construct_UEnum_IntroTutorials_ETutorialAnchorIdentifier();
	INTROTUTORIALS_API UEnum* Z_Construct_UEnum_IntroTutorials_ETutorialContent();
	INTROTUTORIALS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialCategory();
	INTROTUTORIALS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialContent();
	INTROTUTORIALS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialContentAnchor();
	INTROTUTORIALS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialStage();
	INTROTUTORIALS_API UScriptStruct* Z_Construct_UScriptStruct_FTutorialWidgetContent();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	UPackage* Z_Construct_UPackage__Script_IntroTutorials();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETutorialContent;
	static UEnum* ETutorialContent_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETutorialContent.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETutorialContent.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IntroTutorials_ETutorialContent, (UObject*)Z_Construct_UPackage__Script_IntroTutorials(), TEXT("ETutorialContent"));
		}
		return Z_Registration_Info_UEnum_ETutorialContent.OuterSingleton;
	}
	template<> INTROTUTORIALS_API UEnum* StaticEnum<ETutorialContent::Type>()
	{
		return ETutorialContent_StaticEnum();
	}
	struct Z_Construct_UEnum_IntroTutorials_ETutorialContent_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IntroTutorials_ETutorialContent_Statics::Enumerators[] = {
		{ "ETutorialContent::None", (int64)ETutorialContent::None },
		{ "ETutorialContent::Text", (int64)ETutorialContent::Text },
		{ "ETutorialContent::UDNExcerpt", (int64)ETutorialContent::UDNExcerpt },
		{ "ETutorialContent::RichText", (int64)ETutorialContent::RichText },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IntroTutorials_ETutorialContent_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** The type of tutorial content to display */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "None.Comment", "/** Blank - displays no content */" },
		{ "None.Name", "ETutorialContent::None" },
		{ "None.ToolTip", "Blank - displays no content" },
		{ "RichText.Comment", "/** Rich text content */" },
		{ "RichText.Name", "ETutorialContent::RichText" },
		{ "RichText.ToolTip", "Rich text content" },
		{ "ScriptName", "TutorialContentType" },
		{ "Text.Comment", "/** Plain text content */" },
		{ "Text.Name", "ETutorialContent::Text" },
		{ "Text.ToolTip", "Plain text content" },
		{ "ToolTip", "The type of tutorial content to display" },
		{ "UDNExcerpt.Comment", "/** Content from a UDN excerpt */" },
		{ "UDNExcerpt.Name", "ETutorialContent::UDNExcerpt" },
		{ "UDNExcerpt.ToolTip", "Content from a UDN excerpt" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IntroTutorials_ETutorialContent_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IntroTutorials,
		nullptr,
		"ETutorialContent",
		"ETutorialContent::Type",
		Z_Construct_UEnum_IntroTutorials_ETutorialContent_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IntroTutorials_ETutorialContent_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_IntroTutorials_ETutorialContent_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IntroTutorials_ETutorialContent_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IntroTutorials_ETutorialContent()
	{
		if (!Z_Registration_Info_UEnum_ETutorialContent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETutorialContent.InnerSingleton, Z_Construct_UEnum_IntroTutorials_ETutorialContent_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETutorialContent.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETutorialAnchorIdentifier;
	static UEnum* ETutorialAnchorIdentifier_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETutorialAnchorIdentifier.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETutorialAnchorIdentifier.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IntroTutorials_ETutorialAnchorIdentifier, (UObject*)Z_Construct_UPackage__Script_IntroTutorials(), TEXT("ETutorialAnchorIdentifier"));
		}
		return Z_Registration_Info_UEnum_ETutorialAnchorIdentifier.OuterSingleton;
	}
	template<> INTROTUTORIALS_API UEnum* StaticEnum<ETutorialAnchorIdentifier::Type>()
	{
		return ETutorialAnchorIdentifier_StaticEnum();
	}
	struct Z_Construct_UEnum_IntroTutorials_ETutorialAnchorIdentifier_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IntroTutorials_ETutorialAnchorIdentifier_Statics::Enumerators[] = {
		{ "ETutorialAnchorIdentifier::None", (int64)ETutorialAnchorIdentifier::None },
		{ "ETutorialAnchorIdentifier::NamedWidget", (int64)ETutorialAnchorIdentifier::NamedWidget },
		{ "ETutorialAnchorIdentifier::Asset", (int64)ETutorialAnchorIdentifier::Asset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IntroTutorials_ETutorialAnchorIdentifier_Statics::Enum_MetaDataParams[] = {
		{ "Asset.Comment", "/** An asset accessible via the content browser */" },
		{ "Asset.Name", "ETutorialAnchorIdentifier::Asset" },
		{ "Asset.ToolTip", "An asset accessible via the content browser" },
		{ "Comment", "/** The type of tutorial content to display */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "NamedWidget.Comment", "/** Uses a tutorial wrapper widget */" },
		{ "NamedWidget.Name", "ETutorialAnchorIdentifier::NamedWidget" },
		{ "NamedWidget.ToolTip", "Uses a tutorial wrapper widget" },
		{ "None.Comment", "/** No anchor */" },
		{ "None.Name", "ETutorialAnchorIdentifier::None" },
		{ "None.ToolTip", "No anchor" },
		{ "ToolTip", "The type of tutorial content to display" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IntroTutorials_ETutorialAnchorIdentifier_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IntroTutorials,
		nullptr,
		"ETutorialAnchorIdentifier",
		"ETutorialAnchorIdentifier::Type",
		Z_Construct_UEnum_IntroTutorials_ETutorialAnchorIdentifier_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IntroTutorials_ETutorialAnchorIdentifier_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_IntroTutorials_ETutorialAnchorIdentifier_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IntroTutorials_ETutorialAnchorIdentifier_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IntroTutorials_ETutorialAnchorIdentifier()
	{
		if (!Z_Registration_Info_UEnum_ETutorialAnchorIdentifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETutorialAnchorIdentifier.InnerSingleton, Z_Construct_UEnum_IntroTutorials_ETutorialAnchorIdentifier_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETutorialAnchorIdentifier.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TutorialCategory;
class UScriptStruct* FTutorialCategory::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TutorialCategory.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TutorialCategory.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialCategory, (UObject*)Z_Construct_UPackage__Script_IntroTutorials(), TEXT("TutorialCategory"));
	}
	return Z_Registration_Info_UScriptStruct_TutorialCategory.OuterSingleton;
}
template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<FTutorialCategory>()
{
	return FTutorialCategory::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTutorialCategory_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Identifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SortOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialCategory_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Category description */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Category description" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialCategory>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Period-separated category name, e.g. \"Editor Quickstart.Level Editor\" */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Period-separated category name, e.g. \"Editor Quickstart.Level Editor\"" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialCategory, Identifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Identifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Title of the category */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Title of the category" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialCategory, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_SortOrder_MetaData[] = {
		{ "Comment", "/** Sort order, used by the tutorial browser - set in editor game-agnostic INI file */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Sort order, used by the tutorial browser - set in editor game-agnostic INI file" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialCategory, SortOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_SortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_SortOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Localized text to use to describe this category */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Localized text to use to describe this category" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialCategory, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** Icon for this tutorial, used when presented to the user in the tutorial browser. Only used if there isn't a valid texture to use. */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Icon for this tutorial, used when presented to the user in the tutorial browser. Only used if there isn't a valid texture to use." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialCategory, Icon), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Texture_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture2D" },
		{ "Category", "Tutorial" },
		{ "Comment", "/** Texture for this tutorial, used when presented to the user in the tutorial browser. */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Texture for this tutorial, used when presented to the user in the tutorial browser." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialCategory, Texture), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Texture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialCategory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Identifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_SortOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewProp_Texture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialCategory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
		nullptr,
		&NewStructOps,
		"TutorialCategory",
		sizeof(FTutorialCategory),
		alignof(FTutorialCategory),
		Z_Construct_UScriptStruct_FTutorialCategory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialCategory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialCategory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialCategory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialCategory()
	{
		if (!Z_Registration_Info_UScriptStruct_TutorialCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TutorialCategory.InnerSingleton, Z_Construct_UScriptStruct_FTutorialCategory_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TutorialCategory.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TutorialContent;
class UScriptStruct* FTutorialContent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TutorialContent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TutorialContent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialContent, (UObject*)Z_Construct_UPackage__Script_IntroTutorials(), TEXT("TutorialContent"));
	}
	return Z_Registration_Info_UScriptStruct_TutorialContent.OuterSingleton;
}
template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<FTutorialContent>()
{
	return FTutorialContent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTutorialContent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcerptName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExcerptName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Content wrapper */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Content wrapper" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialContent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialContent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** The type of this content */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "The type of this content" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialContent, Type), Z_Construct_UEnum_IntroTutorials_ETutorialContent, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Type_MetaData)) }; // 424781944
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Content reference string, path etc. */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Content reference string, path etc." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialContent, Content), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_ExcerptName_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Excerpt name for UDN excerpt */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Excerpt name for UDN excerpt" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_ExcerptName = { "ExcerptName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialContent, ExcerptName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_ExcerptName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_ExcerptName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Text_MetaData[] = {
		{ "Category", "Content" },
		{ "Comment", "/** Localized text to use with this content */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Localized text to use with this content" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialContent, Text), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_ExcerptName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContent_Statics::NewProp_Text,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialContent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
		nullptr,
		&NewStructOps,
		"TutorialContent",
		sizeof(FTutorialContent),
		alignof(FTutorialContent),
		Z_Construct_UScriptStruct_FTutorialContent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialContent()
	{
		if (!Z_Registration_Info_UScriptStruct_TutorialContent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TutorialContent.InnerSingleton, Z_Construct_UScriptStruct_FTutorialContent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TutorialContent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TutorialContentAnchor;
class UScriptStruct* FTutorialContentAnchor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TutorialContentAnchor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TutorialContentAnchor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialContentAnchor, (UObject*)Z_Construct_UPackage__Script_IntroTutorials(), TEXT("TutorialContentAnchor"));
	}
	return Z_Registration_Info_UScriptStruct_TutorialContentAnchor.OuterSingleton;
}
template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<FTutorialContentAnchor>()
{
	return FTutorialContentAnchor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WrapperIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WrapperIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Asset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Asset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawHighlight_MetaData[];
#endif
		static void NewProp_bDrawHighlight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawHighlight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabToFocusOrOpen_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TabToFocusOrOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GUIDString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GUIDString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OuterName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A way of identifying something to be highlighted by a tutorial */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "A way of identifying something to be highlighted by a tutorial" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialContentAnchor>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Anchor" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialContentAnchor, Type), Z_Construct_UEnum_IntroTutorials_ETutorialAnchorIdentifier, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Type_MetaData)) }; // 3739325161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_WrapperIdentifier_MetaData[] = {
		{ "Category", "Anchor" },
		{ "Comment", "/** If widget is in a wrapper widget, this is the wrapper widget name */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "If widget is in a wrapper widget, this is the wrapper widget name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_WrapperIdentifier = { "WrapperIdentifier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialContentAnchor, WrapperIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_WrapperIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_WrapperIdentifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Asset_MetaData[] = {
		{ "Category", "Anchor" },
		{ "Comment", "/** If reference is an asset, we use this to resolve it */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "If reference is an asset, we use this to resolve it" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialContentAnchor, Asset), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Asset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Asset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_bDrawHighlight_MetaData[] = {
		{ "Category", "Anchor" },
		{ "Comment", "/** Whether to draw an animated highlight around the widget */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Whether to draw an animated highlight around the widget" },
	};
#endif
	void Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_bDrawHighlight_SetBit(void* Obj)
	{
		((FTutorialContentAnchor*)Obj)->bDrawHighlight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_bDrawHighlight = { "bDrawHighlight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTutorialContentAnchor), &Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_bDrawHighlight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_bDrawHighlight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_bDrawHighlight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_TabToFocusOrOpen_MetaData[] = {
		{ "Category", "Anchor" },
		{ "Comment", "/* Tab on which to focus (EG 'My Blueprint' tab). */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Tab on which to focus (EG 'My Blueprint' tab)." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_TabToFocusOrOpen = { "TabToFocusOrOpen", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialContentAnchor, TabToFocusOrOpen), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_TabToFocusOrOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_TabToFocusOrOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "Category", "AnchorMeta|FBlueprintGraphNodeMetaData" },
		{ "Comment", "/* User friendly name to display in the dialog */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "User friendly name to display in the dialog" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialContentAnchor, FriendlyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_FriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_FriendlyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_GUIDString_MetaData[] = {
		{ "Category", "AnchorMeta|FBlueprintGraphNodeMetaData" },
		{ "Comment", "/* The GUID string */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "The GUID string" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_GUIDString = { "GUIDString", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialContentAnchor, GUIDString), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_GUIDString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_GUIDString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_OuterName_MetaData[] = {
		{ "Category", "AnchorMeta|FBlueprintGraphNodeMetaData" },
		{ "Comment", "/* Name of the outer object - should be the blueprint that 'owns' the node */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Name of the outer object - should be the blueprint that 'owns' the node" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_OuterName = { "OuterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialContentAnchor, OuterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_OuterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_OuterName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_WrapperIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_Asset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_bDrawHighlight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_TabToFocusOrOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_FriendlyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_GUIDString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewProp_OuterName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
		nullptr,
		&NewStructOps,
		"TutorialContentAnchor",
		sizeof(FTutorialContentAnchor),
		alignof(FTutorialContentAnchor),
		Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialContentAnchor()
	{
		if (!Z_Registration_Info_UScriptStruct_TutorialContentAnchor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TutorialContentAnchor.InnerSingleton, Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TutorialContentAnchor.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TutorialWidgetContent;
class UScriptStruct* FTutorialWidgetContent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TutorialWidgetContent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TutorialWidgetContent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialWidgetContent, (UObject*)Z_Construct_UPackage__Script_IntroTutorials(), TEXT("TutorialWidgetContent"));
	}
	return Z_Registration_Info_UScriptStruct_TutorialWidgetContent.OuterSingleton;
}
template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<FTutorialWidgetContent>()
{
	return FTutorialWidgetContent::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetAnchor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetAnchor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContentWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ContentWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoFocus_MetaData[];
#endif
		static void NewProp_bAutoFocus_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoFocus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Content that is displayed relative to a widget */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Content that is displayed relative to a widget" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialWidgetContent>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Content to associate with widget */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Content to associate with widget" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialWidgetContent, Content), Z_Construct_UScriptStruct_FTutorialContent, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Content_MetaData)) }; // 2444939517
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_WidgetAnchor_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Anchor for content widget to highlight */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Anchor for content widget to highlight" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_WidgetAnchor = { "WidgetAnchor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialWidgetContent, WidgetAnchor), Z_Construct_UScriptStruct_FTutorialContentAnchor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_WidgetAnchor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_WidgetAnchor_MetaData)) }; // 595680332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialWidgetContent, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "Category", "Widget" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialWidgetContent, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_VerticalAlignment_MetaData)) }; // 1453904578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Custom offset from widget */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Custom offset from widget" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialWidgetContent, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_ContentWidth_MetaData[] = {
		{ "Category", "Widget" },
		{ "Comment", "/** Content width - text will be wrapped at this point */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Content width - text will be wrapped at this point" },
		{ "UIMax", "600.0" },
		{ "UIMin", "10.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_ContentWidth = { "ContentWidth", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialWidgetContent, ContentWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_ContentWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_ContentWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_bAutoFocus_MetaData[] = {
		{ "Category", "Anchor" },
		{ "Comment", "/** If this a node that can be focused (EG a blueprint node) should we auto focus on it */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "If this a node that can be focused (EG a blueprint node) should we auto focus on it" },
	};
#endif
	void Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_bAutoFocus_SetBit(void* Obj)
	{
		((FTutorialWidgetContent*)Obj)->bAutoFocus = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_bAutoFocus = { "bAutoFocus", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTutorialWidgetContent), &Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_bAutoFocus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_bAutoFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_bAutoFocus_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_WidgetAnchor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_VerticalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_ContentWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewProp_bAutoFocus,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
		nullptr,
		&NewStructOps,
		"TutorialWidgetContent",
		sizeof(FTutorialWidgetContent),
		alignof(FTutorialWidgetContent),
		Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialWidgetContent()
	{
		if (!Z_Registration_Info_UScriptStruct_TutorialWidgetContent.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TutorialWidgetContent.InnerSingleton, Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TutorialWidgetContent.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TutorialStage;
class UScriptStruct* FTutorialStage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TutorialStage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TutorialStage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTutorialStage, (UObject*)Z_Construct_UPackage__Script_IntroTutorials(), TEXT("TutorialStage"));
	}
	return Z_Registration_Info_UScriptStruct_TutorialStage.OuterSingleton;
}
template<> INTROTUTORIALS_API UScriptStruct* StaticStruct<FTutorialStage>()
{
	return FTutorialStage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTutorialStage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Content;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetContent_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetContent_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WidgetContent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextButtonText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NextButtonText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackButtonText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_BackButtonText;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlatformsToTest_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformsToTest_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlatformsToTest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInvertPlatformTest_MetaData[];
#endif
		static void NewProp_bInvertPlatformTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertPlatformTest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialStage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A single tutorial stage, containing the optional main content & a number of widgets with content attached */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "A single tutorial stage, containing the optional main content & a number of widgets with content attached" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTutorialStage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTutorialStage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Stage" },
		{ "Comment", "/** Identifier for this stage */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Identifier for this stage" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialStage, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Content_MetaData[] = {
		{ "Category", "Stage" },
		{ "Comment", "/** Non-widget-bound content to display in this stage */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Non-widget-bound content to display in this stage" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialStage, Content), Z_Construct_UScriptStruct_FTutorialContent, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Content_MetaData)) }; // 2444939517
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_WidgetContent_Inner = { "WidgetContent", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTutorialWidgetContent, METADATA_PARAMS(nullptr, 0) }; // 910255923
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_WidgetContent_MetaData[] = {
		{ "Category", "Stage" },
		{ "Comment", "/** Widget-bound content to display for this stage */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Widget-bound content to display for this stage" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_WidgetContent = { "WidgetContent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialStage, WidgetContent), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_WidgetContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_WidgetContent_MetaData)) }; // 910255923
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_NextButtonText_MetaData[] = {
		{ "Category", "Stage" },
		{ "Comment", "/** Text to display on the next button */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Text to display on the next button" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_NextButtonText = { "NextButtonText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialStage, NextButtonText), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_NextButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_NextButtonText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_BackButtonText_MetaData[] = {
		{ "Category", "Stage" },
		{ "Comment", "/** Text to display on the back button */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Text to display on the back button" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_BackButtonText = { "BackButtonText", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialStage, BackButtonText), METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_BackButtonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_BackButtonText_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_PlatformsToTest_Inner = { "PlatformsToTest", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_PlatformsToTest_MetaData[] = {
		{ "Category", "Stage" },
		{ "Comment", "/** List of platforms to test against. Meaning of test is determined by InvertPlatformTest. */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "List of platforms to test against. Meaning of test is determined by InvertPlatformTest." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_PlatformsToTest = { "PlatformsToTest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTutorialStage, PlatformsToTest), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_PlatformsToTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_PlatformsToTest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_bInvertPlatformTest_MetaData[] = {
		{ "Category", "Stage" },
		{ "Comment", "/** If false, stage will be skipped if running on any platform in PlatformsToTest. If true, the stage will be if not running on any platform in PlatformsToTest. */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "If false, stage will be skipped if running on any platform in PlatformsToTest. If true, the stage will be if not running on any platform in PlatformsToTest." },
	};
#endif
	void Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_bInvertPlatformTest_SetBit(void* Obj)
	{
		((FTutorialStage*)Obj)->bInvertPlatformTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_bInvertPlatformTest = { "bInvertPlatformTest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTutorialStage), &Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_bInvertPlatformTest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_bInvertPlatformTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_bInvertPlatformTest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTutorialStage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_WidgetContent_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_WidgetContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_NextButtonText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_BackButtonText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_PlatformsToTest_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_PlatformsToTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTutorialStage_Statics::NewProp_bInvertPlatformTest,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTutorialStage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
		nullptr,
		&NewStructOps,
		"TutorialStage",
		sizeof(FTutorialStage),
		alignof(FTutorialStage),
		Z_Construct_UScriptStruct_FTutorialStage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialStage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTutorialStage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTutorialStage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTutorialStage()
	{
		if (!Z_Registration_Info_UScriptStruct_TutorialStage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TutorialStage.InnerSingleton, Z_Construct_UScriptStruct_FTutorialStage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TutorialStage.InnerSingleton;
	}
	DEFINE_FUNCTION(UEditorTutorial::execGetEngineFolderVisibilty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UEditorTutorial::GetEngineFolderVisibilty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorTutorial::execSetEngineFolderVisibilty)
	{
		P_GET_UBOOL(Z_Param_bNewVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorTutorial::SetEngineFolderVisibilty(Z_Param_bNewVisibility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorTutorial::execOpenAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_Asset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorTutorial::OpenAsset(Z_Param_Asset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorTutorial::execBeginTutorial)
	{
		P_GET_OBJECT(UEditorTutorial,Z_Param_TutorialToStart);
		P_GET_UBOOL(Z_Param_bRestart);
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorTutorial::BeginTutorial(Z_Param_TutorialToStart,Z_Param_bRestart);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorTutorial::execGoToPreviousTutorialStage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorTutorial::GoToPreviousTutorialStage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorTutorial::execGoToNextTutorialStage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UEditorTutorial::GoToNextTutorialStage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEditorTutorial::execGetActorReference)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathToActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetActorReference(Z_Param_PathToActor);
		P_NATIVE_END;
	}
	struct EditorTutorial_eventOnTutorialStageEnded_Parms
	{
		FName StageName;
	};
	struct EditorTutorial_eventOnTutorialStageStarted_Parms
	{
		FName StageName;
	};
	static FName NAME_UEditorTutorial_OnTutorialClosed = FName(TEXT("OnTutorialClosed"));
	void UEditorTutorial::OnTutorialClosed()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorTutorial_OnTutorialClosed),NULL);
	}
	static FName NAME_UEditorTutorial_OnTutorialLaunched = FName(TEXT("OnTutorialLaunched"));
	void UEditorTutorial::OnTutorialLaunched()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEditorTutorial_OnTutorialLaunched),NULL);
	}
	static FName NAME_UEditorTutorial_OnTutorialStageEnded = FName(TEXT("OnTutorialStageEnded"));
	void UEditorTutorial::OnTutorialStageEnded(FName StageName)
	{
		EditorTutorial_eventOnTutorialStageEnded_Parms Parms;
		Parms.StageName=StageName;
		ProcessEvent(FindFunctionChecked(NAME_UEditorTutorial_OnTutorialStageEnded),&Parms);
	}
	static FName NAME_UEditorTutorial_OnTutorialStageStarted = FName(TEXT("OnTutorialStageStarted"));
	void UEditorTutorial::OnTutorialStageStarted(FName StageName)
	{
		EditorTutorial_eventOnTutorialStageStarted_Parms Parms;
		Parms.StageName=StageName;
		ProcessEvent(FindFunctionChecked(NAME_UEditorTutorial_OnTutorialStageStarted),&Parms);
	}
	void UEditorTutorial::StaticRegisterNativesUEditorTutorial()
	{
		UClass* Class = UEditorTutorial::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginTutorial", &UEditorTutorial::execBeginTutorial },
			{ "GetActorReference", &UEditorTutorial::execGetActorReference },
			{ "GetEngineFolderVisibilty", &UEditorTutorial::execGetEngineFolderVisibilty },
			{ "GoToNextTutorialStage", &UEditorTutorial::execGoToNextTutorialStage },
			{ "GoToPreviousTutorialStage", &UEditorTutorial::execGoToPreviousTutorialStage },
			{ "OpenAsset", &UEditorTutorial::execOpenAsset },
			{ "SetEngineFolderVisibilty", &UEditorTutorial::execSetEngineFolderVisibilty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics
	{
		struct EditorTutorial_eventBeginTutorial_Parms
		{
			UEditorTutorial* TutorialToStart;
			bool bRestart;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TutorialToStart;
		static void NewProp_bRestart_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::NewProp_TutorialToStart = { "TutorialToStart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorTutorial_eventBeginTutorial_Parms, TutorialToStart), Z_Construct_UClass_UEditorTutorial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::NewProp_bRestart_SetBit(void* Obj)
	{
		((EditorTutorial_eventBeginTutorial_Parms*)Obj)->bRestart = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::NewProp_bRestart = { "bRestart", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorTutorial_eventBeginTutorial_Parms), &Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::NewProp_bRestart_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::NewProp_TutorialToStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::NewProp_bRestart,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** Begin a tutorial. Note that this will end the current tutorial that is in progress, if any */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Begin a tutorial. Note that this will end the current tutorial that is in progress, if any" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "BeginTutorial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::EditorTutorial_eventBeginTutorial_Parms), Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_BeginTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorTutorial_BeginTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics
	{
		struct EditorTutorial_eventGetActorReference_Parms
		{
			FString PathToActor;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathToActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::NewProp_PathToActor = { "PathToActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorTutorial_eventGetActorReference_Parms, PathToActor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorTutorial_eventGetActorReference_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::NewProp_PathToActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/**\n\x09* Attempts to find the actor specified by PathToActor in the current editor world\n\x09* @param\x09PathToActor\x09The path to the actor (e.g. PersistentLevel.PlayerStart)\n\x09* @return\x09""A reference to the actor, or none if it wasn't found\n\x09*/" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Attempts to find the actor specified by PathToActor in the current editor world\n@param        PathToActor     The path to the actor (e.g. PersistentLevel.PlayerStart)\n@return       A reference to the actor, or none if it wasn't found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "GetActorReference", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::EditorTutorial_eventGetActorReference_Parms), Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_GetActorReference()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorTutorial_GetActorReference_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics
	{
		struct EditorTutorial_eventGetEngineFolderVisibilty_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EditorTutorial_eventGetEngineFolderVisibilty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorTutorial_eventGetEngineFolderVisibilty_Parms), &Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/**\n\x09 * Returns the visibility of the engine folder in the content browser\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Returns the visibility of the engine folder in the content browser" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "GetEngineFolderVisibilty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::EditorTutorial_eventGetEngineFolderVisibilty_Parms), Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_GoToNextTutorialStage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_GoToNextTutorialStage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** Advance to the next stage of a tutorial */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Advance to the next stage of a tutorial" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_GoToNextTutorialStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "GoToNextTutorialStage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_GoToNextTutorialStage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_GoToNextTutorialStage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_GoToNextTutorialStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorTutorial_GoToNextTutorialStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_GoToPreviousTutorialStage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_GoToPreviousTutorialStage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** Advance to the previous stage of a tutorial */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Advance to the previous stage of a tutorial" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_GoToPreviousTutorialStage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "GoToPreviousTutorialStage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_GoToPreviousTutorialStage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_GoToPreviousTutorialStage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_GoToPreviousTutorialStage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorTutorial_GoToPreviousTutorialStage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_OnTutorialClosed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_OnTutorialClosed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** Event fired when a tutorial is closed */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Event fired when a tutorial is closed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_OnTutorialClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "OnTutorialClosed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_OnTutorialClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_OnTutorialClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_OnTutorialClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorTutorial_OnTutorialClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_OnTutorialLaunched_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_OnTutorialLaunched_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** Event fired when a tutorial is launched */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Event fired when a tutorial is launched" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_OnTutorialLaunched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "OnTutorialLaunched", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_OnTutorialLaunched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_OnTutorialLaunched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_OnTutorialLaunched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorTutorial_OnTutorialLaunched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_StageName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::NewProp_StageName = { "StageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorTutorial_eventOnTutorialStageEnded_Parms, StageName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::NewProp_StageName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** Event fired when a tutorial stage ends */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Event fired when a tutorial stage ends" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "OnTutorialStageEnded", nullptr, nullptr, sizeof(EditorTutorial_eventOnTutorialStageEnded_Parms), Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_StageName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::NewProp_StageName = { "StageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorTutorial_eventOnTutorialStageStarted_Parms, StageName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::NewProp_StageName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** Event fired when a tutorial stage begins */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Event fired when a tutorial stage begins" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "OnTutorialStageStarted", nullptr, nullptr, sizeof(EditorTutorial_eventOnTutorialStageStarted_Parms), Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics
	{
		struct EditorTutorial_eventOpenAsset_Parms
		{
			UObject* Asset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Asset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::NewProp_Asset = { "Asset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EditorTutorial_eventOpenAsset_Parms, Asset), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::NewProp_Asset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** \n\x09 * Open an asset for use by a tutorial\n\x09 * @param\x09""Asset\x09The asset to open\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Open an asset for use by a tutorial\n@param       Asset   The asset to open" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "OpenAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::EditorTutorial_eventOpenAsset_Parms), Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_OpenAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorTutorial_OpenAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics
	{
		struct EditorTutorial_eventSetEngineFolderVisibilty_Parms
		{
			bool bNewVisibility;
		};
		static void NewProp_bNewVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::NewProp_bNewVisibility_SetBit(void* Obj)
	{
		((EditorTutorial_eventSetEngineFolderVisibilty_Parms*)Obj)->bNewVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::NewProp_bNewVisibility = { "bNewVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EditorTutorial_eventSetEngineFolderVisibilty_Parms), &Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::NewProp_bNewVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::NewProp_bNewVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/**\n\x09 * Sets the visibility of the engine folder in the content browser\n\x09 */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Sets the visibility of the engine folder in the content browser" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditorTutorial, nullptr, "SetEngineFolderVisibilty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::EditorTutorial_eventSetEngineFolderVisibilty_Parms), Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorTutorial);
	UClass* Z_Construct_UClass_UEditorTutorial_NoRegister()
	{
		return UEditorTutorial::StaticClass();
	}
	struct Z_Construct_UClass_UEditorTutorial_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SortOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SummaryContent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SummaryContent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Stages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousTutorial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousTutorial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextTutorial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NextTutorial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStandalone_MetaData[];
#endif
		static void NewProp_bIsStandalone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStandalone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetToUse_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ImportPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ImportPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHideInBrowser_MetaData[];
#endif
		static void NewProp_bHideInBrowser_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHideInBrowser;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchTags_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SearchTags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorTutorial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IntroTutorials,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditorTutorial_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditorTutorial_BeginTutorial, "BeginTutorial" }, // 1869508756
		{ &Z_Construct_UFunction_UEditorTutorial_GetActorReference, "GetActorReference" }, // 1116324876
		{ &Z_Construct_UFunction_UEditorTutorial_GetEngineFolderVisibilty, "GetEngineFolderVisibilty" }, // 1661802874
		{ &Z_Construct_UFunction_UEditorTutorial_GoToNextTutorialStage, "GoToNextTutorialStage" }, // 176054429
		{ &Z_Construct_UFunction_UEditorTutorial_GoToPreviousTutorialStage, "GoToPreviousTutorialStage" }, // 256863135
		{ &Z_Construct_UFunction_UEditorTutorial_OnTutorialClosed, "OnTutorialClosed" }, // 3369005273
		{ &Z_Construct_UFunction_UEditorTutorial_OnTutorialLaunched, "OnTutorialLaunched" }, // 12195002
		{ &Z_Construct_UFunction_UEditorTutorial_OnTutorialStageEnded, "OnTutorialStageEnded" }, // 4024626345
		{ &Z_Construct_UFunction_UEditorTutorial_OnTutorialStageStarted, "OnTutorialStageStarted" }, // 2148818589
		{ &Z_Construct_UFunction_UEditorTutorial_OpenAsset, "OpenAsset" }, // 2018060473
		{ &Z_Construct_UFunction_UEditorTutorial_SetEngineFolderVisibilty, "SetEngineFolderVisibilty" }, // 2539954949
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** An asset used to build a stage-by-stage tutorial in the editor */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "EditorTutorial.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "An asset used to build a stage-by-stage tutorial in the editor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** Title of this tutorial, used when presented to the user */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Title of this tutorial, used when presented to the user" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorTutorial, Title), METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SortOrder_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** Sorting priority, used by the tutorial browser */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Sorting priority, used by the tutorial browser" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorTutorial, SortOrder), METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SortOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SortOrder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** Icon name for this tutorial, used when presented to the user in the tutorial browser. This is a name for the icon in the Slate editor style. Only used if there isn't a valid texture to use. */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Icon name for this tutorial, used when presented to the user in the tutorial browser. This is a name for the icon in the Slate editor style. Only used if there isn't a valid texture to use." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorTutorial, Icon), METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Icon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Icon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** Texture for this tutorial, used when presented to the user in the tutorial browser. */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Texture for this tutorial, used when presented to the user in the tutorial browser." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorTutorial, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Texture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** Category of this tutorial, used to organize tutorials when presented to the user */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Category of this tutorial, used to organize tutorials when presented to the user" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorTutorial, Category), METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SummaryContent_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** Content to be displayed for this tutorial when presented to the user in summary */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Content to be displayed for this tutorial when presented to the user in summary" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SummaryContent = { "SummaryContent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorTutorial, SummaryContent), Z_Construct_UScriptStruct_FTutorialContent, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SummaryContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SummaryContent_MetaData)) }; // 2444939517
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Stages_Inner = { "Stages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTutorialStage, METADATA_PARAMS(nullptr, 0) }; // 1646354082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Stages_MetaData[] = {
		{ "Category", "Stages" },
		{ "Comment", "/** The various stages of this tutorial */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "The various stages of this tutorial" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Stages = { "Stages", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorTutorial, Stages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Stages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Stages_MetaData)) }; // 1646354082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_PreviousTutorial_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** Tutorial to optionally chain back to if the \"back\" button is clicked on the first stage */" },
		{ "MetaClass", "/Script/IntroTutorials.EditorTutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Tutorial to optionally chain back to if the \"back\" button is clicked on the first stage" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_PreviousTutorial = { "PreviousTutorial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorTutorial, PreviousTutorial), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_PreviousTutorial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_PreviousTutorial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_NextTutorial_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** Tutorial to optionally chain onto after this tutorial completes */" },
		{ "MetaClass", "/Script/IntroTutorials.EditorTutorial" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Tutorial to optionally chain onto after this tutorial completes" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_NextTutorial = { "NextTutorial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorTutorial, NextTutorial), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_NextTutorial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_NextTutorial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bIsStandalone_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** A standalone tutorial displays no navigation buttons and each content widget has a close button */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "A standalone tutorial displays no navigation buttons and each content widget has a close button" },
	};
#endif
	void Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bIsStandalone_SetBit(void* Obj)
	{
		((UEditorTutorial*)Obj)->bIsStandalone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bIsStandalone = { "bIsStandalone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorTutorial), &Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bIsStandalone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bIsStandalone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bIsStandalone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_AssetToUse_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** Asset to open & attach the tutorial to. Non-widget-bound content will appear in the asset's window */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Asset to open & attach the tutorial to. Non-widget-bound content will appear in the asset's window" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_AssetToUse = { "AssetToUse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorTutorial, AssetToUse), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_AssetToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_AssetToUse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_ImportPath_MetaData[] = {
		{ "Comment", "/** The path this tutorial was imported from, if any. */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "The path this tutorial was imported from, if any." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_ImportPath = { "ImportPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorTutorial, ImportPath), METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_ImportPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_ImportPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bHideInBrowser_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** Hide this tutorial in the tutorials browser */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Hide this tutorial in the tutorials browser" },
	};
#endif
	void Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bHideInBrowser_SetBit(void* Obj)
	{
		((UEditorTutorial*)Obj)->bHideInBrowser = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bHideInBrowser = { "bHideInBrowser", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEditorTutorial), &Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bHideInBrowser_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bHideInBrowser_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bHideInBrowser_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SearchTags_MetaData[] = {
		{ "Category", "Tutorial" },
		{ "Comment", "/** Comma seperated list of tags the search will use to help find this tutorial  */" },
		{ "ModuleRelativePath", "Public/EditorTutorial.h" },
		{ "ToolTip", "Comma seperated list of tags the search will use to help find this tutorial" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SearchTags = { "SearchTags", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorTutorial, SearchTags), METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SearchTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SearchTags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorTutorial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SortOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SummaryContent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Stages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_Stages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_PreviousTutorial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_NextTutorial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bIsStandalone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_AssetToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_ImportPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_bHideInBrowser,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorTutorial_Statics::NewProp_SearchTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorTutorial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorTutorial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorTutorial_Statics::ClassParams = {
		&UEditorTutorial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEditorTutorial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorTutorial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorTutorial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorTutorial()
	{
		if (!Z_Registration_Info_UClass_UEditorTutorial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorTutorial.OuterSingleton, Z_Construct_UClass_UEditorTutorial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorTutorial.OuterSingleton;
	}
	template<> INTROTUTORIALS_API UClass* StaticClass<UEditorTutorial>()
	{
		return UEditorTutorial::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorTutorial);
	UEditorTutorial::~UEditorTutorial() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_Statics::EnumInfo[] = {
		{ ETutorialContent_StaticEnum, TEXT("ETutorialContent"), &Z_Registration_Info_UEnum_ETutorialContent, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 424781944U) },
		{ ETutorialAnchorIdentifier_StaticEnum, TEXT("ETutorialAnchorIdentifier"), &Z_Registration_Info_UEnum_ETutorialAnchorIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3739325161U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_Statics::ScriptStructInfo[] = {
		{ FTutorialCategory::StaticStruct, Z_Construct_UScriptStruct_FTutorialCategory_Statics::NewStructOps, TEXT("TutorialCategory"), &Z_Registration_Info_UScriptStruct_TutorialCategory, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTutorialCategory), 3105601252U) },
		{ FTutorialContent::StaticStruct, Z_Construct_UScriptStruct_FTutorialContent_Statics::NewStructOps, TEXT("TutorialContent"), &Z_Registration_Info_UScriptStruct_TutorialContent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTutorialContent), 2444939517U) },
		{ FTutorialContentAnchor::StaticStruct, Z_Construct_UScriptStruct_FTutorialContentAnchor_Statics::NewStructOps, TEXT("TutorialContentAnchor"), &Z_Registration_Info_UScriptStruct_TutorialContentAnchor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTutorialContentAnchor), 595680332U) },
		{ FTutorialWidgetContent::StaticStruct, Z_Construct_UScriptStruct_FTutorialWidgetContent_Statics::NewStructOps, TEXT("TutorialWidgetContent"), &Z_Registration_Info_UScriptStruct_TutorialWidgetContent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTutorialWidgetContent), 910255923U) },
		{ FTutorialStage::StaticStruct, Z_Construct_UScriptStruct_FTutorialStage_Statics::NewStructOps, TEXT("TutorialStage"), &Z_Registration_Info_UScriptStruct_TutorialStage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTutorialStage), 1646354082U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorTutorial, UEditorTutorial::StaticClass, TEXT("UEditorTutorial"), &Z_Registration_Info_UClass_UEditorTutorial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorTutorial), 1126473792U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_3277231809(TEXT("/Script/IntroTutorials"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GuidedTutorials_Source_IntroTutorials_Public_EditorTutorial_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
