// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Styling/TargetBasedWidgetStyleDefinitions.h"
#include "Styling/WidgetStyleDataArray.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetBasedWidgetStyleDefinitions() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VCamExtensions();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_NoRegister();
	VCAMEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FTargettedModifierStyleConfig();
	VCAMEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetStyleDataArray();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargettedModifierStyleConfig;
class UScriptStruct* FTargettedModifierStyleConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargettedModifierStyleConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargettedModifierStyleConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargettedModifierStyleConfig, (UObject*)Z_Construct_UPackage__Script_VCamExtensions(), TEXT("TargettedModifierStyleConfig"));
	}
	return Z_Registration_Info_UScriptStruct_TargettedModifierStyleConfig.OuterSingleton;
}
template<> VCAMEXTENSIONS_API UScriptStruct* StaticStruct<FTargettedModifierStyleConfig>()
{
	return FTargettedModifierStyleConfig::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Styling/TargetBasedWidgetStyleDefinitions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargettedModifierStyleConfig>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::NewProp_ModifierStyles_MetaData[] = {
		{ "Category", "Virtual Camera" },
		{ "ModuleRelativePath", "Public/Styling/TargetBasedWidgetStyleDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::NewProp_ModifierStyles = { "ModifierStyles", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargettedModifierStyleConfig, ModifierStyles), Z_Construct_UScriptStruct_FWidgetStyleDataArray, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::NewProp_ModifierStyles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::NewProp_ModifierStyles_MetaData)) }; // 1552283863
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::NewProp_ConnectionPointStyles_ValueProp = { "ConnectionPointStyles", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWidgetStyleDataArray, METADATA_PARAMS(nullptr, 0) }; // 1552283863
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::NewProp_ConnectionPointStyles_Key_KeyProp = { "ConnectionPointStyles_Key", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::NewProp_ConnectionPointStyles_MetaData[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Key: Name of a connection point on the modifier */" },
		{ "ModuleRelativePath", "Public/Styling/TargetBasedWidgetStyleDefinitions.h" },
		{ "ToolTip", "Key: Name of a connection point on the modifier" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::NewProp_ConnectionPointStyles = { "ConnectionPointStyles", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargettedModifierStyleConfig, ConnectionPointStyles), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::NewProp_ConnectionPointStyles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::NewProp_ConnectionPointStyles_MetaData)) }; // 1552283863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::NewProp_ModifierStyles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::NewProp_ConnectionPointStyles_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::NewProp_ConnectionPointStyles_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::NewProp_ConnectionPointStyles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamExtensions,
		nullptr,
		&NewStructOps,
		"TargettedModifierStyleConfig",
		sizeof(FTargettedModifierStyleConfig),
		alignof(FTargettedModifierStyleConfig),
		Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargettedModifierStyleConfig()
	{
		if (!Z_Registration_Info_UScriptStruct_TargettedModifierStyleConfig.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargettedModifierStyleConfig.InnerSingleton, Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargettedModifierStyleConfig.InnerSingleton;
	}
	void UTargetBasedWidgetStyleDefinitions::StaticRegisterNativesUTargetBasedWidgetStyleDefinitions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetBasedWidgetStyleDefinitions);
	UClass* Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_NoRegister()
	{
		return UTargetBasedWidgetStyleDefinitions::StaticClass();
	}
	struct Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ModifierToStyle_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ModifierToStyle_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModifierToStyle_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ModifierToStyle;
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
	UObject* (*const Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UModifierBoundWidgetStyleDefinitions,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamExtensions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Styling/TargetBasedWidgetStyleDefinitions.h" },
		{ "ModuleRelativePath", "Public/Styling/TargetBasedWidgetStyleDefinitions.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::NewProp_ModifierToStyle_ValueProp = { "ModifierToStyle", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTargettedModifierStyleConfig, METADATA_PARAMS(nullptr, 0) }; // 1167099436
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::NewProp_ModifierToStyle_Key_KeyProp = { "ModifierToStyle_Key", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::NewProp_ModifierToStyle_MetaData[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Key: Name of a modifier in a VCam's stack entry. */" },
		{ "ModuleRelativePath", "Public/Styling/TargetBasedWidgetStyleDefinitions.h" },
		{ "ToolTip", "Key: Name of a modifier in a VCam's stack entry." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::NewProp_ModifierToStyle = { "ModifierToStyle", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetBasedWidgetStyleDefinitions, ModifierToStyle), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::NewProp_ModifierToStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::NewProp_ModifierToStyle_MetaData)) }; // 1167099436
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::NewProp_CategoriesWithoutModifier_ValueProp = { "CategoriesWithoutModifier", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FWidgetStyleDataArray, METADATA_PARAMS(nullptr, 0) }; // 1552283863
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::NewProp_CategoriesWithoutModifier_Key_KeyProp = { "CategoriesWithoutModifier_Key", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::NewProp_CategoriesWithoutModifier_MetaData[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/** Styles that is not bound to any modifier but just to a name. */" },
		{ "ModuleRelativePath", "Public/Styling/TargetBasedWidgetStyleDefinitions.h" },
		{ "ToolTip", "Styles that is not bound to any modifier but just to a name." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::NewProp_CategoriesWithoutModifier = { "CategoriesWithoutModifier", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetBasedWidgetStyleDefinitions, CategoriesWithoutModifier), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::NewProp_CategoriesWithoutModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::NewProp_CategoriesWithoutModifier_MetaData)) }; // 1552283863
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::NewProp_ModifierToStyle_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::NewProp_ModifierToStyle_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::NewProp_ModifierToStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::NewProp_CategoriesWithoutModifier_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::NewProp_CategoriesWithoutModifier_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::NewProp_CategoriesWithoutModifier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetBasedWidgetStyleDefinitions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::ClassParams = {
		&UTargetBasedWidgetStyleDefinitions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions()
	{
		if (!Z_Registration_Info_UClass_UTargetBasedWidgetStyleDefinitions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetBasedWidgetStyleDefinitions.OuterSingleton, Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetBasedWidgetStyleDefinitions.OuterSingleton;
	}
	template<> VCAMEXTENSIONS_API UClass* StaticClass<UTargetBasedWidgetStyleDefinitions>()
	{
		return UTargetBasedWidgetStyleDefinitions::StaticClass();
	}
	UTargetBasedWidgetStyleDefinitions::UTargetBasedWidgetStyleDefinitions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetBasedWidgetStyleDefinitions);
	UTargetBasedWidgetStyleDefinitions::~UTargetBasedWidgetStyleDefinitions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_TargetBasedWidgetStyleDefinitions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_TargetBasedWidgetStyleDefinitions_h_Statics::ScriptStructInfo[] = {
		{ FTargettedModifierStyleConfig::StaticStruct, Z_Construct_UScriptStruct_FTargettedModifierStyleConfig_Statics::NewStructOps, TEXT("TargettedModifierStyleConfig"), &Z_Registration_Info_UScriptStruct_TargettedModifierStyleConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargettedModifierStyleConfig), 1167099436U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_TargetBasedWidgetStyleDefinitions_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetBasedWidgetStyleDefinitions, UTargetBasedWidgetStyleDefinitions::StaticClass, TEXT("UTargetBasedWidgetStyleDefinitions"), &Z_Registration_Info_UClass_UTargetBasedWidgetStyleDefinitions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetBasedWidgetStyleDefinitions), 1760149116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_TargetBasedWidgetStyleDefinitions_h_3688918582(TEXT("/Script/VCamExtensions"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_TargetBasedWidgetStyleDefinitions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_TargetBasedWidgetStyleDefinitions_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_TargetBasedWidgetStyleDefinitions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_TargetBasedWidgetStyleDefinitions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
