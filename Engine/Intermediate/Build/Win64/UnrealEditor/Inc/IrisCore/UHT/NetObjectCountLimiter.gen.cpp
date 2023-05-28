// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetObjectCountLimiter() {}
// Cross Module References
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectCountLimiter();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectCountLimiter_NoRegister();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectCountLimiterConfig();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectCountLimiterConfig_NoRegister();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizer();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectPrioritizerConfig();
	IRISCORE_API UEnum* Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENetObjectCountLimiterMode;
	static UEnum* ENetObjectCountLimiterMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("ENetObjectCountLimiterMode"));
		}
		return Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.OuterSingleton;
	}
	template<> IRISCORE_API UEnum* StaticEnum<ENetObjectCountLimiterMode>()
	{
		return ENetObjectCountLimiterMode_StaticEnum();
	}
	struct Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode_Statics::Enumerators[] = {
		{ "ENetObjectCountLimiterMode::RoundRobin", (int64)ENetObjectCountLimiterMode::RoundRobin },
		{ "ENetObjectCountLimiterMode::Fill", (int64)ENetObjectCountLimiterMode::Fill },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode_Statics::Enum_MetaDataParams[] = {
		{ "Fill.Comment", "/**\n\x09 * Each net update the N least recently replicated objects with modified properties will be allowed to be replicated.\n\x09 * This can cause an object to be replicated very often if it's modified a lot and nothing else is.\n\x09 */" },
		{ "Fill.Name", "ENetObjectCountLimiterMode::Fill" },
		{ "Fill.ToolTip", "Each net update the N least recently replicated objects with modified properties will be allowed to be replicated.\nThis can cause an object to be replicated very often if it's modified a lot and nothing else is." },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
		{ "RoundRobin.Comment", "/**\n\x09 * Each net update the next N, as configured, objects will be allowed to be replicated if they have modified properties.\n\x09 * This means that even if there are many objects that have modified properties none will be sent if the N objects that\n\x09 * are considered this frame haven't been modified.\n\x09 */" },
		{ "RoundRobin.Name", "ENetObjectCountLimiterMode::RoundRobin" },
		{ "RoundRobin.ToolTip", "Each net update the next N, as configured, objects will be allowed to be replicated if they have modified properties.\nThis means that even if there are many objects that have modified properties none will be sent if the N objects that\nare considered this frame haven't been modified." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_IrisCore,
		nullptr,
		"ENetObjectCountLimiterMode",
		"ENetObjectCountLimiterMode",
		Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode()
	{
		if (!Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.InnerSingleton, Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENetObjectCountLimiterMode.InnerSingleton;
	}
	void UNetObjectCountLimiterConfig::StaticRegisterNativesUNetObjectCountLimiterConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectCountLimiterConfig);
	UClass* Z_Construct_UClass_UNetObjectCountLimiterConfig_NoRegister()
	{
		return UNetObjectCountLimiterConfig::StaticClass();
	}
	struct Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxObjectCount_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxObjectCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningConnectionPriority_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OwningConnectionPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOwnedObjectsFastLane_MetaData[];
#endif
		static void NewProp_bEnableOwnedObjectsFastLane_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOwnedObjectsFastLane;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetObjectPrioritizerConfig,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_Mode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetObjectCountLimiterConfig, Mode), Z_Construct_UEnum_IrisCore_ENetObjectCountLimiterMode, METADATA_PARAMS(Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_Mode_MetaData)) }; // 1884213776
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_MaxObjectCount_MetaData[] = {
		{ "Comment", "/**\n\x09 * How many objects to be considered for replication each frame.\n\x09 * With 2 at least 1 object that isn't owned by the connection will be considered.\n\x09 * If the prioritizer won't deal with objects that are owned by a specific connection\n\x09 * it's safe to set to 1.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
		{ "ToolTip", "How many objects to be considered for replication each frame.\nWith 2 at least 1 object that isn't owned by the connection will be considered.\nIf the prioritizer won't deal with objects that are owned by a specific connection\nit's safe to set to 1." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_MaxObjectCount = { "MaxObjectCount", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetObjectCountLimiterConfig, MaxObjectCount), METADATA_PARAMS(Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_MaxObjectCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_MaxObjectCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_Priority_MetaData[] = {
		{ "Comment", "/**\n\x09  * Which priority to set for objects considered for replication.\n\x09  * Priority is accumulated for an object until it's replicated.\n\x09  * 1.0f is the threshold at which the object may be replicated.\n\x09  */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
		{ "ToolTip", "Which priority to set for objects considered for replication.\nPriority is accumulated for an object until it's replicated.\n1.0f is the threshold at which the object may be replicated." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetObjectCountLimiterConfig, Priority), METADATA_PARAMS(Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_Priority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_Priority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_OwningConnectionPriority_MetaData[] = {
		{ "Comment", "/**\n\x09 * The priority to set for a considered object if it's owned by the connection being prioritized for.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
		{ "ToolTip", "The priority to set for a considered object if it's owned by the connection being prioritized for." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_OwningConnectionPriority = { "OwningConnectionPriority", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetObjectCountLimiterConfig, OwningConnectionPriority), METADATA_PARAMS(Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_OwningConnectionPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_OwningConnectionPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_bEnableOwnedObjectsFastLane_MetaData[] = {
		{ "Comment", "/**\n\x09 * Whether objects owned by the connection should always be considered for replication.\n\x09 * If so, such objects won't count against the MaxObjectCount.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
		{ "ToolTip", "Whether objects owned by the connection should always be considered for replication.\nIf so, such objects won't count against the MaxObjectCount." },
	};
#endif
	void Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_bEnableOwnedObjectsFastLane_SetBit(void* Obj)
	{
		((UNetObjectCountLimiterConfig*)Obj)->bEnableOwnedObjectsFastLane = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_bEnableOwnedObjectsFastLane = { "bEnableOwnedObjectsFastLane", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNetObjectCountLimiterConfig), &Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_bEnableOwnedObjectsFastLane_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_bEnableOwnedObjectsFastLane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_bEnableOwnedObjectsFastLane_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_MaxObjectCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_Priority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_OwningConnectionPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::NewProp_bEnableOwnedObjectsFastLane,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectCountLimiterConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::ClassParams = {
		&UNetObjectCountLimiterConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::PropPointers),
		0,
		0x000800ACu,
		METADATA_PARAMS(Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetObjectCountLimiterConfig()
	{
		if (!Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.OuterSingleton, Z_Construct_UClass_UNetObjectCountLimiterConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetObjectCountLimiterConfig.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UNetObjectCountLimiterConfig>()
	{
		return UNetObjectCountLimiterConfig::StaticClass();
	}
	UNetObjectCountLimiterConfig::UNetObjectCountLimiterConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectCountLimiterConfig);
	UNetObjectCountLimiterConfig::~UNetObjectCountLimiterConfig() {}
	void UNetObjectCountLimiter::StaticRegisterNativesUNetObjectCountLimiter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectCountLimiter);
	UClass* Z_Construct_UClass_UNetObjectCountLimiter_NoRegister()
	{
		return UNetObjectCountLimiter::StaticClass();
	}
	struct Z_Construct_UClass_UNetObjectCountLimiter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetObjectCountLimiter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetObjectPrioritizer,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectCountLimiter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Prioritization/NetObjectCountLimiter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetObjectCountLimiter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectCountLimiter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectCountLimiter_Statics::ClassParams = {
		&UNetObjectCountLimiter::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNetObjectCountLimiter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectCountLimiter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetObjectCountLimiter()
	{
		if (!Z_Registration_Info_UClass_UNetObjectCountLimiter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectCountLimiter.OuterSingleton, Z_Construct_UClass_UNetObjectCountLimiter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetObjectCountLimiter.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UNetObjectCountLimiter>()
	{
		return UNetObjectCountLimiter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectCountLimiter);
	UNetObjectCountLimiter::~UNetObjectCountLimiter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_Statics::EnumInfo[] = {
		{ ENetObjectCountLimiterMode_StaticEnum, TEXT("ENetObjectCountLimiterMode"), &Z_Registration_Info_UEnum_ENetObjectCountLimiterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1884213776U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetObjectCountLimiterConfig, UNetObjectCountLimiterConfig::StaticClass, TEXT("UNetObjectCountLimiterConfig"), &Z_Registration_Info_UClass_UNetObjectCountLimiterConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectCountLimiterConfig), 3976070392U) },
		{ Z_Construct_UClass_UNetObjectCountLimiter, UNetObjectCountLimiter::StaticClass, TEXT("UNetObjectCountLimiter"), &Z_Registration_Info_UClass_UNetObjectCountLimiter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectCountLimiter), 2521301846U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_3261963113(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Prioritization_NetObjectCountLimiter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
