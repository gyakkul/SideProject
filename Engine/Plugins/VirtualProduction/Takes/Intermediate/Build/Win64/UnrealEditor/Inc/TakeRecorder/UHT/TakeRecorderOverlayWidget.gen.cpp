// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeRecorderOverlayWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderOverlayWidget() {}
// Cross Module References
	TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorder_NoRegister();
	TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorderOverlayWidget();
	TAKERECORDER_API UClass* Z_Construct_UClass_UTakeRecorderOverlayWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TakeRecorder();
// End Cross Module References
	void UTakeRecorderOverlayWidget::StaticRegisterNativesUTakeRecorderOverlayWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTakeRecorderOverlayWidget);
	UClass* Z_Construct_UClass_UTakeRecorderOverlayWidget_NoRegister()
	{
		return UTakeRecorderOverlayWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTakeRecorderOverlayWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Recorder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Recorder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTakeRecorderOverlayWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TakeRecorder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderOverlayWidget_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TakeRecorderOverlayWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TakeRecorderOverlayWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTakeRecorderOverlayWidget_Statics::NewProp_Recorder_MetaData[] = {
		{ "Category", "Take Recorder" },
		{ "Comment", "/** The recorder that this overlay is reflecting */" },
		{ "ModuleRelativePath", "Public/TakeRecorderOverlayWidget.h" },
		{ "ToolTip", "The recorder that this overlay is reflecting" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTakeRecorderOverlayWidget_Statics::NewProp_Recorder = { "Recorder", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTakeRecorderOverlayWidget, Recorder), Z_Construct_UClass_UTakeRecorder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderOverlayWidget_Statics::NewProp_Recorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderOverlayWidget_Statics::NewProp_Recorder_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTakeRecorderOverlayWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTakeRecorderOverlayWidget_Statics::NewProp_Recorder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTakeRecorderOverlayWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTakeRecorderOverlayWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTakeRecorderOverlayWidget_Statics::ClassParams = {
		&UTakeRecorderOverlayWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTakeRecorderOverlayWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderOverlayWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTakeRecorderOverlayWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTakeRecorderOverlayWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTakeRecorderOverlayWidget()
	{
		if (!Z_Registration_Info_UClass_UTakeRecorderOverlayWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTakeRecorderOverlayWidget.OuterSingleton, Z_Construct_UClass_UTakeRecorderOverlayWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTakeRecorderOverlayWidget.OuterSingleton;
	}
	template<> TAKERECORDER_API UClass* StaticClass<UTakeRecorderOverlayWidget>()
	{
		return UTakeRecorderOverlayWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTakeRecorderOverlayWidget);
	UTakeRecorderOverlayWidget::~UTakeRecorderOverlayWidget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderOverlayWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderOverlayWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTakeRecorderOverlayWidget, UTakeRecorderOverlayWidget::StaticClass, TEXT("UTakeRecorderOverlayWidget"), &Z_Registration_Info_UClass_UTakeRecorderOverlayWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTakeRecorderOverlayWidget), 2848377894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderOverlayWidget_h_546148199(TEXT("/Script/TakeRecorder"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderOverlayWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakeRecorder_Public_TakeRecorderOverlayWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
