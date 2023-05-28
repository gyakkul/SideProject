// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MeshSimplificationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshSimplificationSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UMeshSimplificationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UMeshSimplificationSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UMeshSimplificationSettings::StaticRegisterNativesUMeshSimplificationSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshSimplificationSettings);
	UClass* Z_Construct_UClass_UMeshSimplificationSettings_NoRegister()
	{
		return UMeshSimplificationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UMeshSimplificationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshReductionModuleName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MeshReductionModuleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMeshReductionBackwardCompatible_MetaData[];
#endif
		static void NewProp_bMeshReductionBackwardCompatible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshReductionBackwardCompatible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshSimplificationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSimplificationSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Mesh Simplification" },
		{ "IncludePath", "Engine/MeshSimplificationSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/MeshSimplificationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_MeshReductionModuleName_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Mesh reduction plugin to use when simplifying mesh geometry */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.MeshReductionModule" },
		{ "DisplayName", "Mesh Reduction Plugin" },
		{ "ModuleRelativePath", "Classes/Engine/MeshSimplificationSettings.h" },
		{ "ToolTip", "Mesh reduction plugin to use when simplifying mesh geometry" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_MeshReductionModuleName = { "MeshReductionModuleName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshSimplificationSettings, MeshReductionModuleName), METADATA_PARAMS(Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_MeshReductionModuleName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_MeshReductionModuleName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_bMeshReductionBackwardCompatible_MetaData[] = {
		{ "Category", "General" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Mesh Reduction Backward Compatible" },
		{ "ModuleRelativePath", "Classes/Engine/MeshSimplificationSettings.h" },
	};
#endif
	void Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_bMeshReductionBackwardCompatible_SetBit(void* Obj)
	{
		((UMeshSimplificationSettings*)Obj)->bMeshReductionBackwardCompatible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_bMeshReductionBackwardCompatible = { "bMeshReductionBackwardCompatible", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMeshSimplificationSettings), &Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_bMeshReductionBackwardCompatible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_bMeshReductionBackwardCompatible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_bMeshReductionBackwardCompatible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshSimplificationSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_MeshReductionModuleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshSimplificationSettings_Statics::NewProp_bMeshReductionBackwardCompatible,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshSimplificationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshSimplificationSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshSimplificationSettings_Statics::ClassParams = {
		&UMeshSimplificationSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMeshSimplificationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSimplificationSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshSimplificationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshSimplificationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshSimplificationSettings()
	{
		if (!Z_Registration_Info_UClass_UMeshSimplificationSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshSimplificationSettings.OuterSingleton, Z_Construct_UClass_UMeshSimplificationSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshSimplificationSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMeshSimplificationSettings>()
	{
		return UMeshSimplificationSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshSimplificationSettings);
	UMeshSimplificationSettings::~UMeshSimplificationSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshSimplificationSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshSimplificationSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshSimplificationSettings, UMeshSimplificationSettings::StaticClass, TEXT("UMeshSimplificationSettings"), &Z_Registration_Info_UClass_UMeshSimplificationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshSimplificationSettings), 4011641784U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshSimplificationSettings_h_2776517144(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshSimplificationSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_MeshSimplificationSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
