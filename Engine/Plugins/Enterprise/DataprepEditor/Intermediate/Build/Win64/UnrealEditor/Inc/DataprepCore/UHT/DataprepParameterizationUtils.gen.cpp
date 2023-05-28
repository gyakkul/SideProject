// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Parameterization/DataprepParameterizationUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepParameterizationUtils() {}
// Cross Module References
	DATAPREPCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataprepPropertyLink();
	UPackage* Z_Construct_UPackage__Script_DataprepCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataprepPropertyLink;
class UScriptStruct* FDataprepPropertyLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataprepPropertyLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataprepPropertyLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataprepPropertyLink, (UObject*)Z_Construct_UPackage__Script_DataprepCore(), TEXT("DataprepPropertyLink"));
	}
	return Z_Registration_Info_UScriptStruct_DataprepPropertyLink.OuterSingleton;
}
template<> DATAPREPCORE_API UScriptStruct* StaticStruct<FDataprepPropertyLink>()
{
	return FDataprepPropertyLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedProperty_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_CachedProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ContainerIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Parameterization/DataprepParameterizationUtils.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataprepPropertyLink>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::NewProp_CachedProperty_MetaData[] = {
		{ "ModuleRelativePath", "Public/Parameterization/DataprepParameterizationUtils.h" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::NewProp_CachedProperty = { "CachedProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataprepPropertyLink, CachedProperty), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::NewProp_CachedProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::NewProp_CachedProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::NewProp_PropertyName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Parameterization/DataprepParameterizationUtils.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataprepPropertyLink, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::NewProp_ContainerIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Parameterization/DataprepParameterizationUtils.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::NewProp_ContainerIndex = { "ContainerIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDataprepPropertyLink, ContainerIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::NewProp_ContainerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::NewProp_ContainerIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::NewProp_CachedProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::NewProp_ContainerIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepCore,
		nullptr,
		&NewStructOps,
		"DataprepPropertyLink",
		sizeof(FDataprepPropertyLink),
		alignof(FDataprepPropertyLink),
		Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataprepPropertyLink()
	{
		if (!Z_Registration_Info_UScriptStruct_DataprepPropertyLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataprepPropertyLink.InnerSingleton, Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataprepPropertyLink.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_Parameterization_DataprepParameterizationUtils_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_Parameterization_DataprepParameterizationUtils_h_Statics::ScriptStructInfo[] = {
		{ FDataprepPropertyLink::StaticStruct, Z_Construct_UScriptStruct_FDataprepPropertyLink_Statics::NewStructOps, TEXT("DataprepPropertyLink"), &Z_Registration_Info_UScriptStruct_DataprepPropertyLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataprepPropertyLink), 2734592473U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_Parameterization_DataprepParameterizationUtils_h_415498682(TEXT("/Script/DataprepCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_Parameterization_DataprepParameterizationUtils_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepCore_Public_Parameterization_DataprepParameterizationUtils_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
