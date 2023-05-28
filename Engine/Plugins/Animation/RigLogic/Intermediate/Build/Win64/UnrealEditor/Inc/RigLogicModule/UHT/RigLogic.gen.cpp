// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigLogic() {}
// Cross Module References
	RIGLOGICMODULE_API UEnum* Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType();
	UPackage* Z_Construct_UPackage__Script_RigLogicModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERigLogicCalculationType;
	static UEnum* ERigLogicCalculationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERigLogicCalculationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERigLogicCalculationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType, (UObject*)Z_Construct_UPackage__Script_RigLogicModule(), TEXT("ERigLogicCalculationType"));
		}
		return Z_Registration_Info_UEnum_ERigLogicCalculationType.OuterSingleton;
	}
	template<> RIGLOGICMODULE_API UEnum* StaticEnum<ERigLogicCalculationType>()
	{
		return ERigLogicCalculationType_StaticEnum();
	}
	struct Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType_Statics::Enumerators[] = {
		{ "ERigLogicCalculationType::Scalar", (int64)ERigLogicCalculationType::Scalar },
		{ "ERigLogicCalculationType::SSE", (int64)ERigLogicCalculationType::SSE },
		{ "ERigLogicCalculationType::AVX", (int64)ERigLogicCalculationType::AVX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType_Statics::Enum_MetaDataParams[] = {
		{ "AVX.Name", "ERigLogicCalculationType::AVX" },
		{ "BlueprintType", "true" },
		{ "Comment", "// namespace rl4\n" },
		{ "ModuleRelativePath", "Public/RigLogic.h" },
		{ "Scalar.Name", "ERigLogicCalculationType::Scalar" },
		{ "SSE.Name", "ERigLogicCalculationType::SSE" },
		{ "ToolTip", "namespace rl4" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_RigLogicModule,
		nullptr,
		"ERigLogicCalculationType",
		"ERigLogicCalculationType",
		Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType()
	{
		if (!Z_Registration_Info_UEnum_ERigLogicCalculationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERigLogicCalculationType.InnerSingleton, Z_Construct_UEnum_RigLogicModule_ERigLogicCalculationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERigLogicCalculationType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigLogic_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigLogic_h_Statics::EnumInfo[] = {
		{ ERigLogicCalculationType_StaticEnum, TEXT("ERigLogicCalculationType"), &Z_Registration_Info_UEnum_ERigLogicCalculationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3132727076U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigLogic_h_3891497159(TEXT("/Script/RigLogicModule"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigLogic_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_RigLogic_Source_RigLogicModule_Public_RigLogic_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
