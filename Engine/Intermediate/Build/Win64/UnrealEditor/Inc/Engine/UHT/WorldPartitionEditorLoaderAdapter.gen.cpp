// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionEditorLoaderAdapter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionEditorLoaderAdapter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionActorLoaderInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UWorldPartitionEditorLoaderAdapter::StaticRegisterNativesUWorldPartitionEditorLoaderAdapter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionEditorLoaderAdapter);
	UClass* Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_NoRegister()
	{
		return UWorldPartitionEditorLoaderAdapter::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionEditorLoaderAdapter.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionEditorLoaderAdapter.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWorldPartitionActorLoaderInterface_NoRegister, (int32)VTABLE_OFFSET(UWorldPartitionEditorLoaderAdapter, IWorldPartitionActorLoaderInterface), false },  // 2588401415
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionEditorLoaderAdapter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_Statics::ClassParams = {
		&UWorldPartitionEditorLoaderAdapter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter.OuterSingleton, Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionEditorLoaderAdapter>()
	{
		return UWorldPartitionEditorLoaderAdapter::StaticClass();
	}
	UWorldPartitionEditorLoaderAdapter::UWorldPartitionEditorLoaderAdapter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionEditorLoaderAdapter);
	UWorldPartitionEditorLoaderAdapter::~UWorldPartitionEditorLoaderAdapter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorLoaderAdapter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorLoaderAdapter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionEditorLoaderAdapter, UWorldPartitionEditorLoaderAdapter::StaticClass, TEXT("UWorldPartitionEditorLoaderAdapter"), &Z_Registration_Info_UClass_UWorldPartitionEditorLoaderAdapter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionEditorLoaderAdapter), 943716175U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorLoaderAdapter_h_1555527292(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorLoaderAdapter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionEditorLoaderAdapter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
