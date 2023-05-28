// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SGeometryCollectionHistogram.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGeometryCollectionHistogram() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UHistogramSettings();
	FRACTUREEDITOR_API UClass* Z_Construct_UClass_UHistogramSettings_NoRegister();
	FRACTUREEDITOR_API UEnum* Z_Construct_UEnum_FractureEditor_EInspectedAttributeEnum();
	UPackage* Z_Construct_UPackage__Script_FractureEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInspectedAttributeEnum;
	static UEnum* EInspectedAttributeEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInspectedAttributeEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInspectedAttributeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FractureEditor_EInspectedAttributeEnum, (UObject*)Z_Construct_UPackage__Script_FractureEditor(), TEXT("EInspectedAttributeEnum"));
		}
		return Z_Registration_Info_UEnum_EInspectedAttributeEnum.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UEnum* StaticEnum<EInspectedAttributeEnum>()
	{
		return EInspectedAttributeEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_FractureEditor_EInspectedAttributeEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FractureEditor_EInspectedAttributeEnum_Statics::Enumerators[] = {
		{ "EInspectedAttributeEnum::Volume", (int64)EInspectedAttributeEnum::Volume },
		{ "EInspectedAttributeEnum::Level", (int64)EInspectedAttributeEnum::Level },
		{ "EInspectedAttributeEnum::InitialDynamicState", (int64)EInspectedAttributeEnum::InitialDynamicState },
		{ "EInspectedAttributeEnum::Size", (int64)EInspectedAttributeEnum::Size },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FractureEditor_EInspectedAttributeEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "InitialDynamicState.DisplayName", "InitialDynamicState" },
		{ "InitialDynamicState.Name", "EInspectedAttributeEnum::InitialDynamicState" },
		{ "Level.DisplayName", "Level" },
		{ "Level.Name", "EInspectedAttributeEnum::Level" },
		{ "ModuleRelativePath", "Private/SGeometryCollectionHistogram.h" },
		{ "Size.DisplayName", "RelativeSize" },
		{ "Size.Name", "EInspectedAttributeEnum::Size" },
		{ "Volume.DisplayName", "Volume" },
		{ "Volume.Name", "EInspectedAttributeEnum::Volume" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FractureEditor_EInspectedAttributeEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FractureEditor,
		nullptr,
		"EInspectedAttributeEnum",
		"EInspectedAttributeEnum",
		Z_Construct_UEnum_FractureEditor_EInspectedAttributeEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EInspectedAttributeEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FractureEditor_EInspectedAttributeEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FractureEditor_EInspectedAttributeEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FractureEditor_EInspectedAttributeEnum()
	{
		if (!Z_Registration_Info_UEnum_EInspectedAttributeEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInspectedAttributeEnum.InnerSingleton, Z_Construct_UEnum_FractureEditor_EInspectedAttributeEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInspectedAttributeEnum.InnerSingleton;
	}
	void UHistogramSettings::StaticRegisterNativesUHistogramSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHistogramSettings);
	UClass* Z_Construct_UClass_UHistogramSettings_NoRegister()
	{
		return UHistogramSettings::StaticClass();
	}
	struct Z_Construct_UClass_UHistogramSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InspectedAttribute_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InspectedAttribute_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InspectedAttribute;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSorted_MetaData[];
#endif
		static void NewProp_bSorted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSorted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowClusters_MetaData[];
#endif
		static void NewProp_bShowClusters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowClusters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowRigids_MetaData[];
#endif
		static void NewProp_bShowRigids_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRigids;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowEmbedded_MetaData[];
#endif
		static void NewProp_bShowEmbedded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowEmbedded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHistogramSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FractureEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHistogramSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Settings for Histogram configuration. **/" },
		{ "IncludePath", "SGeometryCollectionHistogram.h" },
		{ "ModuleRelativePath", "Private/SGeometryCollectionHistogram.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Settings for Histogram configuration. *" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHistogramSettings_Statics::NewProp_InspectedAttribute_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHistogramSettings_Statics::NewProp_InspectedAttribute_MetaData[] = {
		{ "Category", "HistogramSettings" },
		{ "Comment", "/** What attribute are we inspecting? */" },
		{ "DisplayName", "Inspected Attribute" },
		{ "ModuleRelativePath", "Private/SGeometryCollectionHistogram.h" },
		{ "ToolTip", "What attribute are we inspecting?" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHistogramSettings_Statics::NewProp_InspectedAttribute = { "InspectedAttribute", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHistogramSettings, InspectedAttribute), Z_Construct_UEnum_FractureEditor_EInspectedAttributeEnum, METADATA_PARAMS(Z_Construct_UClass_UHistogramSettings_Statics::NewProp_InspectedAttribute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHistogramSettings_Statics::NewProp_InspectedAttribute_MetaData)) }; // 3366915158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bSorted_MetaData[] = {
		{ "Category", "HistogramSettings" },
		{ "Comment", "/** Sort the values? */" },
		{ "DisplayName", "Sort Values" },
		{ "ModuleRelativePath", "Private/SGeometryCollectionHistogram.h" },
		{ "ToolTip", "Sort the values?" },
	};
#endif
	void Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bSorted_SetBit(void* Obj)
	{
		((UHistogramSettings*)Obj)->bSorted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bSorted = { "bSorted", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHistogramSettings), &Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bSorted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bSorted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bSorted_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowClusters_MetaData[] = {
		{ "Category", "HistogramSettings" },
		{ "Comment", "/** Show clusters? */" },
		{ "DisplayName", "Show Clusters" },
		{ "ModuleRelativePath", "Private/SGeometryCollectionHistogram.h" },
		{ "ToolTip", "Show clusters?" },
	};
#endif
	void Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowClusters_SetBit(void* Obj)
	{
		((UHistogramSettings*)Obj)->bShowClusters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowClusters = { "bShowClusters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHistogramSettings), &Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowClusters_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowClusters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowClusters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowRigids_MetaData[] = {
		{ "Category", "HistogramSettings" },
		{ "Comment", "/** Show rigids? */" },
		{ "DisplayName", "Show Rigids" },
		{ "ModuleRelativePath", "Private/SGeometryCollectionHistogram.h" },
		{ "ToolTip", "Show rigids?" },
	};
#endif
	void Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowRigids_SetBit(void* Obj)
	{
		((UHistogramSettings*)Obj)->bShowRigids = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowRigids = { "bShowRigids", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHistogramSettings), &Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowRigids_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowRigids_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowRigids_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowEmbedded_MetaData[] = {
		{ "Category", "HistogramSettings" },
		{ "Comment", "/** Show embedded geometry? */" },
		{ "DisplayName", "Show Embedded Geometry" },
		{ "ModuleRelativePath", "Private/SGeometryCollectionHistogram.h" },
		{ "ToolTip", "Show embedded geometry?" },
	};
#endif
	void Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowEmbedded_SetBit(void* Obj)
	{
		((UHistogramSettings*)Obj)->bShowEmbedded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowEmbedded = { "bShowEmbedded", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHistogramSettings), &Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowEmbedded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowEmbedded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowEmbedded_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHistogramSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHistogramSettings_Statics::NewProp_InspectedAttribute_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHistogramSettings_Statics::NewProp_InspectedAttribute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bSorted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowClusters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowRigids,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHistogramSettings_Statics::NewProp_bShowEmbedded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHistogramSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHistogramSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHistogramSettings_Statics::ClassParams = {
		&UHistogramSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHistogramSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHistogramSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHistogramSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHistogramSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHistogramSettings()
	{
		if (!Z_Registration_Info_UClass_UHistogramSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHistogramSettings.OuterSingleton, Z_Construct_UClass_UHistogramSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHistogramSettings.OuterSingleton;
	}
	template<> FRACTUREEDITOR_API UClass* StaticClass<UHistogramSettings>()
	{
		return UHistogramSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHistogramSettings);
	UHistogramSettings::~UHistogramSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_Statics::EnumInfo[] = {
		{ EInspectedAttributeEnum_StaticEnum, TEXT("EInspectedAttributeEnum"), &Z_Registration_Info_UEnum_EInspectedAttributeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3366915158U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHistogramSettings, UHistogramSettings::StaticClass, TEXT("UHistogramSettings"), &Z_Registration_Info_UClass_UHistogramSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHistogramSettings), 1374301090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_484989919(TEXT("/Script/FractureEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosEditor_Source_FractureEditor_Private_SGeometryCollectionHistogram_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
