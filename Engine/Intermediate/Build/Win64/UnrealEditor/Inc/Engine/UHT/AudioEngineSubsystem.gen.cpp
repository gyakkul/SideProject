// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Subsystems/AudioEngineSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioEngineSubsystem() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAudioEngineSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UAudioEngineSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioSubsystemCollectionRoot();
	ENGINE_API UClass* Z_Construct_UClass_UAudioSubsystemCollectionRoot_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDynamicSubsystem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAudioSubsystemCollectionRoot::StaticRegisterNativesUAudioSubsystemCollectionRoot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioSubsystemCollectionRoot);
	UClass* Z_Construct_UClass_UAudioSubsystemCollectionRoot_NoRegister()
	{
		return UAudioSubsystemCollectionRoot::StaticClass();
	}
	struct Z_Construct_UClass_UAudioSubsystemCollectionRoot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioSubsystemCollectionRoot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioSubsystemCollectionRoot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UAudioSubsystemCollectionRoot\n * Root UObject used to anchor UAudioEngineSubsystems to the FAudioDevice\n */" },
		{ "IncludePath", "Subsystems/AudioEngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/AudioEngineSubsystem.h" },
		{ "ToolTip", "UAudioSubsystemCollectionRoot\nRoot UObject used to anchor UAudioEngineSubsystems to the FAudioDevice" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioSubsystemCollectionRoot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioSubsystemCollectionRoot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioSubsystemCollectionRoot_Statics::ClassParams = {
		&UAudioSubsystemCollectionRoot::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAudioSubsystemCollectionRoot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSubsystemCollectionRoot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioSubsystemCollectionRoot()
	{
		if (!Z_Registration_Info_UClass_UAudioSubsystemCollectionRoot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioSubsystemCollectionRoot.OuterSingleton, Z_Construct_UClass_UAudioSubsystemCollectionRoot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioSubsystemCollectionRoot.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAudioSubsystemCollectionRoot>()
	{
		return UAudioSubsystemCollectionRoot::StaticClass();
	}
	UAudioSubsystemCollectionRoot::UAudioSubsystemCollectionRoot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioSubsystemCollectionRoot);
	UAudioSubsystemCollectionRoot::~UAudioSubsystemCollectionRoot() {}
	void UAudioEngineSubsystem::StaticRegisterNativesUAudioEngineSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioEngineSubsystem);
	UClass* Z_Construct_UClass_UAudioEngineSubsystem_NoRegister()
	{
		return UAudioEngineSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UAudioEngineSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAudioEngineSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAudioEngineSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UAudioEngineSubsystem\n * Base class for auto instanced and initialized systems that share the lifetime of the audio device\n */" },
		{ "IncludePath", "Subsystems/AudioEngineSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/AudioEngineSubsystem.h" },
		{ "ToolTip", "UAudioEngineSubsystem\nBase class for auto instanced and initialized systems that share the lifetime of the audio device" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAudioEngineSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioEngineSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioEngineSubsystem_Statics::ClassParams = {
		&UAudioEngineSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAudioEngineSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAudioEngineSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAudioEngineSubsystem()
	{
		if (!Z_Registration_Info_UClass_UAudioEngineSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioEngineSubsystem.OuterSingleton, Z_Construct_UClass_UAudioEngineSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAudioEngineSubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAudioEngineSubsystem>()
	{
		return UAudioEngineSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioEngineSubsystem);
	UAudioEngineSubsystem::~UAudioEngineSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAudioSubsystemCollectionRoot, UAudioSubsystemCollectionRoot::StaticClass, TEXT("UAudioSubsystemCollectionRoot"), &Z_Registration_Info_UClass_UAudioSubsystemCollectionRoot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioSubsystemCollectionRoot), 2366574990U) },
		{ Z_Construct_UClass_UAudioEngineSubsystem, UAudioEngineSubsystem::StaticClass, TEXT("UAudioEngineSubsystem"), &Z_Registration_Info_UClass_UAudioEngineSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioEngineSubsystem), 385454149U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_913024588(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_AudioEngineSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
