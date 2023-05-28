// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavNodeInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavNodeInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavNodeInterface();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavNodeInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	void UNavNodeInterface::StaticRegisterNativesUNavNodeInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavNodeInterface);
	UClass* Z_Construct_UClass_UNavNodeInterface_NoRegister()
	{
		return UNavNodeInterface::StaticClass();
	}
	struct Z_Construct_UClass_UNavNodeInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavNodeInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavNodeInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/NavNodeInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavNodeInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<INavNodeInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavNodeInterface_Statics::ClassParams = {
		&UNavNodeInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNavNodeInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavNodeInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavNodeInterface()
	{
		if (!Z_Registration_Info_UClass_UNavNodeInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavNodeInterface.OuterSingleton, Z_Construct_UClass_UNavNodeInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNavNodeInterface.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavNodeInterface>()
	{
		return UNavNodeInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavNodeInterface);
	UNavNodeInterface::~UNavNodeInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNavNodeInterface, UNavNodeInterface::StaticClass, TEXT("UNavNodeInterface"), &Z_Registration_Info_UClass_UNavNodeInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavNodeInterface), 2774538867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_241774076(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavNodeInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
