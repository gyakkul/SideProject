// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Iris/ReplicationSystem/NetBlob/NetBlobHandlerDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetBlobHandlerDefinitions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IRISCORE_API UClass* Z_Construct_UClass_UNetBlobHandlerDefinitions();
	IRISCORE_API UClass* Z_Construct_UClass_UNetBlobHandlerDefinitions_NoRegister();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetBlobHandlerDefinition();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetBlobHandlerDefinition;
class UScriptStruct* FNetBlobHandlerDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetBlobHandlerDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetBlobHandlerDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetBlobHandlerDefinition, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("NetBlobHandlerDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_NetBlobHandlerDefinition.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FNetBlobHandlerDefinition>()
{
	return FNetBlobHandlerDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetBlob/NetBlobHandlerDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetBlobHandlerDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::NewProp_ClassName_MetaData[] = {
		{ "Comment", "/**\n\x09 * UClass name of the UNetObjectHandler derived class.\n\x09 * In order for a handler to be successfully registered via UReplicationSystem::RegisterNetBlobHandler\n\x09 * the handler class must match one of the definitions.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetBlob/NetBlobHandlerDefinitions.h" },
		{ "ToolTip", "UClass name of the UNetObjectHandler derived class.\nIn order for a handler to be successfully registered via UReplicationSystem::RegisterNetBlobHandler\nthe handler class must match one of the definitions." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetBlobHandlerDefinition, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::NewProp_ClassName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::NewProp_ClassName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		nullptr,
		&NewStructOps,
		"NetBlobHandlerDefinition",
		sizeof(FNetBlobHandlerDefinition),
		alignof(FNetBlobHandlerDefinition),
		Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetBlobHandlerDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_NetBlobHandlerDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetBlobHandlerDefinition.InnerSingleton, Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NetBlobHandlerDefinition.InnerSingleton;
	}
	void UNetBlobHandlerDefinitions::StaticRegisterNativesUNetBlobHandlerDefinitions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetBlobHandlerDefinitions);
	UClass* Z_Construct_UClass_UNetBlobHandlerDefinitions_NoRegister()
	{
		return UNetBlobHandlerDefinitions::StaticClass();
	}
	struct Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NetBlobHandlerDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetBlobHandlerDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NetBlobHandlerDefinitions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Configurable net blob handler definitions. */" },
		{ "IncludePath", "Iris/ReplicationSystem/NetBlob/NetBlobHandlerDefinitions.h" },
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetBlob/NetBlobHandlerDefinitions.h" },
		{ "ToolTip", "Configurable net blob handler definitions." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::NewProp_NetBlobHandlerDefinitions_Inner = { "NetBlobHandlerDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNetBlobHandlerDefinition, METADATA_PARAMS(nullptr, 0) }; // 3134563882
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::NewProp_NetBlobHandlerDefinitions_MetaData[] = {
		{ "ModuleRelativePath", "Private/Iris/ReplicationSystem/NetBlob/NetBlobHandlerDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::NewProp_NetBlobHandlerDefinitions = { "NetBlobHandlerDefinitions", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetBlobHandlerDefinitions, NetBlobHandlerDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::NewProp_NetBlobHandlerDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::NewProp_NetBlobHandlerDefinitions_MetaData)) }; // 3134563882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::NewProp_NetBlobHandlerDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::NewProp_NetBlobHandlerDefinitions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetBlobHandlerDefinitions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::ClassParams = {
		&UNetBlobHandlerDefinitions::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::PropPointers),
		0,
		0x000800ACu,
		METADATA_PARAMS(Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetBlobHandlerDefinitions()
	{
		if (!Z_Registration_Info_UClass_UNetBlobHandlerDefinitions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetBlobHandlerDefinitions.OuterSingleton, Z_Construct_UClass_UNetBlobHandlerDefinitions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetBlobHandlerDefinitions.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UNetBlobHandlerDefinitions>()
	{
		return UNetBlobHandlerDefinitions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetBlobHandlerDefinitions);
	UNetBlobHandlerDefinitions::~UNetBlobHandlerDefinitions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_Statics::ScriptStructInfo[] = {
		{ FNetBlobHandlerDefinition::StaticStruct, Z_Construct_UScriptStruct_FNetBlobHandlerDefinition_Statics::NewStructOps, TEXT("NetBlobHandlerDefinition"), &Z_Registration_Info_UScriptStruct_NetBlobHandlerDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetBlobHandlerDefinition), 3134563882U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetBlobHandlerDefinitions, UNetBlobHandlerDefinitions::StaticClass, TEXT("UNetBlobHandlerDefinitions"), &Z_Registration_Info_UClass_UNetBlobHandlerDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetBlobHandlerDefinitions), 4197725882U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_2970077499(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Private_Iris_ReplicationSystem_NetBlob_NetBlobHandlerDefinitions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
