// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BevelType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBevelType() {}
// Cross Module References
	TEXT3D_API UEnum* Z_Construct_UEnum_Text3D_EText3DBevelType();
	UPackage* Z_Construct_UPackage__Script_Text3D();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EText3DBevelType;
	static UEnum* EText3DBevelType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EText3DBevelType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EText3DBevelType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Text3D_EText3DBevelType, (UObject*)Z_Construct_UPackage__Script_Text3D(), TEXT("EText3DBevelType"));
		}
		return Z_Registration_Info_UEnum_EText3DBevelType.OuterSingleton;
	}
	template<> TEXT3D_API UEnum* StaticEnum<EText3DBevelType>()
	{
		return EText3DBevelType_StaticEnum();
	}
	struct Z_Construct_UEnum_Text3D_EText3DBevelType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Text3D_EText3DBevelType_Statics::Enumerators[] = {
		{ "EText3DBevelType::Linear", (int64)EText3DBevelType::Linear },
		{ "EText3DBevelType::HalfCircle", (int64)EText3DBevelType::HalfCircle },
		{ "EText3DBevelType::Convex", (int64)EText3DBevelType::Convex },
		{ "EText3DBevelType::Concave", (int64)EText3DBevelType::Concave },
		{ "EText3DBevelType::OneStep", (int64)EText3DBevelType::OneStep },
		{ "EText3DBevelType::TwoSteps", (int64)EText3DBevelType::TwoSteps },
		{ "EText3DBevelType::Engraved", (int64)EText3DBevelType::Engraved },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Text3D_EText3DBevelType_Statics::Enum_MetaDataParams[] = {
		{ "Concave.Name", "EText3DBevelType::Concave" },
		{ "Convex.Name", "EText3DBevelType::Convex" },
		{ "Engraved.Name", "EText3DBevelType::Engraved" },
		{ "HalfCircle.Name", "EText3DBevelType::HalfCircle" },
		{ "Linear.Name", "EText3DBevelType::Linear" },
		{ "ModuleRelativePath", "Public/BevelType.h" },
		{ "OneStep.Name", "EText3DBevelType::OneStep" },
		{ "TwoSteps.Name", "EText3DBevelType::TwoSteps" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Text3D_EText3DBevelType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Text3D,
		nullptr,
		"EText3DBevelType",
		"EText3DBevelType",
		Z_Construct_UEnum_Text3D_EText3DBevelType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Text3D_EText3DBevelType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Text3D_EText3DBevelType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Text3D_EText3DBevelType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Text3D_EText3DBevelType()
	{
		if (!Z_Registration_Info_UEnum_EText3DBevelType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EText3DBevelType.InnerSingleton, Z_Construct_UEnum_Text3D_EText3DBevelType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EText3DBevelType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_BevelType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_BevelType_h_Statics::EnumInfo[] = {
		{ EText3DBevelType_StaticEnum, TEXT("EText3DBevelType"), &Z_Registration_Info_UEnum_EText3DBevelType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1380692899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_BevelType_h_2375025847(TEXT("/Script/Text3D"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_BevelType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_BevelType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
