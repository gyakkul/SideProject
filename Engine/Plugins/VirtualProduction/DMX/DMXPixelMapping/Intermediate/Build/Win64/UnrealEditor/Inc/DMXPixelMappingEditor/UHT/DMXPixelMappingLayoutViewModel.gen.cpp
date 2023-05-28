// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../DMXPixelMappingEditor/Private/ViewModels/DMXPixelMappingLayoutViewModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingLayoutViewModel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXPIXELMAPPINGEDITOR_API UClass* Z_Construct_UClass_UDMXPixelMappingLayoutViewModel();
	DMXPIXELMAPPINGEDITOR_API UClass* Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingLayoutScript_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingMatrixComponent_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingRendererComponent_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingScreenComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingEditor();
// End Cross Module References
	void UDMXPixelMappingLayoutViewModel::StaticRegisterNativesUDMXPixelMappingLayoutViewModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingLayoutViewModel);
	UClass* Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_NoRegister()
	{
		return UDMXPixelMappingLayoutViewModel::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererComponent_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_RendererComponent;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ScreenComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScreenComponents;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_FixtureGroupComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixtureGroupComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FixtureGroupComponents;
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_MatrixComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatrixComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MatrixComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayoutScriptClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_LayoutScriptClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Model for the Layout View */" },
		{ "IncludePath", "ViewModels/DMXPixelMappingLayoutViewModel.h" },
		{ "ModuleRelativePath", "Private/ViewModels/DMXPixelMappingLayoutViewModel.h" },
		{ "ToolTip", "Model for the Layout View" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_RendererComponent_MetaData[] = {
		{ "Comment", "/** The Renderer Component currently in use */" },
		{ "ModuleRelativePath", "Private/ViewModels/DMXPixelMappingLayoutViewModel.h" },
		{ "ToolTip", "The Renderer Component currently in use" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_RendererComponent = { "RendererComponent", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingLayoutViewModel, RendererComponent), Z_Construct_UClass_UDMXPixelMappingRendererComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_RendererComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_RendererComponent_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_ScreenComponents_Inner = { "ScreenComponents", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXPixelMappingScreenComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_ScreenComponents_MetaData[] = {
		{ "Comment", "/** The Screen Components currently in use */" },
		{ "ModuleRelativePath", "Private/ViewModels/DMXPixelMappingLayoutViewModel.h" },
		{ "ToolTip", "The Screen Components currently in use" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_ScreenComponents = { "ScreenComponents", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingLayoutViewModel, ScreenComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_ScreenComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_ScreenComponents_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_FixtureGroupComponents_Inner = { "FixtureGroupComponents", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXPixelMappingFixtureGroupComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_FixtureGroupComponents_MetaData[] = {
		{ "Comment", "/** The Fixture Group Components currently in use */" },
		{ "ModuleRelativePath", "Private/ViewModels/DMXPixelMappingLayoutViewModel.h" },
		{ "ToolTip", "The Fixture Group Components currently in use" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_FixtureGroupComponents = { "FixtureGroupComponents", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingLayoutViewModel, FixtureGroupComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_FixtureGroupComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_FixtureGroupComponents_MetaData)) };
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_MatrixComponents_Inner = { "MatrixComponents", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXPixelMappingMatrixComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_MatrixComponents_MetaData[] = {
		{ "Comment", "/** The Matrix Components currently in use */" },
		{ "ModuleRelativePath", "Private/ViewModels/DMXPixelMappingLayoutViewModel.h" },
		{ "ToolTip", "The Matrix Components currently in use" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_MatrixComponents = { "MatrixComponents", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingLayoutViewModel, MatrixComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_MatrixComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_MatrixComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_LayoutScriptClass_MetaData[] = {
		{ "Category", "Layout Script" },
		{ "Comment", "/** The Layout Script class currently in use */" },
		{ "ModuleRelativePath", "Private/ViewModels/DMXPixelMappingLayoutViewModel.h" },
		{ "ShowDisplayNames", "" },
		{ "ToolTip", "The Layout Script class currently in use" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_LayoutScriptClass = { "LayoutScriptClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMappingLayoutViewModel, LayoutScriptClass), Z_Construct_UClass_UDMXPixelMappingLayoutScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_LayoutScriptClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_LayoutScriptClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_RendererComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_ScreenComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_ScreenComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_FixtureGroupComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_FixtureGroupComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_MatrixComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_MatrixComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::NewProp_LayoutScriptClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingLayoutViewModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::ClassParams = {
		&UDMXPixelMappingLayoutViewModel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXPixelMappingLayoutViewModel()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingLayoutViewModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingLayoutViewModel.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingLayoutViewModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingLayoutViewModel.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGEDITOR_API UClass* StaticClass<UDMXPixelMappingLayoutViewModel>()
	{
		return UDMXPixelMappingLayoutViewModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingLayoutViewModel);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_ViewModels_DMXPixelMappingLayoutViewModel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_ViewModels_DMXPixelMappingLayoutViewModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingLayoutViewModel, UDMXPixelMappingLayoutViewModel::StaticClass, TEXT("UDMXPixelMappingLayoutViewModel"), &Z_Registration_Info_UClass_UDMXPixelMappingLayoutViewModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingLayoutViewModel), 717826616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_ViewModels_DMXPixelMappingLayoutViewModel_h_2881362774(TEXT("/Script/DMXPixelMappingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_ViewModels_DMXPixelMappingLayoutViewModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingEditor_Private_ViewModels_DMXPixelMappingLayoutViewModel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
