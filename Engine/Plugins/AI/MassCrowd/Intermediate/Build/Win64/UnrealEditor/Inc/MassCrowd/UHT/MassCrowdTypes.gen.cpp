// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MassCrowd/Source/MassCrowd/Public/MassCrowdTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassCrowdTypes() {}
// Cross Module References
	MASSCROWD_API UEnum* Z_Construct_UEnum_MassCrowd_ECrowdLaneState();
	MASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdBranchingLaneData();
	MASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdTrackingLaneData();
	MASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdWaitAreaData();
	MASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FCrowdWaitSlot();
	MASSCROWD_API UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphCrowdLaneData();
	UPackage* Z_Construct_UPackage__Script_MassCrowd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECrowdLaneState;
	static UEnum* ECrowdLaneState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECrowdLaneState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECrowdLaneState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassCrowd_ECrowdLaneState, (UObject*)Z_Construct_UPackage__Script_MassCrowd(), TEXT("ECrowdLaneState"));
		}
		return Z_Registration_Info_UEnum_ECrowdLaneState.OuterSingleton;
	}
	template<> MASSCROWD_API UEnum* StaticEnum<ECrowdLaneState>()
	{
		return ECrowdLaneState_StaticEnum();
	}
	struct Z_Construct_UEnum_MassCrowd_ECrowdLaneState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassCrowd_ECrowdLaneState_Statics::Enumerators[] = {
		{ "ECrowdLaneState::Opened", (int64)ECrowdLaneState::Opened },
		{ "ECrowdLaneState::Closed", (int64)ECrowdLaneState::Closed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassCrowd_ECrowdLaneState_Statics::Enum_MetaDataParams[] = {
		{ "Closed.Comment", "// Pedestrians can enter the lane\n" },
		{ "Closed.Name", "ECrowdLaneState::Closed" },
		{ "Closed.ToolTip", "Pedestrians can enter the lane" },
		{ "Comment", "/** State of a given lane */" },
		{ "ModuleRelativePath", "Public/MassCrowdTypes.h" },
		{ "Opened.Name", "ECrowdLaneState::Opened" },
		{ "ToolTip", "State of a given lane" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassCrowd_ECrowdLaneState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassCrowd,
		nullptr,
		"ECrowdLaneState",
		"ECrowdLaneState",
		Z_Construct_UEnum_MassCrowd_ECrowdLaneState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassCrowd_ECrowdLaneState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MassCrowd_ECrowdLaneState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MassCrowd_ECrowdLaneState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MassCrowd_ECrowdLaneState()
	{
		if (!Z_Registration_Info_UEnum_ECrowdLaneState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECrowdLaneState.InnerSingleton, Z_Construct_UEnum_MassCrowd_ECrowdLaneState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECrowdLaneState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdTrackingLaneData;
class UScriptStruct* FCrowdTrackingLaneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdTrackingLaneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdTrackingLaneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdTrackingLaneData, (UObject*)Z_Construct_UPackage__Script_MassCrowd(), TEXT("CrowdTrackingLaneData"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdTrackingLaneData.OuterSingleton;
}
template<> MASSCROWD_API UScriptStruct* StaticStruct<FCrowdTrackingLaneData>()
{
	return FCrowdTrackingLaneData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCrowdTrackingLaneData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdTrackingLaneData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Runtime data associated to lane that can be used to track count of entities on it. */" },
		{ "ModuleRelativePath", "Public/MassCrowdTypes.h" },
		{ "ToolTip", "Runtime data associated to lane that can be used to track count of entities on it." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrowdTrackingLaneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdTrackingLaneData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdTrackingLaneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
		nullptr,
		&NewStructOps,
		"CrowdTrackingLaneData",
		sizeof(FCrowdTrackingLaneData),
		alignof(FCrowdTrackingLaneData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdTrackingLaneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdTrackingLaneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdTrackingLaneData()
	{
		if (!Z_Registration_Info_UScriptStruct_CrowdTrackingLaneData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdTrackingLaneData.InnerSingleton, Z_Construct_UScriptStruct_FCrowdTrackingLaneData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CrowdTrackingLaneData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdWaitSlot;
class UScriptStruct* FCrowdWaitSlot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdWaitSlot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdWaitSlot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdWaitSlot, (UObject*)Z_Construct_UPackage__Script_MassCrowd(), TEXT("CrowdWaitSlot"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdWaitSlot.OuterSingleton;
}
template<> MASSCROWD_API UScriptStruct* StaticStruct<FCrowdWaitSlot>()
{
	return FCrowdWaitSlot::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCrowdWaitSlot_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdWaitSlot_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Runtime data associated to lane that can be used to wait another one to open. */" },
		{ "ModuleRelativePath", "Public/MassCrowdTypes.h" },
		{ "ToolTip", "Runtime data associated to lane that can be used to wait another one to open." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrowdWaitSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdWaitSlot>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdWaitSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
		nullptr,
		&NewStructOps,
		"CrowdWaitSlot",
		sizeof(FCrowdWaitSlot),
		alignof(FCrowdWaitSlot),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdWaitSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdWaitSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdWaitSlot()
	{
		if (!Z_Registration_Info_UScriptStruct_CrowdWaitSlot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdWaitSlot.InnerSingleton, Z_Construct_UScriptStruct_FCrowdWaitSlot_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CrowdWaitSlot.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdWaitAreaData;
class UScriptStruct* FCrowdWaitAreaData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdWaitAreaData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdWaitAreaData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdWaitAreaData, (UObject*)Z_Construct_UPackage__Script_MassCrowd(), TEXT("CrowdWaitAreaData"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdWaitAreaData.OuterSingleton;
}
template<> MASSCROWD_API UScriptStruct* StaticStruct<FCrowdWaitAreaData>()
{
	return FCrowdWaitAreaData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCrowdWaitAreaData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdWaitAreaData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Runtime data associated to entry to a lane that can be opened or closed. */" },
		{ "ModuleRelativePath", "Public/MassCrowdTypes.h" },
		{ "ToolTip", "Runtime data associated to entry to a lane that can be opened or closed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrowdWaitAreaData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdWaitAreaData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdWaitAreaData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
		nullptr,
		&NewStructOps,
		"CrowdWaitAreaData",
		sizeof(FCrowdWaitAreaData),
		alignof(FCrowdWaitAreaData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdWaitAreaData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdWaitAreaData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdWaitAreaData()
	{
		if (!Z_Registration_Info_UScriptStruct_CrowdWaitAreaData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdWaitAreaData.InnerSingleton, Z_Construct_UScriptStruct_FCrowdWaitAreaData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CrowdWaitAreaData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CrowdBranchingLaneData;
class UScriptStruct* FCrowdBranchingLaneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CrowdBranchingLaneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CrowdBranchingLaneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCrowdBranchingLaneData, (UObject*)Z_Construct_UPackage__Script_MassCrowd(), TEXT("CrowdBranchingLaneData"));
	}
	return Z_Registration_Info_UScriptStruct_CrowdBranchingLaneData.OuterSingleton;
}
template<> MASSCROWD_API UScriptStruct* StaticStruct<FCrowdBranchingLaneData>()
{
	return FCrowdBranchingLaneData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCrowdBranchingLaneData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCrowdBranchingLaneData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Runtime data associated to branching. */" },
		{ "ModuleRelativePath", "Public/MassCrowdTypes.h" },
		{ "ToolTip", "Runtime data associated to branching." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCrowdBranchingLaneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCrowdBranchingLaneData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCrowdBranchingLaneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
		nullptr,
		&NewStructOps,
		"CrowdBranchingLaneData",
		sizeof(FCrowdBranchingLaneData),
		alignof(FCrowdBranchingLaneData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCrowdBranchingLaneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCrowdBranchingLaneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCrowdBranchingLaneData()
	{
		if (!Z_Registration_Info_UScriptStruct_CrowdBranchingLaneData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CrowdBranchingLaneData.InnerSingleton, Z_Construct_UScriptStruct_FCrowdBranchingLaneData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CrowdBranchingLaneData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ZoneGraphCrowdLaneData;
class UScriptStruct* FZoneGraphCrowdLaneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ZoneGraphCrowdLaneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ZoneGraphCrowdLaneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FZoneGraphCrowdLaneData, (UObject*)Z_Construct_UPackage__Script_MassCrowd(), TEXT("ZoneGraphCrowdLaneData"));
	}
	return Z_Registration_Info_UScriptStruct_ZoneGraphCrowdLaneData.OuterSingleton;
}
template<> MASSCROWD_API UScriptStruct* StaticStruct<FZoneGraphCrowdLaneData>()
{
	return FZoneGraphCrowdLaneData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FZoneGraphCrowdLaneData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FZoneGraphCrowdLaneData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure holding runtime data associated to a zone graph lane to handle pedestrian navigation. */" },
		{ "ModuleRelativePath", "Public/MassCrowdTypes.h" },
		{ "ToolTip", "Structure holding runtime data associated to a zone graph lane to handle pedestrian navigation." },
	};
#endif
	void* Z_Construct_UScriptStruct_FZoneGraphCrowdLaneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FZoneGraphCrowdLaneData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FZoneGraphCrowdLaneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassCrowd,
		nullptr,
		&NewStructOps,
		"ZoneGraphCrowdLaneData",
		sizeof(FZoneGraphCrowdLaneData),
		alignof(FZoneGraphCrowdLaneData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FZoneGraphCrowdLaneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FZoneGraphCrowdLaneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FZoneGraphCrowdLaneData()
	{
		if (!Z_Registration_Info_UScriptStruct_ZoneGraphCrowdLaneData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ZoneGraphCrowdLaneData.InnerSingleton, Z_Construct_UScriptStruct_FZoneGraphCrowdLaneData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ZoneGraphCrowdLaneData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h_Statics::EnumInfo[] = {
		{ ECrowdLaneState_StaticEnum, TEXT("ECrowdLaneState"), &Z_Registration_Info_UEnum_ECrowdLaneState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 654836309U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h_Statics::ScriptStructInfo[] = {
		{ FCrowdTrackingLaneData::StaticStruct, Z_Construct_UScriptStruct_FCrowdTrackingLaneData_Statics::NewStructOps, TEXT("CrowdTrackingLaneData"), &Z_Registration_Info_UScriptStruct_CrowdTrackingLaneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdTrackingLaneData), 13282381U) },
		{ FCrowdWaitSlot::StaticStruct, Z_Construct_UScriptStruct_FCrowdWaitSlot_Statics::NewStructOps, TEXT("CrowdWaitSlot"), &Z_Registration_Info_UScriptStruct_CrowdWaitSlot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdWaitSlot), 2524375891U) },
		{ FCrowdWaitAreaData::StaticStruct, Z_Construct_UScriptStruct_FCrowdWaitAreaData_Statics::NewStructOps, TEXT("CrowdWaitAreaData"), &Z_Registration_Info_UScriptStruct_CrowdWaitAreaData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdWaitAreaData), 1587050086U) },
		{ FCrowdBranchingLaneData::StaticStruct, Z_Construct_UScriptStruct_FCrowdBranchingLaneData_Statics::NewStructOps, TEXT("CrowdBranchingLaneData"), &Z_Registration_Info_UScriptStruct_CrowdBranchingLaneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCrowdBranchingLaneData), 3911957871U) },
		{ FZoneGraphCrowdLaneData::StaticStruct, Z_Construct_UScriptStruct_FZoneGraphCrowdLaneData_Statics::NewStructOps, TEXT("ZoneGraphCrowdLaneData"), &Z_Registration_Info_UScriptStruct_ZoneGraphCrowdLaneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FZoneGraphCrowdLaneData), 535132802U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h_2658452633(TEXT("/Script/MassCrowd"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MassCrowd_Source_MassCrowd_Public_MassCrowdTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
