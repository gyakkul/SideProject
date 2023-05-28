// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeHash.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeHash() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase();
	ENGINE_API UClass* Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeCellOwner_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance;
	static UEnum* EWorldPartitionStreamingPerformance_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EWorldPartitionStreamingPerformance"));
		}
		return Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EWorldPartitionStreamingPerformance>()
	{
		return EWorldPartitionStreamingPerformance_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::Enumerators[] = {
		{ "EWorldPartitionStreamingPerformance::Good", (int64)EWorldPartitionStreamingPerformance::Good },
		{ "EWorldPartitionStreamingPerformance::Slow", (int64)EWorldPartitionStreamingPerformance::Slow },
		{ "EWorldPartitionStreamingPerformance::Critical", (int64)EWorldPartitionStreamingPerformance::Critical },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::Enum_MetaDataParams[] = {
		{ "Critical.Name", "EWorldPartitionStreamingPerformance::Critical" },
		{ "Good.Name", "EWorldPartitionStreamingPerformance::Good" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
		{ "Slow.Name", "EWorldPartitionStreamingPerformance::Slow" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EWorldPartitionStreamingPerformance",
		"EWorldPartitionStreamingPerformance",
		Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance()
	{
		if (!Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.InnerSingleton, Z_Construct_UEnum_Engine_EWorldPartitionStreamingPerformance_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance.InnerSingleton;
	}
	void URuntimeHashExternalStreamingObjectBase::StaticRegisterNativesURuntimeHashExternalStreamingObjectBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URuntimeHashExternalStreamingObjectBase);
	UClass* Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_NoRegister()
	{
		return URuntimeHashExternalStreamingObjectBase::StaticClass();
	}
	struct Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningWorld_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OwningWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterWorld_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OuterWorld;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeHash.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_OwningWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_OwningWorld = { "OwningWorld", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeHashExternalStreamingObjectBase, OwningWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_OwningWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_OwningWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_OuterWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_OuterWorld = { "OuterWorld", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URuntimeHashExternalStreamingObjectBase, OuterWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_OuterWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_OuterWorld_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_OwningWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::NewProp_OuterWorld,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWorldPartitionRuntimeCellOwner_NoRegister, (int32)VTABLE_OFFSET(URuntimeHashExternalStreamingObjectBase, IWorldPartitionRuntimeCellOwner), false },  // 4106916854
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URuntimeHashExternalStreamingObjectBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::ClassParams = {
		&URuntimeHashExternalStreamingObjectBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase()
	{
		if (!Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase.OuterSingleton, Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<URuntimeHashExternalStreamingObjectBase>()
	{
		return URuntimeHashExternalStreamingObjectBase::StaticClass();
	}
	URuntimeHashExternalStreamingObjectBase::URuntimeHashExternalStreamingObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeHashExternalStreamingObjectBase);
	URuntimeHashExternalStreamingObjectBase::~URuntimeHashExternalStreamingObjectBase() {}
	void UWorldPartitionRuntimeHash::StaticRegisterNativesUWorldPartitionRuntimeHash()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionRuntimeHash);
	UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash_NoRegister()
	{
		return UWorldPartitionRuntimeHash::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "WorldPartition" },
		{ "IncludePath", "WorldPartition/WorldPartitionRuntimeHash.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeHash.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWorldPartitionRuntimeCellOwner_NoRegister, (int32)VTABLE_OFFSET(UWorldPartitionRuntimeHash, IWorldPartitionRuntimeCellOwner), false },  // 4106916854
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionRuntimeHash>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::ClassParams = {
		&UWorldPartitionRuntimeHash::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionRuntimeHash()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.OuterSingleton, Z_Construct_UClass_UWorldPartitionRuntimeHash_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionRuntimeHash.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionRuntimeHash>()
	{
		return UWorldPartitionRuntimeHash::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionRuntimeHash);
	UWorldPartitionRuntimeHash::~UWorldPartitionRuntimeHash() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics::EnumInfo[] = {
		{ EWorldPartitionStreamingPerformance_StaticEnum, TEXT("EWorldPartitionStreamingPerformance"), &Z_Registration_Info_UEnum_EWorldPartitionStreamingPerformance, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1168094187U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URuntimeHashExternalStreamingObjectBase, URuntimeHashExternalStreamingObjectBase::StaticClass, TEXT("URuntimeHashExternalStreamingObjectBase"), &Z_Registration_Info_UClass_URuntimeHashExternalStreamingObjectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URuntimeHashExternalStreamingObjectBase), 3464075892U) },
		{ Z_Construct_UClass_UWorldPartitionRuntimeHash, UWorldPartitionRuntimeHash::StaticClass, TEXT("UWorldPartitionRuntimeHash"), &Z_Registration_Info_UClass_UWorldPartitionRuntimeHash, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionRuntimeHash), 3612144320U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_98992437(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeHash_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
