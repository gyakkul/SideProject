// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVVMBlueprintView.h"
#include "MVVMBlueprintViewBinding.h"
#include "MVVMBlueprintViewModelContext.h"
#include "MVVMWidgetBlueprintExtension_View.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMBlueprintView() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMBlueprintView();
	MODELVIEWVIEWMODELBLUEPRINT_API UClass* Z_Construct_UClass_UMVVMBlueprintView_NoRegister();
	MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding();
	MODELVIEWVIEWMODELBLUEPRINT_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModelBlueprint();
// End Cross Module References
	void UMVVMBlueprintView::StaticRegisterNativesUMVVMBlueprintView()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMVVMBlueprintView);
	UClass* Z_Construct_UClass_UMVVMBlueprintView_NoRegister()
	{
		return UMVVMBlueprintView::StaticClass();
	}
	struct Z_Construct_UClass_UMVVMBlueprintView_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemporaryGraph_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemporaryGraph_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TemporaryGraph;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvailableViewModels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableViewModels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableViewModels;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMVVMBlueprintView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModelBlueprint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MVVMBlueprintView.h" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintView.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_TemporaryGraph_Inner = { "TemporaryGraph", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_TemporaryGraph_MetaData[] = {
		{ "Comment", "// Use during compilation to clean the automatically generated graph.\n" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintView.h" },
		{ "ToolTip", "Use during compilation to clean the automatically generated graph." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_TemporaryGraph = { "TemporaryGraph", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMBlueprintView, TemporaryGraph), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_TemporaryGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_TemporaryGraph_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMVVMBlueprintViewBinding, METADATA_PARAMS(nullptr, 0) }; // 3568819447
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_Bindings_MetaData[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintView.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMBlueprintView, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_Bindings_MetaData)) }; // 3568819447
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_AvailableViewModels_Inner = { "AvailableViewModels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMVVMBlueprintViewModelContext, METADATA_PARAMS(nullptr, 0) }; // 2742158702
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_AvailableViewModels_MetaData[] = {
		{ "Category", "MVVM" },
		{ "ModuleRelativePath", "Public/MVVMBlueprintView.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_AvailableViewModels = { "AvailableViewModels", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMVVMBlueprintView, AvailableViewModels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_AvailableViewModels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_AvailableViewModels_MetaData)) }; // 2742158702
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMVVMBlueprintView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_TemporaryGraph_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_TemporaryGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_AvailableViewModels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMVVMBlueprintView_Statics::NewProp_AvailableViewModels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMVVMBlueprintView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMVVMBlueprintView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMVVMBlueprintView_Statics::ClassParams = {
		&UMVVMBlueprintView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMVVMBlueprintView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintView_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMVVMBlueprintView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMVVMBlueprintView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMVVMBlueprintView()
	{
		if (!Z_Registration_Info_UClass_UMVVMBlueprintView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMVVMBlueprintView.OuterSingleton, Z_Construct_UClass_UMVVMBlueprintView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMVVMBlueprintView.OuterSingleton;
	}
	template<> MODELVIEWVIEWMODELBLUEPRINT_API UClass* StaticClass<UMVVMBlueprintView>()
	{
		return UMVVMBlueprintView::StaticClass();
	}
	UMVVMBlueprintView::UMVVMBlueprintView(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMVVMBlueprintView);
	UMVVMBlueprintView::~UMVVMBlueprintView() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMVVMBlueprintView, UMVVMBlueprintView::StaticClass, TEXT("UMVVMBlueprintView"), &Z_Registration_Info_UClass_UMVVMBlueprintView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMVVMBlueprintView), 3928078629U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintView_h_2233640616(TEXT("/Script/ModelViewViewModelBlueprint"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModelBlueprint_Public_MVVMBlueprintView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
