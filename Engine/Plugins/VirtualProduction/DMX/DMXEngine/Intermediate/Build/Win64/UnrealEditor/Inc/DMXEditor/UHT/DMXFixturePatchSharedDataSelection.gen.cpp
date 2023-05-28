// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXFixturePatchSharedDataSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXFixturePatchSharedDataSelection() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXFixturePatchSharedDataSelection();
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXEditor();
// End Cross Module References
	void UDMXFixturePatchSharedDataSelection::StaticRegisterNativesUDMXFixturePatchSharedDataSelection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXFixturePatchSharedDataSelection);
	UClass* Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_NoRegister()
	{
		return UDMXFixturePatchSharedDataSelection::StaticClass();
	}
	struct Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SelectedFixturePatches_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedFixturePatches_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedFixturePatches;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedUniverse_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedUniverse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** An Array of Fixture Patches that supports a transaction history resp. undo / redo */" },
		{ "IncludePath", "DMXFixturePatchSharedDataSelection.h" },
		{ "ModuleRelativePath", "Public/DMXFixturePatchSharedDataSelection.h" },
		{ "ToolTip", "An Array of Fixture Patches that supports a transaction history resp. undo / redo" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::NewProp_SelectedFixturePatches_Inner = { "SelectedFixturePatches", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXEntityFixturePatch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::NewProp_SelectedFixturePatches_MetaData[] = {
		{ "Comment", "/** Selected Fixture Patches */" },
		{ "ModuleRelativePath", "Public/DMXFixturePatchSharedDataSelection.h" },
		{ "ToolTip", "Selected Fixture Patches" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::NewProp_SelectedFixturePatches = { "SelectedFixturePatches", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXFixturePatchSharedDataSelection, SelectedFixturePatches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::NewProp_SelectedFixturePatches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::NewProp_SelectedFixturePatches_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::NewProp_SelectedUniverse_MetaData[] = {
		{ "Comment", "/** Selected Universe */" },
		{ "ModuleRelativePath", "Public/DMXFixturePatchSharedDataSelection.h" },
		{ "ToolTip", "Selected Universe" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::NewProp_SelectedUniverse = { "SelectedUniverse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXFixturePatchSharedDataSelection, SelectedUniverse), METADATA_PARAMS(Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::NewProp_SelectedUniverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::NewProp_SelectedUniverse_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::NewProp_SelectedFixturePatches_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::NewProp_SelectedFixturePatches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::NewProp_SelectedUniverse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXFixturePatchSharedDataSelection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::ClassParams = {
		&UDMXFixturePatchSharedDataSelection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXFixturePatchSharedDataSelection()
	{
		if (!Z_Registration_Info_UClass_UDMXFixturePatchSharedDataSelection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXFixturePatchSharedDataSelection.OuterSingleton, Z_Construct_UClass_UDMXFixturePatchSharedDataSelection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXFixturePatchSharedDataSelection.OuterSingleton;
	}
	template<> DMXEDITOR_API UClass* StaticClass<UDMXFixturePatchSharedDataSelection>()
	{
		return UDMXFixturePatchSharedDataSelection::StaticClass();
	}
	UDMXFixturePatchSharedDataSelection::UDMXFixturePatchSharedDataSelection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXFixturePatchSharedDataSelection);
	UDMXFixturePatchSharedDataSelection::~UDMXFixturePatchSharedDataSelection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXFixturePatchSharedDataSelection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXFixturePatchSharedDataSelection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXFixturePatchSharedDataSelection, UDMXFixturePatchSharedDataSelection::StaticClass, TEXT("UDMXFixturePatchSharedDataSelection"), &Z_Registration_Info_UClass_UDMXFixturePatchSharedDataSelection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXFixturePatchSharedDataSelection), 1041209323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXFixturePatchSharedDataSelection_h_1731802765(TEXT("/Script/DMXEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXFixturePatchSharedDataSelection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXFixturePatchSharedDataSelection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
