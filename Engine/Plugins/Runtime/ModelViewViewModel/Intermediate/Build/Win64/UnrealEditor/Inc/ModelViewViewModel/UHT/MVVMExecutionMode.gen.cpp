// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/MVVMExecutionMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMExecutionMode() {}
// Cross Module References
	MODELVIEWVIEWMODEL_API UEnum* Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMVVMExecutionMode;
	static UEnum* EMVVMExecutionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMVVMExecutionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMVVMExecutionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModel(), TEXT("EMVVMExecutionMode"));
		}
		return Z_Registration_Info_UEnum_EMVVMExecutionMode.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODEL_API UEnum* StaticEnum<EMVVMExecutionMode>()
	{
		return EMVVMExecutionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode_Statics::Enumerators[] = {
		{ "EMVVMExecutionMode::Immediate", (int64)EMVVMExecutionMode::Immediate },
		{ "EMVVMExecutionMode::Delayed", (int64)EMVVMExecutionMode::Delayed },
		{ "EMVVMExecutionMode::Tick", (int64)EMVVMExecutionMode::Tick },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "Delayed.Comment", "/** Execute the binding at the end of the frame before drawing when the source value changes. */" },
		{ "Delayed.Name", "EMVVMExecutionMode::Delayed" },
		{ "Delayed.ToolTip", "Execute the binding at the end of the frame before drawing when the source value changes." },
		{ "Immediate.Comment", "/** Execute the binding as soon as the source value changes. */" },
		{ "Immediate.Name", "EMVVMExecutionMode::Immediate" },
		{ "Immediate.ToolTip", "Execute the binding as soon as the source value changes." },
		{ "ModuleRelativePath", "Public/Types/MVVMExecutionMode.h" },
		{ "Tick.Comment", "/** Always execute the binding at the end of the frame. */" },
		{ "Tick.Name", "EMVVMExecutionMode::Tick" },
		{ "Tick.ToolTip", "Always execute the binding at the end of the frame." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ModelViewViewModel,
		nullptr,
		"EMVVMExecutionMode",
		"EMVVMExecutionMode",
		Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode()
	{
		if (!Z_Registration_Info_UEnum_EMVVMExecutionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMVVMExecutionMode.InnerSingleton, Z_Construct_UEnum_ModelViewViewModel_EMVVMExecutionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMVVMExecutionMode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMExecutionMode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMExecutionMode_h_Statics::EnumInfo[] = {
		{ EMVVMExecutionMode_StaticEnum, TEXT("EMVVMExecutionMode"), &Z_Registration_Info_UEnum_EMVVMExecutionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1749706235U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMExecutionMode_h_2029660716(TEXT("/Script/ModelViewViewModel"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMExecutionMode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMExecutionMode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
