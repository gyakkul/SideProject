// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorUtilityToolMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorUtilityToolMenu() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityToolMenuEntry();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityToolMenuEntry_NoRegister();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityToolMenuSection();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityToolMenuSection_NoRegister();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuEntryScript();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenuSectionDynamic();
	UPackage* Z_Construct_UPackage__Script_Blutility();
// End Cross Module References
	void UEditorUtilityToolMenuEntry::StaticRegisterNativesUEditorUtilityToolMenuEntry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorUtilityToolMenuEntry);
	UClass* Z_Construct_UClass_UEditorUtilityToolMenuEntry_NoRegister()
	{
		return UEditorUtilityToolMenuEntry::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUtilityToolMenuEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUtilityToolMenuEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolMenuEntryScript,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityToolMenuEntry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EditorUtilityToolMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/EditorUtilityToolMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUtilityToolMenuEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUtilityToolMenuEntry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorUtilityToolMenuEntry_Statics::ClassParams = {
		&UEditorUtilityToolMenuEntry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityToolMenuEntry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityToolMenuEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUtilityToolMenuEntry()
	{
		if (!Z_Registration_Info_UClass_UEditorUtilityToolMenuEntry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorUtilityToolMenuEntry.OuterSingleton, Z_Construct_UClass_UEditorUtilityToolMenuEntry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorUtilityToolMenuEntry.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UEditorUtilityToolMenuEntry>()
	{
		return UEditorUtilityToolMenuEntry::StaticClass();
	}
	UEditorUtilityToolMenuEntry::UEditorUtilityToolMenuEntry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUtilityToolMenuEntry);
	UEditorUtilityToolMenuEntry::~UEditorUtilityToolMenuEntry() {}
	void UEditorUtilityToolMenuSection::StaticRegisterNativesUEditorUtilityToolMenuSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorUtilityToolMenuSection);
	UClass* Z_Construct_UClass_UEditorUtilityToolMenuSection_NoRegister()
	{
		return UEditorUtilityToolMenuSection::StaticClass();
	}
	struct Z_Construct_UClass_UEditorUtilityToolMenuSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorUtilityToolMenuSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolMenuSectionDynamic,
		(UObject* (*)())Z_Construct_UPackage__Script_Blutility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorUtilityToolMenuSection_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EditorUtilityToolMenu.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/EditorUtilityToolMenu.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorUtilityToolMenuSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorUtilityToolMenuSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorUtilityToolMenuSection_Statics::ClassParams = {
		&UEditorUtilityToolMenuSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorUtilityToolMenuSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorUtilityToolMenuSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorUtilityToolMenuSection()
	{
		if (!Z_Registration_Info_UClass_UEditorUtilityToolMenuSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorUtilityToolMenuSection.OuterSingleton, Z_Construct_UClass_UEditorUtilityToolMenuSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorUtilityToolMenuSection.OuterSingleton;
	}
	template<> BLUTILITY_API UClass* StaticClass<UEditorUtilityToolMenuSection>()
	{
		return UEditorUtilityToolMenuSection::StaticClass();
	}
	UEditorUtilityToolMenuSection::UEditorUtilityToolMenuSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorUtilityToolMenuSection);
	UEditorUtilityToolMenuSection::~UEditorUtilityToolMenuSection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityToolMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityToolMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorUtilityToolMenuEntry, UEditorUtilityToolMenuEntry::StaticClass, TEXT("UEditorUtilityToolMenuEntry"), &Z_Registration_Info_UClass_UEditorUtilityToolMenuEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorUtilityToolMenuEntry), 3952229915U) },
		{ Z_Construct_UClass_UEditorUtilityToolMenuSection, UEditorUtilityToolMenuSection::StaticClass, TEXT("UEditorUtilityToolMenuSection"), &Z_Registration_Info_UClass_UEditorUtilityToolMenuSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorUtilityToolMenuSection), 2716545927U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityToolMenu_h_2574984753(TEXT("/Script/Blutility"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityToolMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Blutility_Classes_EditorUtilityToolMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
