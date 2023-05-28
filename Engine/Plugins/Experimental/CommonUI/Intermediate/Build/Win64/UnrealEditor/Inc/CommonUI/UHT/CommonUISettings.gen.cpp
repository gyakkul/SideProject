// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonUISettings.h"
#include "GameplayTagContainer.h"
#include "Styling/SlateBrush.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonUISettings() {}
// Cross Module References
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUIRichTextData_NoRegister();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUISettings();
	COMMONUI_API UClass* Z_Construct_UClass_UCommonUISettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateBrush();
	UPackage* Z_Construct_UPackage__Script_CommonUI();
// End Cross Module References
	void UCommonUISettings::StaticRegisterNativesUCommonUISettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCommonUISettings);
	UClass* Z_Construct_UClass_UCommonUISettings_NoRegister()
	{
		return UCommonUISettings::StaticClass();
	}
	struct Z_Construct_UClass_UCommonUISettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoLoadData_MetaData[];
#endif
		static void NewProp_bAutoLoadData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoLoadData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultImageResourceObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultImageResourceObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultThrobberMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultThrobberMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultRichTextDataClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultRichTextDataClass;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformTraits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlatformTraits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PlatformTraits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultImageResourceObjectInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultImageResourceObjectInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultThrobberMaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultThrobberMaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultThrobberBrush_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultThrobberBrush;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RichTextDataInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RichTextDataInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommonUISettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonUI,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUISettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CommonUISettings.h" },
		{ "ModuleRelativePath", "Public/CommonUISettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUISettings_Statics::NewProp_bAutoLoadData_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Controls if the data referenced is automatically loaded.\n\x09 *  If False then game code must call LoadData() on it's own.\n\x09 */" },
		{ "ModuleRelativePath", "Public/CommonUISettings.h" },
		{ "ToolTip", "Controls if the data referenced is automatically loaded.\nIf False then game code must call LoadData() on it's own." },
	};
#endif
	void Z_Construct_UClass_UCommonUISettings_Statics::NewProp_bAutoLoadData_SetBit(void* Obj)
	{
		((UCommonUISettings*)Obj)->bAutoLoadData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCommonUISettings_Statics::NewProp_bAutoLoadData = { "bAutoLoadData", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCommonUISettings), &Z_Construct_UClass_UCommonUISettings_Statics::NewProp_bAutoLoadData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCommonUISettings_Statics::NewProp_bAutoLoadData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUISettings_Statics::NewProp_bAutoLoadData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultImageResourceObject_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Texture2D,/Script/Engine.MaterialInterface" },
		{ "Category", "Image" },
		{ "Comment", "/** The Default Image Resource, newly created CommonImage Widgets will use this style. */" },
		{ "ModuleRelativePath", "Public/CommonUISettings.h" },
		{ "ToolTip", "The Default Image Resource, newly created CommonImage Widgets will use this style." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultImageResourceObject = { "DefaultImageResourceObject", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUISettings, DefaultImageResourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultImageResourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultImageResourceObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultThrobberMaterial_MetaData[] = {
		{ "Category", "Throbber" },
		{ "Comment", "/** The Default Throbber Material, newly created CommonLoadGuard Widget will use this style. */" },
		{ "ModuleRelativePath", "Public/CommonUISettings.h" },
		{ "ToolTip", "The Default Throbber Material, newly created CommonLoadGuard Widget will use this style." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultThrobberMaterial = { "DefaultThrobberMaterial", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUISettings, DefaultThrobberMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultThrobberMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultThrobberMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultRichTextDataClass_MetaData[] = {
		{ "AllowAbstract", "FALSE" },
		{ "Category", "RichText" },
		{ "Comment", "/** The Default Data for rich text to show inline icon and others. */" },
		{ "ModuleRelativePath", "Public/CommonUISettings.h" },
		{ "ToolTip", "The Default Data for rich text to show inline icon and others." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultRichTextDataClass = { "DefaultRichTextDataClass", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUISettings, DefaultRichTextDataClass), Z_Construct_UClass_UCommonUIRichTextData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultRichTextDataClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultRichTextDataClass_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonUISettings_Statics::NewProp_PlatformTraits_Inner = { "PlatformTraits", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUISettings_Statics::NewProp_PlatformTraits_MetaData[] = {
		{ "Categories", "Platform.Trait" },
		{ "Category", "Visibility" },
		{ "Comment", "/** The set of traits defined per-platform (e.g., the default input mode, whether or not you can exit the application, etc...) */" },
		{ "ConfigHierarchyEditable", "" },
		{ "ModuleRelativePath", "Public/CommonUISettings.h" },
		{ "ToolTip", "The set of traits defined per-platform (e.g., the default input mode, whether or not you can exit the application, etc...)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCommonUISettings_Statics::NewProp_PlatformTraits = { "PlatformTraits", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUISettings, PlatformTraits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCommonUISettings_Statics::NewProp_PlatformTraits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUISettings_Statics::NewProp_PlatformTraits_MetaData)) }; // 1225434376
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultImageResourceObjectInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonUISettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultImageResourceObjectInstance = { "DefaultImageResourceObjectInstance", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUISettings, DefaultImageResourceObjectInstance), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultImageResourceObjectInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultImageResourceObjectInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultThrobberMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonUISettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultThrobberMaterialInstance = { "DefaultThrobberMaterialInstance", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUISettings, DefaultThrobberMaterialInstance), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultThrobberMaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultThrobberMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultThrobberBrush_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonUISettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultThrobberBrush = { "DefaultThrobberBrush", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUISettings, DefaultThrobberBrush), Z_Construct_UScriptStruct_FSlateBrush, METADATA_PARAMS(Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultThrobberBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultThrobberBrush_MetaData)) }; // 4256420591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommonUISettings_Statics::NewProp_RichTextDataInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/CommonUISettings.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCommonUISettings_Statics::NewProp_RichTextDataInstance = { "RichTextDataInstance", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCommonUISettings, RichTextDataInstance), Z_Construct_UClass_UCommonUIRichTextData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCommonUISettings_Statics::NewProp_RichTextDataInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUISettings_Statics::NewProp_RichTextDataInstance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCommonUISettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUISettings_Statics::NewProp_bAutoLoadData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultImageResourceObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultThrobberMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultRichTextDataClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUISettings_Statics::NewProp_PlatformTraits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUISettings_Statics::NewProp_PlatformTraits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultImageResourceObjectInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultThrobberMaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUISettings_Statics::NewProp_DefaultThrobberBrush,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCommonUISettings_Statics::NewProp_RichTextDataInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommonUISettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCommonUISettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCommonUISettings_Statics::ClassParams = {
		&UCommonUISettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCommonUISettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUISettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UCommonUISettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCommonUISettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommonUISettings()
	{
		if (!Z_Registration_Info_UClass_UCommonUISettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCommonUISettings.OuterSingleton, Z_Construct_UClass_UCommonUISettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCommonUISettings.OuterSingleton;
	}
	template<> COMMONUI_API UClass* StaticClass<UCommonUISettings>()
	{
		return UCommonUISettings::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCommonUISettings, UCommonUISettings::StaticClass, TEXT("UCommonUISettings"), &Z_Registration_Info_UClass_UCommonUISettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCommonUISettings), 1483961858U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISettings_h_2226233856(TEXT("/Script/CommonUI"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonUI_Public_CommonUISettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
