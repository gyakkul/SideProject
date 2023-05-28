// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EVCamTargetViewportID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEVCamTargetViewportID() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UEnum* Z_Construct_UEnum_VCamCore_EVCamTargetViewportID();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVCamTargetViewportID;
	static UEnum* EVCamTargetViewportID_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVCamTargetViewportID.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVCamTargetViewportID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VCamCore_EVCamTargetViewportID, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("EVCamTargetViewportID"));
		}
		return Z_Registration_Info_UEnum_EVCamTargetViewportID.OuterSingleton;
	}
	template<> VCAMCORE_API UEnum* StaticEnum<EVCamTargetViewportID>()
	{
		return EVCamTargetViewportID_StaticEnum();
	}
	struct Z_Construct_UEnum_VCamCore_EVCamTargetViewportID_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VCamCore_EVCamTargetViewportID_Statics::Enumerators[] = {
		{ "EVCamTargetViewportID::Viewport1", (int64)EVCamTargetViewportID::Viewport1 },
		{ "EVCamTargetViewportID::Viewport2", (int64)EVCamTargetViewportID::Viewport2 },
		{ "EVCamTargetViewportID::Viewport3", (int64)EVCamTargetViewportID::Viewport3 },
		{ "EVCamTargetViewportID::Viewport4", (int64)EVCamTargetViewportID::Viewport4 },
		{ "EVCamTargetViewportID::Count", (int64)EVCamTargetViewportID::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VCamCore_EVCamTargetViewportID_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Hidden", "" },
		{ "Count.Name", "EVCamTargetViewportID::Count" },
		{ "DisplayName", "VCam Target Viewport ID" },
		{ "ModuleRelativePath", "Public/EVCamTargetViewportID.h" },
		{ "Viewport1.Name", "EVCamTargetViewportID::Viewport1" },
		{ "Viewport2.Name", "EVCamTargetViewportID::Viewport2" },
		{ "Viewport3.Name", "EVCamTargetViewportID::Viewport3" },
		{ "Viewport4.Name", "EVCamTargetViewportID::Viewport4" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VCamCore_EVCamTargetViewportID_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		"EVCamTargetViewportID",
		"EVCamTargetViewportID",
		Z_Construct_UEnum_VCamCore_EVCamTargetViewportID_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VCamCore_EVCamTargetViewportID_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VCamCore_EVCamTargetViewportID_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VCamCore_EVCamTargetViewportID_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VCamCore_EVCamTargetViewportID()
	{
		if (!Z_Registration_Info_UEnum_EVCamTargetViewportID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVCamTargetViewportID.InnerSingleton, Z_Construct_UEnum_VCamCore_EVCamTargetViewportID_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVCamTargetViewportID.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_EVCamTargetViewportID_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_EVCamTargetViewportID_h_Statics::EnumInfo[] = {
		{ EVCamTargetViewportID_StaticEnum, TEXT("EVCamTargetViewportID"), &Z_Registration_Info_UEnum_EVCamTargetViewportID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2513585238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_EVCamTargetViewportID_h_1379579364(TEXT("/Script/VCamCore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_EVCamTargetViewportID_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_EVCamTargetViewportID_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
