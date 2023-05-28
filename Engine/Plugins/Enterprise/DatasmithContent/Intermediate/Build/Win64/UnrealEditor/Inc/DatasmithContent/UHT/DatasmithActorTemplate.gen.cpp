// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectTemplates/DatasmithActorTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithActorTemplate() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithActorTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithActorTemplate_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
// End Cross Module References
	void UDatasmithActorTemplate::StaticRegisterNativesUDatasmithActorTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDatasmithActorTemplate);
	UClass* Z_Construct_UClass_UDatasmithActorTemplate_NoRegister()
	{
		return UDatasmithActorTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithActorTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Layers_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Layers;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Tags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithActorTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithActorTemplate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// hold template informations common to all AActors.\n" },
		{ "IncludePath", "ObjectTemplates/DatasmithActorTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithActorTemplate.h" },
		{ "ToolTip", "hold template informations common to all AActors." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Layers_ElementProp = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Layers_MetaData[] = {
		{ "Comment", "/** Layers this actor belongs to. (see AActor::Layers) */" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithActorTemplate.h" },
		{ "ToolTip", "Layers this actor belongs to. (see AActor::Layers)" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithActorTemplate, Layers), METADATA_PARAMS(Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Layers_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Tags_ElementProp = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Tags_MetaData[] = {
		{ "Comment", "/** Tags on this actor. (see AActor::Tags) */" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithActorTemplate.h" },
		{ "ToolTip", "Tags on this actor. (see AActor::Tags)" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDatasmithActorTemplate, Tags), METADATA_PARAMS(Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Tags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithActorTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Layers_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Layers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Tags_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithActorTemplate_Statics::NewProp_Tags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithActorTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithActorTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithActorTemplate_Statics::ClassParams = {
		&UDatasmithActorTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithActorTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithActorTemplate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithActorTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithActorTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithActorTemplate()
	{
		if (!Z_Registration_Info_UClass_UDatasmithActorTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDatasmithActorTemplate.OuterSingleton, Z_Construct_UClass_UDatasmithActorTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDatasmithActorTemplate.OuterSingleton;
	}
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithActorTemplate>()
	{
		return UDatasmithActorTemplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithActorTemplate);
	UDatasmithActorTemplate::~UDatasmithActorTemplate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithActorTemplate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithActorTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDatasmithActorTemplate, UDatasmithActorTemplate::StaticClass, TEXT("UDatasmithActorTemplate"), &Z_Registration_Info_UClass_UDatasmithActorTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDatasmithActorTemplate), 2596468977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithActorTemplate_h_3430702722(TEXT("/Script/DatasmithContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithActorTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_ObjectTemplates_DatasmithActorTemplate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
