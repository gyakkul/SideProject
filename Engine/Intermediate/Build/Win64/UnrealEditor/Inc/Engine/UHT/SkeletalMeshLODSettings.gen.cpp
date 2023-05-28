// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "../../Source/Runtime/Engine/Public/PerPlatformProperties.h"
#include "../../Source/Runtime/Engine/Public/PerQualityLevelProperties.h"
#include "../../Source/Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshLODSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshLODSettings();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneFilterActionOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneFilter();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerQualityLevelInt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoneFilterActionOption;
	static UEnum* EBoneFilterActionOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBoneFilterActionOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBoneFilterActionOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBoneFilterActionOption, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBoneFilterActionOption"));
		}
		return Z_Registration_Info_UEnum_EBoneFilterActionOption.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBoneFilterActionOption>()
	{
		return EBoneFilterActionOption_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EBoneFilterActionOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EBoneFilterActionOption_Statics::Enumerators[] = {
		{ "EBoneFilterActionOption::Remove", (int64)EBoneFilterActionOption::Remove },
		{ "EBoneFilterActionOption::Keep", (int64)EBoneFilterActionOption::Keep },
		{ "EBoneFilterActionOption::Invalid", (int64)EBoneFilterActionOption::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EBoneFilterActionOption_Statics::Enum_MetaDataParams[] = {
		{ "Invalid.Comment", "/** Invalid*/" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EBoneFilterActionOption::Invalid" },
		{ "Invalid.ToolTip", "Invalid" },
		{ "Keep.Comment", "/** Only keep the joints specified and parents. All the other joints will be removed. */" },
		{ "Keep.DisplayName", "Only keep the joints specified and parents" },
		{ "Keep.Name", "EBoneFilterActionOption::Keep" },
		{ "Keep.ToolTip", "Only keep the joints specified and parents. All the other joints will be removed." },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "Remove.Comment", "/** Remove list of joints specified and children. All the other joints will be kept. */" },
		{ "Remove.DisplayName", "Remove the joints specified and children" },
		{ "Remove.Name", "EBoneFilterActionOption::Remove" },
		{ "Remove.ToolTip", "Remove list of joints specified and children. All the other joints will be kept." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBoneFilterActionOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EBoneFilterActionOption",
		"EBoneFilterActionOption",
		Z_Construct_UEnum_Engine_EBoneFilterActionOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneFilterActionOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EBoneFilterActionOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBoneFilterActionOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EBoneFilterActionOption()
	{
		if (!Z_Registration_Info_UEnum_EBoneFilterActionOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoneFilterActionOption.InnerSingleton, Z_Construct_UEnum_Engine_EBoneFilterActionOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBoneFilterActionOption.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoneFilter;
class UScriptStruct* FBoneFilter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoneFilter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoneFilter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneFilter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("BoneFilter"));
	}
	return Z_Registration_Info_UScriptStruct_BoneFilter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoneFilter>()
{
	return FBoneFilter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoneFilter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExcludeSelf_MetaData[];
#endif
		static void NewProp_bExcludeSelf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExcludeSelf;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneFilter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_bExcludeSelf_MetaData[] = {
		{ "Category", "FBoneFilter" },
		{ "Comment", "/*\n\x09 * Do not include the joint specified\n\x09 *\n\x09 * This option will work differently based on EBoneFilterActionOption\n\x09 * If EBoneFilterActionOption is Remove, it will exclude itself and only remove children\n\x09 * For example, if you specify hand, it will only include children of hand(all fingers), \n\x09 * not the hand itself if this is true\n\x09 * \n\x09 * But if the EBoneFilterActionOption is Keep, it will exclude itself but include all parents of it \n\x09 * You can't remove joint without children removed, and you can't keep without your parents \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "* Do not include the joint specified\n*\n* This option will work differently based on EBoneFilterActionOption\n* If EBoneFilterActionOption is Remove, it will exclude itself and only remove children\n* For example, if you specify hand, it will only include children of hand(all fingers),\n* not the hand itself if this is true\n*\n* But if the EBoneFilterActionOption is Keep, it will exclude itself but include all parents of it\n* You can't remove joint without children removed, and you can't keep without your parents" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_bExcludeSelf_SetBit(void* Obj)
	{
		((FBoneFilter*)Obj)->bExcludeSelf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_bExcludeSelf = { "bExcludeSelf", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBoneFilter), &Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_bExcludeSelf_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_bExcludeSelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_bExcludeSelf_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "FBoneFilter" },
		{ "Comment", "/* Name of Bone Name */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Name of Bone Name" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBoneFilter, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_bExcludeSelf,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneFilter_Statics::NewProp_BoneName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BoneFilter",
		sizeof(FBoneFilter),
		alignof(FBoneFilter),
		Z_Construct_UScriptStruct_FBoneFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneFilter()
	{
		if (!Z_Registration_Info_UScriptStruct_BoneFilter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoneFilter.InnerSingleton, Z_Construct_UScriptStruct_FBoneFilter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoneFilter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SkeletalMeshLODGroupSettings;
class UScriptStruct* FSkeletalMeshLODGroupSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SkeletalMeshLODGroupSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SkeletalMeshLODGroupSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshLODGroupSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SkeletalMeshLODGroupSettings.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshLODGroupSettings>()
{
	return FSkeletalMeshLODGroupSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODHysteresis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LODHysteresis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoneFilterActionOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneFilterActionOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoneFilterActionOption;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneList;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BonesToPrioritize_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BonesToPrioritize_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BonesToPrioritize;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SectionsToPrioritize_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SectionsToPrioritize_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionsToPrioritize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeightOfPrioritization_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightOfPrioritization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakePose_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BakePose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReductionSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReductionSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshLODGroupSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "LODSetting" },
		{ "Comment", "/** The screen sizes to use for the respective LOD level */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "The screen sizes to use for the respective LOD level" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, ScreenSize), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ScreenSize_MetaData)) }; // 167720259
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_LODHysteresis_MetaData[] = {
		{ "Category", "LODSetting" },
		{ "Comment", "/**\x09Used to avoid 'flickering' when on LOD boundary. Only taken into account when moving from complex->simple. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Used to avoid 'flickering' when on LOD boundary. Only taken into account when moving from complex->simple." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_LODHysteresis = { "LODHysteresis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, LODHysteresis), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_LODHysteresis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_LODHysteresis_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneFilterActionOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneFilterActionOption_MetaData[] = {
		{ "Category", "Reduction" },
		{ "Comment", "/** Bones which should be removed from the skeleton for the LOD level */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Bones which should be removed from the skeleton for the LOD level" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneFilterActionOption = { "BoneFilterActionOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, BoneFilterActionOption), Z_Construct_UEnum_Engine_EBoneFilterActionOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneFilterActionOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneFilterActionOption_MetaData)) }; // 3394170763
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneList_Inner = { "BoneList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneFilter, METADATA_PARAMS(nullptr, 0) }; // 773593848
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneList_MetaData[] = {
		{ "Category", "Reduction" },
		{ "Comment", "/** Bones which should be removed from the skeleton for the LOD level */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Bones which should be removed from the skeleton for the LOD level" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneList = { "BoneList", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, BoneList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneList_MetaData)) }; // 773593848
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BonesToPrioritize_Inner = { "BonesToPrioritize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BonesToPrioritize_MetaData[] = {
		{ "Category", "Reduction" },
		{ "Comment", "/** Bones which should be prioritized for the quality, this will be weighted toward keeping source data. Use WeightOfPrioritization to control the value. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Bones which should be prioritized for the quality, this will be weighted toward keeping source data. Use WeightOfPrioritization to control the value." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BonesToPrioritize = { "BonesToPrioritize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, BonesToPrioritize), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BonesToPrioritize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BonesToPrioritize_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_SectionsToPrioritize_Inner = { "SectionsToPrioritize", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_SectionsToPrioritize_MetaData[] = {
		{ "Category", "Reduction" },
		{ "Comment", "/** Sections which should be prioritized for the quality, this will be weighted toward keeping source data. Use WeightOfPrioritization to control the value. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Sections which should be prioritized for the quality, this will be weighted toward keeping source data. Use WeightOfPrioritization to control the value." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_SectionsToPrioritize = { "SectionsToPrioritize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, SectionsToPrioritize), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_SectionsToPrioritize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_SectionsToPrioritize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_WeightOfPrioritization_MetaData[] = {
		{ "Category", "Reduction" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How much to consideration to give BonesToPrioritize and SectionsToPrioritize.  The weight is an additional vertex simplification penalty where 0 means nothing. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "How much to consideration to give BonesToPrioritize and SectionsToPrioritize.  The weight is an additional vertex simplification penalty where 0 means nothing." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_WeightOfPrioritization = { "WeightOfPrioritization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, WeightOfPrioritization), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_WeightOfPrioritization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_WeightOfPrioritization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BakePose_MetaData[] = {
		{ "Category", "Reduction" },
		{ "Comment", "/** Pose which should be used to reskin vertex influences for which the bones will be removed in this LOD level, uses ref-pose by default */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Pose which should be used to reskin vertex influences for which the bones will be removed in this LOD level, uses ref-pose by default" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BakePose = { "BakePose", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, BakePose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BakePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BakePose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ReductionSettings_MetaData[] = {
		{ "Category", "Reduction" },
		{ "Comment", "/** The optimization settings to use for the respective LOD level */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "The optimization settings to use for the respective LOD level" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ReductionSettings = { "ReductionSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSkeletalMeshLODGroupSettings, ReductionSettings), Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ReductionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ReductionSettings_MetaData)) }; // 1830909609
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ScreenSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_LODHysteresis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneFilterActionOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneFilterActionOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BoneList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BonesToPrioritize_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BonesToPrioritize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_SectionsToPrioritize_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_SectionsToPrioritize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_WeightOfPrioritization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_BakePose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewProp_ReductionSettings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshLODGroupSettings",
		sizeof(FSkeletalMeshLODGroupSettings),
		alignof(FSkeletalMeshLODGroupSettings),
		Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_SkeletalMeshLODGroupSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SkeletalMeshLODGroupSettings.InnerSingleton, Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SkeletalMeshLODGroupSettings.InnerSingleton;
	}
	void USkeletalMeshLODSettings::StaticRegisterNativesUSkeletalMeshLODSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshLODSettings);
	UClass* Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister()
	{
		return USkeletalMeshLODSettings::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshLODSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinQualityLevelLod_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinQualityLevelLod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLod_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinLod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisableBelowMinLodStripping_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DisableBelowMinLodStripping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLODStreamingSettings_MetaData[];
#endif
		static void NewProp_bOverrideLODStreamingSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLODStreamingSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSupportLODStreaming_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_bSupportLODStreaming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumStreamedLODs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxNumStreamedLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumOptionalLODs_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxNumOptionalLODs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LODGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LODGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshLODSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshLODSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Engine/SkeletalMeshLODSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MinQualityLevelLod_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** Minimum Quality Level LOD to render. Can be overridden per mesh as well as set here for all mesh instances */" },
		{ "DisplayName", "Quality Level Minimum LOD" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Minimum Quality Level LOD to render. Can be overridden per mesh as well as set here for all mesh instances" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MinQualityLevelLod = { "MinQualityLevelLod", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshLODSettings, MinQualityLevelLod), Z_Construct_UScriptStruct_FPerQualityLevelInt, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MinQualityLevelLod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MinQualityLevelLod_MetaData)) }; // 1607049419
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MinLod_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** Minimum LOD to render. Can be overridden per mesh as well as set here for all mesh instances */" },
		{ "DisplayName", "Minimum LOD" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Minimum LOD to render. Can be overridden per mesh as well as set here for all mesh instances" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MinLod = { "MinLod", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshLODSettings, MinLod), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MinLod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MinLod_MetaData)) }; // 1463691826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_DisableBelowMinLodStripping_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** When true LODs below MinLod will not be stripped during cook. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "When true LODs below MinLod will not be stripped during cook." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_DisableBelowMinLodStripping = { "DisableBelowMinLodStripping", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshLODSettings, DisableBelowMinLodStripping), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_DisableBelowMinLodStripping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_DisableBelowMinLodStripping_MetaData)) }; // 3656766386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bOverrideLODStreamingSettings_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** Whether meshes in this group override default LOD streaming settings. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Whether meshes in this group override default LOD streaming settings." },
	};
#endif
	void Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bOverrideLODStreamingSettings_SetBit(void* Obj)
	{
		((USkeletalMeshLODSettings*)Obj)->bOverrideLODStreamingSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bOverrideLODStreamingSettings = { "bOverrideLODStreamingSettings", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USkeletalMeshLODSettings), &Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bOverrideLODStreamingSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bOverrideLODStreamingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bOverrideLODStreamingSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bSupportLODStreaming_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** Whether meshes in this group stream LODs by default */" },
		{ "DisplayName", "Stream LODs" },
		{ "EditCondition", "bOverrideLODStreamingSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Whether meshes in this group stream LODs by default" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bSupportLODStreaming = { "bSupportLODStreaming", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshLODSettings, bSupportLODStreaming), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bSupportLODStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bSupportLODStreaming_MetaData)) }; // 3656766386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumStreamedLODs_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** Default maximum number of streamed LODs for meshes in this group */" },
		{ "EditCondition", "bOverrideLODStreamingSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Default maximum number of streamed LODs for meshes in this group" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumStreamedLODs = { "MaxNumStreamedLODs", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshLODSettings, MaxNumStreamedLODs), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumStreamedLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumStreamedLODs_MetaData)) }; // 1463691826
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumOptionalLODs_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "Comment", "/** Default maximum number of optional LODs for meshes in this group (currently, need to be either 0 or > num of LODs below MinLod) */" },
		{ "EditCondition", "bOverrideLODStreamingSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
		{ "ToolTip", "Default maximum number of optional LODs for meshes in this group (currently, need to be either 0 or > num of LODs below MinLod)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumOptionalLODs = { "MaxNumOptionalLODs", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshLODSettings, MaxNumOptionalLODs), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumOptionalLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumOptionalLODs_MetaData)) }; // 1463691826
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_LODGroups_Inner = { "LODGroups", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings, METADATA_PARAMS(nullptr, 0) }; // 1740567086
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_LODGroups_MetaData[] = {
		{ "Category", "LODGroups" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMeshLODSettings.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_LODGroups = { "LODGroups", nullptr, (EPropertyFlags)0x0020080000044001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshLODSettings, LODGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_LODGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_LODGroups_MetaData)) }; // 1740567086
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalMeshLODSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MinQualityLevelLod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MinLod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_DisableBelowMinLodStripping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bOverrideLODStreamingSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_bSupportLODStreaming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumStreamedLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_MaxNumOptionalLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_LODGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshLODSettings_Statics::NewProp_LODGroups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshLODSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshLODSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshLODSettings_Statics::ClassParams = {
		&USkeletalMeshLODSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkeletalMeshLODSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::PropPointers),
		0,
		0x000800A6u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshLODSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshLODSettings()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshLODSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshLODSettings.OuterSingleton, Z_Construct_UClass_USkeletalMeshLODSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshLODSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USkeletalMeshLODSettings>()
	{
		return USkeletalMeshLODSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshLODSettings);
	USkeletalMeshLODSettings::~USkeletalMeshLODSettings() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMeshLODSettings)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_Statics::EnumInfo[] = {
		{ EBoneFilterActionOption_StaticEnum, TEXT("EBoneFilterActionOption"), &Z_Registration_Info_UEnum_EBoneFilterActionOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3394170763U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_Statics::ScriptStructInfo[] = {
		{ FBoneFilter::StaticStruct, Z_Construct_UScriptStruct_FBoneFilter_Statics::NewStructOps, TEXT("BoneFilter"), &Z_Registration_Info_UScriptStruct_BoneFilter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoneFilter), 773593848U) },
		{ FSkeletalMeshLODGroupSettings::StaticStruct, Z_Construct_UScriptStruct_FSkeletalMeshLODGroupSettings_Statics::NewStructOps, TEXT("SkeletalMeshLODGroupSettings"), &Z_Registration_Info_UScriptStruct_SkeletalMeshLODGroupSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSkeletalMeshLODGroupSettings), 1740567086U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshLODSettings, USkeletalMeshLODSettings::StaticClass, TEXT("USkeletalMeshLODSettings"), &Z_Registration_Info_UClass_USkeletalMeshLODSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshLODSettings), 1620468473U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_2415533705(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SkeletalMeshLODSettings_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
