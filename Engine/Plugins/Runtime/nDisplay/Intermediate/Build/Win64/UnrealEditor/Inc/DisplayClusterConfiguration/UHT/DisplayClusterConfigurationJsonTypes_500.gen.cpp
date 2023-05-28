// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfigurationJsonTypes_500() {}
// Cross Module References
	DISPLAYCLUSTERCONFIGURATION_API UEnum* Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFailoverPolicy();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfiguration();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_500;
class UScriptStruct* FDisplayClusterConfigurationJsonRectangle_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonRectangle_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonRectangle_500>()
{
	return FDisplayClusterConfigurationJsonRectangle_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_W_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_W;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_H_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_H;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonRectangle_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRectangle_500, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRectangle_500, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_W_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRectangle_500, W), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_W_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_W_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_H_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_H = { "H", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRectangle_500, H), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_H_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_H_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_W,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewProp_H,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonRectangle_500",
		sizeof(FDisplayClusterConfigurationJsonRectangle_500),
		alignof(FDisplayClusterConfigurationJsonRectangle_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_500.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_500;
class UScriptStruct* FDisplayClusterConfigurationJsonVector_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonVector_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonVector_500>()
{
	return FDisplayClusterConfigurationJsonVector_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Z;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonVector_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonVector_500, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonVector_500, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::NewProp_Z_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonVector_500, Z), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::NewProp_Z_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::NewProp_Z,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonVector_500",
		sizeof(FDisplayClusterConfigurationJsonVector_500),
		alignof(FDisplayClusterConfigurationJsonVector_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_500.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_500;
class UScriptStruct* FDisplayClusterConfigurationJsonRotator_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonRotator_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonRotator_500>()
{
	return FDisplayClusterConfigurationJsonRotator_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Roll;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonRotator_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::NewProp_Pitch_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRotator_500, Pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::NewProp_Yaw_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRotator_500, Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::NewProp_Roll_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRotator_500, Roll), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::NewProp_Roll_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::NewProp_Roll,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonRotator_500",
		sizeof(FDisplayClusterConfigurationJsonRotator_500),
		alignof(FDisplayClusterConfigurationJsonRotator_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_500.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_500;
class UScriptStruct* FDisplayClusterConfigurationJsonSizeInt_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonSizeInt_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonSizeInt_500>()
{
	return FDisplayClusterConfigurationJsonSizeInt_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonSizeInt_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSizeInt_500, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSizeInt_500, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::NewProp_Height,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonSizeInt_500",
		sizeof(FDisplayClusterConfigurationJsonSizeInt_500),
		alignof(FDisplayClusterConfigurationJsonSizeInt_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_500.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_500;
class UScriptStruct* FDisplayClusterConfigurationJsonSizeFloat_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonSizeFloat_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonSizeFloat_500>()
{
	return FDisplayClusterConfigurationJsonSizeFloat_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonSizeFloat_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSizeFloat_500, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSizeFloat_500, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::NewProp_Height,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonSizeFloat_500",
		sizeof(FDisplayClusterConfigurationJsonSizeFloat_500),
		alignof(FDisplayClusterConfigurationJsonSizeFloat_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_500.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_500;
class UScriptStruct* FDisplayClusterConfigurationJsonPolymorphicEntity_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonPolymorphicEntity_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonPolymorphicEntity_500>()
{
	return FDisplayClusterConfigurationJsonPolymorphicEntity_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Type;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Parameters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Parameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonPolymorphicEntity_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonPolymorphicEntity_500, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::NewProp_Type_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonPolymorphicEntity_500, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::NewProp_Parameters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::NewProp_Parameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::NewProp_Parameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::NewProp_Parameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonPolymorphicEntity_500",
		sizeof(FDisplayClusterConfigurationJsonPolymorphicEntity_500),
		alignof(FDisplayClusterConfigurationJsonPolymorphicEntity_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_500.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonMisc_500;
class UScriptStruct* FDisplayClusterConfigurationJsonMisc_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonMisc_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonMisc_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonMisc_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonMisc_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonMisc_500>()
{
	return FDisplayClusterConfigurationJsonMisc_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFollowLocalPlayerCamera_MetaData[];
#endif
		static void NewProp_bFollowLocalPlayerCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowLocalPlayerCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExitOnEsc_MetaData[];
#endif
		static void NewProp_bExitOnEsc_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExitOnEsc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideViewportsFromExternalConfig_MetaData[];
#endif
		static void NewProp_bOverrideViewportsFromExternalConfig_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideViewportsFromExternalConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonMisc_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bFollowLocalPlayerCamera_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bFollowLocalPlayerCamera_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonMisc_500*)Obj)->bFollowLocalPlayerCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bFollowLocalPlayerCamera = { "bFollowLocalPlayerCamera", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonMisc_500), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bFollowLocalPlayerCamera_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bFollowLocalPlayerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bFollowLocalPlayerCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bExitOnEsc_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bExitOnEsc_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonMisc_500*)Obj)->bExitOnEsc = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bExitOnEsc = { "bExitOnEsc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonMisc_500), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bExitOnEsc_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bExitOnEsc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bExitOnEsc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bOverrideViewportsFromExternalConfig_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bOverrideViewportsFromExternalConfig_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonMisc_500*)Obj)->bOverrideViewportsFromExternalConfig = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bOverrideViewportsFromExternalConfig = { "bOverrideViewportsFromExternalConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonMisc_500), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bOverrideViewportsFromExternalConfig_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bOverrideViewportsFromExternalConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bOverrideViewportsFromExternalConfig_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bFollowLocalPlayerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bExitOnEsc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewProp_bOverrideViewportsFromExternalConfig,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonMisc_500",
		sizeof(FDisplayClusterConfigurationJsonMisc_500),
		alignof(FDisplayClusterConfigurationJsonMisc_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonMisc_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonMisc_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonMisc_500.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_500;
class UScriptStruct* FDisplayClusterConfigurationJsonSceneComponent_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonSceneComponent_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonSceneComponent_500>()
{
	return FDisplayClusterConfigurationJsonSceneComponent_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonSceneComponent_500>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonSceneComponent_500",
		sizeof(FDisplayClusterConfigurationJsonSceneComponent_500),
		alignof(FDisplayClusterConfigurationJsonSceneComponent_500),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_500.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationJsonSceneComponentXform_500>() == std::is_polymorphic<FDisplayClusterConfigurationJsonSceneComponent_500>(), "USTRUCT FDisplayClusterConfigurationJsonSceneComponentXform_500 cannot be polymorphic unless super FDisplayClusterConfigurationJsonSceneComponent_500 is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_500;
class UScriptStruct* FDisplayClusterConfigurationJsonSceneComponentXform_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonSceneComponentXform_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonSceneComponentXform_500>()
{
	return FDisplayClusterConfigurationJsonSceneComponentXform_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParentId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonSceneComponentXform_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::NewProp_ParentId_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::NewProp_ParentId = { "ParentId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSceneComponentXform_500, ParentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::NewProp_ParentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::NewProp_ParentId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSceneComponentXform_500, Location), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::NewProp_Location_MetaData)) }; // 1061613913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSceneComponentXform_500, Rotation), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::NewProp_Rotation_MetaData)) }; // 526096159
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::NewProp_ParentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::NewProp_Rotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_500,
		&NewStructOps,
		"DisplayClusterConfigurationJsonSceneComponentXform_500",
		sizeof(FDisplayClusterConfigurationJsonSceneComponentXform_500),
		alignof(FDisplayClusterConfigurationJsonSceneComponentXform_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_500.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationJsonSceneComponentCamera_500>() == std::is_polymorphic<FDisplayClusterConfigurationJsonSceneComponentXform_500>(), "USTRUCT FDisplayClusterConfigurationJsonSceneComponentCamera_500 cannot be polymorphic unless super FDisplayClusterConfigurationJsonSceneComponentXform_500 is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_500;
class UScriptStruct* FDisplayClusterConfigurationJsonSceneComponentCamera_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonSceneComponentCamera_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonSceneComponentCamera_500>()
{
	return FDisplayClusterConfigurationJsonSceneComponentCamera_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpupillaryDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpupillaryDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwapEyes_MetaData[];
#endif
		static void NewProp_SwapEyes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SwapEyes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StereoOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StereoOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonSceneComponentCamera_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::NewProp_InterpupillaryDistance_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::NewProp_InterpupillaryDistance = { "InterpupillaryDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSceneComponentCamera_500, InterpupillaryDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::NewProp_InterpupillaryDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::NewProp_InterpupillaryDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::NewProp_SwapEyes_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::NewProp_SwapEyes_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonSceneComponentCamera_500*)Obj)->SwapEyes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::NewProp_SwapEyes = { "SwapEyes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonSceneComponentCamera_500), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::NewProp_SwapEyes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::NewProp_SwapEyes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::NewProp_SwapEyes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::NewProp_StereoOffset_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::NewProp_StereoOffset = { "StereoOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSceneComponentCamera_500, StereoOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::NewProp_StereoOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::NewProp_StereoOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::NewProp_InterpupillaryDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::NewProp_SwapEyes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::NewProp_StereoOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500,
		&NewStructOps,
		"DisplayClusterConfigurationJsonSceneComponentCamera_500",
		sizeof(FDisplayClusterConfigurationJsonSceneComponentCamera_500),
		alignof(FDisplayClusterConfigurationJsonSceneComponentCamera_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_500.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationJsonSceneComponentScreen_500>() == std::is_polymorphic<FDisplayClusterConfigurationJsonSceneComponentXform_500>(), "USTRUCT FDisplayClusterConfigurationJsonSceneComponentScreen_500 cannot be polymorphic unless super FDisplayClusterConfigurationJsonSceneComponentXform_500 is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_500;
class UScriptStruct* FDisplayClusterConfigurationJsonSceneComponentScreen_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonSceneComponentScreen_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonSceneComponentScreen_500>()
{
	return FDisplayClusterConfigurationJsonSceneComponentScreen_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonSceneComponentScreen_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500_Statics::NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSceneComponentScreen_500, Size), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500_Statics::NewProp_Size_MetaData)) }; // 1802004069
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500_Statics::NewProp_Size,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500,
		&NewStructOps,
		"DisplayClusterConfigurationJsonSceneComponentScreen_500",
		sizeof(FDisplayClusterConfigurationJsonSceneComponentScreen_500),
		alignof(FDisplayClusterConfigurationJsonSceneComponentScreen_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_500.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_500;
class UScriptStruct* FDisplayClusterConfigurationJsonScene_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonScene_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonScene_500>()
{
	return FDisplayClusterConfigurationJsonScene_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Xforms_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Xforms_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Xforms_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Xforms;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cameras_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Cameras_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cameras_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Cameras;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Screens_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Screens_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Screens_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Screens;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonScene_500>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Xforms_ValueProp = { "Xforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500, METADATA_PARAMS(nullptr, 0) }; // 1532059221
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Xforms_Key_KeyProp = { "Xforms_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Xforms_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Xforms = { "Xforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonScene_500, Xforms), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Xforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Xforms_MetaData)) }; // 1532059221
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Cameras_ValueProp = { "Cameras", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500, METADATA_PARAMS(nullptr, 0) }; // 3573669375
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Cameras_Key_KeyProp = { "Cameras_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Cameras_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Cameras = { "Cameras", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonScene_500, Cameras), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Cameras_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Cameras_MetaData)) }; // 3573669375
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Screens_ValueProp = { "Screens", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500, METADATA_PARAMS(nullptr, 0) }; // 2402489075
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Screens_Key_KeyProp = { "Screens_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Screens_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Screens = { "Screens", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonScene_500, Screens), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Screens_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Screens_MetaData)) }; // 2402489075
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Xforms_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Xforms_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Xforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Cameras_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Cameras_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Cameras,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Screens_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Screens_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewProp_Screens,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonScene_500",
		sizeof(FDisplayClusterConfigurationJsonScene_500),
		alignof(FDisplayClusterConfigurationJsonScene_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_500.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_500;
class UScriptStruct* FDisplayClusterConfigurationJsonPrimaryNode_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonPrimaryNode_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonPrimaryNode_500>()
{
	return FDisplayClusterConfigurationJsonPrimaryNode_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_Ports_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Ports_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ports_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Ports;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonPrimaryNode_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonPrimaryNode_500, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::NewProp_Ports_ValueProp = { "Ports", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::NewProp_Ports_Key_KeyProp = { "Ports_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::NewProp_Ports_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::NewProp_Ports = { "Ports", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonPrimaryNode_500, Ports), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::NewProp_Ports_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::NewProp_Ports_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::NewProp_Ports_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::NewProp_Ports_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::NewProp_Ports,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonPrimaryNode_500",
		sizeof(FDisplayClusterConfigurationJsonPrimaryNode_500),
		alignof(FDisplayClusterConfigurationJsonPrimaryNode_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_500.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationJsonClusterSyncPolicy_500>() == std::is_polymorphic<FDisplayClusterConfigurationJsonPolymorphicEntity_500>(), "USTRUCT FDisplayClusterConfigurationJsonClusterSyncPolicy_500 cannot be polymorphic unless super FDisplayClusterConfigurationJsonPolymorphicEntity_500 is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_500;
class UScriptStruct* FDisplayClusterConfigurationJsonClusterSyncPolicy_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonClusterSyncPolicy_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonClusterSyncPolicy_500>()
{
	return FDisplayClusterConfigurationJsonClusterSyncPolicy_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonClusterSyncPolicy_500>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500,
		&NewStructOps,
		"DisplayClusterConfigurationJsonClusterSyncPolicy_500",
		sizeof(FDisplayClusterConfigurationJsonClusterSyncPolicy_500),
		alignof(FDisplayClusterConfigurationJsonClusterSyncPolicy_500),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_500.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_500;
class UScriptStruct* FDisplayClusterConfigurationJsonClusterSync_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonClusterSync_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonClusterSync_500>()
{
	return FDisplayClusterConfigurationJsonClusterSync_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderSyncPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderSyncPolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSyncPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSyncPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonClusterSync_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::NewProp_RenderSyncPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::NewProp_RenderSyncPolicy = { "RenderSyncPolicy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterSync_500, RenderSyncPolicy), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_500, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::NewProp_RenderSyncPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::NewProp_RenderSyncPolicy_MetaData)) }; // 648705838
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::NewProp_InputSyncPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::NewProp_InputSyncPolicy = { "InputSyncPolicy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterSync_500, InputSyncPolicy), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_500, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::NewProp_InputSyncPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::NewProp_InputSyncPolicy_MetaData)) }; // 648705838
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::NewProp_RenderSyncPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::NewProp_InputSyncPolicy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonClusterSync_500",
		sizeof(FDisplayClusterConfigurationJsonClusterSync_500),
		alignof(FDisplayClusterConfigurationJsonClusterSync_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_500.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFailoverSettings_500;
class UScriptStruct* FDisplayClusterConfigurationFailoverSettings_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFailoverSettings_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFailoverSettings_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationFailoverSettings_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFailoverSettings_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationFailoverSettings_500>()
{
	return FDisplayClusterConfigurationFailoverSettings_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_FailoverPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailoverPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FailoverPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationFailoverSettings_500>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500_Statics::NewProp_FailoverPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500_Statics::NewProp_FailoverPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500_Statics::NewProp_FailoverPolicy = { "FailoverPolicy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationFailoverSettings_500, FailoverPolicy), Z_Construct_UEnum_DisplayClusterConfiguration_EDisplayClusterConfigurationFailoverPolicy, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500_Statics::NewProp_FailoverPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500_Statics::NewProp_FailoverPolicy_MetaData)) }; // 698447889
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500_Statics::NewProp_FailoverPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500_Statics::NewProp_FailoverPolicy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationFailoverSettings_500",
		sizeof(FDisplayClusterConfigurationFailoverSettings_500),
		alignof(FDisplayClusterConfigurationFailoverSettings_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFailoverSettings_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFailoverSettings_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFailoverSettings_500.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationJsonPostprocess_500>() == std::is_polymorphic<FDisplayClusterConfigurationJsonPolymorphicEntity_500>(), "USTRUCT FDisplayClusterConfigurationJsonPostprocess_500 cannot be polymorphic unless super FDisplayClusterConfigurationJsonPolymorphicEntity_500 is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_500;
class UScriptStruct* FDisplayClusterConfigurationJsonPostprocess_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonPostprocess_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonPostprocess_500>()
{
	return FDisplayClusterConfigurationJsonPostprocess_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonPostprocess_500>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500,
		&NewStructOps,
		"DisplayClusterConfigurationJsonPostprocess_500",
		sizeof(FDisplayClusterConfigurationJsonPostprocess_500),
		alignof(FDisplayClusterConfigurationJsonPostprocess_500),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_500.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationJsonProjectionPolicy_500>() == std::is_polymorphic<FDisplayClusterConfigurationJsonPolymorphicEntity_500>(), "USTRUCT FDisplayClusterConfigurationJsonProjectionPolicy_500 cannot be polymorphic unless super FDisplayClusterConfigurationJsonPolymorphicEntity_500 is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_500;
class UScriptStruct* FDisplayClusterConfigurationJsonProjectionPolicy_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonProjectionPolicy_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonProjectionPolicy_500>()
{
	return FDisplayClusterConfigurationJsonProjectionPolicy_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonProjectionPolicy_500>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500,
		&NewStructOps,
		"DisplayClusterConfigurationJsonProjectionPolicy_500",
		sizeof(FDisplayClusterConfigurationJsonProjectionPolicy_500),
		alignof(FDisplayClusterConfigurationJsonProjectionPolicy_500),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_500.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonOverscan_500;
class UScriptStruct* FDisplayClusterConfigurationJsonOverscan_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonOverscan_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonOverscan_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonOverscan_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonOverscan_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonOverscan_500>()
{
	return FDisplayClusterConfigurationJsonOverscan_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Left_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Left;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Right_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Right;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Top_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Top;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bottom_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Bottom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Oversize_MetaData[];
#endif
		static void NewProp_Oversize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Oversize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonOverscan_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonOverscan_500*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonOverscan_500), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Mode_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonOverscan_500, Mode), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Mode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Left_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonOverscan_500, Left), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Left_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Right_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonOverscan_500, Right), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Right_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Top_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonOverscan_500, Top), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Top_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Top_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Bottom_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Bottom = { "Bottom", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonOverscan_500, Bottom), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Bottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Bottom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Oversize_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Oversize_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonOverscan_500*)Obj)->Oversize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Oversize = { "Oversize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonOverscan_500), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Oversize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Oversize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Oversize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Top,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Bottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewProp_Oversize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonOverscan_500",
		sizeof(FDisplayClusterConfigurationJsonOverscan_500),
		alignof(FDisplayClusterConfigurationJsonOverscan_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonOverscan_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonOverscan_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonOverscan_500.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_500;
class UScriptStruct* FDisplayClusterConfigurationJsonViewport_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonViewport_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonViewport_500>()
{
	return FDisplayClusterConfigurationJsonViewport_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BufferRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPUIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GPUIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowCrossGPUTransfer_MetaData[];
#endif
		static void NewProp_AllowCrossGPUTransfer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowCrossGPUTransfer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsShared_MetaData[];
#endif
		static void NewProp_IsShared_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsShared;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Overscan_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Overscan;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Region_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Region;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectionPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonViewport_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_Camera_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonViewport_500, Camera), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_BufferRatio_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_BufferRatio = { "BufferRatio", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonViewport_500, BufferRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_BufferRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_BufferRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_GPUIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_GPUIndex = { "GPUIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonViewport_500, GPUIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_GPUIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_GPUIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_AllowCrossGPUTransfer_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_AllowCrossGPUTransfer_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonViewport_500*)Obj)->AllowCrossGPUTransfer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_AllowCrossGPUTransfer = { "AllowCrossGPUTransfer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonViewport_500), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_AllowCrossGPUTransfer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_AllowCrossGPUTransfer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_AllowCrossGPUTransfer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_IsShared_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_IsShared_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonViewport_500*)Obj)->IsShared = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_IsShared = { "IsShared", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonViewport_500), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_IsShared_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_IsShared_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_IsShared_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_Overscan_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_Overscan = { "Overscan", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonViewport_500, Overscan), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_Overscan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_Overscan_MetaData)) }; // 803527913
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_Region_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonViewport_500, Region), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_Region_MetaData)) }; // 2377848788
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_ProjectionPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_ProjectionPolicy = { "ProjectionPolicy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonViewport_500, ProjectionPolicy), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_500, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_ProjectionPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_ProjectionPolicy_MetaData)) }; // 3910855214
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_BufferRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_GPUIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_AllowCrossGPUTransfer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_IsShared,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_Overscan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_Region,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewProp_ProjectionPolicy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonViewport_500",
		sizeof(FDisplayClusterConfigurationJsonViewport_500),
		alignof(FDisplayClusterConfigurationJsonViewport_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_500.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap_500;
class UScriptStruct* FDisplayClusterConfigurationFramePostProcess_OutputRemap_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationFramePostProcess_OutputRemap_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationFramePostProcess_OutputRemap_500>()
{
	return FDisplayClusterConfigurationFramePostProcess_OutputRemap_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSource_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DataSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StaticMeshAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ExternalFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationFramePostProcess_OutputRemap_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_bEnable_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationFramePostProcess_OutputRemap_500*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationFramePostProcess_OutputRemap_500), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_DataSource_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_DataSource = { "DataSource", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationFramePostProcess_OutputRemap_500, DataSource), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_DataSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_DataSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_StaticMeshAsset_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_StaticMeshAsset = { "StaticMeshAsset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationFramePostProcess_OutputRemap_500, StaticMeshAsset), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_StaticMeshAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_StaticMeshAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_ExternalFile_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_ExternalFile = { "ExternalFile", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationFramePostProcess_OutputRemap_500, ExternalFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_ExternalFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_ExternalFile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_DataSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_StaticMeshAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewProp_ExternalFile,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationFramePostProcess_OutputRemap_500",
		sizeof(FDisplayClusterConfigurationFramePostProcess_OutputRemap_500),
		alignof(FDisplayClusterConfigurationFramePostProcess_OutputRemap_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap_500.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_500;
class UScriptStruct* FDisplayClusterConfigurationJsonClusterNode_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonClusterNode_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonClusterNode_500>()
{
	return FDisplayClusterConfigurationJsonClusterNode_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Host_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Host;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sound_MetaData[];
#endif
		static void NewProp_Sound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Sound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullScreen_MetaData[];
#endif
		static void NewProp_FullScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_FullScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderHeadless_MetaData[];
#endif
		static void NewProp_RenderHeadless_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderHeadless;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphicsAdapter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GraphicsAdapter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureShare_MetaData[];
#endif
		static void NewProp_TextureShare_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TextureShare;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Window_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Window;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Postprocess_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Postprocess_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Postprocess_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Postprocess;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Viewports_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Viewports_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Viewports_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Viewports;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputRemap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputRemap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonClusterNode_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Host_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterNode_500, Host), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Host_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Host_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Sound_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Sound_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonClusterNode_500*)Obj)->Sound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonClusterNode_500), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Sound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_FullScreen_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_FullScreen_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonClusterNode_500*)Obj)->FullScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_FullScreen = { "FullScreen", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonClusterNode_500), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_FullScreen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_FullScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_FullScreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_RenderHeadless_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_RenderHeadless_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonClusterNode_500*)Obj)->RenderHeadless = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_RenderHeadless = { "RenderHeadless", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonClusterNode_500), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_RenderHeadless_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_RenderHeadless_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_RenderHeadless_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_GraphicsAdapter_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_GraphicsAdapter = { "GraphicsAdapter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterNode_500, GraphicsAdapter), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_GraphicsAdapter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_GraphicsAdapter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_TextureShare_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_TextureShare_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonClusterNode_500*)Obj)->TextureShare = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_TextureShare = { "TextureShare", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonClusterNode_500), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_TextureShare_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_TextureShare_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_TextureShare_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Window_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Window = { "Window", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterNode_500, Window), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Window_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Window_MetaData)) }; // 2377848788
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Postprocess_ValueProp = { "Postprocess", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_500, METADATA_PARAMS(nullptr, 0) }; // 1373821957
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Postprocess_Key_KeyProp = { "Postprocess_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Postprocess_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Postprocess = { "Postprocess", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterNode_500, Postprocess), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Postprocess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Postprocess_MetaData)) }; // 1373821957
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Viewports_ValueProp = { "Viewports", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500, METADATA_PARAMS(nullptr, 0) }; // 481228457
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Viewports_Key_KeyProp = { "Viewports_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Viewports_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Viewports = { "Viewports", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterNode_500, Viewports), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Viewports_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Viewports_MetaData)) }; // 481228457
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_OutputRemap_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_OutputRemap = { "OutputRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterNode_500, OutputRemap), Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_OutputRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_OutputRemap_MetaData)) }; // 2489567469
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Host,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_FullScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_RenderHeadless,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_GraphicsAdapter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_TextureShare,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Window,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Postprocess_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Postprocess_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Postprocess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Viewports_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Viewports_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_Viewports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewProp_OutputRemap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonClusterNode_500",
		sizeof(FDisplayClusterConfigurationJsonClusterNode_500),
		alignof(FDisplayClusterConfigurationJsonClusterNode_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_500.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_500;
class UScriptStruct* FDisplayClusterConfigurationJsonCluster_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonCluster_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonCluster_500>()
{
	return FDisplayClusterConfigurationJsonCluster_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimaryNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PrimaryNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sync_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sync;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Network_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Network_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Network_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Network;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Failover_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Failover;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Nodes_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Nodes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Nodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonCluster_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_PrimaryNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_PrimaryNode = { "PrimaryNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonCluster_500, PrimaryNode), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_PrimaryNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_PrimaryNode_MetaData)) }; // 2132049554
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Sync_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Sync = { "Sync", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonCluster_500, Sync), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Sync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Sync_MetaData)) }; // 2068760814
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Network_ValueProp = { "Network", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Network_Key_KeyProp = { "Network_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Network_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Network = { "Network", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonCluster_500, Network), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Network_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Network_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Failover_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Failover = { "Failover", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonCluster_500, Failover), Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Failover_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Failover_MetaData)) }; // 3379476894
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Nodes_ValueProp = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500, METADATA_PARAMS(nullptr, 0) }; // 3327365343
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Nodes_Key_KeyProp = { "Nodes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonCluster_500, Nodes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Nodes_MetaData)) }; // 3327365343
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_PrimaryNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Sync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Network_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Network_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Network,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Failover,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Nodes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Nodes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewProp_Nodes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonCluster_500",
		sizeof(FDisplayClusterConfigurationJsonCluster_500),
		alignof(FDisplayClusterConfigurationJsonCluster_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_500.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_500;
class UScriptStruct* FDisplayClusterConfigurationJsonDiagnostics_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonDiagnostics_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonDiagnostics_500>()
{
	return FDisplayClusterConfigurationJsonDiagnostics_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulateLag_MetaData[];
#endif
		static void NewProp_SimulateLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SimulateLag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinLagTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLagTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLagTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLagTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonDiagnostics_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::NewProp_SimulateLag_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::NewProp_SimulateLag_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonDiagnostics_500*)Obj)->SimulateLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::NewProp_SimulateLag = { "SimulateLag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonDiagnostics_500), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::NewProp_SimulateLag_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::NewProp_SimulateLag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::NewProp_SimulateLag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::NewProp_MinLagTime_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::NewProp_MinLagTime = { "MinLagTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonDiagnostics_500, MinLagTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::NewProp_MinLagTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::NewProp_MinLagTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::NewProp_MaxLagTime_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::NewProp_MaxLagTime = { "MaxLagTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonDiagnostics_500, MaxLagTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::NewProp_MaxLagTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::NewProp_MaxLagTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::NewProp_SimulateLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::NewProp_MinLagTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::NewProp_MaxLagTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonDiagnostics_500",
		sizeof(FDisplayClusterConfigurationJsonDiagnostics_500),
		alignof(FDisplayClusterConfigurationJsonDiagnostics_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_500.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_500;
class UScriptStruct* FDisplayClusterConfigurationJsonNdisplay_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonNdisplay_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonNdisplay_500>()
{
	return FDisplayClusterConfigurationJsonNdisplay_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Misc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Misc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scene_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cluster_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cluster;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomParameters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CustomParameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomParameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CustomParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Diagnostics_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Diagnostics;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// \"nDisplay\" category structure\n" },
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
		{ "ToolTip", "\"nDisplay\" category structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonNdisplay_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_500, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_500, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_AssetPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_500, AssetPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_AssetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Misc_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Misc = { "Misc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_500, Misc), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Misc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Misc_MetaData)) }; // 2282257270
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Scene_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_500, Scene), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Scene_MetaData)) }; // 1051838399
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Cluster_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Cluster = { "Cluster", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_500, Cluster), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Cluster_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Cluster_MetaData)) }; // 9900545
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_CustomParameters_ValueProp = { "CustomParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_CustomParameters_Key_KeyProp = { "CustomParameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_CustomParameters_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_CustomParameters = { "CustomParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_500, CustomParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_CustomParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_CustomParameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Diagnostics_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Diagnostics = { "Diagnostics", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_500, Diagnostics), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Diagnostics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Diagnostics_MetaData)) }; // 112783621
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Misc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Scene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Cluster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_CustomParameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_CustomParameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_CustomParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewProp_Diagnostics,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonNdisplay_500",
		sizeof(FDisplayClusterConfigurationJsonNdisplay_500),
		alignof(FDisplayClusterConfigurationJsonNdisplay_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_500.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_500;
class UScriptStruct* FDisplayClusterConfigurationJsonContainer_500::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_500.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_500.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_500, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonContainer_500"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_500.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonContainer_500>()
{
	return FDisplayClusterConfigurationJsonContainer_500::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_500_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nDisplay_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_nDisplay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_500_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// The main nDisplay configuration structure. It's supposed to extract nDisplay related data from a collecting JSON file.\n" },
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
		{ "ToolTip", "The main nDisplay configuration structure. It's supposed to extract nDisplay related data from a collecting JSON file." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_500_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonContainer_500>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_500_Statics::NewProp_nDisplay_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON500/DisplayClusterConfigurationJsonTypes_500.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_500_Statics::NewProp_nDisplay = { "nDisplay", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonContainer_500, nDisplay), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_500_Statics::NewProp_nDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_500_Statics::NewProp_nDisplay_MetaData)) }; // 938298871
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_500_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_500_Statics::NewProp_nDisplay,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_500_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonContainer_500",
		sizeof(FDisplayClusterConfigurationJsonContainer_500),
		alignof(FDisplayClusterConfigurationJsonContainer_500),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_500_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_500_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_500_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_500_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_500()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_500.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_500.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_500_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_500.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_Formats_JSON500_DisplayClusterConfigurationJsonTypes_500_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_Formats_JSON500_DisplayClusterConfigurationJsonTypes_500_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterConfigurationJsonRectangle_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonRectangle_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonRectangle_500), 2377848788U) },
		{ FDisplayClusterConfigurationJsonVector_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonVector_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonVector_500), 1061613913U) },
		{ FDisplayClusterConfigurationJsonRotator_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonRotator_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonRotator_500), 526096159U) },
		{ FDisplayClusterConfigurationJsonSizeInt_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonSizeInt_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonSizeInt_500), 1821423744U) },
		{ FDisplayClusterConfigurationJsonSizeFloat_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonSizeFloat_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonSizeFloat_500), 1802004069U) },
		{ FDisplayClusterConfigurationJsonPolymorphicEntity_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonPolymorphicEntity_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonPolymorphicEntity_500), 549543951U) },
		{ FDisplayClusterConfigurationJsonMisc_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonMisc_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonMisc_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonMisc_500), 2282257270U) },
		{ FDisplayClusterConfigurationJsonSceneComponent_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonSceneComponent_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonSceneComponent_500), 3678455766U) },
		{ FDisplayClusterConfigurationJsonSceneComponentXform_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonSceneComponentXform_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonSceneComponentXform_500), 1532059221U) },
		{ FDisplayClusterConfigurationJsonSceneComponentCamera_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonSceneComponentCamera_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonSceneComponentCamera_500), 3573669375U) },
		{ FDisplayClusterConfigurationJsonSceneComponentScreen_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonSceneComponentScreen_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonSceneComponentScreen_500), 2402489075U) },
		{ FDisplayClusterConfigurationJsonScene_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonScene_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonScene_500), 1051838399U) },
		{ FDisplayClusterConfigurationJsonPrimaryNode_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonPrimaryNode_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonPrimaryNode_500), 2132049554U) },
		{ FDisplayClusterConfigurationJsonClusterSyncPolicy_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonClusterSyncPolicy_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonClusterSyncPolicy_500), 648705838U) },
		{ FDisplayClusterConfigurationJsonClusterSync_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonClusterSync_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonClusterSync_500), 2068760814U) },
		{ FDisplayClusterConfigurationFailoverSettings_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationFailoverSettings_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationFailoverSettings_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFailoverSettings_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationFailoverSettings_500), 3379476894U) },
		{ FDisplayClusterConfigurationJsonPostprocess_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonPostprocess_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonPostprocess_500), 1373821957U) },
		{ FDisplayClusterConfigurationJsonProjectionPolicy_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonProjectionPolicy_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonProjectionPolicy_500), 3910855214U) },
		{ FDisplayClusterConfigurationJsonOverscan_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonOverscan_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonOverscan_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonOverscan_500), 803527913U) },
		{ FDisplayClusterConfigurationJsonViewport_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonViewport_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonViewport_500), 481228457U) },
		{ FDisplayClusterConfigurationFramePostProcess_OutputRemap_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationFramePostProcess_OutputRemap_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationFramePostProcess_OutputRemap_500), 2489567469U) },
		{ FDisplayClusterConfigurationJsonClusterNode_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonClusterNode_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonClusterNode_500), 3327365343U) },
		{ FDisplayClusterConfigurationJsonCluster_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonCluster_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonCluster_500), 9900545U) },
		{ FDisplayClusterConfigurationJsonDiagnostics_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonDiagnostics_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonDiagnostics_500), 112783621U) },
		{ FDisplayClusterConfigurationJsonNdisplay_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonNdisplay_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonNdisplay_500), 938298871U) },
		{ FDisplayClusterConfigurationJsonContainer_500::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_500_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonContainer_500"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_500, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonContainer_500), 2097972531U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_Formats_JSON500_DisplayClusterConfigurationJsonTypes_500_h_1890491798(TEXT("/Script/DisplayClusterConfiguration"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_Formats_JSON500_DisplayClusterConfigurationJsonTypes_500_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_Formats_JSON500_DisplayClusterConfigurationJsonTypes_500_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
