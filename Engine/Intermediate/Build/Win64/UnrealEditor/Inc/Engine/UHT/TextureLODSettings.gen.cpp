// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TextureLODSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureLODSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTextureLODSettings();
	ENGINE_API UClass* Z_Construct_UClass_UTextureLODSettings_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureDownscaleOptions();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureMipLoadOptions();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureMipGenSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureLODGroup();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureLODGroup;
class UScriptStruct* FTextureLODGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureLODGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureLODGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureLODGroup, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TextureLODGroup"));
	}
	return Z_Registration_Info_UScriptStruct_TextureLODGroup.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextureLODGroup>()
{
	return FTextureLODGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTextureLODGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Group;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODBias_Smaller_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODBias_Smaller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODBias_Smallest_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODBias_Smallest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumStreamedMips_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumStreamedMips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipGenSettings_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MipGenSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLODSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinLODSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLODSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLODSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLODSize_Smaller_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLODSize_Smaller;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLODSize_Smallest_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLODSize_Smallest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLODSize_VT_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLODSize_VT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalLODBias_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OptionalLODBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalMaxLODSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OptionalMaxLODSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinMagFilter_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MinMagFilter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipFilter_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MipFilter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MipLoadOptions_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MipLoadOptions_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MipLoadOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighPriorityLoad_MetaData[];
#endif
		static void NewProp_HighPriorityLoad_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HighPriorityLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DuplicateNonOptionalMips_MetaData[];
#endif
		static void NewProp_DuplicateNonOptionalMips_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DuplicateNonOptionalMips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Downscale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Downscale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DownscaleOptions_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DownscaleOptions_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DownscaleOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureTileCountBias_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualTextureTileCountBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureTileSizeBias_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualTextureTileSizeBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LossyCompressionAmount_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LossyCompressionAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookPlatformTilingDisabled_MetaData[];
#endif
		static void NewProp_CookPlatformTilingDisabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CookPlatformTilingDisabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** LOD settings for a single texture group. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "LOD settings for a single texture group." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureLODGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_Group_MetaData[] = {
		{ "Comment", "/** Group ID.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Group ID." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, Group), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_Group_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_Group_MetaData)) }; // 3720270347
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_MetaData[] = {
		{ "Comment", "/** Group LOD bias.\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Group LOD bias." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias = { "LODBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, LODBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smaller_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smaller = { "LODBias_Smaller", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, LODBias_Smaller), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smaller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smaller_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smallest_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smallest = { "LODBias_Smallest", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, LODBias_Smallest), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smallest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smallest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_NumStreamedMips_MetaData[] = {
		{ "Comment", "/** Number of mip-levels that can be streamed. -1 means all mips can stream.\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Number of mip-levels that can be streamed. -1 means all mips can stream." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_NumStreamedMips = { "NumStreamedMips", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, NumStreamedMips), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_NumStreamedMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_NumStreamedMips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipGenSettings_MetaData[] = {
		{ "Comment", "/** Defines how the the mip-map generation works, e.g. sharpening\x09\x09\x09\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Defines how the the mip-map generation works, e.g. sharpening" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipGenSettings = { "MipGenSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, MipGenSettings), Z_Construct_UEnum_Engine_TextureMipGenSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipGenSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipGenSettings_MetaData)) }; // 3224170763
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinLODSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinLODSize = { "MinLODSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, MinLODSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinLODSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinLODSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize = { "MaxLODSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, MaxLODSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smaller_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smaller = { "MaxLODSize_Smaller", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, MaxLODSize_Smaller), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smaller_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smaller_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smallest_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smallest = { "MaxLODSize_Smallest", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, MaxLODSize_Smallest), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smallest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smallest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_VT_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_VT = { "MaxLODSize_VT", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, MaxLODSize_VT), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_VT_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_VT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalLODBias_MetaData[] = {
		{ "Comment", "/** If this is greater then 0 will put that number of mips into an optional bulkdata package */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "If this is greater then 0 will put that number of mips into an optional bulkdata package" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalLODBias = { "OptionalLODBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, OptionalLODBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalLODBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalLODBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalMaxLODSize_MetaData[] = {
		{ "Comment", "/** Put all the mips which have a width / height larger then OptionalLODSize into an optional bulkdata package */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Put all the mips which have a width / height larger then OptionalLODSize into an optional bulkdata package" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalMaxLODSize = { "OptionalMaxLODSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, OptionalMaxLODSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalMaxLODSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalMaxLODSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinMagFilter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinMagFilter = { "MinMagFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, MinMagFilter), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinMagFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinMagFilter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipFilter_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipFilter = { "MipFilter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, MipFilter), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipFilter_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipLoadOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipLoadOptions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipLoadOptions = { "MipLoadOptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, MipLoadOptions), Z_Construct_UEnum_Engine_ETextureMipLoadOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipLoadOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipLoadOptions_MetaData)) }; // 1752741819
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_HighPriorityLoad_MetaData[] = {
		{ "Comment", "/** Wether those assets should be loaded with higher load order and higher IO priority. Allows ProjectXX texture groups to behave as character textures. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Wether those assets should be loaded with higher load order and higher IO priority. Allows ProjectXX texture groups to behave as character textures." },
	};
#endif
	void Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_HighPriorityLoad_SetBit(void* Obj)
	{
		((FTextureLODGroup*)Obj)->HighPriorityLoad = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_HighPriorityLoad = { "HighPriorityLoad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTextureLODGroup), &Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_HighPriorityLoad_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_HighPriorityLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_HighPriorityLoad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DuplicateNonOptionalMips_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DuplicateNonOptionalMips_SetBit(void* Obj)
	{
		((FTextureLODGroup*)Obj)->DuplicateNonOptionalMips = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DuplicateNonOptionalMips = { "DuplicateNonOptionalMips", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTextureLODGroup), &Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DuplicateNonOptionalMips_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DuplicateNonOptionalMips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DuplicateNonOptionalMips_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_Downscale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_Downscale = { "Downscale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, Downscale), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_Downscale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_Downscale_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DownscaleOptions_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DownscaleOptions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DownscaleOptions = { "DownscaleOptions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, DownscaleOptions), Z_Construct_UEnum_Engine_ETextureDownscaleOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DownscaleOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DownscaleOptions_MetaData)) }; // 15399735
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_VirtualTextureTileCountBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_VirtualTextureTileCountBias = { "VirtualTextureTileCountBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, VirtualTextureTileCountBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_VirtualTextureTileCountBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_VirtualTextureTileCountBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_VirtualTextureTileSizeBias_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_VirtualTextureTileSizeBias = { "VirtualTextureTileSizeBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, VirtualTextureTileSizeBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_VirtualTextureTileSizeBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_VirtualTextureTileSizeBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LossyCompressionAmount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LossyCompressionAmount = { "LossyCompressionAmount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTextureLODGroup, LossyCompressionAmount), Z_Construct_UEnum_Engine_ETextureLossyCompressionAmount, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LossyCompressionAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LossyCompressionAmount_MetaData)) }; // 1372911062
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_CookPlatformTilingDisabled_MetaData[] = {
		{ "Comment", "/** If true textures with CookPlatformTilingSettings set to TCPTS_FromTextureGroup will not be tiled during cook. They will be tiled when uploaded to the GPU if necessary */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "If true textures with CookPlatformTilingSettings set to TCPTS_FromTextureGroup will not be tiled during cook. They will be tiled when uploaded to the GPU if necessary" },
	};
#endif
	void Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_CookPlatformTilingDisabled_SetBit(void* Obj)
	{
		((FTextureLODGroup*)Obj)->CookPlatformTilingDisabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_CookPlatformTilingDisabled = { "CookPlatformTilingDisabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTextureLODGroup), &Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_CookPlatformTilingDisabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_CookPlatformTilingDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_CookPlatformTilingDisabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureLODGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_Group,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smaller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LODBias_Smallest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_NumStreamedMips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipGenSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinLODSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smaller,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_Smallest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MaxLODSize_VT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalLODBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_OptionalMaxLODSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MinMagFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipFilter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipLoadOptions_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_MipLoadOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_HighPriorityLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DuplicateNonOptionalMips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_Downscale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DownscaleOptions_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_DownscaleOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_VirtualTextureTileCountBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_VirtualTextureTileSizeBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_LossyCompressionAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewProp_CookPlatformTilingDisabled,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureLODGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TextureLODGroup",
		sizeof(FTextureLODGroup),
		alignof(FTextureLODGroup),
		Z_Construct_UScriptStruct_FTextureLODGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureLODGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTextureLODGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_TextureLODGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureLODGroup.InnerSingleton, Z_Construct_UScriptStruct_FTextureLODGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TextureLODGroup.InnerSingleton;
	}
	void UTextureLODSettings::StaticRegisterNativesUTextureLODSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureLODSettings);
	UClass* Z_Construct_UClass_UTextureLODSettings_NoRegister()
	{
		return UTextureLODSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTextureLODSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureLODGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureLODGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureLODGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureLODSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureLODSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Structure containing all information related to an LOD group and providing helper functions to calculate\n * the LOD bias of a given group.\n */" },
		{ "IncludePath", "Engine/TextureLODSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Structure containing all information related to an LOD group and providing helper functions to calculate\nthe LOD bias of a given group." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureLODSettings_Statics::NewProp_TextureLODGroups_Inner = { "TextureLODGroups", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTextureLODGroup, METADATA_PARAMS(nullptr, 0) }; // 355430026
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureLODSettings_Statics::NewProp_TextureLODGroups_MetaData[] = {
		{ "Category", "Texture LOD Settings" },
		{ "Comment", "/** Array of LOD settings with entries per group. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureLODSettings.h" },
		{ "ToolTip", "Array of LOD settings with entries per group." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTextureLODSettings_Statics::NewProp_TextureLODGroups = { "TextureLODGroups", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureLODSettings, TextureLODGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTextureLODSettings_Statics::NewProp_TextureLODGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureLODSettings_Statics::NewProp_TextureLODGroups_MetaData)) }; // 355430026
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureLODSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureLODSettings_Statics::NewProp_TextureLODGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureLODSettings_Statics::NewProp_TextureLODGroups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureLODSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureLODSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureLODSettings_Statics::ClassParams = {
		&UTextureLODSettings::StaticClass,
		"DeviceProfiles",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTextureLODSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureLODSettings_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureLODSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureLODSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureLODSettings()
	{
		if (!Z_Registration_Info_UClass_UTextureLODSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureLODSettings.OuterSingleton, Z_Construct_UClass_UTextureLODSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureLODSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UTextureLODSettings>()
	{
		return UTextureLODSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureLODSettings);
	UTextureLODSettings::~UTextureLODSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_Statics::ScriptStructInfo[] = {
		{ FTextureLODGroup::StaticStruct, Z_Construct_UScriptStruct_FTextureLODGroup_Statics::NewStructOps, TEXT("TextureLODGroup"), &Z_Registration_Info_UScriptStruct_TextureLODGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureLODGroup), 355430026U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureLODSettings, UTextureLODSettings::StaticClass, TEXT("UTextureLODSettings"), &Z_Registration_Info_UClass_UTextureLODSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureLODSettings), 4285865384U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_307113329(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureLODSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
