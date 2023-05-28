// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/ContentBundle/ContentBundleEngineSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContentBundleEngineSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UContentBundleEngineSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UContentBundleEngineSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UContentBundleEngineSubsystem::StaticRegisterNativesUContentBundleEngineSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContentBundleEngineSubsystem);
	UClass* Z_Construct_UClass_UContentBundleEngineSubsystem_NoRegister()
	{
		return UContentBundleEngineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UContentBundleEngineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/ContentBundle/ContentBundleEngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/ContentBundle/ContentBundleEngineSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContentBundleEngineSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::ClassParams = {
		&UContentBundleEngineSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UContentBundleEngineSubsystem()
	{
		if (!Z_Registration_Info_UClass_UContentBundleEngineSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContentBundleEngineSubsystem.OuterSingleton, Z_Construct_UClass_UContentBundleEngineSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UContentBundleEngineSubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UContentBundleEngineSubsystem>()
	{
		return UContentBundleEngineSubsystem::StaticClass();
	}
	UContentBundleEngineSubsystem::UContentBundleEngineSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UContentBundleEngineSubsystem);
	UContentBundleEngineSubsystem::~UContentBundleEngineSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UContentBundleEngineSubsystem, UContentBundleEngineSubsystem::StaticClass, TEXT("UContentBundleEngineSubsystem"), &Z_Registration_Info_UClass_UContentBundleEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContentBundleEngineSubsystem), 2055687474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_3760465530(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_ContentBundle_ContentBundleEngineSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
