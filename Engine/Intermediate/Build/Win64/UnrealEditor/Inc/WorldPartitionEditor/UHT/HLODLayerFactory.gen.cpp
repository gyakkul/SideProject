// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WorldPartition/HLOD/HLODLayerFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODLayerFactory() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_WorldPartitionEditor();
	WORLDPARTITIONEDITOR_API UClass* Z_Construct_UClass_UHLODLayerFactory();
	WORLDPARTITIONEDITOR_API UClass* Z_Construct_UClass_UHLODLayerFactory_NoRegister();
// End Cross Module References
	void UHLODLayerFactory::StaticRegisterNativesUHLODLayerFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODLayerFactory);
	UClass* Z_Construct_UClass_UHLODLayerFactory_NoRegister()
	{
		return UHLODLayerFactory::StaticClass();
	}
	struct Z_Construct_UClass_UHLODLayerFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHLODLayerFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_WorldPartitionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHLODLayerFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/HLOD/HLODLayerFactory.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayerFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHLODLayerFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODLayerFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODLayerFactory_Statics::ClassParams = {
		&UHLODLayerFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHLODLayerFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHLODLayerFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHLODLayerFactory()
	{
		if (!Z_Registration_Info_UClass_UHLODLayerFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODLayerFactory.OuterSingleton, Z_Construct_UClass_UHLODLayerFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHLODLayerFactory.OuterSingleton;
	}
	template<> WORLDPARTITIONEDITOR_API UClass* StaticClass<UHLODLayerFactory>()
	{
		return UHLODLayerFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODLayerFactory);
	UHLODLayerFactory::~UHLODLayerFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_HLOD_HLODLayerFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_HLOD_HLODLayerFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHLODLayerFactory, UHLODLayerFactory::StaticClass, TEXT("UHLODLayerFactory"), &Z_Registration_Info_UClass_UHLODLayerFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODLayerFactory), 2934796417U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_HLOD_HLODLayerFactory_h_3850693366(TEXT("/Script/WorldPartitionEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_HLOD_HLODLayerFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_WorldPartitionEditor_Public_WorldPartition_HLOD_HLODLayerFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
