// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/IPropertyAccessCompiler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIPropertyAccessCompiler() {}
// Cross Module References
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_EPropertyAccessBatchType();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPropertyAccessBatchType;
	static UEnum* EPropertyAccessBatchType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPropertyAccessBatchType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPropertyAccessBatchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_EPropertyAccessBatchType, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("EPropertyAccessBatchType"));
		}
		return Z_Registration_Info_UEnum_EPropertyAccessBatchType.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<EPropertyAccessBatchType>()
	{
		return EPropertyAccessBatchType_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_EPropertyAccessBatchType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_EPropertyAccessBatchType_Statics::Enumerators[] = {
		{ "EPropertyAccessBatchType::Unbatched", (int64)EPropertyAccessBatchType::Unbatched },
		{ "EPropertyAccessBatchType::Batched", (int64)EPropertyAccessBatchType::Batched },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_EPropertyAccessBatchType_Statics::Enum_MetaDataParams[] = {
		{ "Batched.Comment", "// Copies designed to be processed in one call to ProcessCopies\n" },
		{ "Batched.Name", "EPropertyAccessBatchType::Batched" },
		{ "Batched.ToolTip", "Copies designed to be processed in one call to ProcessCopies" },
		{ "Comment", "// DEPRECATED - The various batching of property copy\n" },
		{ "ModuleRelativePath", "Public/IPropertyAccessCompiler.h" },
		{ "ToolTip", "DEPRECATED - The various batching of property copy" },
		{ "Unbatched.Comment", "// Copies designed to be called one at a time via ProcessCopy\n" },
		{ "Unbatched.Name", "EPropertyAccessBatchType::Unbatched" },
		{ "Unbatched.ToolTip", "Copies designed to be called one at a time via ProcessCopy" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_EPropertyAccessBatchType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"EPropertyAccessBatchType",
		"EPropertyAccessBatchType",
		Z_Construct_UEnum_UnrealEd_EPropertyAccessBatchType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPropertyAccessBatchType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_EPropertyAccessBatchType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_EPropertyAccessBatchType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_EPropertyAccessBatchType()
	{
		if (!Z_Registration_Info_UEnum_EPropertyAccessBatchType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPropertyAccessBatchType.InnerSingleton, Z_Construct_UEnum_UnrealEd_EPropertyAccessBatchType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPropertyAccessBatchType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_IPropertyAccessCompiler_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_IPropertyAccessCompiler_h_Statics::EnumInfo[] = {
		{ EPropertyAccessBatchType_StaticEnum, TEXT("EPropertyAccessBatchType"), &Z_Registration_Info_UEnum_EPropertyAccessBatchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3052619441U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_IPropertyAccessCompiler_h_888066672(TEXT("/Script/UnrealEd"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_IPropertyAccessCompiler_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_IPropertyAccessCompiler_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
