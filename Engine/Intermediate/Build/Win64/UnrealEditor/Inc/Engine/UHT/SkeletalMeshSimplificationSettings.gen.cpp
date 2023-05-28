// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SkeletalMeshSimplificationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshSimplificationSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSimplificationSettings();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSimplificationSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USkeletalMeshSimplificationSettings::StaticRegisterNativesUSkeletalMeshSimplificationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshSimplificationSettings);
	UClass* Z_Construct_UClass_USkeletalMeshSimplificationSettings_NoRegister()
	{
		return USkeletalMeshSimplificationSettings::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshReductionModuleName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SkeletalMeshReductionModuleName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Controls the selection of the system used to simplify skeletal meshes.\n*/" },
		{ "DisplayName", "Skeletal Mesh Simplification" },
		{ "IncludePath", "Engine/SkeletalMeshSimplificationSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSimplificationSettings.h" },
		{ "ToolTip", "Controls the selection of the system used to simplify skeletal meshes." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::NewProp_SkeletalMeshReductionModuleName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Mesh reduction plugin to use when simplifying skeletal meshes */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SkeletalMeshReductionModule" },
		{ "DisplayName", "Skeletal Mesh Reduction Plugin" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshSimplificationSettings.h" },
		{ "ToolTip", "Mesh reduction plugin to use when simplifying skeletal meshes" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::NewProp_SkeletalMeshReductionModuleName = { "SkeletalMeshReductionModuleName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshSimplificationSettings, SkeletalMeshReductionModuleName), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::NewProp_SkeletalMeshReductionModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::NewProp_SkeletalMeshReductionModuleName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::NewProp_SkeletalMeshReductionModuleName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshSimplificationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::ClassParams = {
		&USkeletalMeshSimplificationSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshSimplificationSettings()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshSimplificationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshSimplificationSettings.OuterSingleton, Z_Construct_UClass_USkeletalMeshSimplificationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshSimplificationSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USkeletalMeshSimplificationSettings>()
	{
		return USkeletalMeshSimplificationSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshSimplificationSettings);
	USkeletalMeshSimplificationSettings::~USkeletalMeshSimplificationSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSimplificationSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSimplificationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshSimplificationSettings, USkeletalMeshSimplificationSettings::StaticClass, TEXT("USkeletalMeshSimplificationSettings"), &Z_Registration_Info_UClass_USkeletalMeshSimplificationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshSimplificationSettings), 2705323814U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSimplificationSettings_h_2507527620(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSimplificationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshSimplificationSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
