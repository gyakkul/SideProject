// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/HLOD/HLODEngineSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODEngineSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UHLODEngineSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UHLODEngineSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UHLODEngineSubsystem::StaticRegisterNativesUHLODEngineSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODEngineSubsystem);
	UClass* Z_Construct_UClass_UHLODEngineSubsystem_NoRegister()
	{
		return UHLODEngineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UHLODEngineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLODEngineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODEngineSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HLOD/HLODEngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/HLOD/HLODEngineSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLODEngineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODEngineSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODEngineSubsystem_Statics::ClassParams = {
		&UHLODEngineSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHLODEngineSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODEngineSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLODEngineSubsystem()
	{
		if (!Z_Registration_Info_UClass_UHLODEngineSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODEngineSubsystem.OuterSingleton, Z_Construct_UClass_UHLODEngineSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHLODEngineSubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UHLODEngineSubsystem>()
	{
		return UHLODEngineSubsystem::StaticClass();
	}
	UHLODEngineSubsystem::UHLODEngineSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODEngineSubsystem);
	UHLODEngineSubsystem::~UHLODEngineSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODEngineSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODEngineSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHLODEngineSubsystem, UHLODEngineSubsystem::StaticClass, TEXT("UHLODEngineSubsystem"), &Z_Registration_Info_UClass_UHLODEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODEngineSubsystem), 3789426518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODEngineSubsystem_h_3283681472(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODEngineSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_HLOD_HLODEngineSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
