// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tables/ImageCenterTable.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImageCenterTable() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseFocusPoint();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseLensTable();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FImageCenterFocusPoint();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FImageCenterTable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References

static_assert(std::is_polymorphic<FImageCenterFocusPoint>() == std::is_polymorphic<FBaseFocusPoint>(), "USTRUCT FImageCenterFocusPoint cannot be polymorphic unless super FBaseFocusPoint is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImageCenterFocusPoint;
class UScriptStruct* FImageCenterFocusPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImageCenterFocusPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImageCenterFocusPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageCenterFocusPoint, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("ImageCenterFocusPoint"));
	}
	return Z_Registration_Info_UScriptStruct_ImageCenterFocusPoint.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FImageCenterFocusPoint>()
{
	return FImageCenterFocusPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cx_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cx;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * ImageCenter focus point containing curves for CxCy \n */" },
		{ "ModuleRelativePath", "Public/Tables/ImageCenterTable.h" },
		{ "ToolTip", "ImageCenter focus point containing curves for CxCy" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageCenterFocusPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::NewProp_Focus_MetaData[] = {
		{ "Comment", "/** Focus value of this point */" },
		{ "ModuleRelativePath", "Public/Tables/ImageCenterTable.h" },
		{ "ToolTip", "Focus value of this point" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::NewProp_Focus = { "Focus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImageCenterFocusPoint, Focus), METADATA_PARAMS(Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::NewProp_Focus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::NewProp_Focus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::NewProp_Cx_MetaData[] = {
		{ "Comment", "/** Curves representing normalized Cx over zoom */" },
		{ "ModuleRelativePath", "Public/Tables/ImageCenterTable.h" },
		{ "ToolTip", "Curves representing normalized Cx over zoom" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::NewProp_Cx = { "Cx", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImageCenterFocusPoint, Cx), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::NewProp_Cx_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::NewProp_Cx_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::NewProp_Cy_MetaData[] = {
		{ "Comment", "/** Curves representing normalized Cy over zoom */" },
		{ "ModuleRelativePath", "Public/Tables/ImageCenterTable.h" },
		{ "ToolTip", "Curves representing normalized Cy over zoom" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::NewProp_Cy = { "Cy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImageCenterFocusPoint, Cy), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::NewProp_Cy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::NewProp_Cy_MetaData)) }; // 778017158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::NewProp_Focus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::NewProp_Cx,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::NewProp_Cy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		Z_Construct_UScriptStruct_FBaseFocusPoint,
		&NewStructOps,
		"ImageCenterFocusPoint",
		sizeof(FImageCenterFocusPoint),
		alignof(FImageCenterFocusPoint),
		Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImageCenterFocusPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_ImageCenterFocusPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImageCenterFocusPoint.InnerSingleton, Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImageCenterFocusPoint.InnerSingleton;
	}

static_assert(std::is_polymorphic<FImageCenterTable>() == std::is_polymorphic<FBaseLensTable>(), "USTRUCT FImageCenterTable cannot be polymorphic unless super FBaseLensTable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImageCenterTable;
class UScriptStruct* FImageCenterTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImageCenterTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImageCenterTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImageCenterTable, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("ImageCenterTable"));
	}
	return Z_Registration_Info_UScriptStruct_ImageCenterTable.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FImageCenterTable>()
{
	return FImageCenterTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImageCenterTable_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageCenterTable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Image Center table associating CxCy values to focus and zoom\n */" },
		{ "ModuleRelativePath", "Public/Tables/ImageCenterTable.h" },
		{ "ToolTip", "Image Center table associating CxCy values to focus and zoom" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImageCenterTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImageCenterTable>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FImageCenterTable_Statics::NewProp_FocusPoints_Inner = { "FocusPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FImageCenterFocusPoint, METADATA_PARAMS(nullptr, 0) }; // 3724858127
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImageCenterTable_Statics::NewProp_FocusPoints_MetaData[] = {
		{ "Comment", "/** Lists of focus points */" },
		{ "ModuleRelativePath", "Public/Tables/ImageCenterTable.h" },
		{ "ToolTip", "Lists of focus points" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FImageCenterTable_Statics::NewProp_FocusPoints = { "FocusPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImageCenterTable, FocusPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FImageCenterTable_Statics::NewProp_FocusPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageCenterTable_Statics::NewProp_FocusPoints_MetaData)) }; // 3724858127
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImageCenterTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageCenterTable_Statics::NewProp_FocusPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImageCenterTable_Statics::NewProp_FocusPoints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImageCenterTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		Z_Construct_UScriptStruct_FBaseLensTable,
		&NewStructOps,
		"ImageCenterTable",
		sizeof(FImageCenterTable),
		alignof(FImageCenterTable),
		Z_Construct_UScriptStruct_FImageCenterTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageCenterTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImageCenterTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImageCenterTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImageCenterTable()
	{
		if (!Z_Registration_Info_UScriptStruct_ImageCenterTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImageCenterTable.InnerSingleton, Z_Construct_UScriptStruct_FImageCenterTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImageCenterTable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_ImageCenterTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_ImageCenterTable_h_Statics::ScriptStructInfo[] = {
		{ FImageCenterFocusPoint::StaticStruct, Z_Construct_UScriptStruct_FImageCenterFocusPoint_Statics::NewStructOps, TEXT("ImageCenterFocusPoint"), &Z_Registration_Info_UScriptStruct_ImageCenterFocusPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImageCenterFocusPoint), 3724858127U) },
		{ FImageCenterTable::StaticStruct, Z_Construct_UScriptStruct_FImageCenterTable_Statics::NewStructOps, TEXT("ImageCenterTable"), &Z_Registration_Info_UScriptStruct_ImageCenterTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImageCenterTable), 4078964539U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_ImageCenterTable_h_220904304(TEXT("/Script/CameraCalibrationCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_ImageCenterTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_ImageCenterTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
