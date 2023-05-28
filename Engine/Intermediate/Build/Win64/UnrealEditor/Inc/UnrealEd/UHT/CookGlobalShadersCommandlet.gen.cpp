// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Commandlets/CookGlobalShadersCommandlet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCookGlobalShadersCommandlet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UCookGlobalShadersCommandlet();
	UNREALED_API UClass* Z_Construct_UClass_UCookGlobalShadersCommandlet_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCookGlobalShadersDeviceHelperBase();
	UNREALED_API UClass* Z_Construct_UClass_UCookGlobalShadersDeviceHelperBase_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UCookGlobalShadersDeviceHelperStaged();
	UNREALED_API UClass* Z_Construct_UClass_UCookGlobalShadersDeviceHelperStaged_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UCookGlobalShadersCommandlet::StaticRegisterNativesUCookGlobalShadersCommandlet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCookGlobalShadersCommandlet);
	UClass* Z_Construct_UClass_UCookGlobalShadersCommandlet_NoRegister()
	{
		return UCookGlobalShadersCommandlet::StaticClass();
	}
	struct Z_Construct_UClass_UCookGlobalShadersCommandlet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCookGlobalShadersCommandlet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCommandlet,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookGlobalShadersCommandlet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/CookGlobalShadersCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/CookGlobalShadersCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCookGlobalShadersCommandlet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookGlobalShadersCommandlet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCookGlobalShadersCommandlet_Statics::ClassParams = {
		&UCookGlobalShadersCommandlet::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCookGlobalShadersCommandlet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCookGlobalShadersCommandlet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCookGlobalShadersCommandlet()
	{
		if (!Z_Registration_Info_UClass_UCookGlobalShadersCommandlet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCookGlobalShadersCommandlet.OuterSingleton, Z_Construct_UClass_UCookGlobalShadersCommandlet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCookGlobalShadersCommandlet.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCookGlobalShadersCommandlet>()
	{
		return UCookGlobalShadersCommandlet::StaticClass();
	}
	UCookGlobalShadersCommandlet::UCookGlobalShadersCommandlet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCookGlobalShadersCommandlet);
	UCookGlobalShadersCommandlet::~UCookGlobalShadersCommandlet() {}
	void UCookGlobalShadersDeviceHelperBase::StaticRegisterNativesUCookGlobalShadersDeviceHelperBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCookGlobalShadersDeviceHelperBase);
	UClass* Z_Construct_UClass_UCookGlobalShadersDeviceHelperBase_NoRegister()
	{
		return UCookGlobalShadersDeviceHelperBase::StaticClass();
	}
	struct Z_Construct_UClass_UCookGlobalShadersDeviceHelperBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCookGlobalShadersDeviceHelperBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookGlobalShadersDeviceHelperBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/CookGlobalShadersCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/CookGlobalShadersCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCookGlobalShadersDeviceHelperBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookGlobalShadersDeviceHelperBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCookGlobalShadersDeviceHelperBase_Statics::ClassParams = {
		&UCookGlobalShadersDeviceHelperBase::StaticClass,
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
		0x000800A9u,
		METADATA_PARAMS(Z_Construct_UClass_UCookGlobalShadersDeviceHelperBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCookGlobalShadersDeviceHelperBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCookGlobalShadersDeviceHelperBase()
	{
		if (!Z_Registration_Info_UClass_UCookGlobalShadersDeviceHelperBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCookGlobalShadersDeviceHelperBase.OuterSingleton, Z_Construct_UClass_UCookGlobalShadersDeviceHelperBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCookGlobalShadersDeviceHelperBase.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCookGlobalShadersDeviceHelperBase>()
	{
		return UCookGlobalShadersDeviceHelperBase::StaticClass();
	}
	UCookGlobalShadersDeviceHelperBase::UCookGlobalShadersDeviceHelperBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCookGlobalShadersDeviceHelperBase);
	UCookGlobalShadersDeviceHelperBase::~UCookGlobalShadersDeviceHelperBase() {}
	void UCookGlobalShadersDeviceHelperStaged::StaticRegisterNativesUCookGlobalShadersDeviceHelperStaged()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCookGlobalShadersDeviceHelperStaged);
	UClass* Z_Construct_UClass_UCookGlobalShadersDeviceHelperStaged_NoRegister()
	{
		return UCookGlobalShadersDeviceHelperStaged::StaticClass();
	}
	struct Z_Construct_UClass_UCookGlobalShadersDeviceHelperStaged_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCookGlobalShadersDeviceHelperStaged_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCookGlobalShadersDeviceHelperBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCookGlobalShadersDeviceHelperStaged_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Commandlets/CookGlobalShadersCommandlet.h" },
		{ "ModuleRelativePath", "Classes/Commandlets/CookGlobalShadersCommandlet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCookGlobalShadersDeviceHelperStaged_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCookGlobalShadersDeviceHelperStaged>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCookGlobalShadersDeviceHelperStaged_Statics::ClassParams = {
		&UCookGlobalShadersDeviceHelperStaged::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCookGlobalShadersDeviceHelperStaged_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCookGlobalShadersDeviceHelperStaged_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCookGlobalShadersDeviceHelperStaged()
	{
		if (!Z_Registration_Info_UClass_UCookGlobalShadersDeviceHelperStaged.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCookGlobalShadersDeviceHelperStaged.OuterSingleton, Z_Construct_UClass_UCookGlobalShadersDeviceHelperStaged_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCookGlobalShadersDeviceHelperStaged.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UCookGlobalShadersDeviceHelperStaged>()
	{
		return UCookGlobalShadersDeviceHelperStaged::StaticClass();
	}
	UCookGlobalShadersDeviceHelperStaged::UCookGlobalShadersDeviceHelperStaged(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCookGlobalShadersDeviceHelperStaged);
	UCookGlobalShadersDeviceHelperStaged::~UCookGlobalShadersDeviceHelperStaged() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCookGlobalShadersCommandlet, UCookGlobalShadersCommandlet::StaticClass, TEXT("UCookGlobalShadersCommandlet"), &Z_Registration_Info_UClass_UCookGlobalShadersCommandlet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCookGlobalShadersCommandlet), 2471423174U) },
		{ Z_Construct_UClass_UCookGlobalShadersDeviceHelperBase, UCookGlobalShadersDeviceHelperBase::StaticClass, TEXT("UCookGlobalShadersDeviceHelperBase"), &Z_Registration_Info_UClass_UCookGlobalShadersDeviceHelperBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCookGlobalShadersDeviceHelperBase), 1884146108U) },
		{ Z_Construct_UClass_UCookGlobalShadersDeviceHelperStaged, UCookGlobalShadersDeviceHelperStaged::StaticClass, TEXT("UCookGlobalShadersDeviceHelperStaged"), &Z_Registration_Info_UClass_UCookGlobalShadersDeviceHelperStaged, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCookGlobalShadersDeviceHelperStaged), 3549760233U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_3490452730(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Commandlets_CookGlobalShadersCommandlet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
