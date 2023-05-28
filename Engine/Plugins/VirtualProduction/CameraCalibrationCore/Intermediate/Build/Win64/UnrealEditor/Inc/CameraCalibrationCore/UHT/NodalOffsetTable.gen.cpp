// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tables/NodalOffsetTable.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodalOffsetTable() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseFocusPoint();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseLensTable();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodalOffsetFocusPoint();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodalOffsetTable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References

static_assert(std::is_polymorphic<FNodalOffsetFocusPoint>() == std::is_polymorphic<FBaseFocusPoint>(), "USTRUCT FNodalOffsetFocusPoint cannot be polymorphic unless super FBaseFocusPoint is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodalOffsetFocusPoint;
class UScriptStruct* FNodalOffsetFocusPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodalOffsetFocusPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodalOffsetFocusPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodalOffsetFocusPoint, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("NodalOffsetFocusPoint"));
	}
	return Z_Registration_Info_UScriptStruct_NodalOffsetFocusPoint.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FNodalOffsetFocusPoint>()
{
	return FNodalOffsetFocusPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Focus_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Focus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Focus point for nodal offset curves\n */" },
		{ "ModuleRelativePath", "Public/Tables/NodalOffsetTable.h" },
		{ "ToolTip", "Focus point for nodal offset curves" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodalOffsetFocusPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::NewProp_Focus_MetaData[] = {
		{ "Comment", "/** Input focus for this point */" },
		{ "ModuleRelativePath", "Public/Tables/NodalOffsetTable.h" },
		{ "ToolTip", "Input focus for this point" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::NewProp_Focus = { "Focus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetFocusPoint, Focus), METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::NewProp_Focus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::NewProp_Focus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Comment", "/** XYZ offsets curves mapped to zoom */" },
		{ "ModuleRelativePath", "Public/Tables/NodalOffsetTable.h" },
		{ "ToolTip", "XYZ offsets curves mapped to zoom" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LocationOffset, FNodalOffsetFocusPoint), nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetFocusPoint, LocationOffset), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::NewProp_LocationOffset_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Comment", "/** Yaw, Pitch and Roll offset curves mapped to zoom */" },
		{ "ModuleRelativePath", "Public/Tables/NodalOffsetTable.h" },
		{ "ToolTip", "Yaw, Pitch and Roll offset curves mapped to zoom" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(RotationOffset, FNodalOffsetFocusPoint), nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetFocusPoint, RotationOffset), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::NewProp_RotationOffset_MetaData)) }; // 778017158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::NewProp_Focus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::NewProp_LocationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::NewProp_RotationOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		Z_Construct_UScriptStruct_FBaseFocusPoint,
		&NewStructOps,
		"NodalOffsetFocusPoint",
		sizeof(FNodalOffsetFocusPoint),
		alignof(FNodalOffsetFocusPoint),
		Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodalOffsetFocusPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_NodalOffsetFocusPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodalOffsetFocusPoint.InnerSingleton, Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodalOffsetFocusPoint.InnerSingleton;
	}

static_assert(std::is_polymorphic<FNodalOffsetTable>() == std::is_polymorphic<FBaseLensTable>(), "USTRUCT FNodalOffsetTable cannot be polymorphic unless super FBaseLensTable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodalOffsetTable;
class UScriptStruct* FNodalOffsetTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodalOffsetTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodalOffsetTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodalOffsetTable, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("NodalOffsetTable"));
	}
	return Z_Registration_Info_UScriptStruct_NodalOffsetTable.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FNodalOffsetTable>()
{
	return FNodalOffsetTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodalOffsetTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_FocusPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FocusPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FocusPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetTable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Table containing nodal offset mapping to focus and zoom\n */" },
		{ "ModuleRelativePath", "Public/Tables/NodalOffsetTable.h" },
		{ "ToolTip", "Table containing nodal offset mapping to focus and zoom" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodalOffsetTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodalOffsetTable>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodalOffsetTable_Statics::NewProp_FocusPoints_Inner = { "FocusPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNodalOffsetFocusPoint, METADATA_PARAMS(nullptr, 0) }; // 2616862764
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodalOffsetTable_Statics::NewProp_FocusPoints_MetaData[] = {
		{ "Comment", "/** Lists of focus points */" },
		{ "ModuleRelativePath", "Public/Tables/NodalOffsetTable.h" },
		{ "ToolTip", "Lists of focus points" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNodalOffsetTable_Statics::NewProp_FocusPoints = { "FocusPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodalOffsetTable, FocusPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetTable_Statics::NewProp_FocusPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetTable_Statics::NewProp_FocusPoints_MetaData)) }; // 2616862764
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodalOffsetTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetTable_Statics::NewProp_FocusPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodalOffsetTable_Statics::NewProp_FocusPoints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodalOffsetTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		Z_Construct_UScriptStruct_FBaseLensTable,
		&NewStructOps,
		"NodalOffsetTable",
		sizeof(FNodalOffsetTable),
		alignof(FNodalOffsetTable),
		Z_Construct_UScriptStruct_FNodalOffsetTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodalOffsetTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodalOffsetTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodalOffsetTable()
	{
		if (!Z_Registration_Info_UScriptStruct_NodalOffsetTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodalOffsetTable.InnerSingleton, Z_Construct_UScriptStruct_FNodalOffsetTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodalOffsetTable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_NodalOffsetTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_NodalOffsetTable_h_Statics::ScriptStructInfo[] = {
		{ FNodalOffsetFocusPoint::StaticStruct, Z_Construct_UScriptStruct_FNodalOffsetFocusPoint_Statics::NewStructOps, TEXT("NodalOffsetFocusPoint"), &Z_Registration_Info_UScriptStruct_NodalOffsetFocusPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodalOffsetFocusPoint), 2616862764U) },
		{ FNodalOffsetTable::StaticStruct, Z_Construct_UScriptStruct_FNodalOffsetTable_Statics::NewStructOps, TEXT("NodalOffsetTable"), &Z_Registration_Info_UScriptStruct_NodalOffsetTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodalOffsetTable), 2182329906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_NodalOffsetTable_h_3344367951(TEXT("/Script/CameraCalibrationCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_NodalOffsetTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_NodalOffsetTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
