// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Camera/CameraStackTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraStackTypes() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraAlphaBlendMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDummySpacerCameraTypes();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DummySpacerCameraTypes;
class UScriptStruct* FDummySpacerCameraTypes::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DummySpacerCameraTypes.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DummySpacerCameraTypes.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDummySpacerCameraTypes, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DummySpacerCameraTypes"));
	}
	return Z_Registration_Info_UScriptStruct_DummySpacerCameraTypes.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDummySpacerCameraTypes>()
{
	return FDummySpacerCameraTypes::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// NOTE:\n// This code is work in progress - do not use these types until this comment is removed.\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraStackTypes.h" },
		{ "ToolTip", "NOTE:\nThis code is work in progress - do not use these types until this comment is removed." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDummySpacerCameraTypes>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DummySpacerCameraTypes",
		sizeof(FDummySpacerCameraTypes),
		alignof(FDummySpacerCameraTypes),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDummySpacerCameraTypes()
	{
		if (!Z_Registration_Info_UScriptStruct_DummySpacerCameraTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DummySpacerCameraTypes.InnerSingleton, Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DummySpacerCameraTypes.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraAlphaBlendMode;
	static UEnum* ECameraAlphaBlendMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECameraAlphaBlendMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECameraAlphaBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraAlphaBlendMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECameraAlphaBlendMode"));
		}
		return Z_Registration_Info_UEnum_ECameraAlphaBlendMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ECameraAlphaBlendMode::Type>()
	{
		return ECameraAlphaBlendMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_Statics::Enumerators[] = {
		{ "ECameraAlphaBlendMode::CABM_Linear", (int64)ECameraAlphaBlendMode::CABM_Linear },
		{ "ECameraAlphaBlendMode::CABM_Cubic", (int64)ECameraAlphaBlendMode::CABM_Cubic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_Statics::Enum_MetaDataParams[] = {
		{ "CABM_Cubic.DisplayName", "Cubic" },
		{ "CABM_Cubic.Name", "ECameraAlphaBlendMode::CABM_Cubic" },
		{ "CABM_Linear.DisplayName", "Linear" },
		{ "CABM_Linear.Name", "ECameraAlphaBlendMode::CABM_Linear" },
		{ "Comment", "//@TODO: Document\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraStackTypes.h" },
		{ "ToolTip", "@TODO: Document" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ECameraAlphaBlendMode",
		"ECameraAlphaBlendMode::Type",
		Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ECameraAlphaBlendMode()
	{
		if (!Z_Registration_Info_UEnum_ECameraAlphaBlendMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraAlphaBlendMode.InnerSingleton, Z_Construct_UEnum_Engine_ECameraAlphaBlendMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECameraAlphaBlendMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraStackTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraStackTypes_h_Statics::EnumInfo[] = {
		{ ECameraAlphaBlendMode_StaticEnum, TEXT("ECameraAlphaBlendMode"), &Z_Registration_Info_UEnum_ECameraAlphaBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2481199779U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraStackTypes_h_Statics::ScriptStructInfo[] = {
		{ FDummySpacerCameraTypes::StaticStruct, Z_Construct_UScriptStruct_FDummySpacerCameraTypes_Statics::NewStructOps, TEXT("DummySpacerCameraTypes"), &Z_Registration_Info_UScriptStruct_DummySpacerCameraTypes, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDummySpacerCameraTypes), 2128055602U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraStackTypes_h_2832600853(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraStackTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraStackTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraStackTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraStackTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
