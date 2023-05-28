// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerMappableKeySettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerMappableKeySettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableKeySettings();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UPlayerMappableKeySettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EnhancedInput();
// End Cross Module References
	void UPlayerMappableKeySettings::StaticRegisterNativesUPlayerMappableKeySettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerMappableKeySettings);
	UClass* Z_Construct_UClass_UPlayerMappableKeySettings_NoRegister()
	{
		return UPlayerMappableKeySettings::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerMappableKeySettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Metadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayCategory_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayCategory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerMappableKeySettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EnhancedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMappableKeySettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Hold setting information of an Action Input or a Action Key Mapping for setting screen and save purposes.\n* Experimental: Do not count on long term support for this structure.\n*/" },
		{ "DisplayName", "Player Mappable Key Settings (Experimental)" },
		{ "IncludePath", "PlayerMappableKeySettings.h" },
		{ "ModuleRelativePath", "Public/PlayerMappableKeySettings.h" },
		{ "ToolTip", "Hold setting information of an Action Input or a Action Key Mapping for setting screen and save purposes.\nExperimental: Do not count on long term support for this structure." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** Metadata that can used to store any other related items to this key mapping such as icons, ability assets, etc. */" },
		{ "ModuleRelativePath", "Public/PlayerMappableKeySettings.h" },
		{ "ToolTip", "Metadata that can used to store any other related items to this key mapping such as icons, ability assets, etc." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerMappableKeySettings, Metadata), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_Metadata_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** A unique name for this player mapping to be saved with. */" },
		{ "ModuleRelativePath", "Public/PlayerMappableKeySettings.h" },
		{ "ToolTip", "A unique name for this player mapping to be saved with." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerMappableKeySettings, Name), METADATA_PARAMS(Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The localized display name of this key mapping. Use this when displaying the mappings to a user. */" },
		{ "ModuleRelativePath", "Public/PlayerMappableKeySettings.h" },
		{ "ToolTip", "The localized display name of this key mapping. Use this when displaying the mappings to a user." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerMappableKeySettings, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_DisplayCategory_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** The category that this player mapping is in */" },
		{ "ModuleRelativePath", "Public/PlayerMappableKeySettings.h" },
		{ "ToolTip", "The category that this player mapping is in" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_DisplayCategory = { "DisplayCategory", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerMappableKeySettings, DisplayCategory), METADATA_PARAMS(Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_DisplayCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_DisplayCategory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerMappableKeySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_Metadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_DisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerMappableKeySettings_Statics::NewProp_DisplayCategory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerMappableKeySettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMappableKeySettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMappableKeySettings_Statics::ClassParams = {
		&UPlayerMappableKeySettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerMappableKeySettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMappableKeySettings_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerMappableKeySettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMappableKeySettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerMappableKeySettings()
	{
		if (!Z_Registration_Info_UClass_UPlayerMappableKeySettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerMappableKeySettings.OuterSingleton, Z_Construct_UClass_UPlayerMappableKeySettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerMappableKeySettings.OuterSingleton;
	}
	template<> ENHANCEDINPUT_API UClass* StaticClass<UPlayerMappableKeySettings>()
	{
		return UPlayerMappableKeySettings::StaticClass();
	}
	UPlayerMappableKeySettings::UPlayerMappableKeySettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMappableKeySettings);
	UPlayerMappableKeySettings::~UPlayerMappableKeySettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerMappableKeySettings, UPlayerMappableKeySettings::StaticClass, TEXT("UPlayerMappableKeySettings"), &Z_Registration_Info_UClass_UPlayerMappableKeySettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerMappableKeySettings), 3504536045U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_2040142170(TEXT("/Script/EnhancedInput"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_EnhancedInput_Public_PlayerMappableKeySettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
