// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AnimationModifierSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationModifierSettings() {}
// Cross Module References
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifier_NoRegister();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifierSettings();
	ANIMATIONMODIFIERS_API UClass* Z_Construct_UClass_UAnimationModifierSettings_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_AnimationModifiers();
// End Cross Module References
	void UAnimationModifierSettings::StaticRegisterNativesUAnimationModifierSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationModifierSettings);
	UClass* Z_Construct_UClass_UAnimationModifierSettings_NoRegister()
	{
		return UAnimationModifierSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationModifierSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultAnimationModifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAnimationModifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultAnimationModifiers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyAnimationModifiersOnImport_MetaData[];
#endif
		static void NewProp_bApplyAnimationModifiersOnImport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyAnimationModifiersOnImport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationModifierSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationModifiers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationModifierSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Animation Modifiers" },
		{ "IncludePath", "AnimationModifierSettings.h" },
		{ "ModuleRelativePath", "Private/AnimationModifierSettings.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimationModifierSettings_Statics::NewProp_DefaultAnimationModifiers_Inner = { "DefaultAnimationModifiers", nullptr, (EPropertyFlags)0x0004000000004000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimationModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationModifierSettings_Statics::NewProp_DefaultAnimationModifiers_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "Comment", "/** Set of Animation Modifiers to be added whenever a new Animation Sequence is imported */" },
		{ "ModuleRelativePath", "Private/AnimationModifierSettings.h" },
		{ "ToolTip", "Set of Animation Modifiers to be added whenever a new Animation Sequence is imported" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationModifierSettings_Statics::NewProp_DefaultAnimationModifiers = { "DefaultAnimationModifiers", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimationModifierSettings, DefaultAnimationModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationModifierSettings_Statics::NewProp_DefaultAnimationModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationModifierSettings_Statics::NewProp_DefaultAnimationModifiers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationModifierSettings_Statics::NewProp_bApplyAnimationModifiersOnImport_MetaData[] = {
		{ "Category", "Modifiers" },
		{ "Comment", "/** Whether or not to apply animation modifiers post (re)import */" },
		{ "ModuleRelativePath", "Private/AnimationModifierSettings.h" },
		{ "ToolTip", "Whether or not to apply animation modifiers post (re)import" },
	};
#endif
	void Z_Construct_UClass_UAnimationModifierSettings_Statics::NewProp_bApplyAnimationModifiersOnImport_SetBit(void* Obj)
	{
		((UAnimationModifierSettings*)Obj)->bApplyAnimationModifiersOnImport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationModifierSettings_Statics::NewProp_bApplyAnimationModifiersOnImport = { "bApplyAnimationModifiersOnImport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimationModifierSettings), &Z_Construct_UClass_UAnimationModifierSettings_Statics::NewProp_bApplyAnimationModifiersOnImport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationModifierSettings_Statics::NewProp_bApplyAnimationModifiersOnImport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationModifierSettings_Statics::NewProp_bApplyAnimationModifiersOnImport_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationModifierSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationModifierSettings_Statics::NewProp_DefaultAnimationModifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationModifierSettings_Statics::NewProp_DefaultAnimationModifiers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationModifierSettings_Statics::NewProp_bApplyAnimationModifiersOnImport,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationModifierSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationModifierSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationModifierSettings_Statics::ClassParams = {
		&UAnimationModifierSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimationModifierSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationModifierSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationModifierSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationModifierSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationModifierSettings()
	{
		if (!Z_Registration_Info_UClass_UAnimationModifierSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationModifierSettings.OuterSingleton, Z_Construct_UClass_UAnimationModifierSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationModifierSettings.OuterSingleton;
	}
	template<> ANIMATIONMODIFIERS_API UClass* StaticClass<UAnimationModifierSettings>()
	{
		return UAnimationModifierSettings::StaticClass();
	}
	UAnimationModifierSettings::UAnimationModifierSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationModifierSettings);
	UAnimationModifierSettings::~UAnimationModifierSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationModifiers_Private_AnimationModifierSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationModifiers_Private_AnimationModifierSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationModifierSettings, UAnimationModifierSettings::StaticClass, TEXT("UAnimationModifierSettings"), &Z_Registration_Info_UClass_UAnimationModifierSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationModifierSettings), 395263298U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationModifiers_Private_AnimationModifierSettings_h_3932797801(TEXT("/Script/AnimationModifiers"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationModifiers_Private_AnimationModifierSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimationModifiers_Private_AnimationModifierSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
