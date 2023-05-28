// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Game/EngineClasses/Scene/DisplayClusterLabelWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplayClusterLabelWidget() {}
// Cross Module References
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterLabelWidget();
	DISPLAYCLUSTER_API UClass* Z_Construct_UClass_UDisplayClusterLabelWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DisplayCluster();
// End Cross Module References
	struct DisplayClusterLabelWidget_eventSetLabelText_Parms
	{
		FText InText;
	};
	static FName NAME_UDisplayClusterLabelWidget_SetLabelText = FName(TEXT("SetLabelText"));
	void UDisplayClusterLabelWidget::SetLabelText(FText const& InText)
	{
		DisplayClusterLabelWidget_eventSetLabelText_Parms Parms;
		Parms.InText=InText;
		ProcessEvent(FindFunctionChecked(NAME_UDisplayClusterLabelWidget_SetLabelText),&Parms);
	}
	void UDisplayClusterLabelWidget::StaticRegisterNativesUDisplayClusterLabelWidget()
	{
	}
	struct Z_Construct_UFunction_UDisplayClusterLabelWidget_SetLabelText_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterLabelWidget_SetLabelText_Statics::NewProp_InText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UDisplayClusterLabelWidget_SetLabelText_Statics::NewProp_InText = { "InText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DisplayClusterLabelWidget_eventSetLabelText_Parms, InText), METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterLabelWidget_SetLabelText_Statics::NewProp_InText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterLabelWidget_SetLabelText_Statics::NewProp_InText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplayClusterLabelWidget_SetLabelText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplayClusterLabelWidget_SetLabelText_Statics::NewProp_InText,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDisplayClusterLabelWidget_SetLabelText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Label" },
		{ "ModuleRelativePath", "Private/Game/EngineClasses/Scene/DisplayClusterLabelWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplayClusterLabelWidget_SetLabelText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplayClusterLabelWidget, nullptr, "SetLabelText", nullptr, nullptr, sizeof(DisplayClusterLabelWidget_eventSetLabelText_Parms), Z_Construct_UFunction_UDisplayClusterLabelWidget_SetLabelText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterLabelWidget_SetLabelText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDisplayClusterLabelWidget_SetLabelText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplayClusterLabelWidget_SetLabelText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDisplayClusterLabelWidget_SetLabelText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplayClusterLabelWidget_SetLabelText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplayClusterLabelWidget);
	UClass* Z_Construct_UClass_UDisplayClusterLabelWidget_NoRegister()
	{
		return UDisplayClusterLabelWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDisplayClusterLabelWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisplayClusterLabelWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayCluster,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDisplayClusterLabelWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisplayClusterLabelWidget_SetLabelText, "SetLabelText" }, // 586949799
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisplayClusterLabelWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A base widget to display on actor labels.\n */" },
		{ "IncludePath", "Game/EngineClasses/Scene/DisplayClusterLabelWidget.h" },
		{ "ModuleRelativePath", "Private/Game/EngineClasses/Scene/DisplayClusterLabelWidget.h" },
		{ "ToolTip", "A base widget to display on actor labels." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisplayClusterLabelWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplayClusterLabelWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplayClusterLabelWidget_Statics::ClassParams = {
		&UDisplayClusterLabelWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDisplayClusterLabelWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisplayClusterLabelWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisplayClusterLabelWidget()
	{
		if (!Z_Registration_Info_UClass_UDisplayClusterLabelWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplayClusterLabelWidget.OuterSingleton, Z_Construct_UClass_UDisplayClusterLabelWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisplayClusterLabelWidget.OuterSingleton;
	}
	template<> DISPLAYCLUSTER_API UClass* StaticClass<UDisplayClusterLabelWidget>()
	{
		return UDisplayClusterLabelWidget::StaticClass();
	}
	UDisplayClusterLabelWidget::UDisplayClusterLabelWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplayClusterLabelWidget);
	UDisplayClusterLabelWidget::~UDisplayClusterLabelWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Game_EngineClasses_Scene_DisplayClusterLabelWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Game_EngineClasses_Scene_DisplayClusterLabelWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisplayClusterLabelWidget, UDisplayClusterLabelWidget::StaticClass, TEXT("UDisplayClusterLabelWidget"), &Z_Registration_Info_UClass_UDisplayClusterLabelWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplayClusterLabelWidget), 3224269037U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Game_EngineClasses_Scene_DisplayClusterLabelWidget_h_1137387343(TEXT("/Script/DisplayCluster"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Game_EngineClasses_Scene_DisplayClusterLabelWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayCluster_Private_Game_EngineClasses_Scene_DisplayClusterLabelWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
