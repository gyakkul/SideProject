// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTBFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUTBFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UserToolBoxCore();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UIconTrackerFactory();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UIconTrackerFactory_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBCommandFactory();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBCommandFactory_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBCommandTabFactory();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBCommandTabFactory_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBEditorUtilityBlueprintFactory();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBEditorUtilityBlueprintFactory_NoRegister();
// End Cross Module References
	void UUTBEditorUtilityBlueprintFactory::StaticRegisterNativesUUTBEditorUtilityBlueprintFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUTBEditorUtilityBlueprintFactory);
	UClass* Z_Construct_UClass_UUTBEditorUtilityBlueprintFactory_NoRegister()
	{
		return UUTBEditorUtilityBlueprintFactory::StaticClass();
	}
	struct Z_Construct_UClass_UUTBEditorUtilityBlueprintFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUTBEditorUtilityBlueprintFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBEditorUtilityBlueprintFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UTBFactory.h" },
		{ "ModuleRelativePath", "Public/UTBFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUTBEditorUtilityBlueprintFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUTBEditorUtilityBlueprintFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUTBEditorUtilityBlueprintFactory_Statics::ClassParams = {
		&UUTBEditorUtilityBlueprintFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUTBEditorUtilityBlueprintFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBEditorUtilityBlueprintFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUTBEditorUtilityBlueprintFactory()
	{
		if (!Z_Registration_Info_UClass_UUTBEditorUtilityBlueprintFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUTBEditorUtilityBlueprintFactory.OuterSingleton, Z_Construct_UClass_UUTBEditorUtilityBlueprintFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUTBEditorUtilityBlueprintFactory.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UUTBEditorUtilityBlueprintFactory>()
	{
		return UUTBEditorUtilityBlueprintFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUTBEditorUtilityBlueprintFactory);
	UUTBEditorUtilityBlueprintFactory::~UUTBEditorUtilityBlueprintFactory() {}
	void UUTBCommandFactory::StaticRegisterNativesUUTBCommandFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUTBCommandFactory);
	UClass* Z_Construct_UClass_UUTBCommandFactory_NoRegister()
	{
		return UUTBCommandFactory::StaticClass();
	}
	struct Z_Construct_UClass_UUTBCommandFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUTBCommandFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBCommandFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UTBFactory.h" },
		{ "ModuleRelativePath", "Public/UTBFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUTBCommandFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUTBCommandFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUTBCommandFactory_Statics::ClassParams = {
		&UUTBCommandFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUTBCommandFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBCommandFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUTBCommandFactory()
	{
		if (!Z_Registration_Info_UClass_UUTBCommandFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUTBCommandFactory.OuterSingleton, Z_Construct_UClass_UUTBCommandFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUTBCommandFactory.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UUTBCommandFactory>()
	{
		return UUTBCommandFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUTBCommandFactory);
	UUTBCommandFactory::~UUTBCommandFactory() {}
	void UUTBCommandTabFactory::StaticRegisterNativesUUTBCommandTabFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUTBCommandTabFactory);
	UClass* Z_Construct_UClass_UUTBCommandTabFactory_NoRegister()
	{
		return UUTBCommandTabFactory::StaticClass();
	}
	struct Z_Construct_UClass_UUTBCommandTabFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUTBCommandTabFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUTBCommandTabFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UTBFactory.h" },
		{ "ModuleRelativePath", "Public/UTBFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUTBCommandTabFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUTBCommandTabFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUTBCommandTabFactory_Statics::ClassParams = {
		&UUTBCommandTabFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUTBCommandTabFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUTBCommandTabFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUTBCommandTabFactory()
	{
		if (!Z_Registration_Info_UClass_UUTBCommandTabFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUTBCommandTabFactory.OuterSingleton, Z_Construct_UClass_UUTBCommandTabFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUTBCommandTabFactory.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UUTBCommandTabFactory>()
	{
		return UUTBCommandTabFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUTBCommandTabFactory);
	UUTBCommandTabFactory::~UUTBCommandTabFactory() {}
	void UIconTrackerFactory::StaticRegisterNativesUIconTrackerFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIconTrackerFactory);
	UClass* Z_Construct_UClass_UIconTrackerFactory_NoRegister()
	{
		return UIconTrackerFactory::StaticClass();
	}
	struct Z_Construct_UClass_UIconTrackerFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIconTrackerFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIconTrackerFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UTBFactory.h" },
		{ "ModuleRelativePath", "Public/UTBFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIconTrackerFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIconTrackerFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIconTrackerFactory_Statics::ClassParams = {
		&UIconTrackerFactory::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIconTrackerFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIconTrackerFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIconTrackerFactory()
	{
		if (!Z_Registration_Info_UClass_UIconTrackerFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIconTrackerFactory.OuterSingleton, Z_Construct_UClass_UIconTrackerFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIconTrackerFactory.OuterSingleton;
	}
	template<> USERTOOLBOXCORE_API UClass* StaticClass<UIconTrackerFactory>()
	{
		return UIconTrackerFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIconTrackerFactory);
	UIconTrackerFactory::~UIconTrackerFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUTBEditorUtilityBlueprintFactory, UUTBEditorUtilityBlueprintFactory::StaticClass, TEXT("UUTBEditorUtilityBlueprintFactory"), &Z_Registration_Info_UClass_UUTBEditorUtilityBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUTBEditorUtilityBlueprintFactory), 415775392U) },
		{ Z_Construct_UClass_UUTBCommandFactory, UUTBCommandFactory::StaticClass, TEXT("UUTBCommandFactory"), &Z_Registration_Info_UClass_UUTBCommandFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUTBCommandFactory), 3183008974U) },
		{ Z_Construct_UClass_UUTBCommandTabFactory, UUTBCommandTabFactory::StaticClass, TEXT("UUTBCommandTabFactory"), &Z_Registration_Info_UClass_UUTBCommandTabFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUTBCommandTabFactory), 1387334307U) },
		{ Z_Construct_UClass_UIconTrackerFactory, UIconTrackerFactory::StaticClass, TEXT("UIconTrackerFactory"), &Z_Registration_Info_UClass_UIconTrackerFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIconTrackerFactory), 2287899726U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBFactory_h_691085862(TEXT("/Script/UserToolBoxCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxCore_Source_UserToolBoxCore_Public_UTBFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
