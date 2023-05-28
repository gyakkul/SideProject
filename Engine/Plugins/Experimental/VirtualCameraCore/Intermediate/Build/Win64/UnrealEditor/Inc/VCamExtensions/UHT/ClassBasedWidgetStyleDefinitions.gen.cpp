// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Styling/ClassBasedWidgetStyleDefinitions.h"
#include "Styling/WidgetStyleDataArray.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClassBasedWidgetStyleDefinitions() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_VCamExtensions();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamModifier_NoRegister();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UClassBasedWidgetStyleDefinitions();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_NoRegister();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UWidgetStyleData_NoRegister();
	VCAMEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData();
	VCAMEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetStyleDataArray();
	VCAMEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetStyleDataConfig();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetStyleDataConfig;
class UScriptStruct* FWidgetStyleDataConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetStyleDataConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetStyleDataConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetStyleDataConfig, (UObject*)Z_Construct_UPackage__Script_VCamExtensions(), TEXT("WidgetStyleDataConfig"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetStyleDataConfig.OuterSingleton;
}
template<> VCAMEXTENSIONS_API UScriptStruct* StaticStruct<FWidgetStyleDataConfig>()
{
	return FWidgetStyleDataConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierMetaData_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ModifierMetaData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ModifierMetaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInherit_MetaData[];
#endif
		static void NewProp_bInherit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInherit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Styling/ClassBasedWidgetStyleDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetStyleDataConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::NewProp_ModifierMetaData_Inner_MetaData[] = {
		{ "Category", "Virtual Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Styling/ClassBasedWidgetStyleDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::NewProp_ModifierMetaData_Inner = { "ModifierMetaData", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::NewProp_ModifierMetaData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::NewProp_ModifierMetaData_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::NewProp_ModifierMetaData_MetaData[] = {
		{ "Category", "Virtual Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Styling/ClassBasedWidgetStyleDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::NewProp_ModifierMetaData = { "ModifierMetaData", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetStyleDataConfig, ModifierMetaData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::NewProp_ModifierMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::NewProp_ModifierMetaData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::NewProp_bInherit_MetaData[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Whether to inherit the meta data of modifier's parent class(es). */" },
		{ "ModuleRelativePath", "Public/Styling/ClassBasedWidgetStyleDefinitions.h" },
		{ "ToolTip", "Whether to inherit the meta data of modifier's parent class(es)." },
	};
#endif
	void Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::NewProp_bInherit_SetBit(void* Obj)
	{
		((FWidgetStyleDataConfig*)Obj)->bInherit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::NewProp_bInherit = { "bInherit", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWidgetStyleDataConfig), &Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::NewProp_bInherit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::NewProp_bInherit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::NewProp_bInherit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::NewProp_ModifierMetaData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::NewProp_ModifierMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::NewProp_bInherit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamExtensions,
		nullptr,
		&NewStructOps,
		"WidgetStyleDataConfig",
		sizeof(FWidgetStyleDataConfig),
		alignof(FWidgetStyleDataConfig),
		Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetStyleDataConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetStyleDataConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetStyleDataConfig.InnerSingleton, Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetStyleDataConfig.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerModifierClassWidgetSytleData;
class UScriptStruct* FPerModifierClassWidgetSytleData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerModifierClassWidgetSytleData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerModifierClassWidgetSytleData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData, (UObject*)Z_Construct_UPackage__Script_VCamExtensions(), TEXT("PerModifierClassWidgetSytleData"));
	}
	return Z_Registration_Info_UScriptStruct_PerModifierClassWidgetSytleData.OuterSingleton;
}
template<> VCAMEXTENSIONS_API UScriptStruct* StaticStruct<FPerModifierClassWidgetSytleData>()
{
	return FPerModifierClassWidgetSytleData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierStyles_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierStyles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConnectionPointStyles_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConnectionPointStyles_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionPointStyles_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ConnectionPointStyles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Styling/ClassBasedWidgetStyleDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerModifierClassWidgetSytleData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::NewProp_ModifierStyles_MetaData[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Data to attach to modifiers matching the associated class. */" },
		{ "ModuleRelativePath", "Public/Styling/ClassBasedWidgetStyleDefinitions.h" },
		{ "ToolTip", "Data to attach to modifiers matching the associated class." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::NewProp_ModifierStyles = { "ModifierStyles", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerModifierClassWidgetSytleData, ModifierStyles), Z_Construct_UScriptStruct_FWidgetStyleDataConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::NewProp_ModifierStyles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::NewProp_ModifierStyles_MetaData)) }; // 3963495874
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::NewProp_ConnectionPointStyles_ValueProp = { "ConnectionPointStyles", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWidgetStyleDataConfig, METADATA_PARAMS(nullptr, 0) }; // 3963495874
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::NewProp_ConnectionPointStyles_Key_KeyProp = { "ConnectionPointStyles_Key", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::NewProp_ConnectionPointStyles_MetaData[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Meta data that is attached to a custom name, such as a connection point or group name (if using e.g. UClassBasedModifierHierarchyRules) */" },
		{ "ModuleRelativePath", "Public/Styling/ClassBasedWidgetStyleDefinitions.h" },
		{ "ToolTip", "Meta data that is attached to a custom name, such as a connection point or group name (if using e.g. UClassBasedModifierHierarchyRules)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::NewProp_ConnectionPointStyles = { "ConnectionPointStyles", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPerModifierClassWidgetSytleData, ConnectionPointStyles), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::NewProp_ConnectionPointStyles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::NewProp_ConnectionPointStyles_MetaData)) }; // 3963495874
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::NewProp_ModifierStyles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::NewProp_ConnectionPointStyles_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::NewProp_ConnectionPointStyles_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::NewProp_ConnectionPointStyles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamExtensions,
		nullptr,
		&NewStructOps,
		"PerModifierClassWidgetSytleData",
		sizeof(FPerModifierClassWidgetSytleData),
		alignof(FPerModifierClassWidgetSytleData),
		Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData()
	{
		if (!Z_Registration_Info_UScriptStruct_PerModifierClassWidgetSytleData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerModifierClassWidgetSytleData.InnerSingleton, Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PerModifierClassWidgetSytleData.InnerSingleton;
	}
	void UClassBasedWidgetStyleDefinitions::StaticRegisterNativesUClassBasedWidgetStyleDefinitions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClassBasedWidgetStyleDefinitions);
	UClass* Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_NoRegister()
	{
		return UClassBasedWidgetStyleDefinitions::StaticClass();
	}
	struct Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Config_ValueProp;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Config_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Config;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CategoriesWithoutModifier_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CategoriesWithoutModifier_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoriesWithoutModifier_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CategoriesWithoutModifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Assigns meta data based on modifier class. To every modifier class you can assign meta data.\n */" },
		{ "IncludePath", "Styling/ClassBasedWidgetStyleDefinitions.h" },
		{ "ModuleRelativePath", "Public/Styling/ClassBasedWidgetStyleDefinitions.h" },
		{ "ToolTip", "Assigns meta data based on modifier class. To every modifier class you can assign meta data." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::NewProp_Config_ValueProp = { "Config", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData, METADATA_PARAMS(nullptr, 0) }; // 3605799533
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::NewProp_Config_Key_KeyProp = { "Config_Key", nullptr, (EPropertyFlags)0x0004008000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UVCamModifier_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::NewProp_Config_MetaData[] = {
		{ "Category", "Virtual Camera" },
		{ "ModuleRelativePath", "Public/Styling/ClassBasedWidgetStyleDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClassBasedWidgetStyleDefinitions, Config), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::NewProp_Config_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::NewProp_Config_MetaData)) }; // 3605799533
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::NewProp_CategoriesWithoutModifier_ValueProp = { "CategoriesWithoutModifier", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWidgetStyleDataArray, METADATA_PARAMS(nullptr, 0) }; // 1552283863
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::NewProp_CategoriesWithoutModifier_Key_KeyProp = { "CategoriesWithoutModifier_Key", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::NewProp_CategoriesWithoutModifier_MetaData[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Meta data that is not bound to any modifier but just to a simple name. */" },
		{ "ModuleRelativePath", "Public/Styling/ClassBasedWidgetStyleDefinitions.h" },
		{ "ToolTip", "Meta data that is not bound to any modifier but just to a simple name." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::NewProp_CategoriesWithoutModifier = { "CategoriesWithoutModifier", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UClassBasedWidgetStyleDefinitions, CategoriesWithoutModifier), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::NewProp_CategoriesWithoutModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::NewProp_CategoriesWithoutModifier_MetaData)) }; // 1552283863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::NewProp_Config_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::NewProp_Config_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::NewProp_Config,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::NewProp_CategoriesWithoutModifier_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::NewProp_CategoriesWithoutModifier_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::NewProp_CategoriesWithoutModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClassBasedWidgetStyleDefinitions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::ClassParams = {
		&UClassBasedWidgetStyleDefinitions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClassBasedWidgetStyleDefinitions()
	{
		if (!Z_Registration_Info_UClass_UClassBasedWidgetStyleDefinitions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClassBasedWidgetStyleDefinitions.OuterSingleton, Z_Construct_UClass_UClassBasedWidgetStyleDefinitions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UClassBasedWidgetStyleDefinitions.OuterSingleton;
	}
	template<> VCAMEXTENSIONS_API UClass* StaticClass<UClassBasedWidgetStyleDefinitions>()
	{
		return UClassBasedWidgetStyleDefinitions::StaticClass();
	}
	UClassBasedWidgetStyleDefinitions::UClassBasedWidgetStyleDefinitions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClassBasedWidgetStyleDefinitions);
	UClassBasedWidgetStyleDefinitions::~UClassBasedWidgetStyleDefinitions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ClassBasedWidgetStyleDefinitions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ClassBasedWidgetStyleDefinitions_h_Statics::ScriptStructInfo[] = {
		{ FWidgetStyleDataConfig::StaticStruct, Z_Construct_UScriptStruct_FWidgetStyleDataConfig_Statics::NewStructOps, TEXT("WidgetStyleDataConfig"), &Z_Registration_Info_UScriptStruct_WidgetStyleDataConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetStyleDataConfig), 3963495874U) },
		{ FPerModifierClassWidgetSytleData::StaticStruct, Z_Construct_UScriptStruct_FPerModifierClassWidgetSytleData_Statics::NewStructOps, TEXT("PerModifierClassWidgetSytleData"), &Z_Registration_Info_UScriptStruct_PerModifierClassWidgetSytleData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerModifierClassWidgetSytleData), 3605799533U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ClassBasedWidgetStyleDefinitions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UClassBasedWidgetStyleDefinitions, UClassBasedWidgetStyleDefinitions::StaticClass, TEXT("UClassBasedWidgetStyleDefinitions"), &Z_Registration_Info_UClass_UClassBasedWidgetStyleDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClassBasedWidgetStyleDefinitions), 3576974933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ClassBasedWidgetStyleDefinitions_h_1195420743(TEXT("/Script/VCamExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ClassBasedWidgetStyleDefinitions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ClassBasedWidgetStyleDefinitions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ClassBasedWidgetStyleDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_ClassBasedWidgetStyleDefinitions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
