// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LevelStreamingAlwaysLoaded.h"
#include "../../Source/Runtime/Engine/Classes/Engine/World.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingAlwaysLoaded() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingAlwaysLoaded();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingAlwaysLoaded_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULevelStreamingAlwaysLoaded::StaticRegisterNativesULevelStreamingAlwaysLoaded()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelStreamingAlwaysLoaded);
	UClass* Z_Construct_UClass_ULevelStreamingAlwaysLoaded_NoRegister()
	{
		return ULevelStreamingAlwaysLoaded::StaticClass();
	}
	struct Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelStreaming,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/LevelStreamingAlwaysLoaded.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingAlwaysLoaded.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingAlwaysLoaded>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::ClassParams = {
		&ULevelStreamingAlwaysLoaded::StaticClass,
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
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelStreamingAlwaysLoaded()
	{
		if (!Z_Registration_Info_UClass_ULevelStreamingAlwaysLoaded.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelStreamingAlwaysLoaded.OuterSingleton, Z_Construct_UClass_ULevelStreamingAlwaysLoaded_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelStreamingAlwaysLoaded.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULevelStreamingAlwaysLoaded>()
	{
		return ULevelStreamingAlwaysLoaded::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingAlwaysLoaded);
	ULevelStreamingAlwaysLoaded::~ULevelStreamingAlwaysLoaded() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingAlwaysLoaded_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingAlwaysLoaded_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelStreamingAlwaysLoaded, ULevelStreamingAlwaysLoaded::StaticClass, TEXT("ULevelStreamingAlwaysLoaded"), &Z_Registration_Info_UClass_ULevelStreamingAlwaysLoaded, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelStreamingAlwaysLoaded), 2518969485U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingAlwaysLoaded_h_1868357819(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingAlwaysLoaded_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingAlwaysLoaded_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
