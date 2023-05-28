// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/LevelInstance/LevelInstanceSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelInstanceSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_ULevelInstanceSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULevelInstanceSubsystem::StaticRegisterNativesULevelInstanceSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelInstanceSubsystem);
	UClass* Z_Construct_UClass_ULevelInstanceSubsystem_NoRegister()
	{
		return ULevelInstanceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULevelInstanceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelInstanceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelInstanceSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULevelInstanceSubsystem\n */" },
		{ "IncludePath", "LevelInstance/LevelInstanceSubsystem.h" },
		{ "ModuleRelativePath", "Public/LevelInstance/LevelInstanceSubsystem.h" },
		{ "ToolTip", "ULevelInstanceSubsystem" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelInstanceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelInstanceSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelInstanceSubsystem_Statics::ClassParams = {
		&ULevelInstanceSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULevelInstanceSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelInstanceSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelInstanceSubsystem()
	{
		if (!Z_Registration_Info_UClass_ULevelInstanceSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelInstanceSubsystem.OuterSingleton, Z_Construct_UClass_ULevelInstanceSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelInstanceSubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULevelInstanceSubsystem>()
	{
		return ULevelInstanceSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelInstanceSubsystem);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelInstanceSubsystem, ULevelInstanceSubsystem::StaticClass, TEXT("ULevelInstanceSubsystem"), &Z_Registration_Info_UClass_ULevelInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelInstanceSubsystem), 2598703248U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_3764126368(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_LevelInstance_LevelInstanceSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
