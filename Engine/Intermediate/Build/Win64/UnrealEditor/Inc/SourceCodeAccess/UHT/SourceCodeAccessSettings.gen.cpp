// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SourceCodeAccessSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSourceCodeAccessSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SOURCECODEACCESS_API UClass* Z_Construct_UClass_USourceCodeAccessSettings();
	SOURCECODEACCESS_API UClass* Z_Construct_UClass_USourceCodeAccessSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SourceCodeAccess();
// End Cross Module References
	void USourceCodeAccessSettings::StaticRegisterNativesUSourceCodeAccessSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USourceCodeAccessSettings);
	UClass* Z_Construct_UClass_USourceCodeAccessSettings_NoRegister()
	{
		return USourceCodeAccessSettings::StaticClass();
	}
	struct Z_Construct_UClass_USourceCodeAccessSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreferredAccessor_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PreferredAccessor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USourceCodeAccessSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SourceCodeAccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceCodeAccessSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SourceCodeAccessSettings.h" },
		{ "ModuleRelativePath", "Private/SourceCodeAccessSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USourceCodeAccessSettings_Statics::NewProp_PreferredAccessor_MetaData[] = {
		{ "Category", "Source Code Editor" },
		{ "Comment", "/** The source code editor we prefer to use. */" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Source Code Editor" },
		{ "ModuleRelativePath", "Private/SourceCodeAccessSettings.h" },
		{ "ToolTip", "The source code editor we prefer to use." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USourceCodeAccessSettings_Statics::NewProp_PreferredAccessor = { "PreferredAccessor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USourceCodeAccessSettings, PreferredAccessor), METADATA_PARAMS(Z_Construct_UClass_USourceCodeAccessSettings_Statics::NewProp_PreferredAccessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USourceCodeAccessSettings_Statics::NewProp_PreferredAccessor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USourceCodeAccessSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USourceCodeAccessSettings_Statics::NewProp_PreferredAccessor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USourceCodeAccessSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USourceCodeAccessSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USourceCodeAccessSettings_Statics::ClassParams = {
		&USourceCodeAccessSettings::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USourceCodeAccessSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USourceCodeAccessSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USourceCodeAccessSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USourceCodeAccessSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USourceCodeAccessSettings()
	{
		if (!Z_Registration_Info_UClass_USourceCodeAccessSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USourceCodeAccessSettings.OuterSingleton, Z_Construct_UClass_USourceCodeAccessSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USourceCodeAccessSettings.OuterSingleton;
	}
	template<> SOURCECODEACCESS_API UClass* StaticClass<USourceCodeAccessSettings>()
	{
		return USourceCodeAccessSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USourceCodeAccessSettings);
	USourceCodeAccessSettings::~USourceCodeAccessSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USourceCodeAccessSettings, USourceCodeAccessSettings::StaticClass, TEXT("USourceCodeAccessSettings"), &Z_Registration_Info_UClass_USourceCodeAccessSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USourceCodeAccessSettings), 1243094670U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_3710126249(TEXT("/Script/SourceCodeAccess"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_SourceCodeAccess_Private_SourceCodeAccessSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
