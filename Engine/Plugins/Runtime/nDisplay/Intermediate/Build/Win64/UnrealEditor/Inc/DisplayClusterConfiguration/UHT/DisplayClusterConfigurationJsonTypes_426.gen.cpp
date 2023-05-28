// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterConfigurationJsonTypes_426() {}
// Cross Module References
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426();
	DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterConfiguration();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_426;
class UScriptStruct* FDisplayClusterConfigurationJsonRectangle_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonRectangle_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonRectangle_426>()
{
	return FDisplayClusterConfigurationJsonRectangle_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonRectangle_426>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRectangle_426, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRectangle_426, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_W_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_W = { "W", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRectangle_426, W), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_W_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_W_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_H_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_H = { "H", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRectangle_426, H), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_H_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_H_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_W,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewProp_H,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonRectangle_426",
		sizeof(FDisplayClusterConfigurationJsonRectangle_426),
		alignof(FDisplayClusterConfigurationJsonRectangle_426),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_426.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_426;
class UScriptStruct* FDisplayClusterConfigurationJsonVector_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonVector_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonVector_426>()
{
	return FDisplayClusterConfigurationJsonVector_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonVector_426>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonVector_426, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonVector_426, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::NewProp_Z_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonVector_426, Z), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::NewProp_Z_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::NewProp_Z,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonVector_426",
		sizeof(FDisplayClusterConfigurationJsonVector_426),
		alignof(FDisplayClusterConfigurationJsonVector_426),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_426.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_426;
class UScriptStruct* FDisplayClusterConfigurationJsonRotator_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonRotator_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonRotator_426>()
{
	return FDisplayClusterConfigurationJsonRotator_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonRotator_426>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::NewProp_Pitch_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRotator_426, Pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::NewProp_Yaw_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRotator_426, Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::NewProp_Roll_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonRotator_426, Roll), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::NewProp_Roll_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::NewProp_Roll,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonRotator_426",
		sizeof(FDisplayClusterConfigurationJsonRotator_426),
		alignof(FDisplayClusterConfigurationJsonRotator_426),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_426.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_426;
class UScriptStruct* FDisplayClusterConfigurationJsonSizeInt_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonSizeInt_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonSizeInt_426>()
{
	return FDisplayClusterConfigurationJsonSizeInt_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonSizeInt_426>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSizeInt_426, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSizeInt_426, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::NewProp_Height,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonSizeInt_426",
		sizeof(FDisplayClusterConfigurationJsonSizeInt_426),
		alignof(FDisplayClusterConfigurationJsonSizeInt_426),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_426.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_426;
class UScriptStruct* FDisplayClusterConfigurationJsonSizeFloat_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonSizeFloat_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonSizeFloat_426>()
{
	return FDisplayClusterConfigurationJsonSizeFloat_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonSizeFloat_426>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSizeFloat_426, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSizeFloat_426, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::NewProp_Height,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonSizeFloat_426",
		sizeof(FDisplayClusterConfigurationJsonSizeFloat_426),
		alignof(FDisplayClusterConfigurationJsonSizeFloat_426),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_426.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_426;
class UScriptStruct* FDisplayClusterConfigurationJsonPolymorphicEntity_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonPolymorphicEntity_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonPolymorphicEntity_426>()
{
	return FDisplayClusterConfigurationJsonPolymorphicEntity_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonPolymorphicEntity_426>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonPolymorphicEntity_426, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::NewProp_Type_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::NewProp_Parameters_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonPolymorphicEntity_426, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::NewProp_Parameters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::NewProp_Parameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::NewProp_Parameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::NewProp_Parameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonPolymorphicEntity_426",
		sizeof(FDisplayClusterConfigurationJsonPolymorphicEntity_426),
		alignof(FDisplayClusterConfigurationJsonPolymorphicEntity_426),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_426.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_426;
class UScriptStruct* FDisplayClusterConfigurationJsonSceneComponent_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonSceneComponent_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonSceneComponent_426>()
{
	return FDisplayClusterConfigurationJsonSceneComponent_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_426_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonSceneComponent_426>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonSceneComponent_426",
		sizeof(FDisplayClusterConfigurationJsonSceneComponent_426),
		alignof(FDisplayClusterConfigurationJsonSceneComponent_426),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_426.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationJsonSceneComponentXform_426>() == std::is_polymorphic<FDisplayClusterConfigurationJsonSceneComponent_426>(), "USTRUCT FDisplayClusterConfigurationJsonSceneComponentXform_426 cannot be polymorphic unless super FDisplayClusterConfigurationJsonSceneComponent_426 is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_426;
class UScriptStruct* FDisplayClusterConfigurationJsonSceneComponentXform_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonSceneComponentXform_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonSceneComponentXform_426>()
{
	return FDisplayClusterConfigurationJsonSceneComponentXform_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Parent;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonSceneComponentXform_426>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSceneComponentXform_426, Parent), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::NewProp_Parent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSceneComponentXform_426, Location), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::NewProp_Location_MetaData)) }; // 546648749
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSceneComponentXform_426, Rotation), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::NewProp_Rotation_MetaData)) }; // 755156722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::NewProp_Rotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_426,
		&NewStructOps,
		"DisplayClusterConfigurationJsonSceneComponentXform_426",
		sizeof(FDisplayClusterConfigurationJsonSceneComponentXform_426),
		alignof(FDisplayClusterConfigurationJsonSceneComponentXform_426),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_426.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationJsonSceneComponentCamera_426>() == std::is_polymorphic<FDisplayClusterConfigurationJsonSceneComponentXform_426>(), "USTRUCT FDisplayClusterConfigurationJsonSceneComponentCamera_426 cannot be polymorphic unless super FDisplayClusterConfigurationJsonSceneComponentXform_426 is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_426;
class UScriptStruct* FDisplayClusterConfigurationJsonSceneComponentCamera_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonSceneComponentCamera_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonSceneComponentCamera_426>()
{
	return FDisplayClusterConfigurationJsonSceneComponentCamera_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonSceneComponentCamera_426>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::NewProp_InterpupillaryDistance_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::NewProp_InterpupillaryDistance = { "InterpupillaryDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSceneComponentCamera_426, InterpupillaryDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::NewProp_InterpupillaryDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::NewProp_InterpupillaryDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::NewProp_SwapEyes_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::NewProp_SwapEyes_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonSceneComponentCamera_426*)Obj)->SwapEyes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::NewProp_SwapEyes = { "SwapEyes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonSceneComponentCamera_426), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::NewProp_SwapEyes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::NewProp_SwapEyes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::NewProp_SwapEyes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::NewProp_StereoOffset_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::NewProp_StereoOffset = { "StereoOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSceneComponentCamera_426, StereoOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::NewProp_StereoOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::NewProp_StereoOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::NewProp_InterpupillaryDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::NewProp_SwapEyes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::NewProp_StereoOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426,
		&NewStructOps,
		"DisplayClusterConfigurationJsonSceneComponentCamera_426",
		sizeof(FDisplayClusterConfigurationJsonSceneComponentCamera_426),
		alignof(FDisplayClusterConfigurationJsonSceneComponentCamera_426),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_426.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationJsonSceneComponentScreen_426>() == std::is_polymorphic<FDisplayClusterConfigurationJsonSceneComponentXform_426>(), "USTRUCT FDisplayClusterConfigurationJsonSceneComponentScreen_426 cannot be polymorphic unless super FDisplayClusterConfigurationJsonSceneComponentXform_426 is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_426;
class UScriptStruct* FDisplayClusterConfigurationJsonSceneComponentScreen_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonSceneComponentScreen_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonSceneComponentScreen_426>()
{
	return FDisplayClusterConfigurationJsonSceneComponentScreen_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonSceneComponentScreen_426>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426_Statics::NewProp_Size_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonSceneComponentScreen_426, Size), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426_Statics::NewProp_Size_MetaData)) }; // 1012717253
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426_Statics::NewProp_Size,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426,
		&NewStructOps,
		"DisplayClusterConfigurationJsonSceneComponentScreen_426",
		sizeof(FDisplayClusterConfigurationJsonSceneComponentScreen_426),
		alignof(FDisplayClusterConfigurationJsonSceneComponentScreen_426),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_426.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_426;
class UScriptStruct* FDisplayClusterConfigurationJsonScene_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonScene_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonScene_426>()
{
	return FDisplayClusterConfigurationJsonScene_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonScene_426>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Xforms_ValueProp = { "Xforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426, METADATA_PARAMS(nullptr, 0) }; // 3908472145
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Xforms_Key_KeyProp = { "Xforms_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Xforms_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Xforms = { "Xforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonScene_426, Xforms), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Xforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Xforms_MetaData)) }; // 3908472145
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Cameras_ValueProp = { "Cameras", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426, METADATA_PARAMS(nullptr, 0) }; // 917097958
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Cameras_Key_KeyProp = { "Cameras_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Cameras_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Cameras = { "Cameras", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonScene_426, Cameras), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Cameras_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Cameras_MetaData)) }; // 917097958
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Screens_ValueProp = { "Screens", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426, METADATA_PARAMS(nullptr, 0) }; // 987048869
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Screens_Key_KeyProp = { "Screens_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Screens_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Screens = { "Screens", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonScene_426, Screens), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Screens_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Screens_MetaData)) }; // 987048869
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Xforms_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Xforms_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Xforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Cameras_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Cameras_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Cameras,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Screens_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Screens_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewProp_Screens,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonScene_426",
		sizeof(FDisplayClusterConfigurationJsonScene_426),
		alignof(FDisplayClusterConfigurationJsonScene_426),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_426.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_426;
class UScriptStruct* FDisplayClusterConfigurationJsonPrimaryNode_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonPrimaryNode_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonPrimaryNode_426>()
{
	return FDisplayClusterConfigurationJsonPrimaryNode_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonPrimaryNode_426>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonPrimaryNode_426, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::NewProp_Ports_ValueProp = { "Ports", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::NewProp_Ports_Key_KeyProp = { "Ports_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::NewProp_Ports_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::NewProp_Ports = { "Ports", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonPrimaryNode_426, Ports), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::NewProp_Ports_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::NewProp_Ports_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::NewProp_Ports_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::NewProp_Ports_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::NewProp_Ports,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonPrimaryNode_426",
		sizeof(FDisplayClusterConfigurationJsonPrimaryNode_426),
		alignof(FDisplayClusterConfigurationJsonPrimaryNode_426),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_426.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationJsonClusterSyncPolicy_426>() == std::is_polymorphic<FDisplayClusterConfigurationJsonPolymorphicEntity_426>(), "USTRUCT FDisplayClusterConfigurationJsonClusterSyncPolicy_426 cannot be polymorphic unless super FDisplayClusterConfigurationJsonPolymorphicEntity_426 is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_426;
class UScriptStruct* FDisplayClusterConfigurationJsonClusterSyncPolicy_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonClusterSyncPolicy_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonClusterSyncPolicy_426>()
{
	return FDisplayClusterConfigurationJsonClusterSyncPolicy_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_426_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonClusterSyncPolicy_426>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426,
		&NewStructOps,
		"DisplayClusterConfigurationJsonClusterSyncPolicy_426",
		sizeof(FDisplayClusterConfigurationJsonClusterSyncPolicy_426),
		alignof(FDisplayClusterConfigurationJsonClusterSyncPolicy_426),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_426.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_426;
class UScriptStruct* FDisplayClusterConfigurationJsonClusterSync_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonClusterSync_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonClusterSync_426>()
{
	return FDisplayClusterConfigurationJsonClusterSync_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonClusterSync_426>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::NewProp_RenderSyncPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::NewProp_RenderSyncPolicy = { "RenderSyncPolicy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterSync_426, RenderSyncPolicy), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_426, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::NewProp_RenderSyncPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::NewProp_RenderSyncPolicy_MetaData)) }; // 1484861220
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::NewProp_InputSyncPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::NewProp_InputSyncPolicy = { "InputSyncPolicy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterSync_426, InputSyncPolicy), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_426, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::NewProp_InputSyncPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::NewProp_InputSyncPolicy_MetaData)) }; // 1484861220
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::NewProp_RenderSyncPolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::NewProp_InputSyncPolicy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonClusterSync_426",
		sizeof(FDisplayClusterConfigurationJsonClusterSync_426),
		alignof(FDisplayClusterConfigurationJsonClusterSync_426),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_426.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationJsonPostprocess_426>() == std::is_polymorphic<FDisplayClusterConfigurationJsonPolymorphicEntity_426>(), "USTRUCT FDisplayClusterConfigurationJsonPostprocess_426 cannot be polymorphic unless super FDisplayClusterConfigurationJsonPolymorphicEntity_426 is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_426;
class UScriptStruct* FDisplayClusterConfigurationJsonPostprocess_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonPostprocess_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonPostprocess_426>()
{
	return FDisplayClusterConfigurationJsonPostprocess_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_426_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonPostprocess_426>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426,
		&NewStructOps,
		"DisplayClusterConfigurationJsonPostprocess_426",
		sizeof(FDisplayClusterConfigurationJsonPostprocess_426),
		alignof(FDisplayClusterConfigurationJsonPostprocess_426),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_426.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDisplayClusterConfigurationJsonProjectionPolicy_426>() == std::is_polymorphic<FDisplayClusterConfigurationJsonPolymorphicEntity_426>(), "USTRUCT FDisplayClusterConfigurationJsonProjectionPolicy_426 cannot be polymorphic unless super FDisplayClusterConfigurationJsonPolymorphicEntity_426 is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_426;
class UScriptStruct* FDisplayClusterConfigurationJsonProjectionPolicy_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonProjectionPolicy_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonProjectionPolicy_426>()
{
	return FDisplayClusterConfigurationJsonProjectionPolicy_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_426_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonProjectionPolicy_426>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426,
		&NewStructOps,
		"DisplayClusterConfigurationJsonProjectionPolicy_426",
		sizeof(FDisplayClusterConfigurationJsonProjectionPolicy_426),
		alignof(FDisplayClusterConfigurationJsonProjectionPolicy_426),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_426.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_426;
class UScriptStruct* FDisplayClusterConfigurationJsonViewport_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonViewport_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonViewport_426>()
{
	return FDisplayClusterConfigurationJsonViewport_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonViewport_426>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_Camera_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonViewport_426, Camera), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_BufferRatio_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_BufferRatio = { "BufferRatio", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonViewport_426, BufferRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_BufferRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_BufferRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_GPUIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_GPUIndex = { "GPUIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonViewport_426, GPUIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_GPUIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_GPUIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_AllowCrossGPUTransfer_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_AllowCrossGPUTransfer_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonViewport_426*)Obj)->AllowCrossGPUTransfer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_AllowCrossGPUTransfer = { "AllowCrossGPUTransfer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonViewport_426), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_AllowCrossGPUTransfer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_AllowCrossGPUTransfer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_AllowCrossGPUTransfer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_IsShared_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_IsShared_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonViewport_426*)Obj)->IsShared = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_IsShared = { "IsShared", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonViewport_426), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_IsShared_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_IsShared_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_IsShared_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_Region_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_Region = { "Region", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonViewport_426, Region), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_Region_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_Region_MetaData)) }; // 2520317018
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_ProjectionPolicy_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_ProjectionPolicy = { "ProjectionPolicy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonViewport_426, ProjectionPolicy), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_426, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_ProjectionPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_ProjectionPolicy_MetaData)) }; // 3087063186
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_BufferRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_GPUIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_AllowCrossGPUTransfer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_IsShared,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_Region,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewProp_ProjectionPolicy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonViewport_426",
		sizeof(FDisplayClusterConfigurationJsonViewport_426),
		alignof(FDisplayClusterConfigurationJsonViewport_426),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_426.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_426;
class UScriptStruct* FDisplayClusterConfigurationJsonClusterNode_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonClusterNode_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonClusterNode_426>()
{
	return FDisplayClusterConfigurationJsonClusterNode_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonClusterNode_426>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Host_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Host = { "Host", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterNode_426, Host), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Host_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Host_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Sound_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Sound_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonClusterNode_426*)Obj)->Sound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonClusterNode_426), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Sound_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Sound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Sound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_FullScreen_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_FullScreen_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonClusterNode_426*)Obj)->FullScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_FullScreen = { "FullScreen", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonClusterNode_426), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_FullScreen_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_FullScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_FullScreen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Window_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Window = { "Window", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterNode_426, Window), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Window_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Window_MetaData)) }; // 2520317018
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Postprocess_ValueProp = { "Postprocess", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_426, METADATA_PARAMS(nullptr, 0) }; // 258582013
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Postprocess_Key_KeyProp = { "Postprocess_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Postprocess_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Postprocess = { "Postprocess", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterNode_426, Postprocess), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Postprocess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Postprocess_MetaData)) }; // 258582013
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Viewports_ValueProp = { "Viewports", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426, METADATA_PARAMS(nullptr, 0) }; // 3594873145
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Viewports_Key_KeyProp = { "Viewports_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Viewports_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Viewports = { "Viewports", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonClusterNode_426, Viewports), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Viewports_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Viewports_MetaData)) }; // 3594873145
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Host,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Sound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_FullScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Window,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Postprocess_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Postprocess_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Postprocess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Viewports_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Viewports_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewProp_Viewports,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonClusterNode_426",
		sizeof(FDisplayClusterConfigurationJsonClusterNode_426),
		alignof(FDisplayClusterConfigurationJsonClusterNode_426),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_426.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_426;
class UScriptStruct* FDisplayClusterConfigurationJsonCluster_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonCluster_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonCluster_426>()
{
	return FDisplayClusterConfigurationJsonCluster_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonCluster_426>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_MasterNode_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_MasterNode = { "MasterNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonCluster_426, MasterNode), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_MasterNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_MasterNode_MetaData)) }; // 571875303
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Sync_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Sync = { "Sync", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonCluster_426, Sync), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Sync_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Sync_MetaData)) }; // 2849521171
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Network_ValueProp = { "Network", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Network_Key_KeyProp = { "Network_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Network_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Network = { "Network", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonCluster_426, Network), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Network_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Network_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Nodes_ValueProp = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426, METADATA_PARAMS(nullptr, 0) }; // 4041645105
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Nodes_Key_KeyProp = { "Nodes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonCluster_426, Nodes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Nodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Nodes_MetaData)) }; // 4041645105
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_MasterNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Sync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Network_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Network_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Network,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Nodes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Nodes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewProp_Nodes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonCluster_426",
		sizeof(FDisplayClusterConfigurationJsonCluster_426),
		alignof(FDisplayClusterConfigurationJsonCluster_426),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_426.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_426;
class UScriptStruct* FDisplayClusterConfigurationJsonDiagnostics_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonDiagnostics_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonDiagnostics_426>()
{
	return FDisplayClusterConfigurationJsonDiagnostics_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonDiagnostics_426>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::NewProp_SimulateLag_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::NewProp_SimulateLag_SetBit(void* Obj)
	{
		((FDisplayClusterConfigurationJsonDiagnostics_426*)Obj)->SimulateLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::NewProp_SimulateLag = { "SimulateLag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FDisplayClusterConfigurationJsonDiagnostics_426), &Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::NewProp_SimulateLag_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::NewProp_SimulateLag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::NewProp_SimulateLag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::NewProp_MinLagTime_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::NewProp_MinLagTime = { "MinLagTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonDiagnostics_426, MinLagTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::NewProp_MinLagTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::NewProp_MinLagTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::NewProp_MaxLagTime_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::NewProp_MaxLagTime = { "MaxLagTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonDiagnostics_426, MaxLagTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::NewProp_MaxLagTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::NewProp_MaxLagTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::NewProp_SimulateLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::NewProp_MinLagTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::NewProp_MaxLagTime,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonDiagnostics_426",
		sizeof(FDisplayClusterConfigurationJsonDiagnostics_426),
		alignof(FDisplayClusterConfigurationJsonDiagnostics_426),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_426.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_426;
class UScriptStruct* FDisplayClusterConfigurationJsonNdisplay_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonNdisplay_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonNdisplay_426>()
{
	return FDisplayClusterConfigurationJsonNdisplay_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// \"nDisplay\" category structure\n" },
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
		{ "ToolTip", "\"nDisplay\" category structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonNdisplay_426>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_426, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_426, Version), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Version_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_AssetPath_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_426, AssetPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_AssetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Scene_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Scene = { "Scene", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_426, Scene), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Scene_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Scene_MetaData)) }; // 3213203972
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Cluster_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Cluster = { "Cluster", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_426, Cluster), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Cluster_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Cluster_MetaData)) }; // 1813688093
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_CustomParameters_ValueProp = { "CustomParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_CustomParameters_Key_KeyProp = { "CustomParameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_CustomParameters_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_CustomParameters = { "CustomParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_426, CustomParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_CustomParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_CustomParameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Diagnostics_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Diagnostics = { "Diagnostics", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonNdisplay_426, Diagnostics), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Diagnostics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Diagnostics_MetaData)) }; // 3999819249
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Scene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Cluster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_CustomParameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_CustomParameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_CustomParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewProp_Diagnostics,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonNdisplay_426",
		sizeof(FDisplayClusterConfigurationJsonNdisplay_426),
		alignof(FDisplayClusterConfigurationJsonNdisplay_426),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_426.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_426;
class UScriptStruct* FDisplayClusterConfigurationJsonContainer_426::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_426.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_426.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_426, (UObject*)Z_Construct_UPackage__Script_DisplayClusterConfiguration(), TEXT("DisplayClusterConfigurationJsonContainer_426"));
	}
	return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_426.OuterSingleton;
}
template<> DISPLAYCLUSTERCONFIGURATION_API UScriptStruct* StaticStruct<FDisplayClusterConfigurationJsonContainer_426>()
{
	return FDisplayClusterConfigurationJsonContainer_426::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_426_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_426_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// The main nDisplay configuration structure. It's supposed to extract nDisplay related data from a collecting JSON file.\n" },
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
		{ "ToolTip", "The main nDisplay configuration structure. It's supposed to extract nDisplay related data from a collecting JSON file." },
	};
#endif
	void* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_426_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDisplayClusterConfigurationJsonContainer_426>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_426_Statics::NewProp_nDisplay_MetaData[] = {
		{ "ModuleRelativePath", "Private/Formats/JSON426/DisplayClusterConfigurationJsonTypes_426.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_426_Statics::NewProp_nDisplay = { "nDisplay", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDisplayClusterConfigurationJsonContainer_426, nDisplay), Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426, METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_426_Statics::NewProp_nDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_426_Statics::NewProp_nDisplay_MetaData)) }; // 144824068
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_426_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_426_Statics::NewProp_nDisplay,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_426_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterConfiguration,
		nullptr,
		&NewStructOps,
		"DisplayClusterConfigurationJsonContainer_426",
		sizeof(FDisplayClusterConfigurationJsonContainer_426),
		alignof(FDisplayClusterConfigurationJsonContainer_426),
		Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_426_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_426_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_426_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_426_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_426()
	{
		if (!Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_426.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_426.InnerSingleton, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_426_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_426.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_Formats_JSON426_DisplayClusterConfigurationJsonTypes_426_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_Formats_JSON426_DisplayClusterConfigurationJsonTypes_426_h_Statics::ScriptStructInfo[] = {
		{ FDisplayClusterConfigurationJsonRectangle_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRectangle_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonRectangle_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRectangle_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonRectangle_426), 2520317018U) },
		{ FDisplayClusterConfigurationJsonVector_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonVector_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonVector_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonVector_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonVector_426), 546648749U) },
		{ FDisplayClusterConfigurationJsonRotator_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonRotator_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonRotator_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonRotator_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonRotator_426), 755156722U) },
		{ FDisplayClusterConfigurationJsonSizeInt_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeInt_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonSizeInt_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeInt_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonSizeInt_426), 3602813755U) },
		{ FDisplayClusterConfigurationJsonSizeFloat_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSizeFloat_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonSizeFloat_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSizeFloat_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonSizeFloat_426), 1012717253U) },
		{ FDisplayClusterConfigurationJsonPolymorphicEntity_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPolymorphicEntity_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonPolymorphicEntity_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPolymorphicEntity_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonPolymorphicEntity_426), 2433673705U) },
		{ FDisplayClusterConfigurationJsonSceneComponent_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponent_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonSceneComponent_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponent_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonSceneComponent_426), 818196064U) },
		{ FDisplayClusterConfigurationJsonSceneComponentXform_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentXform_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonSceneComponentXform_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentXform_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonSceneComponentXform_426), 3908472145U) },
		{ FDisplayClusterConfigurationJsonSceneComponentCamera_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentCamera_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonSceneComponentCamera_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentCamera_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonSceneComponentCamera_426), 917097958U) },
		{ FDisplayClusterConfigurationJsonSceneComponentScreen_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonSceneComponentScreen_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonSceneComponentScreen_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonSceneComponentScreen_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonSceneComponentScreen_426), 987048869U) },
		{ FDisplayClusterConfigurationJsonScene_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonScene_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonScene_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonScene_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonScene_426), 3213203972U) },
		{ FDisplayClusterConfigurationJsonPrimaryNode_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPrimaryNode_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonPrimaryNode_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPrimaryNode_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonPrimaryNode_426), 571875303U) },
		{ FDisplayClusterConfigurationJsonClusterSyncPolicy_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSyncPolicy_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonClusterSyncPolicy_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSyncPolicy_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonClusterSyncPolicy_426), 1484861220U) },
		{ FDisplayClusterConfigurationJsonClusterSync_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterSync_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonClusterSync_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterSync_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonClusterSync_426), 2849521171U) },
		{ FDisplayClusterConfigurationJsonPostprocess_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonPostprocess_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonPostprocess_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonPostprocess_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonPostprocess_426), 258582013U) },
		{ FDisplayClusterConfigurationJsonProjectionPolicy_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonProjectionPolicy_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonProjectionPolicy_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonProjectionPolicy_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonProjectionPolicy_426), 3087063186U) },
		{ FDisplayClusterConfigurationJsonViewport_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonViewport_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonViewport_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonViewport_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonViewport_426), 3594873145U) },
		{ FDisplayClusterConfigurationJsonClusterNode_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonClusterNode_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonClusterNode_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonClusterNode_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonClusterNode_426), 4041645105U) },
		{ FDisplayClusterConfigurationJsonCluster_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonCluster_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonCluster_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonCluster_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonCluster_426), 1813688093U) },
		{ FDisplayClusterConfigurationJsonDiagnostics_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonDiagnostics_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonDiagnostics_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonDiagnostics_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonDiagnostics_426), 3999819249U) },
		{ FDisplayClusterConfigurationJsonNdisplay_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonNdisplay_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonNdisplay_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonNdisplay_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonNdisplay_426), 144824068U) },
		{ FDisplayClusterConfigurationJsonContainer_426::StaticStruct, Z_Construct_UScriptStruct_FDisplayClusterConfigurationJsonContainer_426_Statics::NewStructOps, TEXT("DisplayClusterConfigurationJsonContainer_426"), &Z_Registration_Info_UScriptStruct_DisplayClusterConfigurationJsonContainer_426, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDisplayClusterConfigurationJsonContainer_426), 3744460718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_Formats_JSON426_DisplayClusterConfigurationJsonTypes_426_h_56085036(TEXT("/Script/DisplayClusterConfiguration"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_Formats_JSON426_DisplayClusterConfigurationJsonTypes_426_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterConfiguration_Private_Formats_JSON426_DisplayClusterConfigurationJsonTypes_426_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
