// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetEditor/NodalOffsetTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNodalOffsetTool() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraCalibrationStep();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraNodalOffsetAlgo_NoRegister();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UNodalOffsetTool();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_UNodalOffsetTool_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationEditor();
// End Cross Module References
	void UNodalOffsetTool::StaticRegisterNativesUNodalOffsetTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNodalOffsetTool);
	UClass* Z_Construct_UClass_UNodalOffsetTool_NoRegister()
	{
		return UNodalOffsetTool::StaticClass();
	}
	struct Z_Construct_UClass_UNodalOffsetTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodalOffsetAlgo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodalOffsetAlgo;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AlgoOverlayMIDs_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AlgoOverlayMIDs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlgoOverlayMIDs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AlgoOverlayMIDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNodalOffsetTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraCalibrationStep,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodalOffsetTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * FNodalOffsetTool is the controller for the nodal offset tool panel.\n * It has the logic to bridge user input like selection of nodal offset algorithm or CG camera\n * with the actions that follow. It houses convenience functions used to generate the data\n * of what is presented to the user, and holds pointers to the relevant objects and structures.\n */" },
		{ "IncludePath", "AssetEditor/NodalOffsetTool.h" },
		{ "ModuleRelativePath", "Private/AssetEditor/NodalOffsetTool.h" },
		{ "ToolTip", "FNodalOffsetTool is the controller for the nodal offset tool panel.\nIt has the logic to bridge user input like selection of nodal offset algorithm or CG camera\nwith the actions that follow. It houses convenience functions used to generate the data\nof what is presented to the user, and holds pointers to the relevant objects and structures." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodalOffsetTool_Statics::NewProp_NodalOffsetAlgo_MetaData[] = {
		{ "Comment", "/** The currently selected nodal offset algorithm */" },
		{ "ModuleRelativePath", "Private/AssetEditor/NodalOffsetTool.h" },
		{ "ToolTip", "The currently selected nodal offset algorithm" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNodalOffsetTool_Statics::NewProp_NodalOffsetAlgo = { "NodalOffsetAlgo", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNodalOffsetTool, NodalOffsetAlgo), Z_Construct_UClass_UCameraNodalOffsetAlgo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNodalOffsetTool_Statics::NewProp_NodalOffsetAlgo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodalOffsetTool_Statics::NewProp_NodalOffsetAlgo_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNodalOffsetTool_Statics::NewProp_AlgoOverlayMIDs_ValueProp = { "AlgoOverlayMIDs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNodalOffsetTool_Statics::NewProp_AlgoOverlayMIDs_Key_KeyProp = { "AlgoOverlayMIDs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNodalOffsetTool_Statics::NewProp_AlgoOverlayMIDs_MetaData[] = {
		{ "Comment", "/** Map of algo names to overlay MIDs used by those algos */" },
		{ "ModuleRelativePath", "Private/AssetEditor/NodalOffsetTool.h" },
		{ "ToolTip", "Map of algo names to overlay MIDs used by those algos" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNodalOffsetTool_Statics::NewProp_AlgoOverlayMIDs = { "AlgoOverlayMIDs", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNodalOffsetTool, AlgoOverlayMIDs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNodalOffsetTool_Statics::NewProp_AlgoOverlayMIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNodalOffsetTool_Statics::NewProp_AlgoOverlayMIDs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNodalOffsetTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodalOffsetTool_Statics::NewProp_NodalOffsetAlgo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodalOffsetTool_Statics::NewProp_AlgoOverlayMIDs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodalOffsetTool_Statics::NewProp_AlgoOverlayMIDs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodalOffsetTool_Statics::NewProp_AlgoOverlayMIDs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNodalOffsetTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNodalOffsetTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNodalOffsetTool_Statics::ClassParams = {
		&UNodalOffsetTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNodalOffsetTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNodalOffsetTool_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNodalOffsetTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNodalOffsetTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNodalOffsetTool()
	{
		if (!Z_Registration_Info_UClass_UNodalOffsetTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNodalOffsetTool.OuterSingleton, Z_Construct_UClass_UNodalOffsetTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNodalOffsetTool.OuterSingleton;
	}
	template<> CAMERACALIBRATIONEDITOR_API UClass* StaticClass<UNodalOffsetTool>()
	{
		return UNodalOffsetTool::StaticClass();
	}
	UNodalOffsetTool::UNodalOffsetTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNodalOffsetTool);
	UNodalOffsetTool::~UNodalOffsetTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_NodalOffsetTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_NodalOffsetTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNodalOffsetTool, UNodalOffsetTool::StaticClass, TEXT("UNodalOffsetTool"), &Z_Registration_Info_UClass_UNodalOffsetTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNodalOffsetTool), 774967493U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_NodalOffsetTool_h_3987260846(TEXT("/Script/CameraCalibrationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_NodalOffsetTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_NodalOffsetTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
