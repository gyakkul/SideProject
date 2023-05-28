// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassLOD/Public/MassLODTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassLODTypes() {}
// Cross Module References
	MASSLOD_API UEnum* Z_Construct_UEnum_MassLOD_EMassLOD();
	UPackage* Z_Construct_UPackage__Script_MassLOD();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMassLOD;
	static UEnum* EMassLOD_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMassLOD.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMassLOD.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MassLOD_EMassLOD, (UObject*)Z_Construct_UPackage__Script_MassLOD(), TEXT("EMassLOD"));
		}
		return Z_Registration_Info_UEnum_EMassLOD.OuterSingleton;
	}
	template<> MASSLOD_API UEnum* StaticEnum<EMassLOD::Type>()
	{
		return EMassLOD_StaticEnum();
	}
	struct Z_Construct_UEnum_MassLOD_EMassLOD_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MassLOD_EMassLOD_Statics::Enumerators[] = {
		{ "EMassLOD::High", (int64)EMassLOD::High },
		{ "EMassLOD::Medium", (int64)EMassLOD::Medium },
		{ "EMassLOD::Low", (int64)EMassLOD::Low },
		{ "EMassLOD::Off", (int64)EMassLOD::Off },
		{ "EMassLOD::Max", (int64)EMassLOD::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MassLOD_EMassLOD_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// We are not using enum class here because we are doing so many arithmetic operation and comparison on them \n// that it is not worth polluting int32 casts everywhere in the code.\n" },
		{ "High.Name", "EMassLOD::High" },
		{ "Low.Name", "EMassLOD::Low" },
		{ "Max.Name", "EMassLOD::Max" },
		{ "Medium.Name", "EMassLOD::Medium" },
		{ "ModuleRelativePath", "Public/MassLODTypes.h" },
		{ "Off.Name", "EMassLOD::Off" },
		{ "ToolTip", "We are not using enum class here because we are doing so many arithmetic operation and comparison on them\nthat it is not worth polluting int32 casts everywhere in the code." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MassLOD_EMassLOD_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MassLOD,
		nullptr,
		"EMassLOD",
		"EMassLOD::Type",
		Z_Construct_UEnum_MassLOD_EMassLOD_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MassLOD_EMassLOD_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_MassLOD_EMassLOD_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MassLOD_EMassLOD_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MassLOD_EMassLOD()
	{
		if (!Z_Registration_Info_UEnum_EMassLOD.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMassLOD.InnerSingleton, Z_Construct_UEnum_MassLOD_EMassLOD_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMassLOD.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODTypes_h_Statics::EnumInfo[] = {
		{ EMassLOD_StaticEnum, TEXT("EMassLOD"), &Z_Registration_Info_UEnum_EMassLOD, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1481285066U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODTypes_h_797849208(TEXT("/Script/MassLOD"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassLOD_Public_MassLODTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
