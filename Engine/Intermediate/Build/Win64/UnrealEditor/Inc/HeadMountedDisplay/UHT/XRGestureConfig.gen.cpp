// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "XRGestureConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXRGestureConfig() {}
// Cross Module References
	HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ESpatialInputGestureAxis();
	HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRGestureConfig();
	UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpatialInputGestureAxis;
	static UEnum* ESpatialInputGestureAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESpatialInputGestureAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESpatialInputGestureAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_ESpatialInputGestureAxis, (UObject*)Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("ESpatialInputGestureAxis"));
		}
		return Z_Registration_Info_UEnum_ESpatialInputGestureAxis.OuterSingleton;
	}
	template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<ESpatialInputGestureAxis>()
	{
		return ESpatialInputGestureAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_HeadMountedDisplay_ESpatialInputGestureAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HeadMountedDisplay_ESpatialInputGestureAxis_Statics::Enumerators[] = {
		{ "ESpatialInputGestureAxis::None", (int64)ESpatialInputGestureAxis::None },
		{ "ESpatialInputGestureAxis::Manipulation", (int64)ESpatialInputGestureAxis::Manipulation },
		{ "ESpatialInputGestureAxis::Navigation", (int64)ESpatialInputGestureAxis::Navigation },
		{ "ESpatialInputGestureAxis::NavigationRails", (int64)ESpatialInputGestureAxis::NavigationRails },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HeadMountedDisplay_ESpatialInputGestureAxis_Statics::Enum_MetaDataParams[] = {
		{ "Manipulation.Name", "ESpatialInputGestureAxis::Manipulation" },
		{ "ModuleRelativePath", "Public/XRGestureConfig.h" },
		{ "Navigation.Name", "ESpatialInputGestureAxis::Navigation" },
		{ "NavigationRails.Name", "ESpatialInputGestureAxis::NavigationRails" },
		{ "None.Name", "ESpatialInputGestureAxis::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HeadMountedDisplay_ESpatialInputGestureAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
		nullptr,
		"ESpatialInputGestureAxis",
		"ESpatialInputGestureAxis",
		Z_Construct_UEnum_HeadMountedDisplay_ESpatialInputGestureAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_ESpatialInputGestureAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HeadMountedDisplay_ESpatialInputGestureAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_ESpatialInputGestureAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HeadMountedDisplay_ESpatialInputGestureAxis()
	{
		if (!Z_Registration_Info_UEnum_ESpatialInputGestureAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpatialInputGestureAxis.InnerSingleton, Z_Construct_UEnum_HeadMountedDisplay_ESpatialInputGestureAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESpatialInputGestureAxis.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_XRGestureConfig;
class UScriptStruct* FXRGestureConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_XRGestureConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_XRGestureConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FXRGestureConfig, (UObject*)Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("XRGestureConfig"));
	}
	return Z_Registration_Info_UScriptStruct_XRGestureConfig.OuterSingleton;
}
template<> HEADMOUNTEDDISPLAY_API UScriptStruct* StaticStruct<FXRGestureConfig>()
{
	return FXRGestureConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FXRGestureConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTap_MetaData[];
#endif
		static void NewProp_bTap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHold_MetaData[];
#endif
		static void NewProp_bHold_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHold;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AxisGesture_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisGesture_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AxisGesture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavigationAxisX_MetaData[];
#endif
		static void NewProp_bNavigationAxisX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavigationAxisX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavigationAxisY_MetaData[];
#endif
		static void NewProp_bNavigationAxisY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavigationAxisY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNavigationAxisZ_MetaData[];
#endif
		static void NewProp_bNavigationAxisZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNavigationAxisZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRGestureConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/XRGestureConfig.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FXRGestureConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bTap_MetaData[] = {
		{ "Category", "Gestures" },
		{ "ModuleRelativePath", "Public/XRGestureConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bTap_SetBit(void* Obj)
	{
		((FXRGestureConfig*)Obj)->bTap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bTap = { "bTap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FXRGestureConfig), &Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bTap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bTap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bTap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bHold_MetaData[] = {
		{ "Category", "Gestures" },
		{ "ModuleRelativePath", "Public/XRGestureConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bHold_SetBit(void* Obj)
	{
		((FXRGestureConfig*)Obj)->bHold = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bHold = { "bHold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FXRGestureConfig), &Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bHold_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bHold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bHold_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_AxisGesture_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_AxisGesture_MetaData[] = {
		{ "Category", "Gestures" },
		{ "ModuleRelativePath", "Public/XRGestureConfig.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_AxisGesture = { "AxisGesture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FXRGestureConfig, AxisGesture), Z_Construct_UEnum_HeadMountedDisplay_ESpatialInputGestureAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_AxisGesture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_AxisGesture_MetaData)) }; // 2419240486
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisX_MetaData[] = {
		{ "Category", "Gestures" },
		{ "ModuleRelativePath", "Public/XRGestureConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisX_SetBit(void* Obj)
	{
		((FXRGestureConfig*)Obj)->bNavigationAxisX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisX = { "bNavigationAxisX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FXRGestureConfig), &Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisX_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisY_MetaData[] = {
		{ "Category", "Gestures" },
		{ "ModuleRelativePath", "Public/XRGestureConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisY_SetBit(void* Obj)
	{
		((FXRGestureConfig*)Obj)->bNavigationAxisY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisY = { "bNavigationAxisY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FXRGestureConfig), &Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisY_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisZ_MetaData[] = {
		{ "Category", "Gestures" },
		{ "ModuleRelativePath", "Public/XRGestureConfig.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisZ_SetBit(void* Obj)
	{
		((FXRGestureConfig*)Obj)->bNavigationAxisZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisZ = { "bNavigationAxisZ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FXRGestureConfig), &Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisZ_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FXRGestureConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bTap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bHold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_AxisGesture_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_AxisGesture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewProp_bNavigationAxisZ,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FXRGestureConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
		nullptr,
		&NewStructOps,
		"XRGestureConfig",
		sizeof(FXRGestureConfig),
		alignof(FXRGestureConfig),
		Z_Construct_UScriptStruct_FXRGestureConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRGestureConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FXRGestureConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_XRGestureConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_XRGestureConfig.InnerSingleton, Z_Construct_UScriptStruct_FXRGestureConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_XRGestureConfig.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRGestureConfig_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRGestureConfig_h_Statics::EnumInfo[] = {
		{ ESpatialInputGestureAxis_StaticEnum, TEXT("ESpatialInputGestureAxis"), &Z_Registration_Info_UEnum_ESpatialInputGestureAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2419240486U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRGestureConfig_h_Statics::ScriptStructInfo[] = {
		{ FXRGestureConfig::StaticStruct, Z_Construct_UScriptStruct_FXRGestureConfig_Statics::NewStructOps, TEXT("XRGestureConfig"), &Z_Registration_Info_UScriptStruct_XRGestureConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FXRGestureConfig), 2156989822U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRGestureConfig_h_1310277062(TEXT("/Script/HeadMountedDisplay"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRGestureConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRGestureConfig_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRGestureConfig_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_XRGestureConfig_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
