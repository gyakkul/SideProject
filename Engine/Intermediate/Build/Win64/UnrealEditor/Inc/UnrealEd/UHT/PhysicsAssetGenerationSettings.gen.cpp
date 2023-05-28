// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/PhysicsAssetGenerationSettings.h"
#include "PhysicsAssetUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetGenerationSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PHYSICSUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FPhysAssetCreateParams();
	UNREALED_API UClass* Z_Construct_UClass_UPhysicsAssetGenerationSettings();
	UNREALED_API UClass* Z_Construct_UClass_UPhysicsAssetGenerationSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UPhysicsAssetGenerationSettings::StaticRegisterNativesUPhysicsAssetGenerationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsAssetGenerationSettings);
	UClass* Z_Construct_UClass_UPhysicsAssetGenerationSettings_NoRegister()
	{
		return UPhysicsAssetGenerationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreateParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CreateParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsAssetGenerationSettings.h" },
		{ "ModuleRelativePath", "Public/PhysicsAssetGenerationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::NewProp_CreateParams_MetaData[] = {
		{ "Category", "Body Creation" },
		{ "ModuleRelativePath", "Public/PhysicsAssetGenerationSettings.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::NewProp_CreateParams = { "CreateParams", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPhysicsAssetGenerationSettings, CreateParams), Z_Construct_UScriptStruct_FPhysAssetCreateParams, METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::NewProp_CreateParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::NewProp_CreateParams_MetaData)) }; // 439064708
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::NewProp_CreateParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsAssetGenerationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::ClassParams = {
		&UPhysicsAssetGenerationSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsAssetGenerationSettings()
	{
		if (!Z_Registration_Info_UClass_UPhysicsAssetGenerationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsAssetGenerationSettings.OuterSingleton, Z_Construct_UClass_UPhysicsAssetGenerationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsAssetGenerationSettings.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UPhysicsAssetGenerationSettings>()
	{
		return UPhysicsAssetGenerationSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsAssetGenerationSettings);
	UPhysicsAssetGenerationSettings::~UPhysicsAssetGenerationSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_PhysicsAssetGenerationSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_PhysicsAssetGenerationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsAssetGenerationSettings, UPhysicsAssetGenerationSettings::StaticClass, TEXT("UPhysicsAssetGenerationSettings"), &Z_Registration_Info_UClass_UPhysicsAssetGenerationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsAssetGenerationSettings), 1186628555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_PhysicsAssetGenerationSettings_h_1743754939(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_PhysicsAssetGenerationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_PhysicsAssetGenerationSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
