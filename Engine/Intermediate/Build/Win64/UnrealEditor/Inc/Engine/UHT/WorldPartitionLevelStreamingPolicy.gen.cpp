// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionLevelStreamingPolicy.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionLevelStreamingPolicy() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionStreamingPolicy();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UWorldPartitionLevelStreamingPolicy::StaticRegisterNativesUWorldPartitionLevelStreamingPolicy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWorldPartitionLevelStreamingPolicy);
	UClass* Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_NoRegister()
	{
		return UWorldPartitionLevelStreamingPolicy::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorToCellRemapping_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorToCellRemapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToCellRemapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActorToCellRemapping;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubObjectsToCellRemapping_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubObjectsToCellRemapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubObjectsToCellRemapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SubObjectsToCellRemapping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldPartitionStreamingPolicy,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldPartition/WorldPartitionLevelStreamingPolicy.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionLevelStreamingPolicy.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_ActorToCellRemapping_ValueProp = { "ActorToCellRemapping", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_ActorToCellRemapping_Key_KeyProp = { "ActorToCellRemapping_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_ActorToCellRemapping_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionLevelStreamingPolicy.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_ActorToCellRemapping = { "ActorToCellRemapping", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionLevelStreamingPolicy, ActorToCellRemapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_ActorToCellRemapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_ActorToCellRemapping_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_SubObjectsToCellRemapping_ValueProp = { "SubObjectsToCellRemapping", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_SubObjectsToCellRemapping_Key_KeyProp = { "SubObjectsToCellRemapping_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_SubObjectsToCellRemapping_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionLevelStreamingPolicy.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_SubObjectsToCellRemapping = { "SubObjectsToCellRemapping", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWorldPartitionLevelStreamingPolicy, SubObjectsToCellRemapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_SubObjectsToCellRemapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_SubObjectsToCellRemapping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_ActorToCellRemapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_ActorToCellRemapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_ActorToCellRemapping,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_SubObjectsToCellRemapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_SubObjectsToCellRemapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::NewProp_SubObjectsToCellRemapping,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPartitionLevelStreamingPolicy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::ClassParams = {
		&UWorldPartitionLevelStreamingPolicy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy()
	{
		if (!Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy.OuterSingleton, Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UWorldPartitionLevelStreamingPolicy>()
	{
		return UWorldPartitionLevelStreamingPolicy::StaticClass();
	}
	UWorldPartitionLevelStreamingPolicy::UWorldPartitionLevelStreamingPolicy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPartitionLevelStreamingPolicy);
	UWorldPartitionLevelStreamingPolicy::~UWorldPartitionLevelStreamingPolicy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingPolicy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingPolicy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWorldPartitionLevelStreamingPolicy, UWorldPartitionLevelStreamingPolicy::StaticClass, TEXT("UWorldPartitionLevelStreamingPolicy"), &Z_Registration_Info_UClass_UWorldPartitionLevelStreamingPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWorldPartitionLevelStreamingPolicy), 432754484U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingPolicy_h_2981019607(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingPolicy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionLevelStreamingPolicy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
