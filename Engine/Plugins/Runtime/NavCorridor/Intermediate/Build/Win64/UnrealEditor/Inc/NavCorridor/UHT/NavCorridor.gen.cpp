// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavCorridor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavCorridor() {}
// Cross Module References
	NAVCORRIDOR_API UScriptStruct* Z_Construct_UScriptStruct_FNavCorridorParams();
	UPackage* Z_Construct_UPackage__Script_NavCorridor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavCorridorParams;
class UScriptStruct* FNavCorridorParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavCorridorParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavCorridorParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavCorridorParams, (UObject*)Z_Construct_UPackage__Script_NavCorridor(), TEXT("NavCorridorParams"));
	}
	return Z_Registration_Info_UScriptStruct_NavCorridorParams.OuterSingleton;
}
template<> NAVCORRIDOR_API UScriptStruct* StaticStruct<FNavCorridorParams>()
{
	return FNavCorridorParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNavCorridorParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObstacleTaperAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ObstacleTaperAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmallSectorThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmallSectorThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LargeSectorThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LargeSectorThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimplifyEdgeThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SimplifyEdgeThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimplifyFlipPortals_MetaData[];
#endif
		static void NewProp_bSimplifyFlipPortals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplifyFlipPortals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimplifyConvexPortals_MetaData[];
#endif
		static void NewProp_bSimplifyConvexPortals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplifyConvexPortals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimplifyConcavePortals_MetaData[];
#endif
		static void NewProp_bSimplifyConcavePortals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimplifyConcavePortals;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavCorridorParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NavCorridor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavCorridorParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ClampMin", "10.0" },
		{ "Comment", "/** Width of the corridor to build */" },
		{ "ModuleRelativePath", "Public/NavCorridor.h" },
		{ "ToolTip", "Width of the corridor to build" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavCorridorParams, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_ObstacleTaperAngle_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ClampMax", "45.0" },
		{ "ClampMin", "10.0" },
		{ "Comment", "/** How much the outer edges of obstacles are tapered out. This prevents small sectors and local traps.  */" },
		{ "ModuleRelativePath", "Public/NavCorridor.h" },
		{ "ToolTip", "How much the outer edges of obstacles are tapered out. This prevents small sectors and local traps." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_ObstacleTaperAngle = { "ObstacleTaperAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavCorridorParams, ObstacleTaperAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_ObstacleTaperAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_ObstacleTaperAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_SmallSectorThreshold_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Attempt to remove sectors narrower than this from the corridor. */" },
		{ "ModuleRelativePath", "Public/NavCorridor.h" },
		{ "ToolTip", "Attempt to remove sectors narrower than this from the corridor." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_SmallSectorThreshold = { "SmallSectorThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavCorridorParams, SmallSectorThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_SmallSectorThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_SmallSectorThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_LargeSectorThreshold_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Simplification is skipped if two neighbour sectors combined are longer than this. This ensures that long sectors do not lose volume due to simplification. */" },
		{ "ModuleRelativePath", "Public/NavCorridor.h" },
		{ "ToolTip", "Simplification is skipped if two neighbour sectors combined are longer than this. This ensures that long sectors do not lose volume due to simplification." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_LargeSectorThreshold = { "LargeSectorThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavCorridorParams, LargeSectorThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_LargeSectorThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_LargeSectorThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_SimplifyEdgeThreshold_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Corridor edge max simplification distance. */" },
		{ "ModuleRelativePath", "Public/NavCorridor.h" },
		{ "ToolTip", "Corridor edge max simplification distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_SimplifyEdgeThreshold = { "SimplifyEdgeThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavCorridorParams, SimplifyEdgeThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_SimplifyEdgeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_SimplifyEdgeThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyFlipPortals_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** If true do flip portals simplification. */" },
		{ "ModuleRelativePath", "Public/NavCorridor.h" },
		{ "ToolTip", "If true do flip portals simplification." },
	};
#endif
	void Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyFlipPortals_SetBit(void* Obj)
	{
		((FNavCorridorParams*)Obj)->bSimplifyFlipPortals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyFlipPortals = { "bSimplifyFlipPortals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNavCorridorParams), &Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyFlipPortals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyFlipPortals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyFlipPortals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyConvexPortals_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** If true do convex portals simplification. */" },
		{ "ModuleRelativePath", "Public/NavCorridor.h" },
		{ "ToolTip", "If true do convex portals simplification." },
	};
#endif
	void Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyConvexPortals_SetBit(void* Obj)
	{
		((FNavCorridorParams*)Obj)->bSimplifyConvexPortals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyConvexPortals = { "bSimplifyConvexPortals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNavCorridorParams), &Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyConvexPortals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyConvexPortals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyConvexPortals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyConcavePortals_MetaData[] = {
		{ "Category", "Pathfinding" },
		{ "Comment", "/** If true do concave portals simplification. */" },
		{ "ModuleRelativePath", "Public/NavCorridor.h" },
		{ "ToolTip", "If true do concave portals simplification." },
	};
#endif
	void Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyConcavePortals_SetBit(void* Obj)
	{
		((FNavCorridorParams*)Obj)->bSimplifyConcavePortals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyConcavePortals = { "bSimplifyConcavePortals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNavCorridorParams), &Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyConcavePortals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyConcavePortals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyConcavePortals_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavCorridorParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_ObstacleTaperAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_SmallSectorThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_LargeSectorThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_SimplifyEdgeThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyFlipPortals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyConvexPortals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewProp_bSimplifyConcavePortals,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavCorridorParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NavCorridor,
		nullptr,
		&NewStructOps,
		"NavCorridorParams",
		sizeof(FNavCorridorParams),
		alignof(FNavCorridorParams),
		Z_Construct_UScriptStruct_FNavCorridorParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCorridorParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavCorridorParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavCorridorParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavCorridorParams()
	{
		if (!Z_Registration_Info_UScriptStruct_NavCorridorParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavCorridorParams.InnerSingleton, Z_Construct_UScriptStruct_FNavCorridorParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NavCorridorParams.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NavCorridor_Source_NavCorridor_Public_NavCorridor_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NavCorridor_Source_NavCorridor_Public_NavCorridor_h_Statics::ScriptStructInfo[] = {
		{ FNavCorridorParams::StaticStruct, Z_Construct_UScriptStruct_FNavCorridorParams_Statics::NewStructOps, TEXT("NavCorridorParams"), &Z_Registration_Info_UScriptStruct_NavCorridorParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavCorridorParams), 2363194505U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NavCorridor_Source_NavCorridor_Public_NavCorridor_h_3411005620(TEXT("/Script/NavCorridor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NavCorridor_Source_NavCorridor_Public_NavCorridor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_NavCorridor_Source_NavCorridor_Public_NavCorridor_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
