// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Instances/EditorPlacementSettings.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorPlacementSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UInstancedPlacemenClientSettings();
	UNREALED_API UClass* Z_Construct_UClass_UEditorInstancedPlacementSettings();
	UNREALED_API UClass* Z_Construct_UClass_UEditorInstancedPlacementSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEditorInstancedPlacementSettings::StaticRegisterNativesUEditorInstancedPlacementSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorInstancedPlacementSettings);
	UClass* Z_Construct_UClass_UEditorInstancedPlacementSettings_NoRegister()
	{
		return UEditorInstancedPlacementSettings::StaticClass();
	}
	struct Z_Construct_UClass_UEditorInstancedPlacementSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorInstancedPlacementSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInstancedPlacemenClientSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorInstancedPlacementSettings_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Instances/EditorPlacementSettings.h" },
		{ "ModuleRelativePath", "Public/Instances/EditorPlacementSettings.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorInstancedPlacementSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorInstancedPlacementSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorInstancedPlacementSettings_Statics::ClassParams = {
		&UEditorInstancedPlacementSettings::StaticClass,
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
		0x000030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorInstancedPlacementSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorInstancedPlacementSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorInstancedPlacementSettings()
	{
		if (!Z_Registration_Info_UClass_UEditorInstancedPlacementSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorInstancedPlacementSettings.OuterSingleton, Z_Construct_UClass_UEditorInstancedPlacementSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorInstancedPlacementSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEditorInstancedPlacementSettings>()
	{
		return UEditorInstancedPlacementSettings::StaticClass();
	}
	UEditorInstancedPlacementSettings::UEditorInstancedPlacementSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorInstancedPlacementSettings);
	UEditorInstancedPlacementSettings::~UEditorInstancedPlacementSettings() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UEditorInstancedPlacementSettings)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Instances_EditorPlacementSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Instances_EditorPlacementSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorInstancedPlacementSettings, UEditorInstancedPlacementSettings::StaticClass, TEXT("UEditorInstancedPlacementSettings"), &Z_Registration_Info_UClass_UEditorInstancedPlacementSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorInstancedPlacementSettings), 2824565670U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Instances_EditorPlacementSettings_h_1881009243(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Instances_EditorPlacementSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Instances_EditorPlacementSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
