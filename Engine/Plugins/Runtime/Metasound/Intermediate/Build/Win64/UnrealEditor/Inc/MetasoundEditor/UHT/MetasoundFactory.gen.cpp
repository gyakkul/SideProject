// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetaSoundBaseFactory();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetaSoundBaseFactory_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetaSoundFactory();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetaSoundFactory_NoRegister();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetaSoundSourceFactory();
	METASOUNDEDITOR_API UClass* Z_Construct_UClass_UMetaSoundSourceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_MetasoundEditor();
// End Cross Module References
	void UMetaSoundBaseFactory::StaticRegisterNativesUMetaSoundBaseFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundBaseFactory);
	UClass* Z_Construct_UClass_UMetaSoundBaseFactory_NoRegister()
	{
		return UMetaSoundBaseFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMetaSoundBaseFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedMetaSoundObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferencedMetaSoundObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetaSoundBaseFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundBaseFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MetasoundFactory.h" },
		{ "ModuleRelativePath", "Public/MetasoundFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundBaseFactory_Statics::NewProp_ReferencedMetaSoundObject_MetaData[] = {
		{ "Category", "Factory" },
		{ "Comment", "// Set to initialize MetaSound type as Preset,\n// using the provided MetaSound as a Reference\n" },
		{ "ModuleRelativePath", "Public/MetasoundFactory.h" },
		{ "ToolTip", "Set to initialize MetaSound type as Preset,\nusing the provided MetaSound as a Reference" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMetaSoundBaseFactory_Statics::NewProp_ReferencedMetaSoundObject = { "ReferencedMetaSoundObject", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetaSoundBaseFactory, ReferencedMetaSoundObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMetaSoundBaseFactory_Statics::NewProp_ReferencedMetaSoundObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBaseFactory_Statics::NewProp_ReferencedMetaSoundObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetaSoundBaseFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetaSoundBaseFactory_Statics::NewProp_ReferencedMetaSoundObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetaSoundBaseFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundBaseFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundBaseFactory_Statics::ClassParams = {
		&UMetaSoundBaseFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMetaSoundBaseFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBaseFactory_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMetaSoundBaseFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundBaseFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetaSoundBaseFactory()
	{
		if (!Z_Registration_Info_UClass_UMetaSoundBaseFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundBaseFactory.OuterSingleton, Z_Construct_UClass_UMetaSoundBaseFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetaSoundBaseFactory.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetaSoundBaseFactory>()
	{
		return UMetaSoundBaseFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundBaseFactory);
	UMetaSoundBaseFactory::~UMetaSoundBaseFactory() {}
	void UMetaSoundFactory::StaticRegisterNativesUMetaSoundFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundFactory);
	UClass* Z_Construct_UClass_UMetaSoundFactory_NoRegister()
	{
		return UMetaSoundFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMetaSoundFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetaSoundFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMetaSoundBaseFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "MetasoundFactory.h" },
		{ "ModuleRelativePath", "Public/MetasoundFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetaSoundFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundFactory_Statics::ClassParams = {
		&UMetaSoundFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetaSoundFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetaSoundFactory()
	{
		if (!Z_Registration_Info_UClass_UMetaSoundFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundFactory.OuterSingleton, Z_Construct_UClass_UMetaSoundFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetaSoundFactory.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetaSoundFactory>()
	{
		return UMetaSoundFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundFactory);
	UMetaSoundFactory::~UMetaSoundFactory() {}
	void UMetaSoundSourceFactory::StaticRegisterNativesUMetaSoundSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetaSoundSourceFactory);
	UClass* Z_Construct_UClass_UMetaSoundSourceFactory_NoRegister()
	{
		return UMetaSoundSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMetaSoundSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetaSoundSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMetaSoundBaseFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetaSoundSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "MetasoundFactory.h" },
		{ "ModuleRelativePath", "Public/MetasoundFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetaSoundSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetaSoundSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetaSoundSourceFactory_Statics::ClassParams = {
		&UMetaSoundSourceFactory::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetaSoundSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetaSoundSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetaSoundSourceFactory()
	{
		if (!Z_Registration_Info_UClass_UMetaSoundSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetaSoundSourceFactory.OuterSingleton, Z_Construct_UClass_UMetaSoundSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetaSoundSourceFactory.OuterSingleton;
	}
	template<> METASOUNDEDITOR_API UClass* StaticClass<UMetaSoundSourceFactory>()
	{
		return UMetaSoundSourceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetaSoundSourceFactory);
	UMetaSoundSourceFactory::~UMetaSoundSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMetaSoundBaseFactory, UMetaSoundBaseFactory::StaticClass, TEXT("UMetaSoundBaseFactory"), &Z_Registration_Info_UClass_UMetaSoundBaseFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundBaseFactory), 2658946856U) },
		{ Z_Construct_UClass_UMetaSoundFactory, UMetaSoundFactory::StaticClass, TEXT("UMetaSoundFactory"), &Z_Registration_Info_UClass_UMetaSoundFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundFactory), 3666465544U) },
		{ Z_Construct_UClass_UMetaSoundSourceFactory, UMetaSoundSourceFactory::StaticClass, TEXT("UMetaSoundSourceFactory"), &Z_Registration_Info_UClass_UMetaSoundSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetaSoundSourceFactory), 1587312639U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundFactory_h_922888096(TEXT("/Script/MetasoundEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEditor_Public_MetasoundFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
