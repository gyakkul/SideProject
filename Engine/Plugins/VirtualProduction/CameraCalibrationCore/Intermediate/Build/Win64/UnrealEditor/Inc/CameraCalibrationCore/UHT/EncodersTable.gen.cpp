// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tables/EncodersTable.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEncodersTable() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEncodersTable();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EncodersTable;
class UScriptStruct* FEncodersTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EncodersTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EncodersTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEncodersTable, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("EncodersTable"));
	}
	return Z_Registration_Info_UScriptStruct_EncodersTable.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FEncodersTable>()
{
	return FEncodersTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEncodersTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Focus_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Focus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Iris_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Iris;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodersTable_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Encoder table containing mapping from raw input value to nominal value\n */" },
		{ "ModuleRelativePath", "Public/Tables/EncodersTable.h" },
		{ "ToolTip", "Encoder table containing mapping from raw input value to nominal value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEncodersTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEncodersTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodersTable_Statics::NewProp_Focus_MetaData[] = {
		{ "Comment", "/** Focus curve from encoder values to nominal values */" },
		{ "ModuleRelativePath", "Public/Tables/EncodersTable.h" },
		{ "ToolTip", "Focus curve from encoder values to nominal values" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEncodersTable_Statics::NewProp_Focus = { "Focus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEncodersTable, Focus), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodersTable_Statics::NewProp_Focus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodersTable_Statics::NewProp_Focus_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncodersTable_Statics::NewProp_Iris_MetaData[] = {
		{ "Comment", "/** Iris curve from encoder values to nominal values */" },
		{ "ModuleRelativePath", "Public/Tables/EncodersTable.h" },
		{ "ToolTip", "Iris curve from encoder values to nominal values" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEncodersTable_Statics::NewProp_Iris = { "Iris", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEncodersTable, Iris), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodersTable_Statics::NewProp_Iris_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodersTable_Statics::NewProp_Iris_MetaData)) }; // 778017158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEncodersTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodersTable_Statics::NewProp_Focus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncodersTable_Statics::NewProp_Iris,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEncodersTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"EncodersTable",
		sizeof(FEncodersTable),
		alignof(FEncodersTable),
		Z_Construct_UScriptStruct_FEncodersTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodersTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEncodersTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncodersTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEncodersTable()
	{
		if (!Z_Registration_Info_UScriptStruct_EncodersTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EncodersTable.InnerSingleton, Z_Construct_UScriptStruct_FEncodersTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EncodersTable.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_EncodersTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_EncodersTable_h_Statics::ScriptStructInfo[] = {
		{ FEncodersTable::StaticStruct, Z_Construct_UScriptStruct_FEncodersTable_Statics::NewStructOps, TEXT("EncodersTable"), &Z_Registration_Info_UScriptStruct_EncodersTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEncodersTable), 3226447244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_EncodersTable_h_680131420(TEXT("/Script/CameraCalibrationCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_EncodersTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_Tables_EncodersTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
