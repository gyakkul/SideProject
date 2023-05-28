// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsSettingsEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsSettingsEnums() {}
// Cross Module References
	PHYSICSCORE_API UEnum* Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode();
	UPackage* Z_Construct_UPackage__Script_PhysicsCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFrictionCombineMode;
	static UEnum* EFrictionCombineMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFrictionCombineMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFrictionCombineMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode, (UObject*)Z_Construct_UPackage__Script_PhysicsCore(), TEXT("EFrictionCombineMode"));
		}
		return Z_Registration_Info_UEnum_EFrictionCombineMode.OuterSingleton;
	}
	template<> PHYSICSCORE_API UEnum* StaticEnum<EFrictionCombineMode::Type>()
	{
		return EFrictionCombineMode_StaticEnum();
	}
	struct Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode_Statics::Enumerators[] = {
		{ "EFrictionCombineMode::Average", (int64)EFrictionCombineMode::Average },
		{ "EFrictionCombineMode::Min", (int64)EFrictionCombineMode::Min },
		{ "EFrictionCombineMode::Multiply", (int64)EFrictionCombineMode::Multiply },
		{ "EFrictionCombineMode::Max", (int64)EFrictionCombineMode::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode_Statics::Enum_MetaDataParams[] = {
		{ "Average.Comment", "/** Uses the average value of the materials touching: (a+b)/2 */" },
		{ "Average.Name", "EFrictionCombineMode::Average" },
		{ "Average.ToolTip", "Uses the average value of the materials touching: (a+b)/2" },
		{ "Max.Comment", "/** Uses the maximum value of materials touching: max(a,b) */" },
		{ "Max.Name", "EFrictionCombineMode::Max" },
		{ "Max.ToolTip", "Uses the maximum value of materials touching: max(a,b)" },
		{ "Min.Comment", "/** Uses the minimum value of the materials touching: min(a,b) */" },
		{ "Min.Name", "EFrictionCombineMode::Min" },
		{ "Min.ToolTip", "Uses the minimum value of the materials touching: min(a,b)" },
		{ "ModuleRelativePath", "Public/PhysicsSettingsEnums.h" },
		{ "Multiply.Comment", "/** Uses the product of the values of the materials touching: a*b */" },
		{ "Multiply.Name", "EFrictionCombineMode::Multiply" },
		{ "Multiply.ToolTip", "Uses the product of the values of the materials touching: a*b" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PhysicsCore,
		nullptr,
		"EFrictionCombineMode",
		"EFrictionCombineMode::Type",
		Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode()
	{
		if (!Z_Registration_Info_UEnum_EFrictionCombineMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFrictionCombineMode.InnerSingleton, Z_Construct_UEnum_PhysicsCore_EFrictionCombineMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFrictionCombineMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsEnums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsEnums_h_Statics::EnumInfo[] = {
		{ EFrictionCombineMode_StaticEnum, TEXT("EFrictionCombineMode"), &Z_Registration_Info_UEnum_EFrictionCombineMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 18850244U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsEnums_h_3090272041(TEXT("/Script/PhysicsCore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_PhysicsCore_Public_PhysicsSettingsEnums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
