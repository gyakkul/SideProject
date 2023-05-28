// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/CanvasPanel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCanvasPanel() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UCanvasPanel::execAddChildToCanvas)
	{
		P_GET_OBJECT(UWidget,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCanvasPanelSlot**)Z_Param__Result=P_THIS->AddChildToCanvas(Z_Param_Content);
		P_NATIVE_END;
	}
	void UCanvasPanel::StaticRegisterNativesUCanvasPanel()
	{
		UClass* Class = UCanvasPanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildToCanvas", &UCanvasPanel::execAddChildToCanvas },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics
	{
		struct CanvasPanel_eventAddChildToCanvas_Parms
		{
			UWidget* Content;
			UCanvasPanelSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CanvasPanel_eventAddChildToCanvas_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CanvasPanel_eventAddChildToCanvas_Parms, ReturnValue), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Canvas Panel" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCanvasPanel, nullptr, "AddChildToCanvas", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::CanvasPanel_eventAddChildToCanvas_Parms), Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCanvasPanel);
	UClass* Z_Construct_UClass_UCanvasPanel_NoRegister()
	{
		return UCanvasPanel::StaticClass();
	}
	struct Z_Construct_UClass_UCanvasPanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCanvasPanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCanvasPanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCanvasPanel_AddChildToCanvas, "AddChildToCanvas" }, // 3345720851
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCanvasPanel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The canvas panel is a designer friendly panel that allows widgets to be laid out at arbitrary \n * locations, anchored and z-ordered with other children of the canvas.  The canvas is a great widget\n * for manual layout, but bad when you want to procedurally just generate widgets and place them in a \n * container (unless you want absolute layout).\n *\n * * Many Children\n * * Absolute Layout\n * * Anchors\n */" },
		{ "IncludePath", "Components/CanvasPanel.h" },
		{ "ModuleRelativePath", "Public/Components/CanvasPanel.h" },
		{ "ShortTooltip", "A designer-friendly panel useful for laying out top-level widgets. Use sparingly." },
		{ "ToolTip", "The canvas panel is a designer friendly panel that allows widgets to be laid out at arbitrary\nlocations, anchored and z-ordered with other children of the canvas.  The canvas is a great widget\nfor manual layout, but bad when you want to procedurally just generate widgets and place them in a\ncontainer (unless you want absolute layout).\n\n* Many Children\n* Absolute Layout\n* Anchors" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCanvasPanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCanvasPanel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCanvasPanel_Statics::ClassParams = {
		&UCanvasPanel::StaticClass,
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
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCanvasPanel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCanvasPanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCanvasPanel()
	{
		if (!Z_Registration_Info_UClass_UCanvasPanel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCanvasPanel.OuterSingleton, Z_Construct_UClass_UCanvasPanel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCanvasPanel.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UCanvasPanel>()
	{
		return UCanvasPanel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCanvasPanel);
	UCanvasPanel::~UCanvasPanel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCanvasPanel, UCanvasPanel::StaticClass, TEXT("UCanvasPanel"), &Z_Registration_Info_UClass_UCanvasPanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCanvasPanel), 1753199985U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_902601812(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_CanvasPanel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
