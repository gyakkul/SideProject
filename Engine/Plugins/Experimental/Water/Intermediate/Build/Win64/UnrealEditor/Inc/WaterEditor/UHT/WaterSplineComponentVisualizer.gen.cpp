// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/WaterSplineComponentVisualizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaterSplineComponentVisualizer() {}
// Cross Module References
	COMPONENTVISUALIZERS_API UClass* Z_Construct_UClass_USplineComponentVisualizerSelectionState();
	UPackage* Z_Construct_UPackage__Script_WaterEditor();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState();
	WATEREDITOR_API UClass* Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_NoRegister();
// End Cross Module References
	void UWaterSplineComponentVisualizerSelectionState::StaticRegisterNativesUWaterSplineComponentVisualizerSelectionState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaterSplineComponentVisualizerSelectionState);
	UClass* Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_NoRegister()
	{
		return UWaterSplineComponentVisualizerSelectionState::StaticClass();
	}
	struct Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWaterVelocityIsSelected_MetaData[];
#endif
		static void NewProp_bWaterVelocityIsSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaterVelocityIsSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDepthIsSelected_MetaData[];
#endif
		static void NewProp_bDepthIsSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDepthIsSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRiverWidthIsSelected_MetaData[];
#endif
		static void NewProp_bRiverWidthIsSelected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRiverWidthIsSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRiverWidthSelectedPosHandle_MetaData[];
#endif
		static void NewProp_bRiverWidthSelectedPosHandle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRiverWidthSelectedPosHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineComponentVisualizerSelectionState,
		(UObject* (*)())Z_Construct_UPackage__Script_WaterEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Selection state data that will be captured by scoped transactions.*/" },
		{ "IncludePath", "WaterSplineComponentVisualizer.h" },
		{ "ModuleRelativePath", "Private/WaterSplineComponentVisualizer.h" },
		{ "ToolTip", "Selection state data that will be captured by scoped transactions." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bWaterVelocityIsSelected_MetaData[] = {
		{ "Comment", "/** Whether water velocity handle is selected */" },
		{ "ModuleRelativePath", "Private/WaterSplineComponentVisualizer.h" },
		{ "ToolTip", "Whether water velocity handle is selected" },
	};
#endif
	void Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bWaterVelocityIsSelected_SetBit(void* Obj)
	{
		((UWaterSplineComponentVisualizerSelectionState*)Obj)->bWaterVelocityIsSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bWaterVelocityIsSelected = { "bWaterVelocityIsSelected", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterSplineComponentVisualizerSelectionState), &Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bWaterVelocityIsSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bWaterVelocityIsSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bWaterVelocityIsSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bDepthIsSelected_MetaData[] = {
		{ "Comment", "/** Whether water depth handle is selected */" },
		{ "ModuleRelativePath", "Private/WaterSplineComponentVisualizer.h" },
		{ "ToolTip", "Whether water depth handle is selected" },
	};
#endif
	void Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bDepthIsSelected_SetBit(void* Obj)
	{
		((UWaterSplineComponentVisualizerSelectionState*)Obj)->bDepthIsSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bDepthIsSelected = { "bDepthIsSelected", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterSplineComponentVisualizerSelectionState), &Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bDepthIsSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bDepthIsSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bDepthIsSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bRiverWidthIsSelected_MetaData[] = {
		{ "Comment", "/** Whether water river width handle is selected */" },
		{ "ModuleRelativePath", "Private/WaterSplineComponentVisualizer.h" },
		{ "ToolTip", "Whether water river width handle is selected" },
	};
#endif
	void Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bRiverWidthIsSelected_SetBit(void* Obj)
	{
		((UWaterSplineComponentVisualizerSelectionState*)Obj)->bRiverWidthIsSelected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bRiverWidthIsSelected = { "bRiverWidthIsSelected", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterSplineComponentVisualizerSelectionState), &Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bRiverWidthIsSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bRiverWidthIsSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bRiverWidthIsSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bRiverWidthSelectedPosHandle_MetaData[] = {
		{ "Comment", "/** When river width is selected, true if the handle on the positive right vector side was selected */" },
		{ "ModuleRelativePath", "Private/WaterSplineComponentVisualizer.h" },
		{ "ToolTip", "When river width is selected, true if the handle on the positive right vector side was selected" },
	};
#endif
	void Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bRiverWidthSelectedPosHandle_SetBit(void* Obj)
	{
		((UWaterSplineComponentVisualizerSelectionState*)Obj)->bRiverWidthSelectedPosHandle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bRiverWidthSelectedPosHandle = { "bRiverWidthSelectedPosHandle", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UWaterSplineComponentVisualizerSelectionState), &Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bRiverWidthSelectedPosHandle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bRiverWidthSelectedPosHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bRiverWidthSelectedPosHandle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bWaterVelocityIsSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bDepthIsSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bRiverWidthIsSelected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::NewProp_bRiverWidthSelectedPosHandle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaterSplineComponentVisualizerSelectionState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::ClassParams = {
		&UWaterSplineComponentVisualizerSelectionState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState()
	{
		if (!Z_Registration_Info_UClass_UWaterSplineComponentVisualizerSelectionState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaterSplineComponentVisualizerSelectionState.OuterSingleton, Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaterSplineComponentVisualizerSelectionState.OuterSingleton;
	}
	template<> WATEREDITOR_API UClass* StaticClass<UWaterSplineComponentVisualizerSelectionState>()
	{
		return UWaterSplineComponentVisualizerSelectionState::StaticClass();
	}
	UWaterSplineComponentVisualizerSelectionState::UWaterSplineComponentVisualizerSelectionState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaterSplineComponentVisualizerSelectionState);
	UWaterSplineComponentVisualizerSelectionState::~UWaterSplineComponentVisualizerSelectionState() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterSplineComponentVisualizer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterSplineComponentVisualizer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaterSplineComponentVisualizerSelectionState, UWaterSplineComponentVisualizerSelectionState::StaticClass, TEXT("UWaterSplineComponentVisualizerSelectionState"), &Z_Registration_Info_UClass_UWaterSplineComponentVisualizerSelectionState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaterSplineComponentVisualizerSelectionState), 3119996499U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterSplineComponentVisualizer_h_2891876391(TEXT("/Script/WaterEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterSplineComponentVisualizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Water_Source_Editor_Private_WaterSplineComponentVisualizer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
