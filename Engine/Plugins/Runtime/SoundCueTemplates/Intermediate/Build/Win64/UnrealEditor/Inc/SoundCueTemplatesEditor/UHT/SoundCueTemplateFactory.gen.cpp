// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundCueTemplateFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundCueTemplateFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	GAMEPROJECTGENERATION_API UClass* Z_Construct_UClass_UPluginClassTemplate();
	SOUNDCUETEMPLATES_API UClass* Z_Construct_UClass_USoundCueTemplate_NoRegister();
	SOUNDCUETEMPLATESEDITOR_API UClass* Z_Construct_UClass_USoundCueTemplateClassTemplate();
	SOUNDCUETEMPLATESEDITOR_API UClass* Z_Construct_UClass_USoundCueTemplateClassTemplate_NoRegister();
	SOUNDCUETEMPLATESEDITOR_API UClass* Z_Construct_UClass_USoundCueTemplateCopyFactory();
	SOUNDCUETEMPLATESEDITOR_API UClass* Z_Construct_UClass_USoundCueTemplateCopyFactory_NoRegister();
	SOUNDCUETEMPLATESEDITOR_API UClass* Z_Construct_UClass_USoundCueTemplateFactory();
	SOUNDCUETEMPLATESEDITOR_API UClass* Z_Construct_UClass_USoundCueTemplateFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SoundCueTemplatesEditor();
// End Cross Module References
	void USoundCueTemplateCopyFactory::StaticRegisterNativesUSoundCueTemplateCopyFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundCueTemplateCopyFactory);
	UClass* Z_Construct_UClass_USoundCueTemplateCopyFactory_NoRegister()
	{
		return USoundCueTemplateCopyFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundCueTemplateCopyFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundCueTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SoundCueTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundCueTemplateCopyFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SoundCueTemplatesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueTemplateCopyFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SoundCueTemplateFactory.h" },
		{ "ModuleRelativePath", "Public/SoundCueTemplateFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueTemplateCopyFactory_Statics::NewProp_SoundCueTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/SoundCueTemplateFactory.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USoundCueTemplateCopyFactory_Statics::NewProp_SoundCueTemplate = { "SoundCueTemplate", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundCueTemplateCopyFactory, SoundCueTemplate), Z_Construct_UClass_USoundCueTemplate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundCueTemplateCopyFactory_Statics::NewProp_SoundCueTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueTemplateCopyFactory_Statics::NewProp_SoundCueTemplate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundCueTemplateCopyFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueTemplateCopyFactory_Statics::NewProp_SoundCueTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundCueTemplateCopyFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCueTemplateCopyFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundCueTemplateCopyFactory_Statics::ClassParams = {
		&USoundCueTemplateCopyFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundCueTemplateCopyFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueTemplateCopyFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundCueTemplateCopyFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueTemplateCopyFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundCueTemplateCopyFactory()
	{
		if (!Z_Registration_Info_UClass_USoundCueTemplateCopyFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundCueTemplateCopyFactory.OuterSingleton, Z_Construct_UClass_USoundCueTemplateCopyFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundCueTemplateCopyFactory.OuterSingleton;
	}
	template<> SOUNDCUETEMPLATESEDITOR_API UClass* StaticClass<USoundCueTemplateCopyFactory>()
	{
		return USoundCueTemplateCopyFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCueTemplateCopyFactory);
	USoundCueTemplateCopyFactory::~USoundCueTemplateCopyFactory() {}
	void USoundCueTemplateFactory::StaticRegisterNativesUSoundCueTemplateFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundCueTemplateFactory);
	UClass* Z_Construct_UClass_USoundCueTemplateFactory_NoRegister()
	{
		return USoundCueTemplateFactory::StaticClass();
	}
	struct Z_Construct_UClass_USoundCueTemplateFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundCueTemplateClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SoundCueTemplateClass;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SoundWaves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SoundWaves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SoundWaves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundCueTemplateFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SoundCueTemplatesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueTemplateFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SoundCueTemplateFactory.h" },
		{ "ModuleRelativePath", "Public/SoundCueTemplateFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueTemplateFactory_Statics::NewProp_SoundCueTemplateClass_MetaData[] = {
		{ "Category", "SoundCueTemplateFacotry" },
		{ "ModuleRelativePath", "Public/SoundCueTemplateFactory.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USoundCueTemplateFactory_Statics::NewProp_SoundCueTemplateClass = { "SoundCueTemplateClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundCueTemplateFactory, SoundCueTemplateClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USoundCueTemplate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundCueTemplateFactory_Statics::NewProp_SoundCueTemplateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueTemplateFactory_Statics::NewProp_SoundCueTemplateClass_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_USoundCueTemplateFactory_Statics::NewProp_SoundWaves_Inner = { "SoundWaves", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueTemplateFactory_Statics::NewProp_SoundWaves_MetaData[] = {
		{ "Category", "SoundCueTemplateFactory" },
		{ "ModuleRelativePath", "Public/SoundCueTemplateFactory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USoundCueTemplateFactory_Statics::NewProp_SoundWaves = { "SoundWaves", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundCueTemplateFactory, SoundWaves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USoundCueTemplateFactory_Statics::NewProp_SoundWaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueTemplateFactory_Statics::NewProp_SoundWaves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundCueTemplateFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueTemplateFactory_Statics::NewProp_SoundCueTemplateClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueTemplateFactory_Statics::NewProp_SoundWaves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueTemplateFactory_Statics::NewProp_SoundWaves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundCueTemplateFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCueTemplateFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundCueTemplateFactory_Statics::ClassParams = {
		&USoundCueTemplateFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundCueTemplateFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueTemplateFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundCueTemplateFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueTemplateFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundCueTemplateFactory()
	{
		if (!Z_Registration_Info_UClass_USoundCueTemplateFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundCueTemplateFactory.OuterSingleton, Z_Construct_UClass_USoundCueTemplateFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundCueTemplateFactory.OuterSingleton;
	}
	template<> SOUNDCUETEMPLATESEDITOR_API UClass* StaticClass<USoundCueTemplateFactory>()
	{
		return USoundCueTemplateFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCueTemplateFactory);
	USoundCueTemplateFactory::~USoundCueTemplateFactory() {}
	void USoundCueTemplateClassTemplate::StaticRegisterNativesUSoundCueTemplateClassTemplate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundCueTemplateClassTemplate);
	UClass* Z_Construct_UClass_USoundCueTemplateClassTemplate_NoRegister()
	{
		return USoundCueTemplateClassTemplate::StaticClass();
	}
	struct Z_Construct_UClass_USoundCueTemplateClassTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundCueTemplateClassTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPluginClassTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_SoundCueTemplatesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueTemplateClassTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundCueTemplateFactory.h" },
		{ "ModuleRelativePath", "Public/SoundCueTemplateFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundCueTemplateClassTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCueTemplateClassTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundCueTemplateClassTemplate_Statics::ClassParams = {
		&USoundCueTemplateClassTemplate::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundCueTemplateClassTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueTemplateClassTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundCueTemplateClassTemplate()
	{
		if (!Z_Registration_Info_UClass_USoundCueTemplateClassTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundCueTemplateClassTemplate.OuterSingleton, Z_Construct_UClass_USoundCueTemplateClassTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundCueTemplateClassTemplate.OuterSingleton;
	}
	template<> SOUNDCUETEMPLATESEDITOR_API UClass* StaticClass<USoundCueTemplateClassTemplate>()
	{
		return USoundCueTemplateClassTemplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCueTemplateClassTemplate);
	USoundCueTemplateClassTemplate::~USoundCueTemplateClassTemplate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplatesEditor_Public_SoundCueTemplateFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplatesEditor_Public_SoundCueTemplateFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundCueTemplateCopyFactory, USoundCueTemplateCopyFactory::StaticClass, TEXT("USoundCueTemplateCopyFactory"), &Z_Registration_Info_UClass_USoundCueTemplateCopyFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundCueTemplateCopyFactory), 235223355U) },
		{ Z_Construct_UClass_USoundCueTemplateFactory, USoundCueTemplateFactory::StaticClass, TEXT("USoundCueTemplateFactory"), &Z_Registration_Info_UClass_USoundCueTemplateFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundCueTemplateFactory), 3468429244U) },
		{ Z_Construct_UClass_USoundCueTemplateClassTemplate, USoundCueTemplateClassTemplate::StaticClass, TEXT("USoundCueTemplateClassTemplate"), &Z_Registration_Info_UClass_USoundCueTemplateClassTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundCueTemplateClassTemplate), 2653895670U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplatesEditor_Public_SoundCueTemplateFactory_h_1828720646(TEXT("/Script/SoundCueTemplatesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplatesEditor_Public_SoundCueTemplateFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplatesEditor_Public_SoundCueTemplateFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
