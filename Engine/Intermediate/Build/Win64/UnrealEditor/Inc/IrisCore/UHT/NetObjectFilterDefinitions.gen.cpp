// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Iris/ReplicationSystem/Filtering/NetObjectFilterDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetObjectFilterDefinitions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilterDefinitions();
	IRISCORE_API UClass* Z_Construct_UClass_UNetObjectFilterDefinitions_NoRegister();
	IRISCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNetObjectFilterDefinition();
	UPackage* Z_Construct_UPackage__Script_IrisCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetObjectFilterDefinition;
class UScriptStruct* FNetObjectFilterDefinition::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetObjectFilterDefinition.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetObjectFilterDefinition.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetObjectFilterDefinition, (UObject*)Z_Construct_UPackage__Script_IrisCore(), TEXT("NetObjectFilterDefinition"));
	}
	return Z_Registration_Info_UScriptStruct_NetObjectFilterDefinition.OuterSingleton;
}
template<> IRISCORE_API UScriptStruct* StaticStruct<FNetObjectFilterDefinition>()
{
	return FNetObjectFilterDefinition::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FilterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConfigClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConfigClassName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilterDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetObjectFilterDefinition>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_FilterName_MetaData[] = {
		{ "Comment", "/** Filter identifier. Used to uniquely identify a filter. */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilterDefinitions.h" },
		{ "ToolTip", "Filter identifier. Used to uniquely identify a filter." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_FilterName = { "FilterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetObjectFilterDefinition, FilterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_FilterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_FilterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_ClassName_MetaData[] = {
		{ "Comment", "/**\n\x09 * UClass name, specified by its fully qualified path, used to create the UNetObjectFilter. You can have multiple instances\n\x09 * of the same filter as long as their FilterNames are unique.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilterDefinitions.h" },
		{ "ToolTip", "UClass name, specified by its fully qualified path, used to create the UNetObjectFilter. You can have multiple instances\nof the same filter as long as their FilterNames are unique." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetObjectFilterDefinition, ClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_ClassName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_ConfigClassName_MetaData[] = {
		{ "Comment", "/**\n\x09 * Optional UClass name, specified by its fully qualified path, used to create the UNetObjectFilterConfig. The class default instance\n\x09 * will be passed at filter initialization time. If you want multiple instances of the same\n\x09 * filter then use subclassing to create unique filter configs.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilterDefinitions.h" },
		{ "ToolTip", "Optional UClass name, specified by its fully qualified path, used to create the UNetObjectFilterConfig. The class default instance\nwill be passed at filter initialization time. If you want multiple instances of the same\nfilter then use subclassing to create unique filter configs." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_ConfigClassName = { "ConfigClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNetObjectFilterDefinition, ConfigClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_ConfigClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_ConfigClassName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_FilterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_ClassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewProp_ConfigClassName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
		nullptr,
		&NewStructOps,
		"NetObjectFilterDefinition",
		sizeof(FNetObjectFilterDefinition),
		alignof(FNetObjectFilterDefinition),
		Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNetObjectFilterDefinition()
	{
		if (!Z_Registration_Info_UScriptStruct_NetObjectFilterDefinition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetObjectFilterDefinition.InnerSingleton, Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NetObjectFilterDefinition.InnerSingleton;
	}
	void UNetObjectFilterDefinitions::StaticRegisterNativesUNetObjectFilterDefinitions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetObjectFilterDefinitions);
	UClass* Z_Construct_UClass_UNetObjectFilterDefinitions_NoRegister()
	{
		return UNetObjectFilterDefinitions::StaticClass();
	}
	struct Z_Construct_UClass_UNetObjectFilterDefinitions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NetObjectFilterDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NetObjectFilterDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NetObjectFilterDefinitions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IrisCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Configurable filter definitions. Valid filter definitions are auto-created by the filter system. */" },
		{ "IncludePath", "Iris/ReplicationSystem/Filtering/NetObjectFilterDefinitions.h" },
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilterDefinitions.h" },
		{ "ToolTip", "Configurable filter definitions. Valid filter definitions are auto-created by the filter system." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::NewProp_NetObjectFilterDefinitions_Inner = { "NetObjectFilterDefinitions", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNetObjectFilterDefinition, METADATA_PARAMS(nullptr, 0) }; // 1511690536
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::NewProp_NetObjectFilterDefinitions_MetaData[] = {
		{ "ModuleRelativePath", "Public/Iris/ReplicationSystem/Filtering/NetObjectFilterDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::NewProp_NetObjectFilterDefinitions = { "NetObjectFilterDefinitions", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNetObjectFilterDefinitions, NetObjectFilterDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::NewProp_NetObjectFilterDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::NewProp_NetObjectFilterDefinitions_MetaData)) }; // 1511690536
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::NewProp_NetObjectFilterDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::NewProp_NetObjectFilterDefinitions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetObjectFilterDefinitions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::ClassParams = {
		&UNetObjectFilterDefinitions::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetObjectFilterDefinitions()
	{
		if (!Z_Registration_Info_UClass_UNetObjectFilterDefinitions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetObjectFilterDefinitions.OuterSingleton, Z_Construct_UClass_UNetObjectFilterDefinitions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetObjectFilterDefinitions.OuterSingleton;
	}
	template<> IRISCORE_API UClass* StaticClass<UNetObjectFilterDefinitions>()
	{
		return UNetObjectFilterDefinitions::StaticClass();
	}
	UNetObjectFilterDefinitions::UNetObjectFilterDefinitions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetObjectFilterDefinitions);
	UNetObjectFilterDefinitions::~UNetObjectFilterDefinitions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_Statics::ScriptStructInfo[] = {
		{ FNetObjectFilterDefinition::StaticStruct, Z_Construct_UScriptStruct_FNetObjectFilterDefinition_Statics::NewStructOps, TEXT("NetObjectFilterDefinition"), &Z_Registration_Info_UScriptStruct_NetObjectFilterDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetObjectFilterDefinition), 1511690536U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetObjectFilterDefinitions, UNetObjectFilterDefinitions::StaticClass, TEXT("UNetObjectFilterDefinitions"), &Z_Registration_Info_UClass_UNetObjectFilterDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetObjectFilterDefinitions), 20136403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_198458936(TEXT("/Script/IrisCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Iris_Core_Public_Iris_ReplicationSystem_Filtering_NetObjectFilterDefinitions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
