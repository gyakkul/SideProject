// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/CurveFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCurveBase_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCurveFactory();
	UNREALED_API UClass* Z_Construct_UClass_UCurveFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCurveFloatFactory();
	UNREALED_API UClass* Z_Construct_UClass_UCurveFloatFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCurveLinearColorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UCurveLinearColorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCurveVectorFactory();
	UNREALED_API UClass* Z_Construct_UClass_UCurveVectorFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCurveFactory::StaticRegisterNativesUCurveFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveFactory);
	UClass* Z_Construct_UClass_UCurveFactory_NoRegister()
	{
		return UCurveFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCurveFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CurveClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory that creates curve assets, prompting to pick the kind of curve at creation time\n */" },
		{ "IncludePath", "Factories/CurveFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/CurveFactory.h" },
		{ "ToolTip", "Factory that creates curve assets, prompting to pick the kind of curve at creation time" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveFactory_Statics::NewProp_CurveClass_MetaData[] = {
		{ "Category", "CurveFactory" },
		{ "Comment", "/** The type of blueprint that will be created */" },
		{ "ModuleRelativePath", "Classes/Factories/CurveFactory.h" },
		{ "ToolTip", "The type of blueprint that will be created" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCurveFactory_Statics::NewProp_CurveClass = { "CurveClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveFactory, CurveClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCurveBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCurveFactory_Statics::NewProp_CurveClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveFactory_Statics::NewProp_CurveClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveFactory_Statics::NewProp_CurveClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveFactory_Statics::ClassParams = {
		&UCurveFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCurveFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurveFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveFactory()
	{
		if (!Z_Registration_Info_UClass_UCurveFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveFactory.OuterSingleton, Z_Construct_UClass_UCurveFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCurveFactory>()
	{
		return UCurveFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveFactory);
	UCurveFactory::~UCurveFactory() {}
	void UCurveFloatFactory::StaticRegisterNativesUCurveFloatFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveFloatFactory);
	UClass* Z_Construct_UClass_UCurveFloatFactory_NoRegister()
	{
		return UCurveFloatFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCurveFloatFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveFloatFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveFloatFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory that creates float curve assets\n */" },
		{ "IncludePath", "Factories/CurveFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/CurveFactory.h" },
		{ "ToolTip", "Factory that creates float curve assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveFloatFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveFloatFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveFloatFactory_Statics::ClassParams = {
		&UCurveFloatFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCurveFloatFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveFloatFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveFloatFactory()
	{
		if (!Z_Registration_Info_UClass_UCurveFloatFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveFloatFactory.OuterSingleton, Z_Construct_UClass_UCurveFloatFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveFloatFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCurveFloatFactory>()
	{
		return UCurveFloatFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveFloatFactory);
	UCurveFloatFactory::~UCurveFloatFactory() {}
	void UCurveLinearColorFactory::StaticRegisterNativesUCurveLinearColorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveLinearColorFactory);
	UClass* Z_Construct_UClass_UCurveLinearColorFactory_NoRegister()
	{
		return UCurveLinearColorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCurveLinearColorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveLinearColorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveLinearColorFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory that creates linear color curve assets\n */" },
		{ "IncludePath", "Factories/CurveFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/CurveFactory.h" },
		{ "ToolTip", "Factory that creates linear color curve assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveLinearColorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveLinearColorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveLinearColorFactory_Statics::ClassParams = {
		&UCurveLinearColorFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCurveLinearColorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveLinearColorFactory()
	{
		if (!Z_Registration_Info_UClass_UCurveLinearColorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveLinearColorFactory.OuterSingleton, Z_Construct_UClass_UCurveLinearColorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveLinearColorFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCurveLinearColorFactory>()
	{
		return UCurveLinearColorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveLinearColorFactory);
	UCurveLinearColorFactory::~UCurveLinearColorFactory() {}
	void UCurveVectorFactory::StaticRegisterNativesUCurveVectorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveVectorFactory);
	UClass* Z_Construct_UClass_UCurveVectorFactory_NoRegister()
	{
		return UCurveVectorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UCurveVectorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveVectorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveVectorFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory that creates vector curve assets\n */" },
		{ "IncludePath", "Factories/CurveFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/CurveFactory.h" },
		{ "ToolTip", "Factory that creates vector curve assets" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveVectorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveVectorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveVectorFactory_Statics::ClassParams = {
		&UCurveVectorFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCurveVectorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveVectorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveVectorFactory()
	{
		if (!Z_Registration_Info_UClass_UCurveVectorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveVectorFactory.OuterSingleton, Z_Construct_UClass_UCurveVectorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveVectorFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCurveVectorFactory>()
	{
		return UCurveVectorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveVectorFactory);
	UCurveVectorFactory::~UCurveVectorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveFactory, UCurveFactory::StaticClass, TEXT("UCurveFactory"), &Z_Registration_Info_UClass_UCurveFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveFactory), 1358826384U) },
		{ Z_Construct_UClass_UCurveFloatFactory, UCurveFloatFactory::StaticClass, TEXT("UCurveFloatFactory"), &Z_Registration_Info_UClass_UCurveFloatFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveFloatFactory), 851189507U) },
		{ Z_Construct_UClass_UCurveLinearColorFactory, UCurveLinearColorFactory::StaticClass, TEXT("UCurveLinearColorFactory"), &Z_Registration_Info_UClass_UCurveLinearColorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveLinearColorFactory), 1965364634U) },
		{ Z_Construct_UClass_UCurveVectorFactory, UCurveVectorFactory::StaticClass, TEXT("UCurveVectorFactory"), &Z_Registration_Info_UClass_UCurveVectorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveVectorFactory), 2598494408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveFactory_h_252815(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_CurveFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
