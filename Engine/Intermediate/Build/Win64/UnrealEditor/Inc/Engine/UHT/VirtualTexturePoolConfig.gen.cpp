// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/VT/VirtualTexturePoolConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualTexturePoolConfig() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTexturePoolConfig();
	ENGINE_API UClass* Z_Construct_UClass_UVirtualTexturePoolConfig_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VirtualTextureSpacePoolConfig;
class UScriptStruct* FVirtualTextureSpacePoolConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VirtualTextureSpacePoolConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VirtualTextureSpacePoolConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("VirtualTextureSpacePoolConfig"));
	}
	return Z_Registration_Info_UScriptStruct_VirtualTextureSpacePoolConfig.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVirtualTextureSpacePoolConfig>()
{
	return FVirtualTextureSpacePoolConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinTileSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinTileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTileSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTileSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Formats_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Formats_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Formats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeInMegabyte_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeInMegabyte;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableResidencyMipMapBias_MetaData[];
#endif
		static void NewProp_bEnableResidencyMipMapBias_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableResidencyMipMapBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSizeScale_MetaData[];
#endif
		static void NewProp_bAllowSizeScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSizeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalabilityGroup_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ScalabilityGroup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinScaledSizeInMegabyte_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinScaledSizeInMegabyte;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxScaledSizeInMegabyte_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxScaledSizeInMegabyte;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* Settings of a single pool\n*/" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Settings of a single pool" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualTextureSpacePoolConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MinTileSize_MetaData[] = {
		{ "Comment", "/** Minimum tile size to match (including tile border). */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Minimum tile size to match (including tile border)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MinTileSize = { "MinTileSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualTextureSpacePoolConfig, MinTileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MinTileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MinTileSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MaxTileSize_MetaData[] = {
		{ "Comment", "/** Maximum tile size to match (including tile border). */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Maximum tile size to match (including tile border)." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MaxTileSize = { "MaxTileSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualTextureSpacePoolConfig, MaxTileSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MaxTileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MaxTileSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_Formats_Inner = { "Formats", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(nullptr, 0) }; // 2651536151
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_Formats_MetaData[] = {
		{ "Comment", "/** Format set to match. One pool can contain multiple layers with synchronized page table mappings. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Format set to match. One pool can contain multiple layers with synchronized page table mappings." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_Formats = { "Formats", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualTextureSpacePoolConfig, Formats), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_Formats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_Formats_MetaData)) }; // 2651536151
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_SizeInMegabyte_MetaData[] = {
		{ "Comment", "/** Size in megabytes to allocate for the pool. The allocator will allocate as close as possible below this limit. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Size in megabytes to allocate for the pool. The allocator will allocate as close as possible below this limit." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_SizeInMegabyte = { "SizeInMegabyte", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualTextureSpacePoolConfig, SizeInMegabyte), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_SizeInMegabyte_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_SizeInMegabyte_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bEnableResidencyMipMapBias_MetaData[] = {
		{ "Comment", "/** Enable MipMapBias based on pool residency tracking. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Enable MipMapBias based on pool residency tracking." },
	};
#endif
	void Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bEnableResidencyMipMapBias_SetBit(void* Obj)
	{
		((FVirtualTextureSpacePoolConfig*)Obj)->bEnableResidencyMipMapBias = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bEnableResidencyMipMapBias = { "bEnableResidencyMipMapBias", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVirtualTextureSpacePoolConfig), &Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bEnableResidencyMipMapBias_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bEnableResidencyMipMapBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bEnableResidencyMipMapBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bAllowSizeScale_MetaData[] = {
		{ "Comment", "/** Allow the size to allocate for the pool to be scaled by some factor. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Allow the size to allocate for the pool to be scaled by some factor." },
	};
#endif
	void Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bAllowSizeScale_SetBit(void* Obj)
	{
		((FVirtualTextureSpacePoolConfig*)Obj)->bAllowSizeScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bAllowSizeScale = { "bAllowSizeScale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVirtualTextureSpacePoolConfig), &Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bAllowSizeScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bAllowSizeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bAllowSizeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_ScalabilityGroup_MetaData[] = {
		{ "Comment", "/** Scalability group index that gives the size scale. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Scalability group index that gives the size scale." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_ScalabilityGroup = { "ScalabilityGroup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualTextureSpacePoolConfig, ScalabilityGroup), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_ScalabilityGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_ScalabilityGroup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MinScaledSizeInMegabyte_MetaData[] = {
		{ "Comment", "/** Lower limit of size in megabytes to allocate for the pool after size scaling. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Lower limit of size in megabytes to allocate for the pool after size scaling." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MinScaledSizeInMegabyte = { "MinScaledSizeInMegabyte", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualTextureSpacePoolConfig, MinScaledSizeInMegabyte), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MinScaledSizeInMegabyte_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MinScaledSizeInMegabyte_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MaxScaledSizeInMegabyte_MetaData[] = {
		{ "Comment", "/** Upper limit of size in megabytes to allocate for the pool after size scaling. */" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Upper limit of size in megabytes to allocate for the pool after size scaling." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MaxScaledSizeInMegabyte = { "MaxScaledSizeInMegabyte", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualTextureSpacePoolConfig, MaxScaledSizeInMegabyte), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MaxScaledSizeInMegabyte_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MaxScaledSizeInMegabyte_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MinTileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MaxTileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_Formats_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_Formats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_SizeInMegabyte,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bEnableResidencyMipMapBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_bAllowSizeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_ScalabilityGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MinScaledSizeInMegabyte,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewProp_MaxScaledSizeInMegabyte,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"VirtualTextureSpacePoolConfig",
		sizeof(FVirtualTextureSpacePoolConfig),
		alignof(FVirtualTextureSpacePoolConfig),
		Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_VirtualTextureSpacePoolConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VirtualTextureSpacePoolConfig.InnerSingleton, Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VirtualTextureSpacePoolConfig.InnerSingleton;
	}
	void UVirtualTexturePoolConfig::StaticRegisterNativesUVirtualTexturePoolConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualTexturePoolConfig);
	UClass* Z_Construct_UClass_UVirtualTexturePoolConfig_NoRegister()
	{
		return UVirtualTexturePoolConfig::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualTexturePoolConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSizeInMegabyte_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultSizeInMegabyte;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pools_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pools_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pools;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VT/VirtualTexturePoolConfig.h" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_DefaultSizeInMegabyte_MetaData[] = {
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_DefaultSizeInMegabyte = { "DefaultSizeInMegabyte", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualTexturePoolConfig, DefaultSizeInMegabyte), METADATA_PARAMS(Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_DefaultSizeInMegabyte_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_DefaultSizeInMegabyte_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_Pools_Inner = { "Pools", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig, METADATA_PARAMS(nullptr, 0) }; // 4112835044
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_Pools_MetaData[] = {
		{ "Comment", "// Size in tiles of any pools not explicitly specified in the config\n" },
		{ "ModuleRelativePath", "Classes/VT/VirtualTexturePoolConfig.h" },
		{ "ToolTip", "Size in tiles of any pools not explicitly specified in the config" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_Pools = { "Pools", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualTexturePoolConfig, Pools), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_Pools_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_Pools_MetaData)) }; // 4112835044
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_DefaultSizeInMegabyte,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_Pools_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::NewProp_Pools,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualTexturePoolConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::ClassParams = {
		&UVirtualTexturePoolConfig::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualTexturePoolConfig()
	{
		if (!Z_Registration_Info_UClass_UVirtualTexturePoolConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualTexturePoolConfig.OuterSingleton, Z_Construct_UClass_UVirtualTexturePoolConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualTexturePoolConfig.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UVirtualTexturePoolConfig>()
	{
		return UVirtualTexturePoolConfig::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualTexturePoolConfig);
	UVirtualTexturePoolConfig::~UVirtualTexturePoolConfig() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_Statics::ScriptStructInfo[] = {
		{ FVirtualTextureSpacePoolConfig::StaticStruct, Z_Construct_UScriptStruct_FVirtualTextureSpacePoolConfig_Statics::NewStructOps, TEXT("VirtualTextureSpacePoolConfig"), &Z_Registration_Info_UScriptStruct_VirtualTextureSpacePoolConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVirtualTextureSpacePoolConfig), 4112835044U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualTexturePoolConfig, UVirtualTexturePoolConfig::StaticClass, TEXT("UVirtualTexturePoolConfig"), &Z_Registration_Info_UClass_UVirtualTexturePoolConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualTexturePoolConfig), 3169944424U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_2322228281(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VT_VirtualTexturePoolConfig_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
