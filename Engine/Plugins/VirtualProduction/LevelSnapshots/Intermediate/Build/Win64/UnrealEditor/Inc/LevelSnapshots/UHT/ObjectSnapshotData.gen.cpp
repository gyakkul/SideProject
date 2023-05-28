// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/ObjectSnapshotData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectSnapshotData() {}
// Cross Module References
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FObjectSnapshotData();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectSnapshotData;
class UScriptStruct* FObjectSnapshotData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectSnapshotData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectSnapshotData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectSnapshotData, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("ObjectSnapshotData"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectSnapshotData.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FObjectSnapshotData>()
{
	return FObjectSnapshotData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectSnapshotData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_SerializedData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SerializedData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SerializedData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectFlags_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_ObjectFlags;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Shared data all saved objects in Level Snapshots have. */" },
		{ "ModuleRelativePath", "Public/Data/ObjectSnapshotData.h" },
		{ "ToolTip", "Shared data all saved objects in Level Snapshots have." },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectSnapshotData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::NewProp_SerializedData_Inner = { "SerializedData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::NewProp_SerializedData_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/ObjectSnapshotData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::NewProp_SerializedData = { "SerializedData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectSnapshotData, SerializedData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::NewProp_SerializedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::NewProp_SerializedData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::NewProp_ObjectFlags_MetaData[] = {
		{ "Comment", "/** Flags of the object that was serialized */" },
		{ "ModuleRelativePath", "Public/Data/ObjectSnapshotData.h" },
		{ "ToolTip", "Flags of the object that was serialized" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::NewProp_ObjectFlags = { "ObjectFlags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectSnapshotData, ObjectFlags), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::NewProp_ObjectFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::NewProp_ObjectFlags_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::NewProp_SerializedData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::NewProp_SerializedData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::NewProp_ObjectFlags,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		&NewStructOps,
		"ObjectSnapshotData",
		sizeof(FObjectSnapshotData),
		alignof(FObjectSnapshotData),
		Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectSnapshotData()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectSnapshotData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectSnapshotData.InnerSingleton, Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectSnapshotData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ObjectSnapshotData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ObjectSnapshotData_h_Statics::ScriptStructInfo[] = {
		{ FObjectSnapshotData::StaticStruct, Z_Construct_UScriptStruct_FObjectSnapshotData_Statics::NewStructOps, TEXT("ObjectSnapshotData"), &Z_Registration_Info_UScriptStruct_ObjectSnapshotData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectSnapshotData), 2466474185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ObjectSnapshotData_h_3617597470(TEXT("/Script/LevelSnapshots"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ObjectSnapshotData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ObjectSnapshotData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
