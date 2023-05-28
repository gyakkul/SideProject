// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HttpBlueprintTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpBlueprintTypes() {}
// Cross Module References
	HTTPBLUEPRINT_API UEnum* Z_Construct_UEnum_HttpBlueprint_EHttpVerbs();
	HTTPBLUEPRINT_API UEnum* Z_Construct_UEnum_HttpBlueprint_ERequestPresets();
	UPackage* Z_Construct_UPackage__Script_HttpBlueprint();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHttpVerbs;
	static UEnum* EHttpVerbs_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHttpVerbs.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHttpVerbs.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HttpBlueprint_EHttpVerbs, (UObject*)Z_Construct_UPackage__Script_HttpBlueprint(), TEXT("EHttpVerbs"));
		}
		return Z_Registration_Info_UEnum_EHttpVerbs.OuterSingleton;
	}
	template<> HTTPBLUEPRINT_API UEnum* StaticEnum<EHttpVerbs>()
	{
		return EHttpVerbs_StaticEnum();
	}
	struct Z_Construct_UEnum_HttpBlueprint_EHttpVerbs_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HttpBlueprint_EHttpVerbs_Statics::Enumerators[] = {
		{ "EHttpVerbs::Post", (int64)EHttpVerbs::Post },
		{ "EHttpVerbs::Put", (int64)EHttpVerbs::Put },
		{ "EHttpVerbs::Delete", (int64)EHttpVerbs::Delete },
		{ "EHttpVerbs::Patch", (int64)EHttpVerbs::Patch },
		{ "EHttpVerbs::Get", (int64)EHttpVerbs::Get },
		{ "EHttpVerbs::MAX", (int64)EHttpVerbs::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HttpBlueprint_EHttpVerbs_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Delete.Name", "EHttpVerbs::Delete" },
		{ "Get.Comment", "// @note: Anything past Patch will not display the input body pin\n" },
		{ "Get.Name", "EHttpVerbs::Get" },
		{ "Get.ToolTip", "@note: Anything past Patch will not display the input body pin" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EHttpVerbs::MAX" },
		{ "ModuleRelativePath", "Public/HttpBlueprintTypes.h" },
		{ "Patch.Name", "EHttpVerbs::Patch" },
		{ "Post.Name", "EHttpVerbs::Post" },
		{ "Put.Name", "EHttpVerbs::Put" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HttpBlueprint_EHttpVerbs_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HttpBlueprint,
		nullptr,
		"EHttpVerbs",
		"EHttpVerbs",
		Z_Construct_UEnum_HttpBlueprint_EHttpVerbs_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HttpBlueprint_EHttpVerbs_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HttpBlueprint_EHttpVerbs_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HttpBlueprint_EHttpVerbs_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HttpBlueprint_EHttpVerbs()
	{
		if (!Z_Registration_Info_UEnum_EHttpVerbs.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHttpVerbs.InnerSingleton, Z_Construct_UEnum_HttpBlueprint_EHttpVerbs_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHttpVerbs.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERequestPresets;
	static UEnum* ERequestPresets_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERequestPresets.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERequestPresets.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HttpBlueprint_ERequestPresets, (UObject*)Z_Construct_UPackage__Script_HttpBlueprint(), TEXT("ERequestPresets"));
		}
		return Z_Registration_Info_UEnum_ERequestPresets.OuterSingleton;
	}
	template<> HTTPBLUEPRINT_API UEnum* StaticEnum<ERequestPresets>()
	{
		return ERequestPresets_StaticEnum();
	}
	struct Z_Construct_UEnum_HttpBlueprint_ERequestPresets_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HttpBlueprint_ERequestPresets_Statics::Enumerators[] = {
		{ "ERequestPresets::Json", (int64)ERequestPresets::Json },
		{ "ERequestPresets::Http", (int64)ERequestPresets::Http },
		{ "ERequestPresets::Url", (int64)ERequestPresets::Url },
		{ "ERequestPresets::Custom", (int64)ERequestPresets::Custom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HttpBlueprint_ERequestPresets_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Custom.DisplayName", "Custom Request" },
		{ "Custom.Name", "ERequestPresets::Custom" },
		{ "Http.DisplayName", "Http Request" },
		{ "Http.Name", "ERequestPresets::Http" },
		{ "Json.Comment", "// The order here matters.\x09\n" },
		{ "Json.DisplayName", "Json Request" },
		{ "Json.Name", "ERequestPresets::Json" },
		{ "Json.ToolTip", "The order here matters." },
		{ "ModuleRelativePath", "Public/HttpBlueprintTypes.h" },
		{ "Url.DisplayName", "Url Encoded Request" },
		{ "Url.Name", "ERequestPresets::Url" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HttpBlueprint_ERequestPresets_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HttpBlueprint,
		nullptr,
		"ERequestPresets",
		"ERequestPresets",
		Z_Construct_UEnum_HttpBlueprint_ERequestPresets_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HttpBlueprint_ERequestPresets_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HttpBlueprint_ERequestPresets_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HttpBlueprint_ERequestPresets_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HttpBlueprint_ERequestPresets()
	{
		if (!Z_Registration_Info_UEnum_ERequestPresets.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERequestPresets.InnerSingleton, Z_Construct_UEnum_HttpBlueprint_ERequestPresets_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERequestPresets.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintTypes_h_Statics::EnumInfo[] = {
		{ EHttpVerbs_StaticEnum, TEXT("EHttpVerbs"), &Z_Registration_Info_UEnum_EHttpVerbs, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3575646740U) },
		{ ERequestPresets_StaticEnum, TEXT("ERequestPresets"), &Z_Registration_Info_UEnum_ERequestPresets, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2986082141U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintTypes_h_1342036858(TEXT("/Script/HttpBlueprint"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Web_HttpBlueprint_Source_HttpBlueprint_Public_HttpBlueprintTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
