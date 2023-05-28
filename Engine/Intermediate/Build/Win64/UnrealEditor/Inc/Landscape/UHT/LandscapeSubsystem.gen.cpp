// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/LandscapeSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSubsystem();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void ULandscapeSubsystem::StaticRegisterNativesULandscapeSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeSubsystem);
	UClass* Z_Construct_UClass_ULandscapeSubsystem_NoRegister()
	{
		return ULandscapeSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeSubsystem.h" },
		{ "ModuleRelativePath", "Public/LandscapeSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeSubsystem_Statics::ClassParams = {
		&ULandscapeSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeSubsystem()
	{
		if (!Z_Registration_Info_UClass_ULandscapeSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeSubsystem.OuterSingleton, Z_Construct_UClass_ULandscapeSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeSubsystem.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeSubsystem>()
	{
		return ULandscapeSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeSubsystem);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeSubsystem, ULandscapeSubsystem::StaticClass, TEXT("ULandscapeSubsystem"), &Z_Registration_Info_UClass_ULandscapeSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeSubsystem), 24500422U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_965642496(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
