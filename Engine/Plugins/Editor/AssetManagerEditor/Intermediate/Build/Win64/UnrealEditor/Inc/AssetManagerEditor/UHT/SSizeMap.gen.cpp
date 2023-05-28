// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SSizeMap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSizeMap() {}
// Cross Module References
	ASSETMANAGEREDITOR_API UClass* Z_Construct_UClass_USizeMapSettings();
	ASSETMANAGEREDITOR_API UClass* Z_Construct_UClass_USizeMapSettings_NoRegister();
	ASSETMANAGEREDITOR_API UEnum* Z_Construct_UEnum_AssetManagerEditor_ESizeMapDependencyType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AssetManagerEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESizeMapDependencyType;
	static UEnum* ESizeMapDependencyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESizeMapDependencyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESizeMapDependencyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AssetManagerEditor_ESizeMapDependencyType, (UObject*)Z_Construct_UPackage__Script_AssetManagerEditor(), TEXT("ESizeMapDependencyType"));
		}
		return Z_Registration_Info_UEnum_ESizeMapDependencyType.OuterSingleton;
	}
	template<> ASSETMANAGEREDITOR_API UEnum* StaticEnum<ESizeMapDependencyType>()
	{
		return ESizeMapDependencyType_StaticEnum();
	}
	struct Z_Construct_UEnum_AssetManagerEditor_ESizeMapDependencyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AssetManagerEditor_ESizeMapDependencyType_Statics::Enumerators[] = {
		{ "ESizeMapDependencyType::All", (int64)ESizeMapDependencyType::All },
		{ "ESizeMapDependencyType::Game", (int64)ESizeMapDependencyType::Game },
		{ "ESizeMapDependencyType::EditorOnly", (int64)ESizeMapDependencyType::EditorOnly },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AssetManagerEditor_ESizeMapDependencyType_Statics::Enum_MetaDataParams[] = {
		{ "All.Comment", "/** Queries all hard dependencies */" },
		{ "All.Name", "ESizeMapDependencyType::All" },
		{ "All.ToolTip", "Queries all hard dependencies" },
		{ "EditorOnly.Comment", "/** Queries hard dependencies that only exist in the editor. See UE::AssetRegistry::EDependencyQuery::EditorOnly */" },
		{ "EditorOnly.Name", "ESizeMapDependencyType::EditorOnly" },
		{ "EditorOnly.ToolTip", "Queries hard dependencies that only exist in the editor. See UE::AssetRegistry::EDependencyQuery::EditorOnly" },
		{ "Game.Comment", "/** Queries hard dependencies that are part of a cooked build. See UE::AssetRegistry::EDependencyQuery::Game. */" },
		{ "Game.Name", "ESizeMapDependencyType::Game" },
		{ "Game.ToolTip", "Queries hard dependencies that are part of a cooked build. See UE::AssetRegistry::EDependencyQuery::Game." },
		{ "ModuleRelativePath", "Private/SSizeMap.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AssetManagerEditor_ESizeMapDependencyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AssetManagerEditor,
		nullptr,
		"ESizeMapDependencyType",
		"ESizeMapDependencyType",
		Z_Construct_UEnum_AssetManagerEditor_ESizeMapDependencyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AssetManagerEditor_ESizeMapDependencyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AssetManagerEditor_ESizeMapDependencyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AssetManagerEditor_ESizeMapDependencyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AssetManagerEditor_ESizeMapDependencyType()
	{
		if (!Z_Registration_Info_UEnum_ESizeMapDependencyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESizeMapDependencyType.InnerSingleton, Z_Construct_UEnum_AssetManagerEditor_ESizeMapDependencyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESizeMapDependencyType.InnerSingleton;
	}
	void USizeMapSettings::StaticRegisterNativesUSizeMapSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USizeMapSettings);
	UClass* Z_Construct_UClass_USizeMapSettings_NoRegister()
	{
		return USizeMapSettings::StaticClass();
	}
	struct Z_Construct_UClass_USizeMapSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SizeType;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_DependencyType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DependencyType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DependencyType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USizeMapSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetManagerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeMapSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SSizeMap.h" },
		{ "ModuleRelativePath", "Private/SSizeMap.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeMapSettings_Statics::NewProp_SizeType_MetaData[] = {
		{ "ModuleRelativePath", "Private/SSizeMap.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USizeMapSettings_Statics::NewProp_SizeType = { "SizeType", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USizeMapSettings, SizeType), METADATA_PARAMS(Z_Construct_UClass_USizeMapSettings_Statics::NewProp_SizeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeMapSettings_Statics::NewProp_SizeType_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USizeMapSettings_Statics::NewProp_DependencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeMapSettings_Statics::NewProp_DependencyType_MetaData[] = {
		{ "ModuleRelativePath", "Private/SSizeMap.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USizeMapSettings_Statics::NewProp_DependencyType = { "DependencyType", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USizeMapSettings, DependencyType), Z_Construct_UEnum_AssetManagerEditor_ESizeMapDependencyType, METADATA_PARAMS(Z_Construct_UClass_USizeMapSettings_Statics::NewProp_DependencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeMapSettings_Statics::NewProp_DependencyType_MetaData)) }; // 1283001027
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USizeMapSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeMapSettings_Statics::NewProp_SizeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeMapSettings_Statics::NewProp_DependencyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeMapSettings_Statics::NewProp_DependencyType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USizeMapSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USizeMapSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USizeMapSettings_Statics::ClassParams = {
		&USizeMapSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USizeMapSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USizeMapSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USizeMapSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USizeMapSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USizeMapSettings()
	{
		if (!Z_Registration_Info_UClass_USizeMapSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USizeMapSettings.OuterSingleton, Z_Construct_UClass_USizeMapSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USizeMapSettings.OuterSingleton;
	}
	template<> ASSETMANAGEREDITOR_API UClass* StaticClass<USizeMapSettings>()
	{
		return USizeMapSettings::StaticClass();
	}
	USizeMapSettings::USizeMapSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USizeMapSettings);
	USizeMapSettings::~USizeMapSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_Statics::EnumInfo[] = {
		{ ESizeMapDependencyType_StaticEnum, TEXT("ESizeMapDependencyType"), &Z_Registration_Info_UEnum_ESizeMapDependencyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1283001027U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USizeMapSettings, USizeMapSettings::StaticClass, TEXT("USizeMapSettings"), &Z_Registration_Info_UClass_USizeMapSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USizeMapSettings), 2455667904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_2004702240(TEXT("/Script/AssetManagerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_AssetManagerEditor_Source_AssetManagerEditor_Private_SSizeMap_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
