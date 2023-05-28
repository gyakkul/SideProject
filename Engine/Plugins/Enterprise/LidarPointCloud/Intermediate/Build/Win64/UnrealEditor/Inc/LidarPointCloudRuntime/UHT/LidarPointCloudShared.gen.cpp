// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LidarPointCloudShared.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLidarPointCloudShared() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
	LIDARPOINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarClippingVolumeMode();
	LIDARPOINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudAsyncMode();
	LIDARPOINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudColorationMode();
	LIDARPOINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudScalingMethod();
	LIDARPOINTCLOUDRUNTIME_API UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteShape();
	LIDARPOINTCLOUDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLidarPointCloudNormal();
	LIDARPOINTCLOUDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FLidarPointCloudPoint();
	UPackage* Z_Construct_UPackage__Script_LidarPointCloudRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LidarPointCloudNormal;
class UScriptStruct* FLidarPointCloudNormal::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LidarPointCloudNormal.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LidarPointCloudNormal.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLidarPointCloudNormal, (UObject*)Z_Construct_UPackage__Script_LidarPointCloudRuntime(), TEXT("LidarPointCloudNormal"));
	}
	return Z_Registration_Info_UScriptStruct_LidarPointCloudNormal.OuterSingleton;
}
template<> LIDARPOINTCLOUDRUNTIME_API UScriptStruct* StaticStruct<FLidarPointCloudNormal>()
{
	return FLidarPointCloudNormal::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Z;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** 3D vector represented using only a single byte per component */" },
		{ "ModuleRelativePath", "Public/LidarPointCloudShared.h" },
		{ "ToolTip", "3D vector represented using only a single byte per component" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLidarPointCloudNormal>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Lidar Point Normal" },
		{ "ModuleRelativePath", "Public/LidarPointCloudShared.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLidarPointCloudNormal, X), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Lidar Point Normal" },
		{ "ModuleRelativePath", "Public/LidarPointCloudShared.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLidarPointCloudNormal, Y), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "Lidar Point Normal" },
		{ "ModuleRelativePath", "Public/LidarPointCloudShared.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLidarPointCloudNormal, Z), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::NewProp_Z_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::NewProp_Z,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
		nullptr,
		&NewStructOps,
		"LidarPointCloudNormal",
		sizeof(FLidarPointCloudNormal),
		alignof(FLidarPointCloudNormal),
		Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLidarPointCloudNormal()
	{
		if (!Z_Registration_Info_UScriptStruct_LidarPointCloudNormal.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LidarPointCloudNormal.InnerSingleton, Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LidarPointCloudNormal.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LidarPointCloudPoint;
class UScriptStruct* FLidarPointCloudPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LidarPointCloudPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LidarPointCloudPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLidarPointCloudPoint, (UObject*)Z_Construct_UPackage__Script_LidarPointCloudRuntime(), TEXT("LidarPointCloudPoint"));
	}
	return Z_Registration_Info_UScriptStruct_LidarPointCloudPoint.OuterSingleton;
}
template<> LIDARPOINTCLOUDRUNTIME_API UScriptStruct* StaticStruct<FLidarPointCloudPoint>()
{
	return FLidarPointCloudPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LidarPointCloudShared.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLidarPointCloudPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Lidar Point Cloud Point" },
		{ "ModuleRelativePath", "Public/LidarPointCloudShared.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLidarPointCloudPoint, Location), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_Color_MetaData[] = {
		{ "Category", "Lidar Point Cloud Point" },
		{ "ModuleRelativePath", "Public/LidarPointCloudShared.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLidarPointCloudPoint, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Lidar Point Cloud Point" },
		{ "ModuleRelativePath", "Public/LidarPointCloudShared.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLidarPointCloudPoint, Normal), Z_Construct_UScriptStruct_FLidarPointCloudNormal, METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_Normal_MetaData)) }; // 3252497792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_bVisible_MetaData[] = {
		{ "Category", "Lidar Point Cloud Point" },
		{ "ModuleRelativePath", "Public/LidarPointCloudShared.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((FLidarPointCloudPoint*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FLidarPointCloudPoint), &Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_bVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_Normal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewProp_bVisible,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
		nullptr,
		&NewStructOps,
		"LidarPointCloudPoint",
		sizeof(FLidarPointCloudPoint),
		alignof(FLidarPointCloudPoint),
		Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLidarPointCloudPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_LidarPointCloudPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LidarPointCloudPoint.InnerSingleton, Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LidarPointCloudPoint.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELidarPointCloudAsyncMode;
	static UEnum* ELidarPointCloudAsyncMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELidarPointCloudAsyncMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELidarPointCloudAsyncMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudAsyncMode, (UObject*)Z_Construct_UPackage__Script_LidarPointCloudRuntime(), TEXT("ELidarPointCloudAsyncMode"));
		}
		return Z_Registration_Info_UEnum_ELidarPointCloudAsyncMode.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDRUNTIME_API UEnum* StaticEnum<ELidarPointCloudAsyncMode>()
	{
		return ELidarPointCloudAsyncMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudAsyncMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudAsyncMode_Statics::Enumerators[] = {
		{ "ELidarPointCloudAsyncMode::Success", (int64)ELidarPointCloudAsyncMode::Success },
		{ "ELidarPointCloudAsyncMode::Failure", (int64)ELidarPointCloudAsyncMode::Failure },
		{ "ELidarPointCloudAsyncMode::Progress", (int64)ELidarPointCloudAsyncMode::Progress },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudAsyncMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Used in blueprint latent function execution */" },
		{ "Failure.Name", "ELidarPointCloudAsyncMode::Failure" },
		{ "ModuleRelativePath", "Public/LidarPointCloudShared.h" },
		{ "Progress.Name", "ELidarPointCloudAsyncMode::Progress" },
		{ "Success.Name", "ELidarPointCloudAsyncMode::Success" },
		{ "ToolTip", "Used in blueprint latent function execution" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudAsyncMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
		nullptr,
		"ELidarPointCloudAsyncMode",
		"ELidarPointCloudAsyncMode",
		Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudAsyncMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudAsyncMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudAsyncMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudAsyncMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudAsyncMode()
	{
		if (!Z_Registration_Info_UEnum_ELidarPointCloudAsyncMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELidarPointCloudAsyncMode.InnerSingleton, Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudAsyncMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELidarPointCloudAsyncMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELidarPointCloudScalingMethod;
	static UEnum* ELidarPointCloudScalingMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELidarPointCloudScalingMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELidarPointCloudScalingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudScalingMethod, (UObject*)Z_Construct_UPackage__Script_LidarPointCloudRuntime(), TEXT("ELidarPointCloudScalingMethod"));
		}
		return Z_Registration_Info_UEnum_ELidarPointCloudScalingMethod.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDRUNTIME_API UEnum* StaticEnum<ELidarPointCloudScalingMethod>()
	{
		return ELidarPointCloudScalingMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudScalingMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudScalingMethod_Statics::Enumerators[] = {
		{ "ELidarPointCloudScalingMethod::PerNode", (int64)ELidarPointCloudScalingMethod::PerNode },
		{ "ELidarPointCloudScalingMethod::PerNodeAdaptive", (int64)ELidarPointCloudScalingMethod::PerNodeAdaptive },
		{ "ELidarPointCloudScalingMethod::PerPoint", (int64)ELidarPointCloudScalingMethod::PerPoint },
		{ "ELidarPointCloudScalingMethod::FixedScreenSize", (int64)ELidarPointCloudScalingMethod::FixedScreenSize },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudScalingMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FixedScreenSize.Comment", "/**\n\x09 * Sprites will be rendered using screen-space scaling method.\n\x09 * In that mode, Point Size property will work as Screen Percentage.\n\x09 */" },
		{ "FixedScreenSize.Name", "ELidarPointCloudScalingMethod::FixedScreenSize" },
		{ "FixedScreenSize.ToolTip", "Sprites will be rendered using screen-space scaling method.\nIn that mode, Point Size property will work as Screen Percentage." },
		{ "ModuleRelativePath", "Public/LidarPointCloudShared.h" },
		{ "PerNode.Comment", "/**\n\x09 * Points are scaled based on the estimated density of their containing node.\n\x09 * Recommended for assets with high variance of point densities, but may produce less fine detail overall.\n\x09 * Default method in 4.25 and 4.26\n\x09 */" },
		{ "PerNode.Name", "ELidarPointCloudScalingMethod::PerNode" },
		{ "PerNode.ToolTip", "Points are scaled based on the estimated density of their containing node.\nRecommended for assets with high variance of point densities, but may produce less fine detail overall.\nDefault method in 4.25 and 4.26" },
		{ "PerNodeAdaptive.Comment", "/**\n\x09 * Similar to PerNode, but the density is calculated adaptively based on the current view.\n\x09 * Produces good amount of fine detail while being generally resistant to density variance.\n\x09 */" },
		{ "PerNodeAdaptive.Name", "ELidarPointCloudScalingMethod::PerNodeAdaptive" },
		{ "PerNodeAdaptive.ToolTip", "Similar to PerNode, but the density is calculated adaptively based on the current view.\nProduces good amount of fine detail while being generally resistant to density variance." },
		{ "PerPoint.Comment", "/**\n\x09 * Points are scaled based on their individual calculated depth.\n\x09 * Capable of resolving the highest amount of fine detail, but is the most susceptible to \n\x09 * density changes across the dataset, and may result in patches of varying point sizes.\n\x09 */" },
		{ "PerPoint.Name", "ELidarPointCloudScalingMethod::PerPoint" },
		{ "PerPoint.ToolTip", "Points are scaled based on their individual calculated depth.\nCapable of resolving the highest amount of fine detail, but is the most susceptible to\ndensity changes across the dataset, and may result in patches of varying point sizes." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudScalingMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
		nullptr,
		"ELidarPointCloudScalingMethod",
		"ELidarPointCloudScalingMethod",
		Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudScalingMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudScalingMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudScalingMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudScalingMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudScalingMethod()
	{
		if (!Z_Registration_Info_UEnum_ELidarPointCloudScalingMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELidarPointCloudScalingMethod.InnerSingleton, Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudScalingMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELidarPointCloudScalingMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELidarClippingVolumeMode;
	static UEnum* ELidarClippingVolumeMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELidarClippingVolumeMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELidarClippingVolumeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarClippingVolumeMode, (UObject*)Z_Construct_UPackage__Script_LidarPointCloudRuntime(), TEXT("ELidarClippingVolumeMode"));
		}
		return Z_Registration_Info_UEnum_ELidarClippingVolumeMode.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDRUNTIME_API UEnum* StaticEnum<ELidarClippingVolumeMode>()
	{
		return ELidarClippingVolumeMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LidarPointCloudRuntime_ELidarClippingVolumeMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LidarPointCloudRuntime_ELidarClippingVolumeMode_Statics::Enumerators[] = {
		{ "ELidarClippingVolumeMode::ClipInside", (int64)ELidarClippingVolumeMode::ClipInside },
		{ "ELidarClippingVolumeMode::ClipOutside", (int64)ELidarClippingVolumeMode::ClipOutside },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LidarPointCloudRuntime_ELidarClippingVolumeMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClipInside.Comment", "/** This will clip all points inside the volume */" },
		{ "ClipInside.Name", "ELidarClippingVolumeMode::ClipInside" },
		{ "ClipInside.ToolTip", "This will clip all points inside the volume" },
		{ "ClipOutside.Comment", "/** This will clip all points outside of the volume */" },
		{ "ClipOutside.Name", "ELidarClippingVolumeMode::ClipOutside" },
		{ "ClipOutside.ToolTip", "This will clip all points outside of the volume" },
		{ "ModuleRelativePath", "Public/LidarPointCloudShared.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LidarPointCloudRuntime_ELidarClippingVolumeMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
		nullptr,
		"ELidarClippingVolumeMode",
		"ELidarClippingVolumeMode",
		Z_Construct_UEnum_LidarPointCloudRuntime_ELidarClippingVolumeMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarClippingVolumeMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarClippingVolumeMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarClippingVolumeMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarClippingVolumeMode()
	{
		if (!Z_Registration_Info_UEnum_ELidarClippingVolumeMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELidarClippingVolumeMode.InnerSingleton, Z_Construct_UEnum_LidarPointCloudRuntime_ELidarClippingVolumeMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELidarClippingVolumeMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELidarPointCloudColorationMode;
	static UEnum* ELidarPointCloudColorationMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELidarPointCloudColorationMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELidarPointCloudColorationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudColorationMode, (UObject*)Z_Construct_UPackage__Script_LidarPointCloudRuntime(), TEXT("ELidarPointCloudColorationMode"));
		}
		return Z_Registration_Info_UEnum_ELidarPointCloudColorationMode.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDRUNTIME_API UEnum* StaticEnum<ELidarPointCloudColorationMode>()
	{
		return ELidarPointCloudColorationMode_StaticEnum();
	}
	struct Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudColorationMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudColorationMode_Statics::Enumerators[] = {
		{ "ELidarPointCloudColorationMode::None", (int64)ELidarPointCloudColorationMode::None },
		{ "ELidarPointCloudColorationMode::Data", (int64)ELidarPointCloudColorationMode::Data },
		{ "ELidarPointCloudColorationMode::DataWithClassificationAlpha", (int64)ELidarPointCloudColorationMode::DataWithClassificationAlpha },
		{ "ELidarPointCloudColorationMode::Elevation", (int64)ELidarPointCloudColorationMode::Elevation },
		{ "ELidarPointCloudColorationMode::Position", (int64)ELidarPointCloudColorationMode::Position },
		{ "ELidarPointCloudColorationMode::Classification", (int64)ELidarPointCloudColorationMode::Classification },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudColorationMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Classification.Comment", "/** Uses Classification ID of the point along with the component's Classification Colors property to sample the color */" },
		{ "Classification.Name", "ELidarPointCloudColorationMode::Classification" },
		{ "Classification.ToolTip", "Uses Classification ID of the point along with the component's Classification Colors property to sample the color" },
		{ "Data.Comment", "/** Uses imported RGB / Intensity data */" },
		{ "Data.Name", "ELidarPointCloudColorationMode::Data" },
		{ "Data.ToolTip", "Uses imported RGB / Intensity data" },
		{ "DataWithClassificationAlpha.Comment", "/** Uses imported RGB / Intensity data combined with Alpha mask from Classification Colors */" },
		{ "DataWithClassificationAlpha.Name", "ELidarPointCloudColorationMode::DataWithClassificationAlpha" },
		{ "DataWithClassificationAlpha.ToolTip", "Uses imported RGB / Intensity data combined with Alpha mask from Classification Colors" },
		{ "Elevation.Comment", "/** The cloud's color will be overridden with elevation-based color */" },
		{ "Elevation.Name", "ELidarPointCloudColorationMode::Elevation" },
		{ "Elevation.ToolTip", "The cloud's color will be overridden with elevation-based color" },
		{ "ModuleRelativePath", "Public/LidarPointCloudShared.h" },
		{ "None.Comment", "/** Uses color tint only */" },
		{ "None.Name", "ELidarPointCloudColorationMode::None" },
		{ "None.ToolTip", "Uses color tint only" },
		{ "Position.Comment", "/** The cloud's color will be overridden with relative position-based color */" },
		{ "Position.Name", "ELidarPointCloudColorationMode::Position" },
		{ "Position.ToolTip", "The cloud's color will be overridden with relative position-based color" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudColorationMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
		nullptr,
		"ELidarPointCloudColorationMode",
		"ELidarPointCloudColorationMode",
		Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudColorationMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudColorationMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudColorationMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudColorationMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudColorationMode()
	{
		if (!Z_Registration_Info_UEnum_ELidarPointCloudColorationMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELidarPointCloudColorationMode.InnerSingleton, Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudColorationMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELidarPointCloudColorationMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELidarPointCloudSpriteShape;
	static UEnum* ELidarPointCloudSpriteShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELidarPointCloudSpriteShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELidarPointCloudSpriteShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteShape, (UObject*)Z_Construct_UPackage__Script_LidarPointCloudRuntime(), TEXT("ELidarPointCloudSpriteShape"));
		}
		return Z_Registration_Info_UEnum_ELidarPointCloudSpriteShape.OuterSingleton;
	}
	template<> LIDARPOINTCLOUDRUNTIME_API UEnum* StaticEnum<ELidarPointCloudSpriteShape>()
	{
		return ELidarPointCloudSpriteShape_StaticEnum();
	}
	struct Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteShape_Statics::Enumerators[] = {
		{ "ELidarPointCloudSpriteShape::Square", (int64)ELidarPointCloudSpriteShape::Square },
		{ "ELidarPointCloudSpriteShape::Circle", (int64)ELidarPointCloudSpriteShape::Circle },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteShape_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Circle.Name", "ELidarPointCloudSpriteShape::Circle" },
		{ "ModuleRelativePath", "Public/LidarPointCloudShared.h" },
		{ "Square.Name", "ELidarPointCloudSpriteShape::Square" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LidarPointCloudRuntime,
		nullptr,
		"ELidarPointCloudSpriteShape",
		"ELidarPointCloudSpriteShape",
		Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteShape()
	{
		if (!Z_Registration_Info_UEnum_ELidarPointCloudSpriteShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELidarPointCloudSpriteShape.InnerSingleton, Z_Construct_UEnum_LidarPointCloudRuntime_ELidarPointCloudSpriteShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELidarPointCloudSpriteShape.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudShared_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudShared_h_Statics::EnumInfo[] = {
		{ ELidarPointCloudAsyncMode_StaticEnum, TEXT("ELidarPointCloudAsyncMode"), &Z_Registration_Info_UEnum_ELidarPointCloudAsyncMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2848692903U) },
		{ ELidarPointCloudScalingMethod_StaticEnum, TEXT("ELidarPointCloudScalingMethod"), &Z_Registration_Info_UEnum_ELidarPointCloudScalingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2703718775U) },
		{ ELidarClippingVolumeMode_StaticEnum, TEXT("ELidarClippingVolumeMode"), &Z_Registration_Info_UEnum_ELidarClippingVolumeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2787028867U) },
		{ ELidarPointCloudColorationMode_StaticEnum, TEXT("ELidarPointCloudColorationMode"), &Z_Registration_Info_UEnum_ELidarPointCloudColorationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2366848877U) },
		{ ELidarPointCloudSpriteShape_StaticEnum, TEXT("ELidarPointCloudSpriteShape"), &Z_Registration_Info_UEnum_ELidarPointCloudSpriteShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1560882439U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudShared_h_Statics::ScriptStructInfo[] = {
		{ FLidarPointCloudNormal::StaticStruct, Z_Construct_UScriptStruct_FLidarPointCloudNormal_Statics::NewStructOps, TEXT("LidarPointCloudNormal"), &Z_Registration_Info_UScriptStruct_LidarPointCloudNormal, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLidarPointCloudNormal), 3252497792U) },
		{ FLidarPointCloudPoint::StaticStruct, Z_Construct_UScriptStruct_FLidarPointCloudPoint_Statics::NewStructOps, TEXT("LidarPointCloudPoint"), &Z_Registration_Info_UScriptStruct_LidarPointCloudPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLidarPointCloudPoint), 3309861466U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudShared_h_3929059926(TEXT("/Script/LidarPointCloudRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudShared_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudShared_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudShared_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_LidarPointCloud_Source_LidarPointCloudRuntime_Public_LidarPointCloudShared_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
