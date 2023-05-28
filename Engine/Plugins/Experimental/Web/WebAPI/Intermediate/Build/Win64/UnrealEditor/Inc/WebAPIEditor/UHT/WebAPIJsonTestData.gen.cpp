// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/WebAPIJsonTestData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPIJsonTestData() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_WebAPIEditor();
	WEBAPIEDITOR_API UEnum* Z_Construct_UEnum_WebAPIEditor_EWAPITestUEnum();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWAPITestUEnum;
	static UEnum* EWAPITestUEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWAPITestUEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWAPITestUEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_WebAPIEditor_EWAPITestUEnum, (UObject*)Z_Construct_UPackage__Script_WebAPIEditor(), TEXT("EWAPITestUEnum"));
		}
		return Z_Registration_Info_UEnum_EWAPITestUEnum.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UEnum* StaticEnum<EWAPITestUEnum>()
	{
		return EWAPITestUEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_WebAPIEditor_EWAPITestUEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_WebAPIEditor_EWAPITestUEnum_Statics::Enumerators[] = {
		{ "EWAPITestUEnum::EnumValueA", (int64)EWAPITestUEnum::EnumValueA },
		{ "EWAPITestUEnum::EnumValueB", (int64)EWAPITestUEnum::EnumValueB },
		{ "EWAPITestUEnum::EnumValueC", (int64)EWAPITestUEnum::EnumValueC },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_WebAPIEditor_EWAPITestUEnum_Statics::Enum_MetaDataParams[] = {
		{ "EnumValueA.Name", "EWAPITestUEnum::EnumValueA" },
		{ "EnumValueB.Name", "EWAPITestUEnum::EnumValueB" },
		{ "EnumValueC.Name", "EWAPITestUEnum::EnumValueC" },
		{ "ModuleRelativePath", "Private/Tests/WebAPIJsonTestData.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_WebAPIEditor_EWAPITestUEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_WebAPIEditor,
		nullptr,
		"EWAPITestUEnum",
		"EWAPITestUEnum",
		Z_Construct_UEnum_WebAPIEditor_EWAPITestUEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_WebAPIEditor_EWAPITestUEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_WebAPIEditor_EWAPITestUEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_WebAPIEditor_EWAPITestUEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_WebAPIEditor_EWAPITestUEnum()
	{
		if (!Z_Registration_Info_UEnum_EWAPITestUEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWAPITestUEnum.InnerSingleton, Z_Construct_UEnum_WebAPIEditor_EWAPITestUEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWAPITestUEnum.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Private_Tests_WebAPIJsonTestData_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Private_Tests_WebAPIJsonTestData_h_Statics::EnumInfo[] = {
		{ EWAPITestUEnum_StaticEnum, TEXT("EWAPITestUEnum"), &Z_Registration_Info_UEnum_EWAPITestUEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2137765957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Private_Tests_WebAPIJsonTestData_h_13626591(TEXT("/Script/WebAPIEditor"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Private_Tests_WebAPIJsonTestData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Private_Tests_WebAPIJsonTestData_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
