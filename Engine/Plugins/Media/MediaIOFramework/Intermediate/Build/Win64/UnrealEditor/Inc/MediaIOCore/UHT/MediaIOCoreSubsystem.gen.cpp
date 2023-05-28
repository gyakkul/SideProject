// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaIOCoreSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaIOCoreSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaIOCoreSubsystem();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaIOCoreSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaIOCore();
// End Cross Module References
	void UMediaIOCoreSubsystem::StaticRegisterNativesUMediaIOCoreSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaIOCoreSubsystem);
	UClass* Z_Construct_UClass_UMediaIOCoreSubsystem_NoRegister()
	{
		return UMediaIOCoreSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMediaIOCoreSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaIOCoreSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaIOCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaIOCoreSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MediaIOCoreSubsystem.h" },
		{ "ModuleRelativePath", "Public/MediaIOCoreSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaIOCoreSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaIOCoreSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaIOCoreSubsystem_Statics::ClassParams = {
		&UMediaIOCoreSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMediaIOCoreSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaIOCoreSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaIOCoreSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMediaIOCoreSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaIOCoreSubsystem.OuterSingleton, Z_Construct_UClass_UMediaIOCoreSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaIOCoreSubsystem.OuterSingleton;
	}
	template<> MEDIAIOCORE_API UClass* StaticClass<UMediaIOCoreSubsystem>()
	{
		return UMediaIOCoreSubsystem::StaticClass();
	}
	UMediaIOCoreSubsystem::UMediaIOCoreSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaIOCoreSubsystem);
	UMediaIOCoreSubsystem::~UMediaIOCoreSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaIOCoreSubsystem, UMediaIOCoreSubsystem::StaticClass, TEXT("UMediaIOCoreSubsystem"), &Z_Registration_Info_UClass_UMediaIOCoreSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaIOCoreSubsystem), 1532560908U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreSubsystem_h_1635094477(TEXT("/Script/MediaIOCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaIOFramework_Source_MediaIOCore_Public_MediaIOCoreSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
