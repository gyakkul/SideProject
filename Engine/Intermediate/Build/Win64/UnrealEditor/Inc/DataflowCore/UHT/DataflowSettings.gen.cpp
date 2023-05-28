// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/DataflowSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowSettings() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DATAFLOWCORE_API UClass* Z_Construct_UClass_UDataflowSettings();
	DATAFLOWCORE_API UClass* Z_Construct_UClass_UDataflowSettings_NoRegister();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FNodeColors();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_DataflowCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NodeColors;
class UScriptStruct* FNodeColors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NodeColors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NodeColors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNodeColors, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("NodeColors"));
	}
	return Z_Registration_Info_UScriptStruct_NodeColors.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FNodeColors>()
{
	return FNodeColors::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNodeColors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeTitleColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeTitleColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeBodyTintColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeBodyTintColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeColors_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNodeColors_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNodeColors>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeColors_Statics::NewProp_NodeTitleColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodeColors_Statics::NewProp_NodeTitleColor = { "NodeTitleColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeColors, NodeTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeColors_Statics::NewProp_NodeTitleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeColors_Statics::NewProp_NodeTitleColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNodeColors_Statics::NewProp_NodeBodyTintColor_MetaData[] = {
		{ "Category", "Colors" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSettings.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNodeColors_Statics::NewProp_NodeBodyTintColor = { "NodeBodyTintColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNodeColors, NodeBodyTintColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeColors_Statics::NewProp_NodeBodyTintColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeColors_Statics::NewProp_NodeBodyTintColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNodeColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeColors_Statics::NewProp_NodeTitleColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNodeColors_Statics::NewProp_NodeBodyTintColor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNodeColors_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
		nullptr,
		&NewStructOps,
		"NodeColors",
		sizeof(FNodeColors),
		alignof(FNodeColors),
		Z_Construct_UScriptStruct_FNodeColors_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeColors_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNodeColors_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNodeColors_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNodeColors()
	{
		if (!Z_Registration_Info_UScriptStruct_NodeColors.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NodeColors.InnerSingleton, Z_Construct_UScriptStruct_FNodeColors_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NodeColors.InnerSingleton;
	}
	void UDataflowSettings::StaticRegisterNativesUDataflowSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataflowSettings);
	UClass* Z_Construct_UClass_UDataflowSettings_NoRegister()
	{
		return UDataflowSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDataflowSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayPinTypeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayPinTypeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManagedArrayCollectionPinTypeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ManagedArrayCollectionPinTypeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxPinTypeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxPinTypeColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpherePinTypeColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpherePinTypeColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NodeColorsMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NodeColorsMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeColorsMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NodeColorsMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataflowSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataflowSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Dataflow" },
		{ "IncludePath", "Dataflow/DataflowSettings.h" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataflowSettings_Statics::NewProp_ArrayPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "Comment", "/** TArray<> pin type color. The other pin colors are defined in the general editor settings. */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSettings.h" },
		{ "ToolTip", "TArray<> pin type color. The other pin colors are defined in the general editor settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataflowSettings_Statics::NewProp_ArrayPinTypeColor = { "ArrayPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataflowSettings, ArrayPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDataflowSettings_Statics::NewProp_ArrayPinTypeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSettings_Statics::NewProp_ArrayPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataflowSettings_Statics::NewProp_ManagedArrayCollectionPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "Comment", "/** FManagedArrayCollection pin type color. The other pin colors are defined in the general editor settings. */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSettings.h" },
		{ "ToolTip", "FManagedArrayCollection pin type color. The other pin colors are defined in the general editor settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataflowSettings_Statics::NewProp_ManagedArrayCollectionPinTypeColor = { "ManagedArrayCollectionPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataflowSettings, ManagedArrayCollectionPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDataflowSettings_Statics::NewProp_ManagedArrayCollectionPinTypeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSettings_Statics::NewProp_ManagedArrayCollectionPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataflowSettings_Statics::NewProp_BoxPinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "Comment", "/** FBox pin type color. The other pin colors are defined in the general editor settings. */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSettings.h" },
		{ "ToolTip", "FBox pin type color. The other pin colors are defined in the general editor settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataflowSettings_Statics::NewProp_BoxPinTypeColor = { "BoxPinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataflowSettings, BoxPinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDataflowSettings_Statics::NewProp_BoxPinTypeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSettings_Statics::NewProp_BoxPinTypeColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataflowSettings_Statics::NewProp_SpherePinTypeColor_MetaData[] = {
		{ "Category", "PinColors" },
		{ "Comment", "/** FSphere pin type color. The other pin colors are defined in the general editor settings. */" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSettings.h" },
		{ "ToolTip", "FSphere pin type color. The other pin colors are defined in the general editor settings." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataflowSettings_Statics::NewProp_SpherePinTypeColor = { "SpherePinTypeColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataflowSettings, SpherePinTypeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDataflowSettings_Statics::NewProp_SpherePinTypeColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSettings_Statics::NewProp_SpherePinTypeColor_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataflowSettings_Statics::NewProp_NodeColorsMap_ValueProp = { "NodeColorsMap", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FNodeColors, METADATA_PARAMS(nullptr, 0) }; // 2407582648
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDataflowSettings_Statics::NewProp_NodeColorsMap_Key_KeyProp = { "NodeColorsMap_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataflowSettings_Statics::NewProp_NodeColorsMap_MetaData[] = {
		{ "Category", "NodeColors" },
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSettings.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDataflowSettings_Statics::NewProp_NodeColorsMap = { "NodeColorsMap", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataflowSettings, NodeColorsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDataflowSettings_Statics::NewProp_NodeColorsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSettings_Statics::NewProp_NodeColorsMap_MetaData)) }; // 2407582648
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataflowSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowSettings_Statics::NewProp_ArrayPinTypeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowSettings_Statics::NewProp_ManagedArrayCollectionPinTypeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowSettings_Statics::NewProp_BoxPinTypeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowSettings_Statics::NewProp_SpherePinTypeColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowSettings_Statics::NewProp_NodeColorsMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowSettings_Statics::NewProp_NodeColorsMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataflowSettings_Statics::NewProp_NodeColorsMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataflowSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataflowSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataflowSettings_Statics::ClassParams = {
		&UDataflowSettings::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataflowSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UDataflowSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataflowSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataflowSettings()
	{
		if (!Z_Registration_Info_UClass_UDataflowSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataflowSettings.OuterSingleton, Z_Construct_UClass_UDataflowSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataflowSettings.OuterSingleton;
	}
	template<> DATAFLOWCORE_API UClass* StaticClass<UDataflowSettings>()
	{
		return UDataflowSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataflowSettings);
	UDataflowSettings::~UDataflowSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_Statics::ScriptStructInfo[] = {
		{ FNodeColors::StaticStruct, Z_Construct_UScriptStruct_FNodeColors_Statics::NewStructOps, TEXT("NodeColors"), &Z_Registration_Info_UScriptStruct_NodeColors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNodeColors), 2407582648U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataflowSettings, UDataflowSettings::StaticClass, TEXT("UDataflowSettings"), &Z_Registration_Info_UClass_UDataflowSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataflowSettings), 2051646231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_3432207756(TEXT("/Script/DataflowCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSettings_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
