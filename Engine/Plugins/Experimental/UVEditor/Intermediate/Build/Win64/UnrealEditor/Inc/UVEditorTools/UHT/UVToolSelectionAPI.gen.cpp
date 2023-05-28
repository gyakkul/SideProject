// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Selection/UVToolSelectionAPI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVToolSelectionAPI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorMechanicAdapterTool_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorMeshSelectionMechanic_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolContextObject();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolEmitChangeAPI_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolSelectionAPI();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolSelectionAPI_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolSelectionHighlightMechanic_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolSupportsSelection();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolSupportsSelection_NoRegister();
// End Cross Module References
	void UUVToolSelectionAPI::StaticRegisterNativesUUVToolSelectionAPI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVToolSelectionAPI);
	UClass* Z_Construct_UClass_UUVToolSelectionAPI_NoRegister()
	{
		return UUVToolSelectionAPI::StaticClass();
	}
	struct Z_Construct_UClass_UUVToolSelectionAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MechanicAdapter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MechanicAdapter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HighlightMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HighlightMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionMechanic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SelectionMechanic;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitChangeAPI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmitChangeAPI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVToolSelectionAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUVToolContextObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolSelectionAPI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * API for dealing with mode-level selection in the UV editor.\n * \n * Selections are stored in a list of objects, one object per asset that contains a\n * selection, all of the same type (vert/edge/tri), none empty. Selections are\n * considered to be referring to the UnwrapCanonical mesh of the corresponding target.\n * \n * There are also functions to enable automatic highlighting of the current selection,\n * and to enable a selection mechanic in the viewport (to which tools can respond via\n * OnSelectionChanged broadcasts).\n */" },
		{ "IncludePath", "Selection/UVToolSelectionAPI.h" },
		{ "ModuleRelativePath", "Public/Selection/UVToolSelectionAPI.h" },
		{ "ToolTip", "API for dealing with mode-level selection in the UV editor.\n\nSelections are stored in a list of objects, one object per asset that contains a\nselection, all of the same type (vert/edge/tri), none empty. Selections are\nconsidered to be referring to the UnwrapCanonical mesh of the corresponding target.\n\nThere are also functions to enable automatic highlighting of the current selection,\nand to enable a selection mechanic in the viewport (to which tools can respond via\nOnSelectionChanged broadcasts)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_Targets_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/UVToolSelectionAPI.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVToolSelectionAPI, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_Targets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_MechanicAdapter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/UVToolSelectionAPI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_MechanicAdapter = { "MechanicAdapter", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVToolSelectionAPI, MechanicAdapter), Z_Construct_UClass_UUVEditorMechanicAdapterTool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_MechanicAdapter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_MechanicAdapter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_HighlightMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/UVToolSelectionAPI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_HighlightMechanic = { "HighlightMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVToolSelectionAPI, HighlightMechanic), Z_Construct_UClass_UUVToolSelectionHighlightMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_HighlightMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_HighlightMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_SelectionMechanic_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/UVToolSelectionAPI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_SelectionMechanic = { "SelectionMechanic", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVToolSelectionAPI, SelectionMechanic), Z_Construct_UClass_UUVEditorMeshSelectionMechanic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_SelectionMechanic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_SelectionMechanic_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_EmitChangeAPI_MetaData[] = {
		{ "ModuleRelativePath", "Public/Selection/UVToolSelectionAPI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_EmitChangeAPI = { "EmitChangeAPI", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVToolSelectionAPI, EmitChangeAPI), Z_Construct_UClass_UUVToolEmitChangeAPI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_EmitChangeAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_EmitChangeAPI_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVToolSelectionAPI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_MechanicAdapter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_HighlightMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_SelectionMechanic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVToolSelectionAPI_Statics::NewProp_EmitChangeAPI,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVToolSelectionAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVToolSelectionAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVToolSelectionAPI_Statics::ClassParams = {
		&UUVToolSelectionAPI::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVToolSelectionAPI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolSelectionAPI_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUVToolSelectionAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolSelectionAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVToolSelectionAPI()
	{
		if (!Z_Registration_Info_UClass_UUVToolSelectionAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVToolSelectionAPI.OuterSingleton, Z_Construct_UClass_UUVToolSelectionAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVToolSelectionAPI.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVToolSelectionAPI>()
	{
		return UUVToolSelectionAPI::StaticClass();
	}
	UUVToolSelectionAPI::UUVToolSelectionAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVToolSelectionAPI);
	UUVToolSelectionAPI::~UUVToolSelectionAPI() {}
	void UUVToolSupportsSelection::StaticRegisterNativesUUVToolSupportsSelection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVToolSupportsSelection);
	UClass* Z_Construct_UClass_UUVToolSupportsSelection_NoRegister()
	{
		return UUVToolSupportsSelection::StaticClass();
	}
	struct Z_Construct_UClass_UUVToolSupportsSelection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVToolSupportsSelection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVToolSupportsSelection_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Selection/UVToolSelectionAPI.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVToolSupportsSelection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUVToolSupportsSelection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVToolSupportsSelection_Statics::ClassParams = {
		&UUVToolSupportsSelection::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUVToolSupportsSelection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVToolSupportsSelection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVToolSupportsSelection()
	{
		if (!Z_Registration_Info_UClass_UUVToolSupportsSelection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVToolSupportsSelection.OuterSingleton, Z_Construct_UClass_UUVToolSupportsSelection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVToolSupportsSelection.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVToolSupportsSelection>()
	{
		return UUVToolSupportsSelection::StaticClass();
	}
	UUVToolSupportsSelection::UUVToolSupportsSelection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVToolSupportsSelection);
	UUVToolSupportsSelection::~UUVToolSupportsSelection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVToolSelectionAPI, UUVToolSelectionAPI::StaticClass, TEXT("UUVToolSelectionAPI"), &Z_Registration_Info_UClass_UUVToolSelectionAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVToolSelectionAPI), 3896245539U) },
		{ Z_Construct_UClass_UUVToolSupportsSelection, UUVToolSupportsSelection::StaticClass, TEXT("UUVToolSupportsSelection"), &Z_Registration_Info_UClass_UUVToolSupportsSelection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVToolSupportsSelection), 3987422184U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_1030561327(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Selection_UVToolSelectionAPI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
