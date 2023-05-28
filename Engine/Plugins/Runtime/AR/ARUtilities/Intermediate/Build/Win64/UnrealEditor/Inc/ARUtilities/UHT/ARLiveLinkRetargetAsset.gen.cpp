// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ARLiveLinkRetargetAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARLiveLinkRetargetAsset() {}
// Cross Module References
	ARUTILITIES_API UClass* Z_Construct_UClass_UARLiveLinkRetargetAsset();
	ARUTILITIES_API UClass* Z_Construct_UClass_UARLiveLinkRetargetAsset_NoRegister();
	ARUTILITIES_API UEnum* Z_Construct_UEnum_ARUtilities_EARLiveLinkSourceType();
	ARUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FARKitPoseTrackingConfig();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset();
	UPackage* Z_Construct_UPackage__Script_ARUtilities();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EARLiveLinkSourceType;
	static UEnum* EARLiveLinkSourceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EARLiveLinkSourceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EARLiveLinkSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ARUtilities_EARLiveLinkSourceType, (UObject*)Z_Construct_UPackage__Script_ARUtilities(), TEXT("EARLiveLinkSourceType"));
		}
		return Z_Registration_Info_UEnum_EARLiveLinkSourceType.OuterSingleton;
	}
	template<> ARUTILITIES_API UEnum* StaticEnum<EARLiveLinkSourceType>()
	{
		return EARLiveLinkSourceType_StaticEnum();
	}
	struct Z_Construct_UEnum_ARUtilities_EARLiveLinkSourceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ARUtilities_EARLiveLinkSourceType_Statics::Enumerators[] = {
		{ "EARLiveLinkSourceType::None", (int64)EARLiveLinkSourceType::None },
		{ "EARLiveLinkSourceType::ARKitPoseTracking", (int64)EARLiveLinkSourceType::ARKitPoseTracking },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ARUtilities_EARLiveLinkSourceType_Statics::Enum_MetaDataParams[] = {
		{ "ARKitPoseTracking.Name", "EARLiveLinkSourceType::ARKitPoseTracking" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARLiveLinkRetargetAsset.h" },
		{ "None.Name", "EARLiveLinkSourceType::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ARUtilities_EARLiveLinkSourceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ARUtilities,
		nullptr,
		"EARLiveLinkSourceType",
		"EARLiveLinkSourceType",
		Z_Construct_UEnum_ARUtilities_EARLiveLinkSourceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ARUtilities_EARLiveLinkSourceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ARUtilities_EARLiveLinkSourceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ARUtilities_EARLiveLinkSourceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ARUtilities_EARLiveLinkSourceType()
	{
		if (!Z_Registration_Info_UEnum_EARLiveLinkSourceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EARLiveLinkSourceType.InnerSingleton, Z_Construct_UEnum_ARUtilities_EARLiveLinkSourceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EARLiveLinkSourceType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ARKitPoseTrackingConfig;
class UScriptStruct* FARKitPoseTrackingConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ARKitPoseTrackingConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ARKitPoseTrackingConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FARKitPoseTrackingConfig, (UObject*)Z_Construct_UPackage__Script_ARUtilities(), TEXT("ARKitPoseTrackingConfig"));
	}
	return Z_Registration_Info_UScriptStruct_ARKitPoseTrackingConfig.OuterSingleton;
}
template<> ARUTILITIES_API UScriptStruct* StaticStruct<FARKitPoseTrackingConfig>()
{
	return FARKitPoseTrackingConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HumanForward_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HumanForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshForward_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshForward;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ARLiveLinkRetargetAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FARKitPoseTrackingConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::NewProp_HumanForward_MetaData[] = {
		{ "Category", "LiveLink|ARKit" },
		{ "ModuleRelativePath", "Public/ARLiveLinkRetargetAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::NewProp_HumanForward = { "HumanForward", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARKitPoseTrackingConfig, HumanForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::NewProp_HumanForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::NewProp_HumanForward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::NewProp_MeshForward_MetaData[] = {
		{ "Category", "LiveLink|ARKit" },
		{ "ModuleRelativePath", "Public/ARLiveLinkRetargetAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::NewProp_MeshForward = { "MeshForward", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FARKitPoseTrackingConfig, MeshForward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::NewProp_MeshForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::NewProp_MeshForward_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::NewProp_HumanForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::NewProp_MeshForward,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ARUtilities,
		nullptr,
		&NewStructOps,
		"ARKitPoseTrackingConfig",
		sizeof(FARKitPoseTrackingConfig),
		alignof(FARKitPoseTrackingConfig),
		Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FARKitPoseTrackingConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_ARKitPoseTrackingConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ARKitPoseTrackingConfig.InnerSingleton, Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ARKitPoseTrackingConfig.InnerSingleton;
	}
	void UARLiveLinkRetargetAsset::StaticRegisterNativesUARLiveLinkRetargetAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UARLiveLinkRetargetAsset);
	UClass* Z_Construct_UClass_UARLiveLinkRetargetAsset_NoRegister()
	{
		return UARLiveLinkRetargetAsset::StaticClass();
	}
	struct Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceType;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoneMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ARKitPoseTrackingConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ARKitPoseTrackingConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRetargetAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ARUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Platform agnostic live link retarget asset */" },
		{ "IncludePath", "ARLiveLinkRetargetAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ARLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Platform agnostic live link retarget asset" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_SourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_SourceType_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/ARLiveLinkRetargetAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARLiveLinkRetargetAsset, SourceType), Z_Construct_UEnum_ARUtilities_EARLiveLinkSourceType, METADATA_PARAMS(Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_SourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_SourceType_MetaData)) }; // 1324461407
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_BoneMap_ValueProp = { "BoneMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_BoneMap_Key_KeyProp = { "BoneMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_BoneMap_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Mapping from AR platform bone name to UE4 skeleton bone name */" },
		{ "ModuleRelativePath", "Public/ARLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Mapping from AR platform bone name to UE4 skeleton bone name" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_BoneMap = { "BoneMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARLiveLinkRetargetAsset, BoneMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_BoneMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_BoneMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_ARKitPoseTrackingConfig_MetaData[] = {
		{ "Category", "LiveLink|ARKit" },
		{ "Comment", "/** Configuration when using ARKit pose tracking */" },
		{ "editcondition", "SourceType == EARLiveLinkSourceType::ARKitPoseTracking" },
		{ "ModuleRelativePath", "Public/ARLiveLinkRetargetAsset.h" },
		{ "ToolTip", "Configuration when using ARKit pose tracking" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_ARKitPoseTrackingConfig = { "ARKitPoseTrackingConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UARLiveLinkRetargetAsset, ARKitPoseTrackingConfig), Z_Construct_UScriptStruct_FARKitPoseTrackingConfig, METADATA_PARAMS(Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_ARKitPoseTrackingConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_ARKitPoseTrackingConfig_MetaData)) }; // 4189449953
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_SourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_SourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_BoneMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_BoneMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_BoneMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::NewProp_ARKitPoseTrackingConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UARLiveLinkRetargetAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::ClassParams = {
		&UARLiveLinkRetargetAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UARLiveLinkRetargetAsset()
	{
		if (!Z_Registration_Info_UClass_UARLiveLinkRetargetAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UARLiveLinkRetargetAsset.OuterSingleton, Z_Construct_UClass_UARLiveLinkRetargetAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UARLiveLinkRetargetAsset.OuterSingleton;
	}
	template<> ARUTILITIES_API UClass* StaticClass<UARLiveLinkRetargetAsset>()
	{
		return UARLiveLinkRetargetAsset::StaticClass();
	}
	UARLiveLinkRetargetAsset::UARLiveLinkRetargetAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UARLiveLinkRetargetAsset);
	UARLiveLinkRetargetAsset::~UARLiveLinkRetargetAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARLiveLinkRetargetAsset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARLiveLinkRetargetAsset_h_Statics::EnumInfo[] = {
		{ EARLiveLinkSourceType_StaticEnum, TEXT("EARLiveLinkSourceType"), &Z_Registration_Info_UEnum_EARLiveLinkSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1324461407U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARLiveLinkRetargetAsset_h_Statics::ScriptStructInfo[] = {
		{ FARKitPoseTrackingConfig::StaticStruct, Z_Construct_UScriptStruct_FARKitPoseTrackingConfig_Statics::NewStructOps, TEXT("ARKitPoseTrackingConfig"), &Z_Registration_Info_UScriptStruct_ARKitPoseTrackingConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FARKitPoseTrackingConfig), 4189449953U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARLiveLinkRetargetAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UARLiveLinkRetargetAsset, UARLiveLinkRetargetAsset::StaticClass, TEXT("UARLiveLinkRetargetAsset"), &Z_Registration_Info_UClass_UARLiveLinkRetargetAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UARLiveLinkRetargetAsset), 254081721U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARLiveLinkRetargetAsset_h_1941701870(TEXT("/Script/ARUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARLiveLinkRetargetAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARLiveLinkRetargetAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARLiveLinkRetargetAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARLiveLinkRetargetAsset_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARLiveLinkRetargetAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_ARLiveLinkRetargetAsset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
