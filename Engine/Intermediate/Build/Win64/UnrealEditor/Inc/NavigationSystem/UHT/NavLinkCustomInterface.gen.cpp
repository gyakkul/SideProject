// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavLinkCustomInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavLinkCustomInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomInterface();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavLinkCustomInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavLinkCustomInterface::StaticRegisterNativesUNavLinkCustomInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavLinkCustomInterface);
	UClass* Z_Construct_UClass_UNavLinkCustomInterface_NoRegister()
	{
		return UNavLinkCustomInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNavLinkCustomInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavLinkCustomInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavLinkCustomInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/NavLinkCustomInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavLinkCustomInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INavLinkCustomInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavLinkCustomInterface_Statics::ClassParams = {
		&UNavLinkCustomInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNavLinkCustomInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavLinkCustomInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavLinkCustomInterface()
	{
		if (!Z_Registration_Info_UClass_UNavLinkCustomInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavLinkCustomInterface.OuterSingleton, Z_Construct_UClass_UNavLinkCustomInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavLinkCustomInterface.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavLinkCustomInterface>()
	{
		return UNavLinkCustomInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavLinkCustomInterface);
	UNavLinkCustomInterface::~UNavLinkCustomInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavLinkCustomInterface, UNavLinkCustomInterface::StaticClass, TEXT("UNavLinkCustomInterface"), &Z_Registration_Info_UClass_UNavLinkCustomInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavLinkCustomInterface), 304400066U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_1829667145(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavLinkCustomInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
