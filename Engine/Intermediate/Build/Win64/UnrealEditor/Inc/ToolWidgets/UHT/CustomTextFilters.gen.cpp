// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Filters/CustomTextFilters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomTextFilters() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	TOOLWIDGETS_API UScriptStruct* Z_Construct_UScriptStruct_FCustomTextFilterData();
	UPackage* Z_Construct_UPackage__Script_ToolWidgets();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomTextFilterData;
class UScriptStruct* FCustomTextFilterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomTextFilterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomTextFilterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomTextFilterData, (UObject*)Z_Construct_UPackage__Script_ToolWidgets(), TEXT("CustomTextFilterData"));
	}
	return Z_Registration_Info_UScriptStruct_CustomTextFilterData.OuterSingleton;
}
template<> TOOLWIDGETS_API UScriptStruct* StaticStruct<FCustomTextFilterData>()
{
	return FCustomTextFilterData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomTextFilterData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterLabel_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_FilterLabel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterString_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_FilterString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FilterColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/* Struct containing the data that SCustomTextFilterDialog is currently editing */" },
		{ "ModuleRelativePath", "Public/Filters/CustomTextFilters.h" },
		{ "ToolTip", "Struct containing the data that SCustomTextFilterDialog is currently editing" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomTextFilterData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::NewProp_FilterLabel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Filters/CustomTextFilters.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::NewProp_FilterLabel = { "FilterLabel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomTextFilterData, FilterLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::NewProp_FilterLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::NewProp_FilterLabel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::NewProp_FilterString_MetaData[] = {
		{ "ModuleRelativePath", "Public/Filters/CustomTextFilters.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::NewProp_FilterString = { "FilterString", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomTextFilterData, FilterString), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::NewProp_FilterString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::NewProp_FilterString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::NewProp_FilterColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Filters/CustomTextFilters.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::NewProp_FilterColor = { "FilterColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomTextFilterData, FilterColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::NewProp_FilterColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::NewProp_FilterColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::NewProp_FilterLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::NewProp_FilterString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::NewProp_FilterColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ToolWidgets,
		nullptr,
		&NewStructOps,
		"CustomTextFilterData",
		sizeof(FCustomTextFilterData),
		alignof(FCustomTextFilterData),
		Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomTextFilterData()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomTextFilterData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomTextFilterData.InnerSingleton, Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomTextFilterData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Filters_CustomTextFilters_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Filters_CustomTextFilters_h_Statics::ScriptStructInfo[] = {
		{ FCustomTextFilterData::StaticStruct, Z_Construct_UScriptStruct_FCustomTextFilterData_Statics::NewStructOps, TEXT("CustomTextFilterData"), &Z_Registration_Info_UScriptStruct_CustomTextFilterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomTextFilterData), 153789908U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Filters_CustomTextFilters_h_1177201088(TEXT("/Script/ToolWidgets"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Filters_CustomTextFilters_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_ToolWidgets_Public_Filters_CustomTextFilters_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
