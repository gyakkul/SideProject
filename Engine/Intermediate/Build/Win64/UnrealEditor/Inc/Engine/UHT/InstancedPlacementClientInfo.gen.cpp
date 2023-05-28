// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Instances/InstancedPlacementClientInfo.h"
#include "../../Source/Runtime/Engine/Public/ISMPartition/ISMComponentDescriptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstancedPlacementClientInfo() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedPlacemenClientSettings();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedPlacemenClientSettings_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FISMComponentDescriptor();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UInstancedPlacemenClientSettings::StaticRegisterNativesUInstancedPlacemenClientSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInstancedPlacemenClientSettings);
	UClass* Z_Construct_UClass_UInstancedPlacemenClientSettings_NoRegister()
	{
		return UInstancedPlacemenClientSettings::StaticClass();
	}
	struct Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedComponentSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedComponentSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Settings which can be shared across partition actors\n" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Instances/InstancedPlacementClientInfo.h" },
		{ "ModuleRelativePath", "Public/Instances/InstancedPlacementClientInfo.h" },
		{ "ToolTip", "Settings which can be shared across partition actors" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::NewProp_UpdateGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Instances/InstancedPlacementClientInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::NewProp_UpdateGuid = { "UpdateGuid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInstancedPlacemenClientSettings, UpdateGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::NewProp_UpdateGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::NewProp_UpdateGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::NewProp_ObjectPath_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/Instances/InstancedPlacementClientInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::NewProp_ObjectPath = { "ObjectPath", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInstancedPlacemenClientSettings, ObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::NewProp_ObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::NewProp_ObjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::NewProp_InstancedComponentSettings_MetaData[] = {
		{ "Category", "Component Settings" },
		{ "ModuleRelativePath", "Public/Instances/InstancedPlacementClientInfo.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::NewProp_InstancedComponentSettings = { "InstancedComponentSettings", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInstancedPlacemenClientSettings, InstancedComponentSettings), Z_Construct_UScriptStruct_FISMComponentDescriptor, METADATA_PARAMS(Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::NewProp_InstancedComponentSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::NewProp_InstancedComponentSettings_MetaData)) }; // 4080497835
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::NewProp_UpdateGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::NewProp_ObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::NewProp_InstancedComponentSettings,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInstancedPlacemenClientSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::ClassParams = {
		&UInstancedPlacemenClientSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::PropPointers), 0),
		0,
		0x001030A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInstancedPlacemenClientSettings()
	{
		if (!Z_Registration_Info_UClass_UInstancedPlacemenClientSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInstancedPlacemenClientSettings.OuterSingleton, Z_Construct_UClass_UInstancedPlacemenClientSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInstancedPlacemenClientSettings.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UInstancedPlacemenClientSettings>()
	{
		return UInstancedPlacemenClientSettings::StaticClass();
	}
	UInstancedPlacemenClientSettings::UInstancedPlacemenClientSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInstancedPlacemenClientSettings);
	UInstancedPlacemenClientSettings::~UInstancedPlacemenClientSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementClientInfo_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementClientInfo_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInstancedPlacemenClientSettings, UInstancedPlacemenClientSettings::StaticClass, TEXT("UInstancedPlacemenClientSettings"), &Z_Registration_Info_UClass_UInstancedPlacemenClientSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInstancedPlacemenClientSettings), 3771047297U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementClientInfo_h_1498672358(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementClientInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Instances_InstancedPlacementClientInfo_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
