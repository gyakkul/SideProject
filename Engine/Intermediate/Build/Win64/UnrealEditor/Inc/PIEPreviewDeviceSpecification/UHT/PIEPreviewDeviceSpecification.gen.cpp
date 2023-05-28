// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PIEPreviewDeviceSpecification.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePIEPreviewDeviceSpecification() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	PIEPREVIEWDEVICESPECIFICATION_API UClass* Z_Construct_UClass_UPIEPreviewDeviceSpecification();
	PIEPREVIEWDEVICESPECIFICATION_API UClass* Z_Construct_UClass_UPIEPreviewDeviceSpecification_NoRegister();
	PIEPREVIEWDEVICESPECIFICATION_API UEnum* Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType();
	PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties();
	PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FPIEBezelProperties();
	PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FPIEIOSDeviceProperties();
	PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect();
	PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications();
	PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FPIERHIOverrideState();
	PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* Z_Construct_UScriptStruct_FPIESwitchDeviceProperties();
	UPackage* Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPIEPreviewDeviceType;
	static UEnum* EPIEPreviewDeviceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPIEPreviewDeviceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPIEPreviewDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType, (UObject*)Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification(), TEXT("EPIEPreviewDeviceType"));
		}
		return Z_Registration_Info_UEnum_EPIEPreviewDeviceType.OuterSingleton;
	}
	template<> PIEPREVIEWDEVICESPECIFICATION_API UEnum* StaticEnum<EPIEPreviewDeviceType>()
	{
		return EPIEPreviewDeviceType_StaticEnum();
	}
	struct Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType_Statics::Enumerators[] = {
		{ "EPIEPreviewDeviceType::Unset", (int64)EPIEPreviewDeviceType::Unset },
		{ "EPIEPreviewDeviceType::Android", (int64)EPIEPreviewDeviceType::Android },
		{ "EPIEPreviewDeviceType::IOS", (int64)EPIEPreviewDeviceType::IOS },
		{ "EPIEPreviewDeviceType::TVOS", (int64)EPIEPreviewDeviceType::TVOS },
		{ "EPIEPreviewDeviceType::Switch", (int64)EPIEPreviewDeviceType::Switch },
		{ "EPIEPreviewDeviceType::MAX", (int64)EPIEPreviewDeviceType::MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType_Statics::Enum_MetaDataParams[] = {
		{ "Android.Name", "EPIEPreviewDeviceType::Android" },
		{ "IOS.Name", "EPIEPreviewDeviceType::IOS" },
		{ "MAX.Name", "EPIEPreviewDeviceType::MAX" },
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
		{ "Switch.Name", "EPIEPreviewDeviceType::Switch" },
		{ "TVOS.Name", "EPIEPreviewDeviceType::TVOS" },
		{ "Unset.Name", "EPIEPreviewDeviceType::Unset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification,
		nullptr,
		"EPIEPreviewDeviceType",
		"EPIEPreviewDeviceType",
		Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType()
	{
		if (!Z_Registration_Info_UEnum_EPIEPreviewDeviceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPIEPreviewDeviceType.InnerSingleton, Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPIEPreviewDeviceType.InnerSingleton;
	}
	void UPIEPreviewDeviceSpecification::StaticRegisterNativesUPIEPreviewDeviceSpecification()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPIEPreviewDeviceSpecification);
	UClass* Z_Construct_UClass_UPIEPreviewDeviceSpecification_NoRegister()
	{
		return UPIEPreviewDeviceSpecification::StaticClass();
	}
	struct Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreviewDeviceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewDeviceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviewDeviceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPUFamily_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GPUFamily;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GLVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GLVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VulkanVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VulkanVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AndroidVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AndroidVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceMake_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceMake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceModel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceBuildNumber_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceBuildNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsingHoudini_MetaData[];
#endif
		static void NewProp_UsingHoudini_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UsingHoudini;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hardware_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Hardware;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chipset_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Chipset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PIEPreviewDeviceSpecification.h" },
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_PreviewDeviceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_PreviewDeviceType_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_PreviewDeviceType = { "PreviewDeviceType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPIEPreviewDeviceSpecification, PreviewDeviceType), Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType, METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_PreviewDeviceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_PreviewDeviceType_MetaData)) }; // 3480333351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GPUFamily_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GPUFamily = { "GPUFamily", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPIEPreviewDeviceSpecification, GPUFamily), METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GPUFamily_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GPUFamily_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GLVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GLVersion = { "GLVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPIEPreviewDeviceSpecification, GLVersion), METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GLVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GLVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_VulkanVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_VulkanVersion = { "VulkanVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPIEPreviewDeviceSpecification, VulkanVersion), METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_VulkanVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_VulkanVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_AndroidVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_AndroidVersion = { "AndroidVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPIEPreviewDeviceSpecification, AndroidVersion), METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_AndroidVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_AndroidVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceMake_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceMake = { "DeviceMake", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPIEPreviewDeviceSpecification, DeviceMake), METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceMake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceMake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceModel = { "DeviceModel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPIEPreviewDeviceSpecification, DeviceModel), METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceBuildNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceBuildNumber = { "DeviceBuildNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPIEPreviewDeviceSpecification, DeviceBuildNumber), METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceBuildNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceBuildNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_UsingHoudini_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_UsingHoudini_SetBit(void* Obj)
	{
		((UPIEPreviewDeviceSpecification*)Obj)->UsingHoudini = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_UsingHoudini = { "UsingHoudini", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPIEPreviewDeviceSpecification), &Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_UsingHoudini_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_UsingHoudini_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_UsingHoudini_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_Hardware_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_Hardware = { "Hardware", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPIEPreviewDeviceSpecification, Hardware), METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_Hardware_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_Hardware_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_Chipset_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_Chipset = { "Chipset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPIEPreviewDeviceSpecification, Chipset), METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_Chipset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_Chipset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_PreviewDeviceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_PreviewDeviceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GPUFamily,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_GLVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_VulkanVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_AndroidVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceMake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_DeviceBuildNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_UsingHoudini,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_Hardware,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::NewProp_Chipset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPIEPreviewDeviceSpecification>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::ClassParams = {
		&UPIEPreviewDeviceSpecification::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPIEPreviewDeviceSpecification()
	{
		if (!Z_Registration_Info_UClass_UPIEPreviewDeviceSpecification.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPIEPreviewDeviceSpecification.OuterSingleton, Z_Construct_UClass_UPIEPreviewDeviceSpecification_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPIEPreviewDeviceSpecification.OuterSingleton;
	}
	template<> PIEPREVIEWDEVICESPECIFICATION_API UClass* StaticClass<UPIEPreviewDeviceSpecification>()
	{
		return UPIEPreviewDeviceSpecification::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPIEPreviewDeviceSpecification);
	UPIEPreviewDeviceSpecification::~UPIEPreviewDeviceSpecification() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PIERHIOverrideState;
class UScriptStruct* FPIERHIOverrideState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PIERHIOverrideState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PIERHIOverrideState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIERHIOverrideState, (UObject*)Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification(), TEXT("PIERHIOverrideState"));
	}
	return Z_Registration_Info_UScriptStruct_PIERHIOverrideState.OuterSingleton;
}
template<> PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* StaticStruct<FPIERHIOverrideState>()
{
	return FPIERHIOverrideState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxShadowDepthBufferSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxShadowDepthBufferSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxShadowDepthBufferSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxShadowDepthBufferSizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTextureDimensions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTextureDimensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCubeTextureDimensions_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCubeTextureDimensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportsRenderTargetFormat_PF_G8_MetaData[];
#endif
		static void NewProp_SupportsRenderTargetFormat_PF_G8_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SupportsRenderTargetFormat_PF_G8;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportsRenderTargetFormat_PF_FloatRGBA_MetaData[];
#endif
		static void NewProp_SupportsRenderTargetFormat_PF_FloatRGBA_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SupportsRenderTargetFormat_PF_FloatRGBA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportsMultipleRenderTargets_MetaData[];
#endif
		static void NewProp_SupportsMultipleRenderTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SupportsMultipleRenderTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIERHIOverrideState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeX_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeX = { "MaxShadowDepthBufferSizeX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIERHIOverrideState, MaxShadowDepthBufferSizeX), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeY_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeY = { "MaxShadowDepthBufferSizeY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIERHIOverrideState, MaxShadowDepthBufferSizeY), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxTextureDimensions_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxTextureDimensions = { "MaxTextureDimensions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIERHIOverrideState, MaxTextureDimensions), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxTextureDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxTextureDimensions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxCubeTextureDimensions_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxCubeTextureDimensions = { "MaxCubeTextureDimensions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIERHIOverrideState, MaxCubeTextureDimensions), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxCubeTextureDimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxCubeTextureDimensions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_G8_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_G8_SetBit(void* Obj)
	{
		((FPIERHIOverrideState*)Obj)->SupportsRenderTargetFormat_PF_G8 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_G8 = { "SupportsRenderTargetFormat_PF_G8", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPIERHIOverrideState), &Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_G8_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_G8_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_G8_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_FloatRGBA_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_FloatRGBA_SetBit(void* Obj)
	{
		((FPIERHIOverrideState*)Obj)->SupportsRenderTargetFormat_PF_FloatRGBA = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_FloatRGBA = { "SupportsRenderTargetFormat_PF_FloatRGBA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPIERHIOverrideState), &Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_FloatRGBA_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_FloatRGBA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_FloatRGBA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsMultipleRenderTargets_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsMultipleRenderTargets_SetBit(void* Obj)
	{
		((FPIERHIOverrideState*)Obj)->SupportsMultipleRenderTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsMultipleRenderTargets = { "SupportsMultipleRenderTargets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPIERHIOverrideState), &Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsMultipleRenderTargets_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsMultipleRenderTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsMultipleRenderTargets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxShadowDepthBufferSizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxTextureDimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_MaxCubeTextureDimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_G8,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsRenderTargetFormat_PF_FloatRGBA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewProp_SupportsMultipleRenderTargets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification,
		nullptr,
		&NewStructOps,
		"PIERHIOverrideState",
		sizeof(FPIERHIOverrideState),
		alignof(FPIERHIOverrideState),
		Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIERHIOverrideState()
	{
		if (!Z_Registration_Info_UScriptStruct_PIERHIOverrideState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PIERHIOverrideState.InnerSingleton, Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PIERHIOverrideState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PIEAndroidDeviceProperties;
class UScriptStruct* FPIEAndroidDeviceProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PIEAndroidDeviceProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PIEAndroidDeviceProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties, (UObject*)Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification(), TEXT("PIEAndroidDeviceProperties"));
	}
	return Z_Registration_Info_UScriptStruct_PIEAndroidDeviceProperties.OuterSingleton;
}
template<> PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* StaticStruct<FPIEAndroidDeviceProperties>()
{
	return FPIEAndroidDeviceProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GPUFamily_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GPUFamily;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GLVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GLVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VulkanVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VulkanVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AndroidVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AndroidVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceMake_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceMake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceModel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceBuildNumber_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceBuildNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VulkanAvailable_MetaData[];
#endif
		static void NewProp_VulkanAvailable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_VulkanAvailable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsingHoudini_MetaData[];
#endif
		static void NewProp_UsingHoudini_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UsingHoudini;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hardware_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Hardware;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Chipset_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Chipset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalPhysicalGB_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TotalPhysicalGB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HMDSystemName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_HMDSystemName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GLES31RHIState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GLES31RHIState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIEAndroidDeviceProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GPUFamily_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GPUFamily = { "GPUFamily", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEAndroidDeviceProperties, GPUFamily), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GPUFamily_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GPUFamily_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLVersion = { "GLVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEAndroidDeviceProperties, GLVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanVersion = { "VulkanVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEAndroidDeviceProperties, VulkanVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_AndroidVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_AndroidVersion = { "AndroidVersion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEAndroidDeviceProperties, AndroidVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_AndroidVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_AndroidVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceMake_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceMake = { "DeviceMake", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEAndroidDeviceProperties, DeviceMake), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceMake_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceMake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceModel = { "DeviceModel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEAndroidDeviceProperties, DeviceModel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceBuildNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceBuildNumber = { "DeviceBuildNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEAndroidDeviceProperties, DeviceBuildNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceBuildNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceBuildNumber_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanAvailable_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanAvailable_SetBit(void* Obj)
	{
		((FPIEAndroidDeviceProperties*)Obj)->VulkanAvailable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanAvailable = { "VulkanAvailable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPIEAndroidDeviceProperties), &Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanAvailable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanAvailable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanAvailable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_UsingHoudini_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_UsingHoudini_SetBit(void* Obj)
	{
		((FPIEAndroidDeviceProperties*)Obj)->UsingHoudini = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_UsingHoudini = { "UsingHoudini", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPIEAndroidDeviceProperties), &Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_UsingHoudini_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_UsingHoudini_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_UsingHoudini_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_Hardware_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_Hardware = { "Hardware", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEAndroidDeviceProperties, Hardware), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_Hardware_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_Hardware_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_Chipset_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_Chipset = { "Chipset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEAndroidDeviceProperties, Chipset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_Chipset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_Chipset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_TotalPhysicalGB_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_TotalPhysicalGB = { "TotalPhysicalGB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEAndroidDeviceProperties, TotalPhysicalGB), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_TotalPhysicalGB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_TotalPhysicalGB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_HMDSystemName_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_HMDSystemName = { "HMDSystemName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEAndroidDeviceProperties, HMDSystemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_HMDSystemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_HMDSystemName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLES31RHIState_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLES31RHIState = { "GLES31RHIState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEAndroidDeviceProperties, GLES31RHIState), Z_Construct_UScriptStruct_FPIERHIOverrideState, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLES31RHIState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLES31RHIState_MetaData)) }; // 1585440343
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GPUFamily,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_AndroidVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceMake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_DeviceBuildNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_VulkanAvailable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_UsingHoudini,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_Hardware,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_Chipset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_TotalPhysicalGB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_HMDSystemName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewProp_GLES31RHIState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification,
		nullptr,
		&NewStructOps,
		"PIEAndroidDeviceProperties",
		sizeof(FPIEAndroidDeviceProperties),
		alignof(FPIEAndroidDeviceProperties),
		Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_PIEAndroidDeviceProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PIEAndroidDeviceProperties.InnerSingleton, Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PIEAndroidDeviceProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PIEIOSDeviceProperties;
class UScriptStruct* FPIEIOSDeviceProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PIEIOSDeviceProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PIEIOSDeviceProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties, (UObject*)Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification(), TEXT("PIEIOSDeviceProperties"));
	}
	return Z_Registration_Info_UScriptStruct_PIEIOSDeviceProperties.OuterSingleton;
}
template<> PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* StaticStruct<FPIEIOSDeviceProperties>()
{
	return FPIEIOSDeviceProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceModel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceModel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NativeScaleFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NativeScaleFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetalRHIState_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MetalRHIState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIEIOSDeviceProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_DeviceModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_DeviceModel = { "DeviceModel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEIOSDeviceProperties, DeviceModel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_DeviceModel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_DeviceModel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_NativeScaleFactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_NativeScaleFactor = { "NativeScaleFactor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEIOSDeviceProperties, NativeScaleFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_NativeScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_NativeScaleFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_MetalRHIState_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_MetalRHIState = { "MetalRHIState", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEIOSDeviceProperties, MetalRHIState), Z_Construct_UScriptStruct_FPIERHIOverrideState, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_MetalRHIState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_MetalRHIState_MetaData)) }; // 1585440343
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_DeviceModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_NativeScaleFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewProp_MetalRHIState,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification,
		nullptr,
		&NewStructOps,
		"PIEIOSDeviceProperties",
		sizeof(FPIEIOSDeviceProperties),
		alignof(FPIEIOSDeviceProperties),
		Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIEIOSDeviceProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_PIEIOSDeviceProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PIEIOSDeviceProperties.InnerSingleton, Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PIEIOSDeviceProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PIESwitchDeviceProperties;
class UScriptStruct* FPIESwitchDeviceProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PIESwitchDeviceProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PIESwitchDeviceProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIESwitchDeviceProperties, (UObject*)Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification(), TEXT("PIESwitchDeviceProperties"));
	}
	return Z_Registration_Info_UScriptStruct_PIESwitchDeviceProperties.OuterSingleton;
}
template<> PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* StaticStruct<FPIESwitchDeviceProperties>()
{
	return FPIESwitchDeviceProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Docked_MetaData[];
#endif
		static void NewProp_Docked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Docked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIESwitchDeviceProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::NewProp_Docked_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::NewProp_Docked_SetBit(void* Obj)
	{
		((FPIESwitchDeviceProperties*)Obj)->Docked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::NewProp_Docked = { "Docked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FPIESwitchDeviceProperties), &Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::NewProp_Docked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::NewProp_Docked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::NewProp_Docked_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::NewProp_Docked,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification,
		nullptr,
		&NewStructOps,
		"PIESwitchDeviceProperties",
		sizeof(FPIESwitchDeviceProperties),
		alignof(FPIESwitchDeviceProperties),
		Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIESwitchDeviceProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_PIESwitchDeviceProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PIESwitchDeviceProperties.InnerSingleton, Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PIESwitchDeviceProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PIEPreviewDeviceBezelViewportRect;
class UScriptStruct* FPIEPreviewDeviceBezelViewportRect::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PIEPreviewDeviceBezelViewportRect.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PIEPreviewDeviceBezelViewportRect.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect, (UObject*)Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification(), TEXT("PIEPreviewDeviceBezelViewportRect"));
	}
	return Z_Registration_Info_UScriptStruct_PIEPreviewDeviceBezelViewportRect.OuterSingleton;
}
template<> PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* StaticStruct<FPIEPreviewDeviceBezelViewportRect>()
{
	return FPIEPreviewDeviceBezelViewportRect::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIEPreviewDeviceBezelViewportRect>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEPreviewDeviceBezelViewportRect, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEPreviewDeviceBezelViewportRect, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEPreviewDeviceBezelViewportRect, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEPreviewDeviceBezelViewportRect, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Height_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewProp_Height,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification,
		nullptr,
		&NewStructOps,
		"PIEPreviewDeviceBezelViewportRect",
		sizeof(FPIEPreviewDeviceBezelViewportRect),
		alignof(FPIEPreviewDeviceBezelViewportRect),
		Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect()
	{
		if (!Z_Registration_Info_UScriptStruct_PIEPreviewDeviceBezelViewportRect.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PIEPreviewDeviceBezelViewportRect.InnerSingleton, Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PIEPreviewDeviceBezelViewportRect.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PIEBezelProperties;
class UScriptStruct* FPIEBezelProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PIEBezelProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PIEBezelProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIEBezelProperties, (UObject*)Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification(), TEXT("PIEBezelProperties"));
	}
	return Z_Registration_Info_UScriptStruct_PIEBezelProperties.OuterSingleton;
}
template<> PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* StaticStruct<FPIEBezelProperties>()
{
	return FPIEBezelProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPIEBezelProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeviceBezelFile_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceBezelFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BezelViewportRect_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BezelViewportRect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIEBezelProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_DeviceBezelFile_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_DeviceBezelFile = { "DeviceBezelFile", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEBezelProperties, DeviceBezelFile), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_DeviceBezelFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_DeviceBezelFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_BezelViewportRect_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_BezelViewportRect = { "BezelViewportRect", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEBezelProperties, BezelViewportRect), Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_BezelViewportRect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_BezelViewportRect_MetaData)) }; // 1742770758
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_DeviceBezelFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewProp_BezelViewportRect,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification,
		nullptr,
		&NewStructOps,
		"PIEBezelProperties",
		sizeof(FPIEBezelProperties),
		alignof(FPIEBezelProperties),
		Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIEBezelProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_PIEBezelProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PIEBezelProperties.InnerSingleton, Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PIEBezelProperties.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PIEPreviewDeviceSpecifications;
class UScriptStruct* FPIEPreviewDeviceSpecifications::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PIEPreviewDeviceSpecifications.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PIEPreviewDeviceSpecifications.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications, (UObject*)Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification(), TEXT("PIEPreviewDeviceSpecifications"));
	}
	return Z_Registration_Info_UScriptStruct_PIEPreviewDeviceSpecifications.OuterSingleton;
}
template<> PIEPREVIEWDEVICESPECIFICATION_API UScriptStruct* StaticStruct<FPIEPreviewDeviceSpecifications>()
{
	return FPIEPreviewDeviceSpecifications::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_DevicePlatform_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DevicePlatform_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DevicePlatform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionYImmersiveMode_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ResolutionYImmersiveMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PPI_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PPI;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleFactors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleFactors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScaleFactors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BezelProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BezelProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AndroidProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AndroidProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IOSProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IOSProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwitchProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SwitchProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIEPreviewDeviceSpecifications>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_DevicePlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_DevicePlatform_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_DevicePlatform = { "DevicePlatform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, DevicePlatform), Z_Construct_UEnum_PIEPreviewDeviceSpecification_EPIEPreviewDeviceType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_DevicePlatform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_DevicePlatform_MetaData)) }; // 3480333351
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionX_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionX = { "ResolutionX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, ResolutionX), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionY_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionY = { "ResolutionY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, ResolutionY), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionYImmersiveMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionYImmersiveMode = { "ResolutionYImmersiveMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, ResolutionYImmersiveMode), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionYImmersiveMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionYImmersiveMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_PPI_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_PPI = { "PPI", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, PPI), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_PPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_PPI_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ScaleFactors_Inner = { "ScaleFactors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ScaleFactors_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ScaleFactors = { "ScaleFactors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, ScaleFactors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ScaleFactors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ScaleFactors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_BezelProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_BezelProperties = { "BezelProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, BezelProperties), Z_Construct_UScriptStruct_FPIEBezelProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_BezelProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_BezelProperties_MetaData)) }; // 179513466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_AndroidProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_AndroidProperties = { "AndroidProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, AndroidProperties), Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_AndroidProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_AndroidProperties_MetaData)) }; // 2907307102
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_IOSProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_IOSProperties = { "IOSProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, IOSProperties), Z_Construct_UScriptStruct_FPIEIOSDeviceProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_IOSProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_IOSProperties_MetaData)) }; // 709856126
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_SwitchProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIEPreviewDeviceSpecification.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_SwitchProperties = { "SwitchProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPIEPreviewDeviceSpecifications, SwitchProperties), Z_Construct_UScriptStruct_FPIESwitchDeviceProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_SwitchProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_SwitchProperties_MetaData)) }; // 4212314157
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_DevicePlatform_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_DevicePlatform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ResolutionYImmersiveMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_PPI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ScaleFactors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_ScaleFactors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_BezelProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_AndroidProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_IOSProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewProp_SwitchProperties,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PIEPreviewDeviceSpecification,
		nullptr,
		&NewStructOps,
		"PIEPreviewDeviceSpecifications",
		sizeof(FPIEPreviewDeviceSpecifications),
		alignof(FPIEPreviewDeviceSpecifications),
		Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications()
	{
		if (!Z_Registration_Info_UScriptStruct_PIEPreviewDeviceSpecifications.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PIEPreviewDeviceSpecifications.InnerSingleton, Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PIEPreviewDeviceSpecifications.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_PIEPreviewDeviceSpecification_Public_PIEPreviewDeviceSpecification_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PIEPreviewDeviceSpecification_Public_PIEPreviewDeviceSpecification_h_Statics::EnumInfo[] = {
		{ EPIEPreviewDeviceType_StaticEnum, TEXT("EPIEPreviewDeviceType"), &Z_Registration_Info_UEnum_EPIEPreviewDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3480333351U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PIEPreviewDeviceSpecification_Public_PIEPreviewDeviceSpecification_h_Statics::ScriptStructInfo[] = {
		{ FPIERHIOverrideState::StaticStruct, Z_Construct_UScriptStruct_FPIERHIOverrideState_Statics::NewStructOps, TEXT("PIERHIOverrideState"), &Z_Registration_Info_UScriptStruct_PIERHIOverrideState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPIERHIOverrideState), 1585440343U) },
		{ FPIEAndroidDeviceProperties::StaticStruct, Z_Construct_UScriptStruct_FPIEAndroidDeviceProperties_Statics::NewStructOps, TEXT("PIEAndroidDeviceProperties"), &Z_Registration_Info_UScriptStruct_PIEAndroidDeviceProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPIEAndroidDeviceProperties), 2907307102U) },
		{ FPIEIOSDeviceProperties::StaticStruct, Z_Construct_UScriptStruct_FPIEIOSDeviceProperties_Statics::NewStructOps, TEXT("PIEIOSDeviceProperties"), &Z_Registration_Info_UScriptStruct_PIEIOSDeviceProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPIEIOSDeviceProperties), 709856126U) },
		{ FPIESwitchDeviceProperties::StaticStruct, Z_Construct_UScriptStruct_FPIESwitchDeviceProperties_Statics::NewStructOps, TEXT("PIESwitchDeviceProperties"), &Z_Registration_Info_UScriptStruct_PIESwitchDeviceProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPIESwitchDeviceProperties), 4212314157U) },
		{ FPIEPreviewDeviceBezelViewportRect::StaticStruct, Z_Construct_UScriptStruct_FPIEPreviewDeviceBezelViewportRect_Statics::NewStructOps, TEXT("PIEPreviewDeviceBezelViewportRect"), &Z_Registration_Info_UScriptStruct_PIEPreviewDeviceBezelViewportRect, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPIEPreviewDeviceBezelViewportRect), 1742770758U) },
		{ FPIEBezelProperties::StaticStruct, Z_Construct_UScriptStruct_FPIEBezelProperties_Statics::NewStructOps, TEXT("PIEBezelProperties"), &Z_Registration_Info_UScriptStruct_PIEBezelProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPIEBezelProperties), 179513466U) },
		{ FPIEPreviewDeviceSpecifications::StaticStruct, Z_Construct_UScriptStruct_FPIEPreviewDeviceSpecifications_Statics::NewStructOps, TEXT("PIEPreviewDeviceSpecifications"), &Z_Registration_Info_UScriptStruct_PIEPreviewDeviceSpecifications, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPIEPreviewDeviceSpecifications), 33708488U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PIEPreviewDeviceSpecification_Public_PIEPreviewDeviceSpecification_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPIEPreviewDeviceSpecification, UPIEPreviewDeviceSpecification::StaticClass, TEXT("UPIEPreviewDeviceSpecification"), &Z_Registration_Info_UClass_UPIEPreviewDeviceSpecification, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPIEPreviewDeviceSpecification), 1266251963U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PIEPreviewDeviceSpecification_Public_PIEPreviewDeviceSpecification_h_2925319191(TEXT("/Script/PIEPreviewDeviceSpecification"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PIEPreviewDeviceSpecification_Public_PIEPreviewDeviceSpecification_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PIEPreviewDeviceSpecification_Public_PIEPreviewDeviceSpecification_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PIEPreviewDeviceSpecification_Public_PIEPreviewDeviceSpecification_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PIEPreviewDeviceSpecification_Public_PIEPreviewDeviceSpecification_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PIEPreviewDeviceSpecification_Public_PIEPreviewDeviceSpecification_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PIEPreviewDeviceSpecification_Public_PIEPreviewDeviceSpecification_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
