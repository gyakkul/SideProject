// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Subsystems/EngineSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDynamicSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UEngineSubsystem::StaticRegisterNativesUEngineSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEngineSubsystem);
	UClass* Z_Construct_UClass_UEngineSubsystem_NoRegister()
	{
		return UEngineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UEngineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEngineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UEngineSubsystem\n * Base class for auto instanced and initialized systems that share the lifetime of the Engine\n *\n * UEngineSubsystems are dynamic and will be initialized when the module is loaded if necessary.\n * This means that after StartupModule() is called on the module containing a subsystem,\n * the subsystem collection with instantiate and initialize the subsystem automatically.\n * If the subsystem collection is created post module load then the instances will be created at\n * collection initialization time.\n */" },
		{ "IncludePath", "Subsystems/EngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/EngineSubsystem.h" },
		{ "ToolTip", "UEngineSubsystem\nBase class for auto instanced and initialized systems that share the lifetime of the Engine\n\nUEngineSubsystems are dynamic and will be initialized when the module is loaded if necessary.\nThis means that after StartupModule() is called on the module containing a subsystem,\nthe subsystem collection with instantiate and initialize the subsystem automatically.\nIf the subsystem collection is created post module load then the instances will be created at\ncollection initialization time." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEngineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEngineSubsystem_Statics::ClassParams = {
		&UEngineSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEngineSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEngineSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEngineSubsystem()
	{
		if (!Z_Registration_Info_UClass_UEngineSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEngineSubsystem.OuterSingleton, Z_Construct_UClass_UEngineSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEngineSubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UEngineSubsystem>()
	{
		return UEngineSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineSubsystem);
	UEngineSubsystem::~UEngineSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEngineSubsystem, UEngineSubsystem::StaticClass, TEXT("UEngineSubsystem"), &Z_Registration_Info_UClass_UEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEngineSubsystem), 708934937U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_4075872071(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_EngineSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
