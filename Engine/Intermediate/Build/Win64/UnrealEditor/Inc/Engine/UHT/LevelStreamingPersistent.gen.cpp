// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LevelStreamingPersistent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/World.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelStreamingPersistent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreaming();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingPersistent();
	ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingPersistent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULevelStreamingPersistent::StaticRegisterNativesULevelStreamingPersistent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelStreamingPersistent);
	UClass* Z_Construct_UClass_ULevelStreamingPersistent_NoRegister()
	{
		return ULevelStreamingPersistent::StaticClass();
	}
	struct Z_Construct_UClass_ULevelStreamingPersistent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelStreamingPersistent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULevelStreaming,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelStreamingPersistent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/LevelStreamingPersistent.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelStreamingPersistent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelStreamingPersistent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelStreamingPersistent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelStreamingPersistent_Statics::ClassParams = {
		&ULevelStreamingPersistent::StaticClass,
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
		0x008010A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelStreamingPersistent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelStreamingPersistent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelStreamingPersistent()
	{
		if (!Z_Registration_Info_UClass_ULevelStreamingPersistent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelStreamingPersistent.OuterSingleton, Z_Construct_UClass_ULevelStreamingPersistent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelStreamingPersistent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULevelStreamingPersistent>()
	{
		return ULevelStreamingPersistent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelStreamingPersistent);
	ULevelStreamingPersistent::~ULevelStreamingPersistent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelStreamingPersistent, ULevelStreamingPersistent::StaticClass, TEXT("ULevelStreamingPersistent"), &Z_Registration_Info_UClass_ULevelStreamingPersistent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelStreamingPersistent), 238163998U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_1228524008(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelStreamingPersistent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
