// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/ClassDefaultObjectSnapshotData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassDefaultObjectSnapshotData() {}
// Cross Module References
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FObjectSnapshotData();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References

static_assert(std::is_polymorphic<FClassDefaultObjectSnapshotData>() == std::is_polymorphic<FObjectSnapshotData>(), "USTRUCT FClassDefaultObjectSnapshotData cannot be polymorphic unless super FObjectSnapshotData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClassDefaultObjectSnapshotData;
class UScriptStruct* FClassDefaultObjectSnapshotData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClassDefaultObjectSnapshotData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClassDefaultObjectSnapshotData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("ClassDefaultObjectSnapshotData"));
	}
	return Z_Registration_Info_UScriptStruct_ClassDefaultObjectSnapshotData.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FClassDefaultObjectSnapshotData>()
{
	return FClassDefaultObjectSnapshotData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSerializationSkippedCDO_MetaData[];
#endif
		static void NewProp_bSerializationSkippedCDO_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSerializationSkippedCDO;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** We save the CDO of every object to save space. This holds the CDO's saved data. */" },
		{ "ModuleRelativePath", "Public/Data/ClassDefaultObjectSnapshotData.h" },
		{ "ToolTip", "We save the CDO of every object to save space. This holds the CDO's saved data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassDefaultObjectSnapshotData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData_Statics::NewProp_bSerializationSkippedCDO_MetaData[] = {
		{ "Comment", "/** Whether no data was saved because somebody called ILevelSnapshotsModule::AddSkippedClassDefault */" },
		{ "ModuleRelativePath", "Public/Data/ClassDefaultObjectSnapshotData.h" },
		{ "ToolTip", "Whether no data was saved because somebody called ILevelSnapshotsModule::AddSkippedClassDefault" },
	};
#endif
	void Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData_Statics::NewProp_bSerializationSkippedCDO_SetBit(void* Obj)
	{
		((FClassDefaultObjectSnapshotData*)Obj)->bSerializationSkippedCDO = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData_Statics::NewProp_bSerializationSkippedCDO = { "bSerializationSkippedCDO", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FClassDefaultObjectSnapshotData), &Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData_Statics::NewProp_bSerializationSkippedCDO_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData_Statics::NewProp_bSerializationSkippedCDO_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData_Statics::NewProp_bSerializationSkippedCDO_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData_Statics::NewProp_bSerializationSkippedCDO,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		Z_Construct_UScriptStruct_FObjectSnapshotData,
		&NewStructOps,
		"ClassDefaultObjectSnapshotData",
		sizeof(FClassDefaultObjectSnapshotData),
		alignof(FClassDefaultObjectSnapshotData),
		Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData()
	{
		if (!Z_Registration_Info_UScriptStruct_ClassDefaultObjectSnapshotData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClassDefaultObjectSnapshotData.InnerSingleton, Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClassDefaultObjectSnapshotData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ClassDefaultObjectSnapshotData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ClassDefaultObjectSnapshotData_h_Statics::ScriptStructInfo[] = {
		{ FClassDefaultObjectSnapshotData::StaticStruct, Z_Construct_UScriptStruct_FClassDefaultObjectSnapshotData_Statics::NewStructOps, TEXT("ClassDefaultObjectSnapshotData"), &Z_Registration_Info_UScriptStruct_ClassDefaultObjectSnapshotData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassDefaultObjectSnapshotData), 3755201535U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ClassDefaultObjectSnapshotData_h_1266785140(TEXT("/Script/LevelSnapshots"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ClassDefaultObjectSnapshotData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ClassDefaultObjectSnapshotData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
