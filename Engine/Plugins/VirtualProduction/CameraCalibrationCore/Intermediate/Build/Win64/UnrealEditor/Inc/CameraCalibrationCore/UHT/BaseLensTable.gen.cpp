// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tables/BaseLensTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseLensTable() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_ULensFile_NoRegister();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseFocusPoint();
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseLensTable();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BaseFocusPoint;
class UScriptStruct* FBaseFocusPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BaseFocusPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BaseFocusPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseFocusPoint, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("BaseFocusPoint"));
	}
	return Z_Registration_Info_UScriptStruct_BaseFocusPoint.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FBaseFocusPoint>()
{
	return FBaseFocusPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBaseFocusPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseFocusPoint_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base focus point struct\n */" },
		{ "ModuleRelativePath", "Public/Tables/BaseLensTable.h" },
		{ "ToolTip", "Base focus point struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseFocusPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseFocusPoint>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseFocusPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"BaseFocusPoint",
		sizeof(FBaseFocusPoint),
		alignof(FBaseFocusPoint),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseFocusPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseFocusPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseFocusPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_BaseFocusPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BaseFocusPoint.InnerSingleton, Z_Construct_UScriptStruct_FBaseFocusPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BaseFocusPoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BaseLensTable;
class UScriptStruct* FBaseLensTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BaseLensTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BaseLensTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseLensTable, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("BaseLensTable"));
	}
	return Z_Registration_Info_UScriptStruct_BaseLensTable.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FBaseLensTable>()
{
	return FBaseLensTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBaseLensTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LensFile_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LensFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseLensTable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base data table struct\n */" },
		{ "ModuleRelativePath", "Public/Tables/BaseLensTable.h" },
		{ "ToolTip", "Base data table struct" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseLensTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseLensTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseLensTable_Statics::NewProp_LensFile_MetaData[] = {
		{ "Comment", "/**\n\x09 * Lens file owner reference\n\x09 */" },
		{ "ModuleRelativePath", "Public/Tables/BaseLensTable.h" },
		{ "ToolTip", "Lens file owner reference" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FBaseLensTable_Statics::NewProp_LensFile = { "LensFile", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBaseLensTable, LensFile), Z_Construct_UClass_ULensFile_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseLensTable_Statics::NewProp_LensFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseLensTable_Statics::NewProp_LensFile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseLensTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseLensTable_Statics::NewProp_LensFile,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseLensTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"BaseLensTable",
		sizeof(FBaseLensTable),
		alignof(FBaseLensTable),
		Z_Construct_UScriptStruct_FBaseLensTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseLensTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseLensTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseLensTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseLensTable()
	{
		if (!Z_Registration_Info_UScriptStruct_BaseLensTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BaseLensTable.InnerSingleton, Z_Construct_UScriptStruct_FBaseLensTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BaseLensTable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_BaseLensTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_BaseLensTable_h_Statics::ScriptStructInfo[] = {
		{ FBaseFocusPoint::StaticStruct, Z_Construct_UScriptStruct_FBaseFocusPoint_Statics::NewStructOps, TEXT("BaseFocusPoint"), &Z_Registration_Info_UScriptStruct_BaseFocusPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBaseFocusPoint), 2221788746U) },
		{ FBaseLensTable::StaticStruct, Z_Construct_UScriptStruct_FBaseLensTable_Statics::NewStructOps, TEXT("BaseLensTable"), &Z_Registration_Info_UScriptStruct_BaseLensTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBaseLensTable), 2981255741U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_BaseLensTable_h_932936340(TEXT("/Script/CameraCalibrationCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_BaseLensTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_BaseLensTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
