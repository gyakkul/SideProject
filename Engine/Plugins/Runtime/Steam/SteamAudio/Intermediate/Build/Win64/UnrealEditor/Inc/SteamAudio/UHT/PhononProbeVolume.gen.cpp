// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PhononProbeVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhononProbeVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	STEAMAUDIO_API UClass* Z_Construct_UClass_APhononProbeVolume();
	STEAMAUDIO_API UClass* Z_Construct_UClass_APhononProbeVolume_NoRegister();
	STEAMAUDIO_API UClass* Z_Construct_UClass_UPhononProbeComponent_NoRegister();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EPhononProbeMobility();
	STEAMAUDIO_API UEnum* Z_Construct_UEnum_SteamAudio_EPhononProbePlacementStrategy();
	STEAMAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FBakedDataInfo();
	UPackage* Z_Construct_UPackage__Script_SteamAudio();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhononProbePlacementStrategy;
	static UEnum* EPhononProbePlacementStrategy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhononProbePlacementStrategy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhononProbePlacementStrategy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EPhononProbePlacementStrategy, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EPhononProbePlacementStrategy"));
		}
		return Z_Registration_Info_UEnum_EPhononProbePlacementStrategy.OuterSingleton;
	}
	template<> STEAMAUDIO_API UEnum* StaticEnum<EPhononProbePlacementStrategy>()
	{
		return EPhononProbePlacementStrategy_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAudio_EPhononProbePlacementStrategy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAudio_EPhononProbePlacementStrategy_Statics::Enumerators[] = {
		{ "EPhononProbePlacementStrategy::CENTROID", (int64)EPhononProbePlacementStrategy::CENTROID },
		{ "EPhononProbePlacementStrategy::UNIFORM_FLOOR", (int64)EPhononProbePlacementStrategy::UNIFORM_FLOOR },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAudio_EPhononProbePlacementStrategy_Statics::Enum_MetaDataParams[] = {
		{ "CENTROID.Comment", "// Places a single probe at the centroid of the volume.\n" },
		{ "CENTROID.DisplayName", "Centroid" },
		{ "CENTROID.Name", "EPhononProbePlacementStrategy::CENTROID" },
		{ "CENTROID.ToolTip", "Places a single probe at the centroid of the volume." },
		{ "ModuleRelativePath", "Private/PhononProbeVolume.h" },
		{ "UNIFORM_FLOOR.Comment", "// Places uniformly spaced probes along the floor at a specified height.\n" },
		{ "UNIFORM_FLOOR.DisplayName", "Uniform Floor" },
		{ "UNIFORM_FLOOR.Name", "EPhononProbePlacementStrategy::UNIFORM_FLOOR" },
		{ "UNIFORM_FLOOR.ToolTip", "Places uniformly spaced probes along the floor at a specified height." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EPhononProbePlacementStrategy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		"EPhononProbePlacementStrategy",
		"EPhononProbePlacementStrategy",
		Z_Construct_UEnum_SteamAudio_EPhononProbePlacementStrategy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EPhononProbePlacementStrategy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamAudio_EPhononProbePlacementStrategy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EPhononProbePlacementStrategy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamAudio_EPhononProbePlacementStrategy()
	{
		if (!Z_Registration_Info_UEnum_EPhononProbePlacementStrategy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhononProbePlacementStrategy.InnerSingleton, Z_Construct_UEnum_SteamAudio_EPhononProbePlacementStrategy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhononProbePlacementStrategy.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPhononProbeMobility;
	static UEnum* EPhononProbeMobility_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPhononProbeMobility.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPhononProbeMobility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SteamAudio_EPhononProbeMobility, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("EPhononProbeMobility"));
		}
		return Z_Registration_Info_UEnum_EPhononProbeMobility.OuterSingleton;
	}
	template<> STEAMAUDIO_API UEnum* StaticEnum<EPhononProbeMobility>()
	{
		return EPhononProbeMobility_StaticEnum();
	}
	struct Z_Construct_UEnum_SteamAudio_EPhononProbeMobility_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SteamAudio_EPhononProbeMobility_Statics::Enumerators[] = {
		{ "EPhononProbeMobility::STATIC", (int64)EPhononProbeMobility::STATIC },
		{ "EPhononProbeMobility::DYNAMIC", (int64)EPhononProbeMobility::DYNAMIC },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SteamAudio_EPhononProbeMobility_Statics::Enum_MetaDataParams[] = {
		{ "DYNAMIC.Comment", "// Dynamic probes inherit this volume's offset at runtime.\n" },
		{ "DYNAMIC.DisplayName", "Dynamic" },
		{ "DYNAMIC.Name", "EPhononProbeMobility::DYNAMIC" },
		{ "DYNAMIC.ToolTip", "Dynamic probes inherit this volume's offset at runtime." },
		{ "ModuleRelativePath", "Private/PhononProbeVolume.h" },
		{ "STATIC.Comment", "// Static probes remain fixed at runtime.\n" },
		{ "STATIC.DisplayName", "Static" },
		{ "STATIC.Name", "EPhononProbeMobility::STATIC" },
		{ "STATIC.ToolTip", "Static probes remain fixed at runtime." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SteamAudio_EPhononProbeMobility_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		"EPhononProbeMobility",
		"EPhononProbeMobility",
		Z_Construct_UEnum_SteamAudio_EPhononProbeMobility_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EPhononProbeMobility_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SteamAudio_EPhononProbeMobility_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SteamAudio_EPhononProbeMobility_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SteamAudio_EPhononProbeMobility()
	{
		if (!Z_Registration_Info_UEnum_EPhononProbeMobility.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPhononProbeMobility.InnerSingleton, Z_Construct_UEnum_SteamAudio_EPhononProbeMobility_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPhononProbeMobility.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BakedDataInfo;
class UScriptStruct* FBakedDataInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BakedDataInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BakedDataInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBakedDataInfo, (UObject*)Z_Construct_UPackage__Script_SteamAudio(), TEXT("BakedDataInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BakedDataInfo.OuterSingleton;
}
template<> STEAMAUDIO_API UScriptStruct* StaticStruct<FBakedDataInfo>()
{
	return FBakedDataInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBakedDataInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedDataInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/PhononProbeVolume.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBakedDataInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBakedDataInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedDataInfo_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/PhononProbeVolume.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBakedDataInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedDataInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedDataInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedDataInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBakedDataInfo_Statics::NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Private/PhononProbeVolume.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakedDataInfo_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBakedDataInfo, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedDataInfo_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedDataInfo_Statics::NewProp_Size_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBakedDataInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedDataInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakedDataInfo_Statics::NewProp_Size,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBakedDataInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
		nullptr,
		&NewStructOps,
		"BakedDataInfo",
		sizeof(FBakedDataInfo),
		alignof(FBakedDataInfo),
		Z_Construct_UScriptStruct_FBakedDataInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedDataInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBakedDataInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakedDataInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBakedDataInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_BakedDataInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BakedDataInfo.InnerSingleton, Z_Construct_UScriptStruct_FBakedDataInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BakedDataInfo.InnerSingleton;
	}
	void APhononProbeVolume::StaticRegisterNativesAPhononProbeVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APhononProbeVolume);
	UClass* Z_Construct_UClass_APhononProbeVolume_NoRegister()
	{
		return APhononProbeVolume::StaticClass();
	}
	struct Z_Construct_UClass_APhononProbeVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PlacementStrategy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlacementStrategy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PlacementStrategy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizontalSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightAboveFloor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightAboveFloor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumProbes_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumProbes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProbeDataSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ProbeDataSize;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BakedDataInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedDataInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BakedDataInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhononProbeComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhononProbeComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProbeBoxFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProbeBoxFileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProbeBatchFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProbeBatchFileName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APhononProbeVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhononProbeVolume_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * Phonon Probe volumes generate a set of probes at which acoustic information will be sampled\n * at bake time.\n */" },
		{ "HideCategories", "Actor Advanced Attachment Collision Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "PhononProbeVolume.h" },
		{ "ModuleRelativePath", "Private/PhononProbeVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Phonon Probe volumes generate a set of probes at which acoustic information will be sampled\nat bake time." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_PlacementStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_PlacementStrategy_MetaData[] = {
		{ "Category", "ProbeGeneration" },
		{ "Comment", "// Method by which probes are placed within the volume.\n" },
		{ "ModuleRelativePath", "Private/PhononProbeVolume.h" },
		{ "ToolTip", "Method by which probes are placed within the volume." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_PlacementStrategy = { "PlacementStrategy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhononProbeVolume, PlacementStrategy), Z_Construct_UEnum_SteamAudio_EPhononProbePlacementStrategy, METADATA_PARAMS(Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_PlacementStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_PlacementStrategy_MetaData)) }; // 1483422604
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_HorizontalSpacing_MetaData[] = {
		{ "Category", "ProbeGeneration" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How far apart to place probes.\n" },
		{ "ModuleRelativePath", "Private/PhononProbeVolume.h" },
		{ "ToolTip", "How far apart to place probes." },
		{ "UIMax", "5000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_HorizontalSpacing = { "HorizontalSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhononProbeVolume, HorizontalSpacing), METADATA_PARAMS(Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_HorizontalSpacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_HorizontalSpacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_HeightAboveFloor_MetaData[] = {
		{ "Category", "ProbeGeneration" },
		{ "ClampMax", "5000.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// How high above the floor to place probes.\n" },
		{ "ModuleRelativePath", "Private/PhononProbeVolume.h" },
		{ "ToolTip", "How high above the floor to place probes." },
		{ "UIMax", "5000.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_HeightAboveFloor = { "HeightAboveFloor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhononProbeVolume, HeightAboveFloor), METADATA_PARAMS(Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_HeightAboveFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_HeightAboveFloor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_NumProbes_MetaData[] = {
		{ "Category", "ProbeVolumeStatistics" },
		{ "Comment", "// Number of probes contained in this probe volume.\n" },
		{ "DisplayName", "Probe Points" },
		{ "ModuleRelativePath", "Private/PhononProbeVolume.h" },
		{ "ToolTip", "Number of probes contained in this probe volume." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_NumProbes = { "NumProbes", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhononProbeVolume, NumProbes), METADATA_PARAMS(Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_NumProbes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_NumProbes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_ProbeDataSize_MetaData[] = {
		{ "Category", "ProbeVolumeStatistics" },
		{ "Comment", "// Size of probe data in bytes.\n" },
		{ "DisplayName", "Probe Data Size" },
		{ "ModuleRelativePath", "Private/PhononProbeVolume.h" },
		{ "ToolTip", "Size of probe data in bytes." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_ProbeDataSize = { "ProbeDataSize", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhononProbeVolume, ProbeDataSize), METADATA_PARAMS(Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_ProbeDataSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_ProbeDataSize_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_BakedDataInfo_Inner = { "BakedDataInfo", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBakedDataInfo, METADATA_PARAMS(nullptr, 0) }; // 3762161669
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_BakedDataInfo_MetaData[] = {
		{ "Category", "ProbeVolumeStatistics" },
		{ "Comment", "// Useful information for each baked source.\n" },
		{ "DisplayName", "Detailed Statistics" },
		{ "ModuleRelativePath", "Private/PhononProbeVolume.h" },
		{ "ToolTip", "Useful information for each baked source." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_BakedDataInfo = { "BakedDataInfo", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhononProbeVolume, BakedDataInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_BakedDataInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_BakedDataInfo_MetaData)) }; // 3762161669
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_PhononProbeComponent_MetaData[] = {
		{ "Comment", "// Component used for visualization.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/PhononProbeVolume.h" },
		{ "ToolTip", "Component used for visualization." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_PhononProbeComponent = { "PhononProbeComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhononProbeVolume, PhononProbeComponent), Z_Construct_UClass_UPhononProbeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_PhononProbeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_PhononProbeComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_ProbeBoxFileName_MetaData[] = {
		{ "Comment", "// Current filename where probe box data is stored. Used to maintain connection if volume is renamed.\n" },
		{ "ModuleRelativePath", "Private/PhononProbeVolume.h" },
		{ "ToolTip", "Current filename where probe box data is stored. Used to maintain connection if volume is renamed." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_ProbeBoxFileName = { "ProbeBoxFileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhononProbeVolume, ProbeBoxFileName), METADATA_PARAMS(Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_ProbeBoxFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_ProbeBoxFileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_ProbeBatchFileName_MetaData[] = {
		{ "Comment", "// Current filename where probe batch data is stored. Used to maintain connection if volume is renamed.\n" },
		{ "ModuleRelativePath", "Private/PhononProbeVolume.h" },
		{ "ToolTip", "Current filename where probe batch data is stored. Used to maintain connection if volume is renamed." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_ProbeBatchFileName = { "ProbeBatchFileName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APhononProbeVolume, ProbeBatchFileName), METADATA_PARAMS(Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_ProbeBatchFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_ProbeBatchFileName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APhononProbeVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_PlacementStrategy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_PlacementStrategy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_HorizontalSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_HeightAboveFloor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_NumProbes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_ProbeDataSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_BakedDataInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_BakedDataInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_PhononProbeComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_ProbeBoxFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APhononProbeVolume_Statics::NewProp_ProbeBatchFileName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APhononProbeVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhononProbeVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APhononProbeVolume_Statics::ClassParams = {
		&APhononProbeVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APhononProbeVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APhononProbeVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APhononProbeVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APhononProbeVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APhononProbeVolume()
	{
		if (!Z_Registration_Info_UClass_APhononProbeVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APhononProbeVolume.OuterSingleton, Z_Construct_UClass_APhononProbeVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APhononProbeVolume.OuterSingleton;
	}
	template<> STEAMAUDIO_API UClass* StaticClass<APhononProbeVolume>()
	{
		return APhononProbeVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APhononProbeVolume);
	APhononProbeVolume::~APhononProbeVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononProbeVolume_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononProbeVolume_h_Statics::EnumInfo[] = {
		{ EPhononProbePlacementStrategy_StaticEnum, TEXT("EPhononProbePlacementStrategy"), &Z_Registration_Info_UEnum_EPhononProbePlacementStrategy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1483422604U) },
		{ EPhononProbeMobility_StaticEnum, TEXT("EPhononProbeMobility"), &Z_Registration_Info_UEnum_EPhononProbeMobility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 182781695U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononProbeVolume_h_Statics::ScriptStructInfo[] = {
		{ FBakedDataInfo::StaticStruct, Z_Construct_UScriptStruct_FBakedDataInfo_Statics::NewStructOps, TEXT("BakedDataInfo"), &Z_Registration_Info_UScriptStruct_BakedDataInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBakedDataInfo), 3762161669U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononProbeVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APhononProbeVolume, APhononProbeVolume::StaticClass, TEXT("APhononProbeVolume"), &Z_Registration_Info_UClass_APhononProbeVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APhononProbeVolume), 488395901U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononProbeVolume_h_3524980918(TEXT("/Script/SteamAudio"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononProbeVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononProbeVolume_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononProbeVolume_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononProbeVolume_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononProbeVolume_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamAudio_Source_SteamAudio_Private_PhononProbeVolume_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
