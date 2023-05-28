// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Net/BandwidthTestActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBandwidthTestActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ABandwidthTestActor();
	ENGINE_API UClass* Z_Construct_UClass_ABandwidthTestActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBandwidthTestGenerator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBandwidthTestItem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BandwidthTestItem;
class UScriptStruct* FBandwidthTestItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BandwidthTestItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BandwidthTestItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBandwidthTestItem, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BandwidthTestItem"));
	}
	return Z_Registration_Info_UScriptStruct_BandwidthTestItem.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBandwidthTestItem>()
{
	return FBandwidthTestItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBandwidthTestItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Kilobyte_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Kilobyte_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Kilobyte;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------\n//\n" },
		{ "ModuleRelativePath", "Public/Net/BandwidthTestActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBandwidthTestItem>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::NewProp_Kilobyte_Inner = { "Kilobyte", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::NewProp_Kilobyte_MetaData[] = {
		{ "Comment", "// Contains up to 1000 bytes\n" },
		{ "ModuleRelativePath", "Public/Net/BandwidthTestActor.h" },
		{ "ToolTip", "Contains up to 1000 bytes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::NewProp_Kilobyte = { "Kilobyte", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBandwidthTestItem, Kilobyte), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::NewProp_Kilobyte_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::NewProp_Kilobyte_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::NewProp_Kilobyte_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::NewProp_Kilobyte,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BandwidthTestItem",
		sizeof(FBandwidthTestItem),
		alignof(FBandwidthTestItem),
		Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBandwidthTestItem()
	{
		if (!Z_Registration_Info_UScriptStruct_BandwidthTestItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BandwidthTestItem.InnerSingleton, Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BandwidthTestItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BandwidthTestGenerator;
class UScriptStruct* FBandwidthTestGenerator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BandwidthTestGenerator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BandwidthTestGenerator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBandwidthTestGenerator, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BandwidthTestGenerator"));
	}
	return Z_Registration_Info_UScriptStruct_BandwidthTestGenerator.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBandwidthTestGenerator>()
{
	return FBandwidthTestGenerator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReplicatedBuffers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplicatedBuffers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReplicatedBuffers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//-----------------------------------------------------------------------------\n//\n" },
		{ "ModuleRelativePath", "Public/Net/BandwidthTestActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBandwidthTestGenerator>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::NewProp_ReplicatedBuffers_Inner = { "ReplicatedBuffers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBandwidthTestItem, METADATA_PARAMS(nullptr, 0) }; // 805851714
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::NewProp_ReplicatedBuffers_MetaData[] = {
		{ "ModuleRelativePath", "Public/Net/BandwidthTestActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::NewProp_ReplicatedBuffers = { "ReplicatedBuffers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBandwidthTestGenerator, ReplicatedBuffers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::NewProp_ReplicatedBuffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::NewProp_ReplicatedBuffers_MetaData)) }; // 805851714
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::NewProp_ReplicatedBuffers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::NewProp_ReplicatedBuffers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BandwidthTestGenerator",
		sizeof(FBandwidthTestGenerator),
		alignof(FBandwidthTestGenerator),
		Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBandwidthTestGenerator()
	{
		if (!Z_Registration_Info_UScriptStruct_BandwidthTestGenerator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BandwidthTestGenerator.InnerSingleton, Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BandwidthTestGenerator.InnerSingleton;
	}
	void ABandwidthTestActor::StaticRegisterNativesABandwidthTestActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABandwidthTestActor);
	UClass* Z_Construct_UClass_ABandwidthTestActor_NoRegister()
	{
		return ABandwidthTestActor::StaticClass();
	}
	struct Z_Construct_UClass_ABandwidthTestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BandwidthGenerator_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BandwidthGenerator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABandwidthTestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABandwidthTestActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This ABandwidthTestActor class is used to generate an easily controllable amount of bandwidth.\n * It uses property replication to generate it's traffic via a NetDeltaSerializer struct\n * Note that the property data is never stored in memory on the simulated clients \n */" },
		{ "IncludePath", "Net/BandwidthTestActor.h" },
		{ "ModuleRelativePath", "Public/Net/BandwidthTestActor.h" },
		{ "ToolTip", "This ABandwidthTestActor class is used to generate an easily controllable amount of bandwidth.\nIt uses property replication to generate it's traffic via a NetDeltaSerializer struct\nNote that the property data is never stored in memory on the simulated clients" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABandwidthTestActor_Statics::NewProp_BandwidthGenerator_MetaData[] = {
		{ "ModuleRelativePath", "Public/Net/BandwidthTestActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABandwidthTestActor_Statics::NewProp_BandwidthGenerator = { "BandwidthGenerator", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABandwidthTestActor, BandwidthGenerator), Z_Construct_UScriptStruct_FBandwidthTestGenerator, METADATA_PARAMS(Z_Construct_UClass_ABandwidthTestActor_Statics::NewProp_BandwidthGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABandwidthTestActor_Statics::NewProp_BandwidthGenerator_MetaData)) }; // 3892470491
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABandwidthTestActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABandwidthTestActor_Statics::NewProp_BandwidthGenerator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABandwidthTestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABandwidthTestActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABandwidthTestActor_Statics::ClassParams = {
		&ABandwidthTestActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABandwidthTestActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABandwidthTestActor_Statics::PropPointers),
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABandwidthTestActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABandwidthTestActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABandwidthTestActor()
	{
		if (!Z_Registration_Info_UClass_ABandwidthTestActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABandwidthTestActor.OuterSingleton, Z_Construct_UClass_ABandwidthTestActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABandwidthTestActor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ABandwidthTestActor>()
	{
		return ABandwidthTestActor::StaticClass();
	}

	void ABandwidthTestActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_BandwidthGenerator(TEXT("BandwidthGenerator"));

		const bool bIsValid = true
			&& Name_BandwidthGenerator == ClassReps[(int32)ENetFields_Private::BandwidthGenerator].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ABandwidthTestActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABandwidthTestActor);
	ABandwidthTestActor::~ABandwidthTestActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_Statics::ScriptStructInfo[] = {
		{ FBandwidthTestItem::StaticStruct, Z_Construct_UScriptStruct_FBandwidthTestItem_Statics::NewStructOps, TEXT("BandwidthTestItem"), &Z_Registration_Info_UScriptStruct_BandwidthTestItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBandwidthTestItem), 805851714U) },
		{ FBandwidthTestGenerator::StaticStruct, Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics::NewStructOps, TEXT("BandwidthTestGenerator"), &Z_Registration_Info_UScriptStruct_BandwidthTestGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBandwidthTestGenerator), 3892470491U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABandwidthTestActor, ABandwidthTestActor::StaticClass, TEXT("ABandwidthTestActor"), &Z_Registration_Info_UClass_ABandwidthTestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABandwidthTestActor), 205992633U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_1411100478(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
