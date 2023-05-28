// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/HLOD/HLODModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODModifier() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODModifier();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODModifier_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UWorldPartitionHLODModifier::StaticRegisterNativesUWorldPartitionHLODModifier()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionHLODModifier);
	UClass* Z_Construct_UClass_UWorldPartitionHLODModifier_NoRegister()
	{
		return UWorldPartitionHLODModifier::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionHLODModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionHLODModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionHLODModifier_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all runtime HLOD modifiers\n */" },
		{ "IncludePath", "WorldPartition/HLOD/HLODModifier.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODModifier.h" },
		{ "ToolTip", "Base class for all runtime HLOD modifiers" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionHLODModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionHLODModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionHLODModifier_Statics::ClassParams = {
		&UWorldPartitionHLODModifier::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionHLODModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionHLODModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionHLODModifier()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionHLODModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionHLODModifier.OuterSingleton, Z_Construct_UClass_UWorldPartitionHLODModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionHLODModifier.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionHLODModifier>()
	{
		return UWorldPartitionHLODModifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionHLODModifier);
	UWorldPartitionHLODModifier::~UWorldPartitionHLODModifier() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionHLODModifier, UWorldPartitionHLODModifier::StaticClass, TEXT("UWorldPartitionHLODModifier"), &Z_Registration_Info_UClass_UWorldPartitionHLODModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionHLODModifier), 2132586688U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_1265216267(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODModifier_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
