// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetEditorGizmoFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetEditorGizmoFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GIZMOEDMODE_API UClass* Z_Construct_UClass_UAssetEditorGizmoFactory();
	GIZMOEDMODE_API UClass* Z_Construct_UClass_UAssetEditorGizmoFactory_NoRegister();
	GIZMOEDMODE_API UEnum* Z_Construct_UEnum_GizmoEdMode_EAssetEditorGizmoFactoryPriority();
	UPackage* Z_Construct_UPackage__Script_GizmoEdMode();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetEditorGizmoFactoryPriority;
	static UEnum* EAssetEditorGizmoFactoryPriority_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAssetEditorGizmoFactoryPriority.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAssetEditorGizmoFactoryPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GizmoEdMode_EAssetEditorGizmoFactoryPriority, (UObject*)Z_Construct_UPackage__Script_GizmoEdMode(), TEXT("EAssetEditorGizmoFactoryPriority"));
		}
		return Z_Registration_Info_UEnum_EAssetEditorGizmoFactoryPriority.OuterSingleton;
	}
	template<> GIZMOEDMODE_API UEnum* StaticEnum<EAssetEditorGizmoFactoryPriority>()
	{
		return EAssetEditorGizmoFactoryPriority_StaticEnum();
	}
	struct Z_Construct_UEnum_GizmoEdMode_EAssetEditorGizmoFactoryPriority_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GizmoEdMode_EAssetEditorGizmoFactoryPriority_Statics::Enumerators[] = {
		{ "EAssetEditorGizmoFactoryPriority::Default", (int64)EAssetEditorGizmoFactoryPriority::Default },
		{ "EAssetEditorGizmoFactoryPriority::Normal", (int64)EAssetEditorGizmoFactoryPriority::Normal },
		{ "EAssetEditorGizmoFactoryPriority::High", (int64)EAssetEditorGizmoFactoryPriority::High },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GizmoEdMode_EAssetEditorGizmoFactoryPriority_Statics::Enum_MetaDataParams[] = {
		{ "Default.Name", "EAssetEditorGizmoFactoryPriority::Default" },
		{ "High.Name", "EAssetEditorGizmoFactoryPriority::High" },
		{ "ModuleRelativePath", "Public/AssetEditorGizmoFactory.h" },
		{ "Normal.Name", "EAssetEditorGizmoFactoryPriority::Normal" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GizmoEdMode_EAssetEditorGizmoFactoryPriority_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GizmoEdMode,
		nullptr,
		"EAssetEditorGizmoFactoryPriority",
		"EAssetEditorGizmoFactoryPriority",
		Z_Construct_UEnum_GizmoEdMode_EAssetEditorGizmoFactoryPriority_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GizmoEdMode_EAssetEditorGizmoFactoryPriority_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GizmoEdMode_EAssetEditorGizmoFactoryPriority_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GizmoEdMode_EAssetEditorGizmoFactoryPriority_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GizmoEdMode_EAssetEditorGizmoFactoryPriority()
	{
		if (!Z_Registration_Info_UEnum_EAssetEditorGizmoFactoryPriority.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssetEditorGizmoFactoryPriority.InnerSingleton, Z_Construct_UEnum_GizmoEdMode_EAssetEditorGizmoFactoryPriority_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAssetEditorGizmoFactoryPriority.InnerSingleton;
	}
	void UAssetEditorGizmoFactory::StaticRegisterNativesUAssetEditorGizmoFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetEditorGizmoFactory);
	UClass* Z_Construct_UClass_UAssetEditorGizmoFactory_NoRegister()
	{
		return UAssetEditorGizmoFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAssetEditorGizmoFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssetEditorGizmoFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GizmoEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssetEditorGizmoFactory_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetEditorGizmoFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssetEditorGizmoFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAssetEditorGizmoFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetEditorGizmoFactory_Statics::ClassParams = {
		&UAssetEditorGizmoFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAssetEditorGizmoFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssetEditorGizmoFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssetEditorGizmoFactory()
	{
		if (!Z_Registration_Info_UClass_UAssetEditorGizmoFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetEditorGizmoFactory.OuterSingleton, Z_Construct_UClass_UAssetEditorGizmoFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssetEditorGizmoFactory.OuterSingleton;
	}
	template<> GIZMOEDMODE_API UClass* StaticClass<UAssetEditorGizmoFactory>()
	{
		return UAssetEditorGizmoFactory::StaticClass();
	}
	UAssetEditorGizmoFactory::UAssetEditorGizmoFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetEditorGizmoFactory);
	UAssetEditorGizmoFactory::~UAssetEditorGizmoFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_AssetEditorGizmoFactory_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_AssetEditorGizmoFactory_h_Statics::EnumInfo[] = {
		{ EAssetEditorGizmoFactoryPriority_StaticEnum, TEXT("EAssetEditorGizmoFactoryPriority"), &Z_Registration_Info_UEnum_EAssetEditorGizmoFactoryPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2928546436U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_AssetEditorGizmoFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssetEditorGizmoFactory, UAssetEditorGizmoFactory::StaticClass, TEXT("UAssetEditorGizmoFactory"), &Z_Registration_Info_UClass_UAssetEditorGizmoFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetEditorGizmoFactory), 1161006577U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_AssetEditorGizmoFactory_h_363141178(TEXT("/Script/GizmoEdMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_AssetEditorGizmoFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_AssetEditorGizmoFactory_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_AssetEditorGizmoFactory_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GizmoEdMode_Source_GizmoEdMode_Public_AssetEditorGizmoFactory_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
