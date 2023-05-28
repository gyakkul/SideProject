// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/ZoneGraph/Source/ZoneGraph/Public/ZoneGraphSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZoneGraphSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_ZoneGraph();
	ZONEGRAPH_API UClass* Z_Construct_UClass_AZoneGraphData_NoRegister();
	ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneGraphSubsystem();
	ZONEGRAPH_API UClass* Z_Construct_UClass_UZoneGraphSubsystem_NoRegister();
	ZONEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FRegisteredZoneGraphData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RegisteredZoneGraphData;
class UScriptStruct* FRegisteredZoneGraphData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RegisteredZoneGraphData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RegisteredZoneGraphData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegisteredZoneGraphData, (UObject*)Z_Construct_UPackage__Script_ZoneGraph(), TEXT("RegisteredZoneGraphData"));
	}
	return Z_Registration_Info_UScriptStruct_RegisteredZoneGraphData.OuterSingleton;
}
template<> ZONEGRAPH_API UScriptStruct* StaticStruct<FRegisteredZoneGraphData>()
{
	return FRegisteredZoneGraphData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRegisteredZoneGraphData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoneGraphData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ZoneGraphData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredZoneGraphData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Struct representing registered ZoneGraph data in the subsystem.\n" },
		{ "ModuleRelativePath", "Public/ZoneGraphSubsystem.h" },
		{ "ToolTip", "Struct representing registered ZoneGraph data in the subsystem." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRegisteredZoneGraphData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegisteredZoneGraphData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRegisteredZoneGraphData_Statics::NewProp_ZoneGraphData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRegisteredZoneGraphData_Statics::NewProp_ZoneGraphData = { "ZoneGraphData", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRegisteredZoneGraphData, ZoneGraphData), Z_Construct_UClass_AZoneGraphData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisteredZoneGraphData_Statics::NewProp_ZoneGraphData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredZoneGraphData_Statics::NewProp_ZoneGraphData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegisteredZoneGraphData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegisteredZoneGraphData_Statics::NewProp_ZoneGraphData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegisteredZoneGraphData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
		nullptr,
		&NewStructOps,
		"RegisteredZoneGraphData",
		sizeof(FRegisteredZoneGraphData),
		alignof(FRegisteredZoneGraphData),
		Z_Construct_UScriptStruct_FRegisteredZoneGraphData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredZoneGraphData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRegisteredZoneGraphData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegisteredZoneGraphData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRegisteredZoneGraphData()
	{
		if (!Z_Registration_Info_UScriptStruct_RegisteredZoneGraphData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RegisteredZoneGraphData.InnerSingleton, Z_Construct_UScriptStruct_FRegisteredZoneGraphData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RegisteredZoneGraphData.InnerSingleton;
	}
	void UZoneGraphSubsystem::StaticRegisterNativesUZoneGraphSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UZoneGraphSubsystem);
	UClass* Z_Construct_UClass_UZoneGraphSubsystem_NoRegister()
	{
		return UZoneGraphSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UZoneGraphSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredZoneGraphData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredZoneGraphData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredZoneGraphData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZoneGraphSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ZoneGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZoneGraphSubsystem.h" },
		{ "ModuleRelativePath", "Public/ZoneGraphSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UZoneGraphSubsystem_Statics::NewProp_RegisteredZoneGraphData_Inner = { "RegisteredZoneGraphData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRegisteredZoneGraphData, METADATA_PARAMS(nullptr, 0) }; // 1630021797
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZoneGraphSubsystem_Statics::NewProp_RegisteredZoneGraphData_MetaData[] = {
		{ "ModuleRelativePath", "Public/ZoneGraphSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UZoneGraphSubsystem_Statics::NewProp_RegisteredZoneGraphData = { "RegisteredZoneGraphData", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UZoneGraphSubsystem, RegisteredZoneGraphData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UZoneGraphSubsystem_Statics::NewProp_RegisteredZoneGraphData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphSubsystem_Statics::NewProp_RegisteredZoneGraphData_MetaData)) }; // 1630021797
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZoneGraphSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphSubsystem_Statics::NewProp_RegisteredZoneGraphData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZoneGraphSubsystem_Statics::NewProp_RegisteredZoneGraphData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZoneGraphSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZoneGraphSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UZoneGraphSubsystem_Statics::ClassParams = {
		&UZoneGraphSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZoneGraphSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphSubsystem_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UZoneGraphSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZoneGraphSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZoneGraphSubsystem()
	{
		if (!Z_Registration_Info_UClass_UZoneGraphSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UZoneGraphSubsystem.OuterSingleton, Z_Construct_UClass_UZoneGraphSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UZoneGraphSubsystem.OuterSingleton;
	}
	template<> ZONEGRAPH_API UClass* StaticClass<UZoneGraphSubsystem>()
	{
		return UZoneGraphSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZoneGraphSubsystem);
	UZoneGraphSubsystem::~UZoneGraphSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FRegisteredZoneGraphData::StaticStruct, Z_Construct_UScriptStruct_FRegisteredZoneGraphData_Statics::NewStructOps, TEXT("RegisteredZoneGraphData"), &Z_Registration_Info_UScriptStruct_RegisteredZoneGraphData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRegisteredZoneGraphData), 1630021797U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UZoneGraphSubsystem, UZoneGraphSubsystem::StaticClass, TEXT("UZoneGraphSubsystem"), &Z_Registration_Info_UClass_UZoneGraphSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UZoneGraphSubsystem), 3206135492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSubsystem_h_2257857138(TEXT("/Script/ZoneGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ZoneGraph_Source_ZoneGraph_Public_ZoneGraphSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
