// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SGeometryCollectionOutliner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGeometryCollectionOutliner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UOutlinerSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UOutlinerSettings_NoRegister();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_EOutlinerItemNameEnum();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOutlinerItemNameEnum;
	static UEnum* EOutlinerItemNameEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOutlinerItemNameEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOutlinerItemNameEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_EOutlinerItemNameEnum, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("EOutlinerItemNameEnum"));
		}
		return Z_Registration_Info_UEnum_EOutlinerItemNameEnum.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<EOutlinerItemNameEnum>()
	{
		return EOutlinerItemNameEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_EOutlinerItemNameEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_EOutlinerItemNameEnum_Statics::Enumerators[] = {
		{ "EOutlinerItemNameEnum::BoneName", (int64)EOutlinerItemNameEnum::BoneName },
		{ "EOutlinerItemNameEnum::BoneIndex", (int64)EOutlinerItemNameEnum::BoneIndex },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_EOutlinerItemNameEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BoneIndex.DisplayName", "Bone Index" },
		{ "BoneIndex.Name", "EOutlinerItemNameEnum::BoneIndex" },
		{ "BoneName.DisplayName", "Bone Name" },
		{ "BoneName.Name", "EOutlinerItemNameEnum::BoneName" },
		{ "ModuleRelativePath", "Private/SGeometryCollectionOutliner.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_EOutlinerItemNameEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"EOutlinerItemNameEnum",
		"EOutlinerItemNameEnum",
		Z_Construct_UEnum_FractureEditor_EOutlinerItemNameEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EOutlinerItemNameEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FractureEditor_EOutlinerItemNameEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EOutlinerItemNameEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FractureEditor_EOutlinerItemNameEnum()
	{
		if (!Z_Registration_Info_UEnum_EOutlinerItemNameEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOutlinerItemNameEnum.InnerSingleton, Z_Construct_UEnum_FractureEditor_EOutlinerItemNameEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOutlinerItemNameEnum.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOutlinerColumnMode;
	static UEnum* EOutlinerColumnMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOutlinerColumnMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOutlinerColumnMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("EOutlinerColumnMode"));
		}
		return Z_Registration_Info_UEnum_EOutlinerColumnMode.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<EOutlinerColumnMode>()
	{
		return EOutlinerColumnMode_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode_Statics::Enumerators[] = {
		{ "EOutlinerColumnMode::State", (int64)EOutlinerColumnMode::State },
		{ "EOutlinerColumnMode::Damage", (int64)EOutlinerColumnMode::Damage },
		{ "EOutlinerColumnMode::Removal", (int64)EOutlinerColumnMode::Removal },
		{ "EOutlinerColumnMode::Collision", (int64)EOutlinerColumnMode::Collision },
		{ "EOutlinerColumnMode::Size", (int64)EOutlinerColumnMode::Size },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Collision.DisplayName", "Collision" },
		{ "Collision.Name", "EOutlinerColumnMode::Collision" },
		{ "Damage.DisplayName", "Damage" },
		{ "Damage.Name", "EOutlinerColumnMode::Damage" },
		{ "ModuleRelativePath", "Private/SGeometryCollectionOutliner.h" },
		{ "Removal.DisplayName", "Removal" },
		{ "Removal.Name", "EOutlinerColumnMode::Removal" },
		{ "Size.DisplayName", "Size" },
		{ "Size.Name", "EOutlinerColumnMode::Size" },
		{ "State.DisplayName", "State" },
		{ "State.Name", "EOutlinerColumnMode::State" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"EOutlinerColumnMode",
		"EOutlinerColumnMode",
		Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode()
	{
		if (!Z_Registration_Info_UEnum_EOutlinerColumnMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOutlinerColumnMode.InnerSingleton, Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOutlinerColumnMode.InnerSingleton;
	}
	void UOutlinerSettings::StaticRegisterNativesUOutlinerSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOutlinerSettings);
	UClass* Z_Construct_UClass_UOutlinerSettings_NoRegister()
	{
		return UOutlinerSettings::StaticClass();
	}
	struct Z_Construct_UClass_UOutlinerSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorByLevel_MetaData[];
#endif
		static void NewProp_ColorByLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ColorByLevel;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColumnMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColumnMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColumnMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOutlinerSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutlinerSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings for Outliner configuration. **/" },
		{ "IncludePath", "SGeometryCollectionOutliner.h" },
		{ "ModuleRelativePath", "Private/SGeometryCollectionOutliner.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings for Outliner configuration. *" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutlinerSettings_Statics::NewProp_ColorByLevel_MetaData[] = {
		{ "Category", "OutlinerSettings" },
		{ "Comment", "/** whether to use level coloring */" },
		{ "DisplayName", "Color By Level" },
		{ "ModuleRelativePath", "Private/SGeometryCollectionOutliner.h" },
		{ "ToolTip", "whether to use level coloring" },
	};
#endif
	void Z_Construct_UClass_UOutlinerSettings_Statics::NewProp_ColorByLevel_SetBit(void* Obj)
	{
		((UOutlinerSettings*)Obj)->ColorByLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOutlinerSettings_Statics::NewProp_ColorByLevel = { "ColorByLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOutlinerSettings), &Z_Construct_UClass_UOutlinerSettings_Statics::NewProp_ColorByLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOutlinerSettings_Statics::NewProp_ColorByLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOutlinerSettings_Statics::NewProp_ColorByLevel_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOutlinerSettings_Statics::NewProp_ColumnMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutlinerSettings_Statics::NewProp_ColumnMode_MetaData[] = {
		{ "Category", "OutlinerSettings" },
		{ "Comment", "/** the column to be display in the outliner */" },
		{ "DisplayName", "Column Mode" },
		{ "ModuleRelativePath", "Private/SGeometryCollectionOutliner.h" },
		{ "ToolTip", "the column to be display in the outliner" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOutlinerSettings_Statics::NewProp_ColumnMode = { "ColumnMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOutlinerSettings, ColumnMode), Z_Construct_UEnum_FractureEditor_EOutlinerColumnMode, METADATA_PARAMS(Z_Construct_UClass_UOutlinerSettings_Statics::NewProp_ColumnMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOutlinerSettings_Statics::NewProp_ColumnMode_MetaData)) }; // 1325154060
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOutlinerSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutlinerSettings_Statics::NewProp_ColorByLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutlinerSettings_Statics::NewProp_ColumnMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutlinerSettings_Statics::NewProp_ColumnMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOutlinerSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOutlinerSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOutlinerSettings_Statics::ClassParams = {
		&UOutlinerSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOutlinerSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOutlinerSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOutlinerSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOutlinerSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOutlinerSettings()
	{
		if (!Z_Registration_Info_UClass_UOutlinerSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOutlinerSettings.OuterSingleton, Z_Construct_UClass_UOutlinerSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOutlinerSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UOutlinerSettings>()
	{
		return UOutlinerSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOutlinerSettings);
	UOutlinerSettings::~UOutlinerSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_Statics::EnumInfo[] = {
		{ EOutlinerItemNameEnum_StaticEnum, TEXT("EOutlinerItemNameEnum"), &Z_Registration_Info_UEnum_EOutlinerItemNameEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2314850631U) },
		{ EOutlinerColumnMode_StaticEnum, TEXT("EOutlinerColumnMode"), &Z_Registration_Info_UEnum_EOutlinerColumnMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1325154060U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOutlinerSettings, UOutlinerSettings::StaticClass, TEXT("UOutlinerSettings"), &Z_Registration_Info_UClass_UOutlinerSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOutlinerSettings), 2049639673U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_757977711(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionOutliner_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
