// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXFixtureTypeSharedDataSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXFixtureTypeSharedDataSelection() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection();
	DMXEDITOR_API UClass* Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntityFixtureType_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXEditor();
// End Cross Module References
	void UDMXFixtureTypeSharedDataSelection::StaticRegisterNativesUDMXFixtureTypeSharedDataSelection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXFixtureTypeSharedDataSelection);
	UClass* Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_NoRegister()
	{
		return UDMXFixtureTypeSharedDataSelection::StaticClass();
	}
	struct Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SelectedFixtureTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedFixtureTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedFixtureTypes;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedModeIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedModeIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedModeIndices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SelectedFunctionIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedFunctionIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedFunctionIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFixtureMatrixSelected_MetaData[];
#endif
		static void NewProp_bFixtureMatrixSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixtureMatrixSelected;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** An Array of Fixture Types that supports a transaction history resp. undo / redo */" },
		{ "IncludePath", "DMXFixtureTypeSharedDataSelection.h" },
		{ "ModuleRelativePath", "Public/DMXFixtureTypeSharedDataSelection.h" },
		{ "ToolTip", "An Array of Fixture Types that supports a transaction history resp. undo / redo" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedFixtureTypes_Inner = { "SelectedFixtureTypes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXEntityFixtureType_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedFixtureTypes_MetaData[] = {
		{ "Comment", "/** The Fixture types being edited */" },
		{ "ModuleRelativePath", "Public/DMXFixtureTypeSharedDataSelection.h" },
		{ "ToolTip", "The Fixture types being edited" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedFixtureTypes = { "SelectedFixtureTypes", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXFixtureTypeSharedDataSelection, SelectedFixtureTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedFixtureTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedFixtureTypes_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedModeIndices_Inner = { "SelectedModeIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedModeIndices_MetaData[] = {
		{ "Comment", "/** The Mode indices in the Selected Fixture Types currently being selected */" },
		{ "ModuleRelativePath", "Public/DMXFixtureTypeSharedDataSelection.h" },
		{ "ToolTip", "The Mode indices in the Selected Fixture Types currently being selected" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedModeIndices = { "SelectedModeIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXFixtureTypeSharedDataSelection, SelectedModeIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedModeIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedModeIndices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedFunctionIndices_Inner = { "SelectedFunctionIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedFunctionIndices_MetaData[] = {
		{ "Comment", "/** The Function indices in the Selected Fixture Types currently being selected  */" },
		{ "ModuleRelativePath", "Public/DMXFixtureTypeSharedDataSelection.h" },
		{ "ToolTip", "The Function indices in the Selected Fixture Types currently being selected" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedFunctionIndices = { "SelectedFunctionIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXFixtureTypeSharedDataSelection, SelectedFunctionIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedFunctionIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedFunctionIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_bFixtureMatrixSelected_MetaData[] = {
		{ "Comment", "/** If true the Fixture Matrices in the currently seleccted Modes are selected */" },
		{ "ModuleRelativePath", "Public/DMXFixtureTypeSharedDataSelection.h" },
		{ "ToolTip", "If true the Fixture Matrices in the currently seleccted Modes are selected" },
	};
#endif
	void Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_bFixtureMatrixSelected_SetBit(void* Obj)
	{
		((UDMXFixtureTypeSharedDataSelection*)Obj)->bFixtureMatrixSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_bFixtureMatrixSelected = { "bFixtureMatrixSelected", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXFixtureTypeSharedDataSelection), &Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_bFixtureMatrixSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_bFixtureMatrixSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_bFixtureMatrixSelected_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedFixtureTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedFixtureTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedModeIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedModeIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedFunctionIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_SelectedFunctionIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::NewProp_bFixtureMatrixSelected,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXFixtureTypeSharedDataSelection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::ClassParams = {
		&UDMXFixtureTypeSharedDataSelection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection()
	{
		if (!Z_Registration_Info_UClass_UDMXFixtureTypeSharedDataSelection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXFixtureTypeSharedDataSelection.OuterSingleton, Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXFixtureTypeSharedDataSelection.OuterSingleton;
	}
	template<> DMXEDITOR_API UClass* StaticClass<UDMXFixtureTypeSharedDataSelection>()
	{
		return UDMXFixtureTypeSharedDataSelection::StaticClass();
	}
	UDMXFixtureTypeSharedDataSelection::UDMXFixtureTypeSharedDataSelection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXFixtureTypeSharedDataSelection);
	UDMXFixtureTypeSharedDataSelection::~UDMXFixtureTypeSharedDataSelection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXFixtureTypeSharedDataSelection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXFixtureTypeSharedDataSelection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXFixtureTypeSharedDataSelection, UDMXFixtureTypeSharedDataSelection::StaticClass, TEXT("UDMXFixtureTypeSharedDataSelection"), &Z_Registration_Info_UClass_UDMXFixtureTypeSharedDataSelection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXFixtureTypeSharedDataSelection), 3851381553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXFixtureTypeSharedDataSelection_h_3099915417(TEXT("/Script/DMXEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXFixtureTypeSharedDataSelection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXEditor_Public_DMXFixtureTypeSharedDataSelection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
