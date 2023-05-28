// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WaterRuntimeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterRuntimeSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	UPackage* Z_Construct_UPackage__Script_Water();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyCustomComponent_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyLakeComponent_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyOceanComponent_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterBodyRiverComponent_NoRegister();
	WATER_API UClass* Z_Construct_UClass_UWaterRuntimeSettings();
	WATER_API UClass* Z_Construct_UClass_UWaterRuntimeSettings_NoRegister();
// End Cross Module References
	void UWaterRuntimeSettings::StaticRegisterNativesUWaterRuntimeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterRuntimeSettings);
	UClass* Z_Construct_UClass_UWaterRuntimeSettings_NoRegister()
	{
		return UWaterRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UWaterRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannelForWaterTraces_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannelForWaterTraces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterCollection_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MaterialParameterCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyIconWorldZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterBodyIconWorldZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWaterCollisionProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultWaterCollisionProfileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWaterInfoMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultWaterInfoMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyRiverComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WaterBodyRiverComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyLakeComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WaterBodyLakeComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyOceanComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WaterBodyOceanComponentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyCustomComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WaterBodyCustomComponentClass;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaterBodyIconWorldSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WaterBodyIconWorldSize;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Water,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the runtime settings for the Water plugin.\n */" },
		{ "DisplayName", "Water" },
		{ "IncludePath", "WaterRuntimeSettings.h" },
		{ "ModuleRelativePath", "Public/WaterRuntimeSettings.h" },
		{ "ToolTip", "Implements the runtime settings for the Water plugin." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_CollisionChannelForWaterTraces_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Collision channel to use for tracing and blocking water bodies */" },
		{ "ModuleRelativePath", "Public/WaterRuntimeSettings.h" },
		{ "ToolTip", "Collision channel to use for tracing and blocking water bodies" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_CollisionChannelForWaterTraces = { "CollisionChannelForWaterTraces", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterRuntimeSettings, CollisionChannelForWaterTraces), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_CollisionChannelForWaterTraces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_CollisionChannelForWaterTraces_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_MaterialParameterCollection_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Material Parameter Collection for everything water-related */" },
		{ "ModuleRelativePath", "Public/WaterRuntimeSettings.h" },
		{ "ToolTip", "Material Parameter Collection for everything water-related" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_MaterialParameterCollection = { "MaterialParameterCollection", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterRuntimeSettings, MaterialParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_MaterialParameterCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_MaterialParameterCollection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyIconWorldZOffset_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Offset in Z for the water body icon in world-space. */" },
		{ "ModuleRelativePath", "Public/WaterRuntimeSettings.h" },
		{ "ToolTip", "Offset in Z for the water body icon in world-space." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyIconWorldZOffset = { "WaterBodyIconWorldZOffset", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterRuntimeSettings, WaterBodyIconWorldZOffset), METADATA_PARAMS(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyIconWorldZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyIconWorldZOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_DefaultWaterCollisionProfileName_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Default collision profile name of water bodies */" },
		{ "ModuleRelativePath", "Public/WaterRuntimeSettings.h" },
		{ "ToolTip", "Default collision profile name of water bodies" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_DefaultWaterCollisionProfileName = { "DefaultWaterCollisionProfileName", nullptr, (EPropertyFlags)0x0040000000024001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterRuntimeSettings, DefaultWaterCollisionProfileName), METADATA_PARAMS(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_DefaultWaterCollisionProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_DefaultWaterCollisionProfileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_DefaultWaterInfoMaterial_MetaData[] = {
		{ "Category", "Water" },
		{ "ModuleRelativePath", "Public/WaterRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_DefaultWaterInfoMaterial = { "DefaultWaterInfoMaterial", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterRuntimeSettings, DefaultWaterInfoMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_DefaultWaterInfoMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_DefaultWaterInfoMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyRiverComponentClass_MetaData[] = {
		{ "Category", "Water" },
		{ "MetaClass", "/Script/Water.WaterBodyRiverComponent" },
		{ "ModuleRelativePath", "Public/WaterRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyRiverComponentClass = { "WaterBodyRiverComponentClass", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterRuntimeSettings, WaterBodyRiverComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWaterBodyRiverComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyRiverComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyRiverComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyLakeComponentClass_MetaData[] = {
		{ "Category", "Water" },
		{ "MetaClass", "/Script/Water.WaterBodyLakeComponent" },
		{ "ModuleRelativePath", "Public/WaterRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyLakeComponentClass = { "WaterBodyLakeComponentClass", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterRuntimeSettings, WaterBodyLakeComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWaterBodyLakeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyLakeComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyLakeComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyOceanComponentClass_MetaData[] = {
		{ "Category", "Water" },
		{ "MetaClass", "/Script/Water.WaterBodyOceanComponent" },
		{ "ModuleRelativePath", "Public/WaterRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyOceanComponentClass = { "WaterBodyOceanComponentClass", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterRuntimeSettings, WaterBodyOceanComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWaterBodyOceanComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyOceanComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyOceanComponentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyCustomComponentClass_MetaData[] = {
		{ "Category", "Water" },
		{ "MetaClass", "/Script/Water.WaterBodyCustomComponent" },
		{ "ModuleRelativePath", "Public/WaterRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyCustomComponentClass = { "WaterBodyCustomComponentClass", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterRuntimeSettings, WaterBodyCustomComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWaterBodyCustomComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyCustomComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyCustomComponentClass_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyIconWorldSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/WaterRuntimeSettings.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyIconWorldSize = { "WaterBodyIconWorldSize", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaterRuntimeSettings, WaterBodyIconWorldSize_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyIconWorldSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyIconWorldSize_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterRuntimeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_CollisionChannelForWaterTraces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_MaterialParameterCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyIconWorldZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_DefaultWaterCollisionProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_DefaultWaterInfoMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyRiverComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyLakeComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyOceanComponentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyCustomComponentClass,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterRuntimeSettings_Statics::NewProp_WaterBodyIconWorldSize,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterRuntimeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterRuntimeSettings_Statics::ClassParams = {
		&UWaterRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaterRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterRuntimeSettings()
	{
		if (!Z_Registration_Info_UClass_UWaterRuntimeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterRuntimeSettings.OuterSingleton, Z_Construct_UClass_UWaterRuntimeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterRuntimeSettings.OuterSingleton;
	}
	template<> WATER_API UClass* StaticClass<UWaterRuntimeSettings>()
	{
		return UWaterRuntimeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterRuntimeSettings);
	UWaterRuntimeSettings::~UWaterRuntimeSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterRuntimeSettings, UWaterRuntimeSettings::StaticClass, TEXT("UWaterRuntimeSettings"), &Z_Registration_Info_UClass_UWaterRuntimeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterRuntimeSettings), 2524992472U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_164238102(TEXT("/Script/Water"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Runtime_Public_WaterRuntimeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
