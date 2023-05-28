// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollection/GeometryCollectionDamagePropagationData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionDamagePropagationData() {}
// Cross Module References
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionDamagePropagationData;
class UScriptStruct* FGeometryCollectionDamagePropagationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionDamagePropagationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionDamagePropagationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionDamagePropagationData"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionDamagePropagationData.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionDamagePropagationData>()
{
	return FGeometryCollectionDamagePropagationData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BreakDamagePropagationFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BreakDamagePropagationFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShockDamagePropagationFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ShockDamagePropagationFactor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDamagePropagationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionDamagePropagationData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Damage Propagation" },
		{ "Comment", "/** Whether or not damage propagation is enabled. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDamagePropagationData.h" },
		{ "ToolTip", "Whether or not damage propagation is enabled." },
	};
#endif
	void Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FGeometryCollectionDamagePropagationData*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGeometryCollectionDamagePropagationData), &Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_BreakDamagePropagationFactor_MetaData[] = {
		{ "Category", "Damage Propagation" },
		{ "Comment", "/** factor of the remaining strain propagated through the connection graph after a piece breaks. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDamagePropagationData.h" },
		{ "ToolTip", "factor of the remaining strain propagated through the connection graph after a piece breaks." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_BreakDamagePropagationFactor = { "BreakDamagePropagationFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionDamagePropagationData, BreakDamagePropagationFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_BreakDamagePropagationFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_BreakDamagePropagationFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_ShockDamagePropagationFactor_MetaData[] = {
		{ "Category", "Damage Propagation" },
		{ "Comment", "/** factor of the received strain propagated throug the connection graph if the piece did not break. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDamagePropagationData.h" },
		{ "ToolTip", "factor of the received strain propagated throug the connection graph if the piece did not break." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_ShockDamagePropagationFactor = { "ShockDamagePropagationFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionDamagePropagationData, ShockDamagePropagationFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_ShockDamagePropagationFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_ShockDamagePropagationFactor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_BreakDamagePropagationFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewProp_ShockDamagePropagationFactor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"GeometryCollectionDamagePropagationData",
		sizeof(FGeometryCollectionDamagePropagationData),
		alignof(FGeometryCollectionDamagePropagationData),
		Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryCollectionDamagePropagationData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionDamagePropagationData.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryCollectionDamagePropagationData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDamagePropagationData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDamagePropagationData_h_Statics::ScriptStructInfo[] = {
		{ FGeometryCollectionDamagePropagationData::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionDamagePropagationData_Statics::NewStructOps, TEXT("GeometryCollectionDamagePropagationData"), &Z_Registration_Info_UScriptStruct_GeometryCollectionDamagePropagationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionDamagePropagationData), 3866457733U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDamagePropagationData_h_3558175675(TEXT("/Script/GeometryCollectionEngine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDamagePropagationData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDamagePropagationData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
