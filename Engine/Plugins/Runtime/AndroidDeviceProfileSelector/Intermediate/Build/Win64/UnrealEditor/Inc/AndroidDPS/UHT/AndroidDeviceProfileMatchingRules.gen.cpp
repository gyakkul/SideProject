// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AndroidDeviceProfileMatchingRules.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidDeviceProfileMatchingRules() {}
// Cross Module References
	ANDROIDDEVICEPROFILESELECTOR_API UClass* Z_Construct_UClass_UAndroidDeviceProfileMatchingRules();
	ANDROIDDEVICEPROFILESELECTOR_API UClass* Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_NoRegister();
	ANDROIDDEVICEPROFILESELECTOR_API UEnum* Z_Construct_UEnum_AndroidDeviceProfileSelector_ECompareType();
	ANDROIDDEVICEPROFILESELECTOR_API UEnum* Z_Construct_UEnum_AndroidDeviceProfileSelector_ESourceType();
	ANDROIDDEVICEPROFILESELECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FProfileMatch();
	ANDROIDDEVICEPROFILESELECTOR_API UScriptStruct* Z_Construct_UScriptStruct_FProfileMatchItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AndroidDeviceProfileSelector();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESourceType;
	static UEnum* ESourceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESourceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidDeviceProfileSelector_ESourceType, (UObject*)Z_Construct_UPackage__Script_AndroidDeviceProfileSelector(), TEXT("ESourceType"));
		}
		return Z_Registration_Info_UEnum_ESourceType.OuterSingleton;
	}
	template<> ANDROIDDEVICEPROFILESELECTOR_API UEnum* StaticEnum<ESourceType>()
	{
		return ESourceType_StaticEnum();
	}
	struct Z_Construct_UEnum_AndroidDeviceProfileSelector_ESourceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AndroidDeviceProfileSelector_ESourceType_Statics::Enumerators[] = {
		{ "SRC_PreviousRegexMatch", (int64)SRC_PreviousRegexMatch },
		{ "SRC_GpuFamily", (int64)SRC_GpuFamily },
		{ "SRC_GlVersion", (int64)SRC_GlVersion },
		{ "SRC_AndroidVersion", (int64)SRC_AndroidVersion },
		{ "SRC_DeviceMake", (int64)SRC_DeviceMake },
		{ "SRC_DeviceModel", (int64)SRC_DeviceModel },
		{ "SRC_DeviceBuildNumber", (int64)SRC_DeviceBuildNumber },
		{ "SRC_VulkanVersion", (int64)SRC_VulkanVersion },
		{ "SRC_UsingHoudini", (int64)SRC_UsingHoudini },
		{ "SRC_VulkanAvailable", (int64)SRC_VulkanAvailable },
		{ "SRC_CommandLine", (int64)SRC_CommandLine },
		{ "SRC_Hardware", (int64)SRC_Hardware },
		{ "SRC_Chipset", (int64)SRC_Chipset },
		{ "SRC_ConfigRuleVar", (int64)SRC_ConfigRuleVar },
		{ "SRC_HMDSystemName", (int64)SRC_HMDSystemName },
		{ "SRC_MAX", (int64)SRC_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AndroidDeviceProfileSelector_ESourceType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
		{ "SRC_AndroidVersion.Name", "SRC_AndroidVersion" },
		{ "SRC_Chipset.Name", "SRC_Chipset" },
		{ "SRC_CommandLine.Name", "SRC_CommandLine" },
		{ "SRC_ConfigRuleVar.Name", "SRC_ConfigRuleVar" },
		{ "SRC_DeviceBuildNumber.Name", "SRC_DeviceBuildNumber" },
		{ "SRC_DeviceMake.Name", "SRC_DeviceMake" },
		{ "SRC_DeviceModel.Name", "SRC_DeviceModel" },
		{ "SRC_GlVersion.Name", "SRC_GlVersion" },
		{ "SRC_GpuFamily.Name", "SRC_GpuFamily" },
		{ "SRC_Hardware.Name", "SRC_Hardware" },
		{ "SRC_HMDSystemName.Name", "SRC_HMDSystemName" },
		{ "SRC_MAX.Name", "SRC_MAX" },
		{ "SRC_PreviousRegexMatch.Name", "SRC_PreviousRegexMatch" },
		{ "SRC_UsingHoudini.Name", "SRC_UsingHoudini" },
		{ "SRC_VulkanAvailable.Name", "SRC_VulkanAvailable" },
		{ "SRC_VulkanVersion.Name", "SRC_VulkanVersion" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidDeviceProfileSelector_ESourceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AndroidDeviceProfileSelector,
		nullptr,
		"ESourceType",
		"ESourceType",
		Z_Construct_UEnum_AndroidDeviceProfileSelector_ESourceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidDeviceProfileSelector_ESourceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_AndroidDeviceProfileSelector_ESourceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidDeviceProfileSelector_ESourceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AndroidDeviceProfileSelector_ESourceType()
	{
		if (!Z_Registration_Info_UEnum_ESourceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESourceType.InnerSingleton, Z_Construct_UEnum_AndroidDeviceProfileSelector_ESourceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESourceType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECompareType;
	static UEnum* ECompareType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECompareType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECompareType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AndroidDeviceProfileSelector_ECompareType, (UObject*)Z_Construct_UPackage__Script_AndroidDeviceProfileSelector(), TEXT("ECompareType"));
		}
		return Z_Registration_Info_UEnum_ECompareType.OuterSingleton;
	}
	template<> ANDROIDDEVICEPROFILESELECTOR_API UEnum* StaticEnum<ECompareType>()
	{
		return ECompareType_StaticEnum();
	}
	struct Z_Construct_UEnum_AndroidDeviceProfileSelector_ECompareType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AndroidDeviceProfileSelector_ECompareType_Statics::Enumerators[] = {
		{ "CMP_Equal", (int64)CMP_Equal },
		{ "CMP_Less", (int64)CMP_Less },
		{ "CMP_LessEqual", (int64)CMP_LessEqual },
		{ "CMP_Greater", (int64)CMP_Greater },
		{ "CMP_GreaterEqual", (int64)CMP_GreaterEqual },
		{ "CMP_NotEqual", (int64)CMP_NotEqual },
		{ "CMP_Regex", (int64)CMP_Regex },
		{ "CMP_EqualIgnore", (int64)CMP_EqualIgnore },
		{ "CMP_LessIgnore", (int64)CMP_LessIgnore },
		{ "CMP_LessEqualIgnore", (int64)CMP_LessEqualIgnore },
		{ "CMP_GreaterIgnore", (int64)CMP_GreaterIgnore },
		{ "CMP_GreaterEqualIgnore", (int64)CMP_GreaterEqualIgnore },
		{ "CMP_NotEqualIgnore", (int64)CMP_NotEqualIgnore },
		{ "CMP_Hash", (int64)CMP_Hash },
		{ "CMP_MAX", (int64)CMP_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AndroidDeviceProfileSelector_ECompareType_Statics::Enum_MetaDataParams[] = {
		{ "CMP_Equal.Name", "CMP_Equal" },
		{ "CMP_EqualIgnore.Name", "CMP_EqualIgnore" },
		{ "CMP_Greater.Name", "CMP_Greater" },
		{ "CMP_GreaterEqual.Name", "CMP_GreaterEqual" },
		{ "CMP_GreaterEqualIgnore.Name", "CMP_GreaterEqualIgnore" },
		{ "CMP_GreaterIgnore.Name", "CMP_GreaterIgnore" },
		{ "CMP_Hash.Name", "CMP_Hash" },
		{ "CMP_Less.Name", "CMP_Less" },
		{ "CMP_LessEqual.Name", "CMP_LessEqual" },
		{ "CMP_LessEqualIgnore.Name", "CMP_LessEqualIgnore" },
		{ "CMP_LessIgnore.Name", "CMP_LessIgnore" },
		{ "CMP_MAX.Name", "CMP_MAX" },
		{ "CMP_NotEqual.Name", "CMP_NotEqual" },
		{ "CMP_NotEqualIgnore.Name", "CMP_NotEqualIgnore" },
		{ "CMP_Regex.Name", "CMP_Regex" },
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AndroidDeviceProfileSelector_ECompareType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AndroidDeviceProfileSelector,
		nullptr,
		"ECompareType",
		"ECompareType",
		Z_Construct_UEnum_AndroidDeviceProfileSelector_ECompareType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidDeviceProfileSelector_ECompareType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_AndroidDeviceProfileSelector_ECompareType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AndroidDeviceProfileSelector_ECompareType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AndroidDeviceProfileSelector_ECompareType()
	{
		if (!Z_Registration_Info_UEnum_ECompareType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECompareType.InnerSingleton, Z_Construct_UEnum_AndroidDeviceProfileSelector_ECompareType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECompareType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfileMatchItem;
class UScriptStruct* FProfileMatchItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfileMatchItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfileMatchItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfileMatchItem, (UObject*)Z_Construct_UPackage__Script_AndroidDeviceProfileSelector(), TEXT("ProfileMatchItem"));
	}
	return Z_Registration_Info_UScriptStruct_ProfileMatchItem.OuterSingleton;
}
template<> ANDROIDDEVICEPROFILESELECTOR_API UScriptStruct* StaticStruct<FProfileMatchItem>()
{
	return FProfileMatchItem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfileMatchItem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompareType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CompareType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MatchString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileMatchItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfileMatchItem>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_SourceType_MetaData[] = {
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfileMatchItem, SourceType), Z_Construct_UEnum_AndroidDeviceProfileSelector_ESourceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_SourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_SourceType_MetaData)) }; // 2532426222
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_CompareType_MetaData[] = {
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_CompareType = { "CompareType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfileMatchItem, CompareType), Z_Construct_UEnum_AndroidDeviceProfileSelector_ECompareType, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_CompareType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_CompareType_MetaData)) }; // 2757590952
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_MatchString_MetaData[] = {
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_MatchString = { "MatchString", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfileMatchItem, MatchString), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_MatchString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_MatchString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfileMatchItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_SourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_CompareType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewProp_MatchString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfileMatchItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidDeviceProfileSelector,
		nullptr,
		&NewStructOps,
		"ProfileMatchItem",
		sizeof(FProfileMatchItem),
		alignof(FProfileMatchItem),
		Z_Construct_UScriptStruct_FProfileMatchItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileMatchItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileMatchItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileMatchItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfileMatchItem()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfileMatchItem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfileMatchItem.InnerSingleton, Z_Construct_UScriptStruct_FProfileMatchItem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfileMatchItem.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProfileMatch;
class UScriptStruct* FProfileMatch::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProfileMatch.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProfileMatch.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfileMatch, (UObject*)Z_Construct_UPackage__Script_AndroidDeviceProfileSelector(), TEXT("ProfileMatch"));
	}
	return Z_Registration_Info_UScriptStruct_ProfileMatch.OuterSingleton;
}
template<> ANDROIDDEVICEPROFILESELECTOR_API UScriptStruct* StaticStruct<FProfileMatch>()
{
	return FProfileMatch::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfileMatch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Profile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Profile;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Match_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Match_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Match;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileMatch_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfileMatch_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfileMatch>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Profile_MetaData[] = {
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfileMatch, Profile), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Profile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Profile_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Match_Inner = { "Match", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FProfileMatchItem, METADATA_PARAMS(nullptr, 0) }; // 2313133735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Match_MetaData[] = {
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfileMatch, Match), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Match_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Match_MetaData)) }; // 2313133735
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfileMatch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Match_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileMatch_Statics::NewProp_Match,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfileMatch_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidDeviceProfileSelector,
		nullptr,
		&NewStructOps,
		"ProfileMatch",
		sizeof(FProfileMatch),
		alignof(FProfileMatch),
		Z_Construct_UScriptStruct_FProfileMatch_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileMatch_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileMatch_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileMatch_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfileMatch()
	{
		if (!Z_Registration_Info_UScriptStruct_ProfileMatch.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProfileMatch.InnerSingleton, Z_Construct_UScriptStruct_FProfileMatch_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProfileMatch.InnerSingleton;
	}
	void UAndroidDeviceProfileMatchingRules::StaticRegisterNativesUAndroidDeviceProfileMatchingRules()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAndroidDeviceProfileMatchingRules);
	UClass* Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_NoRegister()
	{
		return UAndroidDeviceProfileMatchingRules::StaticClass();
	}
	struct Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MatchProfile_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatchProfile_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MatchProfile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AndroidDeviceProfileSelector,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidDeviceProfileMatchingRules.h" },
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::NewProp_MatchProfile_Inner = { "MatchProfile", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FProfileMatch, METADATA_PARAMS(nullptr, 0) }; // 1961530197
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::NewProp_MatchProfile_MetaData[] = {
		{ "Category", "Matching Rules" },
		{ "Comment", "/** Array of rules to match */" },
		{ "ModuleRelativePath", "Private/AndroidDeviceProfileMatchingRules.h" },
		{ "ToolTip", "Array of rules to match" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::NewProp_MatchProfile = { "MatchProfile", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAndroidDeviceProfileMatchingRules, MatchProfile), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::NewProp_MatchProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::NewProp_MatchProfile_MetaData)) }; // 1961530197
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::NewProp_MatchProfile_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::NewProp_MatchProfile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidDeviceProfileMatchingRules>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::ClassParams = {
		&UAndroidDeviceProfileMatchingRules::StaticClass,
		"DeviceProfiles",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAndroidDeviceProfileMatchingRules()
	{
		if (!Z_Registration_Info_UClass_UAndroidDeviceProfileMatchingRules.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidDeviceProfileMatchingRules.OuterSingleton, Z_Construct_UClass_UAndroidDeviceProfileMatchingRules_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAndroidDeviceProfileMatchingRules.OuterSingleton;
	}
	template<> ANDROIDDEVICEPROFILESELECTOR_API UClass* StaticClass<UAndroidDeviceProfileMatchingRules>()
	{
		return UAndroidDeviceProfileMatchingRules::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidDeviceProfileMatchingRules);
	UAndroidDeviceProfileMatchingRules::~UAndroidDeviceProfileMatchingRules() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h_Statics::EnumInfo[] = {
		{ ESourceType_StaticEnum, TEXT("ESourceType"), &Z_Registration_Info_UEnum_ESourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2532426222U) },
		{ ECompareType_StaticEnum, TEXT("ECompareType"), &Z_Registration_Info_UEnum_ECompareType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2757590952U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h_Statics::ScriptStructInfo[] = {
		{ FProfileMatchItem::StaticStruct, Z_Construct_UScriptStruct_FProfileMatchItem_Statics::NewStructOps, TEXT("ProfileMatchItem"), &Z_Registration_Info_UScriptStruct_ProfileMatchItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfileMatchItem), 2313133735U) },
		{ FProfileMatch::StaticStruct, Z_Construct_UScriptStruct_FProfileMatch_Statics::NewStructOps, TEXT("ProfileMatch"), &Z_Registration_Info_UScriptStruct_ProfileMatch, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfileMatch), 1961530197U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidDeviceProfileMatchingRules, UAndroidDeviceProfileMatchingRules::StaticClass, TEXT("UAndroidDeviceProfileMatchingRules"), &Z_Registration_Info_UClass_UAndroidDeviceProfileMatchingRules, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidDeviceProfileMatchingRules), 4059377266U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h_3220290741(TEXT("/Script/AndroidDeviceProfileSelector"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AndroidDeviceProfileSelector_Source_AndroidDeviceProfileSelector_Private_AndroidDeviceProfileMatchingRules_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
