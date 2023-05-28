// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/HLOD/HLODSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UHLODSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UHLODSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UHLODSubsystem::StaticRegisterNativesUHLODSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODSubsystem);
	UClass* Z_Construct_UClass_UHLODSubsystem_NoRegister()
	{
		return UHLODSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UHLODSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLODSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UHLODSubsystem\n */" },
		{ "IncludePath", "WorldPartition/HLOD/HLODSubsystem.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODSubsystem.h" },
		{ "ToolTip", "UHLODSubsystem" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLODSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODSubsystem_Statics::ClassParams = {
		&UHLODSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHLODSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLODSubsystem()
	{
		if (!Z_Registration_Info_UClass_UHLODSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODSubsystem.OuterSingleton, Z_Construct_UClass_UHLODSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHLODSubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UHLODSubsystem>()
	{
		return UHLODSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODSubsystem);
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHLODSubsystem, UHLODSubsystem::StaticClass, TEXT("UHLODSubsystem"), &Z_Registration_Info_UClass_UHLODSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODSubsystem), 499222921U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSubsystem_h_715071641(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
