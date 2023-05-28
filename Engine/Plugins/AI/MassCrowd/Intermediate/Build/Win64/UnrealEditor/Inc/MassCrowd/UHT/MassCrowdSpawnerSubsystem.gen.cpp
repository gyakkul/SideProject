// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/MassCrowdSpawnerSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdSpawnerSubsystem() {}
// Cross Module References
	MASSACTORS_API UClass* Z_Construct_UClass_UMassActorSpawnerSubsystem();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdSpawnerSubsystem();
	MASSCROWD_API UClass* Z_Construct_UClass_UMassCrowdSpawnerSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
// End Cross Module References
	void UMassCrowdSpawnerSubsystem::StaticRegisterNativesUMassCrowdSpawnerSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassCrowdSpawnerSubsystem);
	UClass* Z_Construct_UClass_UMassCrowdSpawnerSubsystem_NoRegister()
	{
		return UMassCrowdSpawnerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassCrowdSpawnerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassCrowdSpawnerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMassActorSpawnerSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassCrowdSpawnerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A subsystem managing spawning of crowd\n */" },
		{ "IncludePath", "MassCrowdSpawnerSubsystem.h" },
		{ "ModuleRelativePath", "Public/MassCrowdSpawnerSubsystem.h" },
		{ "ToolTip", "A subsystem managing spawning of crowd" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassCrowdSpawnerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassCrowdSpawnerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassCrowdSpawnerSubsystem_Statics::ClassParams = {
		&UMassCrowdSpawnerSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassCrowdSpawnerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassCrowdSpawnerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassCrowdSpawnerSubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassCrowdSpawnerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassCrowdSpawnerSubsystem.OuterSingleton, Z_Construct_UClass_UMassCrowdSpawnerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassCrowdSpawnerSubsystem.OuterSingleton;
	}
	template<> MASSCROWD_API UClass* StaticClass<UMassCrowdSpawnerSubsystem>()
	{
		return UMassCrowdSpawnerSubsystem::StaticClass();
	}
	UMassCrowdSpawnerSubsystem::UMassCrowdSpawnerSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassCrowdSpawnerSubsystem);
	UMassCrowdSpawnerSubsystem::~UMassCrowdSpawnerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSpawnerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSpawnerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassCrowdSpawnerSubsystem, UMassCrowdSpawnerSubsystem::StaticClass, TEXT("UMassCrowdSpawnerSubsystem"), &Z_Registration_Info_UClass_UMassCrowdSpawnerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassCrowdSpawnerSubsystem), 1248440251U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSpawnerSubsystem_h_2448523643(TEXT("/Script/MassCrowd"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSpawnerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdSpawnerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
