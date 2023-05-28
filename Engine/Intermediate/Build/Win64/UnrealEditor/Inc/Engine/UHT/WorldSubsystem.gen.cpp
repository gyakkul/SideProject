// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Subsystems/WorldSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UWorldSubsystem::StaticRegisterNativesUWorldSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldSubsystem);
	UClass* Z_Construct_UClass_UWorldSubsystem_NoRegister()
	{
		return UWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UWorldSubsystem\n * Base class for auto instanced and initialized systems that share the lifetime of a UWorld\n */" },
		{ "IncludePath", "Subsystems/WorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldSubsystem.h" },
		{ "ToolTip", "UWorldSubsystem\nBase class for auto instanced and initialized systems that share the lifetime of a UWorld" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldSubsystem_Statics::ClassParams = {
		&UWorldSubsystem::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldSubsystem()
	{
		if (!Z_Registration_Info_UClass_UWorldSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldSubsystem.OuterSingleton, Z_Construct_UClass_UWorldSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldSubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldSubsystem>()
	{
		return UWorldSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldSubsystem);
	UWorldSubsystem::~UWorldSubsystem() {}
	void UTickableWorldSubsystem::StaticRegisterNativesUTickableWorldSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTickableWorldSubsystem);
	UClass* Z_Construct_UClass_UTickableWorldSubsystem_NoRegister()
	{
		return UTickableWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UTickableWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTickableWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTickableWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UTickableWorldSubsystem\n * Base class for auto instanced and initialized systems that share the lifetime of a UWorld and are ticking along with it\n */" },
		{ "IncludePath", "Subsystems/WorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/WorldSubsystem.h" },
		{ "ToolTip", "UTickableWorldSubsystem\nBase class for auto instanced and initialized systems that share the lifetime of a UWorld and are ticking along with it" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTickableWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTickableWorldSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTickableWorldSubsystem_Statics::ClassParams = {
		&UTickableWorldSubsystem::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTickableWorldSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTickableWorldSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTickableWorldSubsystem()
	{
		if (!Z_Registration_Info_UClass_UTickableWorldSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTickableWorldSubsystem.OuterSingleton, Z_Construct_UClass_UTickableWorldSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTickableWorldSubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTickableWorldSubsystem>()
	{
		return UTickableWorldSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTickableWorldSubsystem);
	UTickableWorldSubsystem::~UTickableWorldSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldSubsystem, UWorldSubsystem::StaticClass, TEXT("UWorldSubsystem"), &Z_Registration_Info_UClass_UWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldSubsystem), 2334184620U) },
		{ Z_Construct_UClass_UTickableWorldSubsystem, UTickableWorldSubsystem::StaticClass, TEXT("UTickableWorldSubsystem"), &Z_Registration_Info_UClass_UTickableWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTickableWorldSubsystem), 3204161162U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_2638527406(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_WorldSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
