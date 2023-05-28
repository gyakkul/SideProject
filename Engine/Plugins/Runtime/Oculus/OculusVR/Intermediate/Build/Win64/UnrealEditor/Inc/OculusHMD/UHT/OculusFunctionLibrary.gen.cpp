// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector();
	OCULUSHMD_API UClass* Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary();
	OCULUSHMD_API UClass* Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary_NoRegister();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EBoundaryType();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EHandTrackingSupport();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EOculusColorSpace();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EOculusDeviceType();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_EOculusXrApi();
	OCULUSHMD_API UEnum* Z_Construct_UEnum_OculusHMD_ETrackedDeviceType();
	OCULUSHMD_API UScriptStruct* Z_Construct_UScriptStruct_FGuardianTestResult();
	OCULUSHMD_API UScriptStruct* Z_Construct_UScriptStruct_FHmdUserProfile();
	OCULUSHMD_API UScriptStruct* Z_Construct_UScriptStruct_FHmdUserProfileField();
	UPackage* Z_Construct_UPackage__Script_OculusHMD();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrackedDeviceType;
	static UEnum* ETrackedDeviceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETrackedDeviceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETrackedDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHMD_ETrackedDeviceType, (UObject*)Z_Construct_UPackage__Script_OculusHMD(), TEXT("ETrackedDeviceType"));
		}
		return Z_Registration_Info_UEnum_ETrackedDeviceType.OuterSingleton;
	}
	template<> OCULUSHMD_API UEnum* StaticEnum<ETrackedDeviceType>()
	{
		return ETrackedDeviceType_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Statics::Enumerators[] = {
		{ "ETrackedDeviceType::None", (int64)ETrackedDeviceType::None },
		{ "ETrackedDeviceType::HMD", (int64)ETrackedDeviceType::HMD },
		{ "ETrackedDeviceType::LTouch", (int64)ETrackedDeviceType::LTouch },
		{ "ETrackedDeviceType::RTouch", (int64)ETrackedDeviceType::RTouch },
		{ "ETrackedDeviceType::Touch", (int64)ETrackedDeviceType::Touch },
		{ "ETrackedDeviceType::DeviceObjectZero", (int64)ETrackedDeviceType::DeviceObjectZero },
		{ "ETrackedDeviceType::All", (int64)ETrackedDeviceType::All },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Statics::Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All Devices" },
		{ "All.Name", "ETrackedDeviceType::All" },
		{ "BlueprintType", "true" },
		{ "Comment", "/* Tracked device types corresponding to ovrTrackedDeviceType enum*/" },
		{ "DeviceObjectZero.DisplayName", "DeviceObject Zero" },
		{ "DeviceObjectZero.Name", "ETrackedDeviceType::DeviceObjectZero" },
		{ "HMD.DisplayName", "HMD" },
		{ "HMD.Name", "ETrackedDeviceType::HMD" },
		{ "LTouch.DisplayName", "Left Hand" },
		{ "LTouch.Name", "ETrackedDeviceType::LTouch" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "None.DisplayName", "No Devices" },
		{ "None.Name", "ETrackedDeviceType::None" },
		{ "RTouch.DisplayName", "Right Hand" },
		{ "RTouch.Name", "ETrackedDeviceType::RTouch" },
		{ "ToolTip", "Tracked device types corresponding to ovrTrackedDeviceType enum" },
		{ "Touch.DisplayName", "All Hands" },
		{ "Touch.Name", "ETrackedDeviceType::Touch" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		"ETrackedDeviceType",
		"ETrackedDeviceType",
		Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusHMD_ETrackedDeviceType()
	{
		if (!Z_Registration_Info_UEnum_ETrackedDeviceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrackedDeviceType.InnerSingleton, Z_Construct_UEnum_OculusHMD_ETrackedDeviceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETrackedDeviceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HmdUserProfileField;
class UScriptStruct* FHmdUserProfileField::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HmdUserProfileField.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HmdUserProfileField.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHmdUserProfileField, (UObject*)Z_Construct_UPackage__Script_OculusHMD(), TEXT("HmdUserProfileField"));
	}
	return Z_Registration_Info_UScriptStruct_HmdUserProfileField.OuterSingleton;
}
template<> OCULUSHMD_API UScriptStruct* StaticStruct<FHmdUserProfileField>()
{
	return FHmdUserProfileField::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHmdUserProfileField_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FieldValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Deprecated", "5.1" },
		{ "DisplayName", "HMD User Profile Data Field" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHmdUserProfileField>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldName_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldName = { "FieldName", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHmdUserProfileField, FieldName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldValue_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldValue = { "FieldValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHmdUserProfileField, FieldValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewProp_FieldValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		&NewStructOps,
		"HmdUserProfileField",
		sizeof(FHmdUserProfileField),
		alignof(FHmdUserProfileField),
		Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHmdUserProfileField()
	{
		if (!Z_Registration_Info_UScriptStruct_HmdUserProfileField.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HmdUserProfileField.InnerSingleton, Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HmdUserProfileField.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HmdUserProfile;
class UScriptStruct* FHmdUserProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HmdUserProfile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HmdUserProfile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHmdUserProfile, (UObject*)Z_Construct_UPackage__Script_OculusHMD(), TEXT("HmdUserProfile"));
	}
	return Z_Registration_Info_UScriptStruct_HmdUserProfile.OuterSingleton;
}
template<> OCULUSHMD_API UScriptStruct* StaticStruct<FHmdUserProfile>()
{
	return FHmdUserProfile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHmdUserProfile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gender_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Gender;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EyeHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EyeHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPD_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IPD;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeckToEyeDistance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NeckToEyeDistance;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtraFields_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtraFields_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExtraFields;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Deprecated", "5.1" },
		{ "DisplayName", "HMD User Profile Data" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHmdUserProfile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHmdUserProfile, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Gender_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Gender = { "Gender", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHmdUserProfile, Gender), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Gender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Gender_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_PlayerHeight_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_PlayerHeight = { "PlayerHeight", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHmdUserProfile, PlayerHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_PlayerHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_PlayerHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_EyeHeight_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_EyeHeight = { "EyeHeight", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHmdUserProfile, EyeHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_EyeHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_EyeHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_IPD_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_IPD = { "IPD", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHmdUserProfile, IPD), METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_IPD_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_IPD_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_NeckToEyeDistance_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_NeckToEyeDistance = { "NeckToEyeDistance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHmdUserProfile, NeckToEyeDistance), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_NeckToEyeDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_NeckToEyeDistance_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields_Inner = { "ExtraFields", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHmdUserProfileField, METADATA_PARAMS(nullptr, 0) }; // 3655655463
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields_MetaData[] = {
		{ "Category", "Input|HeadMountedDisplay" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields = { "ExtraFields", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHmdUserProfile, ExtraFields), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields_MetaData)) }; // 3655655463
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHmdUserProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_Gender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_PlayerHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_EyeHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_IPD,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_NeckToEyeDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewProp_ExtraFields,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHmdUserProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		&NewStructOps,
		"HmdUserProfile",
		sizeof(FHmdUserProfile),
		alignof(FHmdUserProfile),
		Z_Construct_UScriptStruct_FHmdUserProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHmdUserProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHmdUserProfile()
	{
		if (!Z_Registration_Info_UScriptStruct_HmdUserProfile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HmdUserProfile.InnerSingleton, Z_Construct_UScriptStruct_FHmdUserProfile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HmdUserProfile.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFixedFoveatedRenderingLevel;
	static UEnum* EFixedFoveatedRenderingLevel_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFixedFoveatedRenderingLevel.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFixedFoveatedRenderingLevel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel, (UObject*)Z_Construct_UPackage__Script_OculusHMD(), TEXT("EFixedFoveatedRenderingLevel"));
		}
		return Z_Registration_Info_UEnum_EFixedFoveatedRenderingLevel.OuterSingleton;
	}
	template<> OCULUSHMD_API UEnum* StaticEnum<EFixedFoveatedRenderingLevel>()
	{
		return EFixedFoveatedRenderingLevel_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Statics::Enumerators[] = {
		{ "EFixedFoveatedRenderingLevel::FFR_Off", (int64)EFixedFoveatedRenderingLevel::FFR_Off },
		{ "EFixedFoveatedRenderingLevel::FFR_Low", (int64)EFixedFoveatedRenderingLevel::FFR_Low },
		{ "EFixedFoveatedRenderingLevel::FFR_Medium", (int64)EFixedFoveatedRenderingLevel::FFR_Medium },
		{ "EFixedFoveatedRenderingLevel::FFR_High", (int64)EFixedFoveatedRenderingLevel::FFR_High },
		{ "EFixedFoveatedRenderingLevel::FFR_HighTop", (int64)EFixedFoveatedRenderingLevel::FFR_HighTop },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FFR_High.Name", "EFixedFoveatedRenderingLevel::FFR_High" },
		{ "FFR_HighTop.Comment", "// High foveation setting with more detail toward the bottom of the view and more foveation near the top\n" },
		{ "FFR_HighTop.Name", "EFixedFoveatedRenderingLevel::FFR_HighTop" },
		{ "FFR_HighTop.ToolTip", "High foveation setting with more detail toward the bottom of the view and more foveation near the top" },
		{ "FFR_Low.Name", "EFixedFoveatedRenderingLevel::FFR_Low" },
		{ "FFR_Medium.Name", "EFixedFoveatedRenderingLevel::FFR_Medium" },
		{ "FFR_Off.Name", "EFixedFoveatedRenderingLevel::FFR_Off" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		"EFixedFoveatedRenderingLevel",
		"EFixedFoveatedRenderingLevel",
		Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel()
	{
		if (!Z_Registration_Info_UEnum_EFixedFoveatedRenderingLevel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFixedFoveatedRenderingLevel.InnerSingleton, Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFixedFoveatedRenderingLevel.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBoundaryType;
	static UEnum* EBoundaryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBoundaryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBoundaryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHMD_EBoundaryType, (UObject*)Z_Construct_UPackage__Script_OculusHMD(), TEXT("EBoundaryType"));
		}
		return Z_Registration_Info_UEnum_EBoundaryType.OuterSingleton;
	}
	template<> OCULUSHMD_API UEnum* StaticEnum<EBoundaryType>()
	{
		return EBoundaryType_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusHMD_EBoundaryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusHMD_EBoundaryType_Statics::Enumerators[] = {
		{ "EBoundaryType::Boundary_Outer", (int64)EBoundaryType::Boundary_Outer },
		{ "EBoundaryType::Boundary_PlayArea", (int64)EBoundaryType::Boundary_PlayArea },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusHMD_EBoundaryType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Boundary_Outer.DisplayName", "Outer Boundary" },
		{ "Boundary_Outer.Name", "EBoundaryType::Boundary_Outer" },
		{ "Boundary_PlayArea.DisplayName", "Play Area" },
		{ "Boundary_PlayArea.Name", "EBoundaryType::Boundary_PlayArea" },
		{ "Comment", "/* Guardian boundary types*/" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "Guardian boundary types" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHMD_EBoundaryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		"EBoundaryType",
		"EBoundaryType",
		Z_Construct_UEnum_OculusHMD_EBoundaryType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EBoundaryType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusHMD_EBoundaryType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EBoundaryType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusHMD_EBoundaryType()
	{
		if (!Z_Registration_Info_UEnum_EBoundaryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBoundaryType.InnerSingleton, Z_Construct_UEnum_OculusHMD_EBoundaryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBoundaryType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusColorSpace;
	static UEnum* EOculusColorSpace_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusColorSpace.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusColorSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHMD_EOculusColorSpace, (UObject*)Z_Construct_UPackage__Script_OculusHMD(), TEXT("EOculusColorSpace"));
		}
		return Z_Registration_Info_UEnum_EOculusColorSpace.OuterSingleton;
	}
	template<> OCULUSHMD_API UEnum* StaticEnum<EOculusColorSpace>()
	{
		return EOculusColorSpace_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusHMD_EOculusColorSpace_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusHMD_EOculusColorSpace_Statics::Enumerators[] = {
		{ "EOculusColorSpace::Unknown", (int64)EOculusColorSpace::Unknown },
		{ "EOculusColorSpace::Unmanaged", (int64)EOculusColorSpace::Unmanaged },
		{ "EOculusColorSpace::Rec_2020", (int64)EOculusColorSpace::Rec_2020 },
		{ "EOculusColorSpace::Rec_709", (int64)EOculusColorSpace::Rec_709 },
		{ "EOculusColorSpace::Rift_CV1", (int64)EOculusColorSpace::Rift_CV1 },
		{ "EOculusColorSpace::Rift_S", (int64)EOculusColorSpace::Rift_S },
		{ "EOculusColorSpace::Quest", (int64)EOculusColorSpace::Quest },
		{ "EOculusColorSpace::P3", (int64)EOculusColorSpace::P3 },
		{ "EOculusColorSpace::Adobe_RGB", (int64)EOculusColorSpace::Adobe_RGB },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusHMD_EOculusColorSpace_Statics::Enum_MetaDataParams[] = {
		{ "Adobe_RGB.Comment", "/// Similar to sRGB but with deeper greens using D65 white point\n" },
		{ "Adobe_RGB.Name", "EOculusColorSpace::Adobe_RGB" },
		{ "Adobe_RGB.ToolTip", "Similar to sRGB but with deeper greens using D65 white point" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "P3.Comment", "/// Similar to DCI-P3. See documentation for more details on P3\n" },
		{ "P3.Name", "EOculusColorSpace::P3" },
		{ "P3.ToolTip", "Similar to DCI-P3. See documentation for more details on P3" },
		{ "Quest.Comment", "/// Oculus Quest's native color space is slightly different than Rift CV1\n" },
		{ "Quest.Name", "EOculusColorSpace::Quest" },
		{ "Quest.ToolTip", "Oculus Quest's native color space is slightly different than Rift CV1" },
		{ "Rec_2020.Comment", "/// Preferred color space for standardized color across all Oculus HMDs with D65 white point\n" },
		{ "Rec_2020.Name", "EOculusColorSpace::Rec_2020" },
		{ "Rec_2020.ToolTip", "Preferred color space for standardized color across all Oculus HMDs with D65 white point" },
		{ "Rec_709.Comment", "/// Rec. 709 is used on Oculus Go and shares the same primary color coordinates as sRGB\n" },
		{ "Rec_709.Name", "EOculusColorSpace::Rec_709" },
		{ "Rec_709.ToolTip", "Rec. 709 is used on Oculus Go and shares the same primary color coordinates as sRGB" },
		{ "Rift_CV1.Comment", "/// Oculus Rift CV1 uses a unique color space, see documentation for more info\n" },
		{ "Rift_CV1.Name", "EOculusColorSpace::Rift_CV1" },
		{ "Rift_CV1.ToolTip", "Oculus Rift CV1 uses a unique color space, see documentation for more info" },
		{ "Rift_S.Comment", "/// Oculus Rift S uses a unique color space, see documentation for more info\n" },
		{ "Rift_S.Name", "EOculusColorSpace::Rift_S" },
		{ "Rift_S.ToolTip", "Oculus Rift S uses a unique color space, see documentation for more info" },
		{ "Unknown.Comment", "/// The default value from GetHmdColorSpace until SetClientColorDesc is called. Only valid on PC, and will be remapped to Quest on Mobile\n" },
		{ "Unknown.Name", "EOculusColorSpace::Unknown" },
		{ "Unknown.ToolTip", "The default value from GetHmdColorSpace until SetClientColorDesc is called. Only valid on PC, and will be remapped to Quest on Mobile" },
		{ "Unmanaged.Comment", "/// No color correction, not recommended for production use. See documentation for more info\n" },
		{ "Unmanaged.Name", "EOculusColorSpace::Unmanaged" },
		{ "Unmanaged.ToolTip", "No color correction, not recommended for production use. See documentation for more info" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHMD_EOculusColorSpace_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		"EOculusColorSpace",
		"EOculusColorSpace",
		Z_Construct_UEnum_OculusHMD_EOculusColorSpace_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EOculusColorSpace_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusHMD_EOculusColorSpace_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EOculusColorSpace_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusHMD_EOculusColorSpace()
	{
		if (!Z_Registration_Info_UEnum_EOculusColorSpace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusColorSpace.InnerSingleton, Z_Construct_UEnum_OculusHMD_EOculusColorSpace_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusColorSpace.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandTrackingSupport;
	static UEnum* EHandTrackingSupport_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHandTrackingSupport.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHandTrackingSupport.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHMD_EHandTrackingSupport, (UObject*)Z_Construct_UPackage__Script_OculusHMD(), TEXT("EHandTrackingSupport"));
		}
		return Z_Registration_Info_UEnum_EHandTrackingSupport.OuterSingleton;
	}
	template<> OCULUSHMD_API UEnum* StaticEnum<EHandTrackingSupport>()
	{
		return EHandTrackingSupport_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusHMD_EHandTrackingSupport_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusHMD_EHandTrackingSupport_Statics::Enumerators[] = {
		{ "EHandTrackingSupport::ControllersOnly", (int64)EHandTrackingSupport::ControllersOnly },
		{ "EHandTrackingSupport::ControllersAndHands", (int64)EHandTrackingSupport::ControllersAndHands },
		{ "EHandTrackingSupport::HandsOnly", (int64)EHandTrackingSupport::HandsOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusHMD_EHandTrackingSupport_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ControllersAndHands.Name", "EHandTrackingSupport::ControllersAndHands" },
		{ "ControllersOnly.Name", "EHandTrackingSupport::ControllersOnly" },
		{ "HandsOnly.Name", "EHandTrackingSupport::HandsOnly" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHMD_EHandTrackingSupport_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		"EHandTrackingSupport",
		"EHandTrackingSupport",
		Z_Construct_UEnum_OculusHMD_EHandTrackingSupport_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EHandTrackingSupport_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusHMD_EHandTrackingSupport_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EHandTrackingSupport_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusHMD_EHandTrackingSupport()
	{
		if (!Z_Registration_Info_UEnum_EHandTrackingSupport.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandTrackingSupport.InnerSingleton, Z_Construct_UEnum_OculusHMD_EHandTrackingSupport_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHandTrackingSupport.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandTrackingFrequency;
	static UEnum* EHandTrackingFrequency_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHandTrackingFrequency.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHandTrackingFrequency.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency, (UObject*)Z_Construct_UPackage__Script_OculusHMD(), TEXT("EHandTrackingFrequency"));
		}
		return Z_Registration_Info_UEnum_EHandTrackingFrequency.OuterSingleton;
	}
	template<> OCULUSHMD_API UEnum* StaticEnum<EHandTrackingFrequency>()
	{
		return EHandTrackingFrequency_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency_Statics::Enumerators[] = {
		{ "EHandTrackingFrequency::LOW", (int64)EHandTrackingFrequency::LOW },
		{ "EHandTrackingFrequency::HIGH", (int64)EHandTrackingFrequency::HIGH },
		{ "EHandTrackingFrequency::MAX", (int64)EHandTrackingFrequency::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HIGH.Name", "EHandTrackingFrequency::HIGH" },
		{ "LOW.Name", "EHandTrackingFrequency::LOW" },
		{ "MAX.Name", "EHandTrackingFrequency::MAX" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		"EHandTrackingFrequency",
		"EHandTrackingFrequency",
		Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency()
	{
		if (!Z_Registration_Info_UEnum_EHandTrackingFrequency.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandTrackingFrequency.InnerSingleton, Z_Construct_UEnum_OculusHMD_EHandTrackingFrequency_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHandTrackingFrequency.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusDeviceType;
	static UEnum* EOculusDeviceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusDeviceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHMD_EOculusDeviceType, (UObject*)Z_Construct_UPackage__Script_OculusHMD(), TEXT("EOculusDeviceType"));
		}
		return Z_Registration_Info_UEnum_EOculusDeviceType.OuterSingleton;
	}
	template<> OCULUSHMD_API UEnum* StaticEnum<EOculusDeviceType>()
	{
		return EOculusDeviceType_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusHMD_EOculusDeviceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusHMD_EOculusDeviceType_Statics::Enumerators[] = {
		{ "EOculusDeviceType::OculusMobile_Deprecated0", (int64)EOculusDeviceType::OculusMobile_Deprecated0 },
		{ "EOculusDeviceType::OculusQuest", (int64)EOculusDeviceType::OculusQuest },
		{ "EOculusDeviceType::OculusQuest2", (int64)EOculusDeviceType::OculusQuest2 },
		{ "EOculusDeviceType::Rift", (int64)EOculusDeviceType::Rift },
		{ "EOculusDeviceType::Rift_S", (int64)EOculusDeviceType::Rift_S },
		{ "EOculusDeviceType::Quest_Link", (int64)EOculusDeviceType::Quest_Link },
		{ "EOculusDeviceType::Quest2_Link", (int64)EOculusDeviceType::Quest2_Link },
		{ "EOculusDeviceType::OculusUnknown", (int64)EOculusDeviceType::OculusUnknown },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusHMD_EOculusDeviceType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "OculusMobile_Deprecated0.Comment", "//mobile HMDs \n" },
		{ "OculusMobile_Deprecated0.Name", "EOculusDeviceType::OculusMobile_Deprecated0" },
		{ "OculusMobile_Deprecated0.ToolTip", "mobile HMDs" },
		{ "OculusQuest.Name", "EOculusDeviceType::OculusQuest" },
		{ "OculusQuest2.Name", "EOculusDeviceType::OculusQuest2" },
		{ "OculusUnknown.Comment", "//default\n" },
		{ "OculusUnknown.Name", "EOculusDeviceType::OculusUnknown" },
		{ "OculusUnknown.ToolTip", "default" },
		{ "Quest2_Link.Name", "EOculusDeviceType::Quest2_Link" },
		{ "Quest_Link.Name", "EOculusDeviceType::Quest_Link" },
		{ "Rift.Comment", "//PC HMDs\n" },
		{ "Rift.Name", "EOculusDeviceType::Rift" },
		{ "Rift.ToolTip", "PC HMDs" },
		{ "Rift_S.Name", "EOculusDeviceType::Rift_S" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHMD_EOculusDeviceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		"EOculusDeviceType",
		"EOculusDeviceType",
		Z_Construct_UEnum_OculusHMD_EOculusDeviceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EOculusDeviceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusHMD_EOculusDeviceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EOculusDeviceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusHMD_EOculusDeviceType()
	{
		if (!Z_Registration_Info_UEnum_EOculusDeviceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusDeviceType.InnerSingleton, Z_Construct_UEnum_OculusHMD_EOculusDeviceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusDeviceType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOculusXrApi;
	static UEnum* EOculusXrApi_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOculusXrApi.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOculusXrApi.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusHMD_EOculusXrApi, (UObject*)Z_Construct_UPackage__Script_OculusHMD(), TEXT("EOculusXrApi"));
		}
		return Z_Registration_Info_UEnum_EOculusXrApi.OuterSingleton;
	}
	template<> OCULUSHMD_API UEnum* StaticEnum<EOculusXrApi>()
	{
		return EOculusXrApi_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusHMD_EOculusXrApi_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusHMD_EOculusXrApi_Statics::Enumerators[] = {
		{ "EOculusXrApi::LegacyOVRPlugin", (int64)EOculusXrApi::LegacyOVRPlugin },
		{ "EOculusXrApi::OVRPluginOpenXR", (int64)EOculusXrApi::OVRPluginOpenXR },
		{ "EOculusXrApi::NativeOpenXR", (int64)EOculusXrApi::NativeOpenXR },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusHMD_EOculusXrApi_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LegacyOVRPlugin.DisplayName", "Legacy Oculus SDK (no longer developed by Epic)" },
		{ "LegacyOVRPlugin.Name", "EOculusXrApi::LegacyOVRPlugin" },
		{ "LegacyOVRPlugin.ToolTip", "Legacy Oculus SDK. Epic is no longer developing for this SDK, and it should only be used if there are features required for a project that are not yet supported through OpenXR, but it's hard to guarantee potential bugs will be fixed as it's not in active development at Epic. Epic recommends Native OpenXR instead, as that will be the main development focus going forward." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "NativeOpenXR.DisplayName", "Native OpenXR with Oculus vendor extensions (Epic's development focus)" },
		{ "NativeOpenXR.Name", "EOculusXrApi::NativeOpenXR" },
		{ "NativeOpenXR.ToolTip", "Disable Legacy Oculus in favor of the native OpenXR implementation, with Oculus vendor extensions. Must enable the OpenXR plugin. This will be where Epic focuses XR development going forward. Oculus OpenXR extensions may be moved into a separate plugin (or plugins) in the future to improve modularity. The features supported by OpenXR are listed in the OpenXR specification on khronos.org, and the features supported by a given runtime can be verified with the \\\"OpenXR Explorer\\\" application on GitHub." },
		{ "OVRPluginOpenXR.DisplayName", "Legacy Oculus SDK + OpenXR (temporary experimental solution)" },
		{ "OVRPluginOpenXR.Name", "EOculusXrApi::OVRPluginOpenXR" },
		{ "OVRPluginOpenXR.ToolTip", "Legacy Oculus SDK using an OpenXR backend. Experimental. Epic recommends Native OpenXR instead, as that will be the main development focus going forward." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusHMD_EOculusXrApi_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		"EOculusXrApi",
		"EOculusXrApi",
		Z_Construct_UEnum_OculusHMD_EOculusXrApi_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EOculusXrApi_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OculusHMD_EOculusXrApi_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OculusHMD_EOculusXrApi_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OculusHMD_EOculusXrApi()
	{
		if (!Z_Registration_Info_UEnum_EOculusXrApi.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOculusXrApi.InnerSingleton, Z_Construct_UEnum_OculusHMD_EOculusXrApi_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOculusXrApi.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GuardianTestResult;
class UScriptStruct* FGuardianTestResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GuardianTestResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GuardianTestResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGuardianTestResult, (UObject*)Z_Construct_UPackage__Script_OculusHMD(), TEXT("GuardianTestResult"));
	}
	return Z_Registration_Info_UScriptStruct_GuardianTestResult.OuterSingleton;
}
template<> OCULUSHMD_API UScriptStruct* StaticStruct<FGuardianTestResult>()
{
	return FGuardianTestResult::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGuardianTestResult_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsTriggering_MetaData[];
#endif
		static void NewProp_IsTriggering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTriggering;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClosestDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ClosestDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClosestPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClosestPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClosestPointNormal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClosestPointNormal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuardianTestResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Information about relationships between a triggered boundary (EBoundaryType::Boundary_Outer or\n* EBoundaryType::Boundary_PlayArea) and a device or point in the world.\n* All dimensions, points, and vectors are returned in Unreal world coordinate space.\n*/" },
		{ "Deprecated", "5.1" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
		{ "ToolTip", "* Information about relationships between a triggered boundary (EBoundaryType::Boundary_Outer or\n* EBoundaryType::Boundary_PlayArea) and a device or point in the world.\n* All dimensions, points, and vectors are returned in Unreal world coordinate space." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGuardianTestResult>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering_SetBit(void* Obj)
	{
		((FGuardianTestResult*)Obj)->IsTriggering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering = { "IsTriggering", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FGuardianTestResult), &Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGuardianTestResult, DeviceType), Z_Construct_UEnum_OculusHMD_ETrackedDeviceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType_MetaData)) }; // 1408524775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestDistance_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestDistance = { "ClosestDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGuardianTestResult, ClosestDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPoint_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPoint = { "ClosestPoint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGuardianTestResult, ClosestPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPointNormal_MetaData[] = {
		{ "Category", "Boundary Test Result" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPointNormal = { "ClosestPointNormal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGuardianTestResult, ClosestPointNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPointNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPointNormal_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGuardianTestResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_IsTriggering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_DeviceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewProp_ClosestPointNormal,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGuardianTestResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
		nullptr,
		&NewStructOps,
		"GuardianTestResult",
		sizeof(FGuardianTestResult),
		alignof(FGuardianTestResult),
		Z_Construct_UScriptStruct_FGuardianTestResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGuardianTestResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGuardianTestResult()
	{
		if (!Z_Registration_Info_UScriptStruct_GuardianTestResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GuardianTestResult.InnerSingleton, Z_Construct_UScriptStruct_FGuardianTestResult_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GuardianTestResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execSetGuardianVisibility)
	{
		P_GET_UBOOL(Z_Param_GuardianVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_UOculusFunctionLibrary::SetGuardianVisibility(Z_Param_GuardianVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execGetNodeGuardianIntersection)
	{
		P_GET_ENUM(ETrackedDeviceType,Z_Param_DeviceType);
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuardianTestResult*)Z_Param__Result=UDEPRECATED_UOculusFunctionLibrary::GetNodeGuardianIntersection(ETrackedDeviceType(Z_Param_DeviceType),EBoundaryType(Z_Param_BoundaryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execGetPointGuardianIntersection)
	{
		P_GET_STRUCT(FVector,Z_Param_Point);
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuardianTestResult*)Z_Param__Result=UDEPRECATED_UOculusFunctionLibrary::GetPointGuardianIntersection(Z_Param_Point,EBoundaryType(Z_Param_BoundaryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execGetPlayAreaTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UDEPRECATED_UOculusFunctionLibrary::GetPlayAreaTransform();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execGetGuardianDimensions)
	{
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UDEPRECATED_UOculusFunctionLibrary::GetGuardianDimensions(EBoundaryType(Z_Param_BoundaryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execGetGuardianPoints)
	{
		P_GET_ENUM(EBoundaryType,Z_Param_BoundaryType);
		P_GET_UBOOL(Z_Param_UsePawnSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UDEPRECATED_UOculusFunctionLibrary::GetGuardianPoints(EBoundaryType(Z_Param_BoundaryType),Z_Param_UsePawnSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execIsGuardianConfigured)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_UOculusFunctionLibrary::IsGuardianConfigured();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execIsGuardianDisplayed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_UOculusFunctionLibrary::IsGuardianDisplayed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execSetClientColorDesc)
	{
		P_GET_ENUM(EOculusColorSpace,Z_Param_ColorSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_UOculusFunctionLibrary::SetClientColorDesc(EOculusColorSpace(Z_Param_ColorSpace));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execGetHmdColorDesc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOculusColorSpace*)Z_Param__Result=UDEPRECATED_UOculusFunctionLibrary::GetHmdColorDesc();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execGetSystemHmd3DofModeEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_UOculusFunctionLibrary::GetSystemHmd3DofModeEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execSetColorScaleAndOffset)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_ColorScale);
		P_GET_STRUCT(FLinearColor,Z_Param_ColorOffset);
		P_GET_UBOOL(Z_Param_bApplyToAllLayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_UOculusFunctionLibrary::SetColorScaleAndOffset(Z_Param_ColorScale,Z_Param_ColorOffset,Z_Param_bApplyToAllLayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execEnableOrientationTracking)
	{
		P_GET_UBOOL(Z_Param_bOrientationTracking);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_UOculusFunctionLibrary::EnableOrientationTracking(Z_Param_bOrientationTracking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execEnablePositionTracking)
	{
		P_GET_UBOOL(Z_Param_bPositionTracking);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_UOculusFunctionLibrary::EnablePositionTracking(Z_Param_bPositionTracking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execSetDisplayFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RequestedFrequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_UOculusFunctionLibrary::SetDisplayFrequency(Z_Param_RequestedFrequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execGetCurrentDisplayFrequency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDEPRECATED_UOculusFunctionLibrary::GetCurrentDisplayFrequency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execGetAvailableDisplayFrequencies)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=UDEPRECATED_UOculusFunctionLibrary::GetAvailableDisplayFrequencies();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execGetDeviceType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EOculusDeviceType*)Z_Param__Result=UDEPRECATED_UOculusFunctionLibrary::GetDeviceType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execGetDeviceName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UDEPRECATED_UOculusFunctionLibrary::GetDeviceName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execSetFixedFoveatedRenderingLevel)
	{
		P_GET_ENUM(EFixedFoveatedRenderingLevel,Z_Param_level);
		P_GET_UBOOL(Z_Param_isDynamic);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_UOculusFunctionLibrary::SetFixedFoveatedRenderingLevel(EFixedFoveatedRenderingLevel(Z_Param_level),Z_Param_isDynamic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execGetFixedFoveatedRenderingLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFixedFoveatedRenderingLevel*)Z_Param__Result=UDEPRECATED_UOculusFunctionLibrary::GetFixedFoveatedRenderingLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execGetGPUFrameTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UDEPRECATED_UOculusFunctionLibrary::GetGPUFrameTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execGetGPUUtilization)
	{
		P_GET_UBOOL_REF(Z_Param_Out_IsGPUAvailable);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_GPUUtilization);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_UOculusFunctionLibrary::GetGPUUtilization(Z_Param_Out_IsGPUAvailable,Z_Param_Out_GPUUtilization);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execHasSystemOverlayPresent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_UOculusFunctionLibrary::HasSystemOverlayPresent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execHasInputFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_UOculusFunctionLibrary::HasInputFocus();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execClearLoadingSplashScreens)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_UOculusFunctionLibrary::ClearLoadingSplashScreens();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execAddLoadingSplashScreen)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_Texture);
		P_GET_STRUCT(FVector,Z_Param_TranslationInMeters);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector2D,Z_Param_SizeInMeters);
		P_GET_STRUCT(FRotator,Z_Param_DeltaRotation);
		P_GET_UBOOL(Z_Param_bClearBeforeAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_UOculusFunctionLibrary::AddLoadingSplashScreen(Z_Param_Texture,Z_Param_TranslationInMeters,Z_Param_Rotation,Z_Param_SizeInMeters,Z_Param_DeltaRotation,Z_Param_bClearBeforeAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execGetBaseRotationAndPositionOffset)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRot);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPosOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_UOculusFunctionLibrary::GetBaseRotationAndPositionOffset(Z_Param_Out_OutRot,Z_Param_Out_OutPosOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execSetBaseRotationAndPositionOffset)
	{
		P_GET_STRUCT(FRotator,Z_Param_BaseRot);
		P_GET_STRUCT(FVector,Z_Param_PosOffset);
		P_GET_PROPERTY(FByteProperty,Z_Param_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_UOculusFunctionLibrary::SetBaseRotationAndPositionOffset(Z_Param_BaseRot,Z_Param_PosOffset,EOrientPositionSelector::Type(Z_Param_Options));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execSetPositionScale3D)
	{
		P_GET_STRUCT(FVector,Z_Param_PosScale3D);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_UOculusFunctionLibrary::SetPositionScale3D(Z_Param_PosScale3D);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execGetBaseRotationAndBaseOffsetInMeters)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutBaseOffsetInMeters);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_UOculusFunctionLibrary::GetBaseRotationAndBaseOffsetInMeters(Z_Param_Out_OutRotation,Z_Param_Out_OutBaseOffsetInMeters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execSetBaseRotationAndBaseOffsetInMeters)
	{
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_GET_STRUCT(FVector,Z_Param_BaseOffsetInMeters);
		P_GET_PROPERTY(FByteProperty,Z_Param_Options);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_UOculusFunctionLibrary::SetBaseRotationAndBaseOffsetInMeters(Z_Param_Rotation,Z_Param_BaseOffsetInMeters,EOrientPositionSelector::Type(Z_Param_Options));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execGetUserProfile)
	{
		P_GET_STRUCT_REF(FHmdUserProfile,Z_Param_Out_Profile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_UOculusFunctionLibrary::GetUserProfile(Z_Param_Out_Profile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execSetCPUAndGPULevels)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CPULevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_GPULevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_UOculusFunctionLibrary::SetCPUAndGPULevels(Z_Param_CPULevel,Z_Param_GPULevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execIsDeviceTracked)
	{
		P_GET_ENUM(ETrackedDeviceType,Z_Param_DeviceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UDEPRECATED_UOculusFunctionLibrary::IsDeviceTracked(ETrackedDeviceType(Z_Param_DeviceType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execGetRawSensorData)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularAcceleration);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearAcceleration);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_AngularVelocity);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LinearVelocity);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_TimeInSeconds);
		P_GET_ENUM(ETrackedDeviceType,Z_Param_DeviceType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_UOculusFunctionLibrary::GetRawSensorData(Z_Param_Out_AngularAcceleration,Z_Param_Out_LinearAcceleration,Z_Param_Out_AngularVelocity,Z_Param_Out_LinearVelocity,Z_Param_Out_TimeInSeconds,ETrackedDeviceType(Z_Param_DeviceType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDEPRECATED_UOculusFunctionLibrary::execGetPose)
	{
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_DeviceRotation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DevicePosition);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NeckPosition);
		P_GET_UBOOL(Z_Param_bUseOrienationForPlayerCamera);
		P_GET_UBOOL(Z_Param_bUsePositionForPlayerCamera);
		P_GET_STRUCT(FVector,Z_Param_PositionScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UDEPRECATED_UOculusFunctionLibrary::GetPose(Z_Param_Out_DeviceRotation,Z_Param_Out_DevicePosition,Z_Param_Out_NeckPosition,Z_Param_bUseOrienationForPlayerCamera,Z_Param_bUsePositionForPlayerCamera,Z_Param_PositionScale);
		P_NATIVE_END;
	}
	void UDEPRECATED_UOculusFunctionLibrary::StaticRegisterNativesUDEPRECATED_UOculusFunctionLibrary()
	{
		UClass* Class = UDEPRECATED_UOculusFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLoadingSplashScreen", &UDEPRECATED_UOculusFunctionLibrary::execAddLoadingSplashScreen },
			{ "ClearLoadingSplashScreens", &UDEPRECATED_UOculusFunctionLibrary::execClearLoadingSplashScreens },
			{ "EnableOrientationTracking", &UDEPRECATED_UOculusFunctionLibrary::execEnableOrientationTracking },
			{ "EnablePositionTracking", &UDEPRECATED_UOculusFunctionLibrary::execEnablePositionTracking },
			{ "GetAvailableDisplayFrequencies", &UDEPRECATED_UOculusFunctionLibrary::execGetAvailableDisplayFrequencies },
			{ "GetBaseRotationAndBaseOffsetInMeters", &UDEPRECATED_UOculusFunctionLibrary::execGetBaseRotationAndBaseOffsetInMeters },
			{ "GetBaseRotationAndPositionOffset", &UDEPRECATED_UOculusFunctionLibrary::execGetBaseRotationAndPositionOffset },
			{ "GetCurrentDisplayFrequency", &UDEPRECATED_UOculusFunctionLibrary::execGetCurrentDisplayFrequency },
			{ "GetDeviceName", &UDEPRECATED_UOculusFunctionLibrary::execGetDeviceName },
			{ "GetDeviceType", &UDEPRECATED_UOculusFunctionLibrary::execGetDeviceType },
			{ "GetFixedFoveatedRenderingLevel", &UDEPRECATED_UOculusFunctionLibrary::execGetFixedFoveatedRenderingLevel },
			{ "GetGPUFrameTime", &UDEPRECATED_UOculusFunctionLibrary::execGetGPUFrameTime },
			{ "GetGPUUtilization", &UDEPRECATED_UOculusFunctionLibrary::execGetGPUUtilization },
			{ "GetGuardianDimensions", &UDEPRECATED_UOculusFunctionLibrary::execGetGuardianDimensions },
			{ "GetGuardianPoints", &UDEPRECATED_UOculusFunctionLibrary::execGetGuardianPoints },
			{ "GetHmdColorDesc", &UDEPRECATED_UOculusFunctionLibrary::execGetHmdColorDesc },
			{ "GetNodeGuardianIntersection", &UDEPRECATED_UOculusFunctionLibrary::execGetNodeGuardianIntersection },
			{ "GetPlayAreaTransform", &UDEPRECATED_UOculusFunctionLibrary::execGetPlayAreaTransform },
			{ "GetPointGuardianIntersection", &UDEPRECATED_UOculusFunctionLibrary::execGetPointGuardianIntersection },
			{ "GetPose", &UDEPRECATED_UOculusFunctionLibrary::execGetPose },
			{ "GetRawSensorData", &UDEPRECATED_UOculusFunctionLibrary::execGetRawSensorData },
			{ "GetSystemHmd3DofModeEnabled", &UDEPRECATED_UOculusFunctionLibrary::execGetSystemHmd3DofModeEnabled },
			{ "GetUserProfile", &UDEPRECATED_UOculusFunctionLibrary::execGetUserProfile },
			{ "HasInputFocus", &UDEPRECATED_UOculusFunctionLibrary::execHasInputFocus },
			{ "HasSystemOverlayPresent", &UDEPRECATED_UOculusFunctionLibrary::execHasSystemOverlayPresent },
			{ "IsDeviceTracked", &UDEPRECATED_UOculusFunctionLibrary::execIsDeviceTracked },
			{ "IsGuardianConfigured", &UDEPRECATED_UOculusFunctionLibrary::execIsGuardianConfigured },
			{ "IsGuardianDisplayed", &UDEPRECATED_UOculusFunctionLibrary::execIsGuardianDisplayed },
			{ "SetBaseRotationAndBaseOffsetInMeters", &UDEPRECATED_UOculusFunctionLibrary::execSetBaseRotationAndBaseOffsetInMeters },
			{ "SetBaseRotationAndPositionOffset", &UDEPRECATED_UOculusFunctionLibrary::execSetBaseRotationAndPositionOffset },
			{ "SetClientColorDesc", &UDEPRECATED_UOculusFunctionLibrary::execSetClientColorDesc },
			{ "SetColorScaleAndOffset", &UDEPRECATED_UOculusFunctionLibrary::execSetColorScaleAndOffset },
			{ "SetCPUAndGPULevels", &UDEPRECATED_UOculusFunctionLibrary::execSetCPUAndGPULevels },
			{ "SetDisplayFrequency", &UDEPRECATED_UOculusFunctionLibrary::execSetDisplayFrequency },
			{ "SetFixedFoveatedRenderingLevel", &UDEPRECATED_UOculusFunctionLibrary::execSetFixedFoveatedRenderingLevel },
			{ "SetGuardianVisibility", &UDEPRECATED_UOculusFunctionLibrary::execSetGuardianVisibility },
			{ "SetPositionScale3D", &UDEPRECATED_UOculusFunctionLibrary::execSetPositionScale3D },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics
	{
		struct UOculusFunctionLibrary_eventAddLoadingSplashScreen_Parms
		{
			UTexture2D* Texture;
			FVector TranslationInMeters;
			FRotator Rotation;
			FVector2D SizeInMeters;
			FRotator DeltaRotation;
			bool bClearBeforeAdd;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TranslationInMeters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SizeInMeters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaRotation;
		static void NewProp_bClearBeforeAdd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearBeforeAdd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventAddLoadingSplashScreen_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_TranslationInMeters = { "TranslationInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventAddLoadingSplashScreen_Parms, TranslationInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventAddLoadingSplashScreen_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_SizeInMeters = { "SizeInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventAddLoadingSplashScreen_Parms, SizeInMeters), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_DeltaRotation = { "DeltaRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventAddLoadingSplashScreen_Parms, DeltaRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_bClearBeforeAdd_SetBit(void* Obj)
	{
		((UOculusFunctionLibrary_eventAddLoadingSplashScreen_Parms*)Obj)->bClearBeforeAdd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_bClearBeforeAdd = { "bClearBeforeAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusFunctionLibrary_eventAddLoadingSplashScreen_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_bClearBeforeAdd_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_TranslationInMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_SizeInMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_DeltaRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::NewProp_bClearBeforeAdd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "CPP_Default_bClearBeforeAdd", "false" },
		{ "CPP_Default_DeltaRotation", "" },
		{ "CPP_Default_SizeInMeters", "(X=1.000,Y=1.000)" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Add Loading Screen Splash from the Head Mounted Display Loading Screen functions instead." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "AddLoadingSplashScreen", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::UOculusFunctionLibrary_eventAddLoadingSplashScreen_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_ClearLoadingSplashScreens_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_ClearLoadingSplashScreens_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Clear Loading Screen Splashes from the Head Mounted Display Loading Screen functions instead." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_ClearLoadingSplashScreens_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "ClearLoadingSplashScreens", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_ClearLoadingSplashScreens_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_ClearLoadingSplashScreens_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_ClearLoadingSplashScreens()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_ClearLoadingSplashScreens_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnableOrientationTracking_Statics
	{
		struct UOculusFunctionLibrary_eventEnableOrientationTracking_Parms
		{
			bool bOrientationTracking;
		};
		static void NewProp_bOrientationTracking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrientationTracking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnableOrientationTracking_Statics::NewProp_bOrientationTracking_SetBit(void* Obj)
	{
		((UOculusFunctionLibrary_eventEnableOrientationTracking_Parms*)Obj)->bOrientationTracking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnableOrientationTracking_Statics::NewProp_bOrientationTracking = { "bOrientationTracking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusFunctionLibrary_eventEnableOrientationTracking_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnableOrientationTracking_Statics::NewProp_bOrientationTracking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnableOrientationTracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnableOrientationTracking_Statics::NewProp_bOrientationTracking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnableOrientationTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnableOrientationTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "EnableOrientationTracking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnableOrientationTracking_Statics::UOculusFunctionLibrary_eventEnableOrientationTracking_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnableOrientationTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnableOrientationTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnableOrientationTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnableOrientationTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnableOrientationTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnableOrientationTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnablePositionTracking_Statics
	{
		struct UOculusFunctionLibrary_eventEnablePositionTracking_Parms
		{
			bool bPositionTracking;
		};
		static void NewProp_bPositionTracking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPositionTracking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnablePositionTracking_Statics::NewProp_bPositionTracking_SetBit(void* Obj)
	{
		((UOculusFunctionLibrary_eventEnablePositionTracking_Parms*)Obj)->bPositionTracking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnablePositionTracking_Statics::NewProp_bPositionTracking = { "bPositionTracking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusFunctionLibrary_eventEnablePositionTracking_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnablePositionTracking_Statics::NewProp_bPositionTracking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnablePositionTracking_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnablePositionTracking_Statics::NewProp_bPositionTracking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnablePositionTracking_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnablePositionTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "EnablePositionTracking", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnablePositionTracking_Statics::UOculusFunctionLibrary_eventEnablePositionTracking_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnablePositionTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnablePositionTracking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnablePositionTracking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnablePositionTracking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnablePositionTracking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnablePositionTracking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics
	{
		struct UOculusFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms
		{
			TArray<float> ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "GetAvailableDisplayFrequencies", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::UOculusFunctionLibrary_eventGetAvailableDisplayFrequencies_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetAvailableDisplayFrequencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetAvailableDisplayFrequencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics
	{
		struct UOculusFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms
		{
			FRotator OutRotation;
			FVector OutBaseOffsetInMeters;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutBaseOffsetInMeters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutBaseOffsetInMeters = { "OutBaseOffsetInMeters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms, OutBaseOffsetInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_OutBaseOffsetInMeters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "GetBaseRotationAndBaseOffsetInMeters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::UOculusFunctionLibrary_eventGetBaseRotationAndBaseOffsetInMeters_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics
	{
		struct UOculusFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms
		{
			FRotator OutRot;
			FVector OutPosOffset;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutRot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPosOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::NewProp_OutRot = { "OutRot", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms, OutRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::NewProp_OutPosOffset = { "OutPosOffset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms, OutPosOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::NewProp_OutRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::NewProp_OutPosOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "A hack, proper camera positioning should be used" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "GetBaseRotationAndPositionOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::UOculusFunctionLibrary_eventGetBaseRotationAndPositionOffset_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics
	{
		struct UOculusFunctionLibrary_eventGetCurrentDisplayFrequency_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetCurrentDisplayFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "GetCurrentDisplayFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::UOculusFunctionLibrary_eventGetCurrentDisplayFrequency_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetCurrentDisplayFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetCurrentDisplayFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceName_Statics
	{
		struct UOculusFunctionLibrary_eventGetDeviceName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetDeviceName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "UOculusFunctionLibrary::GetDeviceName has been deprecated and no longer functions as before. Please use the enum-based GetDeviceType instead." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "GetDeviceName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceName_Statics::UOculusFunctionLibrary_eventGetDeviceName_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceType_Statics
	{
		struct UOculusFunctionLibrary_eventGetDeviceType_Parms
		{
			EOculusDeviceType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetDeviceType_Parms, ReturnValue), Z_Construct_UEnum_OculusHMD_EOculusDeviceType, METADATA_PARAMS(nullptr, 0) }; // 239135075
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceType_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "GetDeviceType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceType_Statics::UOculusFunctionLibrary_eventGetDeviceType_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics
	{
		struct UOculusFunctionLibrary_eventGetFixedFoveatedRenderingLevel_Parms
		{
			EFixedFoveatedRenderingLevel ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetFixedFoveatedRenderingLevel_Parms, ReturnValue), Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel, METADATA_PARAMS(nullptr, 0) }; // 3652770068
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "GetFixedFoveatedRenderingLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::UOculusFunctionLibrary_eventGetFixedFoveatedRenderingLevel_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUFrameTime_Statics
	{
		struct UOculusFunctionLibrary_eventGetGPUFrameTime_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUFrameTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetGPUFrameTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUFrameTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUFrameTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUFrameTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUFrameTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "GetGPUFrameTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUFrameTime_Statics::UOculusFunctionLibrary_eventGetGPUFrameTime_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUFrameTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUFrameTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUFrameTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUFrameTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUFrameTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUFrameTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUUtilization_Statics
	{
		struct UOculusFunctionLibrary_eventGetGPUUtilization_Parms
		{
			bool IsGPUAvailable;
			float GPUUtilization;
		};
		static void NewProp_IsGPUAvailable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGPUAvailable;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GPUUtilization;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUUtilization_Statics::NewProp_IsGPUAvailable_SetBit(void* Obj)
	{
		((UOculusFunctionLibrary_eventGetGPUUtilization_Parms*)Obj)->IsGPUAvailable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUUtilization_Statics::NewProp_IsGPUAvailable = { "IsGPUAvailable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusFunctionLibrary_eventGetGPUUtilization_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUUtilization_Statics::NewProp_IsGPUAvailable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUUtilization_Statics::NewProp_GPUUtilization = { "GPUUtilization", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetGPUUtilization_Parms, GPUUtilization), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUUtilization_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUUtilization_Statics::NewProp_IsGPUAvailable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUUtilization_Statics::NewProp_GPUUtilization,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUUtilization_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUUtilization_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "GetGPUUtilization", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUUtilization_Statics::UOculusFunctionLibrary_eventGetGPUUtilization_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUUtilization_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUUtilization_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUUtilization_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUUtilization_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUUtilization()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUUtilization_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianDimensions_Statics
	{
		struct UOculusFunctionLibrary_eventGetGuardianDimensions_Parms
		{
			EBoundaryType BoundaryType;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianDimensions_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianDimensions_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetGuardianDimensions_Parms, BoundaryType), Z_Construct_UEnum_OculusHMD_EBoundaryType, METADATA_PARAMS(nullptr, 0) }; // 3226926158
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianDimensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetGuardianDimensions_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianDimensions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianDimensions_Statics::NewProp_BoundaryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianDimensions_Statics::NewProp_BoundaryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianDimensions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianDimensions_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "GetGuardianDimensions", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianDimensions_Statics::UOculusFunctionLibrary_eventGetGuardianDimensions_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianDimensions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianDimensions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianDimensions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianDimensions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianDimensions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics
	{
		struct UOculusFunctionLibrary_eventGetGuardianPoints_Parms
		{
			EBoundaryType BoundaryType;
			bool UsePawnSpace;
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static void NewProp_UsePawnSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UsePawnSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetGuardianPoints_Parms, BoundaryType), Z_Construct_UEnum_OculusHMD_EBoundaryType, METADATA_PARAMS(nullptr, 0) }; // 3226926158
	void Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_UsePawnSpace_SetBit(void* Obj)
	{
		((UOculusFunctionLibrary_eventGetGuardianPoints_Parms*)Obj)->UsePawnSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_UsePawnSpace = { "UsePawnSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusFunctionLibrary_eventGetGuardianPoints_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_UsePawnSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetGuardianPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_BoundaryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_BoundaryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_UsePawnSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "CPP_Default_UsePawnSpace", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "GetGuardianPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::UOculusFunctionLibrary_eventGetGuardianPoints_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetHmdColorDesc_Statics
	{
		struct UOculusFunctionLibrary_eventGetHmdColorDesc_Parms
		{
			EOculusColorSpace ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetHmdColorDesc_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetHmdColorDesc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetHmdColorDesc_Parms, ReturnValue), Z_Construct_UEnum_OculusHMD_EOculusColorSpace, METADATA_PARAMS(nullptr, 0) }; // 2925337178
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetHmdColorDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetHmdColorDesc_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetHmdColorDesc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetHmdColorDesc_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetHmdColorDesc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "GetHmdColorDesc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetHmdColorDesc_Statics::UOculusFunctionLibrary_eventGetHmdColorDesc_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetHmdColorDesc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetHmdColorDesc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetHmdColorDesc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetHmdColorDesc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetHmdColorDesc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetHmdColorDesc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics
	{
		struct UOculusFunctionLibrary_eventGetNodeGuardianIntersection_Parms
		{
			ETrackedDeviceType DeviceType;
			EBoundaryType BoundaryType;
			FGuardianTestResult ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetNodeGuardianIntersection_Parms, DeviceType), Z_Construct_UEnum_OculusHMD_ETrackedDeviceType, METADATA_PARAMS(nullptr, 0) }; // 1408524775
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetNodeGuardianIntersection_Parms, BoundaryType), Z_Construct_UEnum_OculusHMD_EBoundaryType, METADATA_PARAMS(nullptr, 0) }; // 3226926158
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetNodeGuardianIntersection_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuardianTestResult, METADATA_PARAMS(nullptr, 0) }; // 2847898652
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_DeviceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_DeviceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_BoundaryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_BoundaryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "GetNodeGuardianIntersection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::UOculusFunctionLibrary_eventGetNodeGuardianIntersection_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPlayAreaTransform_Statics
	{
		struct UOculusFunctionLibrary_eventGetPlayAreaTransform_Parms
		{
			FTransform ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetPlayAreaTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "GetPlayAreaTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::UOculusFunctionLibrary_eventGetPlayAreaTransform_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPlayAreaTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPlayAreaTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics
	{
		struct UOculusFunctionLibrary_eventGetPointGuardianIntersection_Parms
		{
			FVector Point;
			EBoundaryType BoundaryType;
			FGuardianTestResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BoundaryType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BoundaryType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetPointGuardianIntersection_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_BoundaryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_BoundaryType = { "BoundaryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetPointGuardianIntersection_Parms, BoundaryType), Z_Construct_UEnum_OculusHMD_EBoundaryType, METADATA_PARAMS(nullptr, 0) }; // 3226926158
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetPointGuardianIntersection_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuardianTestResult, METADATA_PARAMS(nullptr, 0) }; // 2847898652
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_Point,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_BoundaryType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_BoundaryType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "GetPointGuardianIntersection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::UOculusFunctionLibrary_eventGetPointGuardianIntersection_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics
	{
		struct UOculusFunctionLibrary_eventGetPose_Parms
		{
			FRotator DeviceRotation;
			FVector DevicePosition;
			FVector NeckPosition;
			bool bUseOrienationForPlayerCamera;
			bool bUsePositionForPlayerCamera;
			FVector PositionScale;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeviceRotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DevicePosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NeckPosition;
		static void NewProp_bUseOrienationForPlayerCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOrienationForPlayerCamera;
		static void NewProp_bUsePositionForPlayerCamera_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePositionForPlayerCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::NewProp_DeviceRotation = { "DeviceRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetPose_Parms, DeviceRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::NewProp_DevicePosition = { "DevicePosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetPose_Parms, DevicePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::NewProp_NeckPosition = { "NeckPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetPose_Parms, NeckPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera_SetBit(void* Obj)
	{
		((UOculusFunctionLibrary_eventGetPose_Parms*)Obj)->bUseOrienationForPlayerCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera = { "bUseOrienationForPlayerCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusFunctionLibrary_eventGetPose_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera_SetBit(void* Obj)
	{
		((UOculusFunctionLibrary_eventGetPose_Parms*)Obj)->bUsePositionForPlayerCamera = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera = { "bUsePositionForPlayerCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusFunctionLibrary_eventGetPose_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::NewProp_PositionScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::NewProp_PositionScale = { "PositionScale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetPose_Parms, PositionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::NewProp_PositionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::NewProp_PositionScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::NewProp_DeviceRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::NewProp_DevicePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::NewProp_NeckPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUseOrienationForPlayerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::NewProp_bUsePositionForPlayerCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::NewProp_PositionScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "CPP_Default_bUseOrienationForPlayerCamera", "false" },
		{ "CPP_Default_bUsePositionForPlayerCamera", "false" },
		{ "CPP_Default_PositionScale", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "GetPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::UOculusFunctionLibrary_eventGetPose_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics
	{
		struct UOculusFunctionLibrary_eventGetRawSensorData_Parms
		{
			FVector AngularAcceleration;
			FVector LinearAcceleration;
			FVector AngularVelocity;
			FVector LinearVelocity;
			float TimeInSeconds;
			ETrackedDeviceType DeviceType;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularAcceleration;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearAcceleration;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeInSeconds;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_AngularAcceleration = { "AngularAcceleration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetRawSensorData_Parms, AngularAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_LinearAcceleration = { "LinearAcceleration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetRawSensorData_Parms, LinearAcceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetRawSensorData_Parms, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetRawSensorData_Parms, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_TimeInSeconds = { "TimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetRawSensorData_Parms, TimeInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetRawSensorData_Parms, DeviceType), Z_Construct_UEnum_OculusHMD_ETrackedDeviceType, METADATA_PARAMS(nullptr, 0) }; // 1408524775
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_AngularAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_LinearAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_AngularVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_LinearVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_TimeInSeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_DeviceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::NewProp_DeviceType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "CPP_Default_DeviceType", "HMD" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "GetRawSensorData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::UOculusFunctionLibrary_eventGetRawSensorData_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics
	{
		struct UOculusFunctionLibrary_eventGetSystemHmd3DofModeEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UOculusFunctionLibrary_eventGetSystemHmd3DofModeEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusFunctionLibrary_eventGetSystemHmd3DofModeEnabled_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "GetSystemHmd3DofModeEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::UOculusFunctionLibrary_eventGetSystemHmd3DofModeEnabled_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetUserProfile_Statics
	{
		struct UOculusFunctionLibrary_eventGetUserProfile_Parms
		{
			FHmdUserProfile Profile;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Profile;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetUserProfile_Statics::NewProp_Profile = { "Profile", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventGetUserProfile_Parms, Profile), Z_Construct_UScriptStruct_FHmdUserProfile, METADATA_PARAMS(nullptr, 0) }; // 4270405467
	void Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetUserProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UOculusFunctionLibrary_eventGetUserProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetUserProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusFunctionLibrary_eventGetUserProfile_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetUserProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetUserProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetUserProfile_Statics::NewProp_Profile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetUserProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetUserProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetUserProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "GetUserProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetUserProfile_Statics::UOculusFunctionLibrary_eventGetUserProfile_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetUserProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetUserProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetUserProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetUserProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetUserProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetUserProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasInputFocus_Statics
	{
		struct UOculusFunctionLibrary_eventHasInputFocus_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UOculusFunctionLibrary_eventHasInputFocus_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusFunctionLibrary_eventHasInputFocus_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasInputFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasInputFocus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasInputFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasInputFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "HasInputFocus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasInputFocus_Statics::UOculusFunctionLibrary_eventHasInputFocus_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasInputFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasInputFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasInputFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasInputFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasInputFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasInputFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics
	{
		struct UOculusFunctionLibrary_eventHasSystemOverlayPresent_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UOculusFunctionLibrary_eventHasSystemOverlayPresent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusFunctionLibrary_eventHasSystemOverlayPresent_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "HasSystemOverlayPresent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::UOculusFunctionLibrary_eventHasSystemOverlayPresent_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasSystemOverlayPresent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasSystemOverlayPresent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked_Statics
	{
		struct UOculusFunctionLibrary_eventIsDeviceTracked_Parms
		{
			ETrackedDeviceType DeviceType;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceType;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_DeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_DeviceType = { "DeviceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventIsDeviceTracked_Parms, DeviceType), Z_Construct_UEnum_OculusHMD_ETrackedDeviceType, METADATA_PARAMS(nullptr, 0) }; // 1408524775
	void Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UOculusFunctionLibrary_eventIsDeviceTracked_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusFunctionLibrary_eventIsDeviceTracked_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_DeviceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_DeviceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "IsDeviceTracked", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked_Statics::UOculusFunctionLibrary_eventIsDeviceTracked_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianConfigured_Statics
	{
		struct UOculusFunctionLibrary_eventIsGuardianConfigured_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianConfigured_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UOculusFunctionLibrary_eventIsGuardianConfigured_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianConfigured_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusFunctionLibrary_eventIsGuardianConfigured_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianConfigured_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianConfigured_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianConfigured_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianConfigured_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianConfigured_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "IsGuardianConfigured", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianConfigured_Statics::UOculusFunctionLibrary_eventIsGuardianConfigured_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianConfigured_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianConfigured_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianConfigured_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianConfigured_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianConfigured()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianConfigured_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianDisplayed_Statics
	{
		struct UOculusFunctionLibrary_eventIsGuardianDisplayed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UOculusFunctionLibrary_eventIsGuardianDisplayed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusFunctionLibrary_eventIsGuardianDisplayed_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "IsGuardianDisplayed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::UOculusFunctionLibrary_eventIsGuardianDisplayed_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianDisplayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianDisplayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics
	{
		struct UOculusFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms
		{
			FRotator Rotation;
			FVector BaseOffsetInMeters;
			TEnumAsByte<EOrientPositionSelector::Type> Options;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseOffsetInMeters;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_BaseOffsetInMeters = { "BaseOffsetInMeters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms, BaseOffsetInMeters), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms, Options), Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector, METADATA_PARAMS(nullptr, 0) }; // 3931628698
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_BaseOffsetInMeters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "SetBaseRotationAndBaseOffsetInMeters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::UOculusFunctionLibrary_eventSetBaseRotationAndBaseOffsetInMeters_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics
	{
		struct UOculusFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms
		{
			FRotator BaseRot;
			FVector PosOffset;
			TEnumAsByte<EOrientPositionSelector::Type> Options;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseRot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PosOffset;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Options;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_BaseRot = { "BaseRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms, BaseRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_PosOffset = { "PosOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms, PosOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_Options = { "Options", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms, Options), Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector, METADATA_PARAMS(nullptr, 0) }; // 3931628698
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_BaseRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_PosOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::NewProp_Options,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "A hack, proper camera positioning should be used" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "SetBaseRotationAndPositionOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::UOculusFunctionLibrary_eventSetBaseRotationAndPositionOffset_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetClientColorDesc_Statics
	{
		struct UOculusFunctionLibrary_eventSetClientColorDesc_Parms
		{
			EOculusColorSpace ColorSpace;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorSpace_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetClientColorDesc_Statics::NewProp_ColorSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetClientColorDesc_Statics::NewProp_ColorSpace = { "ColorSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventSetClientColorDesc_Parms, ColorSpace), Z_Construct_UEnum_OculusHMD_EOculusColorSpace, METADATA_PARAMS(nullptr, 0) }; // 2925337178
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetClientColorDesc_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetClientColorDesc_Statics::NewProp_ColorSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetClientColorDesc_Statics::NewProp_ColorSpace,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetClientColorDesc_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetClientColorDesc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "SetClientColorDesc", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetClientColorDesc_Statics::UOculusFunctionLibrary_eventSetClientColorDesc_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetClientColorDesc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetClientColorDesc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetClientColorDesc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetClientColorDesc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetClientColorDesc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetClientColorDesc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics
	{
		struct UOculusFunctionLibrary_eventSetColorScaleAndOffset_Parms
		{
			FLinearColor ColorScale;
			FLinearColor ColorOffset;
			bool bApplyToAllLayers;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorOffset;
		static void NewProp_bApplyToAllLayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyToAllLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorScale = { "ColorScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventSetColorScaleAndOffset_Parms, ColorScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorOffset = { "ColorOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventSetColorScaleAndOffset_Parms, ColorOffset), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers_SetBit(void* Obj)
	{
		((UOculusFunctionLibrary_eventSetColorScaleAndOffset_Parms*)Obj)->bApplyToAllLayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers = { "bApplyToAllLayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusFunctionLibrary_eventSetColorScaleAndOffset_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_ColorOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::NewProp_bApplyToAllLayers,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "CPP_Default_bApplyToAllLayers", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "SetColorScaleAndOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::UOculusFunctionLibrary_eventSetColorScaleAndOffset_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics
	{
		struct UOculusFunctionLibrary_eventSetCPUAndGPULevels_Parms
		{
			int32 CPULevel;
			int32 GPULevel;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CPULevel;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GPULevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_CPULevel = { "CPULevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventSetCPUAndGPULevels_Parms, CPULevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_GPULevel = { "GPULevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventSetCPUAndGPULevels_Parms, GPULevel), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_CPULevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::NewProp_GPULevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "SetCPUAndGPULevels", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::UOculusFunctionLibrary_eventSetCPUAndGPULevels_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetCPUAndGPULevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetCPUAndGPULevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetDisplayFrequency_Statics
	{
		struct UOculusFunctionLibrary_eventSetDisplayFrequency_Parms
		{
			float RequestedFrequency;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RequestedFrequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetDisplayFrequency_Statics::NewProp_RequestedFrequency = { "RequestedFrequency", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventSetDisplayFrequency_Parms, RequestedFrequency), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetDisplayFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetDisplayFrequency_Statics::NewProp_RequestedFrequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetDisplayFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetDisplayFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "SetDisplayFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetDisplayFrequency_Statics::UOculusFunctionLibrary_eventSetDisplayFrequency_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetDisplayFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetDisplayFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetDisplayFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetDisplayFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetDisplayFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetDisplayFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics
	{
		struct UOculusFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms
		{
			EFixedFoveatedRenderingLevel level;
			bool isDynamic;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_level_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_level;
		static void NewProp_isDynamic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDynamic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_level_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_level = { "level", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms, level), Z_Construct_UEnum_OculusHMD_EFixedFoveatedRenderingLevel, METADATA_PARAMS(nullptr, 0) }; // 3652770068
	void Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_isDynamic_SetBit(void* Obj)
	{
		((UOculusFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms*)Obj)->isDynamic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_isDynamic = { "isDynamic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_isDynamic_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_level_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::NewProp_isDynamic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "SetFixedFoveatedRenderingLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::UOculusFunctionLibrary_eventSetFixedFoveatedRenderingLevel_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetGuardianVisibility_Statics
	{
		struct UOculusFunctionLibrary_eventSetGuardianVisibility_Parms
		{
			bool GuardianVisible;
		};
		static void NewProp_GuardianVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GuardianVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetGuardianVisibility_Statics::NewProp_GuardianVisible_SetBit(void* Obj)
	{
		((UOculusFunctionLibrary_eventSetGuardianVisibility_Parms*)Obj)->GuardianVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetGuardianVisibility_Statics::NewProp_GuardianVisible = { "GuardianVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusFunctionLibrary_eventSetGuardianVisibility_Parms), &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetGuardianVisibility_Statics::NewProp_GuardianVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetGuardianVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetGuardianVisibility_Statics::NewProp_GuardianVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetGuardianVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary|Guardian" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "The OculusVR plugin is deprecated." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetGuardianVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "SetGuardianVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetGuardianVisibility_Statics::UOculusFunctionLibrary_eventSetGuardianVisibility_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetGuardianVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetGuardianVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetGuardianVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetGuardianVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetGuardianVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetGuardianVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetPositionScale3D_Statics
	{
		struct UOculusFunctionLibrary_eventSetPositionScale3D_Parms
		{
			FVector PosScale3D;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PosScale3D;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetPositionScale3D_Statics::NewProp_PosScale3D = { "PosScale3D", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOculusFunctionLibrary_eventSetPositionScale3D_Parms, PosScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetPositionScale3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetPositionScale3D_Statics::NewProp_PosScale3D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetPositionScale3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "OculusLibrary" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This feature is no longer supported." },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetPositionScale3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, nullptr, "SetPositionScale3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetPositionScale3D_Statics::UOculusFunctionLibrary_eventSetPositionScale3D_Parms), Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetPositionScale3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetPositionScale3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetPositionScale3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetPositionScale3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetPositionScale3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetPositionScale3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_UOculusFunctionLibrary);
	UClass* Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary_NoRegister()
	{
		return UDEPRECATED_UOculusFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_AddLoadingSplashScreen, "AddLoadingSplashScreen" }, // 2673059728
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_ClearLoadingSplashScreens, "ClearLoadingSplashScreens" }, // 2811068404
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnableOrientationTracking, "EnableOrientationTracking" }, // 2100972229
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_EnablePositionTracking, "EnablePositionTracking" }, // 3182290239
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetAvailableDisplayFrequencies, "GetAvailableDisplayFrequencies" }, // 2786672444
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndBaseOffsetInMeters, "GetBaseRotationAndBaseOffsetInMeters" }, // 718597576
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetBaseRotationAndPositionOffset, "GetBaseRotationAndPositionOffset" }, // 1808136278
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetCurrentDisplayFrequency, "GetCurrentDisplayFrequency" }, // 3319402941
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceName, "GetDeviceName" }, // 2804271853
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetDeviceType, "GetDeviceType" }, // 4275530964
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetFixedFoveatedRenderingLevel, "GetFixedFoveatedRenderingLevel" }, // 2886100808
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUFrameTime, "GetGPUFrameTime" }, // 3723757363
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGPUUtilization, "GetGPUUtilization" }, // 2321027196
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianDimensions, "GetGuardianDimensions" }, // 451476291
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetGuardianPoints, "GetGuardianPoints" }, // 2985439164
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetHmdColorDesc, "GetHmdColorDesc" }, // 3644377929
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetNodeGuardianIntersection, "GetNodeGuardianIntersection" }, // 3974146324
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPlayAreaTransform, "GetPlayAreaTransform" }, // 2923084205
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPointGuardianIntersection, "GetPointGuardianIntersection" }, // 3593175690
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetPose, "GetPose" }, // 2021653180
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetRawSensorData, "GetRawSensorData" }, // 4090841357
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetSystemHmd3DofModeEnabled, "GetSystemHmd3DofModeEnabled" }, // 4850149
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_GetUserProfile, "GetUserProfile" }, // 2526342805
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasInputFocus, "HasInputFocus" }, // 13211307
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_HasSystemOverlayPresent, "HasSystemOverlayPresent" }, // 792817920
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsDeviceTracked, "IsDeviceTracked" }, // 2094761382
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianConfigured, "IsGuardianConfigured" }, // 2242804387
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_IsGuardianDisplayed, "IsGuardianDisplayed" }, // 3726407832
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndBaseOffsetInMeters, "SetBaseRotationAndBaseOffsetInMeters" }, // 3251679056
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetBaseRotationAndPositionOffset, "SetBaseRotationAndPositionOffset" }, // 4027849558
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetClientColorDesc, "SetClientColorDesc" }, // 2121855383
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetColorScaleAndOffset, "SetColorScaleAndOffset" }, // 2312664339
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetCPUAndGPULevels, "SetCPUAndGPULevels" }, // 2256178800
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetDisplayFrequency, "SetDisplayFrequency" }, // 1182474653
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetFixedFoveatedRenderingLevel, "SetFixedFoveatedRenderingLevel" }, // 3004427048
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetGuardianVisibility, "SetGuardianVisibility" }, // 2418995017
		{ &Z_Construct_UFunction_UDEPRECATED_UOculusFunctionLibrary_SetPositionScale3D, "SetPositionScale3D" }, // 3874936978
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "DeprecationMessage", "OculusVR plugin is deprecated; please use the built-in OpenXR plugin or OculusXR plugin from the Marketplace." },
		{ "IncludePath", "OculusFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OculusFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_UOculusFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary_Statics::ClassParams = {
		&UDEPRECATED_UOculusFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_UOculusFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_UOculusFunctionLibrary.OuterSingleton, Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_UOculusFunctionLibrary.OuterSingleton;
	}
	template<> OCULUSHMD_API UClass* StaticClass<UDEPRECATED_UOculusFunctionLibrary>()
	{
		return UDEPRECATED_UOculusFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_UOculusFunctionLibrary);
	UDEPRECATED_UOculusFunctionLibrary::~UDEPRECATED_UOculusFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics::EnumInfo[] = {
		{ ETrackedDeviceType_StaticEnum, TEXT("ETrackedDeviceType"), &Z_Registration_Info_UEnum_ETrackedDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1408524775U) },
		{ EFixedFoveatedRenderingLevel_StaticEnum, TEXT("EFixedFoveatedRenderingLevel"), &Z_Registration_Info_UEnum_EFixedFoveatedRenderingLevel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3652770068U) },
		{ EBoundaryType_StaticEnum, TEXT("EBoundaryType"), &Z_Registration_Info_UEnum_EBoundaryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3226926158U) },
		{ EOculusColorSpace_StaticEnum, TEXT("EOculusColorSpace"), &Z_Registration_Info_UEnum_EOculusColorSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2925337178U) },
		{ EHandTrackingSupport_StaticEnum, TEXT("EHandTrackingSupport"), &Z_Registration_Info_UEnum_EHandTrackingSupport, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1347597193U) },
		{ EHandTrackingFrequency_StaticEnum, TEXT("EHandTrackingFrequency"), &Z_Registration_Info_UEnum_EHandTrackingFrequency, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 918203714U) },
		{ EOculusDeviceType_StaticEnum, TEXT("EOculusDeviceType"), &Z_Registration_Info_UEnum_EOculusDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 239135075U) },
		{ EOculusXrApi_StaticEnum, TEXT("EOculusXrApi"), &Z_Registration_Info_UEnum_EOculusXrApi, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3668051155U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics::ScriptStructInfo[] = {
		{ FHmdUserProfileField::StaticStruct, Z_Construct_UScriptStruct_FHmdUserProfileField_Statics::NewStructOps, TEXT("HmdUserProfileField"), &Z_Registration_Info_UScriptStruct_HmdUserProfileField, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHmdUserProfileField), 3655655463U) },
		{ FHmdUserProfile::StaticStruct, Z_Construct_UScriptStruct_FHmdUserProfile_Statics::NewStructOps, TEXT("HmdUserProfile"), &Z_Registration_Info_UScriptStruct_HmdUserProfile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHmdUserProfile), 4270405467U) },
		{ FGuardianTestResult::StaticStruct, Z_Construct_UScriptStruct_FGuardianTestResult_Statics::NewStructOps, TEXT("GuardianTestResult"), &Z_Registration_Info_UScriptStruct_GuardianTestResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGuardianTestResult), 2847898652U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_UOculusFunctionLibrary, UDEPRECATED_UOculusFunctionLibrary::StaticClass, TEXT("UDEPRECATED_UOculusFunctionLibrary"), &Z_Registration_Info_UClass_UDEPRECATED_UOculusFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_UOculusFunctionLibrary), 2278728850U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_3280969520(TEXT("/Script/OculusHMD"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusVR_Source_OculusHMD_Public_OculusFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
