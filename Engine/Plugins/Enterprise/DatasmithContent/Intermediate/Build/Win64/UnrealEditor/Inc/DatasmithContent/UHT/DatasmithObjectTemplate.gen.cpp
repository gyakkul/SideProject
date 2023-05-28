// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectTemplates/DatasmithObjectTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithObjectTemplate() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	void UDatasmithObjectTemplate::StaticRegisterNativesUDatasmithObjectTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithObjectTemplate);
	UClass* Z_Construct_UClass_UDatasmithObjectTemplate_NoRegister()
	{
		return UDatasmithObjectTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithObjectTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithObjectTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithObjectTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithObjectTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithObjectTemplate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithObjectTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithObjectTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithObjectTemplate_Statics::ClassParams = {
		&UDatasmithObjectTemplate::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithObjectTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithObjectTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithObjectTemplate()
	{
		if (!Z_Registration_Info_UClass_UDatasmithObjectTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithObjectTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithObjectTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithObjectTemplate.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithObjectTemplate>()
	{
		return UDatasmithObjectTemplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithObjectTemplate);
	UDatasmithObjectTemplate::~UDatasmithObjectTemplate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithObjectTemplate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithObjectTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithObjectTemplate, UDatasmithObjectTemplate::StaticClass, TEXT("UDatasmithObjectTemplate"), &Z_Registration_Info_UClass_UDatasmithObjectTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithObjectTemplate), 332659220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithObjectTemplate_h_1248032046(TEXT("/Script/DatasmithContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithObjectTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithObjectTemplate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
