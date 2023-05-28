// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Online/CoreOnlinePrivate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoreOnlinePrivate() {}
// Cross Module References
	COREONLINE_API UEnum* Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy();
	UPackage* Z_Construct_UPackage__Script_CoreOnline();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECoreOnlineDummy;
	static UEnum* ECoreOnlineDummy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECoreOnlineDummy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECoreOnlineDummy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy, (UObject*)Z_Construct_UPackage__Script_CoreOnline(), TEXT("ECoreOnlineDummy"));
		}
		return Z_Registration_Info_UEnum_ECoreOnlineDummy.OuterSingleton;
	}
	template<> COREONLINE_API UEnum* StaticEnum<ECoreOnlineDummy>()
	{
		return ECoreOnlineDummy_StaticEnum();
	}
	struct Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy_Statics::Enumerators[] = {
		{ "ECoreOnlineDummy::Dummy", (int64)ECoreOnlineDummy::Dummy },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// This exists purely to guarantee a package is created, or the engine will not boot.\n" },
		{ "Dummy.Name", "ECoreOnlineDummy::Dummy" },
		{ "ModuleRelativePath", "Private/Online/CoreOnlinePrivate.h" },
		{ "ToolTip", "This exists purely to guarantee a package is created, or the engine will not boot." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CoreOnline,
		nullptr,
		"ECoreOnlineDummy",
		"ECoreOnlineDummy",
		Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy()
	{
		if (!Z_Registration_Info_UEnum_ECoreOnlineDummy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECoreOnlineDummy.InnerSingleton, Z_Construct_UEnum_CoreOnline_ECoreOnlineDummy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECoreOnlineDummy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreOnline_Private_Online_CoreOnlinePrivate_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreOnline_Private_Online_CoreOnlinePrivate_h_Statics::EnumInfo[] = {
		{ ECoreOnlineDummy_StaticEnum, TEXT("ECoreOnlineDummy"), &Z_Registration_Info_UEnum_ECoreOnlineDummy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1239603957U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreOnline_Private_Online_CoreOnlinePrivate_h_3834922129(TEXT("/Script/CoreOnline"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreOnline_Private_Online_CoreOnlinePrivate_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreOnline_Private_Online_CoreOnlinePrivate_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
