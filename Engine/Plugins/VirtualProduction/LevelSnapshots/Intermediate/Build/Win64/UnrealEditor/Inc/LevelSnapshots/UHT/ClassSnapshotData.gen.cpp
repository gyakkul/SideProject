// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/ClassSnapshotData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassSnapshotData() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	LEVELSNAPSHOTS_API UEnum* Z_Construct_UEnum_LevelSnapshots_ESnapshotClassFlags();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FClassSnapshotData();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FObjectSnapshotData();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESnapshotClassFlags;
	static UEnum* ESnapshotClassFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESnapshotClassFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESnapshotClassFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LevelSnapshots_ESnapshotClassFlags, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("ESnapshotClassFlags"));
		}
		return Z_Registration_Info_UEnum_ESnapshotClassFlags.OuterSingleton;
	}
	template<> LEVELSNAPSHOTS_API UEnum* StaticEnum<ESnapshotClassFlags>()
	{
		return ESnapshotClassFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_LevelSnapshots_ESnapshotClassFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LevelSnapshots_ESnapshotClassFlags_Statics::Enumerators[] = {
		{ "ESnapshotClassFlags::NoFlags", (int64)ESnapshotClassFlags::NoFlags },
		{ "ESnapshotClassFlags::SerializationSkippedArchetypeData", (int64)ESnapshotClassFlags::SerializationSkippedArchetypeData },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LevelSnapshots_ESnapshotClassFlags_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/ClassSnapshotData.h" },
		{ "NoFlags.Name", "ESnapshotClassFlags::NoFlags" },
		{ "SerializationSkippedArchetypeData.Comment", "/**\n\x09 * There is no data available for the archetype because Level Snapshots was configured so, e.g. ILevelSnapshotsModule::AddSkippedClassDefault was called.\n\x09 */" },
		{ "SerializationSkippedArchetypeData.Name", "ESnapshotClassFlags::SerializationSkippedArchetypeData" },
		{ "SerializationSkippedArchetypeData.ToolTip", "There is no data available for the archetype because Level Snapshots was configured so, e.g. ILevelSnapshotsModule::AddSkippedClassDefault was called." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LevelSnapshots_ESnapshotClassFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		"ESnapshotClassFlags",
		"ESnapshotClassFlags",
		Z_Construct_UEnum_LevelSnapshots_ESnapshotClassFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshots_ESnapshotClassFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LevelSnapshots_ESnapshotClassFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LevelSnapshots_ESnapshotClassFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LevelSnapshots_ESnapshotClassFlags()
	{
		if (!Z_Registration_Info_UEnum_ESnapshotClassFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESnapshotClassFlags.InnerSingleton, Z_Construct_UEnum_LevelSnapshots_ESnapshotClassFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESnapshotClassFlags.InnerSingleton;
	}

static_assert(std::is_polymorphic<FClassSnapshotData>() == std::is_polymorphic<FObjectSnapshotData>(), "USTRUCT FClassSnapshotData cannot be polymorphic unless super FObjectSnapshotData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClassSnapshotData;
class UScriptStruct* FClassSnapshotData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClassSnapshotData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClassSnapshotData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassSnapshotData, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("ClassSnapshotData"));
	}
	return Z_Registration_Info_UScriptStruct_ClassSnapshotData.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FClassSnapshotData>()
{
	return FClassSnapshotData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClassSnapshotData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassFlags_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_ClassFlags;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SnapshotFlags_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotFlags_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SnapshotFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassSnapshotData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Holds class information for a specific use of a class. Usually it holds the class archetype.\n * Actor classes have exactly one instance of FClassSnapshotData.\n * Subobjects can have multiple instances of FClassSnapshotData; in actors each subobject has its own archetype.\n */" },
		{ "ModuleRelativePath", "Public/Data/ClassSnapshotData.h" },
		{ "ToolTip", "Holds class information for a specific use of a class. Usually it holds the class archetype.\nActor classes have exactly one instance of FClassSnapshotData.\nSubobjects can have multiple instances of FClassSnapshotData; in actors each subobject has its own archetype." },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassSnapshotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassSnapshotData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassSnapshotData_Statics::NewProp_ClassPath_MetaData[] = {
		{ "Comment", "/**\n\x09 * The class getting saved.\n\x09 * Note:\n\x09 */" },
		{ "ModuleRelativePath", "Public/Data/ClassSnapshotData.h" },
		{ "ToolTip", "The class getting saved.\nNote:" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClassSnapshotData_Statics::NewProp_ClassPath = { "ClassPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClassSnapshotData, ClassPath), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassSnapshotData_Statics::NewProp_ClassPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassSnapshotData_Statics::NewProp_ClassPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassSnapshotData_Statics::NewProp_ClassFlags_MetaData[] = {
		{ "Comment", "/** Flags of ClassPath, i.e. the class whose archetype was serialized */" },
		{ "ModuleRelativePath", "Public/Data/ClassSnapshotData.h" },
		{ "ToolTip", "Flags of ClassPath, i.e. the class whose archetype was serialized" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FClassSnapshotData_Statics::NewProp_ClassFlags = { "ClassFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClassSnapshotData, ClassFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassSnapshotData_Statics::NewProp_ClassFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassSnapshotData_Statics::NewProp_ClassFlags_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClassSnapshotData_Statics::NewProp_SnapshotFlags_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassSnapshotData_Statics::NewProp_SnapshotFlags_MetaData[] = {
		{ "Comment", "/** Special flags about this class */" },
		{ "ModuleRelativePath", "Public/Data/ClassSnapshotData.h" },
		{ "ToolTip", "Special flags about this class" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClassSnapshotData_Statics::NewProp_SnapshotFlags = { "SnapshotFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClassSnapshotData, SnapshotFlags), Z_Construct_UEnum_LevelSnapshots_ESnapshotClassFlags, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassSnapshotData_Statics::NewProp_SnapshotFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassSnapshotData_Statics::NewProp_SnapshotFlags_MetaData)) }; // 4031767892
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassSnapshotData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassSnapshotData_Statics::NewProp_ClassPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassSnapshotData_Statics::NewProp_ClassFlags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassSnapshotData_Statics::NewProp_SnapshotFlags_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassSnapshotData_Statics::NewProp_SnapshotFlags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassSnapshotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		Z_Construct_UScriptStruct_FObjectSnapshotData,
		&NewStructOps,
		"ClassSnapshotData",
		sizeof(FClassSnapshotData),
		alignof(FClassSnapshotData),
		Z_Construct_UScriptStruct_FClassSnapshotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassSnapshotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClassSnapshotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassSnapshotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClassSnapshotData()
	{
		if (!Z_Registration_Info_UScriptStruct_ClassSnapshotData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClassSnapshotData.InnerSingleton, Z_Construct_UScriptStruct_FClassSnapshotData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClassSnapshotData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ClassSnapshotData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ClassSnapshotData_h_Statics::EnumInfo[] = {
		{ ESnapshotClassFlags_StaticEnum, TEXT("ESnapshotClassFlags"), &Z_Registration_Info_UEnum_ESnapshotClassFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4031767892U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ClassSnapshotData_h_Statics::ScriptStructInfo[] = {
		{ FClassSnapshotData::StaticStruct, Z_Construct_UScriptStruct_FClassSnapshotData_Statics::NewStructOps, TEXT("ClassSnapshotData"), &Z_Registration_Info_UScriptStruct_ClassSnapshotData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassSnapshotData), 1970864574U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ClassSnapshotData_h_137635834(TEXT("/Script/LevelSnapshots"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ClassSnapshotData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ClassSnapshotData_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ClassSnapshotData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ClassSnapshotData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
