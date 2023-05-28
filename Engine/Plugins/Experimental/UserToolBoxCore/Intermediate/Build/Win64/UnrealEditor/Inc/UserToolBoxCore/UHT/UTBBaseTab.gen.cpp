// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTBBaseTab.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUTBBaseTab() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_UserToolBoxCore();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUserToolBoxBaseTab();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUserToolBoxBaseTab_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBDefaultUITemplate_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBTabSection();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBTabSection_NoRegister();
// End Cross Module References
	void UUTBTabSection::StaticRegisterNativesUUTBTabSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUTBTabSection);
	UClass* Z_Construct_UClass_UUTBTabSection_NoRegister()
	{
		return UUTBTabSection::StaticClass();
	}
	struct Z_Construct_UClass_UUTBTabSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Commands_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Commands_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Commands;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUTBTabSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBTabSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UTBBaseTab.h" },
		{ "ModuleRelativePath", "Public/UTBBaseTab.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBTabSection_Statics::NewProp_SectionName_MetaData[] = {
		{ "Category", "Command Tab" },
		{ "Comment", "/** The name of the section*/" },
		{ "ModuleRelativePath", "Public/UTBBaseTab.h" },
		{ "ToolTip", "The name of the section" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUTBTabSection_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUTBTabSection, SectionName), METADATA_PARAMS(Z_Construct_UClass_UUTBTabSection_Statics::NewProp_SectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBTabSection_Statics::NewProp_SectionName_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUTBTabSection_Statics::NewProp_Commands_Inner = { "Commands", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUTBBaseCommand_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBTabSection_Statics::NewProp_Commands_MetaData[] = {
		{ "Comment", "/** The list of command */" },
		{ "ModuleRelativePath", "Public/UTBBaseTab.h" },
		{ "ToolTip", "The list of command" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUTBTabSection_Statics::NewProp_Commands = { "Commands", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUTBTabSection, Commands), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUTBTabSection_Statics::NewProp_Commands_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBTabSection_Statics::NewProp_Commands_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUTBTabSection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTBTabSection_Statics::NewProp_SectionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTBTabSection_Statics::NewProp_Commands_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUTBTabSection_Statics::NewProp_Commands,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUTBTabSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUTBTabSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUTBTabSection_Statics::ClassParams = {
		&UUTBTabSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUTBTabSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUTBTabSection_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUTBTabSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBTabSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUTBTabSection()
	{
		if (!Z_Registration_Info_UClass_UUTBTabSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUTBTabSection.OuterSingleton, Z_Construct_UClass_UUTBTabSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUTBTabSection.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UUTBTabSection>()
	{
		return UUTBTabSection::StaticClass();
	}
	UUTBTabSection::UUTBTabSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUTBTabSection);
	UUTBTabSection::~UUTBTabSection() {}
	void UUserToolBoxBaseTab::StaticRegisterNativesUUserToolBoxBaseTab()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserToolBoxBaseTab);
	UClass* Z_Construct_UClass_UUserToolBoxBaseTab_NoRegister()
	{
		return UUserToolBoxBaseTab::StaticClass();
	}
	struct Z_Construct_UClass_UUserToolBoxBaseTab_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TabUI_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TabUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCommandUIOverride_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_DefaultCommandUIOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsSettingShouldBeVisible_MetaData[];
#endif
		static void NewProp_IsSettingShouldBeVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSettingShouldBeVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisibleInViewportOverlay_MetaData[];
#endif
		static void NewProp_bIsVisibleInViewportOverlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisibleInViewportOverlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisibleInDrawer_MetaData[];
#endif
		static void NewProp_bIsVisibleInDrawer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisibleInDrawer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisibleInWindowsMenu_MetaData[];
#endif
		static void NewProp_bIsVisibleInWindowsMenu_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisibleInWindowsMenu;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaceholderSection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlaceholderSection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUserToolBoxBaseTab_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserToolBoxBaseTab_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UUserToolBoxBaseTab is the class that represent a configurable tab\n * This class contains the name of the tab and a section's list.\n * In that class, you can also specified an UTBUICommand to override \"by default\" the UI of each command.\n * Note: The override define in the command override the UI override define in the tab.\n * This is the class serialized as an asset.\n */" },
		{ "IncludePath", "UTBBaseTab.h" },
		{ "ModuleRelativePath", "Public/UTBBaseTab.h" },
		{ "ToolTip", "UUserToolBoxBaseTab is the class that represent a configurable tab\nThis class contains the name of the tab and a section's list.\nIn that class, you can also specified an UTBUICommand to override \"by default\" the UI of each command.\nNote: The override define in the command override the UI override define in the tab.\nThis is the class serialized as an asset." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Command Tab" },
		{ "Comment", "/** The name of the toolbox */" },
		{ "ModuleRelativePath", "Public/UTBBaseTab.h" },
		{ "ToolTip", "The name of the toolbox" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserToolBoxBaseTab, Name), METADATA_PARAMS(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_TabUI_MetaData[] = {
		{ "Category", "Command Tab" },
		{ "Comment", "/** The UI template to use to render this tab*/" },
		{ "ModuleRelativePath", "Public/UTBBaseTab.h" },
		{ "ToolTip", "The UI template to use to render this tab" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_TabUI = { "TabUI", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserToolBoxBaseTab, TabUI), Z_Construct_UClass_UClass, Z_Construct_UClass_UUTBDefaultUITemplate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_TabUI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_TabUI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_DefaultCommandUIOverride_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "Category", "Command Tab" },
		{ "Comment", "/** the default override for each command ( does not override ui command specified in the command) */" },
		{ "ModuleRelativePath", "Public/UTBBaseTab.h" },
		{ "MustImplement", "/Script/UserToolBoxCore.UTBUICommand" },
		{ "ToolTip", "the default override for each command ( does not override ui command specified in the command)" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_DefaultCommandUIOverride = { "DefaultCommandUIOverride", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserToolBoxBaseTab, DefaultCommandUIOverride), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_DefaultCommandUIOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_DefaultCommandUIOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_IsSettingShouldBeVisible_MetaData[] = {
		{ "Category", "Command Tab" },
		{ "Comment", "/** Should the setting's icon be visible on the top right of the tab ( for easy access)*/" },
		{ "ModuleRelativePath", "Public/UTBBaseTab.h" },
		{ "ToolTip", "Should the setting's icon be visible on the top right of the tab ( for easy access)" },
	};
#endif
	void Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_IsSettingShouldBeVisible_SetBit(void* Obj)
	{
		((UUserToolBoxBaseTab*)Obj)->IsSettingShouldBeVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_IsSettingShouldBeVisible = { "IsSettingShouldBeVisible", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUserToolBoxBaseTab), &Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_IsSettingShouldBeVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_IsSettingShouldBeVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_IsSettingShouldBeVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInViewportOverlay_MetaData[] = {
		{ "Category", "Command Tab" },
		{ "ModuleRelativePath", "Public/UTBBaseTab.h" },
	};
#endif
	void Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInViewportOverlay_SetBit(void* Obj)
	{
		((UUserToolBoxBaseTab*)Obj)->bIsVisibleInViewportOverlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInViewportOverlay = { "bIsVisibleInViewportOverlay", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUserToolBoxBaseTab), &Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInViewportOverlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInViewportOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInViewportOverlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInDrawer_MetaData[] = {
		{ "Category", "Command Tab" },
		{ "ModuleRelativePath", "Public/UTBBaseTab.h" },
	};
#endif
	void Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInDrawer_SetBit(void* Obj)
	{
		((UUserToolBoxBaseTab*)Obj)->bIsVisibleInDrawer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInDrawer = { "bIsVisibleInDrawer", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUserToolBoxBaseTab), &Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInDrawer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInDrawer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInDrawer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInWindowsMenu_MetaData[] = {
		{ "Category", "Command Tab" },
		{ "ModuleRelativePath", "Public/UTBBaseTab.h" },
	};
#endif
	void Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInWindowsMenu_SetBit(void* Obj)
	{
		((UUserToolBoxBaseTab*)Obj)->bIsVisibleInWindowsMenu = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInWindowsMenu = { "bIsVisibleInWindowsMenu", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUserToolBoxBaseTab), &Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInWindowsMenu_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInWindowsMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInWindowsMenu_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUTBTabSection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_Sections_MetaData[] = {
		{ "Comment", "// the array of sections\n" },
		{ "ModuleRelativePath", "Public/UTBBaseTab.h" },
		{ "ToolTip", "the array of sections" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserToolBoxBaseTab, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_Sections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_Sections_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_PlaceholderSection_MetaData[] = {
		{ "Comment", "// the placeholder section\n" },
		{ "ModuleRelativePath", "Public/UTBBaseTab.h" },
		{ "ToolTip", "the placeholder section" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_PlaceholderSection = { "PlaceholderSection", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUserToolBoxBaseTab, PlaceholderSection), Z_Construct_UClass_UUTBTabSection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_PlaceholderSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_PlaceholderSection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserToolBoxBaseTab_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_TabUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_DefaultCommandUIOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_IsSettingShouldBeVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInViewportOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInDrawer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_bIsVisibleInWindowsMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_Sections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_Sections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserToolBoxBaseTab_Statics::NewProp_PlaceholderSection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUserToolBoxBaseTab_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserToolBoxBaseTab>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserToolBoxBaseTab_Statics::ClassParams = {
		&UUserToolBoxBaseTab::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUserToolBoxBaseTab_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUserToolBoxBaseTab_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUserToolBoxBaseTab()
	{
		if (!Z_Registration_Info_UClass_UUserToolBoxBaseTab.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserToolBoxBaseTab.OuterSingleton, Z_Construct_UClass_UUserToolBoxBaseTab_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUserToolBoxBaseTab.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UUserToolBoxBaseTab>()
	{
		return UUserToolBoxBaseTab::StaticClass();
	}
	UUserToolBoxBaseTab::UUserToolBoxBaseTab(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUserToolBoxBaseTab);
	UUserToolBoxBaseTab::~UUserToolBoxBaseTab() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseTab_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseTab_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUTBTabSection, UUTBTabSection::StaticClass, TEXT("UUTBTabSection"), &Z_Registration_Info_UClass_UUTBTabSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUTBTabSection), 1560904608U) },
		{ Z_Construct_UClass_UUserToolBoxBaseTab, UUserToolBoxBaseTab::StaticClass, TEXT("UUserToolBoxBaseTab"), &Z_Registration_Info_UClass_UUserToolBoxBaseTab, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserToolBoxBaseTab), 3315598482U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseTab_h_1679817103(TEXT("/Script/UserToolBoxCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseTab_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBBaseTab_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
