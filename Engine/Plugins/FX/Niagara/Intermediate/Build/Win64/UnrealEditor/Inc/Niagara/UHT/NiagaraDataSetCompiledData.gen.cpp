// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataSetCompiledData.h"
#include "../Public/NiagaraCommon.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataSetCompiledData() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSimTarget();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetID();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVariableLayoutInfo;
class UScriptStruct* FNiagaraVariableLayoutInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVariableLayoutInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVariableLayoutInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableLayoutInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVariableLayoutInfo.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableLayoutInfo>()
{
	return FNiagaraVariableLayoutInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatComponentStart_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_FloatComponentStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Int32ComponentStart_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Int32ComponentStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HalfComponentStart_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_HalfComponentStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayoutInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Helper class defining the layout and location of an FNiagaraVariable in an FNiagaraDataBuffer-> */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSetCompiledData.h" },
		{ "ToolTip", "Helper class defining the layout and location of an FNiagaraVariable in an FNiagaraDataBuffer->" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableLayoutInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_FloatComponentStart_MetaData[] = {
		{ "Comment", "/** Start index for the float components in the main buffer. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSetCompiledData.h" },
		{ "ToolTip", "Start index for the float components in the main buffer." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_FloatComponentStart = { "FloatComponentStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableLayoutInfo, FloatComponentStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_FloatComponentStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_FloatComponentStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_Int32ComponentStart_MetaData[] = {
		{ "Comment", "/** Start index for the int32 components in the main buffer. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSetCompiledData.h" },
		{ "ToolTip", "Start index for the int32 components in the main buffer." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_Int32ComponentStart = { "Int32ComponentStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableLayoutInfo, Int32ComponentStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_Int32ComponentStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_Int32ComponentStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_HalfComponentStart_MetaData[] = {
		{ "Comment", "/** Start index for the half components in the main buffer. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSetCompiledData.h" },
		{ "ToolTip", "Start index for the half components in the main buffer." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_HalfComponentStart = { "HalfComponentStart", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableLayoutInfo, HalfComponentStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_HalfComponentStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_HalfComponentStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_LayoutInfo_MetaData[] = {
		{ "Comment", "/** This variable's type layout info. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSetCompiledData.h" },
		{ "ToolTip", "This variable's type layout info." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_LayoutInfo = { "LayoutInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVariableLayoutInfo, LayoutInfo), Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_LayoutInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_LayoutInfo_MetaData)) }; // 1638943095
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_FloatComponentStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_Int32ComponentStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_HalfComponentStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_LayoutInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVariableLayoutInfo",
		sizeof(FNiagaraVariableLayoutInfo),
		alignof(FNiagaraVariableLayoutInfo),
		Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraVariableLayoutInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVariableLayoutInfo.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraVariableLayoutInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDataSetCompiledData;
class UScriptStruct* FNiagaraDataSetCompiledData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDataSetCompiledData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDataSetCompiledData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDataSetCompiledData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDataSetCompiledData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDataSetCompiledData>()
{
	return FNiagaraDataSetCompiledData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Variables;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariableLayouts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableLayouts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VariableLayouts;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalFloatComponents_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TotalFloatComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalInt32Components_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TotalInt32Components;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalHalfComponents_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_TotalHalfComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresPersistentIDs_MetaData[];
#endif
		static void NewProp_bRequiresPersistentIDs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresPersistentIDs;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimTarget_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimTarget_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SimTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataSetCompiledData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataSetCompiledData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_Variables_MetaData[] = {
		{ "Comment", "/** Variables in the data set. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSetCompiledData.h" },
		{ "ToolTip", "Variables in the data set." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataSetCompiledData, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_Variables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_Variables_MetaData)) }; // 2575088255
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_VariableLayouts_Inner = { "VariableLayouts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo, METADATA_PARAMS(nullptr, 0) }; // 2890437910
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_VariableLayouts_MetaData[] = {
		{ "Comment", "/** Data describing the layout of variable data. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSetCompiledData.h" },
		{ "ToolTip", "Data describing the layout of variable data." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_VariableLayouts = { "VariableLayouts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataSetCompiledData, VariableLayouts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_VariableLayouts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_VariableLayouts_MetaData)) }; // 2890437910
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_ID_MetaData[] = {
		{ "Comment", "/** Unique ID for this DataSet. Used to allow referencing from other emitters and Systems. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSetCompiledData.h" },
		{ "ToolTip", "Unique ID for this DataSet. Used to allow referencing from other emitters and Systems." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataSetCompiledData, ID), Z_Construct_UScriptStruct_FNiagaraDataSetID, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_ID_MetaData)) }; // 1812770562
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalFloatComponents_MetaData[] = {
		{ "Comment", "/** Total number of components of each type in the data set. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSetCompiledData.h" },
		{ "ToolTip", "Total number of components of each type in the data set." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalFloatComponents = { "TotalFloatComponents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataSetCompiledData, TotalFloatComponents), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalFloatComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalFloatComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalInt32Components_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataSetCompiledData.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalInt32Components = { "TotalInt32Components", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataSetCompiledData, TotalInt32Components), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalInt32Components_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalInt32Components_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalHalfComponents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataSetCompiledData.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalHalfComponents = { "TotalHalfComponents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataSetCompiledData, TotalHalfComponents), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalHalfComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalHalfComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_bRequiresPersistentIDs_MetaData[] = {
		{ "Comment", "/** Whether or not this dataset require persistent IDs. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSetCompiledData.h" },
		{ "ToolTip", "Whether or not this dataset require persistent IDs." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_bRequiresPersistentIDs_SetBit(void* Obj)
	{
		((FNiagaraDataSetCompiledData*)Obj)->bRequiresPersistentIDs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_bRequiresPersistentIDs = { "bRequiresPersistentIDs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraDataSetCompiledData), &Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_bRequiresPersistentIDs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_bRequiresPersistentIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_bRequiresPersistentIDs_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_SimTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_SimTarget_MetaData[] = {
		{ "Comment", "/** Sim target this DataSet is targeting (CPU/GPU). */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSetCompiledData.h" },
		{ "ToolTip", "Sim target this DataSet is targeting (CPU/GPU)." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_SimTarget = { "SimTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraDataSetCompiledData, SimTarget), Z_Construct_UEnum_Niagara_ENiagaraSimTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_SimTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_SimTarget_MetaData)) }; // 348263643
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_Variables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_Variables,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_VariableLayouts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_VariableLayouts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalFloatComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalInt32Components,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalHalfComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_bRequiresPersistentIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_SimTarget_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_SimTarget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDataSetCompiledData",
		sizeof(FNiagaraDataSetCompiledData),
		alignof(FNiagaraDataSetCompiledData),
		Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraDataSetCompiledData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDataSetCompiledData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraDataSetCompiledData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataSetCompiledData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataSetCompiledData_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraVariableLayoutInfo::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewStructOps, TEXT("NiagaraVariableLayoutInfo"), &Z_Registration_Info_UScriptStruct_NiagaraVariableLayoutInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVariableLayoutInfo), 2890437910U) },
		{ FNiagaraDataSetCompiledData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewStructOps, TEXT("NiagaraDataSetCompiledData"), &Z_Registration_Info_UScriptStruct_NiagaraDataSetCompiledData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDataSetCompiledData), 4253291051U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataSetCompiledData_h_3124596237(TEXT("/Script/Niagara"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataSetCompiledData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataSetCompiledData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
