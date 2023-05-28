// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavLinkTrivial.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkTrivial() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UNavLinkDefinition();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkTrivial();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkTrivial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavLinkTrivial::StaticRegisterNativesUNavLinkTrivial()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavLinkTrivial);
	UClass* Z_Construct_UClass_UNavLinkTrivial_NoRegister()
	{
		return UNavLinkTrivial::StaticClass();
	}
	struct Z_Construct_UClass_UNavLinkTrivial_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavLinkTrivial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNavLinkDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkTrivial_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavLinkTrivial.h" },
		{ "ModuleRelativePath", "Public/NavLinkTrivial.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavLinkTrivial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavLinkTrivial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavLinkTrivial_Statics::ClassParams = {
		&UNavLinkTrivial::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNavLinkTrivial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkTrivial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavLinkTrivial()
	{
		if (!Z_Registration_Info_UClass_UNavLinkTrivial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavLinkTrivial.OuterSingleton, Z_Construct_UClass_UNavLinkTrivial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavLinkTrivial.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavLinkTrivial>()
	{
		return UNavLinkTrivial::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkTrivial);
	UNavLinkTrivial::~UNavLinkTrivial() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkTrivial_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkTrivial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavLinkTrivial, UNavLinkTrivial::StaticClass, TEXT("UNavLinkTrivial"), &Z_Registration_Info_UClass_UNavLinkTrivial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavLinkTrivial), 1563466804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkTrivial_h_4177557658(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkTrivial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkTrivial_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
