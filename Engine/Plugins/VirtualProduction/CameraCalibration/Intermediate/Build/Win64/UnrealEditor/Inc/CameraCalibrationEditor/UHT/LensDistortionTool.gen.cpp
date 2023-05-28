// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetEditor/LensDistortionTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLensDistortionTool() {}
// Cross Module References
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraCalibrationStep();
	CAMERACALIBRATIONCORE_API UClass* Z_Construct_UClass_UCameraLensDistortionAlgo_NoRegister();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_ULensDistortionTool();
	CAMERACALIBRATIONEDITOR_API UClass* Z_Construct_UClass_ULensDistortionTool_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CameraCalibrationEditor();
// End Cross Module References
	void ULensDistortionTool::StaticRegisterNativesULensDistortionTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULensDistortionTool);
	UClass* Z_Construct_UClass_ULensDistortionTool_NoRegister()
	{
		return ULensDistortionTool::StaticClass();
	}
	struct Z_Construct_UClass_ULensDistortionTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAlgo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CurrentAlgo;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AlgosMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AlgosMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlgosMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AlgosMap;
		static const UECodeGen_Private::FClassPropertyParams NewProp_SupportedAlgosMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SupportedAlgosMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedAlgosMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SupportedAlgosMap;
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
	UObject* (*const Z_Construct_UClass_ULensDistortionTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraCalibrationStep,
		(UObject* (*)())Z_Construct_UPackage__Script_CameraCalibrationEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensDistortionTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ULensDistortionTool is the controller for the lens distortion panel.\n */" },
		{ "IncludePath", "AssetEditor/LensDistortionTool.h" },
		{ "ModuleRelativePath", "Private/AssetEditor/LensDistortionTool.h" },
		{ "ToolTip", "ULensDistortionTool is the controller for the lens distortion panel." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_CurrentAlgo_MetaData[] = {
		{ "Comment", "/** The currently selected algorithm */" },
		{ "ModuleRelativePath", "Private/AssetEditor/LensDistortionTool.h" },
		{ "ToolTip", "The currently selected algorithm" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_CurrentAlgo = { "CurrentAlgo", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensDistortionTool, CurrentAlgo), Z_Construct_UClass_UCameraLensDistortionAlgo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_CurrentAlgo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_CurrentAlgo_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_AlgosMap_ValueProp = { "AlgosMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraLensDistortionAlgo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_AlgosMap_Key_KeyProp = { "AlgosMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_AlgosMap_MetaData[] = {
		{ "Comment", "/** Holds the registered camera lens distortion algos */" },
		{ "ModuleRelativePath", "Private/AssetEditor/LensDistortionTool.h" },
		{ "ToolTip", "Holds the registered camera lens distortion algos" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_AlgosMap = { "AlgosMap", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensDistortionTool, AlgosMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_AlgosMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_AlgosMap_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_SupportedAlgosMap_ValueProp = { "SupportedAlgosMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraLensDistortionAlgo_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_SupportedAlgosMap_Key_KeyProp = { "SupportedAlgosMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_SupportedAlgosMap_MetaData[] = {
		{ "Comment", "/** Holds a subset of the registered algos that support the current Lens Model */" },
		{ "ModuleRelativePath", "Private/AssetEditor/LensDistortionTool.h" },
		{ "ToolTip", "Holds a subset of the registered algos that support the current Lens Model" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_SupportedAlgosMap = { "SupportedAlgosMap", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensDistortionTool, SupportedAlgosMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_SupportedAlgosMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_SupportedAlgosMap_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_AlgoOverlayMIDs_ValueProp = { "AlgoOverlayMIDs", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_AlgoOverlayMIDs_Key_KeyProp = { "AlgoOverlayMIDs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_AlgoOverlayMIDs_MetaData[] = {
		{ "Comment", "/** Map of algo names to overlay MIDs used by those algos */" },
		{ "ModuleRelativePath", "Private/AssetEditor/LensDistortionTool.h" },
		{ "ToolTip", "Map of algo names to overlay MIDs used by those algos" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_AlgoOverlayMIDs = { "AlgoOverlayMIDs", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULensDistortionTool, AlgoOverlayMIDs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_AlgoOverlayMIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_AlgoOverlayMIDs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULensDistortionTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_CurrentAlgo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_AlgosMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_AlgosMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_AlgosMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_SupportedAlgosMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_SupportedAlgosMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_SupportedAlgosMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_AlgoOverlayMIDs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_AlgoOverlayMIDs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULensDistortionTool_Statics::NewProp_AlgoOverlayMIDs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULensDistortionTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULensDistortionTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULensDistortionTool_Statics::ClassParams = {
		&ULensDistortionTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULensDistortionTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionTool_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULensDistortionTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULensDistortionTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULensDistortionTool()
	{
		if (!Z_Registration_Info_UClass_ULensDistortionTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULensDistortionTool.OuterSingleton, Z_Construct_UClass_ULensDistortionTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULensDistortionTool.OuterSingleton;
	}
	template<> CAMERACALIBRATIONEDITOR_API UClass* StaticClass<ULensDistortionTool>()
	{
		return ULensDistortionTool::StaticClass();
	}
	ULensDistortionTool::ULensDistortionTool(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULensDistortionTool);
	ULensDistortionTool::~ULensDistortionTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensDistortionTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensDistortionTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULensDistortionTool, ULensDistortionTool::StaticClass, TEXT("ULensDistortionTool"), &Z_Registration_Info_UClass_ULensDistortionTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULensDistortionTool), 3106490299U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensDistortionTool_h_3882509765(TEXT("/Script/CameraCalibrationEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensDistortionTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_CameraCalibration_Source_CameraCalibrationEditor_Private_AssetEditor_LensDistortionTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
