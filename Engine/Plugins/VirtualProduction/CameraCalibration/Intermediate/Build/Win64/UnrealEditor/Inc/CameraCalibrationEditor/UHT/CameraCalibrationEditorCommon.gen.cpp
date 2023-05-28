// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetEditor/CameraCalibrationEditorCommon.h"
#include "LensData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraCalibrationEditorCommon() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDistortionInfo();
	CAMERACALIBRATIONEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDistortionInfoContainer();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DistortionInfoContainer;
class UScriptStruct* FDistortionInfoContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DistortionInfoContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DistortionInfoContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDistortionInfoContainer, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationEditor(), TEXT("DistortionInfoContainer"));
	}
	return Z_Registration_Info_UScriptStruct_DistortionInfoContainer.OuterSingleton;
}
template<> CAMERACALIBRATIONEDITOR_API UScriptStruct* StaticStruct<FDistortionInfoContainer>()
{
	return FDistortionInfoContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDistortionInfoContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionInfoContainer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Container of distortion data to use instanced customization to show parameter struct defined by the model */" },
		{ "ModuleRelativePath", "Private/AssetEditor/CameraCalibrationEditorCommon.h" },
		{ "ToolTip", "Container of distortion data to use instanced customization to show parameter struct defined by the model" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDistortionInfoContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDistortionInfoContainer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionInfoContainer_Statics::NewProp_DistortionInfo_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Distortion parameters */" },
		{ "ModuleRelativePath", "Private/AssetEditor/CameraCalibrationEditorCommon.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Distortion parameters" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDistortionInfoContainer_Statics::NewProp_DistortionInfo = { "DistortionInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistortionInfoContainer, DistortionInfo), Z_Construct_UScriptStruct_FDistortionInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionInfoContainer_Statics::NewProp_DistortionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionInfoContainer_Statics::NewProp_DistortionInfo_MetaData)) }; // 2058170602
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDistortionInfoContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistortionInfoContainer_Statics::NewProp_DistortionInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDistortionInfoContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
		nullptr,
		&NewStructOps,
		"DistortionInfoContainer",
		sizeof(FDistortionInfoContainer),
		alignof(FDistortionInfoContainer),
		Z_Construct_UScriptStruct_FDistortionInfoContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionInfoContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionInfoContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionInfoContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDistortionInfoContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_DistortionInfoContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DistortionInfoContainer.InnerSingleton, Z_Construct_UScriptStruct_FDistortionInfoContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DistortionInfoContainer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_CameraCalibrationEditorCommon_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_CameraCalibrationEditorCommon_h_Statics::ScriptStructInfo[] = {
		{ FDistortionInfoContainer::StaticStruct, Z_Construct_UScriptStruct_FDistortionInfoContainer_Statics::NewStructOps, TEXT("DistortionInfoContainer"), &Z_Registration_Info_UScriptStruct_DistortionInfoContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDistortionInfoContainer), 1735220179U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_CameraCalibrationEditorCommon_h_3269539185(TEXT("/Script/CameraCalibrationEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_CameraCalibrationEditorCommon_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_CameraCalibrationEditorCommon_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
