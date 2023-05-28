// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tools/PlacementPlaceSingleTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlacementPlaceSingleTool() {}
// Cross Module References
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementClickDragToolBase();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModePlaceSingleTool();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModePlaceSingleTool_NoRegister();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModePlaceSingleToolBuilder();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModePlaceSingleToolBuilder_NoRegister();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModePlaceSingleToolSettings();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_NoRegister();
	ASSETPLACEMENTEDMODE_API UClass* Z_Construct_UClass_UPlacementToolBuilderBase();
	ASSETPLACEMENTEDMODE_API UEnum* Z_Construct_UEnum_AssetPlacementEdMode_EPlacementScaleToCursorType();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	UPackage* Z_Construct_UPackage__Script_AssetPlacementEdMode();
// End Cross Module References
	void UPlacementModePlaceSingleToolBuilder::StaticRegisterNativesUPlacementModePlaceSingleToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementModePlaceSingleToolBuilder);
	UClass* Z_Construct_UClass_UPlacementModePlaceSingleToolBuilder_NoRegister()
	{
		return UPlacementModePlaceSingleToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementModePlaceSingleToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementModePlaceSingleToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlacementToolBuilderBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementModePlaceSingleToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/PlacementPlaceSingleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/PlacementPlaceSingleTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementModePlaceSingleToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementModePlaceSingleToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementModePlaceSingleToolBuilder_Statics::ClassParams = {
		&UPlacementModePlaceSingleToolBuilder::StaticClass,
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
		0x000800A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlacementModePlaceSingleToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModePlaceSingleToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementModePlaceSingleToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UPlacementModePlaceSingleToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementModePlaceSingleToolBuilder.OuterSingleton, Z_Construct_UClass_UPlacementModePlaceSingleToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementModePlaceSingleToolBuilder.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementModePlaceSingleToolBuilder>()
	{
		return UPlacementModePlaceSingleToolBuilder::StaticClass();
	}
	UPlacementModePlaceSingleToolBuilder::UPlacementModePlaceSingleToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementModePlaceSingleToolBuilder);
	UPlacementModePlaceSingleToolBuilder::~UPlacementModePlaceSingleToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlacementScaleToCursorType;
	static UEnum* EPlacementScaleToCursorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlacementScaleToCursorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlacementScaleToCursorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AssetPlacementEdMode_EPlacementScaleToCursorType, (UObject*)Z_Construct_UPackage__Script_AssetPlacementEdMode(), TEXT("EPlacementScaleToCursorType"));
		}
		return Z_Registration_Info_UEnum_EPlacementScaleToCursorType.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UEnum* StaticEnum<EPlacementScaleToCursorType>()
	{
		return EPlacementScaleToCursorType_StaticEnum();
	}
	struct Z_Construct_UEnum_AssetPlacementEdMode_EPlacementScaleToCursorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AssetPlacementEdMode_EPlacementScaleToCursorType_Statics::Enumerators[] = {
		{ "EPlacementScaleToCursorType::Positive", (int64)EPlacementScaleToCursorType::Positive },
		{ "EPlacementScaleToCursorType::None", (int64)EPlacementScaleToCursorType::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AssetPlacementEdMode_EPlacementScaleToCursorType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tools/PlacementPlaceSingleTool.h" },
		{ "None.Comment", "/** Scale is unchanged by cursor movement for the placed asset. */" },
		{ "None.Name", "EPlacementScaleToCursorType::None" },
		{ "None.ToolTip", "Scale is unchanged by cursor movement for the placed asset." },
		{ "Positive.Comment", "/** Increases scale as the cursor moves outward from the placed asset. */" },
		{ "Positive.Name", "EPlacementScaleToCursorType::Positive" },
		{ "Positive.ToolTip", "Increases scale as the cursor moves outward from the placed asset." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AssetPlacementEdMode_EPlacementScaleToCursorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
		nullptr,
		"EPlacementScaleToCursorType",
		"EPlacementScaleToCursorType",
		Z_Construct_UEnum_AssetPlacementEdMode_EPlacementScaleToCursorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AssetPlacementEdMode_EPlacementScaleToCursorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AssetPlacementEdMode_EPlacementScaleToCursorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AssetPlacementEdMode_EPlacementScaleToCursorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AssetPlacementEdMode_EPlacementScaleToCursorType()
	{
		if (!Z_Registration_Info_UEnum_EPlacementScaleToCursorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlacementScaleToCursorType.InnerSingleton, Z_Construct_UEnum_AssetPlacementEdMode_EPlacementScaleToCursorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlacementScaleToCursorType.InnerSingleton;
	}
	void UPlacementModePlaceSingleToolSettings::StaticRegisterNativesUPlacementModePlaceSingleToolSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementModePlaceSingleToolSettings);
	UClass* Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_NoRegister()
	{
		return UPlacementModePlaceSingleToolSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScalingType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalingType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScalingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectAfterPlacing_MetaData[];
#endif
		static void NewProp_bSelectAfterPlacing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectAfterPlacing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/PlacementPlaceSingleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/PlacementPlaceSingleTool.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::NewProp_ScalingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::NewProp_ScalingType_MetaData[] = {
		{ "Category", "Single Place Settings" },
		{ "Comment", "/** How the cursor movement should apply to scale once an asset is placed. Note that the maximum bound is controlled by scale settings of the mode. */" },
		{ "ModuleRelativePath", "Private/Tools/PlacementPlaceSingleTool.h" },
		{ "ToolTip", "How the cursor movement should apply to scale once an asset is placed. Note that the maximum bound is controlled by scale settings of the mode." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::NewProp_ScalingType = { "ScalingType", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlacementModePlaceSingleToolSettings, ScalingType), Z_Construct_UEnum_AssetPlacementEdMode_EPlacementScaleToCursorType, METADATA_PARAMS(Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::NewProp_ScalingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::NewProp_ScalingType_MetaData)) }; // 2534905537
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::NewProp_bSelectAfterPlacing_MetaData[] = {
		{ "Category", "Single Place Settings" },
		{ "Comment", "/** If the tool should automatically select the last placed asset. */" },
		{ "ModuleRelativePath", "Private/Tools/PlacementPlaceSingleTool.h" },
		{ "ToolTip", "If the tool should automatically select the last placed asset." },
	};
#endif
	void Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::NewProp_bSelectAfterPlacing_SetBit(void* Obj)
	{
		((UPlacementModePlaceSingleToolSettings*)Obj)->bSelectAfterPlacing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::NewProp_bSelectAfterPlacing = { "bSelectAfterPlacing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPlacementModePlaceSingleToolSettings), &Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::NewProp_bSelectAfterPlacing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::NewProp_bSelectAfterPlacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::NewProp_bSelectAfterPlacing_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::NewProp_ScalingType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::NewProp_ScalingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::NewProp_bSelectAfterPlacing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementModePlaceSingleToolSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::ClassParams = {
		&UPlacementModePlaceSingleToolSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementModePlaceSingleToolSettings()
	{
		if (!Z_Registration_Info_UClass_UPlacementModePlaceSingleToolSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementModePlaceSingleToolSettings.OuterSingleton, Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementModePlaceSingleToolSettings.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementModePlaceSingleToolSettings>()
	{
		return UPlacementModePlaceSingleToolSettings::StaticClass();
	}
	UPlacementModePlaceSingleToolSettings::UPlacementModePlaceSingleToolSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlacementModePlaceSingleToolSettings);
	UPlacementModePlaceSingleToolSettings::~UPlacementModePlaceSingleToolSettings() {}
	void UPlacementModePlaceSingleTool::StaticRegisterNativesUPlacementModePlaceSingleTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlacementModePlaceSingleTool);
	UClass* Z_Construct_UClass_UPlacementModePlaceSingleTool_NoRegister()
	{
		return UPlacementModePlaceSingleTool::StaticClass();
	}
	struct Z_Construct_UClass_UPlacementModePlaceSingleTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SinglePlaceSettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SinglePlaceSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlacementModePlaceSingleTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlacementClickDragToolBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AssetPlacementEdMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementModePlaceSingleTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/PlacementPlaceSingleTool.h" },
		{ "ModuleRelativePath", "Private/Tools/PlacementPlaceSingleTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlacementModePlaceSingleTool_Statics::NewProp_SinglePlaceSettings_MetaData[] = {
		{ "ModuleRelativePath", "Private/Tools/PlacementPlaceSingleTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlacementModePlaceSingleTool_Statics::NewProp_SinglePlaceSettings = { "SinglePlaceSettings", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlacementModePlaceSingleTool, SinglePlaceSettings), Z_Construct_UClass_UPlacementModePlaceSingleToolSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlacementModePlaceSingleTool_Statics::NewProp_SinglePlaceSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModePlaceSingleTool_Statics::NewProp_SinglePlaceSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlacementModePlaceSingleTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlacementModePlaceSingleTool_Statics::NewProp_SinglePlaceSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlacementModePlaceSingleTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlacementModePlaceSingleTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlacementModePlaceSingleTool_Statics::ClassParams = {
		&UPlacementModePlaceSingleTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlacementModePlaceSingleTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModePlaceSingleTool_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlacementModePlaceSingleTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlacementModePlaceSingleTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlacementModePlaceSingleTool()
	{
		if (!Z_Registration_Info_UClass_UPlacementModePlaceSingleTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlacementModePlaceSingleTool.OuterSingleton, Z_Construct_UClass_UPlacementModePlaceSingleTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlacementModePlaceSingleTool.OuterSingleton;
	}
	template<> ASSETPLACEMENTEDMODE_API UClass* StaticClass<UPlacementModePlaceSingleTool>()
	{
		return UPlacementModePlaceSingleTool::StaticClass();
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementPlaceSingleTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementPlaceSingleTool_h_Statics::EnumInfo[] = {
		{ EPlacementScaleToCursorType_StaticEnum, TEXT("EPlacementScaleToCursorType"), &Z_Registration_Info_UEnum_EPlacementScaleToCursorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2534905537U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementPlaceSingleTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlacementModePlaceSingleToolBuilder, UPlacementModePlaceSingleToolBuilder::StaticClass, TEXT("UPlacementModePlaceSingleToolBuilder"), &Z_Registration_Info_UClass_UPlacementModePlaceSingleToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementModePlaceSingleToolBuilder), 109204550U) },
		{ Z_Construct_UClass_UPlacementModePlaceSingleToolSettings, UPlacementModePlaceSingleToolSettings::StaticClass, TEXT("UPlacementModePlaceSingleToolSettings"), &Z_Registration_Info_UClass_UPlacementModePlaceSingleToolSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementModePlaceSingleToolSettings), 1289802112U) },
		{ Z_Construct_UClass_UPlacementModePlaceSingleTool, UPlacementModePlaceSingleTool::StaticClass, TEXT("UPlacementModePlaceSingleTool"), &Z_Registration_Info_UClass_UPlacementModePlaceSingleTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlacementModePlaceSingleTool), 1662030366U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementPlaceSingleTool_h_963983102(TEXT("/Script/AssetPlacementEdMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementPlaceSingleTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementPlaceSingleTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementPlaceSingleTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AssetPlacementEdMode_Source_AssetPlacementEdMode_Private_Tools_PlacementPlaceSingleTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
