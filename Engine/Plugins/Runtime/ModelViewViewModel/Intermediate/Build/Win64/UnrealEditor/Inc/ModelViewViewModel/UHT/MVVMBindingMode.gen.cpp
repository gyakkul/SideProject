// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/MVVMBindingMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMBindingMode() {}
// Cross Module References
	MODELVIEWVIEWMODEL_API UEnum* Z_Construct_UEnum_ModelViewViewModel_EMVVMBindingMode();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMVVMBindingMode;
	static UEnum* EMVVMBindingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMVVMBindingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMVVMBindingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelViewViewModel_EMVVMBindingMode, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModel(), TEXT("EMVVMBindingMode"));
		}
		return Z_Registration_Info_UEnum_EMVVMBindingMode.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODEL_API UEnum* StaticEnum<EMVVMBindingMode>()
	{
		return EMVVMBindingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelViewViewModel_EMVVMBindingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelViewViewModel_EMVVMBindingMode_Statics::Enumerators[] = {
		{ "EMVVMBindingMode::OneTimeToDestination", (int64)EMVVMBindingMode::OneTimeToDestination },
		{ "EMVVMBindingMode::OneWayToDestination", (int64)EMVVMBindingMode::OneWayToDestination },
		{ "EMVVMBindingMode::TwoWay", (int64)EMVVMBindingMode::TwoWay },
		{ "EMVVMBindingMode::OneTimeToSource", (int64)EMVVMBindingMode::OneTimeToSource },
		{ "EMVVMBindingMode::OneWayToSource", (int64)EMVVMBindingMode::OneWayToSource },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelViewViewModel_EMVVMBindingMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "ModuleRelativePath", "Public/Types/MVVMBindingMode.h" },
		{ "OneTimeToDestination.Comment", "/** */" },
		{ "OneTimeToDestination.Name", "EMVVMBindingMode::OneTimeToDestination" },
		{ "OneTimeToSource.Comment", "/** */" },
		{ "OneTimeToSource.Hidden", "" },
		{ "OneTimeToSource.Name", "EMVVMBindingMode::OneTimeToSource" },
		{ "OneWayToDestination.Comment", "/** */" },
		{ "OneWayToDestination.Name", "EMVVMBindingMode::OneWayToDestination" },
		{ "OneWayToSource.Comment", "/** */" },
		{ "OneWayToSource.Name", "EMVVMBindingMode::OneWayToSource" },
		{ "TwoWay.Comment", "/** */" },
		{ "TwoWay.Name", "EMVVMBindingMode::TwoWay" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelViewViewModel_EMVVMBindingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelViewViewModel,
		nullptr,
		"EMVVMBindingMode",
		"EMVVMBindingMode",
		Z_Construct_UEnum_ModelViewViewModel_EMVVMBindingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelViewViewModel_EMVVMBindingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelViewViewModel_EMVVMBindingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelViewViewModel_EMVVMBindingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelViewViewModel_EMVVMBindingMode()
	{
		if (!Z_Registration_Info_UEnum_EMVVMBindingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMVVMBindingMode.InnerSingleton, Z_Construct_UEnum_ModelViewViewModel_EMVVMBindingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMVVMBindingMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMBindingMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMBindingMode_h_Statics::EnumInfo[] = {
		{ EMVVMBindingMode_StaticEnum, TEXT("EMVVMBindingMode"), &Z_Registration_Info_UEnum_EMVVMBindingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3094847364U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMBindingMode_h_2769183474(TEXT("/Script/ModelViewViewModel"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMBindingMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMBindingMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
