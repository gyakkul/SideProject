// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/ActorPartition/ActorPartitionSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorPartitionSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorPartitionSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UActorPartitionSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UActorPartitionSubsystem::StaticRegisterNativesUActorPartitionSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorPartitionSubsystem);
	UClass* Z_Construct_UClass_UActorPartitionSubsystem_NoRegister()
	{
		return UActorPartitionSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UActorPartitionSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorPartitionSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorPartitionSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UActorPartitionSubsystem\n */" },
		{ "IncludePath", "ActorPartition/ActorPartitionSubsystem.h" },
		{ "ModuleRelativePath", "Public/ActorPartition/ActorPartitionSubsystem.h" },
		{ "ToolTip", "UActorPartitionSubsystem" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorPartitionSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorPartitionSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorPartitionSubsystem_Statics::ClassParams = {
		&UActorPartitionSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorPartitionSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorPartitionSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorPartitionSubsystem()
	{
		if (!Z_Registration_Info_UClass_UActorPartitionSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorPartitionSubsystem.OuterSingleton, Z_Construct_UClass_UActorPartitionSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorPartitionSubsystem.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UActorPartitionSubsystem>()
	{
		return UActorPartitionSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorPartitionSubsystem);
	UActorPartitionSubsystem::~UActorPartitionSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorPartition_ActorPartitionSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorPartition_ActorPartitionSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorPartitionSubsystem, UActorPartitionSubsystem::StaticClass, TEXT("UActorPartitionSubsystem"), &Z_Registration_Info_UClass_UActorPartitionSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorPartitionSubsystem), 2040723899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorPartition_ActorPartitionSubsystem_h_2473820693(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorPartition_ActorPartitionSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_ActorPartition_ActorPartitionSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
