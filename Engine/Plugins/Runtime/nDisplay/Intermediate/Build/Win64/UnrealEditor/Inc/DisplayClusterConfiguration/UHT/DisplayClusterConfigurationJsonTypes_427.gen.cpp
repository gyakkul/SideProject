// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfigurationJsonTypes_427() {}
// Cross Module References
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfiguration();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_427;
class UScriptStruct* FDisplayClusterConfigurationJsonRectangle_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonRectangle_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonRectangle_427>()
{
	return FDisplayClusterConfigurationJsonRectangle_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonRectangle_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRectangle_427, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRectangle_427, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_W_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRectangle_427, W), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_W_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_W_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_H_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_H = { "H", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRectangle_427, H), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_H_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_H_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_W,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewProp_H,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonRectangle_427",
		sizeof(FDisplayClusterConfigurationJsonRectangle_427),
		alignof(FDisplayClusterConfigurationJsonRectangle_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_427.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_427;
class UScriptStruct* FDisplayClusterConfigurationJsonVector_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonVector_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonVector_427>()
{
	return FDisplayClusterConfigurationJsonVector_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonVector_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonVector_427, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonVector_427, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::NewProp_Z_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonVector_427, Z), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::NewProp_Z_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::NewProp_Z,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonVector_427",
		sizeof(FDisplayClusterConfigurationJsonVector_427),
		alignof(FDisplayClusterConfigurationJsonVector_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_427.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_427;
class UScriptStruct* FDisplayClusterConfigurationJsonRotator_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonRotator_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonRotator_427>()
{
	return FDisplayClusterConfigurationJsonRotator_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonRotator_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::NewProp_Pitch_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRotator_427, Pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::NewProp_Yaw_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRotator_427, Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::NewProp_Roll_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRotator_427, Roll), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::NewProp_Roll_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::NewProp_Roll,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonRotator_427",
		sizeof(FDisplayClusterConfigurationJsonRotator_427),
		alignof(FDisplayClusterConfigurationJsonRotator_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_427.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_427;
class UScriptStruct* FDisplayClusterConfigurationJsonSizeInt_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonSizeInt_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonSizeInt_427>()
{
	return FDisplayClusterConfigurationJsonSizeInt_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonSizeInt_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSizeInt_427, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSizeInt_427, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::NewProp_Height,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonSizeInt_427",
		sizeof(FDisplayClusterConfigurationJsonSizeInt_427),
		alignof(FDisplayClusterConfigurationJsonSizeInt_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_427.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_427;
class UScriptStruct* FDisplayClusterConfigurationJsonSizeFloat_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonSizeFloat_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonSizeFloat_427>()
{
	return FDisplayClusterConfigurationJsonSizeFloat_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonSizeFloat_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSizeFloat_427, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSizeFloat_427, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::NewProp_Height,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonSizeFloat_427",
		sizeof(FDisplayClusterConfigurationJsonSizeFloat_427),
		alignof(FDisplayClusterConfigurationJsonSizeFloat_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_427.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_427;
class UScriptStruct* FDisplayClusterConfigurationJsonPolymorphicEntity_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonPolymorphicEntity_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonPolymorphicEntity_427>()
{
	return FDisplayClusterConfigurationJsonPolymorphicEntity_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonPolymorphicEntity_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonPolymorphicEntity_427, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::NewProp_Type_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonPolymorphicEntity_427, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::NewProp_Parameters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::NewProp_Parameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::NewProp_Parameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::NewProp_Parameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonPolymorphicEntity_427",
		sizeof(FDisplayClusterConfigurationJsonPolymorphicEntity_427),
		alignof(FDisplayClusterConfigurationJsonPolymorphicEntity_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_427.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonMisc_427;
class UScriptStruct* FDisplayClusterConfigurationJsonMisc_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonMisc_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonMisc_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonMisc_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonMisc_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonMisc_427>()
{
	return FDisplayClusterConfigurationJsonMisc_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonMisc_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::NewProp_bFollowLocalPlayerCamera_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::NewProp_bFollowLocalPlayerCamera_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonMisc_427*)Obj)->bFollowLocalPlayerCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::NewProp_bFollowLocalPlayerCamera = { "bFollowLocalPlayerCamera", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonMisc_427), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::NewProp_bFollowLocalPlayerCamera_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::NewProp_bFollowLocalPlayerCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::NewProp_bFollowLocalPlayerCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::NewProp_bExitOnEsc_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::NewProp_bExitOnEsc_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonMisc_427*)Obj)->bExitOnEsc = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::NewProp_bExitOnEsc = { "bExitOnEsc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonMisc_427), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::NewProp_bExitOnEsc_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::NewProp_bExitOnEsc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::NewProp_bExitOnEsc_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::NewProp_bFollowLocalPlayerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::NewProp_bExitOnEsc,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonMisc_427",
		sizeof(FDisplayClusterConfigurationJsonMisc_427),
		alignof(FDisplayClusterConfigurationJsonMisc_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonMisc_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonMisc_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonMisc_427.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_427;
class UScriptStruct* FDisplayClusterConfigurationJsonSceneComponent_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonSceneComponent_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonSceneComponent_427>()
{
	return FDisplayClusterConfigurationJsonSceneComponent_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_427_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonSceneComponent_427>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonSceneComponent_427",
		sizeof(FDisplayClusterConfigurationJsonSceneComponent_427),
		alignof(FDisplayClusterConfigurationJsonSceneComponent_427),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_427.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationJsonSceneComponentXform_427>() == std::is_polymorphic<FDisplayClusterConfigurationJsonSceneComponent_427>(), "USTRUCT FDisplayClusterConfigurationJsonSceneComponentXform_427 cannot be polymorphic unless super FDisplayClusterConfigurationJsonSceneComponent_427 is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_427;
class UScriptStruct* FDisplayClusterConfigurationJsonSceneComponentXform_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonSceneComponentXform_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonSceneComponentXform_427>()
{
	return FDisplayClusterConfigurationJsonSceneComponentXform_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonSceneComponentXform_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::NewProp_ParentId_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::NewProp_ParentId = { "ParentId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSceneComponentXform_427, ParentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::NewProp_ParentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::NewProp_ParentId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSceneComponentXform_427, Location), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::NewProp_Location_MetaData)) }; // 1619915235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSceneComponentXform_427, Rotation), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::NewProp_Rotation_MetaData)) }; // 112346529
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::NewProp_ParentId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::NewProp_Rotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_427,
		&NewStructOps,
		"DisplayClusterConfigurationJsonSceneComponentXform_427",
		sizeof(FDisplayClusterConfigurationJsonSceneComponentXform_427),
		alignof(FDisplayClusterConfigurationJsonSceneComponentXform_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_427.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationJsonSceneComponentCamera_427>() == std::is_polymorphic<FDisplayClusterConfigurationJsonSceneComponentXform_427>(), "USTRUCT FDisplayClusterConfigurationJsonSceneComponentCamera_427 cannot be polymorphic unless super FDisplayClusterConfigurationJsonSceneComponentXform_427 is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_427;
class UScriptStruct* FDisplayClusterConfigurationJsonSceneComponentCamera_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonSceneComponentCamera_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonSceneComponentCamera_427>()
{
	return FDisplayClusterConfigurationJsonSceneComponentCamera_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonSceneComponentCamera_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::NewProp_InterpupillaryDistance_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::NewProp_InterpupillaryDistance = { "InterpupillaryDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSceneComponentCamera_427, InterpupillaryDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::NewProp_InterpupillaryDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::NewProp_InterpupillaryDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::NewProp_SwapEyes_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::NewProp_SwapEyes_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonSceneComponentCamera_427*)Obj)->SwapEyes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::NewProp_SwapEyes = { "SwapEyes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonSceneComponentCamera_427), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::NewProp_SwapEyes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::NewProp_SwapEyes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::NewProp_SwapEyes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::NewProp_StereoOffset_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::NewProp_StereoOffset = { "StereoOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSceneComponentCamera_427, StereoOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::NewProp_StereoOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::NewProp_StereoOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::NewProp_InterpupillaryDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::NewProp_SwapEyes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::NewProp_StereoOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427,
		&NewStructOps,
		"DisplayClusterConfigurationJsonSceneComponentCamera_427",
		sizeof(FDisplayClusterConfigurationJsonSceneComponentCamera_427),
		alignof(FDisplayClusterConfigurationJsonSceneComponentCamera_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_427.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationJsonSceneComponentScreen_427>() == std::is_polymorphic<FDisplayClusterConfigurationJsonSceneComponentXform_427>(), "USTRUCT FDisplayClusterConfigurationJsonSceneComponentScreen_427 cannot be polymorphic unless super FDisplayClusterConfigurationJsonSceneComponentXform_427 is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_427;
class UScriptStruct* FDisplayClusterConfigurationJsonSceneComponentScreen_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonSceneComponentScreen_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonSceneComponentScreen_427>()
{
	return FDisplayClusterConfigurationJsonSceneComponentScreen_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonSceneComponentScreen_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427_Statics::NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSceneComponentScreen_427, Size), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427_Statics::NewProp_Size_MetaData)) }; // 4064616812
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427_Statics::NewProp_Size,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427,
		&NewStructOps,
		"DisplayClusterConfigurationJsonSceneComponentScreen_427",
		sizeof(FDisplayClusterConfigurationJsonSceneComponentScreen_427),
		alignof(FDisplayClusterConfigurationJsonSceneComponentScreen_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_427.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_427;
class UScriptStruct* FDisplayClusterConfigurationJsonScene_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonScene_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonScene_427>()
{
	return FDisplayClusterConfigurationJsonScene_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonScene_427>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Xforms_ValueProp = { "Xforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427, METADATA_PARAMS(nullptr, 0) }; // 3096630954
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Xforms_Key_KeyProp = { "Xforms_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Xforms_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Xforms = { "Xforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonScene_427, Xforms), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Xforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Xforms_MetaData)) }; // 3096630954
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Cameras_ValueProp = { "Cameras", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427, METADATA_PARAMS(nullptr, 0) }; // 1072243336
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Cameras_Key_KeyProp = { "Cameras_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Cameras_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Cameras = { "Cameras", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonScene_427, Cameras), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Cameras_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Cameras_MetaData)) }; // 1072243336
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Screens_ValueProp = { "Screens", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427, METADATA_PARAMS(nullptr, 0) }; // 1376990471
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Screens_Key_KeyProp = { "Screens_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Screens_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Screens = { "Screens", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonScene_427, Screens), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Screens_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Screens_MetaData)) }; // 1376990471
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Xforms_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Xforms_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Xforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Cameras_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Cameras_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Cameras,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Screens_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Screens_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewProp_Screens,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonScene_427",
		sizeof(FDisplayClusterConfigurationJsonScene_427),
		alignof(FDisplayClusterConfigurationJsonScene_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_427.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_427;
class UScriptStruct* FDisplayClusterConfigurationJsonPrimaryNode_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonPrimaryNode_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonPrimaryNode_427>()
{
	return FDisplayClusterConfigurationJsonPrimaryNode_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonPrimaryNode_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonPrimaryNode_427, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::NewProp_Ports_ValueProp = { "Ports", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::NewProp_Ports_Key_KeyProp = { "Ports_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::NewProp_Ports_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::NewProp_Ports = { "Ports", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonPrimaryNode_427, Ports), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::NewProp_Ports_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::NewProp_Ports_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::NewProp_Ports_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::NewProp_Ports_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::NewProp_Ports,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonPrimaryNode_427",
		sizeof(FDisplayClusterConfigurationJsonPrimaryNode_427),
		alignof(FDisplayClusterConfigurationJsonPrimaryNode_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_427.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationJsonClusterSyncPolicy_427>() == std::is_polymorphic<FDisplayClusterConfigurationJsonPolymorphicEntity_427>(), "USTRUCT FDisplayClusterConfigurationJsonClusterSyncPolicy_427 cannot be polymorphic unless super FDisplayClusterConfigurationJsonPolymorphicEntity_427 is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_427;
class UScriptStruct* FDisplayClusterConfigurationJsonClusterSyncPolicy_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonClusterSyncPolicy_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonClusterSyncPolicy_427>()
{
	return FDisplayClusterConfigurationJsonClusterSyncPolicy_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_427_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonClusterSyncPolicy_427>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427,
		&NewStructOps,
		"DisplayClusterConfigurationJsonClusterSyncPolicy_427",
		sizeof(FDisplayClusterConfigurationJsonClusterSyncPolicy_427),
		alignof(FDisplayClusterConfigurationJsonClusterSyncPolicy_427),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_427.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_427;
class UScriptStruct* FDisplayClusterConfigurationJsonClusterSync_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonClusterSync_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonClusterSync_427>()
{
	return FDisplayClusterConfigurationJsonClusterSync_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonClusterSync_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::NewProp_RenderSyncPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::NewProp_RenderSyncPolicy = { "RenderSyncPolicy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterSync_427, RenderSyncPolicy), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_427, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::NewProp_RenderSyncPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::NewProp_RenderSyncPolicy_MetaData)) }; // 3892294530
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::NewProp_InputSyncPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::NewProp_InputSyncPolicy = { "InputSyncPolicy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterSync_427, InputSyncPolicy), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_427, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::NewProp_InputSyncPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::NewProp_InputSyncPolicy_MetaData)) }; // 3892294530
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::NewProp_RenderSyncPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::NewProp_InputSyncPolicy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonClusterSync_427",
		sizeof(FDisplayClusterConfigurationJsonClusterSync_427),
		alignof(FDisplayClusterConfigurationJsonClusterSync_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_427.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationJsonPostprocess_427>() == std::is_polymorphic<FDisplayClusterConfigurationJsonPolymorphicEntity_427>(), "USTRUCT FDisplayClusterConfigurationJsonPostprocess_427 cannot be polymorphic unless super FDisplayClusterConfigurationJsonPolymorphicEntity_427 is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_427;
class UScriptStruct* FDisplayClusterConfigurationJsonPostprocess_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonPostprocess_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonPostprocess_427>()
{
	return FDisplayClusterConfigurationJsonPostprocess_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_427_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonPostprocess_427>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427,
		&NewStructOps,
		"DisplayClusterConfigurationJsonPostprocess_427",
		sizeof(FDisplayClusterConfigurationJsonPostprocess_427),
		alignof(FDisplayClusterConfigurationJsonPostprocess_427),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_427.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationJsonProjectionPolicy_427>() == std::is_polymorphic<FDisplayClusterConfigurationJsonPolymorphicEntity_427>(), "USTRUCT FDisplayClusterConfigurationJsonProjectionPolicy_427 cannot be polymorphic unless super FDisplayClusterConfigurationJsonPolymorphicEntity_427 is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_427;
class UScriptStruct* FDisplayClusterConfigurationJsonProjectionPolicy_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonProjectionPolicy_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonProjectionPolicy_427>()
{
	return FDisplayClusterConfigurationJsonProjectionPolicy_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_427_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonProjectionPolicy_427>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427,
		&NewStructOps,
		"DisplayClusterConfigurationJsonProjectionPolicy_427",
		sizeof(FDisplayClusterConfigurationJsonProjectionPolicy_427),
		alignof(FDisplayClusterConfigurationJsonProjectionPolicy_427),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_427.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonOverscan_427;
class UScriptStruct* FDisplayClusterConfigurationJsonOverscan_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonOverscan_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonOverscan_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonOverscan_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonOverscan_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonOverscan_427>()
{
	return FDisplayClusterConfigurationJsonOverscan_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonOverscan_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonOverscan_427*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonOverscan_427), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Mode_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonOverscan_427, Mode), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Mode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Left_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Left = { "Left", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonOverscan_427, Left), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Left_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Left_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Right_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonOverscan_427, Right), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Right_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Right_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Top_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Top = { "Top", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonOverscan_427, Top), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Top_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Top_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Bottom_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Bottom = { "Bottom", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonOverscan_427, Bottom), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Bottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Bottom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Oversize_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Oversize_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonOverscan_427*)Obj)->Oversize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Oversize = { "Oversize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonOverscan_427), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Oversize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Oversize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Oversize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Left,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Top,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Bottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewProp_Oversize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonOverscan_427",
		sizeof(FDisplayClusterConfigurationJsonOverscan_427),
		alignof(FDisplayClusterConfigurationJsonOverscan_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonOverscan_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonOverscan_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonOverscan_427.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_427;
class UScriptStruct* FDisplayClusterConfigurationJsonViewport_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonViewport_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonViewport_427>()
{
	return FDisplayClusterConfigurationJsonViewport_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonViewport_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_Camera_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonViewport_427, Camera), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_BufferRatio_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_BufferRatio = { "BufferRatio", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonViewport_427, BufferRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_BufferRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_BufferRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_GPUIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_GPUIndex = { "GPUIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonViewport_427, GPUIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_GPUIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_GPUIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_AllowCrossGPUTransfer_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_AllowCrossGPUTransfer_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonViewport_427*)Obj)->AllowCrossGPUTransfer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_AllowCrossGPUTransfer = { "AllowCrossGPUTransfer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonViewport_427), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_AllowCrossGPUTransfer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_AllowCrossGPUTransfer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_AllowCrossGPUTransfer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_IsShared_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_IsShared_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonViewport_427*)Obj)->IsShared = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_IsShared = { "IsShared", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonViewport_427), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_IsShared_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_IsShared_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_IsShared_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_Overscan_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_Overscan = { "Overscan", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonViewport_427, Overscan), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_Overscan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_Overscan_MetaData)) }; // 1272404875
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_Region_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonViewport_427, Region), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_Region_MetaData)) }; // 786448065
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_ProjectionPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_ProjectionPolicy = { "ProjectionPolicy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonViewport_427, ProjectionPolicy), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_427, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_ProjectionPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_ProjectionPolicy_MetaData)) }; // 1826215572
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_BufferRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_GPUIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_AllowCrossGPUTransfer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_IsShared,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_Overscan,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_Region,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewProp_ProjectionPolicy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonViewport_427",
		sizeof(FDisplayClusterConfigurationJsonViewport_427),
		alignof(FDisplayClusterConfigurationJsonViewport_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_427.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap_427;
class UScriptStruct* FDisplayClusterConfigurationFramePostProcess_OutputRemap_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationFramePostProcess_OutputRemap_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationFramePostProcess_OutputRemap_427>()
{
	return FDisplayClusterConfigurationFramePostProcess_OutputRemap_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationFramePostProcess_OutputRemap_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_bEnable_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationFramePostProcess_OutputRemap_427*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationFramePostProcess_OutputRemap_427), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_DataSource_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_DataSource = { "DataSource", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationFramePostProcess_OutputRemap_427, DataSource), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_DataSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_DataSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_StaticMeshAsset_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_StaticMeshAsset = { "StaticMeshAsset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationFramePostProcess_OutputRemap_427, StaticMeshAsset), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_StaticMeshAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_StaticMeshAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_ExternalFile_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_ExternalFile = { "ExternalFile", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationFramePostProcess_OutputRemap_427, ExternalFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_ExternalFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_ExternalFile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_DataSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_StaticMeshAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewProp_ExternalFile,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationFramePostProcess_OutputRemap_427",
		sizeof(FDisplayClusterConfigurationFramePostProcess_OutputRemap_427),
		alignof(FDisplayClusterConfigurationFramePostProcess_OutputRemap_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap_427.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_427;
class UScriptStruct* FDisplayClusterConfigurationJsonClusterNode_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonClusterNode_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonClusterNode_427>()
{
	return FDisplayClusterConfigurationJsonClusterNode_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonClusterNode_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Host_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterNode_427, Host), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Host_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Host_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Sound_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Sound_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonClusterNode_427*)Obj)->Sound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonClusterNode_427), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Sound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_FullScreen_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_FullScreen_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonClusterNode_427*)Obj)->FullScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_FullScreen = { "FullScreen", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonClusterNode_427), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_FullScreen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_FullScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_FullScreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Window_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Window = { "Window", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterNode_427, Window), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Window_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Window_MetaData)) }; // 786448065
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Postprocess_ValueProp = { "Postprocess", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_427, METADATA_PARAMS(nullptr, 0) }; // 492346288
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Postprocess_Key_KeyProp = { "Postprocess_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Postprocess_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Postprocess = { "Postprocess", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterNode_427, Postprocess), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Postprocess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Postprocess_MetaData)) }; // 492346288
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Viewports_ValueProp = { "Viewports", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427, METADATA_PARAMS(nullptr, 0) }; // 4194922699
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Viewports_Key_KeyProp = { "Viewports_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Viewports_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Viewports = { "Viewports", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterNode_427, Viewports), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Viewports_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Viewports_MetaData)) }; // 4194922699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_OutputRemap_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_OutputRemap = { "OutputRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterNode_427, OutputRemap), Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_OutputRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_OutputRemap_MetaData)) }; // 701000522
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Host,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_FullScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Window,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Postprocess_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Postprocess_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Postprocess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Viewports_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Viewports_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_Viewports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewProp_OutputRemap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonClusterNode_427",
		sizeof(FDisplayClusterConfigurationJsonClusterNode_427),
		alignof(FDisplayClusterConfigurationJsonClusterNode_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_427.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_427;
class UScriptStruct* FDisplayClusterConfigurationJsonCluster_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonCluster_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonCluster_427>()
{
	return FDisplayClusterConfigurationJsonCluster_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MasterNode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MasterNode;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonCluster_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_MasterNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_MasterNode = { "MasterNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonCluster_427, MasterNode), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_MasterNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_MasterNode_MetaData)) }; // 3728988968
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Sync_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Sync = { "Sync", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonCluster_427, Sync), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Sync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Sync_MetaData)) }; // 3714236968
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Network_ValueProp = { "Network", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Network_Key_KeyProp = { "Network_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Network_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Network = { "Network", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonCluster_427, Network), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Network_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Network_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Nodes_ValueProp = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427, METADATA_PARAMS(nullptr, 0) }; // 3122123517
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Nodes_Key_KeyProp = { "Nodes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonCluster_427, Nodes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Nodes_MetaData)) }; // 3122123517
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_MasterNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Sync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Network_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Network_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Network,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Nodes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Nodes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewProp_Nodes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonCluster_427",
		sizeof(FDisplayClusterConfigurationJsonCluster_427),
		alignof(FDisplayClusterConfigurationJsonCluster_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_427.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_427;
class UScriptStruct* FDisplayClusterConfigurationJsonDiagnostics_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonDiagnostics_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonDiagnostics_427>()
{
	return FDisplayClusterConfigurationJsonDiagnostics_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonDiagnostics_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::NewProp_SimulateLag_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::NewProp_SimulateLag_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonDiagnostics_427*)Obj)->SimulateLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::NewProp_SimulateLag = { "SimulateLag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonDiagnostics_427), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::NewProp_SimulateLag_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::NewProp_SimulateLag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::NewProp_SimulateLag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::NewProp_MinLagTime_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::NewProp_MinLagTime = { "MinLagTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonDiagnostics_427, MinLagTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::NewProp_MinLagTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::NewProp_MinLagTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::NewProp_MaxLagTime_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::NewProp_MaxLagTime = { "MaxLagTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonDiagnostics_427, MaxLagTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::NewProp_MaxLagTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::NewProp_MaxLagTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::NewProp_SimulateLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::NewProp_MinLagTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::NewProp_MaxLagTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonDiagnostics_427",
		sizeof(FDisplayClusterConfigurationJsonDiagnostics_427),
		alignof(FDisplayClusterConfigurationJsonDiagnostics_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_427.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_427;
class UScriptStruct* FDisplayClusterConfigurationJsonNdisplay_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonNdisplay_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonNdisplay_427>()
{
	return FDisplayClusterConfigurationJsonNdisplay_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// \"nDisplay\" category structure\n" },
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
		{ "ToolTip", "\"nDisplay\" category structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonNdisplay_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_427, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_427, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_AssetPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_427, AssetPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_AssetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Misc_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Misc = { "Misc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_427, Misc), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Misc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Misc_MetaData)) }; // 2162119184
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Scene_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_427, Scene), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Scene_MetaData)) }; // 78264932
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Cluster_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Cluster = { "Cluster", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_427, Cluster), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Cluster_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Cluster_MetaData)) }; // 2703887097
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_CustomParameters_ValueProp = { "CustomParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_CustomParameters_Key_KeyProp = { "CustomParameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_CustomParameters_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_CustomParameters = { "CustomParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_427, CustomParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_CustomParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_CustomParameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Diagnostics_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Diagnostics = { "Diagnostics", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_427, Diagnostics), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Diagnostics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Diagnostics_MetaData)) }; // 1830340265
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Misc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Scene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Cluster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_CustomParameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_CustomParameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_CustomParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewProp_Diagnostics,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonNdisplay_427",
		sizeof(FDisplayClusterConfigurationJsonNdisplay_427),
		alignof(FDisplayClusterConfigurationJsonNdisplay_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_427.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_427;
class UScriptStruct* FDisplayClusterConfigurationJsonContainer_427::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_427.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_427.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_427, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonContainer_427"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_427.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonContainer_427>()
{
	return FDisplayClusterConfigurationJsonContainer_427::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_427_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_427_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// The main nDisplay configuration structure. It's supposed to extract nDisplay related data from a collecting JSON file.\n" },
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
		{ "ToolTip", "The main nDisplay configuration structure. It's supposed to extract nDisplay related data from a collecting JSON file." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_427_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonContainer_427>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_427_Statics::NewProp_nDisplay_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON427/DisplayClusterConfigurationJsonTypes_427.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_427_Statics::NewProp_nDisplay = { "nDisplay", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonContainer_427, nDisplay), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_427_Statics::NewProp_nDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_427_Statics::NewProp_nDisplay_MetaData)) }; // 3632987108
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_427_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_427_Statics::NewProp_nDisplay,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_427_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonContainer_427",
		sizeof(FDisplayClusterConfigurationJsonContainer_427),
		alignof(FDisplayClusterConfigurationJsonContainer_427),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_427_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_427_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_427_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_427_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_427()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_427.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_427.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_427_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_427.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_Formats_JSON427_DisplayClusterConfigurationJsonTypes_427_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_Formats_JSON427_DisplayClusterConfigurationJsonTypes_427_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterConfigurationJsonRectangle_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonRectangle_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonRectangle_427), 786448065U) },
		{ FDisplayClusterConfigurationJsonVector_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonVector_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonVector_427), 1619915235U) },
		{ FDisplayClusterConfigurationJsonRotator_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonRotator_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonRotator_427), 112346529U) },
		{ FDisplayClusterConfigurationJsonSizeInt_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonSizeInt_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonSizeInt_427), 1523929566U) },
		{ FDisplayClusterConfigurationJsonSizeFloat_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonSizeFloat_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonSizeFloat_427), 4064616812U) },
		{ FDisplayClusterConfigurationJsonPolymorphicEntity_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonPolymorphicEntity_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonPolymorphicEntity_427), 2845360972U) },
		{ FDisplayClusterConfigurationJsonMisc_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonMisc_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonMisc_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonMisc_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonMisc_427), 2162119184U) },
		{ FDisplayClusterConfigurationJsonSceneComponent_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonSceneComponent_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonSceneComponent_427), 1616042606U) },
		{ FDisplayClusterConfigurationJsonSceneComponentXform_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonSceneComponentXform_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonSceneComponentXform_427), 3096630954U) },
		{ FDisplayClusterConfigurationJsonSceneComponentCamera_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonSceneComponentCamera_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonSceneComponentCamera_427), 1072243336U) },
		{ FDisplayClusterConfigurationJsonSceneComponentScreen_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonSceneComponentScreen_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonSceneComponentScreen_427), 1376990471U) },
		{ FDisplayClusterConfigurationJsonScene_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonScene_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonScene_427), 78264932U) },
		{ FDisplayClusterConfigurationJsonPrimaryNode_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonPrimaryNode_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonPrimaryNode_427), 3728988968U) },
		{ FDisplayClusterConfigurationJsonClusterSyncPolicy_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonClusterSyncPolicy_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonClusterSyncPolicy_427), 3892294530U) },
		{ FDisplayClusterConfigurationJsonClusterSync_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonClusterSync_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonClusterSync_427), 3714236968U) },
		{ FDisplayClusterConfigurationJsonPostprocess_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonPostprocess_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonPostprocess_427), 492346288U) },
		{ FDisplayClusterConfigurationJsonProjectionPolicy_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonProjectionPolicy_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonProjectionPolicy_427), 1826215572U) },
		{ FDisplayClusterConfigurationJsonOverscan_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonOverscan_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonOverscan_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonOverscan_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonOverscan_427), 1272404875U) },
		{ FDisplayClusterConfigurationJsonViewport_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonViewport_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonViewport_427), 4194922699U) },
		{ FDisplayClusterConfigurationFramePostProcess_OutputRemap_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationFramePostProcess_OutputRemap_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationFramePostProcess_OutputRemap_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationFramePostProcess_OutputRemap_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationFramePostProcess_OutputRemap_427), 701000522U) },
		{ FDisplayClusterConfigurationJsonClusterNode_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonClusterNode_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonClusterNode_427), 3122123517U) },
		{ FDisplayClusterConfigurationJsonCluster_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonCluster_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonCluster_427), 2703887097U) },
		{ FDisplayClusterConfigurationJsonDiagnostics_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonDiagnostics_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonDiagnostics_427), 1830340265U) },
		{ FDisplayClusterConfigurationJsonNdisplay_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonNdisplay_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonNdisplay_427), 3632987108U) },
		{ FDisplayClusterConfigurationJsonContainer_427::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_427_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonContainer_427"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_427, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonContainer_427), 592840126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_Formats_JSON427_DisplayClusterConfigurationJsonTypes_427_h_1613916355(TEXT("/Script/DisplayClusterConfiguration"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_Formats_JSON427_DisplayClusterConfigurationJsonTypes_427_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_Formats_JSON427_DisplayClusterConfigurationJsonTypes_427_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
