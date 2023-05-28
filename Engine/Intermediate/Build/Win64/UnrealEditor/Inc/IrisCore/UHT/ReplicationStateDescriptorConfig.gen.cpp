// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/ReplicationState/ReplicationStateDescriptorConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicationStateDescriptorConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IRISCORE_API UClass* Z_Construct_UClass_UReplicationStateDescriptorConfig();
	IRISCORE_API UClass* Z_Construct_UClass_UReplicationStateDescriptorConfig_NoRegister();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SupportsStructNetSerializerConfig;
class UScriptStruct* FSupportsStructNetSerializerConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SupportsStructNetSerializerConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SupportsStructNetSerializerConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("SupportsStructNetSerializerConfig"));
	}
	return Z_Registration_Info_UScriptStruct_SupportsStructNetSerializerConfig.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FSupportsStructNetSerializerConfig>()
{
	return FSupportsStructNetSerializerConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StructName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanUseStructNetSerializer_MetaData[];
#endif
		static void NewProp_bCanUseStructNetSerializer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanUseStructNetSerializer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationState/ReplicationStateDescriptorConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSupportsStructNetSerializerConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewProp_StructName_MetaData[] = {
		{ "Comment", "/** Struct name. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationState/ReplicationStateDescriptorConfig.h" },
		{ "ToolTip", "Struct name." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewProp_StructName = { "StructName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSupportsStructNetSerializerConfig, StructName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewProp_StructName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewProp_StructName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewProp_bCanUseStructNetSerializer_MetaData[] = {
		{ "Comment", "/** If the named struct works with the default Iris StructNetSerializer. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationState/ReplicationStateDescriptorConfig.h" },
		{ "ToolTip", "If the named struct works with the default Iris StructNetSerializer." },
	};
#endif
	void Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewProp_bCanUseStructNetSerializer_SetBit(void* Obj)
	{
		((FSupportsStructNetSerializerConfig*)Obj)->bCanUseStructNetSerializer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewProp_bCanUseStructNetSerializer = { "bCanUseStructNetSerializer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSupportsStructNetSerializerConfig), &Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewProp_bCanUseStructNetSerializer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewProp_bCanUseStructNetSerializer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewProp_bCanUseStructNetSerializer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewProp_StructName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewProp_bCanUseStructNetSerializer,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		nullptr,
		&NewStructOps,
		"SupportsStructNetSerializerConfig",
		sizeof(FSupportsStructNetSerializerConfig),
		alignof(FSupportsStructNetSerializerConfig),
		Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_SupportsStructNetSerializerConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SupportsStructNetSerializerConfig.InnerSingleton, Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SupportsStructNetSerializerConfig.InnerSingleton;
	}
	void UReplicationStateDescriptorConfig::StaticRegisterNativesUReplicationStateDescriptorConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReplicationStateDescriptorConfig);
	UClass* Z_Construct_UClass_UReplicationStateDescriptorConfig_NoRegister()
	{
		return UReplicationStateDescriptorConfig::StaticClass();
	}
	struct Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SupportsStructNetSerializerList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportsStructNetSerializerList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SupportsStructNetSerializerList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Iris/ReplicationState/ReplicationStateDescriptorConfig.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationState/ReplicationStateDescriptorConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::NewProp_SupportsStructNetSerializerList_Inner = { "SupportsStructNetSerializerList", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig, METADATA_PARAMS(nullptr, 0) }; // 1130772471
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::NewProp_SupportsStructNetSerializerList_MetaData[] = {
		{ "Comment", "/**\n\x09 * Structs that works using the default struct NetSerializer when running iris replication even though they implement a custom NetSerialize or NetDeltaSerialize method.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationState/ReplicationStateDescriptorConfig.h" },
		{ "ToolTip", "Structs that works using the default struct NetSerializer when running iris replication even though they implement a custom NetSerialize or NetDeltaSerialize method." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::NewProp_SupportsStructNetSerializerList = { "SupportsStructNetSerializerList", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReplicationStateDescriptorConfig, SupportsStructNetSerializerList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::NewProp_SupportsStructNetSerializerList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::NewProp_SupportsStructNetSerializerList_MetaData)) }; // 1130772471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::NewProp_SupportsStructNetSerializerList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::NewProp_SupportsStructNetSerializerList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicationStateDescriptorConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::ClassParams = {
		&UReplicationStateDescriptorConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicationStateDescriptorConfig()
	{
		if (!Z_Registration_Info_UClass_UReplicationStateDescriptorConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReplicationStateDescriptorConfig.OuterSingleton, Z_Construct_UClass_UReplicationStateDescriptorConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReplicationStateDescriptorConfig.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UReplicationStateDescriptorConfig>()
	{
		return UReplicationStateDescriptorConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicationStateDescriptorConfig);
	UReplicationStateDescriptorConfig::~UReplicationStateDescriptorConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_Statics::ScriptStructInfo[] = {
		{ FSupportsStructNetSerializerConfig::StaticStruct, Z_Construct_UScriptStruct_FSupportsStructNetSerializerConfig_Statics::NewStructOps, TEXT("SupportsStructNetSerializerConfig"), &Z_Registration_Info_UScriptStruct_SupportsStructNetSerializerConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSupportsStructNetSerializerConfig), 1130772471U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReplicationStateDescriptorConfig, UReplicationStateDescriptorConfig::StaticClass, TEXT("UReplicationStateDescriptorConfig"), &Z_Registration_Info_UClass_UReplicationStateDescriptorConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReplicationStateDescriptorConfig), 1626540246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_4194055749(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationState_ReplicationStateDescriptorConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
