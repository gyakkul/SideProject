// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VectorVMCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVectorVMCommon() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VectorVM();
	VECTORVM_API UEnum* Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes();
	VECTORVM_API UEnum* Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVectorVMBaseTypes;
	static UEnum* EVectorVMBaseTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVectorVMBaseTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVectorVMBaseTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes, (UObject*)Z_Construct_UPackage__Script_VectorVM(), TEXT("EVectorVMBaseTypes"));
		}
		return Z_Registration_Info_UEnum_EVectorVMBaseTypes.OuterSingleton;
	}
	template<> VECTORVM_API UEnum* StaticEnum<EVectorVMBaseTypes>()
	{
		return EVectorVMBaseTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_Statics::Enumerators[] = {
		{ "EVectorVMBaseTypes::Float", (int64)EVectorVMBaseTypes::Float },
		{ "EVectorVMBaseTypes::Int", (int64)EVectorVMBaseTypes::Int },
		{ "EVectorVMBaseTypes::Bool", (int64)EVectorVMBaseTypes::Bool },
		{ "EVectorVMBaseTypes::Num", (int64)EVectorVMBaseTypes::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_Statics::Enum_MetaDataParams[] = {
		{ "Bool.Name", "EVectorVMBaseTypes::Bool" },
		{ "Float.Name", "EVectorVMBaseTypes::Float" },
		{ "Int.Name", "EVectorVMBaseTypes::Int" },
		{ "ModuleRelativePath", "Public/VectorVMCommon.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EVectorVMBaseTypes::Num" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VectorVM,
		nullptr,
		"EVectorVMBaseTypes",
		"EVectorVMBaseTypes",
		Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes()
	{
		if (!Z_Registration_Info_UEnum_EVectorVMBaseTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVectorVMBaseTypes.InnerSingleton, Z_Construct_UEnum_VectorVM_EVectorVMBaseTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVectorVMBaseTypes.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVectorVMOperandLocation;
	static UEnum* EVectorVMOperandLocation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVectorVMOperandLocation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVectorVMOperandLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation, (UObject*)Z_Construct_UPackage__Script_VectorVM(), TEXT("EVectorVMOperandLocation"));
		}
		return Z_Registration_Info_UEnum_EVectorVMOperandLocation.OuterSingleton;
	}
	template<> VECTORVM_API UEnum* StaticEnum<EVectorVMOperandLocation>()
	{
		return EVectorVMOperandLocation_StaticEnum();
	}
	struct Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_Statics::Enumerators[] = {
		{ "EVectorVMOperandLocation::Register", (int64)EVectorVMOperandLocation::Register },
		{ "EVectorVMOperandLocation::Constant", (int64)EVectorVMOperandLocation::Constant },
		{ "EVectorVMOperandLocation::Num", (int64)EVectorVMOperandLocation::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_Statics::Enum_MetaDataParams[] = {
		{ "Constant.Name", "EVectorVMOperandLocation::Constant" },
		{ "ModuleRelativePath", "Public/VectorVMCommon.h" },
		{ "Num.Name", "EVectorVMOperandLocation::Num" },
		{ "Register.Name", "EVectorVMOperandLocation::Register" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VectorVM,
		nullptr,
		"EVectorVMOperandLocation",
		"EVectorVMOperandLocation",
		Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation()
	{
		if (!Z_Registration_Info_UEnum_EVectorVMOperandLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVectorVMOperandLocation.InnerSingleton, Z_Construct_UEnum_VectorVM_EVectorVMOperandLocation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVectorVMOperandLocation.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VectorVM_Public_VectorVMCommon_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VectorVM_Public_VectorVMCommon_h_Statics::EnumInfo[] = {
		{ EVectorVMBaseTypes_StaticEnum, TEXT("EVectorVMBaseTypes"), &Z_Registration_Info_UEnum_EVectorVMBaseTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 51316121U) },
		{ EVectorVMOperandLocation_StaticEnum, TEXT("EVectorVMOperandLocation"), &Z_Registration_Info_UEnum_EVectorVMOperandLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 296041881U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VectorVM_Public_VectorVMCommon_h_4261311289(TEXT("/Script/VectorVM"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VectorVM_Public_VectorVMCommon_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_VectorVM_Public_VectorVMCommon_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
