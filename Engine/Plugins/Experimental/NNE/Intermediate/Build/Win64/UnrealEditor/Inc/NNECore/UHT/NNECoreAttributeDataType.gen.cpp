// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Internal/NNECoreAttributeDataType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNNECoreAttributeDataType() {}
// Cross Module References
	NNECORE_API UEnum* Z_Construct_UEnum_NNECore_ENNEAttributeDataType();
	UPackage* Z_Construct_UPackage__Script_NNECore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENNEAttributeDataType;
	static UEnum* ENNEAttributeDataType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENNEAttributeDataType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENNEAttributeDataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NNECore_ENNEAttributeDataType, (UObject*)Z_Construct_UPackage__Script_NNECore(), TEXT("ENNEAttributeDataType"));
		}
		return Z_Registration_Info_UEnum_ENNEAttributeDataType.OuterSingleton;
	}
	template<> NNECORE_API UEnum* StaticEnum<ENNEAttributeDataType>()
	{
		return ENNEAttributeDataType_StaticEnum();
	}
	struct Z_Construct_UEnum_NNECore_ENNEAttributeDataType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NNECore_ENNEAttributeDataType_Statics::Enumerators[] = {
		{ "ENNEAttributeDataType::None", (int64)ENNEAttributeDataType::None },
		{ "ENNEAttributeDataType::Float", (int64)ENNEAttributeDataType::Float },
		{ "ENNEAttributeDataType::FloatArray", (int64)ENNEAttributeDataType::FloatArray },
		{ "ENNEAttributeDataType::Int32", (int64)ENNEAttributeDataType::Int32 },
		{ "ENNEAttributeDataType::Int32Array", (int64)ENNEAttributeDataType::Int32Array },
		{ "ENNEAttributeDataType::String", (int64)ENNEAttributeDataType::String },
		{ "ENNEAttributeDataType::StringArray", (int64)ENNEAttributeDataType::StringArray },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NNECore_ENNEAttributeDataType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Attribute data types\n * \n * Note: also extend NNEAttributeValueTraits.h for more type support\n */" },
		{ "Float.Name", "ENNEAttributeDataType::Float" },
		{ "FloatArray.Comment", "//!< 32-bit floating number\n" },
		{ "FloatArray.Name", "ENNEAttributeDataType::FloatArray" },
		{ "FloatArray.ToolTip", "!< 32-bit floating number" },
		{ "Int32.Comment", "//!< TArray of 32-bit floating numbers\n" },
		{ "Int32.Name", "ENNEAttributeDataType::Int32" },
		{ "Int32.ToolTip", "!< TArray of 32-bit floating numbers" },
		{ "Int32Array.Comment", "//!< 32-bit signed integer\n" },
		{ "Int32Array.Name", "ENNEAttributeDataType::Int32Array" },
		{ "Int32Array.ToolTip", "!< 32-bit signed integer" },
		{ "ModuleRelativePath", "Internal/NNECoreAttributeDataType.h" },
		{ "None.Name", "ENNEAttributeDataType::None" },
		{ "String.Comment", "//!< TArray of 32-bit signed integers\n" },
		{ "String.Name", "ENNEAttributeDataType::String" },
		{ "String.ToolTip", "!< TArray of 32-bit signed integers" },
		{ "StringArray.Comment", "//!< built-in FString\n" },
		{ "StringArray.Name", "ENNEAttributeDataType::StringArray" },
		{ "StringArray.ToolTip", "!< built-in FString" },
		{ "ToolTip", "Attribute data types\n\nNote: also extend NNEAttributeValueTraits.h for more type support" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NNECore_ENNEAttributeDataType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NNECore,
		nullptr,
		"ENNEAttributeDataType",
		"ENNEAttributeDataType",
		Z_Construct_UEnum_NNECore_ENNEAttributeDataType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NNECore_ENNEAttributeDataType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NNECore_ENNEAttributeDataType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NNECore_ENNEAttributeDataType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NNECore_ENNEAttributeDataType()
	{
		if (!Z_Registration_Info_UEnum_ENNEAttributeDataType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENNEAttributeDataType.InnerSingleton, Z_Construct_UEnum_NNECore_ENNEAttributeDataType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENNEAttributeDataType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreAttributeDataType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreAttributeDataType_h_Statics::EnumInfo[] = {
		{ ENNEAttributeDataType_StaticEnum, TEXT("ENNEAttributeDataType"), &Z_Registration_Info_UEnum_ENNEAttributeDataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2758456110U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreAttributeDataType_h_2354525504(TEXT("/Script/NNECore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreAttributeDataType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_NNE_Source_NNECore_Internal_NNECoreAttributeDataType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
