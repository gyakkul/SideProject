// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/WaterBodyActorFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterBodyActorFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UActorFactory();
	UPackage* Z_Construct_UPackage__Script_WaterEditor();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyActorFactory();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyActorFactory_NoRegister();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyCustomActorFactory();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyCustomActorFactory_NoRegister();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyLakeActorFactory();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyLakeActorFactory_NoRegister();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyOceanActorFactory();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyOceanActorFactory_NoRegister();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyRiverActorFactory();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterBodyRiverActorFactory_NoRegister();
// End Cross Module References
	void UWaterBodyActorFactory::StaticRegisterNativesUWaterBodyActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterBodyActorFactory);
	UClass* Z_Construct_UClass_UWaterBodyActorFactory_NoRegister()
	{
		return UWaterBodyActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWaterBodyActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterBodyActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "WaterBodyActorFactory.h" },
		{ "ModuleRelativePath", "Private/WaterBodyActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterBodyActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterBodyActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterBodyActorFactory_Statics::ClassParams = {
		&UWaterBodyActorFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ADu,
		METADATA_PARAMS(Z_Construct_UClass_UWaterBodyActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterBodyActorFactory()
	{
		if (!Z_Registration_Info_UClass_UWaterBodyActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterBodyActorFactory.OuterSingleton, Z_Construct_UClass_UWaterBodyActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterBodyActorFactory.OuterSingleton;
	}
	template<> WATEREDITOR_API UClass* StaticClass<UWaterBodyActorFactory>()
	{
		return UWaterBodyActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterBodyActorFactory);
	UWaterBodyActorFactory::~UWaterBodyActorFactory() {}
	void UWaterBodyRiverActorFactory::StaticRegisterNativesUWaterBodyRiverActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterBodyRiverActorFactory);
	UClass* Z_Construct_UClass_UWaterBodyRiverActorFactory_NoRegister()
	{
		return UWaterBodyRiverActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWaterBodyRiverActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterBodyRiverActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWaterBodyActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyRiverActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "WaterBodyActorFactory.h" },
		{ "ModuleRelativePath", "Private/WaterBodyActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterBodyRiverActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterBodyRiverActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterBodyRiverActorFactory_Statics::ClassParams = {
		&UWaterBodyRiverActorFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UWaterBodyRiverActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyRiverActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterBodyRiverActorFactory()
	{
		if (!Z_Registration_Info_UClass_UWaterBodyRiverActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterBodyRiverActorFactory.OuterSingleton, Z_Construct_UClass_UWaterBodyRiverActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterBodyRiverActorFactory.OuterSingleton;
	}
	template<> WATEREDITOR_API UClass* StaticClass<UWaterBodyRiverActorFactory>()
	{
		return UWaterBodyRiverActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterBodyRiverActorFactory);
	UWaterBodyRiverActorFactory::~UWaterBodyRiverActorFactory() {}
	void UWaterBodyOceanActorFactory::StaticRegisterNativesUWaterBodyOceanActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterBodyOceanActorFactory);
	UClass* Z_Construct_UClass_UWaterBodyOceanActorFactory_NoRegister()
	{
		return UWaterBodyOceanActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWaterBodyOceanActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterBodyOceanActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWaterBodyActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyOceanActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "WaterBodyActorFactory.h" },
		{ "ModuleRelativePath", "Private/WaterBodyActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterBodyOceanActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterBodyOceanActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterBodyOceanActorFactory_Statics::ClassParams = {
		&UWaterBodyOceanActorFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UWaterBodyOceanActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyOceanActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterBodyOceanActorFactory()
	{
		if (!Z_Registration_Info_UClass_UWaterBodyOceanActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterBodyOceanActorFactory.OuterSingleton, Z_Construct_UClass_UWaterBodyOceanActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterBodyOceanActorFactory.OuterSingleton;
	}
	template<> WATEREDITOR_API UClass* StaticClass<UWaterBodyOceanActorFactory>()
	{
		return UWaterBodyOceanActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterBodyOceanActorFactory);
	UWaterBodyOceanActorFactory::~UWaterBodyOceanActorFactory() {}
	void UWaterBodyLakeActorFactory::StaticRegisterNativesUWaterBodyLakeActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterBodyLakeActorFactory);
	UClass* Z_Construct_UClass_UWaterBodyLakeActorFactory_NoRegister()
	{
		return UWaterBodyLakeActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWaterBodyLakeActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterBodyLakeActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWaterBodyActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyLakeActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "WaterBodyActorFactory.h" },
		{ "ModuleRelativePath", "Private/WaterBodyActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterBodyLakeActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterBodyLakeActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterBodyLakeActorFactory_Statics::ClassParams = {
		&UWaterBodyLakeActorFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UWaterBodyLakeActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyLakeActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterBodyLakeActorFactory()
	{
		if (!Z_Registration_Info_UClass_UWaterBodyLakeActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterBodyLakeActorFactory.OuterSingleton, Z_Construct_UClass_UWaterBodyLakeActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterBodyLakeActorFactory.OuterSingleton;
	}
	template<> WATEREDITOR_API UClass* StaticClass<UWaterBodyLakeActorFactory>()
	{
		return UWaterBodyLakeActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterBodyLakeActorFactory);
	UWaterBodyLakeActorFactory::~UWaterBodyLakeActorFactory() {}
	void UWaterBodyCustomActorFactory::StaticRegisterNativesUWaterBodyCustomActorFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterBodyCustomActorFactory);
	UClass* Z_Construct_UClass_UWaterBodyCustomActorFactory_NoRegister()
	{
		return UWaterBodyCustomActorFactory::StaticClass();
	}
	struct Z_Construct_UClass_UWaterBodyCustomActorFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterBodyCustomActorFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWaterBodyActorFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterBodyCustomActorFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "WaterBodyActorFactory.h" },
		{ "ModuleRelativePath", "Private/WaterBodyActorFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterBodyCustomActorFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterBodyCustomActorFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterBodyCustomActorFactory_Statics::ClassParams = {
		&UWaterBodyCustomActorFactory::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000830ACu,
		METADATA_PARAMS(Z_Construct_UClass_UWaterBodyCustomActorFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterBodyCustomActorFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterBodyCustomActorFactory()
	{
		if (!Z_Registration_Info_UClass_UWaterBodyCustomActorFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterBodyCustomActorFactory.OuterSingleton, Z_Construct_UClass_UWaterBodyCustomActorFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterBodyCustomActorFactory.OuterSingleton;
	}
	template<> WATEREDITOR_API UClass* StaticClass<UWaterBodyCustomActorFactory>()
	{
		return UWaterBodyCustomActorFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterBodyCustomActorFactory);
	UWaterBodyCustomActorFactory::~UWaterBodyCustomActorFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterBodyActorFactory, UWaterBodyActorFactory::StaticClass, TEXT("UWaterBodyActorFactory"), &Z_Registration_Info_UClass_UWaterBodyActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterBodyActorFactory), 1322247256U) },
		{ Z_Construct_UClass_UWaterBodyRiverActorFactory, UWaterBodyRiverActorFactory::StaticClass, TEXT("UWaterBodyRiverActorFactory"), &Z_Registration_Info_UClass_UWaterBodyRiverActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterBodyRiverActorFactory), 2718541842U) },
		{ Z_Construct_UClass_UWaterBodyOceanActorFactory, UWaterBodyOceanActorFactory::StaticClass, TEXT("UWaterBodyOceanActorFactory"), &Z_Registration_Info_UClass_UWaterBodyOceanActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterBodyOceanActorFactory), 2230231006U) },
		{ Z_Construct_UClass_UWaterBodyLakeActorFactory, UWaterBodyLakeActorFactory::StaticClass, TEXT("UWaterBodyLakeActorFactory"), &Z_Registration_Info_UClass_UWaterBodyLakeActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterBodyLakeActorFactory), 1225025716U) },
		{ Z_Construct_UClass_UWaterBodyCustomActorFactory, UWaterBodyCustomActorFactory::StaticClass, TEXT("UWaterBodyCustomActorFactory"), &Z_Registration_Info_UClass_UWaterBodyCustomActorFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterBodyCustomActorFactory), 1310915314U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_1272398828(TEXT("/Script/WaterEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterBodyActorFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
