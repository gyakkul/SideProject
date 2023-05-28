// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialExpressionChannelMaskParameterColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionChannelMaskParameterColor() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EChannelMaskParameterColor();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChannelMaskParameterColor;
	static UEnum* EChannelMaskParameterColor_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EChannelMaskParameterColor.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EChannelMaskParameterColor.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EChannelMaskParameterColor, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EChannelMaskParameterColor"));
		}
		return Z_Registration_Info_UEnum_EChannelMaskParameterColor.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EChannelMaskParameterColor::Type>()
	{
		return EChannelMaskParameterColor_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::Enumerators[] = {
		{ "EChannelMaskParameterColor::Red", (int64)EChannelMaskParameterColor::Red },
		{ "EChannelMaskParameterColor::Green", (int64)EChannelMaskParameterColor::Green },
		{ "EChannelMaskParameterColor::Blue", (int64)EChannelMaskParameterColor::Blue },
		{ "EChannelMaskParameterColor::Alpha", (int64)EChannelMaskParameterColor::Alpha },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::Enum_MetaDataParams[] = {
		{ "Alpha.Name", "EChannelMaskParameterColor::Alpha" },
		{ "Blue.Name", "EChannelMaskParameterColor::Blue" },
		{ "Green.Name", "EChannelMaskParameterColor::Green" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionChannelMaskParameterColor.h" },
		{ "Red.Name", "EChannelMaskParameterColor::Red" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EChannelMaskParameterColor",
		"EChannelMaskParameterColor::Type",
		Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EChannelMaskParameterColor()
	{
		if (!Z_Registration_Info_UEnum_EChannelMaskParameterColor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChannelMaskParameterColor.InnerSingleton, Z_Construct_UEnum_Engine_EChannelMaskParameterColor_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EChannelMaskParameterColor.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameterColor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameterColor_h_Statics::EnumInfo[] = {
		{ EChannelMaskParameterColor_StaticEnum, TEXT("EChannelMaskParameterColor"), &Z_Registration_Info_UEnum_EChannelMaskParameterColor, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2435948577U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameterColor_h_723341064(TEXT("/Script/Engine"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameterColor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionChannelMaskParameterColor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
