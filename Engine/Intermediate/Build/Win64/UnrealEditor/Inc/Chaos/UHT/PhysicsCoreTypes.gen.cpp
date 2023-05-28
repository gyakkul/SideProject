// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysicsCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsCoreTypes() {}
// Cross Module References
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EChaosBufferMode();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EChaosSolverTickMode();
	CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EChaosThreadingMode();
	UPackage* Z_Construct_UPackage__Script_Chaos();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosSolverTickMode;
	static UEnum* EChaosSolverTickMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChaosSolverTickMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChaosSolverTickMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EChaosSolverTickMode, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EChaosSolverTickMode"));
		}
		return Z_Registration_Info_UEnum_EChaosSolverTickMode.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EChaosSolverTickMode>()
	{
		return EChaosSolverTickMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EChaosSolverTickMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EChaosSolverTickMode_Statics::Enumerators[] = {
		{ "EChaosSolverTickMode::Fixed", (int64)EChaosSolverTickMode::Fixed },
		{ "EChaosSolverTickMode::Variable", (int64)EChaosSolverTickMode::Variable },
		{ "EChaosSolverTickMode::VariableCapped", (int64)EChaosSolverTickMode::VariableCapped },
		{ "EChaosSolverTickMode::VariableCappedWithTarget", (int64)EChaosSolverTickMode::VariableCappedWithTarget },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EChaosSolverTickMode_Statics::Enum_MetaDataParams[] = {
		{ "Fixed.Name", "EChaosSolverTickMode::Fixed" },
		{ "ModuleRelativePath", "Public/PhysicsCoreTypes.h" },
		{ "Variable.Name", "EChaosSolverTickMode::Variable" },
		{ "VariableCapped.Name", "EChaosSolverTickMode::VariableCapped" },
		{ "VariableCappedWithTarget.Name", "EChaosSolverTickMode::VariableCappedWithTarget" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EChaosSolverTickMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EChaosSolverTickMode",
		"EChaosSolverTickMode",
		Z_Construct_UEnum_Chaos_EChaosSolverTickMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EChaosSolverTickMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EChaosSolverTickMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EChaosSolverTickMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EChaosSolverTickMode()
	{
		if (!Z_Registration_Info_UEnum_EChaosSolverTickMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosSolverTickMode.InnerSingleton, Z_Construct_UEnum_Chaos_EChaosSolverTickMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChaosSolverTickMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosThreadingMode;
	static UEnum* EChaosThreadingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChaosThreadingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChaosThreadingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EChaosThreadingMode, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EChaosThreadingMode"));
		}
		return Z_Registration_Info_UEnum_EChaosThreadingMode.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EChaosThreadingMode>()
	{
		return EChaosThreadingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EChaosThreadingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EChaosThreadingMode_Statics::Enumerators[] = {
		{ "EChaosThreadingMode::DedicatedThread", (int64)EChaosThreadingMode::DedicatedThread },
		{ "EChaosThreadingMode::TaskGraph", (int64)EChaosThreadingMode::TaskGraph },
		{ "EChaosThreadingMode::SingleThread", (int64)EChaosThreadingMode::SingleThread },
		{ "EChaosThreadingMode::Num", (int64)EChaosThreadingMode::Num },
		{ "EChaosThreadingMode::Invalid", (int64)EChaosThreadingMode::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EChaosThreadingMode_Statics::Enum_MetaDataParams[] = {
		{ "DedicatedThread.Hidden", "" },
		{ "DedicatedThread.Name", "EChaosThreadingMode::DedicatedThread" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EChaosThreadingMode::Invalid" },
		{ "ModuleRelativePath", "Public/PhysicsCoreTypes.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EChaosThreadingMode::Num" },
		{ "SingleThread.Name", "EChaosThreadingMode::SingleThread" },
		{ "TaskGraph.Name", "EChaosThreadingMode::TaskGraph" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EChaosThreadingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EChaosThreadingMode",
		"EChaosThreadingMode",
		Z_Construct_UEnum_Chaos_EChaosThreadingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EChaosThreadingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EChaosThreadingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EChaosThreadingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EChaosThreadingMode()
	{
		if (!Z_Registration_Info_UEnum_EChaosThreadingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosThreadingMode.InnerSingleton, Z_Construct_UEnum_Chaos_EChaosThreadingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChaosThreadingMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosBufferMode;
	static UEnum* EChaosBufferMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChaosBufferMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChaosBufferMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EChaosBufferMode, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EChaosBufferMode"));
		}
		return Z_Registration_Info_UEnum_EChaosBufferMode.OuterSingleton;
	}
	template<> CHAOS_API UEnum* StaticEnum<EChaosBufferMode>()
	{
		return EChaosBufferMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Chaos_EChaosBufferMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Chaos_EChaosBufferMode_Statics::Enumerators[] = {
		{ "EChaosBufferMode::Double", (int64)EChaosBufferMode::Double },
		{ "EChaosBufferMode::Triple", (int64)EChaosBufferMode::Triple },
		{ "EChaosBufferMode::Num", (int64)EChaosBufferMode::Num },
		{ "EChaosBufferMode::Invalid", (int64)EChaosBufferMode::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Chaos_EChaosBufferMode_Statics::Enum_MetaDataParams[] = {
		{ "Double.Name", "EChaosBufferMode::Double" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EChaosBufferMode::Invalid" },
		{ "ModuleRelativePath", "Public/PhysicsCoreTypes.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EChaosBufferMode::Num" },
		{ "Triple.Name", "EChaosBufferMode::Triple" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EChaosBufferMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		"EChaosBufferMode",
		"EChaosBufferMode",
		Z_Construct_UEnum_Chaos_EChaosBufferMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EChaosBufferMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Chaos_EChaosBufferMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EChaosBufferMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Chaos_EChaosBufferMode()
	{
		if (!Z_Registration_Info_UEnum_EChaosBufferMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosBufferMode.InnerSingleton, Z_Construct_UEnum_Chaos_EChaosBufferMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChaosBufferMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_PhysicsCoreTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_PhysicsCoreTypes_h_Statics::EnumInfo[] = {
		{ EChaosSolverTickMode_StaticEnum, TEXT("EChaosSolverTickMode"), &Z_Registration_Info_UEnum_EChaosSolverTickMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2838399777U) },
		{ EChaosThreadingMode_StaticEnum, TEXT("EChaosThreadingMode"), &Z_Registration_Info_UEnum_EChaosThreadingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3938345797U) },
		{ EChaosBufferMode_StaticEnum, TEXT("EChaosBufferMode"), &Z_Registration_Info_UEnum_EChaosBufferMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1786541048U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_PhysicsCoreTypes_h_3022709446(TEXT("/Script/Chaos"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_PhysicsCoreTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_PhysicsCoreTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
