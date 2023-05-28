// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Subsystems/LocalPlayerSubsystem.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LocalPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalPlayerSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USubsystem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULocalPlayerSubsystem::StaticRegisterNativesULocalPlayerSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalPlayerSubsystem);
	UClass* Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister()
	{
		return ULocalPlayerSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_ULocalPlayerSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalPlayerSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalPlayerSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULocalPlayerSubsystem\n * Base class for auto instanced and initialized subsystem that share the lifetime of local players\n */" },
		{ "IncludePath", "Subsystems/LocalPlayerSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/LocalPlayerSubsystem.h" },
		{ "ToolTip", "ULocalPlayerSubsystem\nBase class for auto instanced and initialized subsystem that share the lifetime of local players" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalPlayerSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalPlayerSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalPlayerSubsystem_Statics::ClassParams = {
		&ULocalPlayerSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULocalPlayerSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalPlayerSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalPlayerSubsystem()
	{
		if (!Z_Registration_Info_UClass_ULocalPlayerSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalPlayerSubsystem.OuterSingleton, Z_Construct_UClass_ULocalPlayerSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULocalPlayerSubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULocalPlayerSubsystem>()
	{
		return ULocalPlayerSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalPlayerSubsystem);
	ULocalPlayerSubsystem::~ULocalPlayerSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULocalPlayerSubsystem, ULocalPlayerSubsystem::StaticClass, TEXT("ULocalPlayerSubsystem"), &Z_Registration_Info_UClass_ULocalPlayerSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalPlayerSubsystem), 2609003648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_3437994755(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Subsystems_LocalPlayerSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
