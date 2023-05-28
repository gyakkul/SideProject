// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/ComponentSnapshotData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentSnapshotData() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentCreationMethod();
	LEVELSNAPSHOTS_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSnapshotData();
	UPackage* Z_Construct_UPackage__Script_LevelSnapshots();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentSnapshotData;
class UScriptStruct* FComponentSnapshotData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentSnapshotData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentSnapshotData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentSnapshotData, (UObject*)Z_Construct_UPackage__Script_LevelSnapshots(), TEXT("ComponentSnapshotData"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentSnapshotData.OuterSingleton;
}
template<> LEVELSNAPSHOTS_API UScriptStruct* StaticStruct<FComponentSnapshotData>()
{
	return FComponentSnapshotData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComponentSnapshotData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_CreationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CreationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CreationMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSnapshotData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/ComponentSnapshotData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentSnapshotData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentSnapshotData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComponentSnapshotData_Statics::NewProp_CreationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSnapshotData_Statics::NewProp_CreationMethod_MetaData[] = {
		{ "Comment", "/** Describes how the component was created */" },
		{ "ModuleRelativePath", "Public/Data/ComponentSnapshotData.h" },
		{ "ToolTip", "Describes how the component was created" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComponentSnapshotData_Statics::NewProp_CreationMethod = { "CreationMethod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FComponentSnapshotData, CreationMethod), Z_Construct_UEnum_Engine_EComponentCreationMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentSnapshotData_Statics::NewProp_CreationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSnapshotData_Statics::NewProp_CreationMethod_MetaData)) }; // 609420841
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentSnapshotData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSnapshotData_Statics::NewProp_CreationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentSnapshotData_Statics::NewProp_CreationMethod,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentSnapshotData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSnapshots,
		nullptr,
		&NewStructOps,
		"ComponentSnapshotData",
		sizeof(FComponentSnapshotData),
		alignof(FComponentSnapshotData),
		Z_Construct_UScriptStruct_FComponentSnapshotData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSnapshotData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentSnapshotData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSnapshotData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentSnapshotData()
	{
		if (!Z_Registration_Info_UScriptStruct_ComponentSnapshotData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentSnapshotData.InnerSingleton, Z_Construct_UScriptStruct_FComponentSnapshotData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComponentSnapshotData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ComponentSnapshotData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ComponentSnapshotData_h_Statics::ScriptStructInfo[] = {
		{ FComponentSnapshotData::StaticStruct, Z_Construct_UScriptStruct_FComponentSnapshotData_Statics::NewStructOps, TEXT("ComponentSnapshotData"), &Z_Registration_Info_UScriptStruct_ComponentSnapshotData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentSnapshotData), 3256671777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ComponentSnapshotData_h_97755629(TEXT("/Script/LevelSnapshots"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ComponentSnapshotData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_LevelSnapshots_Source_LevelSnapshots_Public_Data_ComponentSnapshotData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
