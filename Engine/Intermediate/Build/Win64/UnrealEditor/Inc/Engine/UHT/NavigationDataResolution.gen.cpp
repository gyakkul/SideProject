// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/AI/Navigation/NavigationDataResolution.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationDataResolution() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationDataResolution();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavigationDataResolution;
	static UEnum* ENavigationDataResolution_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENavigationDataResolution.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENavigationDataResolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENavigationDataResolution, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENavigationDataResolution"));
		}
		return Z_Registration_Info_UEnum_ENavigationDataResolution.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ENavigationDataResolution>()
	{
		return ENavigationDataResolution_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_ENavigationDataResolution_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_ENavigationDataResolution_Statics::Enumerators[] = {
		{ "ENavigationDataResolution::Low", (int64)ENavigationDataResolution::Low },
		{ "ENavigationDataResolution::Default", (int64)ENavigationDataResolution::Default },
		{ "ENavigationDataResolution::High", (int64)ENavigationDataResolution::High },
		{ "ENavigationDataResolution::Invalid", (int64)ENavigationDataResolution::Invalid },
		{ "ENavigationDataResolution::MAX", (int64)ENavigationDataResolution::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_ENavigationDataResolution_Statics::Enum_MetaDataParams[] = {
		{ "Default.Name", "ENavigationDataResolution::Default" },
		{ "High.Name", "ENavigationDataResolution::High" },
		{ "Invalid.DisplayName", "None" },
		{ "Invalid.Name", "ENavigationDataResolution::Invalid" },
		{ "Low.Name", "ENavigationDataResolution::Low" },
		{ "MAX.Name", "ENavigationDataResolution::MAX" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/NavigationDataResolution.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENavigationDataResolution_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"ENavigationDataResolution",
		"ENavigationDataResolution",
		Z_Construct_UEnum_Engine_ENavigationDataResolution_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavigationDataResolution_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_ENavigationDataResolution_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENavigationDataResolution_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_ENavigationDataResolution()
	{
		if (!Z_Registration_Info_UEnum_ENavigationDataResolution.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavigationDataResolution.InnerSingleton, Z_Construct_UEnum_Engine_ENavigationDataResolution_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENavigationDataResolution.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataResolution_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataResolution_h_Statics::EnumInfo[] = {
		{ ENavigationDataResolution_StaticEnum, TEXT("ENavigationDataResolution"), &Z_Registration_Info_UEnum_ENavigationDataResolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 16081659U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataResolution_h_3709991125(TEXT("/Script/Engine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataResolution_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_NavigationDataResolution_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
