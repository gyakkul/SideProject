// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MassEntitySubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassEntitySubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassEntitySubsystem();
	MASSENTITY_API UClass* Z_Construct_UClass_UMassEntitySubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassEntity();
// End Cross Module References
	void UMassEntitySubsystem::StaticRegisterNativesUMassEntitySubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassEntitySubsystem);
	UClass* Z_Construct_UClass_UMassEntitySubsystem_NoRegister()
	{
		return UMassEntitySubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UMassEntitySubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassEntitySubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_MassEntity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassEntitySubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * The sole responsibility of this world subsystem class is to host the default instance of FMassEntityManager\n * for a given UWorld. All the gameplay-related use cases of Mass (found in MassGameplay and related plugins) \n * use this by default. \n */" },
		{ "IncludePath", "MassEntitySubsystem.h" },
		{ "ModuleRelativePath", "Public/MassEntitySubsystem.h" },
		{ "ToolTip", "The sole responsibility of this world subsystem class is to host the default instance of FMassEntityManager\nfor a given UWorld. All the gameplay-related use cases of Mass (found in MassGameplay and related plugins)\nuse this by default." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassEntitySubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMassEntitySubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassEntitySubsystem_Statics::ClassParams = {
		&UMassEntitySubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMassEntitySubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassEntitySubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassEntitySubsystem()
	{
		if (!Z_Registration_Info_UClass_UMassEntitySubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassEntitySubsystem.OuterSingleton, Z_Construct_UClass_UMassEntitySubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassEntitySubsystem.OuterSingleton;
	}
	template<> MASSENTITY_API UClass* StaticClass<UMassEntitySubsystem>()
	{
		return UMassEntitySubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassEntitySubsystem);
	UMassEntitySubsystem::~UMassEntitySubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntitySubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntitySubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassEntitySubsystem, UMassEntitySubsystem::StaticClass, TEXT("UMassEntitySubsystem"), &Z_Registration_Info_UClass_UMassEntitySubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassEntitySubsystem), 982518000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntitySubsystem_h_3066278886(TEXT("/Script/MassEntity"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntitySubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassEntity_Source_MassEntity_Public_MassEntitySubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
