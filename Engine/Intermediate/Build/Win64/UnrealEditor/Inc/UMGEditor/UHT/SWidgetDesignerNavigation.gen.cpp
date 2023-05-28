// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Navigation/SWidgetDesignerNavigation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSWidgetDesignerNavigation() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ENavigationGenesis();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigation();
	UMGEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNavigationSimulationArguments();
	UPackage* Z_Construct_UPackage__Script_UMGEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavigationSimulationArguments;
class UScriptStruct* FNavigationSimulationArguments::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavigationSimulationArguments.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavigationSimulationArguments.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavigationSimulationArguments, (UObject*)Z_Construct_UPackage__Script_UMGEditor(), TEXT("NavigationSimulationArguments"));
	}
	return Z_Registration_Info_UScriptStruct_NavigationSimulationArguments.OuterSingleton;
}
template<> UMGEDITOR_API UScriptStruct* StaticStruct<FNavigationSimulationArguments>()
{
	return FNavigationSimulationArguments::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NavigationGenesis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigationGenesis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NavigationGenesis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UINavigation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UINavigation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UINavigation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideUINavigation_MetaData[];
#endif
		static void NewProp_bOverrideUINavigation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideUINavigation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPreview_MetaData[];
#endif
		static void NewProp_bShowPreview_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPreview;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Navigation/SWidgetDesignerNavigation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavigationSimulationArguments>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_UserIndex_MetaData[] = {
		{ "Category", "Simulation Options" },
		{ "ModuleRelativePath", "Private/Navigation/SWidgetDesignerNavigation.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationSimulationArguments, UserIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_UserIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_NavigationGenesis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_NavigationGenesis_MetaData[] = {
		{ "Category", "Simulation Options" },
		{ "ModuleRelativePath", "Private/Navigation/SWidgetDesignerNavigation.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_NavigationGenesis = { "NavigationGenesis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationSimulationArguments, NavigationGenesis), Z_Construct_UEnum_SlateCore_ENavigationGenesis, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_NavigationGenesis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_NavigationGenesis_MetaData)) }; // 3096906662
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_UINavigation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_UINavigation_MetaData[] = {
		{ "Category", "Simulation Options" },
		{ "EditCondition", "bOverrideUINavigation" },
		{ "ModuleRelativePath", "Private/Navigation/SWidgetDesignerNavigation.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_UINavigation = { "UINavigation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNavigationSimulationArguments, UINavigation), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_UINavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_UINavigation_MetaData)) }; // 637548137
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_bOverrideUINavigation_MetaData[] = {
		{ "Category", "Simulation" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Private/Navigation/SWidgetDesignerNavigation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_bOverrideUINavigation_SetBit(void* Obj)
	{
		((FNavigationSimulationArguments*)Obj)->bOverrideUINavigation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_bOverrideUINavigation = { "bOverrideUINavigation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNavigationSimulationArguments), &Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_bOverrideUINavigation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_bOverrideUINavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_bOverrideUINavigation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_bShowPreview_MetaData[] = {
		{ "Category", "Display" },
		{ "ModuleRelativePath", "Private/Navigation/SWidgetDesignerNavigation.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_bShowPreview_SetBit(void* Obj)
	{
		((FNavigationSimulationArguments*)Obj)->bShowPreview = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_bShowPreview = { "bShowPreview", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNavigationSimulationArguments), &Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_bShowPreview_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_bShowPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_bShowPreview_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_UserIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_NavigationGenesis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_NavigationGenesis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_UINavigation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_UINavigation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_bOverrideUINavigation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewProp_bShowPreview,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMGEditor,
		nullptr,
		&NewStructOps,
		"NavigationSimulationArguments",
		sizeof(FNavigationSimulationArguments),
		alignof(FNavigationSimulationArguments),
		Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavigationSimulationArguments()
	{
		if (!Z_Registration_Info_UScriptStruct_NavigationSimulationArguments.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavigationSimulationArguments.InnerSingleton, Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NavigationSimulationArguments.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Navigation_SWidgetDesignerNavigation_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Navigation_SWidgetDesignerNavigation_h_Statics::ScriptStructInfo[] = {
		{ FNavigationSimulationArguments::StaticStruct, Z_Construct_UScriptStruct_FNavigationSimulationArguments_Statics::NewStructOps, TEXT("NavigationSimulationArguments"), &Z_Registration_Info_UScriptStruct_NavigationSimulationArguments, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavigationSimulationArguments), 805409497U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Navigation_SWidgetDesignerNavigation_h_332494978(TEXT("/Script/UMGEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Navigation_SWidgetDesignerNavigation_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UMGEditor_Private_Navigation_SWidgetDesignerNavigation_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
