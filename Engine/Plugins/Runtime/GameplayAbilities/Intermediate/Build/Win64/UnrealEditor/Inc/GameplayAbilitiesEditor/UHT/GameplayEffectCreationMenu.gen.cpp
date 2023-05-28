// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayEffectCreationMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayEffectCreationMenu() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	GAMEPLAYABILITIESEDITOR_API UClass* Z_Construct_UClass_UGameplayEffectCreationMenu();
	GAMEPLAYABILITIESEDITOR_API UClass* Z_Construct_UClass_UGameplayEffectCreationMenu_NoRegister();
	GAMEPLAYABILITIESEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectCreationData();
	UPackage* Z_Construct_UPackage__Script_GameplayAbilitiesEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GameplayEffectCreationData;
class UScriptStruct* FGameplayEffectCreationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GameplayEffectCreationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GameplayEffectCreationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayEffectCreationData, (UObject*)Z_Construct_UPackage__Script_GameplayAbilitiesEditor(), TEXT("GameplayEffectCreationData"));
	}
	return Z_Registration_Info_UScriptStruct_GameplayEffectCreationData.OuterSingleton;
}
template<> GAMEPLAYABILITIESEDITOR_API UScriptStruct* StaticStruct<FGameplayEffectCreationData>()
{
	return FGameplayEffectCreationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MenuPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MenuPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BaseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentGameplayEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentGameplayEffect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayEffectCreationMenu.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayEffectCreationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_MenuPath_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "Comment", "/** Where to show this in the menu. Use \"|\" for sub categories. E.g, \"Status|Hard|Stun|Root\". */" },
		{ "ModuleRelativePath", "Public/GameplayEffectCreationMenu.h" },
		{ "ToolTip", "Where to show this in the menu. Use \"|\" for sub categories. E.g, \"Status|Hard|Stun|Root\"." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_MenuPath = { "MenuPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectCreationData, MenuPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_MenuPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_MenuPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_BaseName_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "Comment", "/** The default BaseName of the new asset. E.g \"Damage\" -> GE_Damage or GE_HeroName_AbilityName_Damage */" },
		{ "ModuleRelativePath", "Public/GameplayEffectCreationMenu.h" },
		{ "ToolTip", "The default BaseName of the new asset. E.g \"Damage\" -> GE_Damage or GE_HeroName_AbilityName_Damage" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_BaseName = { "BaseName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectCreationData, BaseName), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_BaseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_BaseName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_ParentGameplayEffect_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "ModuleRelativePath", "Public/GameplayEffectCreationMenu.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_ParentGameplayEffect = { "ParentGameplayEffect", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGameplayEffectCreationData, ParentGameplayEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_ParentGameplayEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_ParentGameplayEffect_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_MenuPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_BaseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewProp_ParentGameplayEffect,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilitiesEditor,
		nullptr,
		&NewStructOps,
		"GameplayEffectCreationData",
		sizeof(FGameplayEffectCreationData),
		alignof(FGameplayEffectCreationData),
		Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectCreationData()
	{
		if (!Z_Registration_Info_UScriptStruct_GameplayEffectCreationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GameplayEffectCreationData.InnerSingleton, Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GameplayEffectCreationData.InnerSingleton;
	}
	void UGameplayEffectCreationMenu::StaticRegisterNativesUGameplayEffectCreationMenu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayEffectCreationMenu);
	UClass* Z_Construct_UClass_UGameplayEffectCreationMenu_NoRegister()
	{
		return UGameplayEffectCreationMenu::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayEffectCreationMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Definitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Definitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Definitions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayAbilitiesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Container to hold EventKeywords for PIE testing */" },
		{ "IncludePath", "GameplayEffectCreationMenu.h" },
		{ "ModuleRelativePath", "Public/GameplayEffectCreationMenu.h" },
		{ "ToolTip", "Container to hold EventKeywords for PIE testing" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::NewProp_Definitions_Inner = { "Definitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGameplayEffectCreationData, METADATA_PARAMS(nullptr, 0) }; // 277442906
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::NewProp_Definitions_MetaData[] = {
		{ "Category", "Gameplay Effect" },
		{ "ModuleRelativePath", "Public/GameplayEffectCreationMenu.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::NewProp_Definitions = { "Definitions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGameplayEffectCreationMenu, Definitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::NewProp_Definitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::NewProp_Definitions_MetaData)) }; // 277442906
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::NewProp_Definitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::NewProp_Definitions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayEffectCreationMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::ClassParams = {
		&UGameplayEffectCreationMenu::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayEffectCreationMenu()
	{
		if (!Z_Registration_Info_UClass_UGameplayEffectCreationMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayEffectCreationMenu.OuterSingleton, Z_Construct_UClass_UGameplayEffectCreationMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameplayEffectCreationMenu.OuterSingleton;
	}
	template<> GAMEPLAYABILITIESEDITOR_API UClass* StaticClass<UGameplayEffectCreationMenu>()
	{
		return UGameplayEffectCreationMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayEffectCreationMenu);
	UGameplayEffectCreationMenu::~UGameplayEffectCreationMenu() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_Statics::ScriptStructInfo[] = {
		{ FGameplayEffectCreationData::StaticStruct, Z_Construct_UScriptStruct_FGameplayEffectCreationData_Statics::NewStructOps, TEXT("GameplayEffectCreationData"), &Z_Registration_Info_UScriptStruct_GameplayEffectCreationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGameplayEffectCreationData), 277442906U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayEffectCreationMenu, UGameplayEffectCreationMenu::StaticClass, TEXT("UGameplayEffectCreationMenu"), &Z_Registration_Info_UClass_UGameplayEffectCreationMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayEffectCreationMenu), 810897925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_3012279599(TEXT("/Script/GameplayAbilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_GameplayAbilities_Source_GameplayAbilitiesEditor_Public_GameplayEffectCreationMenu_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
