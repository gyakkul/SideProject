// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/WorldPartitionRuntimeSpatialHashGridPreviewer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPartitionRuntimeSpatialHashGridPreviewer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeSpatialHashGridPreviewer;
class UScriptStruct* FWorldPartitionRuntimeSpatialHashGridPreviewer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeSpatialHashGridPreviewer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeSpatialHashGridPreviewer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("WorldPartitionRuntimeSpatialHashGridPreviewer"));
	}
	return Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeSpatialHashGridPreviewer.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FWorldPartitionRuntimeSpatialHashGridPreviewer>()
{
	return FWorldPartitionRuntimeSpatialHashGridPreviewer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHashGridPreviewer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWorldPartitionRuntimeSpatialHashGridPreviewer>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_Material_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHashGridPreviewer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldPartitionRuntimeSpatialHashGridPreviewer, Material), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_MID_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHashGridPreviewer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldPartitionRuntimeSpatialHashGridPreviewer, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_MID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_MID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_Volume_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/WorldPartitionRuntimeSpatialHashGridPreviewer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWorldPartitionRuntimeSpatialHashGridPreviewer, Volume), Z_Construct_UClass_APostProcessVolume_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_Volume_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_Volume_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_MID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewProp_Volume,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"WorldPartitionRuntimeSpatialHashGridPreviewer",
		sizeof(FWorldPartitionRuntimeSpatialHashGridPreviewer),
		alignof(FWorldPartitionRuntimeSpatialHashGridPreviewer),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer()
	{
		if (!Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeSpatialHashGridPreviewer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeSpatialHashGridPreviewer.InnerSingleton, Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeSpatialHashGridPreviewer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHashGridPreviewer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHashGridPreviewer_h_Statics::ScriptStructInfo[] = {
		{ FWorldPartitionRuntimeSpatialHashGridPreviewer::StaticStruct, Z_Construct_UScriptStruct_FWorldPartitionRuntimeSpatialHashGridPreviewer_Statics::NewStructOps, TEXT("WorldPartitionRuntimeSpatialHashGridPreviewer"), &Z_Registration_Info_UScriptStruct_WorldPartitionRuntimeSpatialHashGridPreviewer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWorldPartitionRuntimeSpatialHashGridPreviewer), 1130475674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHashGridPreviewer_h_766004052(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHashGridPreviewer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_WorldPartitionRuntimeSpatialHashGridPreviewer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
