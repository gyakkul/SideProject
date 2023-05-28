// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraCalibrationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraCalibrationTypes() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDistortionHandlerPicker();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DistortionHandlerPicker;
class UScriptStruct* FDistortionHandlerPicker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DistortionHandlerPicker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DistortionHandlerPicker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDistortionHandlerPicker, (UObject*)Z_Construct_UPackage__Script_CameraCalibrationCore(), TEXT("DistortionHandlerPicker"));
	}
	return Z_Registration_Info_UScriptStruct_DistortionHandlerPicker.OuterSingleton;
}
template<> CAMERACALIBRATIONCORE_API UScriptStruct* StaticStruct<FDistortionHandlerPicker>()
{
	return FDistortionHandlerPicker::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistortionProducerID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DistortionProducerID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandlerDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HandlerDisplayName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CameraCalibrationTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDistortionHandlerPicker>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::NewProp_TargetCameraComponent_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** CineCameraComponent with which the desired distortion handler is associated */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CameraCalibrationTypes.h" },
		{ "ToolTip", "CineCameraComponent with which the desired distortion handler is associated" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::NewProp_TargetCameraComponent = { "TargetCameraComponent", nullptr, (EPropertyFlags)0x001400000008200c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistortionHandlerPicker, TargetCameraComponent), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::NewProp_TargetCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::NewProp_TargetCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::NewProp_DistortionProducerID_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** UObject that produces the distortion state for the desired distortion handler */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationTypes.h" },
		{ "ToolTip", "UObject that produces the distortion state for the desired distortion handler" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::NewProp_DistortionProducerID = { "DistortionProducerID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistortionHandlerPicker, DistortionProducerID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::NewProp_DistortionProducerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::NewProp_DistortionProducerID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::NewProp_HandlerDisplayName_MetaData[] = {
		{ "Category", "Distortion" },
		{ "Comment", "/** Display name of the desired distortion handler */" },
		{ "ModuleRelativePath", "Public/CameraCalibrationTypes.h" },
		{ "ToolTip", "Display name of the desired distortion handler" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::NewProp_HandlerDisplayName = { "HandlerDisplayName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDistortionHandlerPicker, HandlerDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::NewProp_HandlerDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::NewProp_HandlerDisplayName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::NewProp_TargetCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::NewProp_DistortionProducerID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::NewProp_HandlerDisplayName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationCore,
		nullptr,
		&NewStructOps,
		"DistortionHandlerPicker",
		sizeof(FDistortionHandlerPicker),
		alignof(FDistortionHandlerPicker),
		Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDistortionHandlerPicker()
	{
		if (!Z_Registration_Info_UScriptStruct_DistortionHandlerPicker.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DistortionHandlerPicker.InnerSingleton, Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DistortionHandlerPicker.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationTypes_h_Statics::ScriptStructInfo[] = {
		{ FDistortionHandlerPicker::StaticStruct, Z_Construct_UScriptStruct_FDistortionHandlerPicker_Statics::NewStructOps, TEXT("DistortionHandlerPicker"), &Z_Registration_Info_UScriptStruct_DistortionHandlerPicker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDistortionHandlerPicker), 2769871690U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationTypes_h_2702751023(TEXT("/Script/CameraCalibrationCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibrationCore_Source_CameraCalibrationCore_Public_CameraCalibrationTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
