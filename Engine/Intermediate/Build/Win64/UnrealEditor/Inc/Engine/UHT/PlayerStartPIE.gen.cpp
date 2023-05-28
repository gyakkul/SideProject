// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/PlayerStartPIE.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStartPIE() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStartPIE();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStartPIE_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void APlayerStartPIE::StaticRegisterNativesAPlayerStartPIE()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerStartPIE);
	UClass* Z_Construct_UClass_APlayerStartPIE_NoRegister()
	{
		return APlayerStartPIE::StaticClass();
	}
	struct Z_Construct_UClass_APlayerStartPIE_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerStartPIE_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerStart,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerStartPIE_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "Engine/PlayerStartPIE.h" },
		{ "ModuleRelativePath", "Classes/Engine/PlayerStartPIE.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerStartPIE_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerStartPIE>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerStartPIE_Statics::ClassParams = {
		&APlayerStartPIE::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerStartPIE_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStartPIE_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerStartPIE()
	{
		if (!Z_Registration_Info_UClass_APlayerStartPIE.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerStartPIE.OuterSingleton, Z_Construct_UClass_APlayerStartPIE_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerStartPIE.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<APlayerStartPIE>()
	{
		return APlayerStartPIE::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerStartPIE);
	APlayerStartPIE::~APlayerStartPIE() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerStartPIE, APlayerStartPIE::StaticClass, TEXT("APlayerStartPIE"), &Z_Registration_Info_UClass_APlayerStartPIE, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerStartPIE), 3593258212U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_637160406(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_PlayerStartPIE_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
