// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Subsystems/GameInstanceSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInstanceSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USubsystem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UGameInstanceSubsystem::StaticRegisterNativesUGameInstanceSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameInstanceSubsystem);
	UClass* Z_Construct_UClass_UGameInstanceSubsystem_NoRegister()
	{
		return UGameInstanceSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UGameInstanceSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameInstanceSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameInstanceSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UGameInstanceSubsystem\n * Base class for auto instanced and initialized systems that share the lifetime of the game instance\n */" },
		{ "IncludePath", "Subsystems/GameInstanceSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/GameInstanceSubsystem.h" },
		{ "ToolTip", "UGameInstanceSubsystem\nBase class for auto instanced and initialized systems that share the lifetime of the game instance" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameInstanceSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInstanceSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameInstanceSubsystem_Statics::ClassParams = {
		&UGameInstanceSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGameInstanceSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameInstanceSubsystem()
	{
		if (!Z_Registration_Info_UClass_UGameInstanceSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameInstanceSubsystem.OuterSingleton, Z_Construct_UClass_UGameInstanceSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameInstanceSubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UGameInstanceSubsystem>()
	{
		return UGameInstanceSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInstanceSubsystem);
	UGameInstanceSubsystem::~UGameInstanceSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameInstanceSubsystem, UGameInstanceSubsystem::StaticClass, TEXT("UGameInstanceSubsystem"), &Z_Registration_Info_UClass_UGameInstanceSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameInstanceSubsystem), 971598312U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_3921915645(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_GameInstanceSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
